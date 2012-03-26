/*
 *	server/zone/objects/tangible/firework/FireworkObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef FIREWORKOBJECT_H_
#define FIREWORKOBJECT_H_

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
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

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

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/templates/tangible/FireworkObjectTemplate.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace firework {

class FireworkObject : public TangibleObject {
public:
	FireworkObject();

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void launch(CreatureObject* player);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FireworkObject(DummyConstructorParameter* param);

	virtual ~FireworkObject();

	friend class FireworkObjectHelper;
};

} // namespace firework
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::firework;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace firework {

class FireworkObjectImplementation : public TangibleObjectImplementation {
protected:
	String fireworkObject;

public:
	FireworkObjectImplementation();

	FireworkObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void launch(CreatureObject* player);

	WeakReference<FireworkObject*> _this;

	operator const FireworkObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~FireworkObjectImplementation();

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

	friend class FireworkObject;
};

class FireworkObjectAdapter : public TangibleObjectAdapter {
public:
	FireworkObjectAdapter(FireworkObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void launch(CreatureObject* player);

};

class FireworkObjectHelper : public DistributedObjectClassHelper, public Singleton<FireworkObjectHelper> {
	static FireworkObjectHelper* staticInitializer;

public:
	FireworkObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FireworkObjectHelper>;
};

} // namespace firework
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::firework;

#endif /*FIREWORKOBJECT_H_*/
