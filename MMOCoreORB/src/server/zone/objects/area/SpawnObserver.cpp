/*
 *	server/zone/objects/area/SpawnObserver.cpp generated by engine3 IDL compiler 0.60
 */

#include "SpawnObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	SpawnObserverStub
 */

enum {RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_ = 6};

SpawnObserver::SpawnObserver(SpawnArea* area) : Observer(DummyConstructorParameter::instance()) {
	SpawnObserverImplementation* _implementation = new SpawnObserverImplementation(area);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SpawnObserver");
}

SpawnObserver::SpawnObserver(DummyConstructorParameter* param) : Observer(param) {
	_setClassName("SpawnObserver");
}

SpawnObserver::~SpawnObserver() {
}



int SpawnObserver::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	SpawnObserverImplementation* _implementation = static_cast<SpawnObserverImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
}

DistributedObjectServant* SpawnObserver::_getImplementation() {

	_updated = true;
	return _impl;
}

void SpawnObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SpawnObserverImplementation
 */

SpawnObserverImplementation::SpawnObserverImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


SpawnObserverImplementation::~SpawnObserverImplementation() {
}


void SpawnObserverImplementation::finalize() {
}

void SpawnObserverImplementation::_initializeImplementation() {
	_setClassHelper(SpawnObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SpawnObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SpawnObserver*>(stub);
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* SpawnObserverImplementation::_getStub() {
	return _this;
}

SpawnObserverImplementation::operator const SpawnObserver*() {
	return _this;
}

void SpawnObserverImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SpawnObserverImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SpawnObserverImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SpawnObserverImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SpawnObserverImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SpawnObserverImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SpawnObserverImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SpawnObserverImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("SpawnObserver");

}

void SpawnObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SpawnObserverImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SpawnObserverImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ObserverImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "SpawnObserver.spawnArea") {
		TypeInfo<ManagedWeakReference<SpawnArea* > >::parseFromBinaryStream(&spawnArea, stream);
		return true;
	}


	return false;
}

void SpawnObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SpawnObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SpawnObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObserverImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "SpawnObserver.spawnArea";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<SpawnArea* > >::toBinaryStream(&spawnArea, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

SpawnObserverImplementation::SpawnObserverImplementation(SpawnArea* area) {
	_initializeImplementation();
	// server/zone/objects/area/SpawnObserver.idl():  		spawnArea = area;
	spawnArea = area;
	// server/zone/objects/area/SpawnObserver.idl():  		Logger.setLoggingName("SpawnObserver");
	Logger::setLoggingName("SpawnObserver");
}

int SpawnObserverImplementation::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	// server/zone/objects/area/SpawnObserver.idl():  			return spawnArea.notifyObserverEvent(eventType, observable, arg1, arg2);
	if (spawnArea == NULL)	// server/zone/objects/area/SpawnObserver.idl():  			return 1;
	return 1;

	else 	// server/zone/objects/area/SpawnObserver.idl():  			return spawnArea.notifyObserverEvent(eventType, observable, arg1, arg2);
	return spawnArea->notifyObserverEvent(eventType, observable, arg1, arg2);
}

/*
 *	SpawnObserverAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SpawnObserverAdapter::SpawnObserverAdapter(SpawnObserver* obj) : ObserverAdapter(obj) {
}

void SpawnObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int SpawnObserverAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<SpawnObserver*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

/*
 *	SpawnObserverHelper
 */

SpawnObserverHelper* SpawnObserverHelper::staticInitializer = SpawnObserverHelper::instance();

SpawnObserverHelper::SpawnObserverHelper() {
	className = "SpawnObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void SpawnObserverHelper::finalizeHelper() {
	SpawnObserverHelper::finalize();
}

DistributedObject* SpawnObserverHelper::instantiateObject() {
	return new SpawnObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* SpawnObserverHelper::instantiateServant() {
	return new SpawnObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SpawnObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SpawnObserverAdapter(static_cast<SpawnObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

