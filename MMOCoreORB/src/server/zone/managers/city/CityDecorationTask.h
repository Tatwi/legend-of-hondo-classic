/*
 * CityDecorationTask.h
 *
 *  Created on: Aug 26, 2013
 *      Author: root
 */

#ifndef CITYDECORATIONTASK_H_
#define CITYDECORATIONTASK_H_

#include "engine/engine.h"
#include "server/chat/ChatManager.h"
#include "server/zone/objects/region/CityRegion.h"
#include "server/zone/managers/planet/PlanetManager.h"
#include "server/zone/objects/scene/SceneObject.h"
#include "server/zone/ZoneServer.h"

class CityDecorationTask : public Task {
	ManagedReference<CreatureObject*> mayor;
	ManagedReference<TangibleObject*> obj;
	byte option;

public:
	enum {
		PLACE = 0,
		REMOVE = 1
	};

	CityDecorationTask( CreatureObject* creature, TangibleObject* object, byte function) {
		mayor = creature;
		obj = object;
		option = function;
	}

	void run() {

		switch (option) {
			case 0:
				placeDecoration();
				break;

			case 1:
				removeDecoration();
				break;
		}
	}

	void placeDecoration() {
		Locker _lock(mayor);

		ManagedReference<CityRegion*> city = mayor->getCityRegion();

		if(city == NULL) {
			mayor->sendSystemMessage("You may only place decorations in Mos Espa."); // Not in a city at all.
			return;
		}
        
        String regionName = city->getRegionName();

        if (regionName != "@tatooine_region_names:mos_espa"){
            mayor->sendSystemMessage("You may only place decorations in Mos Espa.");  // Not in Mos Espa.
            return;
        }

		Zone* zone = mayor->getZone();

		if (zone == NULL || obj->getObjectTemplate() == NULL)
			return;

		Locker tlock(obj, mayor);

		if(!obj->isASubChildOf(mayor)) {
			mayor->sendSystemMessage("@space/quest:not_in_inv"); // The object must be in your inventory
			return;
		}
        
        // Allow player to decorate Mos Espa with persistent objects
  
        String originalObject = obj->getObjectTemplate()->getFullTemplateString();
        String strDatabase = "playerstructures";
        
        // Delete the original object
        obj->destroyObjectFromDatabase(true);
        obj->destroyObjectFromWorld(true);
        
        // Create a duplicate object as a persistent object stored in the player structures database
        ManagedReference<SceneObject*> dupe = ObjectManager::instance()->createObject(originalObject.hashCode(), 1, strDatabase);
        
        // Initialize the position/roatation of the new object
        dupe->initializePosition(mayor->getWorldPositionX(), mayor->getWorldPositionZ(),mayor->getWorldPositionY());
		dupe->rotate(mayor->getDirectionAngle() - dupe->getDirectionAngle());
        
        // Move the dupe into the world
        zone->transferObject(dupe, -1, true);
        
        tlock.release();
	}

	void removeDecoration() {
		Locker _lock(mayor);

		ManagedReference<CityRegion*> city = mayor->getCityRegion();

		if(city == NULL)
			return;
            
		Zone* zone = mayor->getZone();

		if (zone == NULL)
			return;

		ManagedReference<SceneObject*> inv = mayor->getSlottedObject("inventory");

		if(inv == NULL)
			return;

		if(inv->isContainerFull()) {
			//mayor->sendSystemMessage("@error_message:inv_full"); // You inventory is full
			mayor->sendSystemMessage("@event_perk:promoter_full_inv"); //"Your inventory is full. Please make some room and try again.");
			return;
		} else {
			Locker tlock(obj, mayor);

			if(	inv->transferObject(obj, -1, true)) {
				inv->broadcastObject(obj, true);
				tlock.release();
				Locker clock(city, mayor);
				city->removeDecoration(obj);

				mayor->sendSystemMessage("@city/city:mt_removed"); // The object has been removed from the city.
			}
		}
	}

};

#endif /* CITYDECORATIONTASK_H_ */
