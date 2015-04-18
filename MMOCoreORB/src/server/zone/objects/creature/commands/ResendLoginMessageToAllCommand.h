/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef RESENDLOGINMESSAGETOALLCOMMAND_H_
#define RESENDLOGINMESSAGETOALLCOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class ResendLoginMessageToAllCommand : public QueueCommand {
public:

	ResendLoginMessageToAllCommand(const String& name, ZoneProcessServer* server)
		: QueueCommand(name, server) {

	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) const {

		if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidLocomotions(creature))
			return INVALIDLOCOMOTION;

		ManagedReference<PlayerObject*> ghost = creature->getPlayerObject();

		if (ghost == NULL || !ghost->isPrivileged()) {
			creature->sendSystemMessage("@error_message:insufficient_permissions"); //You do not have sufficient permissions to perform the requested action.
			return INSUFFICIENTPERMISSION;
		}

		ManagedReference<PlayerManager*> playerManager = server->getPlayerManager();

		if (playerManager != NULL)
			playerManager->resendLoginMessageToAll();

		return SUCCESS;
	}

};

#endif //RESENDLOGINMESSAGETOALLCOMMAND_H_
