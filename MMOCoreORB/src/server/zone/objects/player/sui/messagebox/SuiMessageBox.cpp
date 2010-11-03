/*
 *	server/zone/objects/player/sui/messagebox/SuiMessageBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiMessageBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	SuiMessageBoxStub
 */

SuiMessageBox::SuiMessageBox(PlayerCreature* player, unsigned int windowType) : SuiBox(DummyConstructorParameter::instance()) {
	SuiMessageBoxImplementation* _implementation = new SuiMessageBoxImplementation(player, windowType);
	_impl = _implementation;
	_impl->_setStub(this);
}

SuiMessageBox::SuiMessageBox(DummyConstructorParameter* param) : SuiBox(param) {
}

SuiMessageBox::~SuiMessageBox() {
}


BaseMessage* SuiMessageBox::generateMessage() {
	SuiMessageBoxImplementation* _implementation = (SuiMessageBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return _implementation->generateMessage();
}

bool SuiMessageBox::isMessageBox() {
	SuiMessageBoxImplementation* _implementation = (SuiMessageBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isMessageBox();
}

DistributedObjectServant* SuiMessageBox::_getImplementation() {
	return _impl;}

void SuiMessageBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	SuiMessageBoxImplementation
 */

SuiMessageBoxImplementation::SuiMessageBoxImplementation(DummyConstructorParameter* param) : SuiBoxImplementation(param) {
	_initializeImplementation();
}


SuiMessageBoxImplementation::~SuiMessageBoxImplementation() {
}


void SuiMessageBoxImplementation::finalize() {
}

void SuiMessageBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiMessageBoxHelper::instance());

	_serializationHelperMethod();
}

void SuiMessageBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SuiMessageBox*) stub;
	SuiBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiMessageBoxImplementation::_getStub() {
	return _this;
}

SuiMessageBoxImplementation::operator const SuiMessageBox*() {
	return _this;
}

void SuiMessageBoxImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SuiMessageBoxImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SuiMessageBoxImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SuiMessageBoxImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SuiMessageBoxImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SuiMessageBoxImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SuiMessageBoxImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SuiMessageBoxImplementation::_serializationHelperMethod() {
	SuiBoxImplementation::_serializationHelperMethod();

	_setClassName("SuiMessageBox");

}

SuiMessageBoxImplementation::SuiMessageBoxImplementation(PlayerCreature* player, unsigned int windowType) : SuiBoxImplementation(player, windowType, SuiBox::MESSAGEBOX) {
	_initializeImplementation();
	// server/zone/objects/player/sui/messagebox/SuiMessageBox.idl(59):  		;
}

bool SuiMessageBoxImplementation::isMessageBox() {
	// server/zone/objects/player/sui/messagebox/SuiMessageBox.idl(65):  		return true;
	return true;
}

/*
 *	SuiMessageBoxAdapter
 */

SuiMessageBoxAdapter::SuiMessageBoxAdapter(SuiMessageBoxImplementation* obj) : SuiBoxAdapter(obj) {
}

Packet* SuiMessageBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertLong(generateMessage()->_getObjectID());
		break;
	case 7:
		resp->insertBoolean(isMessageBox());
		break;
	default:
		return NULL;
	}

	return resp;
}

BaseMessage* SuiMessageBoxAdapter::generateMessage() {
	return ((SuiMessageBoxImplementation*) impl)->generateMessage();
}

bool SuiMessageBoxAdapter::isMessageBox() {
	return ((SuiMessageBoxImplementation*) impl)->isMessageBox();
}

/*
 *	SuiMessageBoxHelper
 */

SuiMessageBoxHelper* SuiMessageBoxHelper::staticInitializer = SuiMessageBoxHelper::instance();

SuiMessageBoxHelper::SuiMessageBoxHelper() {
	className = "SuiMessageBox";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void SuiMessageBoxHelper::finalizeHelper() {
	SuiMessageBoxHelper::finalize();
}

DistributedObject* SuiMessageBoxHelper::instantiateObject() {
	return new SuiMessageBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiMessageBoxHelper::instantiateServant() {
	return new SuiMessageBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiMessageBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiMessageBoxAdapter((SuiMessageBoxImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

