/*
 *	server/zone/objects/installation/InstallationObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "InstallationObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/installation/SyncrhonizedUiListenInstallationTask.h"

#include "server/zone/objects/resource/ResourceSpawn.h"

#include "server/zone/objects/resource/ResourceContainer.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

/*
 *	InstallationObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_DESTROYOBJECTFROMDATABASE__BOOL_,RPC_BROADCASTMESSAGE__BASEPACKET_BOOL_,RPC_UPDATERESOURCECONTAINERQUANTITY__RESOURCECONTAINER_INT_BOOL_,RPC_SETOPERATING__BOOL_BOOL_,RPC_ACTIVATEUISYNC__,RPC_UPDATEOPERATORS__,RPC_VERIFYOPERATORS__,RPC_UPDATEINSTALLATIONWORK__,RPC_HANDLESTRUCTUREADDENERGY__CREATUREOBJECT_,RPC_SETACTIVERESOURCE__RESOURCECONTAINER_,RPC_CHANGEACTIVERESOURCEID__LONG_,RPC_ADDRESOURCETOHOPPER__RESOURCECONTAINER_,RPC_REMOVERESOURCEFROMHOPPER__RESOURCECONTAINER_,RPC_CLEARRESOURCEHOPPER__,RPC_GETHOPPERSIZE__,RPC_GETHOPPERITEMQUANTITY__RESOURCESPAWN_,RPC_GETCONTAINERFROMHOPPER__RESOURCESPAWN_,RPC_GETACTIVERESOURCESPAWNID__,RPC_GETACTUALRATE__,RPC_BROADCASTTOOPERATORS__BASEPACKET_,RPC_ADDOPERATOR__CREATUREOBJECT_,RPC_REMOVEOPERATOR__CREATUREOBJECT_,RPC_SENDBASELINESTO__SCENEOBJECT_,RPC_ISINSTALLATIONOBJECT__,RPC_ISOPERATING__,RPC_GETINSTALLATIONTYPE__,RPC_GETEXTRACTIONRATE__,RPC_GETHOPPERSIZEMAX__,RPC_UPDATESTRUCTURESTATUS__,RPC_ISHARVESTEROBJECT__,RPC_ISGENERATOROBJECT__,};

InstallationObject::InstallationObject() : StructureObject(DummyConstructorParameter::instance()) {
	InstallationObjectImplementation* _implementation = new InstallationObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

InstallationObject::InstallationObject(DummyConstructorParameter* param) : StructureObject(param) {
}

InstallationObject::~InstallationObject() {
}



void InstallationObject::initializeTransientMembers() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void InstallationObject::destroyObjectFromDatabase(bool destroyContainedObjects) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__BOOL_);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
}

void InstallationObject::fillAttributeList(AttributeListMessage* alm, CreatureObject* object) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(alm, object);
}

void InstallationObject::loadTemplateData(SharedObjectTemplate* templateData) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void InstallationObject::broadcastMessage(BasePacket* message, bool sendSelf) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_BROADCASTMESSAGE__BASEPACKET_BOOL_);
		method.addObjectParameter(message);
		method.addBooleanParameter(sendSelf);

		method.executeWithVoidReturn();
	} else
		_implementation->broadcastMessage(message, sendSelf);
}

void InstallationObject::updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATERESOURCECONTAINERQUANTITY__RESOURCECONTAINER_INT_BOOL_);
		method.addObjectParameter(container);
		method.addSignedIntParameter(newQuantity);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		_implementation->updateResourceContainerQuantity(container, newQuantity, notifyClient);
}

void InstallationObject::setOperating(bool operating, bool notifyClient) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETOPERATING__BOOL_BOOL_);
		method.addBooleanParameter(operating);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		_implementation->setOperating(operating, notifyClient);
}

void InstallationObject::activateUiSync() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATEUISYNC__);

		method.executeWithVoidReturn();
	} else
		_implementation->activateUiSync();
}

void InstallationObject::updateOperators() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEOPERATORS__);

		method.executeWithVoidReturn();
	} else
		_implementation->updateOperators();
}

void InstallationObject::verifyOperators() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_VERIFYOPERATORS__);

		method.executeWithVoidReturn();
	} else
		_implementation->verifyOperators();
}

void InstallationObject::updateInstallationWork() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEINSTALLATIONWORK__);

		method.executeWithVoidReturn();
	} else
		_implementation->updateInstallationWork();
}

void InstallationObject::handleStructureAddEnergy(CreatureObject* player) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLESTRUCTUREADDENERGY__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->handleStructureAddEnergy(player);
}

void InstallationObject::setActiveResource(ResourceContainer* container) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACTIVERESOURCE__RESOURCECONTAINER_);
		method.addObjectParameter(container);

		method.executeWithVoidReturn();
	} else
		_implementation->setActiveResource(container);
}

void InstallationObject::changeActiveResourceID(unsigned long long spawnObjectID) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHANGEACTIVERESOURCEID__LONG_);
		method.addUnsignedLongParameter(spawnObjectID);

		method.executeWithVoidReturn();
	} else
		_implementation->changeActiveResourceID(spawnObjectID);
}

void InstallationObject::addResourceToHopper(ResourceContainer* container) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDRESOURCETOHOPPER__RESOURCECONTAINER_);
		method.addObjectParameter(container);

		method.executeWithVoidReturn();
	} else
		_implementation->addResourceToHopper(container);
}

void InstallationObject::removeResourceFromHopper(ResourceContainer* container) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVERESOURCEFROMHOPPER__RESOURCECONTAINER_);
		method.addObjectParameter(container);

		method.executeWithVoidReturn();
	} else
		_implementation->removeResourceFromHopper(container);
}

void InstallationObject::clearResourceHopper() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARRESOURCEHOPPER__);

		method.executeWithVoidReturn();
	} else
		_implementation->clearResourceHopper();
}

float InstallationObject::getHopperSize() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHOPPERSIZE__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getHopperSize();
}

bool InstallationObject::updateMaintenance(Time& workingTime) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->updateMaintenance(workingTime);
}

void InstallationObject::updateHopper(Time& workingTime, bool shutdownAfterUpdate) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateHopper(workingTime, shutdownAfterUpdate);
}

int InstallationObject::getHopperItemQuantity(ResourceSpawn* spawn) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHOPPERITEMQUANTITY__RESOURCESPAWN_);
		method.addObjectParameter(spawn);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getHopperItemQuantity(spawn);
}

ResourceContainer* InstallationObject::getContainerFromHopper(ResourceSpawn* spawn) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCONTAINERFROMHOPPER__RESOURCESPAWN_);
		method.addObjectParameter(spawn);

		return static_cast<ResourceContainer*>(method.executeWithObjectReturn());
	} else
		return _implementation->getContainerFromHopper(spawn);
}

unsigned long long InstallationObject::getActiveResourceSpawnID() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETACTIVERESOURCESPAWNID__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getActiveResourceSpawnID();
}

float InstallationObject::getActualRate() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETACTUALRATE__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getActualRate();
}

void InstallationObject::broadcastToOperators(BasePacket* packet) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_BROADCASTTOOPERATORS__BASEPACKET_);
		method.addObjectParameter(packet);

		method.executeWithVoidReturn();
	} else
		_implementation->broadcastToOperators(packet);
}

void InstallationObject::addOperator(CreatureObject* player) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDOPERATOR__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->addOperator(player);
}

void InstallationObject::removeOperator(CreatureObject* player) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEOPERATOR__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->removeOperator(player);
}

void InstallationObject::sendBaselinesTo(SceneObject* player) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBASELINESTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

bool InstallationObject::isInstallationObject() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISINSTALLATIONOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInstallationObject();
}

bool InstallationObject::isOperating() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISOPERATING__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isOperating();
}

int InstallationObject::getInstallationType() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETINSTALLATIONTYPE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getInstallationType();
}

float InstallationObject::getExtractionRate() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEXTRACTIONRATE__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getExtractionRate();
}

float InstallationObject::getHopperSizeMax() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHOPPERSIZEMAX__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getHopperSizeMax();
}

void InstallationObject::updateStructureStatus() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATESTRUCTURESTATUS__);

		method.executeWithVoidReturn();
	} else
		_implementation->updateStructureStatus();
}

HopperList* InstallationObject::getHopperList() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getHopperList();
}

bool InstallationObject::isHarvesterObject() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISHARVESTEROBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isHarvesterObject();
}

bool InstallationObject::isGeneratorObject() {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISGENERATOROBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isGeneratorObject();
}

void InstallationObject::setHopperSizeMax(float size) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setHopperSizeMax(size);
}

void InstallationObject::setExtractionRate(float rate) {
	InstallationObjectImplementation* _implementation = static_cast<InstallationObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setExtractionRate(rate);
}

DistributedObjectServant* InstallationObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void InstallationObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	InstallationObjectImplementation
 */

