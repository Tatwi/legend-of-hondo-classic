/*
 *	server/zone/objects/tangible/loot/LootkitObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef LOOTKITOBJECT_H_
#define LOOTKITOBJECT_H_

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

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

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

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/VectorMap.h"

#include "system/lang/ref/Reference.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace loot {

class LootkitObject : public TangibleObject {
public:
	LootkitObject();

	void initializeTransientMembers();

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	int notifyObjectInserted(SceneObject* object);

	CreatureObject* getPlayer();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	LootkitObject(DummyConstructorParameter* param);

	virtual ~LootkitObject();

	friend class LootkitObjectHelper;
};

} // namespace loot
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::loot;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace loot {

class LootkitObjectImplementation : public TangibleObjectImplementation {
protected:
	VectorMap<unsigned int, bool> components;

	VectorMap<unsigned int, String> attributes;

	Vector<unsigned int> comps;

	Vector<unsigned int> reward;

	bool deleteComponents;

public:
	LootkitObjectImplementation();

	LootkitObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	int notifyObjectInserted(SceneObject* object);

protected:
	void createItem();

public:
	CreatureObject* getPlayer();

protected:
	void addToKit(SceneObject* object);

public:
	virtual void loadTemplateData(SharedObjectTemplate* templateData);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	WeakReference<LootkitObject*> _this;

	operator const LootkitObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~LootkitObjectImplementation();

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

	friend class LootkitObject;
};

class LootkitObjectAdapter : public TangibleObjectAdapter {
public:
	LootkitObjectAdapter(LootkitObject* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	int notifyObjectInserted(SceneObject* object);

	CreatureObject* getPlayer();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

protected:
	String _param2_canAddObject__SceneObject_int_String_;
};

class LootkitObjectHelper : public DistributedObjectClassHelper, public Singleton<LootkitObjectHelper> {
	static LootkitObjectHelper* staticInitializer;

public:
	LootkitObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<LootkitObjectHelper>;
};

} // namespace loot
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::loot;

#endif /*LOOTKITOBJECT_H_*/
