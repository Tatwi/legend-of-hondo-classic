/*
 *	server/zone/managers/creature/CreatureManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "CreatureManager.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/packets/MessageCallback.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/NonPlayerCreatureObject.h"

#include "server/zone/objects/creature/AiAgent.h"

#include "server/zone/Zone.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

/*
 *	CreatureManagerStub
 */

CreatureManager::CreatureManager(Zone* planet, ZoneProcessServerImplementation* impl) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new CreatureManagerImplementation(planet, impl);
	_impl->_setStub(this);
}

CreatureManager::CreatureManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

CreatureManager::~CreatureManager() {
}


void CreatureManager::initialize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->initialize();
}

CreatureObject* CreatureManager::spawnCreature(unsigned int templateCRC, float x, float z, float y, unsigned long long parentID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnsignedIntParameter(templateCRC);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		return (CreatureObject*) method.executeWithObjectReturn();
	} else
		return ((CreatureManagerImplementation*) _impl)->spawnCreature(templateCRC, x, z, y, parentID);
}

int CreatureManager::notifyDestruction(TangibleObject* destructor, AiAgent* destructedObject, int condition) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((CreatureManagerImplementation*) _impl)->notifyDestruction(destructor, destructedObject, condition);
}

void CreatureManager::loadDynamicSpawnAreas() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->loadDynamicSpawnAreas();
}

void CreatureManager::loadSingleSpawns() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->loadSingleSpawns();
}

void CreatureManager::loadTrainers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->loadTrainers();
}

/*
 *	CreatureManagerImplementation
 */

CreatureManagerImplementation::CreatureManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

CreatureManagerImplementation::~CreatureManagerImplementation() {
}


void CreatureManagerImplementation::finalize() {
}

void CreatureManagerImplementation::_initializeImplementation() {
	_setClassHelper(CreatureManagerHelper::instance());

	_serializationHelperMethod();
}

void CreatureManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CreatureManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CreatureManagerImplementation::_getStub() {
	return _this;
}

CreatureManagerImplementation::operator const CreatureManager*() {
	return _this;
}

void CreatureManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CreatureManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CreatureManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CreatureManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CreatureManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CreatureManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CreatureManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CreatureManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("CreatureManager");

	addSerializableVariable("server", &server);
	addSerializableVariable("zone", &zone);
}

CreatureManagerImplementation::CreatureManagerImplementation(Zone* planet, ZoneProcessServerImplementation* impl) {
	_initializeImplementation();
	// server/zone/managers/creature/CreatureManager.idl(30):  		server = planet.getZoneServer();
	server = planet->getZoneServer();
	// server/zone/managers/creature/CreatureManager.idl(31):  		processor = impl;
	processor = impl;
	// server/zone/managers/creature/CreatureManager.idl(32):  		zone = planet;
	zone = planet;
	// server/zone/managers/creature/CreatureManager.idl(34):  		Logger.setLoggingName("CreatureManager");
	Logger::setLoggingName("CreatureManager");
	// server/zone/managers/creature/CreatureManager.idl(35):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/creature/CreatureManager.idl(36):  		Logger.setLogging(false);
	Logger::setLogging(false);
}

void CreatureManagerImplementation::initialize() {
	// server/zone/managers/creature/CreatureManager.idl(40):  		loadTrainers();
	loadTrainers();
	// server/zone/managers/creature/CreatureManager.idl(41):  		loadSingleSpawns();
	loadSingleSpawns();
}

/*
 *	CreatureManagerAdapter
 */

CreatureManagerAdapter::CreatureManagerAdapter(CreatureManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* CreatureManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initialize();
		break;
	case 7:
		resp->insertLong(spawnCreature(inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 8:
		loadDynamicSpawnAreas();
		break;
	case 9:
		loadSingleSpawns();
		break;
	case 10:
		loadTrainers();
		break;
	default:
		return NULL;
	}

	return resp;
}

void CreatureManagerAdapter::initialize() {
	((CreatureManagerImplementation*) impl)->initialize();
}

CreatureObject* CreatureManagerAdapter::spawnCreature(unsigned int templateCRC, float x, float z, float y, unsigned long long parentID) {
	return ((CreatureManagerImplementation*) impl)->spawnCreature(templateCRC, x, z, y, parentID);
}

void CreatureManagerAdapter::loadDynamicSpawnAreas() {
	((CreatureManagerImplementation*) impl)->loadDynamicSpawnAreas();
}

void CreatureManagerAdapter::loadSingleSpawns() {
	((CreatureManagerImplementation*) impl)->loadSingleSpawns();
}

void CreatureManagerAdapter::loadTrainers() {
	((CreatureManagerImplementation*) impl)->loadTrainers();
}

/*
 *	CreatureManagerHelper
 */

CreatureManagerHelper* CreatureManagerHelper::staticInitializer = CreatureManagerHelper::instance();

CreatureManagerHelper::CreatureManagerHelper() {
	className = "CreatureManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CreatureManagerHelper::finalizeHelper() {
	CreatureManagerHelper::finalize();
}

DistributedObject* CreatureManagerHelper::instantiateObject() {
	return new CreatureManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* CreatureManagerHelper::instantiateServant() {
	return new CreatureManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CreatureManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CreatureManagerAdapter((CreatureManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

