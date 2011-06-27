/*
 *	server/zone/managers/mission/MissionManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "MissionManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/tangible/terminal/mission/MissionTerminal.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/region/Region.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/managers/stringid/StringIdManager.h"

/*
 *	MissionManagerStub
 */

enum {RPC_LOADLAIROBJECTSTOSPAWN__ = 6,RPC_LOADNPCOBJECTSTOSPAWN__,RPC_HANDLEMISSIONLISTREQUEST__MISSIONTERMINAL_PLAYERCREATURE_INT_,RPC_HANDLEMISSIONACCEPT__MISSIONTERMINAL_MISSIONOBJECT_PLAYERCREATURE_,RPC_HANDLEMISSIONABORT__MISSIONOBJECT_PLAYERCREATURE_,RPC_REMOVEMISSION__MISSIONOBJECT_PLAYERCREATURE_,RPC_POPULATEMISSIONLIST__MISSIONTERMINAL_PLAYERCREATURE_INT_,RPC_RANDOMIZESURVEYMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZEDESTROYMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZEBOUNTYMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZEDELIVERMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZECRAFTINGMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZEENTERTAINERMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZEHUNTINGMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZERECONMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZEIMPERIALDESTROYMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZEIMPERIALDELIVERMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZEREBELDESTROYMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_RANDOMIZEREBELDELIVERMISSION__PLAYERCREATURE_MISSIONOBJECT_,RPC_CREATEMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_,RPC_CREATESURVEYMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_,RPC_CREATEDESTROYMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_,RPC_CREATEDELIVERMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_,RPC_CREATEENTERTAINERMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_,RPC_CREATEHUNTINGMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_,RPC_CREATERECONMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_,RPC_CREATEBOUNTYMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_,RPC_HASSURVEYMISSION__PLAYERCREATURE_STRING_};

MissionManager::MissionManager(ZoneServer* srv, ZoneProcessServer* impl) : Observer(DummyConstructorParameter::instance()) {
	MissionManagerImplementation* _implementation = new MissionManagerImplementation(srv, impl);
	_impl = _implementation;
	_impl->_setStub(this);
}

MissionManager::MissionManager(DummyConstructorParameter* param) : Observer(param) {
}

MissionManager::~MissionManager() {
}


void MissionManager::loadLairObjectsToSpawn() {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADLAIROBJECTSTOSPAWN__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadLairObjectsToSpawn();
}

void MissionManager::loadNpcObjectsToSpawn() {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADNPCOBJECTSTOSPAWN__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadNpcObjectsToSpawn();
}

void MissionManager::handleMissionListRequest(MissionTerminal* missionTerminal, PlayerCreature* player, int counter) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEMISSIONLISTREQUEST__MISSIONTERMINAL_PLAYERCREATURE_INT_);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(player);
		method.addSignedIntParameter(counter);

		method.executeWithVoidReturn();
	} else
		_implementation->handleMissionListRequest(missionTerminal, player, counter);
}

void MissionManager::handleMissionAccept(MissionTerminal* missionTerminal, MissionObject* mission, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEMISSIONACCEPT__MISSIONTERMINAL_MISSIONOBJECT_PLAYERCREATURE_);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(mission);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->handleMissionAccept(missionTerminal, mission, player);
}

void MissionManager::handleMissionAbort(MissionObject* mission, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEMISSIONABORT__MISSIONOBJECT_PLAYERCREATURE_);
		method.addObjectParameter(mission);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->handleMissionAbort(mission, player);
}

void MissionManager::removeMission(MissionObject* mission, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEMISSION__MISSIONOBJECT_PLAYERCREATURE_);
		method.addObjectParameter(mission);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->removeMission(mission, player);
}

void MissionManager::populateMissionList(MissionTerminal* missionTerminal, PlayerCreature* player, int counter) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_POPULATEMISSIONLIST__MISSIONTERMINAL_PLAYERCREATURE_INT_);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(player);
		method.addSignedIntParameter(counter);

		method.executeWithVoidReturn();
	} else
		_implementation->populateMissionList(missionTerminal, player, counter);
}

void MissionManager::randomizeSurveyMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZESURVEYMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeSurveyMission(player, mission);
}

void MissionManager::randomizeDestroyMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZEDESTROYMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeDestroyMission(player, mission);
}

void MissionManager::randomizeBountyMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZEBOUNTYMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeBountyMission(player, mission);
}

void MissionManager::randomizeDeliverMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZEDELIVERMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeDeliverMission(player, mission);
}

