/*
 *	server/zone/managers/account/AccountManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "AccountManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/ZoneClientSession.h"

/*
 *	AccountManagerStub
 */

AccountManager::AccountManager(ZoneServer* zserv) : ManagedObject(DummyConstructorParameter::instance()) {
	AccountManagerImplementation* _implementation = new AccountManagerImplementation(zserv);
	_impl = _implementation;
	_impl->_setStub(this);
}

AccountManager::AccountManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

AccountManager::~AccountManager() {
}


void AccountManager::registerSession(ZoneClientSession* client) {
	AccountManagerImplementation* _implementation = (AccountManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(client);

		method.executeWithVoidReturn();
	} else
		_implementation->registerSession(client);
}

void AccountManager::unregisterSession(ZoneClientSession* client) {
	AccountManagerImplementation* _implementation = (AccountManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(client);

		method.executeWithVoidReturn();
	} else
		_implementation->unregisterSession(client);
}

int AccountManager::getOnlineCharactersPerAccount() {
	AccountManagerImplementation* _implementation = (AccountManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getOnlineCharactersPerAccount();
}

void AccountManager::setOnlineCharactersPerAccount(int total) {
	AccountManagerImplementation* _implementation = (AccountManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addSignedIntParameter(total);

		method.executeWithVoidReturn();
	} else
		_implementation->setOnlineCharactersPerAccount(total);
}

int AccountManager::getTotalOnlineCharacters(unsigned int accountid) {
	AccountManagerImplementation* _implementation = (AccountManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedIntParameter(accountid);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTotalOnlineCharacters(accountid);
}

DistributedObjectServant* AccountManager::_getImplementation() {
	return _impl;}

void AccountManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	AccountManagerImplementation
 */

AccountManagerImplementation::AccountManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


AccountManagerImplementation::~AccountManagerImplementation() {
}


void AccountManagerImplementation::finalize() {
}

void AccountManagerImplementation::_initializeImplementation() {
	_setClassHelper(AccountManagerHelper::instance());

	_serializationHelperMethod();
}

void AccountManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (AccountManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* AccountManagerImplementation::_getStub() {
	return _this;
}

AccountManagerImplementation::operator const AccountManager*() {
	return _this;
}

void AccountManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void AccountManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void AccountManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void AccountManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void AccountManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void AccountManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void AccountManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void AccountManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("AccountManager");

	addSerializableVariable("onlineCharactersPerAccount", &onlineCharactersPerAccount);
	addSerializableVariable("accountMap", &accountMap);
}

AccountManagerImplementation::AccountManagerImplementation(ZoneServer* zserv) {
	_initializeImplementation();
	// server/zone/managers/account/AccountManager.idl(20):  		Logger.setLoggingName("AccountManager");
	Logger::setLoggingName("AccountManager");
	// server/zone/managers/account/AccountManager.idl(21):  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/account/AccountManager.idl(22):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/account/AccountManager.idl(24):  		accountMap.setNullValue(null);
	(&accountMap)->setNullValue(NULL);
	// server/zone/managers/account/AccountManager.idl(25):  		accountMap.setNoDuplicateInsertPlan();
	(&accountMap)->setNoDuplicateInsertPlan();
	// server/zone/managers/account/AccountManager.idl(27):  		zoneServer = zserv;
	zoneServer = zserv;
	// server/zone/managers/account/AccountManager.idl(29):  		onlineCharactersPerAccount = 1;
	onlineCharactersPerAccount = 1;
}

int AccountManagerImplementation::getOnlineCharactersPerAccount() {
	// server/zone/managers/account/AccountManager.idl(47):  		return onlineCharactersPerAccount;
	return onlineCharactersPerAccount;
}

void AccountManagerImplementation::setOnlineCharactersPerAccount(int total) {
	// server/zone/managers/account/AccountManager.idl(51):  		onlineCharactersPerAccount = total;
	onlineCharactersPerAccount = total;
}

/*
 *	AccountManagerAdapter
 */

AccountManagerAdapter::AccountManagerAdapter(AccountManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* AccountManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		registerSession((ZoneClientSession*) inv->getObjectParameter());
		break;
	case 7:
		unregisterSession((ZoneClientSession*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertSignedInt(getOnlineCharactersPerAccount());
		break;
	case 9:
		setOnlineCharactersPerAccount(inv->getSignedIntParameter());
		break;
	case 10:
		resp->insertSignedInt(getTotalOnlineCharacters(inv->getUnsignedIntParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void AccountManagerAdapter::registerSession(ZoneClientSession* client) {
	((AccountManagerImplementation*) impl)->registerSession(client);
}

void AccountManagerAdapter::unregisterSession(ZoneClientSession* client) {
	((AccountManagerImplementation*) impl)->unregisterSession(client);
}

int AccountManagerAdapter::getOnlineCharactersPerAccount() {
	return ((AccountManagerImplementation*) impl)->getOnlineCharactersPerAccount();
}

void AccountManagerAdapter::setOnlineCharactersPerAccount(int total) {
	((AccountManagerImplementation*) impl)->setOnlineCharactersPerAccount(total);
}

int AccountManagerAdapter::getTotalOnlineCharacters(unsigned int accountid) {
	return ((AccountManagerImplementation*) impl)->getTotalOnlineCharacters(accountid);
}

/*
 *	AccountManagerHelper
 */

AccountManagerHelper* AccountManagerHelper::staticInitializer = AccountManagerHelper::instance();

AccountManagerHelper::AccountManagerHelper() {
	className = "AccountManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void AccountManagerHelper::finalizeHelper() {
	AccountManagerHelper::finalize();
}

DistributedObject* AccountManagerHelper::instantiateObject() {
	return new AccountManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* AccountManagerHelper::instantiateServant() {
	return new AccountManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* AccountManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AccountManagerAdapter((AccountManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

