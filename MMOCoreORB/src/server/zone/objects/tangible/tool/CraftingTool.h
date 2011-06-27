/*
 *	server/zone/objects/tangible/tool/CraftingTool.h generated by engine3 IDL compiler 0.60
 */

#ifndef CRAFTINGTOOL_H_
#define CRAFTINGTOOL_H_

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
namespace draftschematic {

class DraftSchematic;

} // namespace draftschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::draftschematic;

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
namespace managers {
namespace crafting {

class CraftingManager;

} // namespace crafting
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::crafting;

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

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

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
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

#include "server/zone/objects/tangible/tool/CraftingStation.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/tangible/tool/ToolTangibleObject.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class CraftingTool : public ToolTangibleObject {
public:
	static const int CLOTHING = 1;

	static const int FOOD = 2;

	static const int GENERIC = 3;

	static const int JEDI = 4;

	static const int SPACE = 5;

	static const int STRUCTURE = 6;

	static const int WEAPON = 7;

	CraftingTool();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void updateCraftingValues(ManufactureSchematic* schematic);

	bool isCraftingTool();

	bool isReady();

	int getToolType();

	TangibleObject* getPrototype();

	ManufactureSchematic* getManufactureSchematic();

	Vector<unsigned int>* getToolTabs();

	void requestCraftingSession(PlayerCreature* player, CraftingStation* craftingStation = NULL);

	void cancelCraftingSession(PlayerCreature* player);

	void clearCraftingSession();

	void selectDraftSchematic(PlayerCreature* player, int index);

	bool createSessionObjects(PlayerCreature* player, DraftSchematic* draftschematic);

	bool createManufactureSchematic(PlayerCreature* player, DraftSchematic* draftschematic);

	bool createPrototype(PlayerCreature* player, DraftSchematic* draftschematic);

	void synchronizedUIListenForSchematic(PlayerCreature* player);

	void addIngredient(PlayerCreature* player, TangibleObject* tano, int slot, int clientCounter);

	void removeIngredient(PlayerCreature* player, TangibleObject* tano, int slot, int clientCounter);

	void nextCraftingStage(PlayerCreature* player, int clientCounter);

	void experiment(PlayerCreature* player, int numRowsAttempted, String& expString, int clientCounter);

	void customization(PlayerCreature* player, String& name, int schematicCount, String& customization);

	void createPrototype(PlayerCreature* player, int clientCounter, int practice);

	void createManfSchematic(PlayerCreature* player, int clientCounter);

	void createObject(PlayerCreature* player, int timer, bool create);

	void depositObject(PlayerCreature* player, bool practice);

	unsigned long long getLastExperimentationTimestamp();

	int getExperimentationResult();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CraftingTool(DummyConstructorParameter* param);

	virtual ~CraftingTool();

