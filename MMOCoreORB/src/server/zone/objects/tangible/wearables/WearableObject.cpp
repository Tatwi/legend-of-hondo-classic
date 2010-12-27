/*
 *	server/zone/objects/tangible/wearables/WearableObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "WearableObject.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/Zone.h"

/*
 *	WearableObjectStub
 */

WearableObject::WearableObject() : TangibleObject(DummyConstructorParameter::instance()) {
	WearableObjectImplementation* _implementation = new WearableObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

WearableObject::WearableObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

WearableObject::~WearableObject() {
}


void WearableObject::initializeTransientMembers() {
	WearableObjectImplementation* _implementation = (WearableObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void WearableObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	WearableObjectImplementation* _implementation = (WearableObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void WearableObject::updateCraftingValues(ManufactureSchematic* schematic) {
	WearableObjectImplementation* _implementation = (WearableObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCraftingValues(schematic);
}

bool WearableObject::isWearableObject() {
	WearableObjectImplementation* _implementation = (WearableObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isWearableObject();
}

int WearableObject::getMaxSockets() {
	WearableObjectImplementation* _implementation = (WearableObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMaxSockets();
}

int WearableObject::socketsUsed() {
	WearableObjectImplementation* _implementation = (WearableObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->socketsUsed();
}

int WearableObject::socketsLeft() {
	WearableObjectImplementation* _implementation = (WearableObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->socketsLeft();
}

void WearableObject::setMaxSockets(int sockets) {
	WearableObjectImplementation* _implementation = (WearableObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addSignedIntParameter(sockets);

		method.executeWithVoidReturn();
	} else
		_implementation->setMaxSockets(sockets);
}

DistributedObjectServant* WearableObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void WearableObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	WearableObjectImplementation
 */

WearableObjectImplementation::WearableObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


WearableObjectImplementation::~WearableObjectImplementation() {
}


void WearableObjectImplementation::finalize() {
}

void WearableObjectImplementation::_initializeImplementation() {
	_setClassHelper(WearableObjectHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void WearableObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (WearableObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WearableObjectImplementation::_getStub() {
	return _this;
}

WearableObjectImplementation::operator const WearableObject*() {
	return _this;
}

void WearableObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void WearableObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void WearableObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void WearableObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void WearableObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void WearableObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void WearableObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void WearableObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("WearableObject");

}

void WearableObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(WearableObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool WearableObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "socketCount") {
		TypeInfo<int >::parseFromBinaryStream(&socketCount, stream);
		return true;
	}

	if (_name == "socketsGenerated") {
		TypeInfo<bool >::parseFromBinaryStream(&socketsGenerated, stream);
		return true;
	}

	if (_name == "wearableSkillModMap") {
		TypeInfo<WearableSkillModMap >::parseFromBinaryStream(&wearableSkillModMap, stream);
		return true;
	}


	return false;
}

void WearableObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = WearableObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int WearableObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "socketCount";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&socketCount, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "socketsGenerated";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&socketsGenerated, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "wearableSkillModMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<WearableSkillModMap >::toBinaryStream(&wearableSkillModMap, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 3 + TangibleObjectImplementation::writeObjectMembers(stream);
}

WearableObjectImplementation::WearableObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/WearableObject.idl(63):  		socketCount = 0;
	socketCount = 0;
	// server/zone/objects/tangible/wearables/WearableObject.idl(64):  		socketsGenerated = false;
	socketsGenerated = false;
	// server/zone/objects/tangible/wearables/WearableObject.idl(66):  		Logger.setLoggingName("WearableObject");
	Logger::setLoggingName("WearableObject");
}

bool WearableObjectImplementation::isWearableObject() {
	// server/zone/objects/tangible/wearables/WearableObject.idl(85):  		return true;
	return true;
}

int WearableObjectImplementation::getMaxSockets() {
	// server/zone/objects/tangible/wearables/WearableObject.idl(89):  		return socketCount;
	return socketCount;
}

int WearableObjectImplementation::socketsUsed() {
	// server/zone/objects/tangible/wearables/WearableObject.idl(93):  		return wearableSkillModMap.getUsedSocketCount();
	return (&wearableSkillModMap)->getUsedSocketCount();
}

int WearableObjectImplementation::socketsLeft() {
	// server/zone/objects/tangible/wearables/WearableObject.idl(97):  		return socketCount - socketsUsed();
	return socketCount - socketsUsed();
}

void WearableObjectImplementation::setMaxSockets(int sockets) {
	// server/zone/objects/tangible/wearables/WearableObject.idl(101):  		socketCount = sockets;
	socketCount = sockets;
}

/*
 *	WearableObjectAdapter
 */

WearableObjectAdapter::WearableObjectAdapter(WearableObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* WearableObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		updateCraftingValues((ManufactureSchematic*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertBoolean(isWearableObject());
		break;
	case 9:
		resp->insertSignedInt(getMaxSockets());
		break;
	case 10:
		resp->insertSignedInt(socketsUsed());
		break;
	case 11:
		resp->insertSignedInt(socketsLeft());
		break;
	case 12:
		setMaxSockets(inv->getSignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void WearableObjectAdapter::initializeTransientMembers() {
	((WearableObjectImplementation*) impl)->initializeTransientMembers();
}

void WearableObjectAdapter::updateCraftingValues(ManufactureSchematic* schematic) {
	((WearableObjectImplementation*) impl)->updateCraftingValues(schematic);
}

bool WearableObjectAdapter::isWearableObject() {
	return ((WearableObjectImplementation*) impl)->isWearableObject();
}

int WearableObjectAdapter::getMaxSockets() {
	return ((WearableObjectImplementation*) impl)->getMaxSockets();
}

int WearableObjectAdapter::socketsUsed() {
	return ((WearableObjectImplementation*) impl)->socketsUsed();
}

int WearableObjectAdapter::socketsLeft() {
	return ((WearableObjectImplementation*) impl)->socketsLeft();
}

void WearableObjectAdapter::setMaxSockets(int sockets) {
	((WearableObjectImplementation*) impl)->setMaxSockets(sockets);
}

/*
 *	WearableObjectHelper
 */

WearableObjectHelper* WearableObjectHelper::staticInitializer = WearableObjectHelper::instance();

WearableObjectHelper::WearableObjectHelper() {
	className = "WearableObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void WearableObjectHelper::finalizeHelper() {
	WearableObjectHelper::finalize();
}

DistributedObject* WearableObjectHelper::instantiateObject() {
	return new WearableObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* WearableObjectHelper::instantiateServant() {
	return new WearableObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* WearableObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WearableObjectAdapter((WearableObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

