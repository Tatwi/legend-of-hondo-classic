/*
 *	server/zone/objects/intangible/ControlDevice.cpp generated by engine3 IDL compiler 0.60
 */

#include "ControlDevice.h"

#include "server/zone/objects/creature/VehicleObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	ControlDeviceStub
 */

enum {RPC_UPDATETODATABASEALLOBJECTS__BOOL_ = 6,RPC_STOREOBJECT__CREATUREOBJECT_,RPC_GENERATEOBJECT__CREATUREOBJECT_,RPC_CALLOBJECT__CREATUREOBJECT_,RPC_SETCONTROLLEDOBJECT__TANGIBLEOBJECT_,RPC_GETCONTROLLEDOBJECT__,RPC_ISCONTROLDEVICE__};

ControlDevice::ControlDevice() : IntangibleObject(DummyConstructorParameter::instance()) {
	ControlDeviceImplementation* _implementation = new ControlDeviceImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

ControlDevice::ControlDevice(DummyConstructorParameter* param) : IntangibleObject(param) {
}

ControlDevice::~ControlDevice() {
}



void ControlDevice::updateToDatabaseAllObjects(bool startTask) {
	ControlDeviceImplementation* _implementation = static_cast<ControlDeviceImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATETODATABASEALLOBJECTS__BOOL_);
		method.addBooleanParameter(startTask);

		method.executeWithVoidReturn();
	} else
		_implementation->updateToDatabaseAllObjects(startTask);
}

void ControlDevice::storeObject(CreatureObject* player) {
	ControlDeviceImplementation* _implementation = static_cast<ControlDeviceImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STOREOBJECT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->storeObject(player);
}

void ControlDevice::generateObject(CreatureObject* player) {
	ControlDeviceImplementation* _implementation = static_cast<ControlDeviceImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GENERATEOBJECT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->generateObject(player);
}

void ControlDevice::callObject(CreatureObject* player) {
	ControlDeviceImplementation* _implementation = static_cast<ControlDeviceImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALLOBJECT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->callObject(player);
}

void ControlDevice::setControlledObject(TangibleObject* object) {
	ControlDeviceImplementation* _implementation = static_cast<ControlDeviceImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCONTROLLEDOBJECT__TANGIBLEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->setControlledObject(object);
}

TangibleObject* ControlDevice::getControlledObject() {
	ControlDeviceImplementation* _implementation = static_cast<ControlDeviceImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCONTROLLEDOBJECT__);

		return static_cast<TangibleObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getControlledObject();
}

bool ControlDevice::isControlDevice() {
	ControlDeviceImplementation* _implementation = static_cast<ControlDeviceImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCONTROLDEVICE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isControlDevice();
}

DistributedObjectServant* ControlDevice::_getImplementation() {

	_updated = true;
	return _impl;
}

void ControlDevice::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ControlDeviceImplementation
 */

ControlDeviceImplementation::ControlDeviceImplementation(DummyConstructorParameter* param) : IntangibleObjectImplementation(param) {
	_initializeImplementation();
}


ControlDeviceImplementation::~ControlDeviceImplementation() {
}


void ControlDeviceImplementation::finalize() {
}

void ControlDeviceImplementation::_initializeImplementation() {
	_setClassHelper(ControlDeviceHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ControlDeviceImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ControlDevice*>(stub);
	IntangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ControlDeviceImplementation::_getStub() {
	return _this;
}

ControlDeviceImplementation::operator const ControlDevice*() {
	return _this;
}

void ControlDeviceImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ControlDeviceImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ControlDeviceImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ControlDeviceImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ControlDeviceImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ControlDeviceImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ControlDeviceImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ControlDeviceImplementation::_serializationHelperMethod() {
	IntangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("ControlDevice");

}

void ControlDeviceImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ControlDeviceImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ControlDeviceImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (IntangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "ControlDevice.controlledObject") {
		TypeInfo<ManagedReference<TangibleObject* > >::parseFromBinaryStream(&controlledObject, stream);
		return true;
	}


	return false;
}

void ControlDeviceImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ControlDeviceImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ControlDeviceImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "ControlDevice.controlledObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<TangibleObject* > >::toBinaryStream(&controlledObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + IntangibleObjectImplementation::writeObjectMembers(stream);
}

ControlDeviceImplementation::ControlDeviceImplementation() {
	_initializeImplementation();
	// server/zone/objects/intangible/ControlDevice.idl():  		controlledObject = null;
	controlledObject = NULL;
	// server/zone/objects/intangible/ControlDevice.idl():  		Logger.setLoggingName("ControlDevice");
	Logger::setLoggingName("ControlDevice");
	// server/zone/objects/intangible/ControlDevice.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/objects/intangible/ControlDevice.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/objects/intangible/ControlDevice.idl():  		super.getContainerPermissions().setInheritPermissionsFromParent(true);
	IntangibleObjectImplementation::getContainerPermissions()->setInheritPermissionsFromParent(true);
	// server/zone/objects/intangible/ControlDevice.idl():  		ContainerPermissions permissions = super.getContainerPermissions();
	ContainerPermissions* permissions = IntangibleObjectImplementation::getContainerPermissions();
	// server/zone/objects/intangible/ControlDevice.idl():  		permissions.clearDefaultDenyPermission(ContainerPermissions.MOVECONTAINER);
	permissions->clearDefaultDenyPermission(ContainerPermissions::MOVECONTAINER);
	// server/zone/objects/intangible/ControlDevice.idl():  		permissions.clearDenyPermission("owner", ContainerPermissions.MOVECONTAINER);
	permissions->clearDenyPermission("owner", ContainerPermissions::MOVECONTAINER);
}