	friend class CraftingToolHelper;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class CraftingToolImplementation : public ToolTangibleObjectImplementation {
protected:
	int type;

	float effectiveness;

	String status;

	int complexityLevel;

	ManagedReference<CraftingManager* > craftingManager;

	Vector<unsigned int> enabledTabs;

	Vector<ManagedReference<DraftSchematic* > > currentSchematicList;

	ManagedReference<CraftingStation* > craftingStation;

	int state;

	int insertCounter;

	int experimentationPointsTotal;

	int experimentationPointsUsed;

	int assemblyResult;

	int experimentationResult;

	unsigned long long lastExperimentationTimestamp;

public:
	static const int CLOTHING = 1;

	static const int FOOD = 2;

	static const int GENERIC = 3;

	static const int JEDI = 4;

	static const int SPACE = 5;

	static const int STRUCTURE = 6;

	static const int WEAPON = 7;

	CraftingToolImplementation();

	CraftingToolImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void updateCraftingValues(ManufactureSchematic* schematic);

	bool isCraftingTool();

	bool isReady();

	int getToolType();

	TangibleObject* getPrototype();

	ManufactureSchematic* getManufactureSchematic();

	Vector<unsigned int>* getToolTabs();

	void requestCraftingSession(PlayerCreature* player, CraftingStation* craftingStation = NULL);

private:
	void sendStart(PlayerCreature* player);

	void sendToolStartFailure(PlayerCreature* player);

public:
	void cancelCraftingSession(PlayerCreature* player);

	void clearCraftingSession();

private:
	void closeCraftingWindow(PlayerCreature* player, int clientCounter);

	void locateCraftingStation(PlayerCreature* player, int toolType);

public:
	void selectDraftSchematic(PlayerCreature* player, int index);

	bool createSessionObjects(PlayerCreature* player, DraftSchematic* draftschematic);

	bool createManufactureSchematic(PlayerCreature* player, DraftSchematic* draftschematic);

	bool createPrototype(PlayerCreature* player, DraftSchematic* draftschematic);

	void synchronizedUIListenForSchematic(PlayerCreature* player);

	void addIngredient(PlayerCreature* player, TangibleObject* tano, int slot, int clientCounter);

private:
	void sendIngredientAddSuccess(PlayerCreature* player, int slot, int clientCounter);

public:
	void removeIngredient(PlayerCreature* player, TangibleObject* tano, int slot, int clientCounter);

private:
	void sendIngredientRemoveSuccess(PlayerCreature* player, int slot, int clientCounter);

	void sendSlotMessage(PlayerCreature* player, int clientCounter, int message);

public:
	void nextCraftingStage(PlayerCreature* player, int clientCounter);

private:
	void initialAssembly(PlayerCreature* player, int counter);

	void finishAssembly(PlayerCreature* player, int clientCounter);

public:
	void experiment(PlayerCreature* player, int numRowsAttempted, String& expString, int clientCounter);

private:
	void experimentRow(CraftingValues* craftingValues, int rowEffected, int pointsAttempted, float failure);

public:
	void customization(PlayerCreature* player, String& name, int schematicCount, String& customization);

private:
	void finishStage1(PlayerCreature* player, int clientCounter);

	void finishStage2(PlayerCreature* player, int clientCounter);

public:
	void createPrototype(PlayerCreature* player, int clientCounter, int practice);

	void createManfSchematic(PlayerCreature* player, int clientCounter);

	void createObject(PlayerCreature* player, int timer, bool create);

	void depositObject(PlayerCreature* player, bool practice);

	unsigned long long getLastExperimentationTimestamp();

	int getExperimentationResult();

	WeakReference<CraftingTool*> _this;

	operator const CraftingTool*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CraftingToolImplementation();

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

	friend class CraftingTool;
};

class CraftingToolAdapter : public ToolTangibleObjectAdapter {
public:
	CraftingToolAdapter(CraftingToolImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void updateCraftingValues(ManufactureSchematic* schematic);

	bool isCraftingTool();

	bool isReady();

	int getToolType();

	TangibleObject* getPrototype();

	ManufactureSchematic* getManufactureSchematic();

	void requestCraftingSession(PlayerCreature* player, CraftingStation* craftingStation);

	void cancelCraftingSession(PlayerCreature* player);

	void clearCraftingSession();

	void selectDraftSchematic(PlayerCreature* player, int index);

	bool createSessionObjects(PlayerCreature* player, DraftSchematic* draftschematic);

	bool createManufactureSchematic(PlayerCreature* player, DraftSchematic* draftschematic);

	bool createPrototype(PlayerCreature* player, DraftSchematic* draftschematic);

	void synchronizedUIListenForSchematic(PlayerCreature* player);

	void addIngredient(PlayerCreature* player, TangibleObject* tano, int slot, int clientCounter);

	void removeIngredient(PlayerCreature* player, TangibleObject* tano, int slot, int clientCounter);

	void nextCraftingStage(PlayerCreature* player, int clientCounter);

	void experiment(PlayerCreature* player, int numRowsAttempted, String& expString, int clientCounter);

	void customization(PlayerCreature* player, String& name, int schematicCount, String& customization);

	void createPrototype(PlayerCreature* player, int clientCounter, int practice);

	void createManfSchematic(PlayerCreature* player, int clientCounter);

	void createObject(PlayerCreature* player, int timer, bool create);

	void depositObject(PlayerCreature* player, bool practice);

	unsigned long long getLastExperimentationTimestamp();

	int getExperimentationResult();

protected:
	String _param2_experiment__PlayerCreature_int_String_int_;
	String _param1_customization__PlayerCreature_String_int_String_;
	String _param3_customization__PlayerCreature_String_int_String_;
};

class CraftingToolHelper : public DistributedObjectClassHelper, public Singleton<CraftingToolHelper> {
	static CraftingToolHelper* staticInitializer;

public:
	CraftingToolHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CraftingToolHelper>;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

#endif /*CRAFTINGTOOL_H_*/
