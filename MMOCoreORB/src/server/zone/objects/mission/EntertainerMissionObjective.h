/*
 *	server/zone/objects/mission/EntertainerMissionObjective.h generated by engine3 IDL compiler 0.60
 */

#ifndef ENTERTAINERMISSIONOBJECTIVE_H_
#define ENTERTAINERMISSIONOBJECTIVE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObject;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObserver;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace area {

class MissionSpawnActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

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
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

#include "server/zone/objects/mission/events/CompleteMissionAfterCertainTimeTask.h"

#include "server/zone/templates/TemplateReference.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

#include "server/zone/objects/mission/MissionObjective.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class EntertainerMissionObjective : public MissionObjective {
public:
	EntertainerMissionObjective(MissionObject* mission);

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void setIsEntertaining(bool value);

	void clearLocationActiveAreaAndObservers();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void startCompleteTask();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	EntertainerMissionObjective(DummyConstructorParameter* param);

	virtual ~EntertainerMissionObjective();

	friend class EntertainerMissionObjectiveHelper;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class EntertainerMissionObjectiveImplementation : public MissionObjectiveImplementation {
protected:
	bool inMissionArea;

	bool isEntertaining;

	ManagedReference<ActiveArea* > locationActiveArea;

	Reference<CompleteMissionAfterCertainTimeTask* > completeTask;

public:
	EntertainerMissionObjectiveImplementation(MissionObject* mission);

	EntertainerMissionObjectiveImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void setIsEntertaining(bool value);

	void clearLocationActiveAreaAndObservers();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void startCompleteTask();

	WeakReference<EntertainerMissionObjective*> _this;

	operator const EntertainerMissionObjective*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~EntertainerMissionObjectiveImplementation();

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

	friend class EntertainerMissionObjective;
};

class EntertainerMissionObjectiveAdapter : public MissionObjectiveAdapter {
public:
	EntertainerMissionObjectiveAdapter(EntertainerMissionObjective* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void setIsEntertaining(bool value);

	void clearLocationActiveAreaAndObservers();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void startCompleteTask();

};

class EntertainerMissionObjectiveHelper : public DistributedObjectClassHelper, public Singleton<EntertainerMissionObjectiveHelper> {
	static EntertainerMissionObjectiveHelper* staticInitializer;

public:
	EntertainerMissionObjectiveHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<EntertainerMissionObjectiveHelper>;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*ENTERTAINERMISSIONOBJECTIVE_H_*/
