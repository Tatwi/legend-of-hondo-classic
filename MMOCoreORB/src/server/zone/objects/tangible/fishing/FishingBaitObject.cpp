/*
 *	server/zone/objects/tangible/fishing/FishingBaitObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "FishingBaitObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	FishingBaitObjectStub
 */

FishingBaitObject::FishingBaitObject() : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new FishingBaitObjectImplementation();
	_impl->_setStub(this);
}

FishingBaitObject::FishingBaitObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

FishingBaitObject::~FishingBaitObject() {
}


void FishingBaitObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((FishingBaitObjectImplementation*) _impl)->initializeTransientMembers();
}

int FishingBaitObject::getFreshness() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithSignedIntReturn();
	} else
		return ((FishingBaitObjectImplementation*) _impl)->getFreshness();
}

void FishingBaitObject::lessFresh() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((FishingBaitObjectImplementation*) _impl)->lessFresh();
}

void FishingBaitObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(msg);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((FishingBaitObjectImplementation*) _impl)->fillAttributeList(msg, object);
}

/*
 *	FishingBaitObjectImplementation
 */

FishingBaitObjectImplementation::FishingBaitObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}

FishingBaitObjectImplementation::~FishingBaitObjectImplementation() {
}


void FishingBaitObjectImplementation::finalize() {
}

void FishingBaitObjectImplementation::_initializeImplementation() {
	_setClassHelper(FishingBaitObjectHelper::instance());

	_serializationHelperMethod();
}

void FishingBaitObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (FishingBaitObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FishingBaitObjectImplementation::_getStub() {
	return _this;
}

FishingBaitObjectImplementation::operator const FishingBaitObject*() {
	return _this;
}

void FishingBaitObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FishingBaitObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FishingBaitObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FishingBaitObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FishingBaitObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FishingBaitObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FishingBaitObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FishingBaitObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("FishingBaitObject");

	addSerializableVariable("freshness", &freshness);
}

FishingBaitObjectImplementation::FishingBaitObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(58):  		Logger.setLoggingName("FishingBaitObject");
	Logger::setLoggingName("FishingBaitObject");
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(59):  		freshness = 0;
	freshness = 0;
}

void FishingBaitObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(63):  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(65):  		Logger.setLoggingName("FishingBaitObject");
	Logger::setLoggingName("FishingBaitObject");
}

int FishingBaitObjectImplementation::getFreshness() {
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(69):  		return freshness;
	return freshness;
}

void FishingBaitObjectImplementation::lessFresh() {
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(73):  		freshness += 1;
	freshness += 1;
}

/*
 *	FishingBaitObjectAdapter
 */

FishingBaitObjectAdapter::FishingBaitObjectAdapter(FishingBaitObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* FishingBaitObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(getFreshness());
		break;
	case 8:
		lessFresh();
		break;
	case 9:
		fillAttributeList((AttributeListMessage*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void FishingBaitObjectAdapter::initializeTransientMembers() {
	((FishingBaitObjectImplementation*) impl)->initializeTransientMembers();
}

int FishingBaitObjectAdapter::getFreshness() {
	return ((FishingBaitObjectImplementation*) impl)->getFreshness();
}

void FishingBaitObjectAdapter::lessFresh() {
	((FishingBaitObjectImplementation*) impl)->lessFresh();
}

void FishingBaitObjectAdapter::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	((FishingBaitObjectImplementation*) impl)->fillAttributeList(msg, object);
}

/*
 *	FishingBaitObjectHelper
 */

FishingBaitObjectHelper* FishingBaitObjectHelper::staticInitializer = FishingBaitObjectHelper::instance();

FishingBaitObjectHelper::FishingBaitObjectHelper() {
	className = "FishingBaitObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void FishingBaitObjectHelper::finalizeHelper() {
	FishingBaitObjectHelper::finalize();
}

DistributedObject* FishingBaitObjectHelper::instantiateObject() {
	return new FishingBaitObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* FishingBaitObjectHelper::instantiateServant() {
	return new FishingBaitObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FishingBaitObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FishingBaitObjectAdapter((FishingBaitObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

