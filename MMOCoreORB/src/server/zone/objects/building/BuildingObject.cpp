/*
 *	server/zone/objects/building/BuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "BuildingObject.h"

#include "server/zone/objects/cell/CellObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/tangible/sign/SignObject.h"

#include "server/zone/objects/tangible/terminal/structure/StructureTerminal.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	BuildingObjectStub
 */

BuildingObject::BuildingObject() : StructureObject(DummyConstructorParameter::instance()) {
	_impl = new BuildingObjectImplementation();
	_impl->_setStub(this);
}

BuildingObject::BuildingObject(DummyConstructorParameter* param) : StructureObject(param) {
}

BuildingObject::~BuildingObject() {
}


void BuildingObject::createChildObjects() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->createChildObjects();
}

void BuildingObject::createCellObjects() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->createCellObjects();
}

void BuildingObject::destroyObjectFromDatabase(bool destroyContainedObjects) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

void BuildingObject::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->loadTemplateData(templateData);
}

void BuildingObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->initializeTransientMembers();
}

void BuildingObject::sendContainerObjectsTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->sendContainerObjectsTo(player);
}

void BuildingObject::updateCellPermissionsTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->updateCellPermissionsTo(player);
}

int BuildingObject::notifyStructurePlaced(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->notifyStructurePlaced(player);
}

Vector3 BuildingObject::getEjectionPoint() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((BuildingObjectImplementation*) _impl)->getEjectionPoint();
}

void BuildingObject::removeFromZone() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->removeFromZone();
}

void BuildingObject::notifyInsert(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->notifyInsert(obj);
}

void BuildingObject::notifyDissapear(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->notifyDissapear(obj);
}

void BuildingObject::notifyInsertToZone(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->notifyInsertToZone(object);
}

void BuildingObject::insert(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->insert(obj);
}

void BuildingObject::remove(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->remove(obj);
}

void BuildingObject::update(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->update(obj);
}

void BuildingObject::inRange(QuadTreeEntry* obj, float range) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->inRange(obj, range);
}

void BuildingObject::sendTo(SceneObject* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->sendTo(player, doClose);
}

void BuildingObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void BuildingObject::sendDestroyTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->sendDestroyTo(player);
}

void BuildingObject::addCell(CellObject* cell) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(cell);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->addCell(cell);
}

bool BuildingObject::isStaticBuilding() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithBooleanReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->isStaticBuilding();
}

CellObject* BuildingObject::getCell(int idx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addSignedIntParameter(idx);

		return (CellObject*) method.executeWithObjectReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->getCell(idx);
}

int BuildingObject::getTotalCellNumber() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithSignedIntReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->getTotalCellNumber();
}

void BuildingObject::setStaticBuilding(bool value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->setStaticBuilding(value);
}

void BuildingObject::onEnter(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->onEnter(player);
}

void BuildingObject::onExit(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->onExit(player);
}

bool BuildingObject::isBuildingObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithBooleanReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->isBuildingObject();
}

bool BuildingObject::isMedicalBuildingObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithBooleanReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->isMedicalBuildingObject();
}

void BuildingObject::setSignObject(SignObject* sign) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(sign);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->setSignObject(sign);
}

SignObject* BuildingObject::getSignObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return (SignObject*) method.executeWithObjectReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->getSignObject();
}

bool BuildingObject::isCityHallBuilding() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithBooleanReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->isCityHallBuilding();
}

bool BuildingObject::isDeclaredResidency() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithBooleanReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->isDeclaredResidency();
}

void BuildingObject::setDeclaredResidency(bool value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->setDeclaredResidency(value);
}

void BuildingObject::setAccessFee(int fee) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addSignedIntParameter(fee);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->setAccessFee(fee);
}

int BuildingObject::getAccessFee() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithSignedIntReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->getAccessFee();
}

/*
 *	BuildingObjectImplementation
 */

BuildingObjectImplementation::BuildingObjectImplementation(DummyConstructorParameter* param) : StructureObjectImplementation(param) {
	_initializeImplementation();
}

BuildingObjectImplementation::~BuildingObjectImplementation() {
}


