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

#include "server/zone/objects/tangible/lair/LairObject.h"

/*
 *	DeliverMissionObjectiveStub
 */

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_SETTARGET__AIAGENT_,RPC_SETTARGETDEST__AIAGENT_,RPC_GETITEM__,RPC_ACTIVATE__,RPC_ABORT__,RPC_COMPLETE__,RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_,RPC_UPDATEMISSIONTARGET__CREATUREOBJECT_};

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

void DeliverMissionObjective::setTarget(AiAgent* t) {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTARGET__AIAGENT_);
		method.addObjectParameter(t);

		method.executeWithVoidReturn();
	} else
		_implementation->setTarget(t);
}

void DeliverMissionObjective::setTargetDest(AiAgent* t) {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTARGETDEST__AIAGENT_);
		method.addObjectParameter(t);

		method.executeWithVoidReturn();
	} else
		_implementation->setTargetDest(t);
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

int DeliverMissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
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

	if (_name == "targetDest") {
		TypeInfo<ManagedReference<AiAgent* > >::parseFromBinaryStream(&targetDest, stream);
		return true;
	}

	if (_name == "item") {
		TypeInfo<ManagedReference<TangibleObject* > >::parseFromBinaryStream(&item, stream);
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

	_name = "targetDest";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<AiAgent* > >::toBinaryStream(&targetDest, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "item";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<TangibleObject* > >::toBinaryStream(&item, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "objectiveStatus";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&objectiveStatus, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 4 + MissionObjectiveImplementation::writeObjectMembers(stream);
}

DeliverMissionObjectiveImplementation::DeliverMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
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
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		activate();
	activate();
}

void DeliverMissionObjectiveImplementation::setTarget(AiAgent* t) {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		target = t;
	target = t;
}

void DeliverMissionObjectiveImplementation::setTargetDest(AiAgent* t) {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		targetDest = t;
	targetDest = t;
}

TangibleObject* DeliverMissionObjectiveImplementation::getItem() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		return item;
	return item;
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
	case RPC_SETTARGET__AIAGENT_:
		setTarget(static_cast<AiAgent*>(inv->getObjectParameter()));
		break;
	case RPC_SETTARGETDEST__AIAGENT_:
		setTargetDest(static_cast<AiAgent*>(inv->getObjectParameter()));
		break;
	case RPC_GETITEM__:
		resp->insertLong(getItem()->_getObjectID());
		break;
	case RPC_ACTIVATE__:
		activate();
		break;
	case RPC_ABORT__:
		abort();
		break;
	case RPC_COMPLETE__:
		complete();
		break;
	case RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		resp->insertSignedInt(notifyObserverEvent(static_cast<MissionObserver*>(inv->getObjectParameter()), inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		break;
	case RPC_UPDATEMISSIONTARGET__CREATUREOBJECT_:
		resp->insertBoolean(updateMissionTarget(static_cast<CreatureObject*>(inv->getObjectParameter())));
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

void DeliverMissionObjectiveAdapter::setTarget(AiAgent* t) {
	(static_cast<DeliverMissionObjective*>(stub))->setTarget(t);
}

void DeliverMissionObjectiveAdapter::setTargetDest(AiAgent* t) {
	(static_cast<DeliverMissionObjective*>(stub))->setTargetDest(t);
}

TangibleObject* DeliverMissionObjectiveAdapter::getItem() {
	return (static_cast<DeliverMissionObjective*>(stub))->getItem();
}

void DeliverMissionObjectiveAdapter::activate() {
	(static_cast<DeliverMissionObjective*>(stub))->activate();
}

void DeliverMissionObjectiveAdapter::abort() {
	(static_cast<DeliverMissionObjective*>(stub))->abort();
}

void DeliverMissionObjectiveAdapter::complete() {
	(static_cast<DeliverMissionObjective*>(stub))->complete();
}

int DeliverMissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<DeliverMissionObjective*>(stub))->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

bool DeliverMissionObjectiveAdapter::updateMissionTarget(CreatureObject* player) {
	return (static_cast<DeliverMissionObjective*>(stub))->updateMissionTarget(player);
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

