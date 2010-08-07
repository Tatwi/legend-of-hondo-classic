/*
 *	server/zone/ZoneServer.cpp generated by engine3 IDL compiler 0.60
 */

#include "ZoneServer.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/managers/player/PlayerManager.h"

#include "server/zone/Zone.h"

#include "server/chat/ChatManager.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

#include "server/zone/managers/radial/RadialManager.h"

#include "server/zone/managers/professions/ProfessionManager.h"

#include "server/zone/managers/resource/ResourceManager.h"

#include "server/zone/managers/crafting/CraftingManager.h"

#include "server/zone/managers/bazaar/BazaarManager.h"

#include "server/zone/managers/minigames/FishingManager.h"

#include "server/zone/managers/mission/MissionManager.h"

/*
 *	ZoneServerStub
 */

ZoneServer::ZoneServer(int processingThreads, int galaxyid) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ZoneServerImplementation(processingThreads, galaxyid);
	_impl->_setStub(this);
}

ZoneServer::ZoneServer(DummyConstructorParameter* param) : ManagedObject(param) {
}

ZoneServer::~ZoneServer() {
}


void ZoneServer::test() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->test();
}

void ZoneServer::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->initializeTransientMembers();
}

ServiceClient* ZoneServer::createConnection(Socket* sock, SocketAddress& addr) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((ZoneServerImplementation*) _impl)->createConnection(sock, addr);
}

void ZoneServer::init() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->init();
}

void ZoneServer::run() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->run();
}

void ZoneServer::shutdown() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->shutdown();
}

void ZoneServer::startManagers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->startManagers();
}

void ZoneServer::startZones() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->startZones();
}

void ZoneServer::stopManagers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->stopManagers();
}

void ZoneServer::start(int p, int mconn) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addSignedIntParameter(p);
		method.addSignedIntParameter(mconn);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->start(p, mconn);
}

void ZoneServer::stop() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->stop();
}

void ZoneServer::handleMessage(ServiceClient* client, Packet* message) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ZoneServerImplementation*) _impl)->handleMessage(client, message);
}

bool ZoneServer::handleError(ServiceClient* client, Exception& e) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((ZoneServerImplementation*) _impl)->handleError(client, e);
}

void ZoneServer::addTotalSentPacket(int count) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(count);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->addTotalSentPacket(count);
}

void ZoneServer::addTotalResentPacket(int count) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(count);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->addTotalResentPacket(count);
}

void ZoneServer::printInfo(bool forcedLog) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addBooleanParameter(forcedLog);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->printInfo(forcedLog);
}

void ZoneServer::printEvents() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->printEvents();
}

SceneObject* ZoneServer::getObject(unsigned long long objectID, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addUnsignedLongParameter(objectID);
		method.addBooleanParameter(doLock);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getObject(objectID, doLock);
}

SceneObject* ZoneServer::createObject(unsigned int templateCRC, int persistenceLevel, unsigned long long objectID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addUnsignedIntParameter(templateCRC);
		method.addSignedIntParameter(persistenceLevel);
		method.addUnsignedLongParameter(objectID);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->createObject(templateCRC, persistenceLevel, objectID);
}

SceneObject* ZoneServer::createStaticObject(unsigned int templateCRC, unsigned long long objectID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addUnsignedIntParameter(templateCRC);
		method.addUnsignedLongParameter(objectID);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->createStaticObject(templateCRC, objectID);
}

void ZoneServer::updateObjectToDatabase(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->updateObjectToDatabase(object);
}

void ZoneServer::updateObjectToStaticDatabase(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->updateObjectToStaticDatabase(object);
}

void ZoneServer::destroyObjectFromDatabase(unsigned long long objectID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->destroyObjectFromDatabase(objectID);
}

void ZoneServer::lock(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->lock(doLock);
}

void ZoneServer::unlock(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->unlock(doLock);
}

void ZoneServer::fixScheduler() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->fixScheduler();
}

void ZoneServer::changeUserCap(int amount) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addSignedIntParameter(amount);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->changeUserCap(amount);
}

int ZoneServer::getConnectionCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getConnectionCount();
}

void ZoneServer::increaseOnlinePlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->increaseOnlinePlayers();
}

void ZoneServer::decreaseOnlinePlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->decreaseOnlinePlayers();
}

void ZoneServer::increaseTotalDeletedPlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->increaseTotalDeletedPlayers();
}

