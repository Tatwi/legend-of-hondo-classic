/*
 *	server/zone/managers/creature/CreatureManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "CreatureManager.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/MessageCallback.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/NonPlayerCreatureObject.h"

#include "server/zone/objects/creature/AiAgent.h"

#include "server/zone/objects/creature/Creature.h"

#include "server/zone/objects/creature/ai/AiActor.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/creature/CreatureTemplateManager.h"

#include "server/zone/managers/creature/DnaManager.h"

#include "server/zone/objects/area/SpawnArea.h"

/*
 *	CreatureManagerStub
 */

enum {RPC_INITIALIZE__ = 6,RPC_SPAWNLAIR__INT_INT_FLOAT_FLOAT_FLOAT_INT_,RPC_SPAWNCREATUREWITHAI__INT_FLOAT_FLOAT_FLOAT_SCENEOBJECT_BOOL_,RPC_SPAWNCREATUREWITHLEVEL__INT_INT_FLOAT_FLOAT_FLOAT_LONG_,RPC_SPAWNCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_,RPC_SPAWNCREATURE__INT_INT_FLOAT_FLOAT_FLOAT_LONG_BOOL_,RPC_CREATECREATURE__INT_BOOL_INT_,RPC_PLACECREATURE__CREATUREOBJECT_FLOAT_FLOAT_FLOAT_LONG_,RPC_GETTEMPLATETOSPAWN__INT_,RPC_LOADSPAWNAREAS__,RPC_LOADAITEMPLATES__,RPC_LOADSINGLESPAWNS__,RPC_LOADTRAINERS__,RPC_LOADMISSIONSPAWNS__,RPC_LOADINFORMANTS__,RPC_SPAWNRANDOMCREATURESAROUND__SCENEOBJECT_,RPC_SPAWNRANDOMCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_,RPC_HARVEST__CREATURE_CREATUREOBJECT_INT_,RPC_MILK__CREATURE_CREATUREOBJECT_,RPC_SAMPLE__CREATURE_CREATUREOBJECT_,RPC_ADDTORESERVEPOOL__AIAGENT_,RPC_GETSPAWNEDRANDOMCREATURES__,RPC_GETSPAWNAREA__STRING_,RPC_ADDWEARABLEITEM__CREATUREOBJECT_TANGIBLEOBJECT_};

CreatureManager::CreatureManager(Zone* planet) : ZoneManager(DummyConstructorParameter::instance()) {
	CreatureManagerImplementation* _implementation = new CreatureManagerImplementation(planet);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CreatureManager");
}

CreatureManager::CreatureManager(DummyConstructorParameter* param) : ZoneManager(param) {
	_setClassName("CreatureManager");
}

CreatureManager::~CreatureManager() {
}



void CreatureManager::initialize() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

TangibleObject* CreatureManager::spawnLair(unsigned int lairTemplate, int difficulty, float x, float z, float y, unsigned int faction) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNLAIR__INT_INT_FLOAT_FLOAT_FLOAT_INT_);
		method.addUnsignedIntParameter(lairTemplate);
		method.addSignedIntParameter(difficulty);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedIntParameter(faction);

		return static_cast<TangibleObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->spawnLair(lairTemplate, difficulty, x, z, y, faction);
}

CreatureObject* CreatureManager::spawnCreatureWithAi(unsigned int templateCRC, float x, float z, float y, SceneObject* cell, bool persistent) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNCREATUREWITHAI__INT_FLOAT_FLOAT_FLOAT_SCENEOBJECT_BOOL_);
		method.addUnsignedIntParameter(templateCRC);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addObjectParameter(cell);
		method.addBooleanParameter(persistent);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->spawnCreatureWithAi(templateCRC, x, z, y, cell, persistent);
}

CreatureObject* CreatureManager::spawnCreatureWithLevel(unsigned int mobileTemplateCRC, int level, float x, float z, float y, unsigned long long parentID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNCREATUREWITHLEVEL__INT_INT_FLOAT_FLOAT_FLOAT_LONG_);
		method.addUnsignedIntParameter(mobileTemplateCRC);
		method.addSignedIntParameter(level);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->spawnCreatureWithLevel(mobileTemplateCRC, level, x, z, y, parentID);
}

