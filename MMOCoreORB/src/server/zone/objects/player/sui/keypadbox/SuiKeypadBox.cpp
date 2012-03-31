/*
 *	server/zone/objects/player/sui/keypadbox/SuiKeypadBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiKeypadBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	SuiKeypadBoxStub
 */

enum {RPC_GENERATEMESSAGE__ = 6,RPC_ISKEYPADBOX__};

SuiKeypadBox::SuiKeypadBox(CreatureObject* player, unsigned int windowType) : SuiBox(DummyConstructorParameter::instance()) {
	SuiKeypadBoxImplementation* _implementation = new SuiKeypadBoxImplementation(player, windowType);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SuiKeypadBox");
}

SuiKeypadBox::SuiKeypadBox(DummyConstructorParameter* param) : SuiBox(param) {
	_setClassName("SuiKeypadBox");
}

SuiKeypadBox::~SuiKeypadBox() {
}



BaseMessage* SuiKeypadBox::generateMessage() {
	SuiKeypadBoxImplementation* _implementation = static_cast<SuiKeypadBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GENERATEMESSAGE__);

		return static_cast<BaseMessage*>(method.executeWithObjectReturn());
	} else
		return _implementation->generateMessage();
}

bool SuiKeypadBox::isKeypadBox() {
	SuiKeypadBoxImplementation* _implementation = static_cast<SuiKeypadBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISKEYPADBOX__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isKeypadBox();
}

DistributedObjectServant* SuiKeypadBox::_getImplementation() {

	_updated = true;
	return _impl;
}

void SuiKeypadBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SuiKeypadBoxImplementation
 */

SuiKeypadBoxImplementation::SuiKeypadBoxImplementation(DummyConstructorParameter* param) : SuiBoxImplementation(param) {
	_initializeImplementation();
}


SuiKeypadBoxImplementation::~SuiKeypadBoxImplementation() {
}


void SuiKeypadBoxImplementation::finalize() {
}

void SuiKeypadBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiKeypadBoxHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SuiKeypadBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SuiKeypadBox*>(stub);
	SuiBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiKeypadBoxImplementation::_getStub() {
	return _this;
}

SuiKeypadBoxImplementation::operator const SuiKeypadBox*() {
	return _this;
}

void SuiKeypadBoxImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SuiKeypadBoxImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SuiKeypadBoxImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SuiKeypadBoxImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SuiKeypadBoxImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SuiKeypadBoxImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SuiKeypadBoxImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SuiKeypadBoxImplementation::_serializationHelperMethod() {
	SuiBoxImplementation::_serializationHelperMethod();

	_setClassName("SuiKeypadBox");

}

void SuiKeypadBoxImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiKeypadBoxImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SuiKeypadBoxImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SuiBoxImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void SuiKeypadBoxImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiKeypadBoxImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiKeypadBoxImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SuiBoxImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

SuiKeypadBoxImplementation::SuiKeypadBoxImplementation(CreatureObject* player, unsigned int windowType) : SuiBoxImplementation(player, windowType, SuiBox::KEYPAD) {
	_initializeImplementation();
}

bool SuiKeypadBoxImplementation::isKeypadBox() {
	// server/zone/objects/player/sui/keypadbox/SuiKeypadBox.idl():  		return true;
	return true;
}

/*
 *	SuiKeypadBoxAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SuiKeypadBoxAdapter::SuiKeypadBoxAdapter(SuiKeypadBox* obj) : SuiBoxAdapter(obj) {
}

void SuiKeypadBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GENERATEMESSAGE__:
		resp->insertLong(generateMessage()->_getObjectID());
		break;
	case RPC_ISKEYPADBOX__:
		resp->insertBoolean(isKeypadBox());
		break;
	default:
		throw Exception("Method does not exists");
	}
}

BaseMessage* SuiKeypadBoxAdapter::generateMessage() {
	return (static_cast<SuiKeypadBox*>(stub))->generateMessage();
}

bool SuiKeypadBoxAdapter::isKeypadBox() {
	return (static_cast<SuiKeypadBox*>(stub))->isKeypadBox();
}

/*
 *	SuiKeypadBoxHelper
 */

SuiKeypadBoxHelper* SuiKeypadBoxHelper::staticInitializer = SuiKeypadBoxHelper::instance();

SuiKeypadBoxHelper::SuiKeypadBoxHelper() {
	className = "SuiKeypadBox";

	Core::getObjectBroker()->registerClass(className, this);
}

void SuiKeypadBoxHelper::finalizeHelper() {
	SuiKeypadBoxHelper::finalize();
}

DistributedObject* SuiKeypadBoxHelper::instantiateObject() {
	return new SuiKeypadBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiKeypadBoxHelper::instantiateServant() {
	return new SuiKeypadBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiKeypadBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiKeypadBoxAdapter(static_cast<SuiKeypadBox*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

