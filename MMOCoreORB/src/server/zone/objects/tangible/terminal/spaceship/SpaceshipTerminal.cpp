/*
 *	server/zone/objects/tangible/terminal/spaceship/SpaceshipTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "SpaceshipTerminal.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	SpaceshipTerminalStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_ = 6};

SpaceshipTerminal::SpaceshipTerminal() : Terminal(DummyConstructorParameter::instance()) {
	SpaceshipTerminalImplementation* _implementation = new SpaceshipTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

SpaceshipTerminal::SpaceshipTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

SpaceshipTerminal::~SpaceshipTerminal() {
}


int SpaceshipTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	SpaceshipTerminalImplementation* _implementation = (SpaceshipTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

DistributedObjectServant* SpaceshipTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void SpaceshipTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SpaceshipTerminalImplementation
 */

SpaceshipTerminalImplementation::SpaceshipTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


SpaceshipTerminalImplementation::~SpaceshipTerminalImplementation() {
}


void SpaceshipTerminalImplementation::finalize() {
}

void SpaceshipTerminalImplementation::_initializeImplementation() {
	_setClassHelper(SpaceshipTerminalHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SpaceshipTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SpaceshipTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* SpaceshipTerminalImplementation::_getStub() {
	return _this;
}

SpaceshipTerminalImplementation::operator const SpaceshipTerminal*() {
	return _this;
}

void SpaceshipTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SpaceshipTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SpaceshipTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SpaceshipTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SpaceshipTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SpaceshipTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SpaceshipTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SpaceshipTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("SpaceshipTerminal");

}

void SpaceshipTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(SpaceshipTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SpaceshipTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TerminalImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void SpaceshipTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SpaceshipTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SpaceshipTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + TerminalImplementation::writeObjectMembers(stream);
}

SpaceshipTerminalImplementation::SpaceshipTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/spaceship/SpaceshipTerminal.idl():  		Logger.setLoggingName("SpaceshipTerminal");
	Logger::setLoggingName("SpaceshipTerminal");
}

/*
 *	SpaceshipTerminalAdapter
 */

SpaceshipTerminalAdapter::SpaceshipTerminalAdapter(SpaceshipTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* SpaceshipTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

int SpaceshipTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((SpaceshipTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

/*
 *	SpaceshipTerminalHelper
 */

SpaceshipTerminalHelper* SpaceshipTerminalHelper::staticInitializer = SpaceshipTerminalHelper::instance();

SpaceshipTerminalHelper::SpaceshipTerminalHelper() {
	className = "SpaceshipTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void SpaceshipTerminalHelper::finalizeHelper() {
	SpaceshipTerminalHelper::finalize();
}

DistributedObject* SpaceshipTerminalHelper::instantiateObject() {
	return new SpaceshipTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* SpaceshipTerminalHelper::instantiateServant() {
	return new SpaceshipTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SpaceshipTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SpaceshipTerminalAdapter((SpaceshipTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

