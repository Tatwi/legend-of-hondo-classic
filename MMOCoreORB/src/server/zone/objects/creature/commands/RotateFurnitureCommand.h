/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef ROTATEFURNITURECOMMAND_H_
#define ROTATEFURNITURECOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"
#include "server/zone/objects/tangible/components/vendor/VendorDataComponent.h"
#include "server/zone/objects/tangible/components/EventPerkDataComponent.h"

class RotateFurnitureCommand : public QueueCommand {
public:

	RotateFurnitureCommand(const String& name, ZoneProcessServer* server)
		: QueueCommand(name, server) {

	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) const {
        if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidLocomotions(creature))
			return INVALIDLOCOMOTION;
        
        ZoneServer* zoneServer = creature->getZoneServer();
		ManagedReference<SceneObject*> obj = zoneServer->getObject(target);
        
        if (obj == NULL){
            creature->sendSystemMessage("Target required for /rotateFurniture command");
            return GENERALERROR;
        }
        
        ManagedReference<SceneObject*> objParent = obj->getParent().get(); // Should be a CellObject or NULL
        ManagedReference<PlayerObject*> ghost = creature->getPlayerObject();
        int adminLevelCheck = ghost->getAdminLevel(); // For highest level admin character exemptions to some rules.
        
        // Check Outside: Allow admin, allow any if city decor
        if (objParent == NULL && adminLevelCheck != 15 && !obj->isDecoration()){
            creature->sendSystemMessage("@player_structure:must_be_in_building"); //You must be in a building to do that.
            return GENERALERROR;
        }
            
        // Check Inside    
        if (objParent != NULL && objParent->isCellObject() && adminLevelCheck != 15){
            ManagedReference<SceneObject*> objParentParent = objParent->getParent().get();

            if (objParentParent->isBuildingObject()){
                ManagedReference<BuildingObject*> building = cast<BuildingObject*>( objParentParent.get());

                //Is this player on the permission list?
                if (!building->isOnAdminList(creature)){
                    creature->sendSystemMessage("@player_structure:must_be_admin"); //You must be a building admin to do that.
                    return GENERALERROR;
                }
            } else if (!objParentParent->isBuildingObject()){
                // Player is in a cell that is not inside a building
                creature->sendSystemMessage("@player_structure:must_be_admin"); //You must be a building admin to do that.
                return GENERALERROR;
            }
        }
        
        int degrees = 0;
        String dir;
        UnicodeTokenizer tokenizer(arguments);
        tokenizer.setDelimeter(" ");
        
        if (!tokenizer.hasMoreTokens()){
            creature->sendSystemMessage("Rotate Usage: /rotateFurniture <left/right/yaw/pitch/roll> NUMBER");
            return GENERALERROR;
        }
        
        tokenizer.getStringToken(dir);
        
        try {
            degrees = tokenizer.getIntToken();
        } catch (const Exception& e) {
            creature->sendSystemMessage("Usage Example: /rotateFurniture left 90");
            return GENERALERROR;
        }
       
        if ((dir != "left" && dir != "right" && dir != "yaw" && dir != "roll" && dir != "pitch" && dir != "reset" && dir != "yxx" && dir != "pxx" && dir != "rxx" && dir != "xresetx") || degrees == 0){
            creature->sendSystemMessage("Rotate Usage: /rotateFurniture <left/right/yaw/pitch/roll> NUMBER");
            creature->sendSystemMessage("Reset Usage: /rotateFurniture reset 1");
            creature->sendSystemMessage("Tip: If yaw, pitch, roll, or reset fail to work, you can use yxx, pxx, rxx, and xresetx instead.");
            return GENERALERROR;
        }

        // Setup rotation
        if (dir == "right"){
            obj->rotate(-degrees);
        }
        else if (dir == "left"){
            obj->rotate(degrees);
        }
        else if (dir == "yaw" || dir == "yxx"){
            obj->rotate(degrees);
        }
        else if (dir == "pitch" || dir == "pxx"){
            obj->rotateYaxis(degrees);
        }
        else if (dir == "roll" || dir == "rxx"){
            obj->rotateXaxis(degrees);
        }
        else if (dir == "reset" || dir == "xresetx"){
            obj->setDirection(1, 0, 0, 0);
        }
    
        // Apply rotation
        obj->incrementMovementCounter();

		if (obj->getParent() != NULL)
			obj->teleport(obj->getPositionX(), obj->getPositionZ(), obj->getPositionY(), obj->getParent().get()->getObjectID());
		else
			obj->teleport(obj->getPositionX(), obj->getPositionZ(), obj->getPositionY());
            
        return SUCCESS;
	} // END

};

#endif //ROTATEFURNITURECOMMAND_H_
