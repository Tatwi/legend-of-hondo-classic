/*
 *	server/zone/objects/player/sui/listbox/SuiListBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUILISTBOX_H_
#define SUILISTBOX_H_

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
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.h"

#include "server/zone/packets/ui/SuiCreatePageMessage.h"

#include "engine/lua/LuaObject.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/player/sui/SuiBox.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace listbox {

class SuiListBox : public SuiBox {
public:
	static const int MSGSELECTED = 0;

	static const int HANDLESINGLEBUTTON = 1;

	static const int HANDLETWOBUTTON = 2;

	static const int HANDLETHREEBUTTON = 3;

	SuiListBox(CreatureObject* player, unsigned int windowType = 0, unsigned int listBoxType = 0);

	void init();

	void addMenuItem(const String& name, unsigned long long objectID = 0);

	String getMenuItemName(int index);

	void removeAllMenuItems();

	unsigned long long getMenuObjectID(unsigned int idx);

	int getMenuSize();

	BaseMessage* generateMessage();

	void setNextBox(unsigned int boxID);

	void setPreviousBox(unsigned int boxID);

	unsigned long long getNextBox();

	unsigned long long getPreviousBox();

	bool isListBox();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiListBox(DummyConstructorParameter* param);

	virtual ~SuiListBox();

	String _return_getMenuItemName;

	friend class SuiListBoxHelper;
};

} // namespace listbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::listbox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace listbox {

class SuiListBoxImplementation : public SuiBoxImplementation {
protected:
	Vector<ManagedReference<SuiListBoxMenuItem* > > menuItems;

	int type;

private:
	unsigned long long next;

	unsigned long long previous;

public:
	static const int MSGSELECTED = 0;

	static const int HANDLESINGLEBUTTON = 1;

	static const int HANDLETWOBUTTON = 2;

	static const int HANDLETHREEBUTTON = 3;

	SuiListBoxImplementation(CreatureObject* player, unsigned int windowType = 0, unsigned int listBoxType = 0);

	SuiListBoxImplementation(DummyConstructorParameter* param);

	void init();

	void addMenuItem(const String& name, unsigned long long objectID = 0);

	String getMenuItemName(int index);

	void removeAllMenuItems();

	unsigned long long getMenuObjectID(unsigned int idx);

	int getMenuSize();

	BaseMessage* generateMessage();

	void setNextBox(unsigned int boxID);

	void setPreviousBox(unsigned int boxID);

	unsigned long long getNextBox();

	unsigned long long getPreviousBox();

	bool isListBox();

	WeakReference<SuiListBox*> _this;

	operator const SuiListBox*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SuiListBoxImplementation();

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

	friend class SuiListBox;
};

class SuiListBoxAdapter : public SuiBoxAdapter {
public:
	SuiListBoxAdapter(SuiListBox* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void init();

	void addMenuItem(const String& name, unsigned long long objectID);

	String getMenuItemName(int index);

	void removeAllMenuItems();

	unsigned long long getMenuObjectID(unsigned int idx);

	int getMenuSize();

	BaseMessage* generateMessage();

	void setNextBox(unsigned int boxID);

	void setPreviousBox(unsigned int boxID);

	unsigned long long getNextBox();

	unsigned long long getPreviousBox();

	bool isListBox();

protected:
	String _param0_addMenuItem__String_long_;
};

class SuiListBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiListBoxHelper> {
	static SuiListBoxHelper* staticInitializer;

public:
	SuiListBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiListBoxHelper>;
};

} // namespace listbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::listbox;

#endif /*SUILISTBOX_H_*/