int ZoneServer::getGalaxyID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getGalaxyID();
}

String ZoneServer::getServerName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		method.executeWithAsciiReturn(_return_getServerName);
		return _return_getServerName;
	} else
		return ((ZoneServerImplementation*) _impl)->getServerName();
}

bool ZoneServer::isServerLocked() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->isServerLocked();
}

bool ZoneServer::isServerOnline() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->isServerOnline();
}

bool ZoneServer::isServerOffline() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->isServerOffline();
}

bool ZoneServer::isServerLoading() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->isServerLoading();
}

int ZoneServer::getServerState() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getServerState();
}

Zone* ZoneServer::getZone(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);
		method.addSignedIntParameter(index);

		return (Zone*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getZone(index);
}

int ZoneServer::getMaxPlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getMaxPlayers();
}

int ZoneServer::getTotalPlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getTotalPlayers();
}

int ZoneServer::getDeletedPlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getDeletedPlayers();
}

PlayerManager* ZoneServer::getPlayerManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		return (PlayerManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getPlayerManager();
}

ChatManager* ZoneServer::getChatManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return (ChatManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getChatManager();
}

ObjectController* ZoneServer::getObjectController() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return (ObjectController*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getObjectController();
}

MissionManager* ZoneServer::getMissionManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		return (MissionManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getMissionManager();
}

RadialManager* ZoneServer::getRadialManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);

		return (RadialManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getRadialManager();
}

ResourceManager* ZoneServer::getResourceManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);

		return (ResourceManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getResourceManager();
}

CraftingManager* ZoneServer::getCraftingManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);

		return (CraftingManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getCraftingManager();
}

BazaarManager* ZoneServer::getBazaarManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);

		return (BazaarManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getBazaarManager();
}

FishingManager* ZoneServer::getFishingManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 53);

		return (FishingManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getFishingManager();
}

ProfessionManager* ZoneServer::getProfessionManager() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((ZoneServerImplementation*) _impl)->getProfessionManager();
}

void ZoneServer::setServerName(const String& servername) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 54);
		method.addAsciiParameter(servername);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->setServerName(servername);
}

void ZoneServer::setGalaxyID(int galaxyid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 55);
		method.addSignedIntParameter(galaxyid);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->setGalaxyID(galaxyid);
}

void ZoneServer::setServerState(int state) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 56);
		method.addSignedIntParameter(state);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->setServerState(state);
}

void ZoneServer::setServerStateLocked() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 57);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->setServerStateLocked();
}

void ZoneServer::setServerStateOnline() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 58);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->setServerStateOnline();
}

void ZoneServer::loadMessageoftheDay() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 59);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->loadMessageoftheDay();
}

void ZoneServer::changeMessageoftheDay(const String& newMOTD) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 60);
		method.addAsciiParameter(newMOTD);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->changeMessageoftheDay(newMOTD);
}

String ZoneServer::getMessageoftheDay() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 61);

		method.executeWithAsciiReturn(_return_getMessageoftheDay);
		return _return_getMessageoftheDay;
	} else
		return ((ZoneServerImplementation*) _impl)->getMessageoftheDay();
}

/*
 *	ZoneServerImplementation
 */

ZoneServerImplementation::ZoneServerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

ZoneServerImplementation::~ZoneServerImplementation() {
}


void ZoneServerImplementation::finalize() {
}

void ZoneServerImplementation::_initializeImplementation() {
	_setClassHelper(ZoneServerHelper::instance());

	_serializationHelperMethod();
}

void ZoneServerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ZoneServer*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ZoneServerImplementation::_getStub() {
	return _this;
}

ZoneServerImplementation::operator const ZoneServer*() {
	return _this;
}

void ZoneServerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("ZoneServer");

	addSerializableVariable("procThreadCount", &procThreadCount);
	addSerializableVariable("zones", &zones);
	addSerializableVariable("playerManager", &playerManager);
	addSerializableVariable("chatManager", &chatManager);
	addSerializableVariable("radialManager", &radialManager);
	addSerializableVariable("resourceManager", &resourceManager);
	addSerializableVariable("craftingManager", &craftingManager);
	addSerializableVariable("bazaarManager", &bazaarManager);
	addSerializableVariable("missionManager", &missionManager);
	addSerializableVariable("fishingManager", &fishingManager);
	addSerializableVariable("totalSentPackets", &totalSentPackets);
	addSerializableVariable("totalResentPackets", &totalResentPackets);
	addSerializableVariable("currentPlayers", &currentPlayers);
	addSerializableVariable("maximumPlayers", &maximumPlayers);
	addSerializableVariable("totalPlayers", &totalPlayers);
	addSerializableVariable("totalDeletedPlayers", &totalDeletedPlayers);
	addSerializableVariable("serverState", &serverState);
	addSerializableVariable("name", &name);
	addSerializableVariable("messageoftheDay", &messageoftheDay);
	addSerializableVariable("galaxyID", &galaxyID);
}

