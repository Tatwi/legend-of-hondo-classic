/*
 *	server/zone/managers/planet/PlanetManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLANETMANAGER_H_
#define PLANETMANAGER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneProcessServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject;

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace region {

class CityRegion;

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

namespace server {
namespace zone {
namespace objects {
namespace scene {
namespace variables {

class StringId;

} // namespace variables
} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene::variables;

namespace server {
namespace zone {
namespace managers {
namespace weather {

class WeatherManager;

} // namespace weather
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::weather;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectController;

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#include "server/zone/objects/region/CityRegion.h"

#include "server/zone/managers/planet/RegionMap.h"

#include "server/zone/managers/terrain/TerrainManager.h"

#include "server/zone/managers/planet/NoBuildAreaMap.h"

#include "server/zone/managers/planet/MissionTargetMap.h"

#include "server/zone/managers/planet/HuntingTargetMap.h"

#include "server/zone/managers/planet/HuntingTargetEntry.h"

#include "server/zone/templates/snapshot/WorldSnapshotNode.h"

#include "server/zone/templates/snapshot/WorldSnapshotIff.h"

#include "server/zone/managers/planet/PlanetTravelPointList.h"

#include "server/zone/managers/planet/PlanetTravelPoint.h"

#include "engine/lua/LuaObject.h"

#include "engine/core/ManagedService.h"

#include "engine/log/Logger.h"

#include "system/thread/Thread.h"

#include "system/util/SortedVector.h"

#include "system/util/VectorMap.h"

#include "system/util/HashTable.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace managers {
namespace planet {

class PlanetManager : public ManagedService {
public:
	PlanetManager(Zone* planet, ZoneProcessServer* srv);

	void initializeTransientMembers();

	void initialize();

	void loadClientRegions();

	void loadPlayerRegions();

	void loadNoBuildAreas();

	void loadBadgeAreas();

	void loadPerformanceLocations();

	void loadHuntingTargets();

	void loadReconLocations();

	PlanetTravelPoint* getNearestPlanetTravelPoint(SceneObject* object, float range = 16000.0);

	bool isNoBuildArea(float x, float y, StringId& fullAreaName);

	int getTravelFare(const String& destinationPlanet);

	void sendPlanetTravelPointListResponse(PlayerCreature* player);

	Vector<ManagedReference<CityRegion* > > getRegions(StringId& regionName);

	WeatherManager* getWeatherManager();

	TerrainManager* getTerrainManager();

	CityRegion* getRegion(float x, float y);

	int getRegionCount();

	int getNumberOfCities();

	void increaseNumberOfCities();

	CityRegion* getRegion(int index);

	void addRegion(CityRegion* region);

	void dropRegion(const String& region);

	bool hasRegion(const String& name);

	void addPerformanceLocation(SceneObject* obj);

	MissionTargetMap* getPerformanceLocations();

	void addMissionNpc(SceneObject* npc);

	MissionTargetMap* getMissionNpcs();

	void addHuntingTargetTemplate(const String& temp1, const String& temp2, int level);

	HuntingTargetEntry* getHuntingTargetTemplate(int level);

	void addReconLoc(SceneObject* obj);

	MissionTargetMap* getReconLocs();

	void addInformant(SceneObject* obj);

	MissionTargetMap* getInformants();

	bool isExistingPlanetTravelPoint(const String& pointName);

	bool isInterplanetaryTravelAllowed(const String& pointName);

	PlanetTravelPoint* getPlanetTravelPoint(const String& pointName);

	bool isTravelToLocationPermitted(const String& destinationPoint, const String& arrivalPlanet, const String& arrivalPoint);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PlanetManager(DummyConstructorParameter* param);

	virtual ~PlanetManager();

	friend class PlanetManagerHelper;
};

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

namespace server {
namespace zone {
namespace managers {
namespace planet {

class PlanetManagerImplementation : public ManagedServiceImplementation, public Logger {
protected:
	ManagedWeakReference<Zone* > zone;

	Reference<RegionMap* > cityRegionMap;

	VectorMap<String, int> travelFares;

	Reference<PlanetTravelPointList* > planetTravelPointList;

	int shuttleLandingDelay;

	int shuttleTakeoffDelay;

	ManagedReference<WeatherManager* > weatherManager;

	int numberOfCities;

	ManagedReference<ZoneProcessServer* > server;

	Reference<TerrainManager* > terrainManager;

	Reference<NoBuildAreaMap* > noBuildAreaMap;

	Reference<MissionTargetMap* > missionNpcs;

	Reference<MissionTargetMap* > performanceLocations;

	Reference<HuntingTargetMap* > huntingTargets;

	Reference<MissionTargetMap* > reconLocs;

	Reference<MissionTargetMap* > informants;

public:
	PlanetManagerImplementation(Zone* planet, ZoneProcessServer* srv);

	PlanetManagerImplementation(DummyConstructorParameter* param);

private:
	SceneObject* loadSnapshotObject(WorldSnapshotNode* node, WorldSnapshotIff* wsiff, int& totalObjects);

	void loadSnapshotObjects();

	void loadTravelFares();

	void loadPlanetObjects(LuaObject* lua);

	void loadLuaConfig();

public:
	void initializeTransientMembers();

	void finalize();

	void initialize();

	void loadClientRegions();

	void loadPlayerRegions();

	void loadNoBuildAreas();

	void loadBadgeAreas();

	void loadPerformanceLocations();

	void loadHuntingTargets();

	void loadReconLocations();

protected:
	void loadStaticTangibleObjects();

public:
	PlanetTravelPoint* getNearestPlanetTravelPoint(SceneObject* object, float range = 16000.0);

	bool isNoBuildArea(float x, float y, StringId& fullAreaName);

	int getTravelFare(const String& destinationPlanet);

	void sendPlanetTravelPointListResponse(PlayerCreature* player);

	Vector<ManagedReference<CityRegion* > > getRegions(StringId& regionName);

	WeatherManager* getWeatherManager();

	TerrainManager* getTerrainManager();

	CityRegion* getRegion(float x, float y);

	int getRegionCount();

	int getNumberOfCities();

	void increaseNumberOfCities();

	CityRegion* getRegion(int index);

	void addRegion(CityRegion* region);

	void dropRegion(const String& region);

	bool hasRegion(const String& name);

	void addPerformanceLocation(SceneObject* obj);

	MissionTargetMap* getPerformanceLocations();

	void addMissionNpc(SceneObject* npc);

	MissionTargetMap* getMissionNpcs();

	void addHuntingTargetTemplate(const String& temp1, const String& temp2, int level);

	HuntingTargetEntry* getHuntingTargetTemplate(int level);

	void addReconLoc(SceneObject* obj);

	MissionTargetMap* getReconLocs();

	void addInformant(SceneObject* obj);

	MissionTargetMap* getInformants();

	bool isExistingPlanetTravelPoint(const String& pointName);

	bool isInterplanetaryTravelAllowed(const String& pointName);

	PlanetTravelPoint* getPlanetTravelPoint(const String& pointName);

	bool isTravelToLocationPermitted(const String& destinationPoint, const String& arrivalPlanet, const String& arrivalPoint);

	WeakReference<PlanetManager*> _this;

	operator const PlanetManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PlanetManagerImplementation();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class PlanetManager;
};

class PlanetManagerAdapter : public ManagedServiceAdapter {
public:
	PlanetManagerAdapter(PlanetManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void finalize();

	void initialize();

	void loadClientRegions();

	void loadPlayerRegions();

	void loadNoBuildAreas();

	void loadBadgeAreas();

	void loadPerformanceLocations();

	void loadHuntingTargets();

	void loadReconLocations();

	int getTravelFare(const String& destinationPlanet);

	void sendPlanetTravelPointListResponse(PlayerCreature* player);

	WeatherManager* getWeatherManager();

	CityRegion* getRegion(float x, float y);

	int getRegionCount();

	int getNumberOfCities();

	void increaseNumberOfCities();

	CityRegion* getRegion(int index);

	void addRegion(CityRegion* region);

	void dropRegion(const String& region);

	bool hasRegion(const String& name);

	void addPerformanceLocation(SceneObject* obj);

	void addMissionNpc(SceneObject* npc);

	void addHuntingTargetTemplate(const String& temp1, const String& temp2, int level);

	void addReconLoc(SceneObject* obj);

	void addInformant(SceneObject* obj);

	bool isExistingPlanetTravelPoint(const String& pointName);

	bool isInterplanetaryTravelAllowed(const String& pointName);

	bool isTravelToLocationPermitted(const String& destinationPoint, const String& arrivalPlanet, const String& arrivalPoint);

protected:
	String _param0_getTravelFare__String_;
	String _param0_dropRegion__String_;
	String _param0_hasRegion__String_;
	String _param0_addHuntingTargetTemplate__String_String_int_;
	String _param1_addHuntingTargetTemplate__String_String_int_;
	String _param0_isExistingPlanetTravelPoint__String_;
	String _param0_isInterplanetaryTravelAllowed__String_;
	String _param0_isTravelToLocationPermitted__String_String_String_;
	String _param1_isTravelToLocationPermitted__String_String_String_;
	String _param2_isTravelToLocationPermitted__String_String_String_;
};

class PlanetManagerHelper : public DistributedObjectClassHelper, public Singleton<PlanetManagerHelper> {
	static PlanetManagerHelper* staticInitializer;

public:
	PlanetManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlanetManagerHelper>;
};

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

#endif /*PLANETMANAGER_H_*/
