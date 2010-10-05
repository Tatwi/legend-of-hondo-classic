/*
 *	server/zone/managers/loot/lootgroup/LootGroupObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef LOOTGROUPOBJECT_H_
#define LOOTGROUPOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class ZoneServer;

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
namespace managers {
namespace loot {
namespace lootgroup {

class LootObject;

} // namespace lootgroup
} // namespace loot
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::loot::lootgroup;

#include "engine/core/ManagedObject.h"

#include "engine/log/Logger.h"

#include "engine/lua/Lua.h"

#include "system/util/VectorMap.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace managers {
namespace loot {
namespace lootgroup {

class LootGroupObject : public ManagedObject {
public:
	LootGroupObject(unsigned int group, int w, int max);

	bool contains(unsigned int objIndex);

	LootObject* get(unsigned int lootObjectID);

	void put(unsigned int index, LootObject* obj);

	LootObject* selectLoot();

	int size();

	int getMaxDrop();

	int getWeight();

	unsigned int getLootGroup();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	LootGroupObject(DummyConstructorParameter* param);

	virtual ~LootGroupObject();

	friend class LootGroupObjectHelper;
};

} // namespace lootgroup
} // namespace loot
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::loot::lootgroup;

namespace server {
namespace zone {
namespace managers {
namespace loot {
namespace lootgroup {

class LootGroupObjectImplementation : public ManagedObjectImplementation, public Logger {
protected:
	VectorMap<unsigned int, ManagedReference<LootObject* > > lootObjects;

private:
	ManagedReference<ZoneServer* > zoneServer;

protected:
	unsigned int lootGroup;

	int weight;

	int maxDrop;

	int maxChance;

public:
	LootGroupObjectImplementation(unsigned int group, int w, int max);

	LootGroupObjectImplementation(DummyConstructorParameter* param);

	bool contains(unsigned int objIndex);

	LootObject* get(unsigned int lootObjectID);

	void put(unsigned int index, LootObject* obj);

	LootObject* selectLoot();

	int size();

	int getMaxDrop();

	int getWeight();

	unsigned int getLootGroup();

	LootGroupObject* _this;

	operator const LootGroupObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~LootGroupObjectImplementation();

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

	friend class LootGroupObject;
};

class LootGroupObjectAdapter : public ManagedObjectAdapter {
public:
	LootGroupObjectAdapter(LootGroupObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool contains(unsigned int objIndex);

	LootObject* get(unsigned int lootObjectID);

	void put(unsigned int index, LootObject* obj);

	int size();

	int getMaxDrop();

	int getWeight();

	unsigned int getLootGroup();

};

class LootGroupObjectHelper : public DistributedObjectClassHelper, public Singleton<LootGroupObjectHelper> {
	static LootGroupObjectHelper* staticInitializer;

public:
	LootGroupObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<LootGroupObjectHelper>;
};

} // namespace lootgroup
} // namespace loot
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::loot::lootgroup;

#endif /*LOOTGROUPOBJECT_H_*/