CreatureObject* CreatureManager::spawnCreature(unsigned int templateCRC, float x, float z, float y, unsigned long long parentID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_);
		method.addUnsignedIntParameter(templateCRC);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->spawnCreature(templateCRC, x, z, y, parentID);
}

CreatureObject* CreatureManager::spawnCreature(unsigned int templateCRC, unsigned int objectCRC, float x, float z, float y, unsigned long long parentID, bool persistent) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNCREATURE__INT_INT_FLOAT_FLOAT_FLOAT_LONG_BOOL_);
		method.addUnsignedIntParameter(templateCRC);
		method.addUnsignedIntParameter(objectCRC);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);
		method.addBooleanParameter(persistent);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->spawnCreature(templateCRC, objectCRC, x, z, y, parentID, persistent);
}

CreatureObject* CreatureManager::createCreature(unsigned int templateCRC, bool persistent, unsigned int mobileTemplate) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATECREATURE__INT_BOOL_INT_);
		method.addUnsignedIntParameter(templateCRC);
		method.addBooleanParameter(persistent);
		method.addUnsignedIntParameter(mobileTemplate);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->createCreature(templateCRC, persistent, mobileTemplate);
}

void CreatureManager::placeCreature(CreatureObject* creature, float x, float z, float y, unsigned long long parentID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PLACECREATURE__CREATUREOBJECT_FLOAT_FLOAT_FLOAT_LONG_);
		method.addObjectParameter(creature);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		method.executeWithVoidReturn();
	} else
		_implementation->placeCreature(creature, x, z, y, parentID);
}

String CreatureManager::getTemplateToSpawn(unsigned int templateCRC) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTEMPLATETOSPAWN__INT_);
		method.addUnsignedIntParameter(templateCRC);

		String _return_getTemplateToSpawn;
		method.executeWithAsciiReturn(_return_getTemplateToSpawn);
		return _return_getTemplateToSpawn;
	} else
		return _implementation->getTemplateToSpawn(templateCRC);
}

int CreatureManager::notifyDestruction(TangibleObject* destructor, AiAgent* destructedObject, int condition) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->notifyDestruction(destructor, destructedObject, condition);
}

void CreatureManager::loadSpawnAreas() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADSPAWNAREAS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadSpawnAreas();
}

void CreatureManager::loadAiTemplates() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADAITEMPLATES__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadAiTemplates();
}

void CreatureManager::loadSingleSpawns() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADSINGLESPAWNS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadSingleSpawns();
}

void CreatureManager::loadTrainers() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADTRAINERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadTrainers();
}

void CreatureManager::loadMissionSpawns() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADMISSIONSPAWNS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadMissionSpawns();
}

void CreatureManager::loadInformants() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADINFORMANTS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadInformants();
}

void CreatureManager::spawnRandomCreaturesAround(SceneObject* creature) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNRANDOMCREATURESAROUND__SCENEOBJECT_);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		_implementation->spawnRandomCreaturesAround(creature);
}

void CreatureManager::spawnRandomCreature(int number, float x, float z, float y, unsigned long long parentID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNRANDOMCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_);
		method.addSignedIntParameter(number);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		method.executeWithVoidReturn();
	} else
		_implementation->spawnRandomCreature(number, x, z, y, parentID);
}

void CreatureManager::harvest(Creature* creature, CreatureObject* player, int selectedID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HARVEST__CREATURE_CREATUREOBJECT_INT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(player);
		method.addSignedIntParameter(selectedID);

		method.executeWithVoidReturn();
	} else
		_implementation->harvest(creature, player, selectedID);
}

void CreatureManager::milk(Creature* creature, CreatureObject* player) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_MILK__CREATURE_CREATUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->milk(creature, player);
}

void CreatureManager::sample(Creature* creature, CreatureObject* player) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SAMPLE__CREATURE_CREATUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sample(creature, player);
}

void CreatureManager::addToReservePool(AiAgent* agent) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDTORESERVEPOOL__AIAGENT_);
		method.addObjectParameter(agent);

		method.executeWithVoidReturn();
	} else
		_implementation->addToReservePool(agent);
}

int CreatureManager::getSpawnedRandomCreatures() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNEDRANDOMCREATURES__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSpawnedRandomCreatures();
}

Vector3 CreatureManager::getRandomJediTrainer() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getRandomJediTrainer();
}

Vector<ManagedReference<SpawnArea* > >* CreatureManager::getWorldSpawnAreas() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getWorldSpawnAreas();
}

