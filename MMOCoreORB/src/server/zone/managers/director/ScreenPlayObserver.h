/*
 *	server/zone/managers/director/ScreenPlayObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef SCREENPLAYOBSERVER_H_
#define SCREENPLAYOBSERVER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace managers {
namespace director {

class ScreenPlayObserver : public Observer {
public:
	ScreenPlayObserver();

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setScreenPlay(const String& screen);

	void setScreenKey(const String& screenKey);

	String getScreenPlay();

	String getScreenKey();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ScreenPlayObserver(DummyConstructorParameter* param);

	virtual ~ScreenPlayObserver();

	String _return_getScreenKey;
	String _return_getScreenPlay;

	friend class ScreenPlayObserverHelper;
};

} // namespace director
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::director;

namespace server {
namespace zone {
namespace managers {
namespace director {

class ScreenPlayObserverImplementation : public ObserverImplementation {
protected:
	String play;

	String key;

public:
	ScreenPlayObserverImplementation();

	ScreenPlayObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setScreenPlay(const String& screen);

	void setScreenKey(const String& screenKey);

	String getScreenPlay();

	String getScreenKey();

	WeakReference<ScreenPlayObserver*> _this;

	operator const ScreenPlayObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ScreenPlayObserverImplementation();

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

	friend class ScreenPlayObserver;
};

class ScreenPlayObserverAdapter : public ObserverAdapter {
public:
	ScreenPlayObserverAdapter(ScreenPlayObserver* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setScreenPlay(const String& screen);

	void setScreenKey(const String& screenKey);

	String getScreenPlay();

	String getScreenKey();

protected:
	String _param0_setScreenPlay__String_;
	String _param0_setScreenKey__String_;
};

class ScreenPlayObserverHelper : public DistributedObjectClassHelper, public Singleton<ScreenPlayObserverHelper> {
	static ScreenPlayObserverHelper* staticInitializer;

public:
	ScreenPlayObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ScreenPlayObserverHelper>;
};

} // namespace director
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::director;

#endif /*SCREENPLAYOBSERVER_H_*/