void ZoneServerImplementation::test() {
	ManagedReference<Zone*> _ref0;
	// server/zone/ZoneServer.idl(120):  		Zone zone = new Zone(null, null, 0);
	Zone* zone = _ref0 = new Zone(NULL, NULL, 0);
	// server/zone/ZoneServer.idl(121):  		zone.getHeight(0, 1);
	zone->getHeight(0, 1);
}

void ZoneServerImplementation::fixScheduler() {
}

int ZoneServerImplementation::getGalaxyID() {
	// server/zone/ZoneServer.idl(220):  		return galaxyID;
	return galaxyID;
}

bool ZoneServerImplementation::isServerLocked() {
	// server/zone/ZoneServer.idl(226):  		return serverState == LOCKED;
	return serverState == LOCKED;
}

bool ZoneServerImplementation::isServerOnline() {
	// server/zone/ZoneServer.idl(230):  		return serverState == ONLINE;
	return serverState == ONLINE;
}

bool ZoneServerImplementation::isServerOffline() {
	// server/zone/ZoneServer.idl(234):  		return serverState == OFFLINE;
	return serverState == OFFLINE;
}

bool ZoneServerImplementation::isServerLoading() {
	// server/zone/ZoneServer.idl(238):  		return serverState == LOADING;
	return serverState == LOADING;
}

int ZoneServerImplementation::getServerState() {
	// server/zone/ZoneServer.idl(242):  		return serverState;
	return serverState;
}

Zone* ZoneServerImplementation::getZone(int index) {
	Locker _locker(_this);
	// server/zone/ZoneServer.idl(246):  		return zones.get(index);
	return (&zones)->get(index);
}

int ZoneServerImplementation::getMaxPlayers() {
	// server/zone/ZoneServer.idl(250):  		return maximumPlayers;
	return maximumPlayers;
}

int ZoneServerImplementation::getTotalPlayers() {
	// server/zone/ZoneServer.idl(254):  		return totalPlayers;
	return totalPlayers;
}

int ZoneServerImplementation::getDeletedPlayers() {
	// server/zone/ZoneServer.idl(258):  		return totalDeletedPlayers;
	return totalDeletedPlayers;
}

PlayerManager* ZoneServerImplementation::getPlayerManager() {
	// server/zone/ZoneServer.idl(262):  		return playerManager;
	return playerManager;
}

ChatManager* ZoneServerImplementation::getChatManager() {
	// server/zone/ZoneServer.idl(266):  		return chatManager;
	return chatManager;
}

ObjectController* ZoneServerImplementation::getObjectController() {
	// server/zone/ZoneServer.idl(270):  		return processor.getObjectController();
	return processor->getObjectController();
}

MissionManager* ZoneServerImplementation::getMissionManager() {
	// server/zone/ZoneServer.idl(274):  		return missionManager;
	return missionManager;
}

RadialManager* ZoneServerImplementation::getRadialManager() {
	// server/zone/ZoneServer.idl(278):  		return radialManager;
	return radialManager;
}

ResourceManager* ZoneServerImplementation::getResourceManager() {
	// server/zone/ZoneServer.idl(282):  		return resourceManager;
	return resourceManager;
}

CraftingManager* ZoneServerImplementation::getCraftingManager() {
	// server/zone/ZoneServer.idl(286):  		return craftingManager;
	return craftingManager;
}

BazaarManager* ZoneServerImplementation::getBazaarManager() {
	// server/zone/ZoneServer.idl(290):  		return bazaarManager;
	return bazaarManager;
}

FishingManager* ZoneServerImplementation::getFishingManager() {
	// server/zone/ZoneServer.idl(294):  		return fishingManager;
	return fishingManager;
}

