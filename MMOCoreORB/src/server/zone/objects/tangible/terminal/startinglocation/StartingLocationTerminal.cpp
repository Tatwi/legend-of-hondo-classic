/*
 *	server/zone/objects/tangible/terminal/startinglocation/StartingLocationTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "StartingLocationTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

/*
 *	StartingLocationTerminalStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_};

StartingLocationTerminal::StartingLocationTerminal() : Terminal(DummyConstructorParameter::instance()) {
	StartingLocationTerminalImplementation* _implementation = new StartingLocationTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

StartingLocationTerminal::StartingLocationTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

StartingLocationTerminal::~StartingLocationTerminal() {
}



void StartingLocationTerminal::initializeTransientMembers() {
	StartingLocationTerminalImplementation* _implementation = static_cast<StartingLocationTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int StartingLocationTerminal::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	StartingLocationTerminalImplementation* _implementation = static_cast<StartingLocationTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

DistributedObjectServant* StartingLocationTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void StartingLocationTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	StartingLocationTerminalImplementation
 */

StartingLocationTerminalImplementation::StartingLocationTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


StartingLocationTerminalImplementation::~StartingLocationTerminalImplementation() {
}


void StartingLocationTerminalImplementation::finalize() {
}

void StartingLocationTerminalImplementation::_initializeImplementation() {
	_setClassHelper(StartingLocationTerminalHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void StartingLocationTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<StartingLocationTerminal*>(stub);
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* StartingLocationTerminalImplementation::_getStub() {
	return _this;
}

StartingLocationTerminalImplementation::operator const StartingLocationTerminal*() {
	return _this;
}

void StartingLocationTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void StartingLocationTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void StartingLocationTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void StartingLocationTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void StartingLocationTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void StartingLocationTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void StartingLocationTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void StartingLocationTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("StartingLocationTerminal");

}

void StartingLocationTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(StartingLocationTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool StartingLocationTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TerminalImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void StartingLocationTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StartingLocationTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StartingLocationTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + TerminalImplementation::writeObjectMembers(stream);
}

StartingLocationTerminalImplementation::StartingLocationTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/startinglocation/StartingLocationTerminal.idl():  		Logger.setLoggingName("StartingLocationTerminal");
	Logger::setLoggingName("StartingLocationTerminal");
}

/*
 *	StartingLocationTerminalAdapter
 */

StartingLocationTerminalAdapter::StartingLocationTerminalAdapter(StartingLocationTerminal* obj) : TerminalAdapter(obj) {
}

Packet* StartingLocationTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void StartingLocationTerminalAdapter::initializeTransientMembers() {
	(static_cast<StartingLocationTerminal*>(stub))->initializeTransientMembers();
}

int StartingLocationTerminalAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<StartingLocationTerminal*>(stub))->handleObjectMenuSelect(player, selectedID);
}

/*
 *	StartingLocationTerminalHelper
 */

StartingLocationTerminalHelper* StartingLocationTerminalHelper::staticInitializer = StartingLocationTerminalHelper::instance();

StartingLocationTerminalHelper::StartingLocationTerminalHelper() {
	className = "StartingLocationTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void StartingLocationTerminalHelper::finalizeHelper() {
	StartingLocationTerminalHelper::finalize();
}

DistributedObject* StartingLocationTerminalHelper::instantiateObject() {
	return new StartingLocationTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* StartingLocationTerminalHelper::instantiateServant() {
	return new StartingLocationTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* StartingLocationTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StartingLocationTerminalAdapter(static_cast<StartingLocationTerminal*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

