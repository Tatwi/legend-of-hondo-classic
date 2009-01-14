/*
 *	server/zone/managers/planet/PlanetManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "PlanetManager.h"

#include "PlanetManagerImplementation.h"

#include "server/zone/Zone.h"

#include "../../objects/player/Player.h"

#include "../../objects/creature/shuttle/ShuttleCreature.h"

#include "../../objects/tangible/terminal/mission/MissionTerminal.h"

#include "../structure/StructureManager.h"

#include "../../objects/area/ActiveArea.h"

#include "../../objects/area/ActiveAreaTrigger.h"

/*
 *	PlanetManagerStub
 */

PlanetManager::PlanetManager(Zone* zone, ZoneProcessServerImplementation* processor) {
	_impl = new PlanetManagerImplementation(zone, processor);
	_impl->_setStub(this);
}

PlanetManager::PlanetManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

PlanetManager::~PlanetManager() {
}

void PlanetManager::init() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->init();
}

void PlanetManager::start() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->start();
}

void PlanetManager::stop() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->stop();
}

unsigned long long PlanetManager::getNextStaticObjectID(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addBooleanParameter(doLock);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getNextStaticObjectID(doLock);
}

StructureManager* PlanetManager::getStructureManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return (StructureManager*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getStructureManager();
}

void PlanetManager::landShuttles() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->landShuttles();
}

void PlanetManager::takeOffShuttles() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->takeOffShuttles();
}

unsigned long long PlanetManager::getLandingTime() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getLandingTime();
}

unsigned int PlanetManager::getTravelFare(String& departurePlanet, String& arrivalPlanet) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(departurePlanet);
		method.addAsciiParameter(arrivalPlanet);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getTravelFare(departurePlanet, arrivalPlanet);
}

ShuttleCreature* PlanetManager::getShuttle(const String& Shuttle) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(Shuttle);

		return (ShuttleCreature*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getShuttle(Shuttle);
}

void PlanetManager::sendPlanetTravelPointListResponse(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->sendPlanetTravelPointListResponse(player);
}

MissionTerminal* PlanetManager::getMissionTerminal(unsigned long long oid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addUnsignedLongParameter(oid);

		return (MissionTerminal*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getMissionTerminal(oid);
}

void PlanetManager::placePlayerStructure(Player* player, unsigned long long objectID, float x, float y, int orient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectID);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addSignedIntParameter(orient);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->placePlayerStructure(player, objectID, x, y, orient);
}

bool PlanetManager::isNoBuildArea(float x, float y) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithBooleanReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->isNoBuildArea(x, y);
}

void PlanetManager::addNoBuildArea(float x, float y, float radius) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addFloatParameter(radius);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->addNoBuildArea(x, y, radius);
}

void PlanetManager::weatherUpdatePlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->weatherUpdatePlayers();
}

void PlanetManager::weatherChange() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->weatherChange();
}

void PlanetManager::weatherRemoveEvents() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->weatherRemoveEvents();
}

ActiveAreaTrigger* PlanetManager::spawnActiveArea(ActiveArea* area) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(area);

		return (ActiveAreaTrigger*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->spawnActiveArea(area);
}

void PlanetManager::removeActiveAreaTrigger(ActiveAreaTrigger* trigger) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(trigger);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->removeActiveAreaTrigger(trigger);
}

/*
 *	PlanetManagerAdapter
 */

