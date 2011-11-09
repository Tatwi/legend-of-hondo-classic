/*
 *	server/chat/PersistentMessage.cpp generated by engine3 IDL compiler 0.60
 */

#include "PersistentMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	PersistentMessageStub
 */

enum {RPC_SENDTO__CREATUREOBJECT_BOOL_ = 6,RPC_GETMAILID__,RPC_GETOBJECTID__,RPC_GETSENDERNAME__,RPC_GETRECEIVEROBJECTID__,RPC_GETSTATUS__,RPC_GETTIMESTAMP__,RPC_GETBODY__,RPC_GETSUBJECT__,RPC_SETSENDERNAME__STRING_,RPC_SETRECEIVEROBJECTID__LONG_,RPC_SETSTATUS__BYTE_,RPC_SETTIMESTAMP__INT_,RPC_SETBODY__UNICODESTRING_,RPC_SETSUBJECT__UNICODESTRING_,RPC_ISNEW__,RPC_ISREAD__,RPC_ISUNREAD__,};

PersistentMessage::PersistentMessage() : ManagedObject(DummyConstructorParameter::instance()) {
	PersistentMessageImplementation* _implementation = new PersistentMessageImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

PersistentMessage::PersistentMessage(DummyConstructorParameter* param) : ManagedObject(param) {
}

PersistentMessage::~PersistentMessage() {
}



void PersistentMessage::sendTo(CreatureObject* player, bool sendBody) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDTO__CREATUREOBJECT_BOOL_);
		method.addObjectParameter(player);
		method.addBooleanParameter(sendBody);

		method.executeWithVoidReturn();
	} else
		_implementation->sendTo(player, sendBody);
}

StringIdChatParameterVector* PersistentMessage::getStringIdParameters() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getStringIdParameters();
}

WaypointChatParameterVector* PersistentMessage::getWaypointParameters() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getWaypointParameters();
}

int PersistentMessage::getMailID() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMAILID__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMailID();
}

unsigned long long PersistentMessage::getObjectID() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECTID__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getObjectID();
}

String PersistentMessage::getSenderName() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSENDERNAME__);

		method.executeWithAsciiReturn(_return_getSenderName);
		return _return_getSenderName;
	} else
		return _implementation->getSenderName();
}

unsigned long long PersistentMessage::getReceiverObjectID() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRECEIVEROBJECTID__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getReceiverObjectID();
}

byte PersistentMessage::getStatus() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSTATUS__);

		return method.executeWithByteReturn();
	} else
		return _implementation->getStatus();
}

int PersistentMessage::getTimeStamp() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTIMESTAMP__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTimeStamp();
}

UnicodeString PersistentMessage::getBody() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBODY__);

		method.executeWithUnicodeReturn(_return_getBody);
		return _return_getBody;
	} else
		return _implementation->getBody();
}

UnicodeString PersistentMessage::getSubject() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSUBJECT__);

		method.executeWithUnicodeReturn(_return_getSubject);
		return _return_getSubject;
	} else
		return _implementation->getSubject();
}

void PersistentMessage::setSenderName(const String& name) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSENDERNAME__STRING_);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->setSenderName(name);
}

void PersistentMessage::setReceiverObjectID(unsigned long long oid) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETRECEIVEROBJECTID__LONG_);
		method.addUnsignedLongParameter(oid);

		method.executeWithVoidReturn();
	} else
		_implementation->setReceiverObjectID(oid);
}

void PersistentMessage::setStatus(byte stat) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSTATUS__BYTE_);
		method.addByteParameter(stat);

		method.executeWithVoidReturn();
	} else
		_implementation->setStatus(stat);
}

void PersistentMessage::setTimeStamp(int stamp) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTIMESTAMP__INT_);
		method.addSignedIntParameter(stamp);

		method.executeWithVoidReturn();
	} else
		_implementation->setTimeStamp(stamp);
}

void PersistentMessage::setBody(const UnicodeString& message) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBODY__UNICODESTRING_);
		method.addUnicodeParameter(message);

		method.executeWithVoidReturn();
	} else
		_implementation->setBody(message);
}

