/*
 *	server/zone/objects/player/sui/slotmachinebox/SuiSlotMachineBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUISLOTMACHINEBOX_H_
#define SUISLOTMACHINEBOX_H_

#include "engine/orb/DistributedObjectBroker.h"

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
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {

class SuiBox;

} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui;

#include "server/zone/packets/ui/SuiCreatePageMessage.h"

#include "engine/lua/LuaObject.h"

#include "system/io/StringTokenizer.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

#include "system/lang/String.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace slotmachinebox {

class SuiSlotMachineBox : public SuiListBox {
public:
	SuiSlotMachineBox(PlayerCreature* player, unsigned int windowType, unsigned int payoutBox, unsigned int listBoxType = 0);

	unsigned int getPayoutBoxID();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiSlotMachineBox(DummyConstructorParameter* param);

	virtual ~SuiSlotMachineBox();

	friend class SuiSlotMachineBoxHelper;
};

} // namespace slotmachinebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::slotmachinebox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace slotmachinebox {

class SuiSlotMachineBoxImplementation : public SuiListBoxImplementation {
protected:
	unsigned int payoutBoxID;

public:
	SuiSlotMachineBoxImplementation(PlayerCreature* player, unsigned int windowType, unsigned int payoutBox, unsigned int listBoxType = 0);

	SuiSlotMachineBoxImplementation(DummyConstructorParameter* param);

	unsigned int getPayoutBoxID();

	SuiSlotMachineBox* _this;

	operator const SuiSlotMachineBox*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SuiSlotMachineBoxImplementation();

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

	friend class SuiSlotMachineBox;
};

class SuiSlotMachineBoxAdapter : public SuiListBoxAdapter {
public:
	SuiSlotMachineBoxAdapter(SuiSlotMachineBoxImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	unsigned int getPayoutBoxID();

};

class SuiSlotMachineBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiSlotMachineBoxHelper> {
	static SuiSlotMachineBoxHelper* staticInitializer;

public:
	SuiSlotMachineBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiSlotMachineBoxHelper>;
};

} // namespace slotmachinebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::slotmachinebox;

#endif /*SUISLOTMACHINEBOX_H_*/
