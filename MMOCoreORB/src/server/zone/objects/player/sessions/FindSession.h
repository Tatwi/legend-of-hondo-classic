/*
 *	server/zone/objects/player/sessions/FindSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef FINDSESSION_H_
#define FINDSESSION_H_

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

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Facade.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class FindSession : public Facade {
public:
	FindSession(CreatureObject* pl);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void initalizeFindMenu();

	void addWaypoint(float x, float y, const String& name);

	void findPlanetaryObject(String& maplocationtype);

	void clearWaypoint();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FindSession(DummyConstructorParameter* param);

	virtual ~FindSession();

	friend class FindSessionHelper;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace player {

class FindSessionImplementation : public FacadeImplementation {
protected:
	ManagedWeakReference<CreatureObject* > player;

	ManagedReference<SuiListBox* > findSuiBox;

public:
	FindSessionImplementation(CreatureObject* pl);

	FindSessionImplementation(DummyConstructorParameter* param);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void initalizeFindMenu();

	void addWaypoint(float x, float y, const String& name);

	void findPlanetaryObject(String& maplocationtype);

	void clearWaypoint();

	WeakReference<FindSession*> _this;

	operator const FindSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~FindSessionImplementation();

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

	friend class FindSession;
};

class FindSessionAdapter : public FacadeAdapter {
public:
	FindSessionAdapter(FindSession* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void addWaypoint(float x, float y, const String& name);

	void clearWaypoint();

protected:
	String _param2_addWaypoint__float_float_String_;
};

class FindSessionHelper : public DistributedObjectClassHelper, public Singleton<FindSessionHelper> {
	static FindSessionHelper* staticInitializer;

public:
	FindSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FindSessionHelper>;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#endif /*FINDSESSION_H_*/
