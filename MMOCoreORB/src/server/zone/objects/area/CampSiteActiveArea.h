/*
 *	server/zone/objects/area/CampSiteActiveArea.h generated by engine3 IDL compiler 0.60
 */

#ifndef CAMPSITEACTIVEAREA_H_
#define CAMPSITEACTIVEAREA_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace area {
namespace events {

class CampDespawnEvent;

} // namespace events
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::events;

#include "server/zone/objects/area/CampVisitorList.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace objects {
namespace area {

class CampSiteActiveArea : public ActiveArea {
public:
	CampSiteActiveArea();

	void notifyEnter(SceneObject* player);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CampSiteActiveArea(DummyConstructorParameter* param);

	virtual ~CampSiteActiveArea();

	friend class CampSiteActiveAreaHelper;
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

class CampSiteActiveAreaImplementation : public ActiveAreaImplementation {
protected:
	ManagedReference<SceneObject* > spawnedObject;

	float currentXP;

	byte campType;

	byte aggroMod;

	float areaRange;

	Vector<ManagedReference<SceneObject* > > campObjects;

	CampVisitorList visitors;

	bool abandoned;

	Reference<CampDespawnEvent* > despawnEvent;

	int maxXP;

	byte campModifier;

	int duration;

private:
	ManagedReference<CreatureObject* > campOwner;

protected:
	Time placementTime;

public:
	CampSiteActiveAreaImplementation();

	CampSiteActiveAreaImplementation(DummyConstructorParameter* param);

	void notifyEnter(SceneObject* player);

	WeakReference<CampSiteActiveArea*> _this;

	operator const CampSiteActiveArea*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CampSiteActiveAreaImplementation();

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

	friend class CampSiteActiveArea;
};

class CampSiteActiveAreaAdapter : public ActiveAreaAdapter {
public:
	CampSiteActiveAreaAdapter(CampSiteActiveArea* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void notifyEnter(SceneObject* player);

};

class CampSiteActiveAreaHelper : public DistributedObjectClassHelper, public Singleton<CampSiteActiveAreaHelper> {
	static CampSiteActiveAreaHelper* staticInitializer;

public:
	CampSiteActiveAreaHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CampSiteActiveAreaHelper>;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#endif /*CAMPSITEACTIVEAREA_H_*/