void BuildingObjectImplementation::finalize() {
}

void BuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(BuildingObjectHelper::instance());

	_serializationHelperMethod();
}

void BuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BuildingObject*) stub;
	StructureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* BuildingObjectImplementation::_getStub() {
	return _this;
}

BuildingObjectImplementation::operator const BuildingObject*() {
	return _this;
}

void BuildingObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BuildingObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BuildingObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BuildingObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BuildingObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BuildingObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BuildingObjectImplementation::_serializationHelperMethod() {
	StructureObjectImplementation::_serializationHelperMethod();

	_setClassName("BuildingObject");

	addSerializableVariable("cells", &cells);
	addSerializableVariable("structureTerminal", &structureTerminal);
	addSerializableVariable("totalCellNumber", &totalCellNumber);
	addSerializableVariable("signObject", &signObject);
	addSerializableVariable("deedObjectID", &deedObjectID);
	addSerializableVariable("accessFee", &accessFee);
	addSerializableVariable("declaredResidency", &declaredResidency);
}

BuildingObjectImplementation::BuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/BuildingObject.idl(82):  		Logger.setLoggingName("BuildingObject");
	Logger::setLoggingName("BuildingObject");
	// server/zone/objects/building/BuildingObject.idl(84):  		QuadTree.setSize(-1024, -1024, 1024, 1024);
	QuadTree::setSize(-1024, -1024, 1024, 1024);
	// server/zone/objects/building/BuildingObject.idl(86):  		super.staticObject = false;
	StructureObjectImplementation::staticObject = false;
	// server/zone/objects/building/BuildingObject.idl(88):  		super.containerVolumeLimit = 0xFFFFFFFF;
	StructureObjectImplementation::containerVolumeLimit = 0xFFFFFFFF;
	// server/zone/objects/building/BuildingObject.idl(90):  		super.containerType = 2;
	StructureObjectImplementation::containerType = 2;
	// server/zone/objects/building/BuildingObject.idl(92):  		totalCellNumber = 0;
	totalCellNumber = 0;
	// server/zone/objects/building/BuildingObject.idl(94):  		accessFee = 0;
	accessFee = 0;
	// server/zone/objects/building/BuildingObject.idl(96):  		declaredResidency = false;
	declaredResidency = false;
}

void BuildingObjectImplementation::createCellObjects() {
	// server/zone/objects/building/BuildingObject.idl(102):  
	for (	// server/zone/objects/building/BuildingObject.idl(102):  		for (int i = 0;
	int i = 0;
	i < totalCellNumber;
 ++i) {
	// server/zone/objects/building/BuildingObject.idl(103):  			SceneObject newCell = getZoneServer().createObject(2906855187, 2);
	SceneObject* newCell = getZoneServer()->createObject(2906855187, 2);
	// server/zone/objects/building/BuildingObject.idl(105):  			addCell((CellObject)newCell);
	addCell((CellObject*) newCell);
}
	// server/zone/objects/building/BuildingObject.idl(108):  		updateToDatabase();
	updateToDatabase();
}

int BuildingObjectImplementation::notifyStructurePlaced(PlayerCreature* player) {
	// server/zone/objects/building/BuildingObject.idl(136):  		return 0;
	return 0;
}

bool BuildingObjectImplementation::isStaticBuilding() {
	// server/zone/objects/building/BuildingObject.idl(185):  		return super.staticObject;
	return StructureObjectImplementation::staticObject;
}

CellObject* BuildingObjectImplementation::getCell(int idx) {
	// server/zone/objects/building/BuildingObject.idl(189):  		return cells.get(idx);
	return (&cells)->get(idx);
}

int BuildingObjectImplementation::getTotalCellNumber() {
	// server/zone/objects/building/BuildingObject.idl(193):  		return totalCellNumber;
	return totalCellNumber;
}

void BuildingObjectImplementation::setStaticBuilding(bool value) {
	// server/zone/objects/building/BuildingObject.idl(197):  		super.staticObject = value;
	StructureObjectImplementation::staticObject = value;
}

void BuildingObjectImplementation::onExit(PlayerCreature* player) {
}

