/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef POLEARMLEGHIT1COMMAND_H_
#define POLEARMLEGHIT1COMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"
#include "server/zone/managers/combat/CombatManager.h"
#include "CombatQueueCommand.h"


class PolearmLegHit1Command : public CombatQueueCommand {
public:

	PolearmLegHit1Command(const String& name, ZoneProcessServer* server)
		: CombatQueueCommand(name, server) {
	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) const {

		if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidLocomotions(creature))
			return INVALIDLOCOMOTION;

		ManagedReference<WeaponObject*> weapon = creature->getWeapon();

		if (!weapon->isPolearmWeaponObject()) {
			return INVALIDWEAPON;
		}

		return doCombatAction(creature, target);
	}

};

#endif //POLEARMLEGHIT1COMMAND_H_
