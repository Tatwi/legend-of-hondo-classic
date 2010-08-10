/*
 *	server/zone/objects/tangible/pharmaceutical/DotPack.cpp generated by engine3 IDL compiler 0.60
 */

#include "DotPack.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	DotPackStub
 */

DotPack::DotPack() : PharmaceuticalObject(DummyConstructorParameter::instance()) {
	_impl = new DotPackImplementation();
	_impl->_setStub(this);
}

DotPack::DotPack(DummyConstructorParameter* param) : PharmaceuticalObject(param) {
}

DotPack::~DotPack() {
}


void DotPack::updateCraftingValues(ManufactureSchematic* schematic) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((DotPackImplementation*) _impl)->updateCraftingValues(schematic);
}

void DotPack::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((DotPackImplementation*) _impl)->loadTemplateData(templateData);
}

void DotPack::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((DotPackImplementation*) _impl)->fillAttributeList(msg, object);
}

int DotPack::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((DotPackImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

int DotPack::calculatePower(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(creature);

		return method.executeWithSignedIntReturn();
	} else
		return ((DotPackImplementation*) _impl)->calculatePower(creature);
}

bool DotPack::isPoisonDeliveryUnit() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithBooleanReturn();
	} else
		return ((DotPackImplementation*) _impl)->isPoisonDeliveryUnit();
}

bool DotPack::isDiseaseDeliveryUnit() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithBooleanReturn();
	} else
		return ((DotPackImplementation*) _impl)->isDiseaseDeliveryUnit();
}

float DotPack::getEffectiveness() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithFloatReturn();
	} else
		return ((DotPackImplementation*) _impl)->getEffectiveness();
}

float DotPack::getRange() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithFloatReturn();
	} else
		return ((DotPackImplementation*) _impl)->getRange();
}

float DotPack::getArea() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithFloatReturn();
	} else
		return ((DotPackImplementation*) _impl)->getArea();
}

float DotPack::getRangeMod() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithFloatReturn();
	} else
		return ((DotPackImplementation*) _impl)->getRangeMod();
}

float DotPack::getPotency() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithFloatReturn();
	} else
		return ((DotPackImplementation*) _impl)->getPotency();
}

unsigned int DotPack::getDuration() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((DotPackImplementation*) _impl)->getDuration();
}

bool DotPack::isArea() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithBooleanReturn();
	} else
		return ((DotPackImplementation*) _impl)->isArea();
}

unsigned int DotPack::getPool() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((DotPackImplementation*) _impl)->getPool();
}

unsigned int DotPack::getDotType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((DotPackImplementation*) _impl)->getDotType();
}

/*
 *	DotPackImplementation
 */

DotPackImplementation::DotPackImplementation(DummyConstructorParameter* param) : PharmaceuticalObjectImplementation(param) {
	_initializeImplementation();
}

DotPackImplementation::~DotPackImplementation() {
}


void DotPackImplementation::finalize() {
}

void DotPackImplementation::_initializeImplementation() {
	_setClassHelper(DotPackHelper::instance());

	_serializationHelperMethod();
}

void DotPackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (DotPack*) stub;
	PharmaceuticalObjectImplementation::_setStub(stub);
}

DistributedObjectStub* DotPackImplementation::_getStub() {
	return _this;
}

DotPackImplementation::operator const DotPack*() {
	return _this;
}

void DotPackImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void DotPackImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void DotPackImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void DotPackImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void DotPackImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void DotPackImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void DotPackImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void DotPackImplementation::_serializationHelperMethod() {
	PharmaceuticalObjectImplementation::_serializationHelperMethod();

	_setClassName("DotPack");

	addSerializableVariable("effectiveness", &effectiveness);
	addSerializableVariable("range", &range);
	addSerializableVariable("area", &area);
	addSerializableVariable("rangeMod", &rangeMod);
	addSerializableVariable("potency", &potency);
	addSerializableVariable("commandToExecute", &commandToExecute);
	addSerializableVariable("duration", &duration);
	addSerializableVariable("pool", &pool);
	addSerializableVariable("dotType", &dotType);
}

DotPackImplementation::DotPackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(75):  		area = 0;
	area = 0;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(76):  		range = 0;
	range = 0;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(77):  		rangeMod = 0;
	rangeMod = 0;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(78):  		potency = 0;
	potency = 0;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(79):  		duration = 0;
	duration = 0;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(80):  		pool = 0;
	pool = 0;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(81):  		dotType = 0;
	dotType = 0;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(82):  		effectiveness = 0;
	effectiveness = 0;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(84):  		setLoggingName("DotPack");
	setLoggingName("DotPack");
}

