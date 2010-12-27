/*
 *	server/zone/objects/area/DynamicSpawnArea.h generated by engine3 IDL compiler 0.60
 */

#ifndef DYNAMICSPAWNAREA_H_
#define DYNAMICSPAWNAREA_H_

#include "engine/orb/DistributedObjectBroker.h"

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
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace managers {
namespace object {

class ObjectManager;

} // namespace object
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::object;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace aigroup {

class AiGroup;

} // namespace aigroup
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::aigroup;

namespace server {
namespace zone {
namespace objects {
namespace area {

class SpawnObserver;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace area {

class SpawnDynamicAreaCreatureTask;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#include "server/zone/objects/area/SpawnArea.h"

#include "system/util/SortedVector.h"

#include "system/util/Vector.h"

#include "system/util/VectorMap.h"

#include "engine/util/Vector3.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace area {

class DynamicSpawnArea : public SpawnArea {
public:
	DynamicSpawnArea();

	void registerObservers();

	void spawnCreature(unsigned int templateCRC, PlayerObject* player);

	Vector3 getRandomPosition(PlayerObject* player);

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	SpawnDynamicAreaCreatureTask* addSpawnTask(PlayerObject* player);

	void doSpawnEvent(PlayerObject* player);

	void doDespawnEvent();

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setMaxCreaturesToSpawn(int num);

	void addNoSpawnArea(SpawnArea* area);

	bool isDynamicArea();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DynamicSpawnArea(DummyConstructorParameter* param);

	virtual ~DynamicSpawnArea();

	friend class DynamicSpawnAreaHelper;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace area {

class DynamicSpawnAreaImplementation : public SpawnAreaImplementation {
protected:
	SortedVector<ManagedReference<AiGroup* > > spawnedGroups;

	Vector<ManagedReference<SpawnArea* > > noSpawnAreas;

	VectorMap<ManagedReference<PlayerObject* >, SpawnDynamicAreaCreatureTask*> playerOccupants;

	VectorMap<ManagedReference<PlayerObject* >, ManagedReference<DynamicSpawnArea* > > excludedPlayerOccupants;

	SortedVector<ManagedReference<SpawnObserver* > > observers;

	Time lastSpawnTime;

	int maxCreaturesToSpawn;

public:
	DynamicSpawnAreaImplementation();

	DynamicSpawnAreaImplementation(DummyConstructorParameter* param);

	void registerObservers();

	void spawnCreature(unsigned int templateCRC, PlayerObject* player);

	Vector3 getRandomPosition(PlayerObject* player);

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	SpawnDynamicAreaCreatureTask* addSpawnTask(PlayerObject* player);

	void doSpawnEvent(PlayerObject* player);

	void doDespawnEvent();

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setMaxCreaturesToSpawn(int num);

	void addNoSpawnArea(SpawnArea* area);

	virtual bool isDynamicArea();

	DynamicSpawnArea* _this;

	operator const DynamicSpawnArea*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DynamicSpawnAreaImplementation();

	void finalize();

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

	friend class DynamicSpawnArea;
};

class DynamicSpawnAreaAdapter : public SpawnAreaAdapter {
public:
	DynamicSpawnAreaAdapter(DynamicSpawnAreaImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void registerObservers();

	void spawnCreature(unsigned int templateCRC, PlayerObject* player);

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	void doSpawnEvent(PlayerObject* player);

	void doDespawnEvent();

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setMaxCreaturesToSpawn(int num);

	void addNoSpawnArea(SpawnArea* area);

	bool isDynamicArea();

};

class DynamicSpawnAreaHelper : public DistributedObjectClassHelper, public Singleton<DynamicSpawnAreaHelper> {
	static DynamicSpawnAreaHelper* staticInitializer;

public:
	DynamicSpawnAreaHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DynamicSpawnAreaHelper>;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#endif /*DYNAMICSPAWNAREA_H_*/
