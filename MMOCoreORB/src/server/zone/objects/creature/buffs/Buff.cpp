/*
 *	server/zone/objects/creature/buffs/Buff.cpp generated by engine3 IDL compiler 0.60
 */

#include "Buff.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/buffs/BuffDurationEvent.h"

/*
 *	BuffStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_INIT__,RPC_SENDTO__PLAYERCREATURE_,RPC_SENDDESTROYTO__PLAYERCREATURE_,RPC_ACTIVATE__BOOL_,RPC_DEACTIVATE__BOOL_,RPC_ACTIVATE__,RPC_DEACTIVATE__,RPC_APPLYATTRIBUTEMODIFIERS__,RPC_APPLYSKILLMODIFIERS__,RPC_REMOVEATTRIBUTEMODIFIERS__,RPC_REMOVESKILLMODIFIERS__,RPC_CLEARBUFFEVENT__,RPC_SETBUFFEVENTNULL__,RPC_SCHEDULEBUFFEVENT__,RPC_PARSEATTRIBUTEMODIFIERSTRING__STRING_,RPC_PARSESKILLMODIFIERSTRING__STRING_,RPC_GETATTRIBUTEMODIFIERSTRING__,RPC_GETSKILLMODIFIERSTRING__,RPC_GETTIMELEFT__,RPC_SETATTRIBUTEMODIFIER__BYTE_INT_,RPC_SETSKILLMODIFIER__STRING_INT_,RPC_SETSPEEDMULTIPLIERMOD__FLOAT_,RPC_SETACCELERATIONMULTIPLIERMOD__FLOAT_,RPC_SETFILLATTIRBUTESONBUFF__BOOL_,RPC_GETBUFFNAME__,RPC_GETBUFFCRC__,RPC_GETBUFFDURATION__,RPC_GETBUFFTYPE__,RPC_GETATTRIBUTEMODIFIERVALUE__BYTE_,RPC_GETSKILLMODIFIERVALUE__STRING_,RPC_ISACTIVE__,RPC_ISSPICEBUFF__,RPC_ISATTRIBUTEBUFF__,};

Buff::Buff(CreatureObject* creo, unsigned int buffcrc, float duration, int bufftype) : ManagedObject(DummyConstructorParameter::instance()) {
	BuffImplementation* _implementation = new BuffImplementation(creo, buffcrc, duration, bufftype);
	_impl = _implementation;
	_impl->_setStub(this);
}

Buff::Buff(DummyConstructorParameter* param) : ManagedObject(param) {
}

Buff::~Buff() {
}


void Buff::initializeTransientMembers() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void Buff::init() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INIT__);

		method.executeWithVoidReturn();
	} else
		_implementation->init();
}

void Buff::sendTo(PlayerCreature* player) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDTO__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendTo(player);
}

void Buff::sendDestroyTo(PlayerCreature* player) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDDESTROYTO__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendDestroyTo(player);
}

void Buff::activate(bool applyModifiers) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__BOOL_);
		method.addBooleanParameter(applyModifiers);

		method.executeWithVoidReturn();
	} else
		_implementation->activate(applyModifiers);
}

void Buff::deactivate(bool removeModifiers) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEACTIVATE__BOOL_);
		method.addBooleanParameter(removeModifiers);

		method.executeWithVoidReturn();
	} else
		_implementation->deactivate(removeModifiers);
}

void Buff::activate() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void Buff::deactivate() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->deactivate();
}

void Buff::applyAttributeModifiers() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_APPLYATTRIBUTEMODIFIERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->applyAttributeModifiers();
}

void Buff::applySkillModifiers() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_APPLYSKILLMODIFIERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->applySkillModifiers();
}

void Buff::removeAttributeModifiers() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEATTRIBUTEMODIFIERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->removeAttributeModifiers();
}

void Buff::removeSkillModifiers() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVESKILLMODIFIERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->removeSkillModifiers();
}

void Buff::clearBuffEvent() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARBUFFEVENT__);

		method.executeWithVoidReturn();
	} else
		_implementation->clearBuffEvent();
}

void Buff::setBuffEventNull() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBUFFEVENTNULL__);

		method.executeWithVoidReturn();
	} else
		_implementation->setBuffEventNull();
}

void Buff::scheduleBuffEvent() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SCHEDULEBUFFEVENT__);

		method.executeWithVoidReturn();
	} else
		_implementation->scheduleBuffEvent();
}

void Buff::parseAttributeModifierString(const String& modifierstring) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PARSEATTRIBUTEMODIFIERSTRING__STRING_);
		method.addAsciiParameter(modifierstring);

		method.executeWithVoidReturn();
	} else
		_implementation->parseAttributeModifierString(modifierstring);
}

void Buff::parseSkillModifierString(const String& modifierstring) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PARSESKILLMODIFIERSTRING__STRING_);
		method.addAsciiParameter(modifierstring);

		method.executeWithVoidReturn();
	} else
		_implementation->parseSkillModifierString(modifierstring);
}

String Buff::getAttributeModifierString() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETATTRIBUTEMODIFIERSTRING__);

		method.executeWithAsciiReturn(_return_getAttributeModifierString);
		return _return_getAttributeModifierString;
	} else
		return _implementation->getAttributeModifierString();
}

String Buff::getSkillModifierString() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSKILLMODIFIERSTRING__);

		method.executeWithAsciiReturn(_return_getSkillModifierString);
		return _return_getSkillModifierString;
	} else
		return _implementation->getSkillModifierString();
}

float Buff::getTimeLeft() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTIMELEFT__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getTimeLeft();
}

void Buff::setAttributeModifier(byte attribute, int value) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETATTRIBUTEMODIFIER__BYTE_INT_);
		method.addByteParameter(attribute);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setAttributeModifier(attribute, value);
}

void Buff::setSkillModifier(const String& modname, int value) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSKILLMODIFIER__STRING_INT_);
		method.addAsciiParameter(modname);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setSkillModifier(modname, value);
}

void Buff::setSpeedMultiplierMod(float multiplier) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSPEEDMULTIPLIERMOD__FLOAT_);
		method.addFloatParameter(multiplier);

		method.executeWithVoidReturn();
	} else
		_implementation->setSpeedMultiplierMod(multiplier);
}

void Buff::setAccelerationMultiplierMod(float multiplier) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACCELERATIONMULTIPLIERMOD__FLOAT_);
		method.addFloatParameter(multiplier);

		method.executeWithVoidReturn();
	} else
		_implementation->setAccelerationMultiplierMod(multiplier);
}

void Buff::setFillAttirbutesOnBuff(bool val) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETFILLATTIRBUTESONBUFF__BOOL_);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else
		_implementation->setFillAttirbutesOnBuff(val);
}

String Buff::getBuffName() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBUFFNAME__);

		method.executeWithAsciiReturn(_return_getBuffName);
		return _return_getBuffName;
	} else
		return _implementation->getBuffName();
}

int Buff::getBuffCRC() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBUFFCRC__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getBuffCRC();
}

float Buff::getBuffDuration() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBUFFDURATION__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getBuffDuration();
}

int Buff::getBuffType() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBUFFTYPE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getBuffType();
}

int Buff::getAttributeModifierValue(byte attribute) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETATTRIBUTEMODIFIERVALUE__BYTE_);
		method.addByteParameter(attribute);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getAttributeModifierValue(attribute);
}

int Buff::getSkillModifierValue(const String& modname) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSKILLMODIFIERVALUE__STRING_);
		method.addAsciiParameter(modname);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSkillModifierValue(modname);
}

bool Buff::isActive() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISACTIVE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isActive();
}

bool Buff::isSpiceBuff() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSPICEBUFF__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isSpiceBuff();
}

bool Buff::isAttributeBuff() {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISATTRIBUTEBUFF__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isAttributeBuff();
}

void Buff::setStartMessage(StringIdChatParameter& start) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setStartMessage(start);
}

void Buff::setEndMessage(StringIdChatParameter& start) {
	BuffImplementation* _implementation = (BuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setEndMessage(start);
}

DistributedObjectServant* Buff::_getImplementation() {

	_updated = true;
	return _impl;
}

void Buff::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	BuffImplementation
 */