bool BuildingObjectImplementation::isBuildingObject() {
	// server/zone/objects/building/BuildingObject.idl(223):  		return true;
	return true;
}

bool BuildingObjectImplementation::isMedicalBuildingObject() {
	// server/zone/objects/building/BuildingObject.idl(227):  		return false;
	return false;
}

void BuildingObjectImplementation::setSignObject(SignObject* sign) {
	// server/zone/objects/building/BuildingObject.idl(231):  		signObject = sign;
	signObject = sign;
}

SignObject* BuildingObjectImplementation::getSignObject() {
	// server/zone/objects/building/BuildingObject.idl(235):  		return signObject;
	return signObject;
}

bool BuildingObjectImplementation::isCityHallBuilding() {
	// server/zone/objects/building/BuildingObject.idl(239):  		return false;
	return false;
}

bool BuildingObjectImplementation::isDeclaredResidency() {
	// server/zone/objects/building/BuildingObject.idl(243):  		return declaredResidency;
	return declaredResidency;
}

void BuildingObjectImplementation::setDeclaredResidency(bool value) {
	// server/zone/objects/building/BuildingObject.idl(247):  		declaredResidency = value;
	declaredResidency = value;
}

void BuildingObjectImplementation::setAccessFee(int fee) {
	// server/zone/objects/building/BuildingObject.idl(251):  		accessFee = fee;
	accessFee = fee;
}

int BuildingObjectImplementation::getAccessFee() {
	// server/zone/objects/building/BuildingObject.idl(255):  		return accessFee;
	return accessFee;
}

/*
 *	BuildingObjectAdapter
 */

BuildingObjectAdapter::BuildingObjectAdapter(BuildingObjectImplementation* obj) : StructureObjectAdapter(obj) {
}