void DotPackImplementation::updateCraftingValues(ManufactureSchematic* schematic) {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(89):  		CraftingValues craftingValues = schematic.getCraftingValues();
	CraftingValues* craftingValues = schematic->getCraftingValues();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(91):  		effectiveness = craftingValues.getCurrentValue("power");
	effectiveness = craftingValues->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(92):  		super.medicineUseRequired = craftingValues.getCurrentValue("skillmodmin");
	PharmaceuticalObjectImplementation::medicineUseRequired = craftingValues->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(93):  		super.useCount = craftingValues.getCurrentValue("charges");
	PharmaceuticalObjectImplementation::useCount = craftingValues->getCurrentValue("charges");
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(95):  		range = craftingValues.getCurrentValue("range");
	range = craftingValues->getCurrentValue("range");
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(96):  		area = craftingValues.getCurrentValue("area");
	area = craftingValues->getCurrentValue("area");
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(97):  		potency = craftingValues.getCurrentValue("potency");
	potency = craftingValues->getCurrentValue("potency");
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(98):  		duration = craftingValues.getCurrentValue("duration");
	duration = craftingValues->getCurrentValue("duration");
}

void DotPackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(109):  		super.loadTemplateData(templateData);
	PharmaceuticalObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(111):  		DotPackTemplate 
	if (!templateData->isDotPackTemplate())	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(112):  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(114):  stimPackTemplate = (DotPackTemplate) templateData;
	DotPackTemplate* stimPackTemplate = (DotPackTemplate*) templateData;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(116):  		effectiveness = stimPackTemplate.getEffectiveness();
	effectiveness = stimPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(117):  		super.medicineUseRequired = stimPackTemplate.getMedicineUse();
	PharmaceuticalObjectImplementation::medicineUseRequired = stimPackTemplate->getMedicineUse();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(118):  		duration = stimPackTemplate.getDuration();
	duration = stimPackTemplate->getDuration();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(119):  		area = stimPackTemplate.getArea();
	area = stimPackTemplate->getArea();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(120):  		range = stimPackTemplate.getRange();
	range = stimPackTemplate->getRange();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(121):  		rangeMod = stimPackTemplate.getRangeMod();
	rangeMod = stimPackTemplate->getRangeMod();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(122):  		pool = stimPackTemplate.getPool();
	pool = stimPackTemplate->getPool();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(123):  		dotType = stimPackTemplate.getDotType();
	dotType = stimPackTemplate->getDotType();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(124):  		potency = stimPackTemplate.getPotency();
	potency = stimPackTemplate->getPotency();
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(125):  		commandToExecute = stimPackTemplate.getCommandToExecute();
	commandToExecute = stimPackTemplate->getCommandToExecute();
}

void DotPackImplementation::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(137):  		super.fillAttributeList(msg, object);
	PharmaceuticalObjectImplementation::fillAttributeList(msg, object);
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(139):  		msg.insertAttribute("examine_dot_attribute", CreatureAttribute.getName(pool, true));
	msg->insertAttribute("examine_dot_attribute", CreatureAttribute::getName(pool, true));
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(141):  		msg.insertAttribute("examine_dot_apply_power", Math.getPrecision(effectiveness, 0));
	msg->insertAttribute("examine_dot_apply_power", Math::getPrecision(effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(143):  
	if (isPoisonDeliveryUnit()){
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(144):  			msg.insertAttribute("examine_dot_apply", "Poison");
	msg->insertAttribute("examine_dot_apply", "Poison");
}

	else {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(146):  			msg.insertAttribute("examine_dot_apply", "Diseased");
	msg->insertAttribute("examine_dot_apply", "Diseased");
}
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(149):  		msg.insertAttribute("examine_dot_potency", Math.getPrecision(potency, 0));
	msg->insertAttribute("examine_dot_potency", Math::getPrecision(potency, 0));
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(151):  		msg.insertAttribute("examine_heal_range", Math.getPrecision(range, 0));
	msg->insertAttribute("examine_heal_range", Math::getPrecision(range, 0));
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(153):  
	if (isArea()){
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(154):  			msg.insertAttribute("examine_heal_area", Math.getPrecision(area, 0));
	msg->insertAttribute("examine_heal_area", Math::getPrecision(area, 0));
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(156):  			msg.insertAttribute("duration", Math.getPrecision(duration, 0));
	msg->insertAttribute("duration", Math::getPrecision(duration, 0));
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(158):  			msg.insertAttribute("healing_ability", super.getMedicineUseRequired());
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::getMedicineUseRequired());
}

	else {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(161):  			msg.insertAttribute("duration", Math.getPrecision(duration, 0));
	msg->insertAttribute("duration", Math::getPrecision(duration, 0));
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(163):  			msg.insertAttribute("healing_ability", super.getMedicineUseRequired());
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::getMedicineUseRequired());
}
}

int DotPackImplementation::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(176):  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(177):  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(179):  
	if (player->getSkillMod("combat_healing_ability") < PharmaceuticalObjectImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(180):  			player.sendSystemMessage("error_message", "insufficient_skill");
	player->sendSystemMessage("error_message", "insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(182):  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(184):  			string command = commandToExecute + " ";
	String command = commandToExecute + " ";
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(185):  			command = command + String.valueOf(super.getObjectID());
	command = command + String::valueOf(PharmaceuticalObjectImplementation::getObjectID());
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(187):  			player.sendExecuteConsoleCommand(command);
	player->sendExecuteConsoleCommand(command);
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(189):  			return 0;
	return 0;
}
}

