/*
 * ObjectMenuComponent.cpp
 *
 *  Created on: 26/05/2011
 *      Author: victor
 */

#include "ObjectMenuComponent.h"

#include "server/zone/objects/building/BuildingObject.h"
#include "server/zone/objects/creature/CreatureObject.h"
#include "server/zone/packets/object/ObjectMenuResponse.h"
#include "server/zone/templates/SharedObjectTemplate.h"
#include "server/zone/objects/player/PlayerObject.h"
#include "server/zone/ZoneServer.h"
#include "server/zone/ZoneProcessServer.h"
#include "server/zone/Zone.h"

void ObjectMenuComponent::fillObjectMenuResponse(SceneObject* sceneObject, ObjectMenuResponse* menuResponse, CreatureObject* player) {
	//All objects in a cell can be picked up, if the player is on the structures permission list.
	//This opens the door to allow admins to be able to drop/pickup items in public structures
	if (sceneObject == NULL)
		return;

	ManagedReference<SceneObject*> parent = sceneObject->getParent().get();
    ManagedReference<SceneObject*> playersParent = player->getParent().get();
    
    CreatureObject* playerAsPlayerObject = cast<CreatureObject*>(player);
    ManagedReference<PlayerObject*> ghost = playerAsPlayerObject->getPlayerObject();
    
    int adminLevelCheck = ghost->getAdminLevel();
    
    if (adminLevelCheck == 15 && playersParent == NULL){ 
        
        if (!sceneObject->isTangibleObject())
            return;
            
        // Legend of Hondo
        // Admin can pickup / drop / move / rotate tanglible type objects outside for use as a basic "world builder" tool.

        if (parent != NULL){
            menuResponse->addRadialMenuItem(73, 3, "Admin Drop Outside"); 
        } else{
            if (!sceneObject->isCreatureObject())
                menuResponse->addRadialMenuItem(72, 3, "Admin Pickup Outside"); // Admin Pick up
            
            menuResponse->addRadialMenuItem(54, 1, "@ui_radial:item_move"); //Move
            menuResponse->addRadialMenuItem(51, 1, "@ui_radial:item_rotate"); //Rotate

            menuResponse->addRadialMenuItemToRadialID(54, 55, 3, "@ui_radial:item_move_forward"); //Move Forward
            menuResponse->addRadialMenuItemToRadialID(54, 56, 3, "@ui_radial:item_move_back"); //Move Back
            menuResponse->addRadialMenuItemToRadialID(54, 57, 3, "@ui_radial:item_move_up"); //Move Up
            menuResponse->addRadialMenuItemToRadialID(54, 58, 3, "@ui_radial:item_move_down"); //Move Down

            menuResponse->addRadialMenuItemToRadialID(51, 52, 3, "@ui_radial:item_rotate_left"); //Rotate Left
            menuResponse->addRadialMenuItemToRadialID(51, 53, 3, "@ui_radial:item_rotate_right"); //Rotate Right
        }
    } else {

        if (parent == NULL || !parent->isCellObject())
            return;

        ManagedReference<SceneObject*> obj = parent->getParent().get();

        if (obj == NULL || !obj->isBuildingObject())
            return;

        ManagedReference<BuildingObject*> buio = cast<BuildingObject*>( obj.get());

        //Is this player on the permission list?
        if (!buio->isOnAdminList(player))
            return;

        if (sceneObject->isPlayerCreature() || sceneObject->isPet())
            return;

        menuResponse->addRadialMenuItem(10, 3, "@ui_radial:item_pickup"); //Pick up

        menuResponse->addRadialMenuItem(54, 1, "@ui_radial:item_move"); //Move
        menuResponse->addRadialMenuItem(51, 1, "@ui_radial:item_rotate"); //Rotate

        menuResponse->addRadialMenuItemToRadialID(54, 55, 3, "@ui_radial:item_move_forward"); //Move Forward
        menuResponse->addRadialMenuItemToRadialID(54, 56, 3, "@ui_radial:item_move_back"); //Move Back
        menuResponse->addRadialMenuItemToRadialID(54, 57, 3, "@ui_radial:item_move_up"); //Move Up
        menuResponse->addRadialMenuItemToRadialID(54, 58, 3, "@ui_radial:item_move_down"); //Move Down

        menuResponse->addRadialMenuItemToRadialID(51, 52, 3, "@ui_radial:item_rotate_left"); //Rotate Left
        menuResponse->addRadialMenuItemToRadialID(51, 53, 3, "@ui_radial:item_rotate_right"); //Rotate Right
    }
}


int ObjectMenuComponent::handleObjectMenuSelect(SceneObject* sceneObject, CreatureObject* player, byte selectedID) {
	switch (selectedID) {
        case 72: // Admin Pick Up
        {
            SceneObject* playerInventory = player->getSlottedObject("inventory");
            playerInventory->transferObject(sceneObject, -1, true);
            
            break;
        }
        case 73: // Admin Drop
        {
            Vector3 worldPosition = player->getWorldPosition();
            sceneObject->initializePosition(worldPosition.getX(), worldPosition.getZ(), worldPosition.getY());
            
            ManagedReference<Zone*> zone = player->getZone();
            zone->transferObject(sceneObject, -1, true);
            
            break;
        }
	}

	return 0;
}