PlanetManagerAdapter::PlanetManagerAdapter(PlanetManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* PlanetManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		start();
		break;
	case 8:
		stop();
		break;
	case 9:
		resp->insertLong(getNextStaticObjectID(inv->getBooleanParameter()));
		break;
	case 10:
		resp->insertLong(getStructureManager()->_getObjectID());
		break;
	case 11:
		landShuttles();
		break;
	case 12:
		takeOffShuttles();
		break;
	case 13:
		resp->insertLong(getLandingTime());
		break;
	case 14:
		resp->insertInt(getTravelFare(inv->getAsciiParameter(_param0_getTravelFare__String_String_), inv->getAsciiParameter(_param1_getTravelFare__String_String_)));
		break;
	case 15:
		resp->insertLong(getShuttle(inv->getAsciiParameter(_param0_getShuttle__String_))->_getObjectID());
		break;
	case 16:
		sendPlanetTravelPointListResponse((Player*) inv->getObjectParameter());
		break;
	case 17:
		resp->insertLong(getMissionTerminal(inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 18:
		placePlayerStructure((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getSignedIntParameter());
		break;
	case 19:
		resp->insertBoolean(isNoBuildArea(inv->getFloatParameter(), inv->getFloatParameter()));
		break;
	case 20:
		addNoBuildArea(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 21:
		weatherUpdatePlayers();
		break;
	case 22:
		weatherChange();
		break;
	case 23:
		weatherRemoveEvents();
		break;
	case 24:
		resp->insertLong(spawnActiveArea((ActiveArea*) inv->getObjectParameter())->_getObjectID());
		break;
	case 25:
		removeActiveAreaTrigger((ActiveAreaTrigger*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlanetManagerAdapter::init() {
	return ((PlanetManagerImplementation*) impl)->init();
}

void PlanetManagerAdapter::start() {
	return ((PlanetManagerImplementation*) impl)->start();
}

void PlanetManagerAdapter::stop() {
	return ((PlanetManagerImplementation*) impl)->stop();
}

unsigned long long PlanetManagerAdapter::getNextStaticObjectID(bool doLock) {
	return ((PlanetManagerImplementation*) impl)->getNextStaticObjectID(doLock);
}

StructureManager* PlanetManagerAdapter::getStructureManager() {
	return ((PlanetManagerImplementation*) impl)->getStructureManager();
}

void PlanetManagerAdapter::landShuttles() {
	return ((PlanetManagerImplementation*) impl)->landShuttles();
}

void PlanetManagerAdapter::takeOffShuttles() {
	return ((PlanetManagerImplementation*) impl)->takeOffShuttles();
}

unsigned long long PlanetManagerAdapter::getLandingTime() {
	return ((PlanetManagerImplementation*) impl)->getLandingTime();
}

unsigned int PlanetManagerAdapter::getTravelFare(String& departurePlanet, String& arrivalPlanet) {
	return ((PlanetManagerImplementation*) impl)->getTravelFare(departurePlanet, arrivalPlanet);
}

ShuttleCreature* PlanetManagerAdapter::getShuttle(const String& Shuttle) {
	return ((PlanetManagerImplementation*) impl)->getShuttle(Shuttle);
}

void PlanetManagerAdapter::sendPlanetTravelPointListResponse(Player* player) {
	return ((PlanetManagerImplementation*) impl)->sendPlanetTravelPointListResponse(player);
}

MissionTerminal* PlanetManagerAdapter::getMissionTerminal(unsigned long long oid) {
	return ((PlanetManagerImplementation*) impl)->getMissionTerminal(oid);
}

void PlanetManagerAdapter::placePlayerStructure(Player* player, unsigned long long objectID, float x, float y, int orient) {
	return ((PlanetManagerImplementation*) impl)->placePlayerStructure(player, objectID, x, y, orient);
}

bool PlanetManagerAdapter::isNoBuildArea(float x, float y) {
	return ((PlanetManagerImplementation*) impl)->isNoBuildArea(x, y);
}

void PlanetManagerAdapter::addNoBuildArea(float x, float y, float radius) {
	return ((PlanetManagerImplementation*) impl)->addNoBuildArea(x, y, radius);
}

void PlanetManagerAdapter::weatherUpdatePlayers() {
	return ((PlanetManagerImplementation*) impl)->weatherUpdatePlayers();
}

void PlanetManagerAdapter::weatherChange() {
	return ((PlanetManagerImplementation*) impl)->weatherChange();
}

void PlanetManagerAdapter::weatherRemoveEvents() {
	return ((PlanetManagerImplementation*) impl)->weatherRemoveEvents();
}

ActiveAreaTrigger* PlanetManagerAdapter::spawnActiveArea(ActiveArea* area) {
	return ((PlanetManagerImplementation*) impl)->spawnActiveArea(area);
}

void PlanetManagerAdapter::removeActiveAreaTrigger(ActiveAreaTrigger* trigger) {
	return ((PlanetManagerImplementation*) impl)->removeActiveAreaTrigger(trigger);
}

/*
 *	PlanetManagerHelper
 */

PlanetManagerHelper* PlanetManagerHelper::staticInitializer = PlanetManagerHelper::instance();

PlanetManagerHelper::PlanetManagerHelper() {
	className = "PlanetManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PlanetManagerHelper::finalizeHelper() {
	PlanetManagerHelper::finalize();
}

DistributedObject* PlanetManagerHelper::instantiateObject() {
	return new PlanetManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlanetManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlanetManagerAdapter((PlanetManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	PlanetManagerServant
 */

PlanetManagerServant::PlanetManagerServant() {
	_classHelper = PlanetManagerHelper::instance();
}

PlanetManagerServant::~PlanetManagerServant() {
}

void PlanetManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (PlanetManager*) stub;
}

DistributedObjectStub* PlanetManagerServant::_getStub() {
	return _this;
}

