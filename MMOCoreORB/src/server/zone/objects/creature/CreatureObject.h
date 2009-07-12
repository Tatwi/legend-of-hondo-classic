/*
 *	server/zone/objects/creature/CreatureObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef CREATUREOBJECT_H_
#define CREATUREOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject : public TangibleObject {
public:
	CreatureObject(LuaObject* templateData, SceneObject* parent = NULL);

	void addSerializableVariables();

	int getBankCredits();

	int getCashCredits();

	int getBaseHealthUpdateCounter();

	byte getPosture();

	byte getFactionRank();

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	unsigned long long getStateBitmask();

	unsigned long long getListenID();

	float getSpeed();

	float getTerrainNegotiation();

	float getAcceleration();

	short getLevel();

	unsigned long long getWeaponID();

	unsigned long long getGroupID();

	unsigned long long getGroupInviterID();

	unsigned long long getGroupInviteCounter();

	int getGuildID();

	unsigned long long getTargetID();

	byte getMoodID();

	int getPerformanceCounter();

	int getInstrumentID();

	byte getFrozen();

protected:
	CreatureObject(DummyConstructorParameter* param);

	virtual ~CreatureObject();

	friend class CreatureObjectHelper;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/objects/tangible/TangibleObjectImplementation.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObjectImplementation : public TangibleObjectImplementation {
protected:
	int bankCredits;

	int cashCredits;

	Vector<int >* baseHealth;

	unsigned int baseHealthUpdateCounter;

	byte posture;

	byte factionRank;

	unsigned long long creatureLinkID;

	float shockWounds;

	Vector<int >* wounds;

	unsigned int woundsUpdateCounter;

	unsigned long long stateBitmask;

	Vector<int >* encumbrances;

	unsigned int encumbrancesUpdateCounter;

	float speed;

	float terrainNegotiation;

	float acceleration;

	unsigned long long listenToID;

	short level;

	unsigned long long weaponID;

	unsigned long long groupID;

	unsigned long long groupInviterID;

	unsigned long long groupInviteCounter;

	int guildID;

	unsigned long long targetID;

	byte moodID;

	int performanceCounter;

	int instrumentID;

	Vector<int >* hamList;

	unsigned int hamListUpdateCounter;

	Vector<int >* maxHamList;

	unsigned int maxHamListUpdateCounter;

	byte frozen;

public:
	static bool registered;

	static bool registered2;

	static bool registered3;

	static bool registered4;

	CreatureObjectImplementation(LuaObject* templateData, SceneObject* parent = NULL);

	void addSerializableVariables();

	int getBankCredits();

	int getCashCredits();

	int getBaseHealthUpdateCounter();

	byte getPosture();

	byte getFactionRank();

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	unsigned long long getStateBitmask();

	unsigned long long getListenID();

	float getSpeed();

	float getTerrainNegotiation();

	float getAcceleration();

	short getLevel();

	unsigned long long getWeaponID();

	unsigned long long getGroupID();

	unsigned long long getGroupInviterID();

	unsigned long long getGroupInviteCounter();

	int getGuildID();

	unsigned long long getTargetID();

	byte getMoodID();

	int getPerformanceCounter();

	int getInstrumentID();

	byte getFrozen();

	CreatureObject* _this;

protected:
	virtual ~CreatureObjectImplementation();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();
};

class CreatureObjectAdapter : public TangibleObjectAdapter {
public:
	CreatureObjectAdapter(CreatureObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void addSerializableVariables();

	int getBankCredits();

	int getCashCredits();

	int getBaseHealthUpdateCounter();

	byte getPosture();

	byte getFactionRank();

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	unsigned long long getStateBitmask();

	unsigned long long getListenID();

	float getSpeed();

	float getTerrainNegotiation();

	float getAcceleration();

	short getLevel();

	unsigned long long getWeaponID();

	unsigned long long getGroupID();

	unsigned long long getGroupInviterID();

	unsigned long long getGroupInviteCounter();

	int getGuildID();

	unsigned long long getTargetID();

	byte getMoodID();

	int getPerformanceCounter();

	int getInstrumentID();

	byte getFrozen();

};

class CreatureObjectHelper : public DistributedObjectClassHelper, public Singleton<CreatureObjectHelper> {
	static CreatureObjectHelper* staticInitializer;

public:
	CreatureObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CreatureObjectHelper>;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#endif /*CREATUREOBJECT_H_*/
