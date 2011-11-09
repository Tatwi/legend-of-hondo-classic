/*
 *	server/zone/managers/radial/RadialManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "RadialManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	RadialManagerStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_LONG_ = 6,RPC_HANDLEOBJECTMENUREQUEST__CREATUREOBJECT_OBJECTMENURESPONSE_LONG_};

RadialManager::RadialManager(ZoneServer* server) : ManagedObject(DummyConstructorParameter::instance()) {
	RadialManagerImplementation* _implementation = new RadialManagerImplementation(server);
	_impl = _implementation;
	_impl->_setStub(this);
}

RadialManager::RadialManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

RadialManager::~RadialManager() {
}



void RadialManager::handleObjectMenuSelect(CreatureObject* player, byte selectID, unsigned long long objectID) {
	RadialManagerImplementation* _implementation = static_cast<RadialManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_LONG_);
		method.addObjectParameter(player);
		method.addByteParameter(selectID);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else
		_implementation->handleObjectMenuSelect(player, selectID, objectID);
}

void RadialManager::handleObjectMenuRequest(CreatureObject* player, ObjectMenuResponse* defaultMenuResponse, unsigned long long objectID) {
	RadialManagerImplementation* _implementation = static_cast<RadialManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUREQUEST__CREATUREOBJECT_OBJECTMENURESPONSE_LONG_);
		method.addObjectParameter(player);
		method.addObjectParameter(defaultMenuResponse);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else
		_implementation->handleObjectMenuRequest(player, defaultMenuResponse, objectID);
}

DistributedObjectServant* RadialManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void RadialManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RadialManagerImplementation
 */

RadialManagerImplementation::RadialManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


RadialManagerImplementation::~RadialManagerImplementation() {
}


void RadialManagerImplementation::finalize() {
}

void RadialManagerImplementation::_initializeImplementation() {
	_setClassHelper(RadialManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RadialManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<RadialManager*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* RadialManagerImplementation::_getStub() {
	return _this;
}

RadialManagerImplementation::operator const RadialManager*() {
	return _this;
}

void RadialManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void RadialManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void RadialManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void RadialManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void RadialManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void RadialManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void RadialManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void RadialManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("RadialManager");

}

void RadialManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(RadialManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RadialManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "zoneServer") {
		TypeInfo<ManagedWeakReference<ZoneServer* > >::parseFromBinaryStream(&zoneServer, stream);
		return true;
	}


	return false;
}

void RadialManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RadialManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RadialManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "zoneServer";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<ZoneServer* > >::toBinaryStream(&zoneServer, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + ManagedObjectImplementation::writeObjectMembers(stream);
}

/*
 *	RadialManagerAdapter
 */

RadialManagerAdapter::RadialManagerAdapter(RadialManager* obj) : ManagedObjectAdapter(obj) {
}

Packet* RadialManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_LONG_:
		handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter(), inv->getUnsignedLongParameter());
		break;
	case RPC_HANDLEOBJECTMENUREQUEST__CREATUREOBJECT_OBJECTMENURESPONSE_LONG_:
		handleObjectMenuRequest(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<ObjectMenuResponse*>(inv->getObjectParameter()), inv->getUnsignedLongParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void RadialManagerAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectID, unsigned long long objectID) {
	(static_cast<RadialManager*>(stub))->handleObjectMenuSelect(player, selectID, objectID);
}

void RadialManagerAdapter::handleObjectMenuRequest(CreatureObject* player, ObjectMenuResponse* defaultMenuResponse, unsigned long long objectID) {
	(static_cast<RadialManager*>(stub))->handleObjectMenuRequest(player, defaultMenuResponse, objectID);
}

/*
 *	RadialManagerHelper
 */

RadialManagerHelper* RadialManagerHelper::staticInitializer = RadialManagerHelper::instance();

RadialManagerHelper::RadialManagerHelper() {
	className = "RadialManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void RadialManagerHelper::finalizeHelper() {
	RadialManagerHelper::finalize();
}

DistributedObject* RadialManagerHelper::instantiateObject() {
	return new RadialManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* RadialManagerHelper::instantiateServant() {
	return new RadialManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* RadialManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RadialManagerAdapter(static_cast<RadialManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