Vector<ManagedReference<SpawnArea* > >* CreatureManager::getFactionalNeutralMissionSpawnAreas() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getFactionalNeutralMissionSpawnAreas();
}

Vector<ManagedReference<SpawnArea* > >* CreatureManager::getFactionalRebelMissionSpawnAreas() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getFactionalRebelMissionSpawnAreas();
}

Vector<ManagedReference<SpawnArea* > >* CreatureManager::getFactionalImperialMissionSpawnAreas() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getFactionalImperialMissionSpawnAreas();
}

Vector<ManagedReference<SpawnArea* > >* CreatureManager::getNonfactionalMissionSpawnAreas() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getNonfactionalMissionSpawnAreas();
}

SpawnArea* CreatureManager::getSpawnArea(const String& areaname) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNAREA__STRING_);
		method.addAsciiParameter(areaname);

		return static_cast<SpawnArea*>(method.executeWithObjectReturn());
	} else
		return _implementation->getSpawnArea(areaname);
}

bool CreatureManager::addWearableItem(CreatureObject* creature, TangibleObject* clothing) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDWEARABLEITEM__CREATUREOBJECT_TANGIBLEOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(clothing);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->addWearableItem(creature, clothing);
}

DistributedObjectServant* CreatureManager::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* CreatureManager::_getImplementationForRead() {
	return _impl;
}

void CreatureManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CreatureManagerImplementation
 */

CreatureManagerImplementation::CreatureManagerImplementation(DummyConstructorParameter* param) : ZoneManagerImplementation(param) {
	_initializeImplementation();
}


CreatureManagerImplementation::~CreatureManagerImplementation() {
}


void CreatureManagerImplementation::finalize() {
}

void CreatureManagerImplementation::_initializeImplementation() {
	_setClassHelper(CreatureManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CreatureManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CreatureManager*>(stub);
	ZoneManagerImplementation::_setStub(stub);
}

DistributedObjectStub* CreatureManagerImplementation::_getStub() {
	return _this.get();
}

CreatureManagerImplementation::operator const CreatureManager*() {
	return _this.get();
}

void CreatureManagerImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void CreatureManagerImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void CreatureManagerImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void CreatureManagerImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void CreatureManagerImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void CreatureManagerImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void CreatureManagerImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void CreatureManagerImplementation::_serializationHelperMethod() {
	ZoneManagerImplementation::_serializationHelperMethod();

	_setClassName("CreatureManager");

}

void CreatureManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CreatureManagerImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CreatureManagerImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ZoneManagerImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xdbbbe357: //CreatureManager.zone
		TypeInfo<ManagedReference<Zone* > >::parseFromBinaryStream(&zone, stream);
		return true;

	case 0x4b3dd8d1: //CreatureManager.spawnAreaMap
		TypeInfo<SpawnAreaMap >::parseFromBinaryStream(&spawnAreaMap, stream);
		return true;

	case 0xbc202568: //CreatureManager.reservePool
		TypeInfo<SortedVector<ManagedReference<AiAgent* > > >::parseFromBinaryStream(&reservePool, stream);
		return true;

	case 0xd85bfeb9: //CreatureManager.spawnedRandomCreatures
		TypeInfo<int >::parseFromBinaryStream(&spawnedRandomCreatures, stream);
		return true;

	}

	return false;
}

void CreatureManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CreatureManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CreatureManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ZoneManagerImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xdbbbe357; //CreatureManager.zone
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<Zone* > >::toBinaryStream(&zone, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x4b3dd8d1; //CreatureManager.spawnAreaMap
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SpawnAreaMap >::toBinaryStream(&spawnAreaMap, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xbc202568; //CreatureManager.reservePool
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<AiAgent* > > >::toBinaryStream(&reservePool, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xd85bfeb9; //CreatureManager.spawnedRandomCreatures
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&spawnedRandomCreatures, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

CreatureManagerImplementation::CreatureManagerImplementation(Zone* planet) : ZoneManagerImplementation("CreatureManager") {
	_initializeImplementation();
	// server/zone/managers/creature/CreatureManager.idl():  		zone = planet;
	zone = planet;
	// server/zone/managers/creature/CreatureManager.idl():  		setCreatureTemplateManager();
	setCreatureTemplateManager();
	// server/zone/managers/creature/CreatureManager.idl():  		spawnedRandomCreatures = 0;
	spawnedRandomCreatures = 0;
}

void CreatureManagerImplementation::initialize() {
	// server/zone/managers/creature/CreatureManager.idl():  		loadSpawnAreas();
	loadSpawnAreas();
	// server/zone/managers/creature/CreatureManager.idl():  		loadAiTemplates();
	loadAiTemplates();
	// server/zone/managers/creature/CreatureManager.idl():  		loadTrainers();
	loadTrainers();
	// server/zone/managers/creature/CreatureManager.idl():  		loadSingleSpawns();
	loadSingleSpawns();
	// server/zone/managers/creature/CreatureManager.idl():  		loadMissionSpawns();
	loadMissionSpawns();
	// server/zone/managers/creature/CreatureManager.idl():  		loadInformants();
	loadInformants();
}

void CreatureManagerImplementation::addToReservePool(AiAgent* agent) {
	Locker _locker(_this.get());
	// server/zone/managers/creature/CreatureManager.idl():  		}
	if (spawnedRandomCreatures > 0){
	// server/zone/managers/creature/CreatureManager.idl():  			spawnedRandomCreatures = spawnedRandomCreatures - 1;
	spawnedRandomCreatures = spawnedRandomCreatures - 1;
}

	else {
}
	// server/zone/managers/creature/CreatureManager.idl():  		reservePool.put(agent);
	(&reservePool)->put(agent);
}

int CreatureManagerImplementation::getSpawnedRandomCreatures() {
	// server/zone/managers/creature/CreatureManager.idl():  		return spawnedRandomCreatures;
	return spawnedRandomCreatures;
}

Vector<ManagedReference<SpawnArea* > >* CreatureManagerImplementation::getWorldSpawnAreas() {
	// server/zone/managers/creature/CreatureManager.idl():  		return spawnAreaMap.getWorldSpawnAreas();
	return (&spawnAreaMap)->getWorldSpawnAreas();
}

Vector<ManagedReference<SpawnArea* > >* CreatureManagerImplementation::getFactionalNeutralMissionSpawnAreas() {
	// server/zone/managers/creature/CreatureManager.idl():  		return spawnAreaMap.getFactionalNeutralMissionSpawnAreas();
	return (&spawnAreaMap)->getFactionalNeutralMissionSpawnAreas();
}

Vector<ManagedReference<SpawnArea* > >* CreatureManagerImplementation::getFactionalRebelMissionSpawnAreas() {
	// server/zone/managers/creature/CreatureManager.idl():  		return spawnAreaMap.getFactionalRebelMissionSpawnAreas();
	return (&spawnAreaMap)->getFactionalRebelMissionSpawnAreas();
}

Vector<ManagedReference<SpawnArea* > >* CreatureManagerImplementation::getFactionalImperialMissionSpawnAreas() {
	// server/zone/managers/creature/CreatureManager.idl():  		return spawnAreaMap.getFactionalImperialMissionSpawnAreas();
	return (&spawnAreaMap)->getFactionalImperialMissionSpawnAreas();
}

Vector<ManagedReference<SpawnArea* > >* CreatureManagerImplementation::getNonfactionalMissionSpawnAreas() {
	// server/zone/managers/creature/CreatureManager.idl():  		return spawnAreaMap.getNonfactionalMissionSpawnAreas();
	return (&spawnAreaMap)->getNonfactionalMissionSpawnAreas();
}

/*
 *	CreatureManagerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CreatureManagerAdapter::CreatureManagerAdapter(CreatureManager* obj) : ZoneManagerAdapter(obj) {
}

void CreatureManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZE__:
		{
			initialize();
		}
		break;
	case RPC_SPAWNLAIR__INT_INT_FLOAT_FLOAT_FLOAT_INT_:
		{
			resp->insertLong(spawnLair(inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedIntParameter())->_getObjectID());
		}
		break;
	case RPC_SPAWNCREATUREWITHAI__INT_FLOAT_FLOAT_FLOAT_SCENEOBJECT_BOOL_:
		{
			resp->insertLong(spawnCreatureWithAi(inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), static_cast<SceneObject*>(inv->getObjectParameter()), inv->getBooleanParameter())->_getObjectID());
		}
		break;
	case RPC_SPAWNCREATUREWITHLEVEL__INT_INT_FLOAT_FLOAT_FLOAT_LONG_:
		{
			resp->insertLong(spawnCreatureWithLevel(inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		}
		break;
	case RPC_SPAWNCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_:
		{
			resp->insertLong(spawnCreature(inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		}
		break;
	case RPC_SPAWNCREATURE__INT_INT_FLOAT_FLOAT_FLOAT_LONG_BOOL_:
		{
			resp->insertLong(spawnCreature(inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter(), inv->getBooleanParameter())->_getObjectID());
		}
		break;
	case RPC_CREATECREATURE__INT_BOOL_INT_:
		{
			resp->insertLong(createCreature(inv->getUnsignedIntParameter(), inv->getBooleanParameter(), inv->getUnsignedIntParameter())->_getObjectID());
		}
		break;
	case RPC_PLACECREATURE__CREATUREOBJECT_FLOAT_FLOAT_FLOAT_LONG_:
		{
			placeCreature(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter());
		}
		break;
	case RPC_GETTEMPLATETOSPAWN__INT_:
		{
			resp->insertAscii(getTemplateToSpawn(inv->getUnsignedIntParameter()));
		}
		break;
	case RPC_LOADSPAWNAREAS__:
		{
			loadSpawnAreas();
		}
		break;
	case RPC_LOADAITEMPLATES__:
		{
			loadAiTemplates();
		}
		break;
	case RPC_LOADSINGLESPAWNS__:
		{
			loadSingleSpawns();
		}
		break;
	case RPC_LOADTRAINERS__:
		{
			loadTrainers();
		}
		break;
	case RPC_LOADMISSIONSPAWNS__:
		{
			loadMissionSpawns();
		}
		break;
	case RPC_LOADINFORMANTS__:
		{
			loadInformants();
		}
		break;
	case RPC_SPAWNRANDOMCREATURESAROUND__SCENEOBJECT_:
		{
			spawnRandomCreaturesAround(static_cast<SceneObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SPAWNRANDOMCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_:
		{
			spawnRandomCreature(inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter());
		}
		break;
	case RPC_HARVEST__CREATURE_CREATUREOBJECT_INT_:
		{
			harvest(static_cast<Creature*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getSignedIntParameter());
		}
		break;
	case RPC_MILK__CREATURE_CREATUREOBJECT_:
		{
			milk(static_cast<Creature*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SAMPLE__CREATURE_CREATUREOBJECT_:
		{
			sample(static_cast<Creature*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_ADDTORESERVEPOOL__AIAGENT_:
		{
			addToReservePool(static_cast<AiAgent*>(inv->getObjectParameter()));
		}
		break;
	case RPC_GETSPAWNEDRANDOMCREATURES__:
		{
			resp->insertSignedInt(getSpawnedRandomCreatures());
		}
		break;
	case RPC_GETSPAWNAREA__STRING_:
		{
			String areaname; 
			resp->insertLong(getSpawnArea(inv->getAsciiParameter(areaname))->_getObjectID());
		}
		break;
	case RPC_ADDWEARABLEITEM__CREATUREOBJECT_TANGIBLEOBJECT_:
		{
			resp->insertBoolean(addWearableItem(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<TangibleObject*>(inv->getObjectParameter())));
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void CreatureManagerAdapter::initialize() {
	(static_cast<CreatureManager*>(stub))->initialize();
}

TangibleObject* CreatureManagerAdapter::spawnLair(unsigned int lairTemplate, int difficulty, float x, float z, float y, unsigned int faction) {
	return (static_cast<CreatureManager*>(stub))->spawnLair(lairTemplate, difficulty, x, z, y, faction);
}

CreatureObject* CreatureManagerAdapter::spawnCreatureWithAi(unsigned int templateCRC, float x, float z, float y, SceneObject* cell, bool persistent) {
	return (static_cast<CreatureManager*>(stub))->spawnCreatureWithAi(templateCRC, x, z, y, cell, persistent);
}

CreatureObject* CreatureManagerAdapter::spawnCreatureWithLevel(unsigned int mobileTemplateCRC, int level, float x, float z, float y, unsigned long long parentID) {
	return (static_cast<CreatureManager*>(stub))->spawnCreatureWithLevel(mobileTemplateCRC, level, x, z, y, parentID);
}

CreatureObject* CreatureManagerAdapter::spawnCreature(unsigned int templateCRC, float x, float z, float y, unsigned long long parentID) {
	return (static_cast<CreatureManager*>(stub))->spawnCreature(templateCRC, x, z, y, parentID);
}

CreatureObject* CreatureManagerAdapter::spawnCreature(unsigned int templateCRC, unsigned int objectCRC, float x, float z, float y, unsigned long long parentID, bool persistent) {
	return (static_cast<CreatureManager*>(stub))->spawnCreature(templateCRC, objectCRC, x, z, y, parentID, persistent);
}

CreatureObject* CreatureManagerAdapter::createCreature(unsigned int templateCRC, bool persistent, unsigned int mobileTemplate) {
	return (static_cast<CreatureManager*>(stub))->createCreature(templateCRC, persistent, mobileTemplate);
}

void CreatureManagerAdapter::placeCreature(CreatureObject* creature, float x, float z, float y, unsigned long long parentID) {
	(static_cast<CreatureManager*>(stub))->placeCreature(creature, x, z, y, parentID);
}

String CreatureManagerAdapter::getTemplateToSpawn(unsigned int templateCRC) {
	return (static_cast<CreatureManager*>(stub))->getTemplateToSpawn(templateCRC);
}

void CreatureManagerAdapter::loadSpawnAreas() {
	(static_cast<CreatureManager*>(stub))->loadSpawnAreas();
}

void CreatureManagerAdapter::loadAiTemplates() {
	(static_cast<CreatureManager*>(stub))->loadAiTemplates();
}

void CreatureManagerAdapter::loadSingleSpawns() {
	(static_cast<CreatureManager*>(stub))->loadSingleSpawns();
}

void CreatureManagerAdapter::loadTrainers() {
	(static_cast<CreatureManager*>(stub))->loadTrainers();
}

void CreatureManagerAdapter::loadMissionSpawns() {
	(static_cast<CreatureManager*>(stub))->loadMissionSpawns();
}

void CreatureManagerAdapter::loadInformants() {
	(static_cast<CreatureManager*>(stub))->loadInformants();
}

void CreatureManagerAdapter::spawnRandomCreaturesAround(SceneObject* creature) {
	(static_cast<CreatureManager*>(stub))->spawnRandomCreaturesAround(creature);
}

void CreatureManagerAdapter::spawnRandomCreature(int number, float x, float z, float y, unsigned long long parentID) {
	(static_cast<CreatureManager*>(stub))->spawnRandomCreature(number, x, z, y, parentID);
}

void CreatureManagerAdapter::harvest(Creature* creature, CreatureObject* player, int selectedID) {
	(static_cast<CreatureManager*>(stub))->harvest(creature, player, selectedID);
}

void CreatureManagerAdapter::milk(Creature* creature, CreatureObject* player) {
	(static_cast<CreatureManager*>(stub))->milk(creature, player);
}

void CreatureManagerAdapter::sample(Creature* creature, CreatureObject* player) {
	(static_cast<CreatureManager*>(stub))->sample(creature, player);
}

void CreatureManagerAdapter::addToReservePool(AiAgent* agent) {
	(static_cast<CreatureManager*>(stub))->addToReservePool(agent);
}

int CreatureManagerAdapter::getSpawnedRandomCreatures() {
	return (static_cast<CreatureManager*>(stub))->getSpawnedRandomCreatures();
}

SpawnArea* CreatureManagerAdapter::getSpawnArea(const String& areaname) {
	return (static_cast<CreatureManager*>(stub))->getSpawnArea(areaname);
}

bool CreatureManagerAdapter::addWearableItem(CreatureObject* creature, TangibleObject* clothing) {
	return (static_cast<CreatureManager*>(stub))->addWearableItem(creature, clothing);
}

/*
 *	CreatureManagerHelper
 */

CreatureManagerHelper* CreatureManagerHelper::staticInitializer = CreatureManagerHelper::instance();

CreatureManagerHelper::CreatureManagerHelper() {
	className = "CreatureManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void CreatureManagerHelper::finalizeHelper() {
	CreatureManagerHelper::finalize();
}

DistributedObject* CreatureManagerHelper::instantiateObject() {
	return new CreatureManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* CreatureManagerHelper::instantiateServant() {
	return new CreatureManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CreatureManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CreatureManagerAdapter(static_cast<CreatureManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

