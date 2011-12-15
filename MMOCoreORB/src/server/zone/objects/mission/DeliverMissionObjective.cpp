/*
 *	server/zone/objects/mission/DeliverMissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "DeliverMissionObjective.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/AiAgent.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/area/MissionSpawnActiveArea.h"

/*
 *	DeliverMissionObjectiveStub
 */

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_GETITEM__,RPC_GETOBJECTIVESTATUS__,RPC_ACTIVATE__,RPC_ACTIVATEWITHRESULT__,RPC_ABORT__,RPC_COMPLETE__,RPC_DESPAWNNPCS__,RPC_UPDATEMISSIONSTATUS__CREATUREOBJECT_,RPC_UPDATEMISSIONTARGET__CREATUREOBJECT_,RPC_GETTARGETSPAWNPOINT__,RPC_GETDESTINATIONSPAWNPOINT__};

DeliverMissionObjective::DeliverMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	DeliverMissionObjectiveImplementation* _implementation = new DeliverMissionObjectiveImplementation(mission);
	_impl = _implementation;
	_impl->_setStub(this);
}

DeliverMissionObjective::DeliverMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
}

DeliverMissionObjective::~DeliverMissionObjective() {
}



void DeliverMissionObjective::initializeTransientMembers() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

TangibleObject* DeliverMissionObjective::getItem() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETITEM__);

		return static_cast<TangibleObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getItem();
}

int DeliverMissionObjective::getObjectiveStatus() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECTIVESTATUS__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getObjectiveStatus();
}

void DeliverMissionObjective::activate() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

bool DeliverMissionObjective::activateWithResult() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATEWITHRESULT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->activateWithResult();
}

void DeliverMissionObjective::abort() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORT__);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void DeliverMissionObjective::complete() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETE__);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

void DeliverMissionObjective::despawnNpcs() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESPAWNNPCS__);

		method.executeWithVoidReturn();
	} else
		_implementation->despawnNpcs();
}

void DeliverMissionObjective::updateMissionStatus(CreatureObject* player) {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEMISSIONSTATUS__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->updateMissionStatus(player);
}

bool DeliverMissionObjective::updateMissionTarget(CreatureObject* player) {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEMISSIONTARGET__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->updateMissionTarget(player);
}

NpcSpawnPoint* DeliverMissionObjective::getTargetSpawnPoint() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTARGETSPAWNPOINT__);

		return static_cast<NpcSpawnPoint*>(method.executeWithObjectReturn());
	} else
		return _implementation->getTargetSpawnPoint();
}

NpcSpawnPoint* DeliverMissionObjective::getDestinationSpawnPoint() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDESTINATIONSPAWNPOINT__);

		return static_cast<NpcSpawnPoint*>(method.executeWithObjectReturn());
	} else
		return _implementation->getDestinationSpawnPoint();
}

DistributedObjectServant* DeliverMissionObjective::_getImplementation() {

	_updated = true;
	return _impl;
}

void DeliverMissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DeliverMissionObjectiveImplementation
 */

DeliverMissionObjectiveImplementation::DeliverMissionObjectiveImplementation(DummyConstructorParameter* param) : MissionObjectiveImplementation(param) {
	_initializeImplementation();
}


DeliverMissionObjectiveImplementation::~DeliverMissionObjectiveImplementation() {
	DeliverMissionObjectiveImplementation::finalize();
}


void DeliverMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(DeliverMissionObjectiveHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DeliverMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<DeliverMissionObjective*>(stub);
	MissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* DeliverMissionObjectiveImplementation::_getStub() {
	return _this;
}

DeliverMissionObjectiveImplementation::operator const DeliverMissionObjective*() {
	return _this;
}

void DeliverMissionObjectiveImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void DeliverMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void DeliverMissionObjectiveImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void DeliverMissionObjectiveImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void DeliverMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void DeliverMissionObjectiveImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void DeliverMissionObjectiveImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void DeliverMissionObjectiveImplementation::_serializationHelperMethod() {
	MissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("DeliverMissionObjective");

}

void DeliverMissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(DeliverMissionObjectiveImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DeliverMissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (MissionObjectiveImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "target") {
		TypeInfo<ManagedReference<AiAgent* > >::parseFromBinaryStream(&target, stream);
		return true;
	}

	if (_name == "destination") {
		TypeInfo<ManagedReference<AiAgent* > >::parseFromBinaryStream(&destination, stream);
		return true;
	}

	if (_name == "item") {
		TypeInfo<ManagedReference<TangibleObject* > >::parseFromBinaryStream(&item, stream);
		return true;
	}

	if (_name == "targetSpawnPoint") {
		TypeInfo<Reference<NpcSpawnPoint* > >::parseFromBinaryStream(&targetSpawnPoint, stream);
		return true;
	}

	if (_name == "destinationSpawnPoint") {
		TypeInfo<Reference<NpcSpawnPoint* > >::parseFromBinaryStream(&destinationSpawnPoint, stream);
		return true;
	}

	if (_name == "objectiveStatus") {
		TypeInfo<int >::parseFromBinaryStream(&objectiveStatus, stream);
		return true;
	}


	return false;
}

void DeliverMissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DeliverMissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DeliverMissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "target";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<AiAgent* > >::toBinaryStream(&target, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "destination";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<AiAgent* > >::toBinaryStream(&destination, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "item";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<TangibleObject* > >::toBinaryStream(&item, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "targetSpawnPoint";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Reference<NpcSpawnPoint* > >::toBinaryStream(&targetSpawnPoint, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "destinationSpawnPoint";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Reference<NpcSpawnPoint* > >::toBinaryStream(&destinationSpawnPoint, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "objectiveStatus";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&objectiveStatus, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 6 + MissionObjectiveImplementation::writeObjectMembers(stream);
}

DeliverMissionObjectiveImplementation::DeliverMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		objectiveStatus = INITSTATUS;
	objectiveStatus = INITSTATUS;
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		Logger.setLoggingName("DeliverMissionObjective");
	Logger::setLoggingName("DeliverMissionObjective");
}

void DeliverMissionObjectiveImplementation::finalize() {
}

void DeliverMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		super.initializeTransientMembers();
	MissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
}

TangibleObject* DeliverMissionObjectiveImplementation::getItem() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		return item;
	return item;
}

int DeliverMissionObjectiveImplementation::getObjectiveStatus() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		return objectiveStatus;
	return objectiveStatus;
}

void DeliverMissionObjectiveImplementation::despawnNpcs() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		if 
	if (target != NULL){
	// server/zone/objects/mission/DeliverMissionObjective.idl():  			target.scheduleDespawn();
	target->scheduleDespawn();
}
	// server/zone/objects/mission/DeliverMissionObjective.idl():  	}
	if (destination != NULL){
	// server/zone/objects/mission/DeliverMissionObjective.idl():  			destination.scheduleDespawn();
	destination->scheduleDespawn();
}
}

NpcSpawnPoint* DeliverMissionObjectiveImplementation::getTargetSpawnPoint() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		return targetSpawnPoint;
	return targetSpawnPoint;
}

NpcSpawnPoint* DeliverMissionObjectiveImplementation::getDestinationSpawnPoint() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		return destinationSpawnPoint;
	return destinationSpawnPoint;
}

/*
 *	DeliverMissionObjectiveAdapter
 */

DeliverMissionObjectiveAdapter::DeliverMissionObjectiveAdapter(DeliverMissionObjective* obj) : MissionObjectiveAdapter(obj) {
}

