/*
 *	server/zone/objects/player/sessions/SlicingSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "SlicingSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

/*
 *	SlicingSessionStub
 */

enum {RPC_INITIALIZESESSION__,RPC_CANCELSESSION__,RPC_CLEARSESSION__,RPC_ENDSLICING__,RPC_GETSLICINGSKILL__CREATUREOBJECT_,RPC_HASPRECISIONLASERKNIFE__BOOL_,RPC_HASWEAPONUPGRADEKIT__,RPC_HASARMORUPGRADEKIT__,RPC_USECLAMPFROMINVENTORY__SLICINGTOOL_,};

SlicingSession::SlicingSession(CreatureObject* parent) : Facade(DummyConstructorParameter::instance()) {
	SlicingSessionImplementation* _implementation = new SlicingSessionImplementation(parent);
	_impl = _implementation;
	_impl->_setStub(this);
}

SlicingSession::SlicingSession(DummyConstructorParameter* param) : Facade(param) {
}

SlicingSession::~SlicingSession() {
}



void SlicingSession::initalizeSlicingMenu(CreatureObject* pl, TangibleObject* obj) {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->initalizeSlicingMenu(pl, obj);
}

void SlicingSession::handleMenuSelect(CreatureObject* pl, byte menuID, SuiListBox* suiBox) {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->handleMenuSelect(pl, menuID, suiBox);
}

int SlicingSession::initializeSession() {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int SlicingSession::cancelSession() {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int SlicingSession::clearSession() {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

void SlicingSession::endSlicing() {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ENDSLICING__);

		method.executeWithVoidReturn();
	} else
		_implementation->endSlicing();
}

int SlicingSession::getSlicingSkill(CreatureObject* slicer) {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSLICINGSKILL__CREATUREOBJECT_);
		method.addObjectParameter(slicer);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSlicingSkill(slicer);
}

bool SlicingSession::hasPrecisionLaserKnife(bool removeItem) {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASPRECISIONLASERKNIFE__BOOL_);
		method.addBooleanParameter(removeItem);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasPrecisionLaserKnife(removeItem);
}

bool SlicingSession::hasWeaponUpgradeKit() {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASWEAPONUPGRADEKIT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasWeaponUpgradeKit();
}

bool SlicingSession::hasArmorUpgradeKit() {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASARMORUPGRADEKIT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasArmorUpgradeKit();
}

void SlicingSession::useClampFromInventory(SlicingTool* clamp) {
	SlicingSessionImplementation* _implementation = static_cast<SlicingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_USECLAMPFROMINVENTORY__SLICINGTOOL_);
		method.addObjectParameter(clamp);

		method.executeWithVoidReturn();
	} else
		_implementation->useClampFromInventory(clamp);
}

DistributedObjectServant* SlicingSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void SlicingSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SlicingSessionImplementation
 */

SlicingSessionImplementation::SlicingSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


SlicingSessionImplementation::~SlicingSessionImplementation() {
}


void SlicingSessionImplementation::finalize() {
}

void SlicingSessionImplementation::_initializeImplementation() {
	_setClassHelper(SlicingSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SlicingSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SlicingSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* SlicingSessionImplementation::_getStub() {
	return _this;
}

SlicingSessionImplementation::operator const SlicingSession*() {
	return _this;
}

void SlicingSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SlicingSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SlicingSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SlicingSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SlicingSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SlicingSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SlicingSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SlicingSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("SlicingSession");

}

void SlicingSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(SlicingSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SlicingSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "SlicingSession.player") {
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&player, stream);
		return true;
	}

	if (_name == "SlicingSession.slicingSuiBox") {
		TypeInfo<ManagedReference<SuiListBox* > >::parseFromBinaryStream(&slicingSuiBox, stream);
		return true;
	}

	if (_name == "SlicingSession.firstCable") {
		TypeInfo<byte >::parseFromBinaryStream(&firstCable, stream);
		return true;
	}

	if (_name == "SlicingSession.nodeCable") {
		TypeInfo<byte >::parseFromBinaryStream(&nodeCable, stream);
		return true;
	}

	if (_name == "SlicingSession.cableBlue") {
		TypeInfo<bool >::parseFromBinaryStream(&cableBlue, stream);
		return true;
	}

	if (_name == "SlicingSession.cableRed") {
		TypeInfo<bool >::parseFromBinaryStream(&cableRed, stream);
		return true;
	}

	if (_name == "SlicingSession.usedNode") {
		TypeInfo<bool >::parseFromBinaryStream(&usedNode, stream);
		return true;
	}

	if (_name == "SlicingSession.usedClamp") {
		TypeInfo<bool >::parseFromBinaryStream(&usedClamp, stream);
		return true;
	}


	return false;
}

void SlicingSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SlicingSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SlicingSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "SlicingSession.player";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&player, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "SlicingSession.slicingSuiBox";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<SuiListBox* > >::toBinaryStream(&slicingSuiBox, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "SlicingSession.firstCable";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<byte >::toBinaryStream(&firstCable, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "SlicingSession.nodeCable";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<byte >::toBinaryStream(&nodeCable, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "SlicingSession.cableBlue";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&cableBlue, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "SlicingSession.cableRed";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&cableRed, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "SlicingSession.usedNode";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&usedNode, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "SlicingSession.usedClamp";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&usedClamp, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 8 + FacadeImplementation::writeObjectMembers(stream);
}

SlicingSessionImplementation::SlicingSessionImplementation(CreatureObject* parent) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/SlicingSession.idl():  		Logger.setLoggingName("SlicingSession");
	Logger::setLoggingName("SlicingSession");
	// server/zone/objects/player/sessions/SlicingSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/SlicingSession.idl():  		initializeSession();
	initializeSession();
}

int SlicingSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/SlicingSession.idl():  		if 
	if (player != NULL)	// server/zone/objects/player/sessions/SlicingSession.idl():  			player.dropActiveSession(SessionFacadeType.SLICING);
	player->dropActiveSession(SessionFacadeType::SLICING);
	// server/zone/objects/player/sessions/SlicingSession.idl():  		clearSession(
	if (tangibleObject != NULL)	// server/zone/objects/player/sessions/SlicingSession.idl():  			tangibleObject.dropActiveSession(SessionFacadeType.SLICING);
	tangibleObject->dropActiveSession(SessionFacadeType::SLICING);
	// server/zone/objects/player/sessions/SlicingSession.idl():  		clearSession();
	clearSession();
	// server/zone/objects/player/sessions/SlicingSession.idl():  		return 0;
	return 0;
}

int SlicingSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/SlicingSession.idl():  		player = null;
	player = NULL;
	// server/zone/objects/player/sessions/SlicingSession.idl():  		tangibleObject = null;
	tangibleObject = NULL;
	// server/zone/objects/player/sessions/SlicingSession.idl():  		return 0;
	return 0;
}

String SlicingSessionImplementation::getPrefix(TangibleObject* obj) {
	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "";
	if (obj->isMissionTerminal())	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "terminal_";
	return "terminal_";

	else 	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "";
	if (obj->isWeaponObject())	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "weapon_";
	return "weapon_";

	else 	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "";
	if (obj->isArmorObject())	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "armor_";
	return "armor_";

	else 	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "";
	if (obj->isContainerObject() || tangibleObject->getGameObjectType() == 8245)	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "container_";
	return "container_";

	else 	// server/zone/objects/player/sessions/SlicingSession.idl():  			return "";
	return "";
}

byte SlicingSessionImplementation::getProgress() {
	// server/zone/objects/player/sessions/SlicingSession.idl():  		return ((byte) cableBlue + (byte) cableRed);
	return ((byte) cableBlue + (byte) cableRed);
}

/*
 *	SlicingSessionAdapter
 */

SlicingSessionAdapter::SlicingSessionAdapter(SlicingSession* obj) : FacadeAdapter(obj) {
}

Packet* SlicingSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZESESSION__:
		resp->insertSignedInt(initializeSession());
		break;
	case RPC_CANCELSESSION__:
		resp->insertSignedInt(cancelSession());
		break;
	case RPC_CLEARSESSION__:
		resp->insertSignedInt(clearSession());
		break;
	case RPC_ENDSLICING__:
		endSlicing();
		break;
	case RPC_GETSLICINGSKILL__CREATUREOBJECT_:
		resp->insertSignedInt(getSlicingSkill(static_cast<CreatureObject*>(inv->getObjectParameter())));
		break;
	case RPC_HASPRECISIONLASERKNIFE__BOOL_:
		resp->insertBoolean(hasPrecisionLaserKnife(inv->getBooleanParameter()));
		break;
	case RPC_HASWEAPONUPGRADEKIT__:
		resp->insertBoolean(hasWeaponUpgradeKit());
		break;
	case RPC_HASARMORUPGRADEKIT__:
		resp->insertBoolean(hasArmorUpgradeKit());
		break;
	case RPC_USECLAMPFROMINVENTORY__SLICINGTOOL_:
		useClampFromInventory(static_cast<SlicingTool*>(inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

int SlicingSessionAdapter::initializeSession() {
	return (static_cast<SlicingSession*>(stub))->initializeSession();
}

int SlicingSessionAdapter::cancelSession() {
	return (static_cast<SlicingSession*>(stub))->cancelSession();
}

int SlicingSessionAdapter::clearSession() {
	return (static_cast<SlicingSession*>(stub))->clearSession();
}

void SlicingSessionAdapter::endSlicing() {
	(static_cast<SlicingSession*>(stub))->endSlicing();
}

int SlicingSessionAdapter::getSlicingSkill(CreatureObject* slicer) {
	return (static_cast<SlicingSession*>(stub))->getSlicingSkill(slicer);
}

bool SlicingSessionAdapter::hasPrecisionLaserKnife(bool removeItem) {
	return (static_cast<SlicingSession*>(stub))->hasPrecisionLaserKnife(removeItem);
}

bool SlicingSessionAdapter::hasWeaponUpgradeKit() {
	return (static_cast<SlicingSession*>(stub))->hasWeaponUpgradeKit();
}

bool SlicingSessionAdapter::hasArmorUpgradeKit() {
	return (static_cast<SlicingSession*>(stub))->hasArmorUpgradeKit();
}

void SlicingSessionAdapter::useClampFromInventory(SlicingTool* clamp) {
	(static_cast<SlicingSession*>(stub))->useClampFromInventory(clamp);
}

/*
 *	SlicingSessionHelper
 */

SlicingSessionHelper* SlicingSessionHelper::staticInitializer = SlicingSessionHelper::instance();

SlicingSessionHelper::SlicingSessionHelper() {
	className = "SlicingSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void SlicingSessionHelper::finalizeHelper() {
	SlicingSessionHelper::finalize();
}

DistributedObject* SlicingSessionHelper::instantiateObject() {
	return new SlicingSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* SlicingSessionHelper::instantiateServant() {
	return new SlicingSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SlicingSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SlicingSessionAdapter(static_cast<SlicingSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

