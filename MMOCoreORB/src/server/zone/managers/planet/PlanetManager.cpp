/*
 *	server/zone/managers/planet/PlanetManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "PlanetManager.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/region/CityRegion.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/managers/weather/WeatherManager.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/area/ActiveArea.h"

/*
 *	PlanetManagerStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__,RPC_FINALIZE__,RPC_INITIALIZE__,RPC_LOADCLIENTREGIONS__,RPC_LOADBADGEAREAS__,RPC_LOADPERFORMANCELOCATIONS__,RPC_ISBUILDINGPERMITTEDAT__FLOAT_FLOAT_SCENEOBJECT_,RPC_GETTRAVELFARE__STRING_,RPC_SENDPLANETTRAVELPOINTLISTRESPONSE__CREATUREOBJECT_,RPC_CREATETICKET__STRING_STRING_STRING_,RPC_GETWEATHERMANAGER__,RPC_GETREGIONCOUNT__,RPC_GETNUMBEROFCITIES__,RPC_INCREASENUMBEROFCITIES__,RPC_GETREGION__INT_,RPC_GETREGION__STRING_,RPC_GETREGIONAT__FLOAT_FLOAT_,RPC_ADDREGION__CITYREGION_,RPC_DROPREGION__STRING_,RPC_HASREGION__STRING_,RPC_ADDPERFORMANCELOCATION__SCENEOBJECT_,RPC_ISEXISTINGPLANETTRAVELPOINT__STRING_,RPC_ISINTERPLANETARYTRAVELALLOWED__STRING_,RPC_ISTRAVELTOLOCATIONPERMITTED__STRING_STRING_STRING_,RPC_SCHEDULESHUTTLE__CREATUREOBJECT_,RPC_CHECKSHUTTLESTATUS__CREATUREOBJECT_CREATUREOBJECT_,RPC_ISINWATER__FLOAT_FLOAT_};

PlanetManager::PlanetManager(Zone* planet, ZoneProcessServer* srv) : ManagedService(DummyConstructorParameter::instance()) {
	PlanetManagerImplementation* _implementation = new PlanetManagerImplementation(planet, srv);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PlanetManager");
}

PlanetManager::PlanetManager(DummyConstructorParameter* param) : ManagedService(param) {
	_setClassName("PlanetManager");
}

PlanetManager::~PlanetManager() {
}



void PlanetManager::initializeTransientMembers() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void PlanetManager::initialize() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

void PlanetManager::loadClientRegions() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADCLIENTREGIONS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadClientRegions();
}

void PlanetManager::loadBadgeAreas() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADBADGEAREAS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadBadgeAreas();
}

void PlanetManager::loadPerformanceLocations() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADPERFORMANCELOCATIONS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadPerformanceLocations();
}

PlanetTravelPoint* PlanetManager::getNearestPlanetTravelPoint(SceneObject* object, float range) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getNearestPlanetTravelPoint(object, range);
}

PlanetTravelPoint* PlanetManager::getNearestPlanetTravelPoint(const Vector3& position, float range) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getNearestPlanetTravelPoint(position, range);
}

bool PlanetManager::isBuildingPermittedAt(float x, float y, SceneObject* objectTryingToBuild) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBUILDINGPERMITTEDAT__FLOAT_FLOAT_SCENEOBJECT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addObjectParameter(objectTryingToBuild);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBuildingPermittedAt(x, y, objectTryingToBuild);
}

int PlanetManager::getTravelFare(const String& destinationPlanet) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTRAVELFARE__STRING_);
		method.addAsciiParameter(destinationPlanet);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTravelFare(destinationPlanet);
}

void PlanetManager::sendPlanetTravelPointListResponse(CreatureObject* player) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDPLANETTRAVELPOINTLISTRESPONSE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendPlanetTravelPointListResponse(player);
}

SceneObject* PlanetManager::createTicket(const String& departurePoint, const String& arrivalPlanet, const String& arrivalPoint) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATETICKET__STRING_STRING_STRING_);
		method.addAsciiParameter(departurePoint);
		method.addAsciiParameter(arrivalPlanet);
		method.addAsciiParameter(arrivalPoint);

		return static_cast<SceneObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->createTicket(departurePoint, arrivalPlanet, arrivalPoint);
}

WeatherManager* PlanetManager::getWeatherManager() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETWEATHERMANAGER__);

		return static_cast<WeatherManager*>(method.executeWithObjectReturn());
	} else
		return _implementation->getWeatherManager();
}

TerrainManager* PlanetManager::getTerrainManager() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getTerrainManager();
}

int PlanetManager::getRegionCount() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETREGIONCOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getRegionCount();
}

int PlanetManager::getNumberOfCities() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETNUMBEROFCITIES__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getNumberOfCities();
}

void PlanetManager::increaseNumberOfCities() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INCREASENUMBEROFCITIES__);

		method.executeWithVoidReturn();
	} else
		_implementation->increaseNumberOfCities();
}

CityRegion* PlanetManager::getRegion(int index) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETREGION__INT_);
		method.addSignedIntParameter(index);

		return static_cast<CityRegion*>(method.executeWithObjectReturn());
	} else
		return _implementation->getRegion(index);
}

CityRegion* PlanetManager::getRegion(const String& region) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETREGION__STRING_);
		method.addAsciiParameter(region);

		return static_cast<CityRegion*>(method.executeWithObjectReturn());
	} else
		return _implementation->getRegion(region);
}

CityRegion* PlanetManager::getRegionAt(float x, float y) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETREGIONAT__FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return static_cast<CityRegion*>(method.executeWithObjectReturn());
	} else
		return _implementation->getRegionAt(x, y);
}

void PlanetManager::addRegion(CityRegion* region) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDREGION__CITYREGION_);
		method.addObjectParameter(region);

		method.executeWithVoidReturn();
	} else
		_implementation->addRegion(region);
}

void PlanetManager::dropRegion(const String& region) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DROPREGION__STRING_);
		method.addAsciiParameter(region);

		method.executeWithVoidReturn();
	} else
		_implementation->dropRegion(region);
}

bool PlanetManager::hasRegion(const String& name) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASREGION__STRING_);
		method.addAsciiParameter(name);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasRegion(name);
}

void PlanetManager::addPerformanceLocation(SceneObject* obj) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDPERFORMANCELOCATION__SCENEOBJECT_);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->addPerformanceLocation(obj);
}

MissionTargetMap* PlanetManager::getPerformanceLocations() {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getPerformanceLocations();
}

bool PlanetManager::isExistingPlanetTravelPoint(const String& pointName) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISEXISTINGPLANETTRAVELPOINT__STRING_);
		method.addAsciiParameter(pointName);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isExistingPlanetTravelPoint(pointName);
}

bool PlanetManager::isInterplanetaryTravelAllowed(const String& pointName) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISINTERPLANETARYTRAVELALLOWED__STRING_);
		method.addAsciiParameter(pointName);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInterplanetaryTravelAllowed(pointName);
}

PlanetTravelPoint* PlanetManager::getPlanetTravelPoint(const String& pointName) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getPlanetTravelPoint(pointName);
}

bool PlanetManager::isTravelToLocationPermitted(const String& destinationPoint, const String& arrivalPlanet, const String& arrivalPoint) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISTRAVELTOLOCATIONPERMITTED__STRING_STRING_STRING_);
		method.addAsciiParameter(destinationPoint);
		method.addAsciiParameter(arrivalPlanet);
		method.addAsciiParameter(arrivalPoint);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isTravelToLocationPermitted(destinationPoint, arrivalPlanet, arrivalPoint);
}

void PlanetManager::scheduleShuttle(CreatureObject* shuttle) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SCHEDULESHUTTLE__CREATUREOBJECT_);
		method.addObjectParameter(shuttle);

		method.executeWithVoidReturn();
	} else
		_implementation->scheduleShuttle(shuttle);
}

bool PlanetManager::checkShuttleStatus(CreatureObject* creature, CreatureObject* shuttle) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKSHUTTLESTATUS__CREATUREOBJECT_CREATUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(shuttle);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->checkShuttleStatus(creature, shuttle);
}

bool PlanetManager::isInWater(float x, float y) {
	PlanetManagerImplementation* _implementation = static_cast<PlanetManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISINWATER__FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInWater(x, y);
}

DistributedObjectServant* PlanetManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void PlanetManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PlanetManagerImplementation
 */