void MissionManager::randomizeCraftingMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZECRAFTINGMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeCraftingMission(player, mission);
}

void MissionManager::randomizeEntertainerMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZEENTERTAINERMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeEntertainerMission(player, mission);
}

void MissionManager::randomizeHuntingMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZEHUNTINGMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeHuntingMission(player, mission);
}

void MissionManager::randomizeReconMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZERECONMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeReconMission(player, mission);
}

void MissionManager::randomizeImperialDestroyMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZEIMPERIALDESTROYMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeImperialDestroyMission(player, mission);
}

void MissionManager::randomizeImperialDeliverMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZEIMPERIALDELIVERMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeImperialDeliverMission(player, mission);
}

void MissionManager::randomizeRebelDestroyMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZEREBELDESTROYMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeRebelDestroyMission(player, mission);
}

void MissionManager::randomizeRebelDeliverMission(PlayerCreature* player, MissionObject* mission) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZEREBELDELIVERMISSION__PLAYERCREATURE_MISSIONOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(mission);

		method.executeWithVoidReturn();
	} else
		_implementation->randomizeRebelDeliverMission(player, mission);
}

void MissionManager::createMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_);
		method.addObjectParameter(mission);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->createMissionObjectives(mission, missionTerminal, player);
}

void MissionManager::createSurveyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATESURVEYMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_);
		method.addObjectParameter(mission);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->createSurveyMissionObjectives(mission, missionTerminal, player);
}

void MissionManager::createDestroyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEDESTROYMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_);
		method.addObjectParameter(mission);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->createDestroyMissionObjectives(mission, missionTerminal, player);
}

void MissionManager::createDeliverMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEDELIVERMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_);
		method.addObjectParameter(mission);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->createDeliverMissionObjectives(mission, missionTerminal, player);
}

void MissionManager::createEntertainerMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEENTERTAINERMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_);
		method.addObjectParameter(mission);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->createEntertainerMissionObjectives(mission, missionTerminal, player);
}

void MissionManager::createHuntingMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEHUNTINGMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_);
		method.addObjectParameter(mission);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->createHuntingMissionObjectives(mission, missionTerminal, player);
}

void MissionManager::createReconMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATERECONMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_);
		method.addObjectParameter(mission);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->createReconMissionObjectives(mission, missionTerminal, player);
}

void MissionManager::createBountyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEBOUNTYMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_);
		method.addObjectParameter(mission);
		method.addObjectParameter(missionTerminal);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->createBountyMissionObjectives(mission, missionTerminal, player);
}

bool MissionManager::hasSurveyMission(PlayerCreature* player, const String& spawn) {
	MissionManagerImplementation* _implementation = (MissionManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASSURVEYMISSION__PLAYERCREATURE_STRING_);
		method.addObjectParameter(player);
		method.addAsciiParameter(spawn);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasSurveyMission(player, spawn);
}

DistributedObjectServant* MissionManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void MissionManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	MissionManagerImplementation
 */

MissionManagerImplementation::MissionManagerImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


MissionManagerImplementation::~MissionManagerImplementation() {
}


void MissionManagerImplementation::finalize() {
}

void MissionManagerImplementation::_initializeImplementation() {
	_setClassHelper(MissionManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void MissionManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (MissionManager*) stub;
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* MissionManagerImplementation::_getStub() {
	return _this;
}

MissionManagerImplementation::operator const MissionManager*() {
	return _this;
}

void MissionManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void MissionManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void MissionManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void MissionManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void MissionManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void MissionManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void MissionManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void MissionManagerImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("MissionManager");

}

void MissionManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(MissionManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool MissionManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ObserverImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "server") {
		TypeInfo<ManagedWeakReference<ZoneServer* > >::parseFromBinaryStream(&server, stream);
		return true;
	}

	if (_name == "lairObjectTemplatesToSpawn") {
		TypeInfo<LairObjectsToSpawnMap >::parseFromBinaryStream(&lairObjectTemplatesToSpawn, stream);
		return true;
	}

	if (_name == "npcObjectTemplatesToSpawn") {
		TypeInfo<SortedVector<unsigned int> >::parseFromBinaryStream(&npcObjectTemplatesToSpawn, stream);
		return true;
	}


	return false;
}

void MissionManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = MissionManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int MissionManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "server";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<ZoneServer* > >::toBinaryStream(&server, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "lairObjectTemplatesToSpawn";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<LairObjectsToSpawnMap >::toBinaryStream(&lairObjectTemplatesToSpawn, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "npcObjectTemplatesToSpawn";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<SortedVector<unsigned int> >::toBinaryStream(&npcObjectTemplatesToSpawn, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 3 + ObserverImplementation::writeObjectMembers(stream);
}

MissionManagerImplementation::MissionManagerImplementation(ZoneServer* srv, ZoneProcessServer* impl) {
	_initializeImplementation();
	// server/zone/managers/mission/MissionManager.idl():  		server = srv;
	server = srv;
	// server/zone/managers/mission/MissionManager.idl():  		processor = impl;
	processor = impl;
	// server/zone/managers/mission/MissionManager.idl():  		Logger.setLoggingName("MissionManager");
	Logger::setLoggingName("MissionManager");
	// server/zone/managers/mission/MissionManager.idl():  		lairObjectTemplatesToSpawn.setNoDuplicateInsertPlan();
	(&lairObjectTemplatesToSpawn)->setNoDuplicateInsertPlan();
	// server/zone/managers/mission/MissionManager.idl():  		loadLairObjectsToSpawn();
	loadLairObjectsToSpawn();
	// server/zone/managers/mission/MissionManager.idl():  		loadNpcObjectsToSpawn();
	loadNpcObjectsToSpawn();
}

/*
 *	MissionManagerAdapter
 */

MissionManagerAdapter::MissionManagerAdapter(MissionManagerImplementation* obj) : ObserverAdapter(obj) {
}

Packet* MissionManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_LOADLAIROBJECTSTOSPAWN__:
		loadLairObjectsToSpawn();
		break;
	case RPC_LOADNPCOBJECTSTOSPAWN__:
		loadNpcObjectsToSpawn();
		break;
	case RPC_HANDLEMISSIONLISTREQUEST__MISSIONTERMINAL_PLAYERCREATURE_INT_:
		handleMissionListRequest((MissionTerminal*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case RPC_HANDLEMISSIONACCEPT__MISSIONTERMINAL_MISSIONOBJECT_PLAYERCREATURE_:
		handleMissionAccept((MissionTerminal*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_HANDLEMISSIONABORT__MISSIONOBJECT_PLAYERCREATURE_:
		handleMissionAbort((MissionObject*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_REMOVEMISSION__MISSIONOBJECT_PLAYERCREATURE_:
		removeMission((MissionObject*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_POPULATEMISSIONLIST__MISSIONTERMINAL_PLAYERCREATURE_INT_:
		populateMissionList((MissionTerminal*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case RPC_RANDOMIZESURVEYMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeSurveyMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZEDESTROYMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeDestroyMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZEBOUNTYMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeBountyMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZEDELIVERMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeDeliverMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZECRAFTINGMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeCraftingMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZEENTERTAINERMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeEntertainerMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZEHUNTINGMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeHuntingMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZERECONMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeReconMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZEIMPERIALDESTROYMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeImperialDestroyMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZEIMPERIALDELIVERMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeImperialDeliverMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZEREBELDESTROYMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeRebelDestroyMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_RANDOMIZEREBELDELIVERMISSION__PLAYERCREATURE_MISSIONOBJECT_:
		randomizeRebelDeliverMission((PlayerCreature*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case RPC_CREATEMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_:
		createMissionObjectives((MissionObject*) inv->getObjectParameter(), (MissionTerminal*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_CREATESURVEYMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_:
		createSurveyMissionObjectives((MissionObject*) inv->getObjectParameter(), (MissionTerminal*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_CREATEDESTROYMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_:
		createDestroyMissionObjectives((MissionObject*) inv->getObjectParameter(), (MissionTerminal*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_CREATEDELIVERMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_:
		createDeliverMissionObjectives((MissionObject*) inv->getObjectParameter(), (MissionTerminal*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_CREATEENTERTAINERMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_:
		createEntertainerMissionObjectives((MissionObject*) inv->getObjectParameter(), (MissionTerminal*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_CREATEHUNTINGMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_:
		createHuntingMissionObjectives((MissionObject*) inv->getObjectParameter(), (MissionTerminal*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_CREATERECONMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_:
		createReconMissionObjectives((MissionObject*) inv->getObjectParameter(), (MissionTerminal*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_CREATEBOUNTYMISSIONOBJECTIVES__MISSIONOBJECT_MISSIONTERMINAL_PLAYERCREATURE_:
		createBountyMissionObjectives((MissionObject*) inv->getObjectParameter(), (MissionTerminal*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_HASSURVEYMISSION__PLAYERCREATURE_STRING_:
		resp->insertBoolean(hasSurveyMission((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_hasSurveyMission__PlayerCreature_String_)));
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionManagerAdapter::loadLairObjectsToSpawn() {
	((MissionManagerImplementation*) impl)->loadLairObjectsToSpawn();
}

void MissionManagerAdapter::loadNpcObjectsToSpawn() {
	((MissionManagerImplementation*) impl)->loadNpcObjectsToSpawn();
}

void MissionManagerAdapter::handleMissionListRequest(MissionTerminal* missionTerminal, PlayerCreature* player, int counter) {
	((MissionManagerImplementation*) impl)->handleMissionListRequest(missionTerminal, player, counter);
}

void MissionManagerAdapter::handleMissionAccept(MissionTerminal* missionTerminal, MissionObject* mission, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->handleMissionAccept(missionTerminal, mission, player);
}

void MissionManagerAdapter::handleMissionAbort(MissionObject* mission, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->handleMissionAbort(mission, player);
}

void MissionManagerAdapter::removeMission(MissionObject* mission, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->removeMission(mission, player);
}

void MissionManagerAdapter::populateMissionList(MissionTerminal* missionTerminal, PlayerCreature* player, int counter) {
	((MissionManagerImplementation*) impl)->populateMissionList(missionTerminal, player, counter);
}

void MissionManagerAdapter::randomizeSurveyMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeSurveyMission(player, mission);
}

void MissionManagerAdapter::randomizeDestroyMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeDestroyMission(player, mission);
}

void MissionManagerAdapter::randomizeBountyMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeBountyMission(player, mission);
}

void MissionManagerAdapter::randomizeDeliverMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeDeliverMission(player, mission);
}

void MissionManagerAdapter::randomizeCraftingMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeCraftingMission(player, mission);
}

void MissionManagerAdapter::randomizeEntertainerMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeEntertainerMission(player, mission);
}

void MissionManagerAdapter::randomizeHuntingMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeHuntingMission(player, mission);
}

void MissionManagerAdapter::randomizeReconMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeReconMission(player, mission);
}

void MissionManagerAdapter::randomizeImperialDestroyMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeImperialDestroyMission(player, mission);
}

void MissionManagerAdapter::randomizeImperialDeliverMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeImperialDeliverMission(player, mission);
}

void MissionManagerAdapter::randomizeRebelDestroyMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeRebelDestroyMission(player, mission);
}

void MissionManagerAdapter::randomizeRebelDeliverMission(PlayerCreature* player, MissionObject* mission) {
	((MissionManagerImplementation*) impl)->randomizeRebelDeliverMission(player, mission);
}

void MissionManagerAdapter::createMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->createMissionObjectives(mission, missionTerminal, player);
}

void MissionManagerAdapter::createSurveyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->createSurveyMissionObjectives(mission, missionTerminal, player);
}

void MissionManagerAdapter::createDestroyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->createDestroyMissionObjectives(mission, missionTerminal, player);
}

void MissionManagerAdapter::createDeliverMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->createDeliverMissionObjectives(mission, missionTerminal, player);
}

void MissionManagerAdapter::createEntertainerMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->createEntertainerMissionObjectives(mission, missionTerminal, player);
}

void MissionManagerAdapter::createHuntingMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->createHuntingMissionObjectives(mission, missionTerminal, player);
}

void MissionManagerAdapter::createReconMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->createReconMissionObjectives(mission, missionTerminal, player);
}

void MissionManagerAdapter::createBountyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, PlayerCreature* player) {
	((MissionManagerImplementation*) impl)->createBountyMissionObjectives(mission, missionTerminal, player);
}

bool MissionManagerAdapter::hasSurveyMission(PlayerCreature* player, const String& spawn) {
	return ((MissionManagerImplementation*) impl)->hasSurveyMission(player, spawn);
}

/*
 *	MissionManagerHelper
 */

MissionManagerHelper* MissionManagerHelper::staticInitializer = MissionManagerHelper::instance();

MissionManagerHelper::MissionManagerHelper() {
	className = "MissionManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void MissionManagerHelper::finalizeHelper() {
	MissionManagerHelper::finalize();
}

DistributedObject* MissionManagerHelper::instantiateObject() {
	return new MissionManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionManagerHelper::instantiateServant() {
	return new MissionManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionManagerAdapter((MissionManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