Packet* DeliverMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_GETITEM__:
		resp->insertLong(getItem()->_getObjectID());
		break;
	case RPC_GETOBJECTIVESTATUS__:
		resp->insertSignedInt(getObjectiveStatus());
		break;
	case RPC_ACTIVATE__:
		activate();
		break;
	case RPC_ACTIVATEWITHRESULT__:
		resp->insertBoolean(activateWithResult());
		break;
	case RPC_ABORT__:
		abort();
		break;
	case RPC_COMPLETE__:
		complete();
		break;
	case RPC_DESPAWNNPCS__:
		despawnNpcs();
		break;
	case RPC_UPDATEMISSIONSTATUS__CREATUREOBJECT_:
		updateMissionStatus(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_UPDATEMISSIONTARGET__CREATUREOBJECT_:
		resp->insertBoolean(updateMissionTarget(static_cast<CreatureObject*>(inv->getObjectParameter())));
		break;
	case RPC_GETTARGETSPAWNPOINT__:
		resp->insertLong(getTargetSpawnPoint()->_getObjectID());
		break;
	case RPC_GETDESTINATIONSPAWNPOINT__:
		resp->insertLong(getDestinationSpawnPoint()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void DeliverMissionObjectiveAdapter::finalize() {
	(static_cast<DeliverMissionObjective*>(stub))->finalize();
}

void DeliverMissionObjectiveAdapter::initializeTransientMembers() {
	(static_cast<DeliverMissionObjective*>(stub))->initializeTransientMembers();
}

TangibleObject* DeliverMissionObjectiveAdapter::getItem() {
	return (static_cast<DeliverMissionObjective*>(stub))->getItem();
}

int DeliverMissionObjectiveAdapter::getObjectiveStatus() {
	return (static_cast<DeliverMissionObjective*>(stub))->getObjectiveStatus();
}

void DeliverMissionObjectiveAdapter::activate() {
	(static_cast<DeliverMissionObjective*>(stub))->activate();
}

bool DeliverMissionObjectiveAdapter::activateWithResult() {
	return (static_cast<DeliverMissionObjective*>(stub))->activateWithResult();
}

void DeliverMissionObjectiveAdapter::abort() {
	(static_cast<DeliverMissionObjective*>(stub))->abort();
}

void DeliverMissionObjectiveAdapter::complete() {
	(static_cast<DeliverMissionObjective*>(stub))->complete();
}

void DeliverMissionObjectiveAdapter::despawnNpcs() {
	(static_cast<DeliverMissionObjective*>(stub))->despawnNpcs();
}

void DeliverMissionObjectiveAdapter::updateMissionStatus(CreatureObject* player) {
	(static_cast<DeliverMissionObjective*>(stub))->updateMissionStatus(player);
}

bool DeliverMissionObjectiveAdapter::updateMissionTarget(CreatureObject* player) {
	return (static_cast<DeliverMissionObjective*>(stub))->updateMissionTarget(player);
}

NpcSpawnPoint* DeliverMissionObjectiveAdapter::getTargetSpawnPoint() {
	return (static_cast<DeliverMissionObjective*>(stub))->getTargetSpawnPoint();
}

NpcSpawnPoint* DeliverMissionObjectiveAdapter::getDestinationSpawnPoint() {
	return (static_cast<DeliverMissionObjective*>(stub))->getDestinationSpawnPoint();
}

/*
 *	DeliverMissionObjectiveHelper
 */

DeliverMissionObjectiveHelper* DeliverMissionObjectiveHelper::staticInitializer = DeliverMissionObjectiveHelper::instance();

DeliverMissionObjectiveHelper::DeliverMissionObjectiveHelper() {
	className = "DeliverMissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void DeliverMissionObjectiveHelper::finalizeHelper() {
	DeliverMissionObjectiveHelper::finalize();
}

DistributedObject* DeliverMissionObjectiveHelper::instantiateObject() {
	return new DeliverMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* DeliverMissionObjectiveHelper::instantiateServant() {
	return new DeliverMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DeliverMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DeliverMissionObjectiveAdapter(static_cast<DeliverMissionObjective*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