PlanetManagerImplementation::PlanetManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


PlanetManagerImplementation::~PlanetManagerImplementation() {
	PlanetManagerImplementation::finalize();
}


void PlanetManagerImplementation::_initializeImplementation() {
	_setClassHelper(PlanetManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PlanetManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PlanetManager*>(stub);
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* PlanetManagerImplementation::_getStub() {
	return _this;
}

PlanetManagerImplementation::operator const PlanetManager*() {
	return _this;
}

void PlanetManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PlanetManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PlanetManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PlanetManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PlanetManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PlanetManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PlanetManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PlanetManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("PlanetManager");

}

void PlanetManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(PlanetManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PlanetManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "PlanetManager.zone") {
		TypeInfo<ManagedWeakReference<Zone* > >::parseFromBinaryStream(&zone, stream);
		return true;
	}

	if (_name == "PlanetManager.regionMap") {
		TypeInfo<RegionMap >::parseFromBinaryStream(&regionMap, stream);
		return true;
	}

	if (_name == "PlanetManager.travelFares") {
		TypeInfo<VectorMap<String, int> >::parseFromBinaryStream(&travelFares, stream);
		return true;
	}

	if (_name == "PlanetManager.planetTravelPointList") {
		TypeInfo<Reference<PlanetTravelPointList* > >::parseFromBinaryStream(&planetTravelPointList, stream);
		return true;
	}

	if (_name == "PlanetManager.shuttleLandingDelay") {
		TypeInfo<int >::parseFromBinaryStream(&shuttleLandingDelay, stream);
		return true;
	}

	if (_name == "PlanetManager.shuttleTakeoffDelay") {
		TypeInfo<int >::parseFromBinaryStream(&shuttleTakeoffDelay, stream);
		return true;
	}

	if (_name == "PlanetManager.weatherManager") {
		TypeInfo<ManagedReference<WeatherManager* > >::parseFromBinaryStream(&weatherManager, stream);
		return true;
	}

	if (_name == "PlanetManager.numberOfCities") {
		TypeInfo<int >::parseFromBinaryStream(&numberOfCities, stream);
		return true;
	}


	return false;
}

void PlanetManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PlanetManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PlanetManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedServiceImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "PlanetManager.zone";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<Zone* > >::toBinaryStream(&zone, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "PlanetManager.regionMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<RegionMap >::toBinaryStream(&regionMap, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "PlanetManager.travelFares";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<String, int> >::toBinaryStream(&travelFares, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "PlanetManager.planetTravelPointList";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Reference<PlanetTravelPointList* > >::toBinaryStream(&planetTravelPointList, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "PlanetManager.shuttleLandingDelay";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&shuttleLandingDelay, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "PlanetManager.shuttleTakeoffDelay";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&shuttleTakeoffDelay, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "PlanetManager.weatherManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<WeatherManager* > >::toBinaryStream(&weatherManager, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "PlanetManager.numberOfCities";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&numberOfCities, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return _count + 8;
}

PlanetManagerImplementation::PlanetManagerImplementation(Zone* planet, ZoneProcessServer* srv) {
	_initializeImplementation();
	Reference<PlanetTravelPointList*> _ref0;
	// server/zone/managers/planet/PlanetManager.idl():  		zone = planet;
	zone = planet;
	// server/zone/managers/planet/PlanetManager.idl():  		server = srv;
	server = srv;
	// server/zone/managers/planet/PlanetManager.idl():  		Logger.setLoggingName("PlanetManager " + zone.getZoneName());
	Logger::setLoggingName("PlanetManager " + zone->getZoneName());
	// server/zone/managers/planet/PlanetManager.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/planet/PlanetManager.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/planet/PlanetManager.idl():  		terrainManager = null;
	terrainManager = NULL;
	// server/zone/managers/planet/PlanetManager.idl():  		numberOfCities = 0;
	numberOfCities = 0;
	// server/zone/managers/planet/PlanetManager.idl():  		shuttleLandingDelay = 300000;
	shuttleLandingDelay = 300000;
	// server/zone/managers/planet/PlanetManager.idl():  		shuttleTakeoffDelay = 90000;
	shuttleTakeoffDelay = 90000;
	// server/zone/managers/planet/PlanetManager.idl():  		weatherManager = null;
	weatherManager = NULL;
	// server/zone/managers/planet/PlanetManager.idl():  		travelFares.setNullValue(0);
	(&travelFares)->setNullValue(0);
	// server/zone/managers/planet/PlanetManager.idl():  		travelFares.setNoDuplicateInsertPlan();
	(&travelFares)->setNoDuplicateInsertPlan();
	// server/zone/managers/planet/PlanetManager.idl():  		planetTravelPointList = new PlanetTravelPointList();
	planetTravelPointList = _ref0 = new PlanetTravelPointList();
}

int PlanetManagerImplementation::getTravelFare(const String& destinationPlanet) {
	// server/zone/managers/planet/PlanetManager.idl():  		return travelFares.get(destinationPlanet);
	return (&travelFares)->get(destinationPlanet);
}

WeatherManager* PlanetManagerImplementation::getWeatherManager() {
	// server/zone/managers/planet/PlanetManager.idl():  		return weatherManager;
	return weatherManager;
}

TerrainManager* PlanetManagerImplementation::getTerrainManager() {
	// server/zone/managers/planet/PlanetManager.idl():  		return terrainManager;
	return terrainManager;
}

int PlanetManagerImplementation::getRegionCount() {
	// server/zone/managers/planet/PlanetManager.idl():  		return regionMap.getTotalRegions();
	return (&regionMap)->getTotalRegions();
}

int PlanetManagerImplementation::getNumberOfCities() {
	// server/zone/managers/planet/PlanetManager.idl():  		return numberOfCities;
	return numberOfCities;
}

void PlanetManagerImplementation::increaseNumberOfCities() {
	// server/zone/managers/planet/PlanetManager.idl():  		numberOfCities = numberOfCities + 1;
	numberOfCities = numberOfCities + 1;
}

CityRegion* PlanetManagerImplementation::getRegion(int index) {
	// server/zone/managers/planet/PlanetManager.idl():  		return regionMap.getRegion(index);
	return (&regionMap)->getRegion(index);
}

CityRegion* PlanetManagerImplementation::getRegion(const String& region) {
	// server/zone/managers/planet/PlanetManager.idl():  		return regionMap.getRegion(region);
	return (&regionMap)->getRegion(region);
}

CityRegion* PlanetManagerImplementation::getRegionAt(float x, float y) {
	// server/zone/managers/planet/PlanetManager.idl():  		return regionMap.getRegionAt(x, y);
	return (&regionMap)->getRegionAt(x, y);
}

void PlanetManagerImplementation::addRegion(CityRegion* region) {
	// server/zone/managers/planet/PlanetManager.idl():  		regionMap.addRegion(region);
	(&regionMap)->addRegion(region);
}

void PlanetManagerImplementation::dropRegion(const String& region) {
	// server/zone/managers/planet/PlanetManager.idl():  		regionMap.dropRegion(region);
	(&regionMap)->dropRegion(region);
}

bool PlanetManagerImplementation::hasRegion(const String& name) {
	// server/zone/managers/planet/PlanetManager.idl():  		return regionMap.containsRegion(name);
	return (&regionMap)->containsRegion(name);
}

void PlanetManagerImplementation::addPerformanceLocation(SceneObject* obj) {
	// server/zone/managers/planet/PlanetManager.idl():  		performanceLocations.add(obj);
	performanceLocations->add(obj);
}

MissionTargetMap* PlanetManagerImplementation::getPerformanceLocations() {
	// server/zone/managers/planet/PlanetManager.idl():  		return performanceLocations;
	return performanceLocations;
}

bool PlanetManagerImplementation::isExistingPlanetTravelPoint(const String& pointName) {
	// server/zone/managers/planet/PlanetManager.idl():  		return planetTravelPointList.contains(pointName);
	return planetTravelPointList->contains(pointName);
}

bool PlanetManagerImplementation::isInterplanetaryTravelAllowed(const String& pointName) {
	// server/zone/managers/planet/PlanetManager.idl():  		PlanetTravelPoint ptp = planetTravelPointList.get(pointName);
	PlanetTravelPoint* ptp = planetTravelPointList->get(pointName);
	// server/zone/managers/planet/PlanetManager.idl():  		return 
	if (ptp == NULL)	// server/zone/managers/planet/PlanetManager.idl():  			return false;
	return false;
	// server/zone/managers/planet/PlanetManager.idl():  		return ptp.isInterplanetary();
	return ptp->isInterplanetary();
}

PlanetTravelPoint* PlanetManagerImplementation::getPlanetTravelPoint(const String& pointName) {
	// server/zone/managers/planet/PlanetManager.idl():  		return planetTravelPointList.get(pointName);
	return planetTravelPointList->get(pointName);
}

void PlanetManagerImplementation::scheduleShuttle(CreatureObject* shuttle) {
	Reference<ShuttleDepartureTask*> _ref0;
	// server/zone/managers/planet/PlanetManager.idl():  		shuttle.setPosture(CreaturePosture.UPRIGHT);
	shuttle->setPosture(CreaturePosture::UPRIGHT);
	// server/zone/managers/planet/PlanetManager.idl():  		ShuttleDepartureTask task = new ShuttleDepartureTask(shuttle);
	ShuttleDepartureTask* task = _ref0 = new ShuttleDepartureTask(shuttle);
	// server/zone/managers/planet/PlanetManager.idl():  		task.schedule((ShuttleDepartureTask.LANDEDTIME + ShuttleDepartureTask.LANDINGTIME) * 1000);
	task->schedule((ShuttleDepartureTask::LANDEDTIME + ShuttleDepartureTask::LANDINGTIME) * 1000);
	// server/zone/managers/planet/PlanetManager.idl():  		shuttleMap.put(shuttle.getObjectID(), task);
	(&shuttleMap)->put(shuttle->getObjectID(), task);
}

/*
 *	PlanetManagerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PlanetManagerAdapter::PlanetManagerAdapter(PlanetManager* obj) : ManagedServiceAdapter(obj) {
}

void PlanetManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_INITIALIZE__:
		initialize();
		break;
	case RPC_LOADCLIENTREGIONS__:
		loadClientRegions();
		break;
	case RPC_LOADBADGEAREAS__:
		loadBadgeAreas();
		break;
	case RPC_LOADPERFORMANCELOCATIONS__:
		loadPerformanceLocations();
		break;
	case RPC_ISBUILDINGPERMITTEDAT__FLOAT_FLOAT_SCENEOBJECT_:
		resp->insertBoolean(isBuildingPermittedAt(inv->getFloatParameter(), inv->getFloatParameter(), static_cast<SceneObject*>(inv->getObjectParameter())));
		break;
	case RPC_GETTRAVELFARE__STRING_:
		resp->insertSignedInt(getTravelFare(inv->getAsciiParameter(_param0_getTravelFare__String_)));
		break;
	case RPC_SENDPLANETTRAVELPOINTLISTRESPONSE__CREATUREOBJECT_:
		sendPlanetTravelPointListResponse(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_CREATETICKET__STRING_STRING_STRING_:
		resp->insertLong(createTicket(inv->getAsciiParameter(_param0_createTicket__String_String_String_), inv->getAsciiParameter(_param1_createTicket__String_String_String_), inv->getAsciiParameter(_param2_createTicket__String_String_String_))->_getObjectID());
		break;
	case RPC_GETWEATHERMANAGER__:
		resp->insertLong(getWeatherManager()->_getObjectID());
		break;
	case RPC_GETREGIONCOUNT__:
		resp->insertSignedInt(getRegionCount());
		break;
	case RPC_GETNUMBEROFCITIES__:
		resp->insertSignedInt(getNumberOfCities());
		break;
	case RPC_INCREASENUMBEROFCITIES__:
		increaseNumberOfCities();
		break;
	case RPC_GETREGION__INT_:
		resp->insertLong(getRegion(inv->getSignedIntParameter())->_getObjectID());
		break;
	case RPC_GETREGION__STRING_:
		resp->insertLong(getRegion(inv->getAsciiParameter(_param0_getRegion__String_))->_getObjectID());
		break;
	case RPC_GETREGIONAT__FLOAT_FLOAT_:
		resp->insertLong(getRegionAt(inv->getFloatParameter(), inv->getFloatParameter())->_getObjectID());
		break;
	case RPC_ADDREGION__CITYREGION_:
		addRegion(static_cast<CityRegion*>(inv->getObjectParameter()));
		break;
	case RPC_DROPREGION__STRING_:
		dropRegion(inv->getAsciiParameter(_param0_dropRegion__String_));
		break;
	case RPC_HASREGION__STRING_:
		resp->insertBoolean(hasRegion(inv->getAsciiParameter(_param0_hasRegion__String_)));
		break;
	case RPC_ADDPERFORMANCELOCATION__SCENEOBJECT_:
		addPerformanceLocation(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_ISEXISTINGPLANETTRAVELPOINT__STRING_:
		resp->insertBoolean(isExistingPlanetTravelPoint(inv->getAsciiParameter(_param0_isExistingPlanetTravelPoint__String_)));
		break;
	case RPC_ISINTERPLANETARYTRAVELALLOWED__STRING_:
		resp->insertBoolean(isInterplanetaryTravelAllowed(inv->getAsciiParameter(_param0_isInterplanetaryTravelAllowed__String_)));
		break;
	case RPC_ISTRAVELTOLOCATIONPERMITTED__STRING_STRING_STRING_:
		resp->insertBoolean(isTravelToLocationPermitted(inv->getAsciiParameter(_param0_isTravelToLocationPermitted__String_String_String_), inv->getAsciiParameter(_param1_isTravelToLocationPermitted__String_String_String_), inv->getAsciiParameter(_param2_isTravelToLocationPermitted__String_String_String_)));
		break;
	case RPC_SCHEDULESHUTTLE__CREATUREOBJECT_:
		scheduleShuttle(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_CHECKSHUTTLESTATUS__CREATUREOBJECT_CREATUREOBJECT_:
		resp->insertBoolean(checkShuttleStatus(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter())));
		break;
	case RPC_ISINWATER__FLOAT_FLOAT_:
		resp->insertBoolean(isInWater(inv->getFloatParameter(), inv->getFloatParameter()));
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void PlanetManagerAdapter::initializeTransientMembers() {
	(static_cast<PlanetManager*>(stub))->initializeTransientMembers();
}

void PlanetManagerAdapter::finalize() {
	(static_cast<PlanetManager*>(stub))->finalize();
}

void PlanetManagerAdapter::initialize() {
	(static_cast<PlanetManager*>(stub))->initialize();
}

void PlanetManagerAdapter::loadClientRegions() {
	(static_cast<PlanetManager*>(stub))->loadClientRegions();
}

void PlanetManagerAdapter::loadBadgeAreas() {
	(static_cast<PlanetManager*>(stub))->loadBadgeAreas();
}

void PlanetManagerAdapter::loadPerformanceLocations() {
	(static_cast<PlanetManager*>(stub))->loadPerformanceLocations();
}

bool PlanetManagerAdapter::isBuildingPermittedAt(float x, float y, SceneObject* objectTryingToBuild) {
	return (static_cast<PlanetManager*>(stub))->isBuildingPermittedAt(x, y, objectTryingToBuild);
}

int PlanetManagerAdapter::getTravelFare(const String& destinationPlanet) {
	return (static_cast<PlanetManager*>(stub))->getTravelFare(destinationPlanet);
}

void PlanetManagerAdapter::sendPlanetTravelPointListResponse(CreatureObject* player) {
	(static_cast<PlanetManager*>(stub))->sendPlanetTravelPointListResponse(player);
}

SceneObject* PlanetManagerAdapter::createTicket(const String& departurePoint, const String& arrivalPlanet, const String& arrivalPoint) {
	return (static_cast<PlanetManager*>(stub))->createTicket(departurePoint, arrivalPlanet, arrivalPoint);
}

WeatherManager* PlanetManagerAdapter::getWeatherManager() {
	return (static_cast<PlanetManager*>(stub))->getWeatherManager();
}

int PlanetManagerAdapter::getRegionCount() {
	return (static_cast<PlanetManager*>(stub))->getRegionCount();
}

int PlanetManagerAdapter::getNumberOfCities() {
	return (static_cast<PlanetManager*>(stub))->getNumberOfCities();
}

void PlanetManagerAdapter::increaseNumberOfCities() {
	(static_cast<PlanetManager*>(stub))->increaseNumberOfCities();
}

CityRegion* PlanetManagerAdapter::getRegion(int index) {
	return (static_cast<PlanetManager*>(stub))->getRegion(index);
}

CityRegion* PlanetManagerAdapter::getRegion(const String& region) {
	return (static_cast<PlanetManager*>(stub))->getRegion(region);
}

CityRegion* PlanetManagerAdapter::getRegionAt(float x, float y) {
	return (static_cast<PlanetManager*>(stub))->getRegionAt(x, y);
}

void PlanetManagerAdapter::addRegion(CityRegion* region) {
	(static_cast<PlanetManager*>(stub))->addRegion(region);
}

void PlanetManagerAdapter::dropRegion(const String& region) {
	(static_cast<PlanetManager*>(stub))->dropRegion(region);
}

bool PlanetManagerAdapter::hasRegion(const String& name) {
	return (static_cast<PlanetManager*>(stub))->hasRegion(name);
}

void PlanetManagerAdapter::addPerformanceLocation(SceneObject* obj) {
	(static_cast<PlanetManager*>(stub))->addPerformanceLocation(obj);
}

bool PlanetManagerAdapter::isExistingPlanetTravelPoint(const String& pointName) {
	return (static_cast<PlanetManager*>(stub))->isExistingPlanetTravelPoint(pointName);
}

bool PlanetManagerAdapter::isInterplanetaryTravelAllowed(const String& pointName) {
	return (static_cast<PlanetManager*>(stub))->isInterplanetaryTravelAllowed(pointName);
}

bool PlanetManagerAdapter::isTravelToLocationPermitted(const String& destinationPoint, const String& arrivalPlanet, const String& arrivalPoint) {
	return (static_cast<PlanetManager*>(stub))->isTravelToLocationPermitted(destinationPoint, arrivalPlanet, arrivalPoint);
}

void PlanetManagerAdapter::scheduleShuttle(CreatureObject* shuttle) {
	(static_cast<PlanetManager*>(stub))->scheduleShuttle(shuttle);
}

bool PlanetManagerAdapter::checkShuttleStatus(CreatureObject* creature, CreatureObject* shuttle) {
	return (static_cast<PlanetManager*>(stub))->checkShuttleStatus(creature, shuttle);
}

bool PlanetManagerAdapter::isInWater(float x, float y) {
	return (static_cast<PlanetManager*>(stub))->isInWater(x, y);
}

/*
 *	PlanetManagerHelper
 */

PlanetManagerHelper* PlanetManagerHelper::staticInitializer = PlanetManagerHelper::instance();

PlanetManagerHelper::PlanetManagerHelper() {
	className = "PlanetManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void PlanetManagerHelper::finalizeHelper() {
	PlanetManagerHelper::finalize();
}

DistributedObject* PlanetManagerHelper::instantiateObject() {
	return new PlanetManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* PlanetManagerHelper::instantiateServant() {
	return new PlanetManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlanetManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlanetManagerAdapter(static_cast<PlanetManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