Packet* BuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		createChildObjects();
		break;
	case 7:
		createCellObjects();
		break;
	case 8:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case 9:
		initializeTransientMembers();
		break;
	case 10:
		sendContainerObjectsTo((SceneObject*) inv->getObjectParameter());
		break;
	case 11:
		updateCellPermissionsTo((SceneObject*) inv->getObjectParameter());
		break;
	case 12:
		resp->insertSignedInt(notifyStructurePlaced((PlayerCreature*) inv->getObjectParameter()));
		break;
	case 13:
		removeFromZone();
		break;
	case 14:
		notifyInsertToZone((SceneObject*) inv->getObjectParameter());
		break;
	case 15:
		sendTo((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 16:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 17:
		sendDestroyTo((SceneObject*) inv->getObjectParameter());
		break;
	case 18:
		addCell((CellObject*) inv->getObjectParameter());
		break;
	case 19:
		resp->insertBoolean(isStaticBuilding());
		break;
	case 20:
		resp->insertLong(getCell(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 21:
		resp->insertSignedInt(getTotalCellNumber());
		break;
	case 22:
		setStaticBuilding(inv->getBooleanParameter());
		break;
	case 23:
		onEnter((PlayerCreature*) inv->getObjectParameter());
		break;
	case 24:
		onExit((PlayerCreature*) inv->getObjectParameter());
		break;
	case 25:
		resp->insertBoolean(isBuildingObject());
		break;
	case 26:
		resp->insertBoolean(isMedicalBuildingObject());
		break;
	case 27:
		setSignObject((SignObject*) inv->getObjectParameter());
		break;
	case 28:
		resp->insertLong(getSignObject()->_getObjectID());
		break;
	case 29:
		resp->insertBoolean(isCityHallBuilding());
		break;
	case 30:
		resp->insertBoolean(isDeclaredResidency());
		break;
	case 31:
		setDeclaredResidency(inv->getBooleanParameter());
		break;
	case 32:
		setAccessFee(inv->getSignedIntParameter());
		break;
	case 33:
		resp->insertSignedInt(getAccessFee());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BuildingObjectAdapter::createChildObjects() {
	((BuildingObjectImplementation*) impl)->createChildObjects();
}

void BuildingObjectAdapter::createCellObjects() {
	((BuildingObjectImplementation*) impl)->createCellObjects();
}

void BuildingObjectAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	((BuildingObjectImplementation*) impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

void BuildingObjectAdapter::initializeTransientMembers() {
	((BuildingObjectImplementation*) impl)->initializeTransientMembers();
}

void BuildingObjectAdapter::sendContainerObjectsTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendContainerObjectsTo(player);
}

void BuildingObjectAdapter::updateCellPermissionsTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->updateCellPermissionsTo(player);
}

int BuildingObjectAdapter::notifyStructurePlaced(PlayerCreature* player) {
	return ((BuildingObjectImplementation*) impl)->notifyStructurePlaced(player);
}

void BuildingObjectAdapter::removeFromZone() {
	((BuildingObjectImplementation*) impl)->removeFromZone();
}

void BuildingObjectAdapter::notifyInsertToZone(SceneObject* object) {
	((BuildingObjectImplementation*) impl)->notifyInsertToZone(object);
}

void BuildingObjectAdapter::sendTo(SceneObject* player, bool doClose) {
	((BuildingObjectImplementation*) impl)->sendTo(player, doClose);
}

void BuildingObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendBaselinesTo(player);
}

void BuildingObjectAdapter::sendDestroyTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendDestroyTo(player);
}

void BuildingObjectAdapter::addCell(CellObject* cell) {
	((BuildingObjectImplementation*) impl)->addCell(cell);
}

bool BuildingObjectAdapter::isStaticBuilding() {
	return ((BuildingObjectImplementation*) impl)->isStaticBuilding();
}

CellObject* BuildingObjectAdapter::getCell(int idx) {
	return ((BuildingObjectImplementation*) impl)->getCell(idx);
}

int BuildingObjectAdapter::getTotalCellNumber() {
	return ((BuildingObjectImplementation*) impl)->getTotalCellNumber();
}

void BuildingObjectAdapter::setStaticBuilding(bool value) {
	((BuildingObjectImplementation*) impl)->setStaticBuilding(value);
}

void BuildingObjectAdapter::onEnter(PlayerCreature* player) {
	((BuildingObjectImplementation*) impl)->onEnter(player);
}

void BuildingObjectAdapter::onExit(PlayerCreature* player) {
	((BuildingObjectImplementation*) impl)->onExit(player);
}

bool BuildingObjectAdapter::isBuildingObject() {
	return ((BuildingObjectImplementation*) impl)->isBuildingObject();
}

bool BuildingObjectAdapter::isMedicalBuildingObject() {
	return ((BuildingObjectImplementation*) impl)->isMedicalBuildingObject();
}

void BuildingObjectAdapter::setSignObject(SignObject* sign) {
	((BuildingObjectImplementation*) impl)->setSignObject(sign);
}

SignObject* BuildingObjectAdapter::getSignObject() {
	return ((BuildingObjectImplementation*) impl)->getSignObject();
}

bool BuildingObjectAdapter::isCityHallBuilding() {
	return ((BuildingObjectImplementation*) impl)->isCityHallBuilding();
}

bool BuildingObjectAdapter::isDeclaredResidency() {
	return ((BuildingObjectImplementation*) impl)->isDeclaredResidency();
}

void BuildingObjectAdapter::setDeclaredResidency(bool value) {
	((BuildingObjectImplementation*) impl)->setDeclaredResidency(value);
}

void BuildingObjectAdapter::setAccessFee(int fee) {
	((BuildingObjectImplementation*) impl)->setAccessFee(fee);
}

int BuildingObjectAdapter::getAccessFee() {
	return ((BuildingObjectImplementation*) impl)->getAccessFee();
}

/*
 *	BuildingObjectHelper
 */

BuildingObjectHelper* BuildingObjectHelper::staticInitializer = BuildingObjectHelper::instance();

BuildingObjectHelper::BuildingObjectHelper() {
	className = "BuildingObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BuildingObjectHelper::finalizeHelper() {
	BuildingObjectHelper::finalize();
}

DistributedObject* BuildingObjectHelper::instantiateObject() {
	return new BuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* BuildingObjectHelper::instantiateServant() {
	return new BuildingObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BuildingObjectAdapter((BuildingObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

