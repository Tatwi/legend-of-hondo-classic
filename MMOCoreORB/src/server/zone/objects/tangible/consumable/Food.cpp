/*
 *	server/zone/objects/tangible/consumable/Food.cpp generated by engine3 IDL compiler 0.60
 */

#include "Food.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

/*
 *	FoodStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_INITIALIZEPRIVATEDATA__};

Food::Food() : Consumable(DummyConstructorParameter::instance()) {
	FoodImplementation* _implementation = new FoodImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

Food::Food(DummyConstructorParameter* param) : Consumable(param) {
}

Food::~Food() {
}



void Food::initializeTransientMembers() {
	FoodImplementation* _implementation = static_cast<FoodImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void Food::initializePrivateData() {
	FoodImplementation* _implementation = static_cast<FoodImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZEPRIVATEDATA__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializePrivateData();
}

DistributedObjectServant* Food::_getImplementation() {

	_updated = true;
	return _impl;
}

void Food::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	FoodImplementation
 */

FoodImplementation::FoodImplementation(DummyConstructorParameter* param) : ConsumableImplementation(param) {
	_initializeImplementation();
}


FoodImplementation::~FoodImplementation() {
}


void FoodImplementation::finalize() {
}

void FoodImplementation::_initializeImplementation() {
	_setClassHelper(FoodHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void FoodImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Food*>(stub);
	ConsumableImplementation::_setStub(stub);
}

DistributedObjectStub* FoodImplementation::_getStub() {
	return _this;
}

FoodImplementation::operator const Food*() {
	return _this;
}

void FoodImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FoodImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FoodImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FoodImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FoodImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FoodImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FoodImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FoodImplementation::_serializationHelperMethod() {
	ConsumableImplementation::_serializationHelperMethod();

	_setClassName("Food");

}

void FoodImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(FoodImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool FoodImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ConsumableImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void FoodImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FoodImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FoodImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + ConsumableImplementation::writeObjectMembers(stream);
}

FoodImplementation::FoodImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/consumable/Food.idl():  		Logger.setLoggingName("Food");
	Logger::setLoggingName("Food");
	// server/zone/objects/tangible/consumable/Food.idl():  		initializePrivateData();
	initializePrivateData();
}

void FoodImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/consumable/Food.idl():  		super.initializeTransientMembers();
	ConsumableImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/consumable/Food.idl():  		Logger.setLoggingName("Food");
	Logger::setLoggingName("Food");
}

void FoodImplementation::initializePrivateData() {
	// server/zone/objects/tangible/consumable/Food.idl():  		super.consumableType = super.FOOD;
	ConsumableImplementation::consumableType = ConsumableImplementation::FOOD;
}

/*
 *	FoodAdapter
 */

FoodAdapter::FoodAdapter(Food* obj) : ConsumableAdapter(obj) {
}

Packet* FoodAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_INITIALIZEPRIVATEDATA__:
		initializePrivateData();
		break;
	default:
		return NULL;
	}

	return resp;
}

void FoodAdapter::initializeTransientMembers() {
	(static_cast<Food*>(stub))->initializeTransientMembers();
}

void FoodAdapter::initializePrivateData() {
	(static_cast<Food*>(stub))->initializePrivateData();
}

/*
 *	FoodHelper
 */

FoodHelper* FoodHelper::staticInitializer = FoodHelper::instance();

FoodHelper::FoodHelper() {
	className = "Food";

	Core::getObjectBroker()->registerClass(className, this);
}

void FoodHelper::finalizeHelper() {
	FoodHelper::finalize();
}

DistributedObject* FoodHelper::instantiateObject() {
	return new Food(DummyConstructorParameter::instance());
}

DistributedObjectServant* FoodHelper::instantiateServant() {
	return new FoodImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FoodHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FoodAdapter(static_cast<Food*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

