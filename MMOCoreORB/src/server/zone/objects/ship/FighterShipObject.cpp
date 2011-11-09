/*
 *	server/zone/objects/ship/FighterShipObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "FighterShipObject.h"

/*
 *	FighterShipObjectStub
 */

FighterShipObject::FighterShipObject() : ShipObject(DummyConstructorParameter::instance()) {
	FighterShipObjectImplementation* _implementation = new FighterShipObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

FighterShipObject::FighterShipObject(DummyConstructorParameter* param) : ShipObject(param) {
}

FighterShipObject::~FighterShipObject() {
}



DistributedObjectServant* FighterShipObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void FighterShipObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	FighterShipObjectImplementation
 */

FighterShipObjectImplementation::FighterShipObjectImplementation(DummyConstructorParameter* param) : ShipObjectImplementation(param) {
	_initializeImplementation();
}


FighterShipObjectImplementation::~FighterShipObjectImplementation() {
}


void FighterShipObjectImplementation::finalize() {
}

void FighterShipObjectImplementation::_initializeImplementation() {
	_setClassHelper(FighterShipObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void FighterShipObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<FighterShipObject*>(stub);
	ShipObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FighterShipObjectImplementation::_getStub() {
	return _this;
}

FighterShipObjectImplementation::operator const FighterShipObject*() {
	return _this;
}

void FighterShipObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FighterShipObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FighterShipObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FighterShipObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FighterShipObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FighterShipObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FighterShipObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FighterShipObjectImplementation::_serializationHelperMethod() {
	ShipObjectImplementation::_serializationHelperMethod();

	_setClassName("FighterShipObject");

}

void FighterShipObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(FighterShipObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool FighterShipObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ShipObjectImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void FighterShipObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FighterShipObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FighterShipObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + ShipObjectImplementation::writeObjectMembers(stream);
}

FighterShipObjectImplementation::FighterShipObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/ship/FighterShipObject.idl():  		Logger.setLoggingName("FighterShipObject");
	Logger::setLoggingName("FighterShipObject");
}

/*
 *	FighterShipObjectAdapter
 */

FighterShipObjectAdapter::FighterShipObjectAdapter(FighterShipObject* obj) : ShipObjectAdapter(obj) {
}

Packet* FighterShipObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	FighterShipObjectHelper
 */

FighterShipObjectHelper* FighterShipObjectHelper::staticInitializer = FighterShipObjectHelper::instance();

FighterShipObjectHelper::FighterShipObjectHelper() {
	className = "FighterShipObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void FighterShipObjectHelper::finalizeHelper() {
	FighterShipObjectHelper::finalize();
}

DistributedObject* FighterShipObjectHelper::instantiateObject() {
	return new FighterShipObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* FighterShipObjectHelper::instantiateServant() {
	return new FighterShipObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FighterShipObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FighterShipObjectAdapter(static_cast<FighterShipObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