InstallationObjectImplementation::InstallationObjectImplementation(DummyConstructorParameter* param) : StructureObjectImplementation(param) {
	_initializeImplementation();
}


InstallationObjectImplementation::~InstallationObjectImplementation() {
}


void InstallationObjectImplementation::finalize() {
}

void InstallationObjectImplementation::_initializeImplementation() {
	_setClassHelper(InstallationObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void InstallationObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<InstallationObject*>(stub);
	StructureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* InstallationObjectImplementation::_getStub() {
	return _this;
}

InstallationObjectImplementation::operator const InstallationObject*() {
	return _this;
}

void InstallationObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void InstallationObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void InstallationObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void InstallationObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void InstallationObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void InstallationObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void InstallationObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void InstallationObjectImplementation::_serializationHelperMethod() {
	StructureObjectImplementation::_serializationHelperMethod();

	_setClassName("InstallationObject");

}

void InstallationObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(InstallationObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool InstallationObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (StructureObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "InstallationObject.operating") {
		TypeInfo<bool >::parseFromBinaryStream(&operating, stream);
		return true;
	}

	if (_name == "InstallationObject.operatorList") {
		TypeInfo<SortedVector<ManagedReference<CreatureObject* > > >::parseFromBinaryStream(&operatorList, stream);
		return true;
	}

	if (_name == "InstallationObject.installationType") {
		TypeInfo<int >::parseFromBinaryStream(&installationType, stream);
		return true;
	}

	if (_name == "InstallationObject.resourceHopperTimestamp") {
		TypeInfo<Time >::parseFromBinaryStream(&resourceHopperTimestamp, stream);
		return true;
	}

	if (_name == "InstallationObject.lastMaintenanceTime") {
		TypeInfo<Time >::parseFromBinaryStream(&lastMaintenanceTime, stream);
		return true;
	}

	if (_name == "InstallationObject.resourceHopper") {
		TypeInfo<HopperList >::parseFromBinaryStream(&resourceHopper, stream);
		return true;
	}

	if (_name == "InstallationObject.hopperSizeMax") {
		TypeInfo<float >::parseFromBinaryStream(&hopperSizeMax, stream);
		return true;
	}

	if (_name == "InstallationObject.extractionRate") {
		TypeInfo<float >::parseFromBinaryStream(&extractionRate, stream);
		return true;
	}


	return false;
}

void InstallationObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = InstallationObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int InstallationObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "InstallationObject.operating";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&operating, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "InstallationObject.operatorList";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<SortedVector<ManagedReference<CreatureObject* > > >::toBinaryStream(&operatorList, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "InstallationObject.installationType";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&installationType, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "InstallationObject.resourceHopperTimestamp";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Time >::toBinaryStream(&resourceHopperTimestamp, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "InstallationObject.lastMaintenanceTime";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Time >::toBinaryStream(&lastMaintenanceTime, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "InstallationObject.resourceHopper";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<HopperList >::toBinaryStream(&resourceHopper, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "InstallationObject.hopperSizeMax";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&hopperSizeMax, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "InstallationObject.extractionRate";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&extractionRate, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 8 + StructureObjectImplementation::writeObjectMembers(stream);
}

InstallationObjectImplementation::InstallationObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/installation/InstallationObject.idl():  		Logger.setLoggingName("InstallationObject");
	Logger::setLoggingName("InstallationObject");
	// server/zone/objects/installation/InstallationObject.idl():  		operating = false;
	operating = false;
	// server/zone/objects/installation/InstallationObject.idl():  		installationType = 0;
	installationType = 0;
	// server/zone/objects/installation/InstallationObject.idl():  		operatorList.setNoDuplicateInsertPlan();
	(&operatorList)->setNoDuplicateInsertPlan();
	// server/zone/objects/installation/InstallationObject.idl():  		hopperSizeMax = 10000;
	hopperSizeMax = 10000;
	// server/zone/objects/installation/InstallationObject.idl():  		extractionRate = 100;
	extractionRate = 100;
}

void InstallationObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/installation/InstallationObject.idl():  		super.initializeTransientMembers();
	StructureObjectImplementation::initializeTransientMembers();
	// server/zone/objects/installation/InstallationObject.idl():  		super.staticObject = false;
	StructureObjectImplementation::staticObject = false;
	// server/zone/objects/installation/InstallationObject.idl():  		operatorList.setNoDuplicateInsertPlan();
	(&operatorList)->setNoDuplicateInsertPlan();
	// server/zone/objects/installation/InstallationObject.idl():  		Logger.setLoggingName("InstallationObject");
	Logger::setLoggingName("InstallationObject");
}

void InstallationObjectImplementation::updateOperators() {
}

void InstallationObjectImplementation::addOperator(CreatureObject* player) {
	// server/zone/objects/installation/InstallationObject.idl():  		operatorList.put(player);
	(&operatorList)->put(player);
}

void InstallationObjectImplementation::removeOperator(CreatureObject* player) {
	// server/zone/objects/installation/InstallationObject.idl():  		operatorList.drop(player);
	(&operatorList)->drop(player);
}

bool InstallationObjectImplementation::isInstallationObject() {
	// server/zone/objects/installation/InstallationObject.idl():  		return true;
	return true;
}

bool InstallationObjectImplementation::isOperating() {
	// server/zone/objects/installation/InstallationObject.idl():  		return operating;
	return operating;
}

int InstallationObjectImplementation::getInstallationType() {
	// server/zone/objects/installation/InstallationObject.idl():  		return installationType;
	return installationType;
}

float InstallationObjectImplementation::getExtractionRate() {
	// server/zone/objects/installation/InstallationObject.idl():  		return extractionRate;
	return extractionRate;
}

float InstallationObjectImplementation::getHopperSizeMax() {
	// server/zone/objects/installation/InstallationObject.idl():  		return hopperSizeMax;
	return hopperSizeMax;
}

HopperList* InstallationObjectImplementation::getHopperList() {
	// server/zone/objects/installation/InstallationObject.idl():  		return resourceHopper;
	return (&resourceHopper);
}

bool InstallationObjectImplementation::isHarvesterObject() {
	// server/zone/objects/installation/InstallationObject.idl():  		return false;
	return false;
}

bool InstallationObjectImplementation::isGeneratorObject() {
	// server/zone/objects/installation/InstallationObject.idl():  		return false;
	return false;
}

/*
 *	InstallationObjectAdapter
 */

InstallationObjectAdapter::InstallationObjectAdapter(InstallationObject* obj) : StructureObjectAdapter(obj) {
}

Packet* InstallationObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__BOOL_:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case RPC_BROADCASTMESSAGE__BASEPACKET_BOOL_:
		broadcastMessage(static_cast<BasePacket*>(inv->getObjectParameter()), inv->getBooleanParameter());
		break;
	case RPC_UPDATERESOURCECONTAINERQUANTITY__RESOURCECONTAINER_INT_BOOL_:
		updateResourceContainerQuantity(static_cast<ResourceContainer*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case RPC_SETOPERATING__BOOL_BOOL_:
		setOperating(inv->getBooleanParameter(), inv->getBooleanParameter());
		break;
	case RPC_ACTIVATEUISYNC__:
		activateUiSync();
		break;
	case RPC_UPDATEOPERATORS__:
		updateOperators();
		break;
	case RPC_VERIFYOPERATORS__:
		verifyOperators();
		break;
	case RPC_UPDATEINSTALLATIONWORK__:
		updateInstallationWork();
		break;
	case RPC_HANDLESTRUCTUREADDENERGY__CREATUREOBJECT_:
		handleStructureAddEnergy(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_SETACTIVERESOURCE__RESOURCECONTAINER_:
		setActiveResource(static_cast<ResourceContainer*>(inv->getObjectParameter()));
		break;
	case RPC_CHANGEACTIVERESOURCEID__LONG_:
		changeActiveResourceID(inv->getUnsignedLongParameter());
		break;
	case RPC_ADDRESOURCETOHOPPER__RESOURCECONTAINER_:
		addResourceToHopper(static_cast<ResourceContainer*>(inv->getObjectParameter()));
		break;
	case RPC_REMOVERESOURCEFROMHOPPER__RESOURCECONTAINER_:
		removeResourceFromHopper(static_cast<ResourceContainer*>(inv->getObjectParameter()));
		break;
	case RPC_CLEARRESOURCEHOPPER__:
		clearResourceHopper();
		break;
	case RPC_GETHOPPERSIZE__:
		resp->insertFloat(getHopperSize());
		break;
	case RPC_GETHOPPERITEMQUANTITY__RESOURCESPAWN_:
		resp->insertSignedInt(getHopperItemQuantity(static_cast<ResourceSpawn*>(inv->getObjectParameter())));
		break;
	case RPC_GETCONTAINERFROMHOPPER__RESOURCESPAWN_:
		resp->insertLong(getContainerFromHopper(static_cast<ResourceSpawn*>(inv->getObjectParameter()))->_getObjectID());
		break;
	case RPC_GETACTIVERESOURCESPAWNID__:
		resp->insertLong(getActiveResourceSpawnID());
		break;
	case RPC_GETACTUALRATE__:
		resp->insertFloat(getActualRate());
		break;
	case RPC_BROADCASTTOOPERATORS__BASEPACKET_:
		broadcastToOperators(static_cast<BasePacket*>(inv->getObjectParameter()));
		break;
	case RPC_ADDOPERATOR__CREATUREOBJECT_:
		addOperator(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_REMOVEOPERATOR__CREATUREOBJECT_:
		removeOperator(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_SENDBASELINESTO__SCENEOBJECT_:
		sendBaselinesTo(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_ISINSTALLATIONOBJECT__:
		resp->insertBoolean(isInstallationObject());
		break;
	case RPC_ISOPERATING__:
		resp->insertBoolean(isOperating());
		break;
	case RPC_GETINSTALLATIONTYPE__:
		resp->insertSignedInt(getInstallationType());
		break;
	case RPC_GETEXTRACTIONRATE__:
		resp->insertFloat(getExtractionRate());
		break;
	case RPC_GETHOPPERSIZEMAX__:
		resp->insertFloat(getHopperSizeMax());
		break;
	case RPC_UPDATESTRUCTURESTATUS__:
		updateStructureStatus();
		break;
	case RPC_ISHARVESTEROBJECT__:
		resp->insertBoolean(isHarvesterObject());
		break;
	case RPC_ISGENERATOROBJECT__:
		resp->insertBoolean(isGeneratorObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

void InstallationObjectAdapter::initializeTransientMembers() {
	(static_cast<InstallationObject*>(stub))->initializeTransientMembers();
}

void InstallationObjectAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	(static_cast<InstallationObject*>(stub))->destroyObjectFromDatabase(destroyContainedObjects);
}

void InstallationObjectAdapter::broadcastMessage(BasePacket* message, bool sendSelf) {
	(static_cast<InstallationObject*>(stub))->broadcastMessage(message, sendSelf);
}

void InstallationObjectAdapter::updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient) {
	(static_cast<InstallationObject*>(stub))->updateResourceContainerQuantity(container, newQuantity, notifyClient);
}

void InstallationObjectAdapter::setOperating(bool operating, bool notifyClient) {
	(static_cast<InstallationObject*>(stub))->setOperating(operating, notifyClient);
}

void InstallationObjectAdapter::activateUiSync() {
	(static_cast<InstallationObject*>(stub))->activateUiSync();
}

void InstallationObjectAdapter::updateOperators() {
	(static_cast<InstallationObject*>(stub))->updateOperators();
}

void InstallationObjectAdapter::verifyOperators() {
	(static_cast<InstallationObject*>(stub))->verifyOperators();
}

void InstallationObjectAdapter::updateInstallationWork() {
	(static_cast<InstallationObject*>(stub))->updateInstallationWork();
}

void InstallationObjectAdapter::handleStructureAddEnergy(CreatureObject* player) {
	(static_cast<InstallationObject*>(stub))->handleStructureAddEnergy(player);
}

void InstallationObjectAdapter::setActiveResource(ResourceContainer* container) {
	(static_cast<InstallationObject*>(stub))->setActiveResource(container);
}

void InstallationObjectAdapter::changeActiveResourceID(unsigned long long spawnObjectID) {
	(static_cast<InstallationObject*>(stub))->changeActiveResourceID(spawnObjectID);
}

void InstallationObjectAdapter::addResourceToHopper(ResourceContainer* container) {
	(static_cast<InstallationObject*>(stub))->addResourceToHopper(container);
}

void InstallationObjectAdapter::removeResourceFromHopper(ResourceContainer* container) {
	(static_cast<InstallationObject*>(stub))->removeResourceFromHopper(container);
}

void InstallationObjectAdapter::clearResourceHopper() {
	(static_cast<InstallationObject*>(stub))->clearResourceHopper();
}

float InstallationObjectAdapter::getHopperSize() {
	return (static_cast<InstallationObject*>(stub))->getHopperSize();
}

int InstallationObjectAdapter::getHopperItemQuantity(ResourceSpawn* spawn) {
	return (static_cast<InstallationObject*>(stub))->getHopperItemQuantity(spawn);
}

ResourceContainer* InstallationObjectAdapter::getContainerFromHopper(ResourceSpawn* spawn) {
	return (static_cast<InstallationObject*>(stub))->getContainerFromHopper(spawn);
}

unsigned long long InstallationObjectAdapter::getActiveResourceSpawnID() {
	return (static_cast<InstallationObject*>(stub))->getActiveResourceSpawnID();
}

float InstallationObjectAdapter::getActualRate() {
	return (static_cast<InstallationObject*>(stub))->getActualRate();
}

void InstallationObjectAdapter::broadcastToOperators(BasePacket* packet) {
	(static_cast<InstallationObject*>(stub))->broadcastToOperators(packet);
}

void InstallationObjectAdapter::addOperator(CreatureObject* player) {
	(static_cast<InstallationObject*>(stub))->addOperator(player);
}

void InstallationObjectAdapter::removeOperator(CreatureObject* player) {
	(static_cast<InstallationObject*>(stub))->removeOperator(player);
}

void InstallationObjectAdapter::sendBaselinesTo(SceneObject* player) {
	(static_cast<InstallationObject*>(stub))->sendBaselinesTo(player);
}

bool InstallationObjectAdapter::isInstallationObject() {
	return (static_cast<InstallationObject*>(stub))->isInstallationObject();
}

bool InstallationObjectAdapter::isOperating() {
	return (static_cast<InstallationObject*>(stub))->isOperating();
}

int InstallationObjectAdapter::getInstallationType() {
	return (static_cast<InstallationObject*>(stub))->getInstallationType();
}

float InstallationObjectAdapter::getExtractionRate() {
	return (static_cast<InstallationObject*>(stub))->getExtractionRate();
}

float InstallationObjectAdapter::getHopperSizeMax() {
	return (static_cast<InstallationObject*>(stub))->getHopperSizeMax();
}

void InstallationObjectAdapter::updateStructureStatus() {
	(static_cast<InstallationObject*>(stub))->updateStructureStatus();
}

bool InstallationObjectAdapter::isHarvesterObject() {
	return (static_cast<InstallationObject*>(stub))->isHarvesterObject();
}

bool InstallationObjectAdapter::isGeneratorObject() {
	return (static_cast<InstallationObject*>(stub))->isGeneratorObject();
}

/*
 *	InstallationObjectHelper
 */

InstallationObjectHelper* InstallationObjectHelper::staticInitializer = InstallationObjectHelper::instance();

InstallationObjectHelper::InstallationObjectHelper() {
	className = "InstallationObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void InstallationObjectHelper::finalizeHelper() {
	InstallationObjectHelper::finalize();
}

DistributedObject* InstallationObjectHelper::instantiateObject() {
	return new InstallationObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* InstallationObjectHelper::instantiateServant() {
	return new InstallationObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* InstallationObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new InstallationObjectAdapter(static_cast<InstallationObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

