/*
 *	server/zone/objects/player/sessions/ImageDesignSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef IMAGEDESIGNSESSION_H_
#define IMAGEDESIGNSESSION_H_

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
namespace player {
namespace events {

class ImageDesignTimeoutEvent;

} // namespace events
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::events;

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "server/zone/managers/skill/imagedesign/ImageDesignManager.h"

#include "server/zone/objects/scene/variables/CustomizationVariables.h"

#include "server/zone/objects/player/sessions/ImageDesignData.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Facade.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class ImageDesignSession : public Facade {
public:
	ImageDesignSession(CreatureObject* parent);

	void initializeTransientMembers();

	void startImageDesign(CreatureObject* designer, CreatureObject* targetPlayer);

	void updateImageDesign(unsigned long long designer, unsigned long long targetPlayer, unsigned long long tent, int type, const ImageDesignData& data);

	void cancelImageDesign(unsigned long long designer, unsigned long long targetPlayer, unsigned long long tent, int type, const ImageDesignData& data);

	int initializeSession();

	int doPayment();

	int cancelSession();

	int clearSession();

	void clearIdTimeoutEvent();

	void dequeueIdTimeoutEvent();

	void sessionTimeout();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ImageDesignSession(DummyConstructorParameter* param);

	virtual ~ImageDesignSession();

	friend class ImageDesignSessionHelper;
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

class ImageDesignSessionImplementation : public FacadeImplementation {
	Reference<ImageDesignManager* > imageDesignManager;

protected:
	ManagedWeakReference<CreatureObject* > designerCreature;

	ManagedWeakReference<CreatureObject* > targetCreature;

	ImageDesignData imageDesignData;

	Reference<ImageDesignTimeoutEvent* > idTimeoutEvent;

public:
	ImageDesignSessionImplementation(CreatureObject* parent);

	ImageDesignSessionImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void startImageDesign(CreatureObject* designer, CreatureObject* targetPlayer);

	void updateImageDesign(unsigned long long designer, unsigned long long targetPlayer, unsigned long long tent, int type, const ImageDesignData& data);

	void cancelImageDesign(unsigned long long designer, unsigned long long targetPlayer, unsigned long long tent, int type, const ImageDesignData& data);

	int initializeSession();

	int doPayment();

	int cancelSession();

	int clearSession();

	void clearIdTimeoutEvent();

	void dequeueIdTimeoutEvent();

	void sessionTimeout();

	WeakReference<ImageDesignSession*> _this;

	operator const ImageDesignSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ImageDesignSessionImplementation();

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

	friend class ImageDesignSession;
};

class ImageDesignSessionAdapter : public FacadeAdapter {
public:
	ImageDesignSessionAdapter(ImageDesignSession* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int initializeSession();

	int doPayment();

	int cancelSession();

	int clearSession();

	void clearIdTimeoutEvent();

	void dequeueIdTimeoutEvent();

	void sessionTimeout();

};

class ImageDesignSessionHelper : public DistributedObjectClassHelper, public Singleton<ImageDesignSessionHelper> {
	static ImageDesignSessionHelper* staticInitializer;

public:
	ImageDesignSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ImageDesignSessionHelper>;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#endif /*IMAGEDESIGNSESSION_H_*/