void PersistentMessage::setSubject(const UnicodeString& subj) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSUBJECT__UNICODESTRING_);
		method.addUnicodeParameter(subj);

		method.executeWithVoidReturn();
	} else
		_implementation->setSubject(subj);
}

bool PersistentMessage::isNew() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISNEW__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isNew();
}

bool PersistentMessage::isRead() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISREAD__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRead();
}

bool PersistentMessage::isUnread() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISUNREAD__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isUnread();
}

void PersistentMessage::addStringIdParameter(StringIdChatParameter& param) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->addStringIdParameter(param);
}

void PersistentMessage::addWaypointParameter(WaypointChatParameter& param) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->addWaypointParameter(param);
}

DistributedObjectServant* PersistentMessage::_getImplementation() {

	_updated = true;
	return _impl;
}

void PersistentMessage::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PersistentMessageImplementation
 */

PersistentMessageImplementation::PersistentMessageImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


PersistentMessageImplementation::~PersistentMessageImplementation() {
}


void PersistentMessageImplementation::finalize() {
}

void PersistentMessageImplementation::_initializeImplementation() {
	_setClassHelper(PersistentMessageHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PersistentMessageImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PersistentMessage*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PersistentMessageImplementation::_getStub() {
	return _this;
}

PersistentMessageImplementation::operator const PersistentMessage*() {
	return _this;
}

void PersistentMessageImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PersistentMessageImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PersistentMessageImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PersistentMessageImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PersistentMessageImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PersistentMessageImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PersistentMessageImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PersistentMessageImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("PersistentMessage");

}

void PersistentMessageImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(PersistentMessageImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PersistentMessageImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "senderName") {
		TypeInfo<String >::parseFromBinaryStream(&senderName, stream);
		return true;
	}

	if (_name == "subject") {
		TypeInfo<UnicodeString >::parseFromBinaryStream(&subject, stream);
		return true;
	}

	if (_name == "body") {
		TypeInfo<UnicodeString >::parseFromBinaryStream(&body, stream);
		return true;
	}

	if (_name == "timeStamp") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&timeStamp, stream);
		return true;
	}

	if (_name == "status") {
		TypeInfo<byte >::parseFromBinaryStream(&status, stream);
		return true;
	}

	if (_name == "receiverObjectID") {
		TypeInfo<unsigned long long >::parseFromBinaryStream(&receiverObjectID, stream);
		return true;
	}

	if (_name == "stringIdParameters") {
		TypeInfo<StringIdChatParameterVector >::parseFromBinaryStream(&stringIdParameters, stream);
		return true;
	}

	if (_name == "waypointParameters") {
		TypeInfo<WaypointChatParameterVector >::parseFromBinaryStream(&waypointParameters, stream);
		return true;
	}


	return false;
}

void PersistentMessageImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PersistentMessageImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PersistentMessageImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "senderName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&senderName, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "subject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<UnicodeString >::toBinaryStream(&subject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "body";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<UnicodeString >::toBinaryStream(&body, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "timeStamp";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&timeStamp, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "status";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<byte >::toBinaryStream(&status, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "receiverObjectID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned long long >::toBinaryStream(&receiverObjectID, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "stringIdParameters";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<StringIdChatParameterVector >::toBinaryStream(&stringIdParameters, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "waypointParameters";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<WaypointChatParameterVector >::toBinaryStream(&waypointParameters, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 8 + ManagedObjectImplementation::writeObjectMembers(stream);
}

PersistentMessageImplementation::PersistentMessageImplementation() {
	_initializeImplementation();
	// server/chat/PersistentMessage.idl():  		timeStamp = System.getTime();
	timeStamp = System::getTime();
	// server/chat/PersistentMessage.idl():  		status = NEW;
	status = NEW;
	// server/chat/PersistentMessage.idl():  		receiverObjectID = 0;
	receiverObjectID = 0;
}

StringIdChatParameterVector* PersistentMessageImplementation::getStringIdParameters() {
	// server/chat/PersistentMessage.idl():  		return stringIdParameters;
	return (&stringIdParameters);
}

WaypointChatParameterVector* PersistentMessageImplementation::getWaypointParameters() {
	// server/chat/PersistentMessage.idl():  		return waypointParameters;
	return (&waypointParameters);
}

String PersistentMessageImplementation::getSenderName() {
	// server/chat/PersistentMessage.idl():  		return senderName;
	return senderName;
}

unsigned long long PersistentMessageImplementation::getReceiverObjectID() {
	// server/chat/PersistentMessage.idl():  		return receiverObjectID;
	return receiverObjectID;
}

byte PersistentMessageImplementation::getStatus() {
	// server/chat/PersistentMessage.idl():  		return status;
	return status;
}

int PersistentMessageImplementation::getTimeStamp() {
	// server/chat/PersistentMessage.idl():  		return timeStamp;
	return timeStamp;
}

UnicodeString PersistentMessageImplementation::getBody() {
	// server/chat/PersistentMessage.idl():  		return body;
	return body;
}

UnicodeString PersistentMessageImplementation::getSubject() {
	// server/chat/PersistentMessage.idl():  		return subject;
	return subject;
}

void PersistentMessageImplementation::setSenderName(const String& name) {
	// server/chat/PersistentMessage.idl():  		senderName = name;
	senderName = name;
}

void PersistentMessageImplementation::setReceiverObjectID(unsigned long long oid) {
	// server/chat/PersistentMessage.idl():  		receiverObjectID = oid;
	receiverObjectID = oid;
}

void PersistentMessageImplementation::setStatus(byte stat) {
	// server/chat/PersistentMessage.idl():  		status = stat;
	status = stat;
}

void PersistentMessageImplementation::setTimeStamp(int stamp) {
	// server/chat/PersistentMessage.idl():  		timeStamp = stamp;
	timeStamp = stamp;
}

void PersistentMessageImplementation::setBody(const UnicodeString& message) {
	// server/chat/PersistentMessage.idl():  		body = message;
	body = message;
}

void PersistentMessageImplementation::setSubject(const UnicodeString& subj) {
	// server/chat/PersistentMessage.idl():  		subject = subj;
	subject = subj;
}

bool PersistentMessageImplementation::isNew() {
	// server/chat/PersistentMessage.idl():  		return status == NEW;
	return status == NEW;
}

bool PersistentMessageImplementation::isRead() {
	// server/chat/PersistentMessage.idl():  		return status == READ;
	return status == READ;
}

bool PersistentMessageImplementation::isUnread() {
	// server/chat/PersistentMessage.idl():  		return status == UNREAD;
	return status == UNREAD;
}

/*
 *	PersistentMessageAdapter
 */

PersistentMessageAdapter::PersistentMessageAdapter(PersistentMessage* obj) : ManagedObjectAdapter(obj) {
}

Packet* PersistentMessageAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_SENDTO__CREATUREOBJECT_BOOL_:
		sendTo(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getBooleanParameter());
		break;
	case RPC_GETMAILID__:
		resp->insertSignedInt(getMailID());
		break;
	case RPC_GETOBJECTID__:
		resp->insertLong(getObjectID());
		break;
	case RPC_GETSENDERNAME__:
		resp->insertAscii(getSenderName());
		break;
	case RPC_GETRECEIVEROBJECTID__:
		resp->insertLong(getReceiverObjectID());
		break;
	case RPC_GETSTATUS__:
		resp->insertByte(getStatus());
		break;
	case RPC_GETTIMESTAMP__:
		resp->insertSignedInt(getTimeStamp());
		break;
	case RPC_GETBODY__:
		resp->insertUnicode(getBody());
		break;
	case RPC_GETSUBJECT__:
		resp->insertUnicode(getSubject());
		break;
	case RPC_SETSENDERNAME__STRING_:
		setSenderName(inv->getAsciiParameter(_param0_setSenderName__String_));
		break;
	case RPC_SETRECEIVEROBJECTID__LONG_:
		setReceiverObjectID(inv->getUnsignedLongParameter());
		break;
	case RPC_SETSTATUS__BYTE_:
		setStatus(inv->getByteParameter());
		break;
	case RPC_SETTIMESTAMP__INT_:
		setTimeStamp(inv->getSignedIntParameter());
		break;
	case RPC_SETBODY__UNICODESTRING_:
		setBody(inv->getUnicodeParameter(_param0_setBody__UnicodeString_));
		break;
	case RPC_SETSUBJECT__UNICODESTRING_:
		setSubject(inv->getUnicodeParameter(_param0_setSubject__UnicodeString_));
		break;
	case RPC_ISNEW__:
		resp->insertBoolean(isNew());
		break;
	case RPC_ISREAD__:
		resp->insertBoolean(isRead());
		break;
	case RPC_ISUNREAD__:
		resp->insertBoolean(isUnread());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PersistentMessageAdapter::sendTo(CreatureObject* player, bool sendBody) {
	(static_cast<PersistentMessage*>(stub))->sendTo(player, sendBody);
}

int PersistentMessageAdapter::getMailID() {
	return (static_cast<PersistentMessage*>(stub))->getMailID();
}

unsigned long long PersistentMessageAdapter::getObjectID() {
	return (static_cast<PersistentMessage*>(stub))->getObjectID();
}

String PersistentMessageAdapter::getSenderName() {
	return (static_cast<PersistentMessage*>(stub))->getSenderName();
}

unsigned long long PersistentMessageAdapter::getReceiverObjectID() {
	return (static_cast<PersistentMessage*>(stub))->getReceiverObjectID();
}

byte PersistentMessageAdapter::getStatus() {
	return (static_cast<PersistentMessage*>(stub))->getStatus();
}

int PersistentMessageAdapter::getTimeStamp() {
	return (static_cast<PersistentMessage*>(stub))->getTimeStamp();
}

UnicodeString PersistentMessageAdapter::getBody() {
	return (static_cast<PersistentMessage*>(stub))->getBody();
}

UnicodeString PersistentMessageAdapter::getSubject() {
	return (static_cast<PersistentMessage*>(stub))->getSubject();
}

void PersistentMessageAdapter::setSenderName(const String& name) {
	(static_cast<PersistentMessage*>(stub))->setSenderName(name);
}

void PersistentMessageAdapter::setReceiverObjectID(unsigned long long oid) {
	(static_cast<PersistentMessage*>(stub))->setReceiverObjectID(oid);
}

void PersistentMessageAdapter::setStatus(byte stat) {
	(static_cast<PersistentMessage*>(stub))->setStatus(stat);
}

void PersistentMessageAdapter::setTimeStamp(int stamp) {
	(static_cast<PersistentMessage*>(stub))->setTimeStamp(stamp);
}

void PersistentMessageAdapter::setBody(const UnicodeString& message) {
	(static_cast<PersistentMessage*>(stub))->setBody(message);
}

void PersistentMessageAdapter::setSubject(const UnicodeString& subj) {
	(static_cast<PersistentMessage*>(stub))->setSubject(subj);
}

bool PersistentMessageAdapter::isNew() {
	return (static_cast<PersistentMessage*>(stub))->isNew();
}

bool PersistentMessageAdapter::isRead() {
	return (static_cast<PersistentMessage*>(stub))->isRead();
}

bool PersistentMessageAdapter::isUnread() {
	return (static_cast<PersistentMessage*>(stub))->isUnread();
}

/*
 *	PersistentMessageHelper
 */

PersistentMessageHelper* PersistentMessageHelper::staticInitializer = PersistentMessageHelper::instance();

PersistentMessageHelper::PersistentMessageHelper() {
	className = "PersistentMessage";

	Core::getObjectBroker()->registerClass(className, this);
}

void PersistentMessageHelper::finalizeHelper() {
	PersistentMessageHelper::finalize();
}

DistributedObject* PersistentMessageHelper::instantiateObject() {
	return new PersistentMessage(DummyConstructorParameter::instance());
}

DistributedObjectServant* PersistentMessageHelper::instantiateServant() {
	return new PersistentMessageImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PersistentMessageHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PersistentMessageAdapter(static_cast<PersistentMessage*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