ProfessionManager* ZoneServerImplementation::getProfessionManager() {
	// server/zone/ZoneServer.idl(299):  		return processor.getProfessionManager();
	return processor->getProfessionManager();
}

void ZoneServerImplementation::setGalaxyID(int galaxyid) {
	Locker _locker(_this);
	// server/zone/ZoneServer.idl(309):  		galaxyID = galaxyid;
	galaxyID = galaxyid;
}

void ZoneServerImplementation::setServerState(int state) {
	Locker _locker(_this);
	// server/zone/ZoneServer.idl(313):  		serverState = state;
	serverState = state;
}

/*
 *	ZoneServerAdapter
 */

ZoneServerAdapter::ZoneServerAdapter(ZoneServerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ZoneServerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		test();
		break;
	case 7:
		initializeTransientMembers();
		break;
	case 8:
		init();
		break;
	case 9:
		run();
		break;
	case 10:
		shutdown();
		break;
	case 11:
		startManagers();
		break;
	case 12:
		startZones();
		break;
	case 13:
		stopManagers();
		break;
	case 14:
		start(inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 15:
		stop();
		break;
	case 16:
		addTotalSentPacket(inv->getSignedIntParameter());
		break;
	case 17:
		addTotalResentPacket(inv->getSignedIntParameter());
		break;
	case 18:
		printInfo(inv->getBooleanParameter());
		break;
	case 19:
		printEvents();
		break;
	case 20:
		resp->insertLong(getObject(inv->getUnsignedLongParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 21:
		resp->insertLong(createObject(inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 22:
		resp->insertLong(createStaticObject(inv->getUnsignedIntParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 23:
		updateObjectToDatabase((SceneObject*) inv->getObjectParameter());
		break;
	case 24:
		updateObjectToStaticDatabase((SceneObject*) inv->getObjectParameter());
		break;
	case 25:
		destroyObjectFromDatabase(inv->getUnsignedLongParameter());
		break;
	case 26:
		lock(inv->getBooleanParameter());
		break;
	case 27:
		unlock(inv->getBooleanParameter());
		break;
	case 28:
		fixScheduler();
		break;
	case 29:
		changeUserCap(inv->getSignedIntParameter());
		break;
	case 30:
		resp->insertSignedInt(getConnectionCount());
		break;
	case 31:
		increaseOnlinePlayers();
		break;
	case 32:
		decreaseOnlinePlayers();
		break;
	case 33:
		increaseTotalDeletedPlayers();
		break;
	case 34:
		resp->insertSignedInt(getGalaxyID());
		break;
	case 35:
		resp->insertAscii(getServerName());
		break;
	case 36:
		resp->insertBoolean(isServerLocked());
		break;
	case 37:
		resp->insertBoolean(isServerOnline());
		break;
	case 38:
		resp->insertBoolean(isServerOffline());
		break;
	case 39:
		resp->insertBoolean(isServerLoading());
		break;
	case 40:
		resp->insertSignedInt(getServerState());
		break;
	case 41:
		resp->insertLong(getZone(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 42:
		resp->insertSignedInt(getMaxPlayers());
		break;
	case 43:
		resp->insertSignedInt(getTotalPlayers());
		break;
	case 44:
		resp->insertSignedInt(getDeletedPlayers());
		break;
	case 45:
		resp->insertLong(getPlayerManager()->_getObjectID());
		break;
	case 46:
		resp->insertLong(getChatManager()->_getObjectID());
		break;
	case 47:
		resp->insertLong(getObjectController()->_getObjectID());
		break;
	case 48:
		resp->insertLong(getMissionManager()->_getObjectID());
		break;
	case 49:
		resp->insertLong(getRadialManager()->_getObjectID());
		break;
	case 50:
		resp->insertLong(getResourceManager()->_getObjectID());
		break;
	case 51:
		resp->insertLong(getCraftingManager()->_getObjectID());
		break;
	case 52:
		resp->insertLong(getBazaarManager()->_getObjectID());
		break;
	case 53:
		resp->insertLong(getFishingManager()->_getObjectID());
		break;
	case 54:
		setServerName(inv->getAsciiParameter(_param0_setServerName__String_));
		break;
	case 55:
		setGalaxyID(inv->getSignedIntParameter());
		break;
	case 56:
		setServerState(inv->getSignedIntParameter());
		break;
	case 57:
		setServerStateLocked();
		break;
	case 58:
		setServerStateOnline();
		break;
	case 59:
		loadMessageoftheDay();
		break;
	case 60:
		changeMessageoftheDay(inv->getAsciiParameter(_param0_changeMessageoftheDay__String_));
		break;
	case 61:
		resp->insertAscii(getMessageoftheDay());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneServerAdapter::test() {
	((ZoneServerImplementation*) impl)->test();
}

void ZoneServerAdapter::initializeTransientMembers() {
	((ZoneServerImplementation*) impl)->initializeTransientMembers();
}

void ZoneServerAdapter::init() {
	((ZoneServerImplementation*) impl)->init();
}

void ZoneServerAdapter::run() {
	((ZoneServerImplementation*) impl)->run();
}

void ZoneServerAdapter::shutdown() {
	((ZoneServerImplementation*) impl)->shutdown();
}

void ZoneServerAdapter::startManagers() {
	((ZoneServerImplementation*) impl)->startManagers();
}

void ZoneServerAdapter::startZones() {
	((ZoneServerImplementation*) impl)->startZones();
}

void ZoneServerAdapter::stopManagers() {
	((ZoneServerImplementation*) impl)->stopManagers();
}

void ZoneServerAdapter::start(int p, int mconn) {
	((ZoneServerImplementation*) impl)->start(p, mconn);
}

void ZoneServerAdapter::stop() {
	((ZoneServerImplementation*) impl)->stop();
}

void ZoneServerAdapter::addTotalSentPacket(int count) {
	((ZoneServerImplementation*) impl)->addTotalSentPacket(count);
}

void ZoneServerAdapter::addTotalResentPacket(int count) {
	((ZoneServerImplementation*) impl)->addTotalResentPacket(count);
}

void ZoneServerAdapter::printInfo(bool forcedLog) {
	((ZoneServerImplementation*) impl)->printInfo(forcedLog);
}

void ZoneServerAdapter::printEvents() {
	((ZoneServerImplementation*) impl)->printEvents();
}

SceneObject* ZoneServerAdapter::getObject(unsigned long long objectID, bool doLock) {
	return ((ZoneServerImplementation*) impl)->getObject(objectID, doLock);
}

SceneObject* ZoneServerAdapter::createObject(unsigned int templateCRC, int persistenceLevel, unsigned long long objectID) {
	return ((ZoneServerImplementation*) impl)->createObject(templateCRC, persistenceLevel, objectID);
}

SceneObject* ZoneServerAdapter::createStaticObject(unsigned int templateCRC, unsigned long long objectID) {
	return ((ZoneServerImplementation*) impl)->createStaticObject(templateCRC, objectID);
}

void ZoneServerAdapter::updateObjectToDatabase(SceneObject* object) {
	((ZoneServerImplementation*) impl)->updateObjectToDatabase(object);
}

void ZoneServerAdapter::updateObjectToStaticDatabase(SceneObject* object) {
	((ZoneServerImplementation*) impl)->updateObjectToStaticDatabase(object);
}

void ZoneServerAdapter::destroyObjectFromDatabase(unsigned long long objectID) {
	((ZoneServerImplementation*) impl)->destroyObjectFromDatabase(objectID);
}

void ZoneServerAdapter::lock(bool doLock) {
	((ZoneServerImplementation*) impl)->lock(doLock);
}

void ZoneServerAdapter::unlock(bool doLock) {
	((ZoneServerImplementation*) impl)->unlock(doLock);
}

void ZoneServerAdapter::fixScheduler() {
	((ZoneServerImplementation*) impl)->fixScheduler();
}

void ZoneServerAdapter::changeUserCap(int amount) {
	((ZoneServerImplementation*) impl)->changeUserCap(amount);
}

int ZoneServerAdapter::getConnectionCount() {
	return ((ZoneServerImplementation*) impl)->getConnectionCount();
}

void ZoneServerAdapter::increaseOnlinePlayers() {
	((ZoneServerImplementation*) impl)->increaseOnlinePlayers();
}

void ZoneServerAdapter::decreaseOnlinePlayers() {
	((ZoneServerImplementation*) impl)->decreaseOnlinePlayers();
}

void ZoneServerAdapter::increaseTotalDeletedPlayers() {
	((ZoneServerImplementation*) impl)->increaseTotalDeletedPlayers();
}

int ZoneServerAdapter::getGalaxyID() {
	return ((ZoneServerImplementation*) impl)->getGalaxyID();
}

String ZoneServerAdapter::getServerName() {
	return ((ZoneServerImplementation*) impl)->getServerName();
}

bool ZoneServerAdapter::isServerLocked() {
	return ((ZoneServerImplementation*) impl)->isServerLocked();
}

bool ZoneServerAdapter::isServerOnline() {
	return ((ZoneServerImplementation*) impl)->isServerOnline();
}

bool ZoneServerAdapter::isServerOffline() {
	return ((ZoneServerImplementation*) impl)->isServerOffline();
}

bool ZoneServerAdapter::isServerLoading() {
	return ((ZoneServerImplementation*) impl)->isServerLoading();
}

int ZoneServerAdapter::getServerState() {
	return ((ZoneServerImplementation*) impl)->getServerState();
}

Zone* ZoneServerAdapter::getZone(int index) {
	return ((ZoneServerImplementation*) impl)->getZone(index);
}

int ZoneServerAdapter::getMaxPlayers() {
	return ((ZoneServerImplementation*) impl)->getMaxPlayers();
}

int ZoneServerAdapter::getTotalPlayers() {
	return ((ZoneServerImplementation*) impl)->getTotalPlayers();
}

int ZoneServerAdapter::getDeletedPlayers() {
	return ((ZoneServerImplementation*) impl)->getDeletedPlayers();
}

PlayerManager* ZoneServerAdapter::getPlayerManager() {
	return ((ZoneServerImplementation*) impl)->getPlayerManager();
}

ChatManager* ZoneServerAdapter::getChatManager() {
	return ((ZoneServerImplementation*) impl)->getChatManager();
}

ObjectController* ZoneServerAdapter::getObjectController() {
	return ((ZoneServerImplementation*) impl)->getObjectController();
}

MissionManager* ZoneServerAdapter::getMissionManager() {
	return ((ZoneServerImplementation*) impl)->getMissionManager();
}

RadialManager* ZoneServerAdapter::getRadialManager() {
	return ((ZoneServerImplementation*) impl)->getRadialManager();
}

ResourceManager* ZoneServerAdapter::getResourceManager() {
	return ((ZoneServerImplementation*) impl)->getResourceManager();
}

CraftingManager* ZoneServerAdapter::getCraftingManager() {
	return ((ZoneServerImplementation*) impl)->getCraftingManager();
}

BazaarManager* ZoneServerAdapter::getBazaarManager() {
	return ((ZoneServerImplementation*) impl)->getBazaarManager();
}

FishingManager* ZoneServerAdapter::getFishingManager() {
	return ((ZoneServerImplementation*) impl)->getFishingManager();
}

void ZoneServerAdapter::setServerName(const String& servername) {
	((ZoneServerImplementation*) impl)->setServerName(servername);
}

void ZoneServerAdapter::setGalaxyID(int galaxyid) {
	((ZoneServerImplementation*) impl)->setGalaxyID(galaxyid);
}

void ZoneServerAdapter::setServerState(int state) {
	((ZoneServerImplementation*) impl)->setServerState(state);
}

void ZoneServerAdapter::setServerStateLocked() {
	((ZoneServerImplementation*) impl)->setServerStateLocked();
}

void ZoneServerAdapter::setServerStateOnline() {
	((ZoneServerImplementation*) impl)->setServerStateOnline();
}

void ZoneServerAdapter::loadMessageoftheDay() {
	((ZoneServerImplementation*) impl)->loadMessageoftheDay();
}

void ZoneServerAdapter::changeMessageoftheDay(const String& newMOTD) {
	((ZoneServerImplementation*) impl)->changeMessageoftheDay(newMOTD);
}

String ZoneServerAdapter::getMessageoftheDay() {
	return ((ZoneServerImplementation*) impl)->getMessageoftheDay();
}

/*
 *	ZoneServerHelper
 */

ZoneServerHelper* ZoneServerHelper::staticInitializer = ZoneServerHelper::instance();

ZoneServerHelper::ZoneServerHelper() {
	className = "ZoneServer";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ZoneServerHelper::finalizeHelper() {
	ZoneServerHelper::finalize();
}

DistributedObject* ZoneServerHelper::instantiateObject() {
	return new ZoneServer(DummyConstructorParameter::instance());
}

DistributedObjectServant* ZoneServerHelper::instantiateServant() {
	return new ZoneServerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneServerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneServerAdapter((ZoneServerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

