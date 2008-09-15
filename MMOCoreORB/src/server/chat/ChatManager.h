/*
 *	server/chat/ChatManager.h generated by engine3 IDL compiler 0.55
 */

#ifndef CHATMANAGER_H_
#define CHATMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/service/Message.h"

class ChatRoom;

class Player;

class ZoneServer;

class ChatManager : public DistributedObjectStub {
public:
	ChatManager(ZoneServer* server, int initPlayers);

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void addPlayer(Player* player);

	Player* getPlayer(string& name);

	Player* removePlayer(string& name);

	void sendMail(const string& sendername, unicode& header, unicode& body, const string& name);

	void sendMailBody(Player* receiver, unsigned int mailid);

	void listMail(Player* ply);

	void deleteMail(unsigned int mailid);

	void handleTellMessage(Player* player, Message* pack);

	void handleMessage(Player* player, Message* pack);

	void handleEmote(Player* player, Message* pack);

	void handleMood(Player* player, Message* pack);

	void sendSystemMessage(Player* player, unicode& message);

	void broadcastMessage(Player* player, unicode& message, unsigned long long target = 0, unsigned int moodid = 0, unsigned int mood2 = 0);

	void broadcastMessage(const string& message);

	void broadcastMessageRange(Player* player, const string& message, float range);

	void handleGameCommand(Player* player, const string& command);

	void initiateRooms();

	void handleChatRoomMessage(Player* player, Message* pack);

	void handleGroupChat(Player* player, Message* pack);

	void handleGuildChat(Player* player, Message* pack);

	void handleCreateRoom(Player* player, Message* pack);

	void handleChatEnterRoomById(Player* player, Message* pack);

	void handleChatDestroyRoom(Player* player, Message* pack);

	void handleChatRemoveAvatarFromRoom(Player* player, Message* pack);

	ChatRoom* getChatRoom(unsigned int id);

	void addRoom(ChatRoom* channel);

	void removeRoom(ChatRoom* channel);

	void sendRoomList(Player* player);

	ChatRoom* createGroupRoom(unsigned int groupID, Player* creator, bool mode);

	ChatRoom* createRoomByFullPath(const string& path);

	void destroyRoom(ChatRoom* room);

	void printRoomTree(ChatRoom* channel);

	ChatRoom* getChatRoomByFullPath(const string& path);

	ChatRoom* getGameRoom(const string& game);

	ChatRoom* getChatRoomByGamePath(ChatRoom* game, const string& path);

	unsigned int getNextRoomID();

	int getPlayerCount();

	bool isMute();

	void setMute(bool isMuted);

protected:
	ChatManager(DummyConstructorParameter* param);

	virtual ~ChatManager();

	friend class ChatManagerHelper;
};

class ChatManagerImplementation;

class ChatManagerAdapter : public DistributedObjectAdapter {
public:
	ChatManagerAdapter(ChatManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void lock(bool doLock);

	void unlock(bool doLock);

	void addPlayer(Player* player);

	Player* getPlayer(string& name);

	Player* removePlayer(string& name);

	void sendMail(const string& sendername, unicode& header, unicode& body, const string& name);

	void sendMailBody(Player* receiver, unsigned int mailid);

	void listMail(Player* ply);

	void deleteMail(unsigned int mailid);

	void handleTellMessage(Player* player, Message* pack);

	void handleMessage(Player* player, Message* pack);

	void handleEmote(Player* player, Message* pack);

	void handleMood(Player* player, Message* pack);

	void sendSystemMessage(Player* player, unicode& message);

	void broadcastMessage(Player* player, unicode& message, unsigned long long target, unsigned int moodid, unsigned int mood2);

	void broadcastMessage(const string& message);

	void broadcastMessageRange(Player* player, const string& message, float range);

	void handleGameCommand(Player* player, const string& command);

	void initiateRooms();

	void handleChatRoomMessage(Player* player, Message* pack);

	void handleGroupChat(Player* player, Message* pack);

	void handleGuildChat(Player* player, Message* pack);

	void handleCreateRoom(Player* player, Message* pack);

	void handleChatEnterRoomById(Player* player, Message* pack);

	void handleChatDestroyRoom(Player* player, Message* pack);

	void handleChatRemoveAvatarFromRoom(Player* player, Message* pack);

	ChatRoom* getChatRoom(unsigned int id);

	void addRoom(ChatRoom* channel);

	void removeRoom(ChatRoom* channel);

	void sendRoomList(Player* player);

	ChatRoom* createGroupRoom(unsigned int groupID, Player* creator, bool mode);

	ChatRoom* createRoomByFullPath(const string& path);

	void destroyRoom(ChatRoom* room);

	void printRoomTree(ChatRoom* channel);

	ChatRoom* getChatRoomByFullPath(const string& path);

	ChatRoom* getGameRoom(const string& game);

	ChatRoom* getChatRoomByGamePath(ChatRoom* game, const string& path);

	unsigned int getNextRoomID();

	int getPlayerCount();

	bool isMute();

	void setMute(bool isMuted);

protected:
	string _param0_getPlayer__string_;
	string _param0_removePlayer__string_;
	string _param0_sendMail__string_unicode_unicode_string_;
	unicode _param1_sendMail__string_unicode_unicode_string_;
	unicode _param2_sendMail__string_unicode_unicode_string_;
	string _param3_sendMail__string_unicode_unicode_string_;
	unicode _param1_sendSystemMessage__Player_unicode_;
	unicode _param1_broadcastMessage__Player_unicode_long_int_int_;
	string _param0_broadcastMessage__string_;
	string _param1_broadcastMessageRange__Player_string_float_;
	string _param1_handleGameCommand__Player_string_;
	string _param0_createRoomByFullPath__string_;
	string _param0_getChatRoomByFullPath__string_;
	string _param0_getGameRoom__string_;
	string _param1_getChatRoomByGamePath__ChatRoom_string_;
};

class ChatManagerHelper : public DistributedObjectClassHelper, public Singleton<ChatManagerHelper> {
	static ChatManagerHelper* staticInitializer;

public:
	ChatManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<ChatManagerHelper>;
};

class ChatManagerServant : public DistributedObjectServant {
public:
	ChatManager* _this;

public:
	ChatManagerServant();
	virtual ~ChatManagerServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*CHATMANAGER_H_*/
