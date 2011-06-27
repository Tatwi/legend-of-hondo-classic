/*
 *	server/zone/objects/tangible/fishing/FishObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef FISHOBJECT_H_
#define FISHOBJECT_H_

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
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace fishing {

class FishObject : public TangibleObject {
public:
	FishObject();

	void initializeTransientMembers();

	void setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void filet(PlayerCreature* player);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FishObject(DummyConstructorParameter* param);

	virtual ~FishObject();

	friend class FishObjectHelper;
};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace fishing {

class FishObjectImplementation : public TangibleObjectImplementation {
protected:
	String player;

	String zoneName;

	String timeCaught;

	float length;

public:
	FishObjectImplementation();

	FishObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void filet(PlayerCreature* player);

	WeakReference<FishObject*> _this;

	operator const FishObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~FishObjectImplementation();

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

	friend class FishObject;
};

class FishObjectAdapter : public TangibleObjectAdapter {
public:
	FishObjectAdapter(FishObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void filet(PlayerCreature* player);

protected:
	String _param0_setAttributes__String_String_String_float_;
	String _param1_setAttributes__String_String_String_float_;
	String _param2_setAttributes__String_String_String_float_;
};

class FishObjectHelper : public DistributedObjectClassHelper, public Singleton<FishObjectHelper> {
	static FishObjectHelper* staticInitializer;

public:
	FishObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FishObjectHelper>;
};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

#endif /*FISHOBJECT_H_*/