void ControlDeviceImplementation::updateToDatabaseAllObjects(bool startTask) {
	// server/zone/objects/intangible/ControlDevice.idl():  		}
	if (controlledObject != NULL){
	// server/zone/objects/intangible/ControlDevice.idl():  			controlledObject.updateToDatabaseWithoutChildren();
	controlledObject->updateToDatabaseWithoutChildren();
	// server/zone/objects/intangible/ControlDevice.idl():  			super.updateToDatabaseAllObjects(startTask);
	IntangibleObjectImplementation::updateToDatabaseAllObjects(startTask);
}

	else {
	// server/zone/objects/intangible/ControlDevice.idl():  			super.updateToDatabaseAllObjects(startTask);
	IntangibleObjectImplementation::updateToDatabaseAllObjects(startTask);
}
}

void ControlDeviceImplementation::storeObject(CreatureObject* player) {
	// server/zone/objects/intangible/ControlDevice.idl():  		Logger.error("called storeObject on an abstract method");
	Logger::error("called storeObject on an abstract method");
}

void ControlDeviceImplementation::generateObject(CreatureObject* player) {
	// server/zone/objects/intangible/ControlDevice.idl():  		Logger.error("called generateObject on an abstract method");
	Logger::error("called generateObject on an abstract method");
}

void ControlDeviceImplementation::callObject(CreatureObject* player) {
	// server/zone/objects/intangible/ControlDevice.idl():  		Logger.error("called callObject on an abstract method");
	Logger::error("called callObject on an abstract method");
}

void ControlDeviceImplementation::setControlledObject(TangibleObject* object) {
	// server/zone/objects/intangible/ControlDevice.idl():  		controlledObject = object;
	controlledObject = object;
}

TangibleObject* ControlDeviceImplementation::getControlledObject() {
	// server/zone/objects/intangible/ControlDevice.idl():  		return controlledObject;
	return controlledObject;
}

bool ControlDeviceImplementation::isControlDevice() {
	// server/zone/objects/intangible/ControlDevice.idl():  		return true;
	return true;
}

/*
 *	ControlDeviceAdapter
 */

ControlDeviceAdapter::ControlDeviceAdapter(ControlDevice* obj) : IntangibleObjectAdapter(obj) {
}

Packet* ControlDeviceAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_UPDATETODATABASEALLOBJECTS__BOOL_:
		updateToDatabaseAllObjects(inv->getBooleanParameter());
		break;
	case RPC_STOREOBJECT__CREATUREOBJECT_:
		storeObject(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_GENERATEOBJECT__CREATUREOBJECT_:
		generateObject(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_CALLOBJECT__CREATUREOBJECT_:
		callObject(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_SETCONTROLLEDOBJECT__TANGIBLEOBJECT_:
		setControlledObject(static_cast<TangibleObject*>(inv->getObjectParameter()));
		break;
	case RPC_GETCONTROLLEDOBJECT__:
		resp->insertLong(getControlledObject()->_getObjectID());
		break;
	case RPC_ISCONTROLDEVICE__:
		resp->insertBoolean(isControlDevice());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ControlDeviceAdapter::updateToDatabaseAllObjects(bool startTask) {
	(static_cast<ControlDevice*>(stub))->updateToDatabaseAllObjects(startTask);
}

void ControlDeviceAdapter::storeObject(CreatureObject* player) {
	(static_cast<ControlDevice*>(stub))->storeObject(player);
}

void ControlDeviceAdapter::generateObject(CreatureObject* player) {
	(static_cast<ControlDevice*>(stub))->generateObject(player);
}

void ControlDeviceAdapter::callObject(CreatureObject* player) {
	(static_cast<ControlDevice*>(stub))->callObject(player);
}

void ControlDeviceAdapter::setControlledObject(TangibleObject* object) {
	(static_cast<ControlDevice*>(stub))->setControlledObject(object);
}

TangibleObject* ControlDeviceAdapter::getControlledObject() {
	return (static_cast<ControlDevice*>(stub))->getControlledObject();
}

bool ControlDeviceAdapter::isControlDevice() {
	return (static_cast<ControlDevice*>(stub))->isControlDevice();
}

/*
 *	ControlDeviceHelper
 */

ControlDeviceHelper* ControlDeviceHelper::staticInitializer = ControlDeviceHelper::instance();

ControlDeviceHelper::ControlDeviceHelper() {
	className = "ControlDevice";

	Core::getObjectBroker()->registerClass(className, this);
}

void ControlDeviceHelper::finalizeHelper() {
	ControlDeviceHelper::finalize();
}

DistributedObject* ControlDeviceHelper::instantiateObject() {
	return new ControlDevice(DummyConstructorParameter::instance());
}

DistributedObjectServant* ControlDeviceHelper::instantiateServant() {
	return new ControlDeviceImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ControlDeviceHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ControlDeviceAdapter(static_cast<ControlDevice*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

