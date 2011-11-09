/*
 *	server/zone/objects/tangible/pharmaceutical/CurePack.h generated by engine3 IDL compiler 0.60
 */

#ifndef CUREPACK_H_
#define CUREPACK_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

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

namespace server {
namespace zone {
namespace objects {
namespace manufactureschematic {

class ManufactureSchematic;

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

#include "server/zone/objects/creature/CreatureState.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/templates/tangible/CurePackTemplate.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.h"

#include "system/lang/StringBuffer.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class CurePack : public PharmaceuticalObject {
public:
	CurePack();

	void updateCraftingValues(ManufactureSchematic* schematic);

	void loadTemplateData(SharedObjectTemplate* templateData);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	int calculatePower(CreatureObject* creature);

	bool isArea();

	float getArea();

	unsigned long long getState();

	float getEffectiveness();

	bool isCurePack();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CurePack(DummyConstructorParameter* param);

	virtual ~CurePack();

	friend class CurePackHelper;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class CurePackImplementation : public PharmaceuticalObjectImplementation {
protected:
	float effectiveness;

	float area;

	unsigned long long state;

	String commandToExecute;

public:
	CurePackImplementation();

	CurePackImplementation(DummyConstructorParameter* param);

	void updateCraftingValues(ManufactureSchematic* schematic);

	void loadTemplateData(SharedObjectTemplate* templateData);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	int calculatePower(CreatureObject* creature);

	bool isArea();

	float getArea();

	unsigned long long getState();

	float getEffectiveness();

	bool isCurePack();

	WeakReference<CurePack*> _this;

	operator const CurePack*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CurePackImplementation();

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

	friend class CurePack;
};

class CurePackAdapter : public PharmaceuticalObjectAdapter {
public:
	CurePackAdapter(CurePack* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	int calculatePower(CreatureObject* creature);

	bool isArea();

	float getArea();

	unsigned long long getState();

	float getEffectiveness();

	bool isCurePack();

};

class CurePackHelper : public DistributedObjectClassHelper, public Singleton<CurePackHelper> {
	static CurePackHelper* staticInitializer;

public:
	CurePackHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CurePackHelper>;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

#endif /*CUREPACK_H_*/
