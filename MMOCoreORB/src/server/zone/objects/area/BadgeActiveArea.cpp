/*
 *	server/zone/objects/area/BadgeActiveArea.cpp generated by engine3 IDL compiler 0.60
 */

#include "BadgeActiveArea.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	BadgeActiveAreaStub
 */

BadgeActiveArea::BadgeActiveArea() : ActiveArea(DummyConstructorParameter::instance()) {
	BadgeActiveAreaImplementation* _implementation = new BadgeActiveAreaImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

BadgeActiveArea::BadgeActiveArea(DummyConstructorParameter* param) : ActiveArea(param) {
}

BadgeActiveArea::~BadgeActiveArea() {
}


void BadgeActiveArea::notifyEnter(SceneObject* player) {
	BadgeActiveAreaImplementation* _implementation = (BadgeActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyEnter(player);
}

void BadgeActiveArea::setBadge(unsigned int a) {
	BadgeActiveAreaImplementation* _implementation = (BadgeActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnsignedIntParameter(a);

		method.executeWithVoidReturn();
	} else
		_implementation->setBadge(a);
}

unsigned int BadgeActiveArea::getBadge() {
	BadgeActiveAreaImplementation* _implementation = (BadgeActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getBadge();
}

DistributedObjectServant* BadgeActiveArea::_getImplementation() {
	return _impl;}

void BadgeActiveArea::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	BadgeActiveAreaImplementation
 */

BadgeActiveAreaImplementation::BadgeActiveAreaImplementation(DummyConstructorParameter* param) : ActiveAreaImplementation(param) {
	_initializeImplementation();
}


BadgeActiveAreaImplementation::~BadgeActiveAreaImplementation() {
}


void BadgeActiveAreaImplementation::finalize() {
}

void BadgeActiveAreaImplementation::_initializeImplementation() {
	_setClassHelper(BadgeActiveAreaHelper::instance());

	_serializationHelperMethod();
}

void BadgeActiveAreaImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BadgeActiveArea*) stub;
	ActiveAreaImplementation::_setStub(stub);
}

DistributedObjectStub* BadgeActiveAreaImplementation::_getStub() {
	return _this;
}

BadgeActiveAreaImplementation::operator const BadgeActiveArea*() {
	return _this;
}

void BadgeActiveAreaImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BadgeActiveAreaImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BadgeActiveAreaImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BadgeActiveAreaImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BadgeActiveAreaImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BadgeActiveAreaImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BadgeActiveAreaImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BadgeActiveAreaImplementation::_serializationHelperMethod() {
	ActiveAreaImplementation::_serializationHelperMethod();

	_setClassName("BadgeActiveArea");

	addSerializableVariable("areaBadge", &areaBadge);
}

BadgeActiveAreaImplementation::BadgeActiveAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/BadgeActiveArea.idl(56):  		areaBadge = 0;
	areaBadge = 0;
	// server/zone/objects/area/BadgeActiveArea.idl(58):  		Logger.setLoggingName("BadgeActiveArea");
	Logger::setLoggingName("BadgeActiveArea");
}

void BadgeActiveAreaImplementation::notifyEnter(SceneObject* player) {
	// server/zone/objects/area/BadgeActiveArea.idl(62):  		PlayerCreature 
	if (!player->isPlayerCreature())	// server/zone/objects/area/BadgeActiveArea.idl(63):  			return;
	return;
	// server/zone/objects/area/BadgeActiveArea.idl(65):  playerCreature = (PlayerCreature) player;
	PlayerCreature* playerCreature = (PlayerCreature*) player;
	// server/zone/objects/area/BadgeActiveArea.idl(67):  	}
	if (!playerCreature->hasBadge(areaBadge)){
	// server/zone/objects/area/BadgeActiveArea.idl(68):  			playerCreature.awardBadge(areaBadge);
	playerCreature->awardBadge(areaBadge);
}
}

void BadgeActiveAreaImplementation::setBadge(unsigned int a) {
	// server/zone/objects/area/BadgeActiveArea.idl(73):  		areaBadge = a;
	areaBadge = a;
}

unsigned int BadgeActiveAreaImplementation::getBadge() {
	// server/zone/objects/area/BadgeActiveArea.idl(77):  		return areaBadge;
	return areaBadge;
}

/*
 *	BadgeActiveAreaAdapter
 */

BadgeActiveAreaAdapter::BadgeActiveAreaAdapter(BadgeActiveAreaImplementation* obj) : ActiveAreaAdapter(obj) {
}

Packet* BadgeActiveAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		notifyEnter((SceneObject*) inv->getObjectParameter());
		break;
	case 7:
		setBadge(inv->getUnsignedIntParameter());
		break;
	case 8:
		resp->insertInt(getBadge());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BadgeActiveAreaAdapter::notifyEnter(SceneObject* player) {
	((BadgeActiveAreaImplementation*) impl)->notifyEnter(player);
}

void BadgeActiveAreaAdapter::setBadge(unsigned int a) {
	((BadgeActiveAreaImplementation*) impl)->setBadge(a);
}

unsigned int BadgeActiveAreaAdapter::getBadge() {
	return ((BadgeActiveAreaImplementation*) impl)->getBadge();
}

/*
 *	BadgeActiveAreaHelper
 */

BadgeActiveAreaHelper* BadgeActiveAreaHelper::staticInitializer = BadgeActiveAreaHelper::instance();

BadgeActiveAreaHelper::BadgeActiveAreaHelper() {
	className = "BadgeActiveArea";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BadgeActiveAreaHelper::finalizeHelper() {
	BadgeActiveAreaHelper::finalize();
}

DistributedObject* BadgeActiveAreaHelper::instantiateObject() {
	return new BadgeActiveArea(DummyConstructorParameter::instance());
}

DistributedObjectServant* BadgeActiveAreaHelper::instantiateServant() {
	return new BadgeActiveAreaImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BadgeActiveAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BadgeActiveAreaAdapter((BadgeActiveAreaImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