int DotPackImplementation::calculatePower(CreatureObject* creature) {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(195):  		float modSkill = (float) creature.getSkillMod("combat_medic_effectiveness");
	float modSkill = (float) creature->getSkillMod("combat_medic_effectiveness");
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(196):  		return ((100 + modSkill) / 100 * effectiveness);
	return ((100 + modSkill) / 100 * effectiveness);
}

bool DotPackImplementation::isPoisonDeliveryUnit() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(200):  		return dotType == CreatureState.POISONED;
	return dotType == CreatureState::POISONED;
}

bool DotPackImplementation::isDiseaseDeliveryUnit() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(204):  		return dotType == CreatureState.DISEASED;
	return dotType == CreatureState::DISEASED;
}

float DotPackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(208):  		return effectiveness;
	return effectiveness;
}

float DotPackImplementation::getRange() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(212):  		return range;
	return range;
}

float DotPackImplementation::getArea() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(216):  		return area;
	return area;
}

float DotPackImplementation::getRangeMod() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(220):  		return rangeMod;
	return rangeMod;
}

float DotPackImplementation::getPotency() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(224):  		return potency;
	return potency;
}

unsigned int DotPackImplementation::getDuration() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(228):  		return duration;
	return duration;
}

bool DotPackImplementation::isArea() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(232):  		return area != 0;
	return area != 0;
}

unsigned int DotPackImplementation::getPool() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(236):  		return pool;
	return pool;
}

unsigned int DotPackImplementation::getDotType() {
	// server/zone/objects/tangible/pharmaceutical/DotPack.idl(240):  		return dotType;
	return dotType;
}

/*
 *	DotPackAdapter
 */

DotPackAdapter::DotPackAdapter(DotPackImplementation* obj) : PharmaceuticalObjectAdapter(obj) {
}

Packet* DotPackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 7:
		resp->insertSignedInt(calculatePower((CreatureObject*) inv->getObjectParameter()));
		break;
	case 8:
		resp->insertBoolean(isPoisonDeliveryUnit());
		break;
	case 9:
		resp->insertBoolean(isDiseaseDeliveryUnit());
		break;
	case 10:
		resp->insertFloat(getEffectiveness());
		break;
	case 11:
		resp->insertFloat(getRange());
		break;
	case 12:
		resp->insertFloat(getArea());
		break;
	case 13:
		resp->insertFloat(getRangeMod());
		break;
	case 14:
		resp->insertFloat(getPotency());
		break;
	case 15:
		resp->insertInt(getDuration());
		break;
	case 16:
		resp->insertBoolean(isArea());
		break;
	case 17:
		resp->insertInt(getPool());
		break;
	case 18:
		resp->insertInt(getDotType());
		break;
	default:
		return NULL;
	}

	return resp;
}

int DotPackAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((DotPackImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

int DotPackAdapter::calculatePower(CreatureObject* creature) {
	return ((DotPackImplementation*) impl)->calculatePower(creature);
}

bool DotPackAdapter::isPoisonDeliveryUnit() {
	return ((DotPackImplementation*) impl)->isPoisonDeliveryUnit();
}

bool DotPackAdapter::isDiseaseDeliveryUnit() {
	return ((DotPackImplementation*) impl)->isDiseaseDeliveryUnit();
}

float DotPackAdapter::getEffectiveness() {
	return ((DotPackImplementation*) impl)->getEffectiveness();
}

float DotPackAdapter::getRange() {
	return ((DotPackImplementation*) impl)->getRange();
}

float DotPackAdapter::getArea() {
	return ((DotPackImplementation*) impl)->getArea();
}

float DotPackAdapter::getRangeMod() {
	return ((DotPackImplementation*) impl)->getRangeMod();
}

float DotPackAdapter::getPotency() {
	return ((DotPackImplementation*) impl)->getPotency();
}

unsigned int DotPackAdapter::getDuration() {
	return ((DotPackImplementation*) impl)->getDuration();
}

bool DotPackAdapter::isArea() {
	return ((DotPackImplementation*) impl)->isArea();
}

unsigned int DotPackAdapter::getPool() {
	return ((DotPackImplementation*) impl)->getPool();
}

unsigned int DotPackAdapter::getDotType() {
	return ((DotPackImplementation*) impl)->getDotType();
}

/*
 *	DotPackHelper
 */

DotPackHelper* DotPackHelper::staticInitializer = DotPackHelper::instance();

DotPackHelper::DotPackHelper() {
	className = "DotPack";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void DotPackHelper::finalizeHelper() {
	DotPackHelper::finalize();
}

DistributedObject* DotPackHelper::instantiateObject() {
	return new DotPack(DummyConstructorParameter::instance());
}

DistributedObjectServant* DotPackHelper::instantiateServant() {
	return new DotPackImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DotPackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DotPackAdapter((DotPackImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

