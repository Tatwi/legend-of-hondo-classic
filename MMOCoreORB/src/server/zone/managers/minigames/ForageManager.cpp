/*
 *	server/zone/managers/minigames/ForageManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "ForageManager.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneServer.h"

/*
 *	ForageManagerStub
 */

enum {RPC_DELETEFORAGEAREACOLLECTION__STRING_ = 6,RPC_STARTFORAGING__CREATUREOBJECT_INT_,RPC_FINISHFORAGING__CREATUREOBJECT_INT_FLOAT_FLOAT_STRING_,RPC_FORAGEGIVEITEMS__CREATUREOBJECT_INT_FLOAT_FLOAT_STRING_,RPC_FORAGEGIVERESOURCE__CREATUREOBJECT_FLOAT_FLOAT_STRING_STRING_};

ForageManager::ForageManager() : Observer(DummyConstructorParameter::instance()) {
	ForageManagerImplementation* _implementation = new ForageManagerImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

ForageManager::ForageManager(DummyConstructorParameter* param) : Observer(param) {
}

ForageManager::~ForageManager() {
}



void ForageManager::deleteForageAreaCollection(String& playerName) {
	ForageManagerImplementation* _implementation = static_cast<ForageManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DELETEFORAGEAREACOLLECTION__STRING_);
		method.addAsciiParameter(playerName);

		method.executeWithVoidReturn();
	} else
		_implementation->deleteForageAreaCollection(playerName);
}

void ForageManager::startForaging(CreatureObject* player, int forageType) {
	ForageManagerImplementation* _implementation = static_cast<ForageManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STARTFORAGING__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(forageType);

		method.executeWithVoidReturn();
	} else
		_implementation->startForaging(player, forageType);
}

void ForageManager::finishForaging(CreatureObject* player, int forageType, float forageX, float forageY, const String& planet) {
	ForageManagerImplementation* _implementation = static_cast<ForageManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FINISHFORAGING__CREATUREOBJECT_INT_FLOAT_FLOAT_STRING_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(forageType);
		method.addFloatParameter(forageX);
		method.addFloatParameter(forageY);
		method.addAsciiParameter(planet);

		method.executeWithVoidReturn();
	} else
		_implementation->finishForaging(player, forageType, forageX, forageY, planet);
}

bool ForageManager::forageGiveItems(CreatureObject* player, int forageType, float forageX, float forageY, const String& planet) {
	ForageManagerImplementation* _implementation = static_cast<ForageManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FORAGEGIVEITEMS__CREATUREOBJECT_INT_FLOAT_FLOAT_STRING_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(forageType);
		method.addFloatParameter(forageX);
		method.addFloatParameter(forageY);
		method.addAsciiParameter(planet);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->forageGiveItems(player, forageType, forageX, forageY, planet);
}

bool ForageManager::forageGiveResource(CreatureObject* player, float forageX, float forageY, const String& planet, String& resType) {
	ForageManagerImplementation* _implementation = static_cast<ForageManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FORAGEGIVERESOURCE__CREATUREOBJECT_FLOAT_FLOAT_STRING_STRING_);
		method.addObjectParameter(player);
		method.addFloatParameter(forageX);
		method.addFloatParameter(forageY);
		method.addAsciiParameter(planet);
		method.addAsciiParameter(resType);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->forageGiveResource(player, forageX, forageY, planet, resType);
}

DistributedObjectServant* ForageManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void ForageManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ForageManagerImplementation
 */

ForageManagerImplementation::ForageManagerImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


ForageManagerImplementation::~ForageManagerImplementation() {
}


void ForageManagerImplementation::finalize() {
}

void ForageManagerImplementation::_initializeImplementation() {
	_setClassHelper(ForageManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ForageManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ForageManager*>(stub);
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* ForageManagerImplementation::_getStub() {
	return _this;
}

ForageManagerImplementation::operator const ForageManager*() {
	return _this;
}

void ForageManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ForageManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ForageManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ForageManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ForageManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ForageManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ForageManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ForageManagerImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("ForageManager");

}

void ForageManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ForageManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ForageManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ObserverImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "ForageManager.forageAreas") {
		TypeInfo<ForageMap >::parseFromBinaryStream(&forageAreas, stream);
		return true;
	}


	return false;
}

void ForageManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ForageManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ForageManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "ForageManager.forageAreas";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ForageMap >::toBinaryStream(&forageAreas, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + ObserverImplementation::writeObjectMembers(stream);
}

ForageManagerImplementation::ForageManagerImplementation() {
	_initializeImplementation();
	// server/zone/managers/minigames/ForageManager.idl():  		Logger.setLoggingName("ForageManager");
	Logger::setLoggingName("ForageManager");
	// server/zone/managers/minigames/ForageManager.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/minigames/ForageManager.idl():  		forageAreas.setNullValue(null);
	(&forageAreas)->setNullValue(NULL);
}

void ForageManagerImplementation::deleteForageAreaCollection(String& playerName) {
	// server/zone/managers/minigames/ForageManager.idl():  		forageAreas.drop(playerName);
	(&forageAreas)->drop(playerName);
}

/*
 *	ForageManagerAdapter
 */

ForageManagerAdapter::ForageManagerAdapter(ForageManager* obj) : ObserverAdapter(obj) {
}

Packet* ForageManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_DELETEFORAGEAREACOLLECTION__STRING_:
		deleteForageAreaCollection(inv->getAsciiParameter(_param0_deleteForageAreaCollection__String_));
		break;
	case RPC_STARTFORAGING__CREATUREOBJECT_INT_:
		startForaging(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getSignedIntParameter());
		break;
	case RPC_FINISHFORAGING__CREATUREOBJECT_INT_FLOAT_FLOAT_STRING_:
		finishForaging(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getAsciiParameter(_param4_finishForaging__CreatureObject_int_float_float_String_));
		break;
	case RPC_FORAGEGIVEITEMS__CREATUREOBJECT_INT_FLOAT_FLOAT_STRING_:
		resp->insertBoolean(forageGiveItems(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getAsciiParameter(_param4_forageGiveItems__CreatureObject_int_float_float_String_)));
		break;
	case RPC_FORAGEGIVERESOURCE__CREATUREOBJECT_FLOAT_FLOAT_STRING_STRING_:
		resp->insertBoolean(forageGiveResource(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getFloatParameter(), inv->getFloatParameter(), inv->getAsciiParameter(_param3_forageGiveResource__CreatureObject_float_float_String_String_), inv->getAsciiParameter(_param4_forageGiveResource__CreatureObject_float_float_String_String_)));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ForageManagerAdapter::deleteForageAreaCollection(String& playerName) {
	(static_cast<ForageManager*>(stub))->deleteForageAreaCollection(playerName);
}

void ForageManagerAdapter::startForaging(CreatureObject* player, int forageType) {
	(static_cast<ForageManager*>(stub))->startForaging(player, forageType);
}

void ForageManagerAdapter::finishForaging(CreatureObject* player, int forageType, float forageX, float forageY, const String& planet) {
	(static_cast<ForageManager*>(stub))->finishForaging(player, forageType, forageX, forageY, planet);
}

bool ForageManagerAdapter::forageGiveItems(CreatureObject* player, int forageType, float forageX, float forageY, const String& planet) {
	return (static_cast<ForageManager*>(stub))->forageGiveItems(player, forageType, forageX, forageY, planet);
}

bool ForageManagerAdapter::forageGiveResource(CreatureObject* player, float forageX, float forageY, const String& planet, String& resType) {
	return (static_cast<ForageManager*>(stub))->forageGiveResource(player, forageX, forageY, planet, resType);
}

/*
 *	ForageManagerHelper
 */

ForageManagerHelper* ForageManagerHelper::staticInitializer = ForageManagerHelper::instance();

ForageManagerHelper::ForageManagerHelper() {
	className = "ForageManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void ForageManagerHelper::finalizeHelper() {
	ForageManagerHelper::finalize();
}

DistributedObject* ForageManagerHelper::instantiateObject() {
	return new ForageManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* ForageManagerHelper::instantiateServant() {
	return new ForageManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ForageManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ForageManagerAdapter(static_cast<ForageManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