BuffImplementation::BuffImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


BuffImplementation::~BuffImplementation() {
}


void BuffImplementation::finalize() {
}

void BuffImplementation::_initializeImplementation() {
	_setClassHelper(BuffHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void BuffImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (Buff*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* BuffImplementation::_getStub() {
	return _this;
}

BuffImplementation::operator const Buff*() {
	return _this;
}

void BuffImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BuffImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BuffImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BuffImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BuffImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BuffImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BuffImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BuffImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("Buff");

}

void BuffImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(BuffImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool BuffImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "creature") {
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&creature, stream);
		return true;
	}

	if (_name == "attributeModifiers") {
		TypeInfo<VectorMap<byte, int> >::parseFromBinaryStream(&attributeModifiers, stream);
		return true;
	}

	if (_name == "skillModifiers") {
		TypeInfo<VectorMap<String, int> >::parseFromBinaryStream(&skillModifiers, stream);
		return true;
	}

	if (_name == "buffName") {
		TypeInfo<String >::parseFromBinaryStream(&buffName, stream);
		return true;
	}

	if (_name == "buffDuration") {
		TypeInfo<float >::parseFromBinaryStream(&buffDuration, stream);
		return true;
	}

	if (_name == "buffCRC") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&buffCRC, stream);
		return true;
	}

	if (_name == "buffType") {
		TypeInfo<int >::parseFromBinaryStream(&buffType, stream);
		return true;
	}

	if (_name == "speedMultiplierMod") {
		TypeInfo<float >::parseFromBinaryStream(&speedMultiplierMod, stream);
		return true;
	}

	if (_name == "accelerationMultiplierMod") {
		TypeInfo<float >::parseFromBinaryStream(&accelerationMultiplierMod, stream);
		return true;
	}

	if (_name == "fillAttirbutesOnBuff") {
		TypeInfo<bool >::parseFromBinaryStream(&fillAttirbutesOnBuff, stream);
		return true;
	}

	if (_name == "startMessage") {
		TypeInfo<StringIdChatParameter >::parseFromBinaryStream(&startMessage, stream);
		return true;
	}

	if (_name == "endMessage") {
		TypeInfo<StringIdChatParameter >::parseFromBinaryStream(&endMessage, stream);
		return true;
	}

	if (_name == "nextExecutionTime") {
		TypeInfo<Time >::parseFromBinaryStream(&nextExecutionTime, stream);
		return true;
	}


	return false;
}

void BuffImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = BuffImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int BuffImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "creature";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&creature, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "attributeModifiers";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<byte, int> >::toBinaryStream(&attributeModifiers, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "skillModifiers";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<String, int> >::toBinaryStream(&skillModifiers, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "buffName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&buffName, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "buffDuration";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&buffDuration, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "buffCRC";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&buffCRC, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "buffType";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&buffType, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "speedMultiplierMod";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&speedMultiplierMod, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "accelerationMultiplierMod";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&accelerationMultiplierMod, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "fillAttirbutesOnBuff";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&fillAttirbutesOnBuff, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "startMessage";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<StringIdChatParameter >::toBinaryStream(&startMessage, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "endMessage";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<StringIdChatParameter >::toBinaryStream(&endMessage, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "nextExecutionTime";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Time >::toBinaryStream(&nextExecutionTime, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 13 + ManagedObjectImplementation::writeObjectMembers(stream);
}

BuffImplementation::BuffImplementation(CreatureObject* creo, unsigned int buffcrc, float duration, int bufftype) {
	_initializeImplementation();
	// server/zone/objects/creature/buffs/Buff.idl():  		creature = creo;
	creature = creo;
	// server/zone/objects/creature/buffs/Buff.idl():  		buffCRC = buffcrc;
	buffCRC = buffcrc;
	// server/zone/objects/creature/buffs/Buff.idl():  		buffDuration = duration;
	buffDuration = duration;
	// server/zone/objects/creature/buffs/Buff.idl():  		buffType = bufftype;
	buffType = bufftype;
	// server/zone/objects/creature/buffs/Buff.idl():  		speedMultiplierMod = -1.f;
	speedMultiplierMod = -1.f;
	// server/zone/objects/creature/buffs/Buff.idl():  		accelerationMultiplierMod = -1.f;
	accelerationMultiplierMod = -1.f;
	// server/zone/objects/creature/buffs/Buff.idl():  		fillAttirbutesOnBuff = false;
	fillAttirbutesOnBuff = false;
	// server/zone/objects/creature/buffs/Buff.idl():  		Logger.setLoggingName("Buff");
	Logger::setLoggingName("Buff");
	// server/zone/objects/creature/buffs/Buff.idl():  		init();
	init();
}

void BuffImplementation::init() {
	// server/zone/objects/creature/buffs/Buff.idl():  		attributeModifiers.setNoDuplicateInsertPlan();
	(&attributeModifiers)->setNoDuplicateInsertPlan();
	// server/zone/objects/creature/buffs/Buff.idl():  		attributeModifiers.setNullValue(0);
	(&attributeModifiers)->setNullValue(0);
	// server/zone/objects/creature/buffs/Buff.idl():  		skillModifiers.setNoDuplicateInsertPlan();
	(&skillModifiers)->setNoDuplicateInsertPlan();
	// server/zone/objects/creature/buffs/Buff.idl():  		skillModifiers.setNullValue(0);
	(&skillModifiers)->setNullValue(0);
}

void BuffImplementation::activate() {
	// server/zone/objects/creature/buffs/Buff.idl():  		activate(true);
	activate(true);
}

void BuffImplementation::deactivate() {
	// server/zone/objects/creature/buffs/Buff.idl():  		deactivate(true);
	deactivate(true);
}

void BuffImplementation::setAttributeModifier(byte attribute, int value) {
	// server/zone/objects/creature/buffs/Buff.idl():  			attributeModifiers.put(attribute, value);
	if ((&attributeModifiers)->contains(attribute))	// server/zone/objects/creature/buffs/Buff.idl():  			attributeModifiers.get(attribute) = value;
	(&attributeModifiers)->get(attribute) = value;

	else 	// server/zone/objects/creature/buffs/Buff.idl():  			attributeModifiers.put(attribute, value);
	(&attributeModifiers)->put(attribute, value);
}

void BuffImplementation::setSkillModifier(const String& modname, int value) {
	// server/zone/objects/creature/buffs/Buff.idl():  			skillModifiers.put(modname, value);
	if ((&skillModifiers)->contains(modname))	// server/zone/objects/creature/buffs/Buff.idl():  			skillModifiers.get(modname) = value;
	(&skillModifiers)->get(modname) = value;

	else 	// server/zone/objects/creature/buffs/Buff.idl():  			skillModifiers.put(modname, value);
	(&skillModifiers)->put(modname, value);
}

void BuffImplementation::setSpeedMultiplierMod(float multiplier) {
	// server/zone/objects/creature/buffs/Buff.idl():  		speedMultiplierMod = multiplier;
	speedMultiplierMod = multiplier;
}

void BuffImplementation::setAccelerationMultiplierMod(float multiplier) {
	// server/zone/objects/creature/buffs/Buff.idl():  		accelerationMultiplierMod = multiplier;
	accelerationMultiplierMod = multiplier;
}

void BuffImplementation::setFillAttirbutesOnBuff(bool val) {
	// server/zone/objects/creature/buffs/Buff.idl():  		fillAttirbutesOnBuff = val;
	fillAttirbutesOnBuff = val;
}

String BuffImplementation::getBuffName() {
	// server/zone/objects/creature/buffs/Buff.idl():  		return buffName;
	return buffName;
}

int BuffImplementation::getBuffCRC() {
	// server/zone/objects/creature/buffs/Buff.idl():  		return buffCRC;
	return buffCRC;
}

float BuffImplementation::getBuffDuration() {
	// server/zone/objects/creature/buffs/Buff.idl():  		return buffDuration;
	return buffDuration;
}

int BuffImplementation::getBuffType() {
	// server/zone/objects/creature/buffs/Buff.idl():  		return buffType;
	return buffType;
}

int BuffImplementation::getAttributeModifierValue(byte attribute) {
	// server/zone/objects/creature/buffs/Buff.idl():  		return 
	if ((&attributeModifiers)->contains(attribute))	// server/zone/objects/creature/buffs/Buff.idl():  			return attributeModifiers.get(attribute);
	return (&attributeModifiers)->get(attribute);
	// server/zone/objects/creature/buffs/Buff.idl():  		return 0;
	return 0;
}

int BuffImplementation::getSkillModifierValue(const String& modname) {
	// server/zone/objects/creature/buffs/Buff.idl():  		return 
	if ((&skillModifiers)->contains(modname))	// server/zone/objects/creature/buffs/Buff.idl():  			return skillModifiers.get(modname);
	return (&skillModifiers)->get(modname);
	// server/zone/objects/creature/buffs/Buff.idl():  		return 0;
	return 0;
}

bool BuffImplementation::isSpiceBuff() {
	// server/zone/objects/creature/buffs/Buff.idl():  		return (buffType == BuffType.SPICE);
	return (buffType == BuffType::SPICE);
}

bool BuffImplementation::isAttributeBuff() {
	// server/zone/objects/creature/buffs/Buff.idl():  		return (attributeModifiers.size() != 0);
	return ((&attributeModifiers)->size() != 0);
}

/*
 *	BuffAdapter
 */

BuffAdapter::BuffAdapter(BuffImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* BuffAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_INIT__:
		init();
		break;
	case RPC_SENDTO__PLAYERCREATURE_:
		sendTo((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_SENDDESTROYTO__PLAYERCREATURE_:
		sendDestroyTo((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_ACTIVATE__BOOL_:
		activate(inv->getBooleanParameter());
		break;
	case RPC_DEACTIVATE__BOOL_:
		deactivate(inv->getBooleanParameter());
		break;
	case RPC_ACTIVATE__:
		activate();
		break;
	case RPC_DEACTIVATE__:
		deactivate();
		break;
	case RPC_APPLYATTRIBUTEMODIFIERS__:
		applyAttributeModifiers();
		break;
	case RPC_APPLYSKILLMODIFIERS__:
		applySkillModifiers();
		break;
	case RPC_REMOVEATTRIBUTEMODIFIERS__:
		removeAttributeModifiers();
		break;
	case RPC_REMOVESKILLMODIFIERS__:
		removeSkillModifiers();
		break;
	case RPC_CLEARBUFFEVENT__:
		clearBuffEvent();
		break;
	case RPC_SETBUFFEVENTNULL__:
		setBuffEventNull();
		break;
	case RPC_SCHEDULEBUFFEVENT__:
		scheduleBuffEvent();
		break;
	case RPC_PARSEATTRIBUTEMODIFIERSTRING__STRING_:
		parseAttributeModifierString(inv->getAsciiParameter(_param0_parseAttributeModifierString__String_));
		break;
	case RPC_PARSESKILLMODIFIERSTRING__STRING_:
		parseSkillModifierString(inv->getAsciiParameter(_param0_parseSkillModifierString__String_));
		break;
	case RPC_GETATTRIBUTEMODIFIERSTRING__:
		resp->insertAscii(getAttributeModifierString());
		break;
	case RPC_GETSKILLMODIFIERSTRING__:
		resp->insertAscii(getSkillModifierString());
		break;
	case RPC_GETTIMELEFT__:
		resp->insertFloat(getTimeLeft());
		break;
	case RPC_SETATTRIBUTEMODIFIER__BYTE_INT_:
		setAttributeModifier(inv->getByteParameter(), inv->getSignedIntParameter());
		break;
	case RPC_SETSKILLMODIFIER__STRING_INT_:
		setSkillModifier(inv->getAsciiParameter(_param0_setSkillModifier__String_int_), inv->getSignedIntParameter());
		break;
	case RPC_SETSPEEDMULTIPLIERMOD__FLOAT_:
		setSpeedMultiplierMod(inv->getFloatParameter());
		break;
	case RPC_SETACCELERATIONMULTIPLIERMOD__FLOAT_:
		setAccelerationMultiplierMod(inv->getFloatParameter());
		break;
	case RPC_SETFILLATTIRBUTESONBUFF__BOOL_:
		setFillAttirbutesOnBuff(inv->getBooleanParameter());
		break;
	case RPC_GETBUFFNAME__:
		resp->insertAscii(getBuffName());
		break;
	case RPC_GETBUFFCRC__:
		resp->insertSignedInt(getBuffCRC());
		break;
	case RPC_GETBUFFDURATION__:
		resp->insertFloat(getBuffDuration());
		break;
	case RPC_GETBUFFTYPE__:
		resp->insertSignedInt(getBuffType());
		break;
	case RPC_GETATTRIBUTEMODIFIERVALUE__BYTE_:
		resp->insertSignedInt(getAttributeModifierValue(inv->getByteParameter()));
		break;
	case RPC_GETSKILLMODIFIERVALUE__STRING_:
		resp->insertSignedInt(getSkillModifierValue(inv->getAsciiParameter(_param0_getSkillModifierValue__String_)));
		break;
	case RPC_ISACTIVE__:
		resp->insertBoolean(isActive());
		break;
	case RPC_ISSPICEBUFF__:
		resp->insertBoolean(isSpiceBuff());
		break;
	case RPC_ISATTRIBUTEBUFF__:
		resp->insertBoolean(isAttributeBuff());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BuffAdapter::initializeTransientMembers() {
	((BuffImplementation*) impl)->initializeTransientMembers();
}

void BuffAdapter::init() {
	((BuffImplementation*) impl)->init();
}

void BuffAdapter::sendTo(PlayerCreature* player) {
	((BuffImplementation*) impl)->sendTo(player);
}

void BuffAdapter::sendDestroyTo(PlayerCreature* player) {
	((BuffImplementation*) impl)->sendDestroyTo(player);
}

void BuffAdapter::activate(bool applyModifiers) {
	((BuffImplementation*) impl)->activate(applyModifiers);
}

void BuffAdapter::deactivate(bool removeModifiers) {
	((BuffImplementation*) impl)->deactivate(removeModifiers);
}

void BuffAdapter::activate() {
	((BuffImplementation*) impl)->activate();
}

void BuffAdapter::deactivate() {
	((BuffImplementation*) impl)->deactivate();
}

void BuffAdapter::applyAttributeModifiers() {
	((BuffImplementation*) impl)->applyAttributeModifiers();
}

void BuffAdapter::applySkillModifiers() {
	((BuffImplementation*) impl)->applySkillModifiers();
}

void BuffAdapter::removeAttributeModifiers() {
	((BuffImplementation*) impl)->removeAttributeModifiers();
}

void BuffAdapter::removeSkillModifiers() {
	((BuffImplementation*) impl)->removeSkillModifiers();
}

void BuffAdapter::clearBuffEvent() {
	((BuffImplementation*) impl)->clearBuffEvent();
}

void BuffAdapter::setBuffEventNull() {
	((BuffImplementation*) impl)->setBuffEventNull();
}

void BuffAdapter::scheduleBuffEvent() {
	((BuffImplementation*) impl)->scheduleBuffEvent();
}

void BuffAdapter::parseAttributeModifierString(const String& modifierstring) {
	((BuffImplementation*) impl)->parseAttributeModifierString(modifierstring);
}

void BuffAdapter::parseSkillModifierString(const String& modifierstring) {
	((BuffImplementation*) impl)->parseSkillModifierString(modifierstring);
}

String BuffAdapter::getAttributeModifierString() {
	return ((BuffImplementation*) impl)->getAttributeModifierString();
}

String BuffAdapter::getSkillModifierString() {
	return ((BuffImplementation*) impl)->getSkillModifierString();
}

float BuffAdapter::getTimeLeft() {
	return ((BuffImplementation*) impl)->getTimeLeft();
}

void BuffAdapter::setAttributeModifier(byte attribute, int value) {
	((BuffImplementation*) impl)->setAttributeModifier(attribute, value);
}

void BuffAdapter::setSkillModifier(const String& modname, int value) {
	((BuffImplementation*) impl)->setSkillModifier(modname, value);
}

void BuffAdapter::setSpeedMultiplierMod(float multiplier) {
	((BuffImplementation*) impl)->setSpeedMultiplierMod(multiplier);
}

void BuffAdapter::setAccelerationMultiplierMod(float multiplier) {
	((BuffImplementation*) impl)->setAccelerationMultiplierMod(multiplier);
}

void BuffAdapter::setFillAttirbutesOnBuff(bool val) {
	((BuffImplementation*) impl)->setFillAttirbutesOnBuff(val);
}

String BuffAdapter::getBuffName() {
	return ((BuffImplementation*) impl)->getBuffName();
}

int BuffAdapter::getBuffCRC() {
	return ((BuffImplementation*) impl)->getBuffCRC();
}

float BuffAdapter::getBuffDuration() {
	return ((BuffImplementation*) impl)->getBuffDuration();
}

int BuffAdapter::getBuffType() {
	return ((BuffImplementation*) impl)->getBuffType();
}

int BuffAdapter::getAttributeModifierValue(byte attribute) {
	return ((BuffImplementation*) impl)->getAttributeModifierValue(attribute);
}

int BuffAdapter::getSkillModifierValue(const String& modname) {
	return ((BuffImplementation*) impl)->getSkillModifierValue(modname);
}

bool BuffAdapter::isActive() {
	return ((BuffImplementation*) impl)->isActive();
}

bool BuffAdapter::isSpiceBuff() {
	return ((BuffImplementation*) impl)->isSpiceBuff();
}

bool BuffAdapter::isAttributeBuff() {
	return ((BuffImplementation*) impl)->isAttributeBuff();
}

/*
 *	BuffHelper
 */

BuffHelper* BuffHelper::staticInitializer = BuffHelper::instance();

BuffHelper::BuffHelper() {
	className = "Buff";

	Core::getObjectBroker()->registerClass(className, this);
}

void BuffHelper::finalizeHelper() {
	BuffHelper::finalize();
}

DistributedObject* BuffHelper::instantiateObject() {
	return new Buff(DummyConstructorParameter::instance());
}

DistributedObjectServant* BuffHelper::instantiateServant() {
	return new BuffImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BuffHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BuffAdapter((BuffImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

