/*
 *	server/zone/objects/creature/informant/InformantCreature.h generated by engine3 IDL compiler 0.60
 */

#ifndef INFORMANTCREATURE_H_
#define INFORMANTCREATURE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/creature/AiAgent.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace trainer {

class InformantCreature : public AiAgent {
public:
	InformantCreature();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void activateRecovery();

	void setLevel(int l);

	int getLevel();

	bool isInformantCreature();

	bool isAttackableBy(CreatureObject* object);

	void sendConversationStartTo(SceneObject* player);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	InformantCreature(DummyConstructorParameter* param);

	virtual ~InformantCreature();

	friend class InformantCreatureHelper;
};

} // namespace trainer
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::trainer;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace trainer {

class InformantCreatureImplementation : public AiAgentImplementation {
protected:
	int level;

public:
	InformantCreatureImplementation();

	InformantCreatureImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void activateRecovery();

	void setLevel(int l);

	int getLevel();

	bool isInformantCreature();

	bool isAttackableBy(CreatureObject* object);

	void sendConversationStartTo(SceneObject* player);

	WeakReference<InformantCreature*> _this;

	operator const InformantCreature*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~InformantCreatureImplementation();

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

	friend class InformantCreature;
};

class InformantCreatureAdapter : public AiAgentAdapter {
public:
	InformantCreatureAdapter(InformantCreature* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void activateRecovery();

	void setLevel(int l);

	int getLevel();

	bool isInformantCreature();

	bool isAttackableBy(CreatureObject* object);

	void sendConversationStartTo(SceneObject* player);

};

class InformantCreatureHelper : public DistributedObjectClassHelper, public Singleton<InformantCreatureHelper> {
	static InformantCreatureHelper* staticInitializer;

public:
	InformantCreatureHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<InformantCreatureHelper>;
};

} // namespace trainer
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::trainer;

#endif /*INFORMANTCREATURE_H_*/
