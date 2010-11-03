/*
 *	server/zone/objects/tangible/ticket/TicketObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef TICKETOBJECT_H_
#define TICKETOBJECT_H_

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

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace ticket {

class TicketObject : public TangibleObject {
public:
	TicketObject();

	void initializeTransientMembers();

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void setDeparturePlanet(const String& departureplanet);

	void setDeparturePoint(const String& departurepoint);

	void setArrivalPlanet(const String& arrival);

	void setArrivalPoint(const String& arrival);

	String getDeparturePlanet();

	String getDeparturePoint();

	String getArrivalPlanet();

	String getArrivalPoint();

	bool isTicketObject();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	TicketObject(DummyConstructorParameter* param);

	virtual ~TicketObject();

	String _return_getArrivalPlanet;
	String _return_getArrivalPoint;
	String _return_getDeparturePlanet;
	String _return_getDeparturePoint;

	friend class TicketObjectHelper;
};

} // namespace ticket
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::ticket;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace ticket {

class TicketObjectImplementation : public TangibleObjectImplementation {
protected:
	String departurePlanet;

	String departurePoint;

	String arrivalPlanet;

	String arrivalPoint;

public:
	TicketObjectImplementation();

	TicketObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void setDeparturePlanet(const String& departureplanet);

	void setDeparturePoint(const String& departurepoint);

	void setArrivalPlanet(const String& arrival);

	void setArrivalPoint(const String& arrival);

	String getDeparturePlanet();

	String getDeparturePoint();

	String getArrivalPlanet();

	String getArrivalPoint();

	bool isTicketObject();

	TicketObject* _this;

	operator const TicketObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~TicketObjectImplementation();

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

	friend class TicketObject;
};

class TicketObjectAdapter : public TangibleObjectAdapter {
public:
	TicketObjectAdapter(TicketObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void setDeparturePlanet(const String& departureplanet);

	void setDeparturePoint(const String& departurepoint);

	void setArrivalPlanet(const String& arrival);

	void setArrivalPoint(const String& arrival);

	String getDeparturePlanet();

	String getDeparturePoint();

	String getArrivalPlanet();

	String getArrivalPoint();

	bool isTicketObject();

protected:
	String _param0_setDeparturePlanet__String_;
	String _param0_setDeparturePoint__String_;
	String _param0_setArrivalPlanet__String_;
	String _param0_setArrivalPoint__String_;
};

class TicketObjectHelper : public DistributedObjectClassHelper, public Singleton<TicketObjectHelper> {
	static TicketObjectHelper* staticInitializer;

public:
	TicketObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<TicketObjectHelper>;
};

} // namespace ticket
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::ticket;

#endif /*TICKETOBJECT_H_*/
