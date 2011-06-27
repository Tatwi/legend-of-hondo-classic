/*
 *	server/zone/managers/auction/AuctionsMap.h generated by engine3 IDL compiler 0.60
 */

#ifndef AUCTIONSMAP_H_
#define AUCTIONSMAP_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace auction {

class AuctionItem;

} // namespace auction
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::auction;

#include "engine/core/ManagedObject.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace managers {
namespace auction {

class AuctionsMap : public ManagedObject {
public:
	AuctionsMap();

	int getVendorItemCount();

	bool containsVendorItem(unsigned long long objectID);

	void addVendorItem(unsigned long long objectID, AuctionItem* item);

	int getPlayerVendorItemCount(unsigned long long objectID);

	void dropVendorItem(unsigned long long objectID);

	AuctionItem* getVendorItem(unsigned long long objectID);

	AuctionItem* getVendorItem(int index);

	void increasePlayerVendorCount(unsigned long long playerID);

	void decreasePlayerVendorCount(unsigned long long playerID);

	int getPlayerVendorCount(unsigned long long playerID);

	int getAuctionCount();

	bool containsAuction(unsigned long long objectID);

	void addBazaarItem(unsigned long long objectID, AuctionItem* item);

	int getPlayerAuctionCount(unsigned long long objectID);

	void dropBazaarItem(unsigned long long objectID);

	AuctionItem* getBazaarItem(unsigned long long objectID);

	AuctionItem* getBazaarItem(int index);

	bool checkInStockroom(unsigned long long objectID);

	VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* getBazaarItems();

	VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* getVendorItems();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	AuctionsMap(DummyConstructorParameter* param);

	virtual ~AuctionsMap();

	friend class AuctionsMapHelper;
};

} // namespace auction
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::auction;

namespace server {
namespace zone {
namespace managers {
namespace auction {

class AuctionsMapImplementation : public ManagedObjectImplementation {
protected:
	VectorMap<unsigned long long, ManagedReference<AuctionItem* > > auctions;

	VectorMap<unsigned long long, ManagedReference<AuctionItem* > > vendorItems;

	VectorMap<unsigned long long, int> playerAuctionCount;

	VectorMap<unsigned long long, int> playerVendorItemCount;

	VectorMap<unsigned long long, int> playerVendorCount;

public:
	AuctionsMapImplementation();

	AuctionsMapImplementation(DummyConstructorParameter* param);

	int getVendorItemCount();

	bool containsVendorItem(unsigned long long objectID);

	void addVendorItem(unsigned long long objectID, AuctionItem* item);

	int getPlayerVendorItemCount(unsigned long long objectID);

	void dropVendorItem(unsigned long long objectID);

	AuctionItem* getVendorItem(unsigned long long objectID);

	AuctionItem* getVendorItem(int index);

	void increasePlayerVendorCount(unsigned long long playerID);

	void decreasePlayerVendorCount(unsigned long long playerID);

	int getPlayerVendorCount(unsigned long long playerID);

	int getAuctionCount();

	bool containsAuction(unsigned long long objectID);

	void addBazaarItem(unsigned long long objectID, AuctionItem* item);

	int getPlayerAuctionCount(unsigned long long objectID);

	void dropBazaarItem(unsigned long long objectID);

	AuctionItem* getBazaarItem(unsigned long long objectID);

	AuctionItem* getBazaarItem(int index);

	bool checkInStockroom(unsigned long long objectID);

	VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* getBazaarItems();

	VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* getVendorItems();

	WeakReference<AuctionsMap*> _this;

	operator const AuctionsMap*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~AuctionsMapImplementation();

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

	friend class AuctionsMap;
};

class AuctionsMapAdapter : public ManagedObjectAdapter {
public:
	AuctionsMapAdapter(AuctionsMapImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int getVendorItemCount();

	bool containsVendorItem(unsigned long long objectID);

	void addVendorItem(unsigned long long objectID, AuctionItem* item);

	int getPlayerVendorItemCount(unsigned long long objectID);

	void dropVendorItem(unsigned long long objectID);

	AuctionItem* getVendorItem(unsigned long long objectID);

	AuctionItem* getVendorItem(int index);

	void increasePlayerVendorCount(unsigned long long playerID);

	void decreasePlayerVendorCount(unsigned long long playerID);

	int getPlayerVendorCount(unsigned long long playerID);

	int getAuctionCount();

	bool containsAuction(unsigned long long objectID);

	void addBazaarItem(unsigned long long objectID, AuctionItem* item);

	int getPlayerAuctionCount(unsigned long long objectID);

	void dropBazaarItem(unsigned long long objectID);

	AuctionItem* getBazaarItem(unsigned long long objectID);

	AuctionItem* getBazaarItem(int index);

	bool checkInStockroom(unsigned long long objectID);

};

class AuctionsMapHelper : public DistributedObjectClassHelper, public Singleton<AuctionsMapHelper> {
	static AuctionsMapHelper* staticInitializer;

public:
	AuctionsMapHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<AuctionsMapHelper>;
};

} // namespace auction
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::auction;

#endif /*AUCTIONSMAP_H_*/
