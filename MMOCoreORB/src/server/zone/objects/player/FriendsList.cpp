/*
 *	server/zone/objects/player/FriendsList.cpp generated by engine3 IDL compiler 0.55
 */

#include "FriendsList.h"

#include "FriendsListImplementation.h"

#include "Player.h"

#include "../../managers/player/PlayerManager.h"

#include "PlayerObject.h"

/*
 *	FriendsListStub
 */

FriendsList::FriendsList(Player* player) {
	_impl = new FriendsListImplementation(player);
	_impl->_setStub(this);
}

FriendsList::FriendsList(DummyConstructorParameter* param) {
	_impl = NULL;
}

FriendsList::~FriendsList() {
}

void FriendsList::addFriend(string& name, string& inServer) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addAsciiParameter(name);
		method.addAsciiParameter(inServer);

		method.executeWithVoidReturn();
	} else
		((FriendsListImplementation*) _impl)->addFriend(name, inServer);
}

void FriendsList::friendsMagicNumberReset() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((FriendsListImplementation*) _impl)->friendsMagicNumberReset();
}

void FriendsList::removeFriend(string& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((FriendsListImplementation*) _impl)->removeFriend(name);
}

void FriendsList::findFriend(string& name, PlayerManager* playerManager) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(name);
		method.addObjectParameter(playerManager);

		method.executeWithVoidReturn();
	} else
		((FriendsListImplementation*) _impl)->findFriend(name, playerManager);
}

void FriendsList::saveFriends() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((FriendsListImplementation*) _impl)->saveFriends();
}

void FriendsList::loadFriends() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((FriendsListImplementation*) _impl)->loadFriends();
}

void FriendsList::updateAllFriends(PlayerObject* playerObject) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(playerObject);

		method.executeWithVoidReturn();
	} else
		((FriendsListImplementation*) _impl)->updateAllFriends(playerObject);
}

void FriendsList::toString() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((FriendsListImplementation*) _impl)->toString();
}

int FriendsList::getCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithSignedIntReturn();
	} else
		return ((FriendsListImplementation*) _impl)->getCount();
}

int FriendsList::getMagicNumber() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithSignedIntReturn();
	} else
		return ((FriendsListImplementation*) _impl)->getMagicNumber();
}

string& FriendsList::getFriendsName(const int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(i);

		method.executeWithAsciiReturn(_return_getFriendsName);
		return _return_getFriendsName;
	} else
		return ((FriendsListImplementation*) _impl)->getFriendsName(i);
}

string& FriendsList::getFriendsServer(const int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(i);

		method.executeWithAsciiReturn(_return_getFriendsServer);
		return _return_getFriendsServer;
	} else
		return ((FriendsListImplementation*) _impl)->getFriendsServer(i);
}

/*
 *	FriendsListAdapter
 */

FriendsListAdapter::FriendsListAdapter(FriendsListImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* FriendsListAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		addFriend(inv->getAsciiParameter(_param0_addFriend__string_string_), inv->getAsciiParameter(_param1_addFriend__string_string_));
		break;
	case 7:
		friendsMagicNumberReset();
		break;
	case 8:
		removeFriend(inv->getAsciiParameter(_param0_removeFriend__string_));
		break;
	case 9:
		findFriend(inv->getAsciiParameter(_param0_findFriend__string_PlayerManager_), (PlayerManager*) inv->getObjectParameter());
		break;
	case 10:
		saveFriends();
		break;
	case 11:
		loadFriends();
		break;
	case 12:
		updateAllFriends((PlayerObject*) inv->getObjectParameter());
		break;
	case 13:
		toString();
		break;
	case 14:
		resp->insertSignedInt(getCount());
		break;
	case 15:
		resp->insertSignedInt(getMagicNumber());
		break;
	case 16:
		resp->insertAscii(getFriendsName(inv->getSignedIntParameter()));
		break;
	case 17:
		resp->insertAscii(getFriendsServer(inv->getSignedIntParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void FriendsListAdapter::addFriend(string& name, string& inServer) {
	return ((FriendsListImplementation*) impl)->addFriend(name, inServer);
}

void FriendsListAdapter::friendsMagicNumberReset() {
	return ((FriendsListImplementation*) impl)->friendsMagicNumberReset();
}

void FriendsListAdapter::removeFriend(string& name) {
	return ((FriendsListImplementation*) impl)->removeFriend(name);
}

void FriendsListAdapter::findFriend(string& name, PlayerManager* playerManager) {
	return ((FriendsListImplementation*) impl)->findFriend(name, playerManager);
}

void FriendsListAdapter::saveFriends() {
	return ((FriendsListImplementation*) impl)->saveFriends();
}

void FriendsListAdapter::loadFriends() {
	return ((FriendsListImplementation*) impl)->loadFriends();
}

void FriendsListAdapter::updateAllFriends(PlayerObject* playerObject) {
	return ((FriendsListImplementation*) impl)->updateAllFriends(playerObject);
}

void FriendsListAdapter::toString() {
	return ((FriendsListImplementation*) impl)->toString();
}

int FriendsListAdapter::getCount() {
	return ((FriendsListImplementation*) impl)->getCount();
}

int FriendsListAdapter::getMagicNumber() {
	return ((FriendsListImplementation*) impl)->getMagicNumber();
}

string& FriendsListAdapter::getFriendsName(const int i) {
	return ((FriendsListImplementation*) impl)->getFriendsName(i);
}

string& FriendsListAdapter::getFriendsServer(const int i) {
	return ((FriendsListImplementation*) impl)->getFriendsServer(i);
}

/*
 *	FriendsListHelper
 */

FriendsListHelper* FriendsListHelper::staticInitializer = FriendsListHelper::instance();

FriendsListHelper::FriendsListHelper() {
	className = "FriendsList";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void FriendsListHelper::finalizeHelper() {
	FriendsListHelper::finalize();
}

DistributedObject* FriendsListHelper::instantiateObject() {
	return new FriendsList(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FriendsListHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FriendsListAdapter((FriendsListImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	FriendsListServant
 */

FriendsListServant::FriendsListServant() {
	_classHelper = FriendsListHelper::instance();
}

FriendsListServant::~FriendsListServant() {
}

void FriendsListServant::_setStub(DistributedObjectStub* stub) {
	_this = (FriendsList*) stub;
}

DistributedObjectStub* FriendsListServant::_getStub() {
	return _this;
}

