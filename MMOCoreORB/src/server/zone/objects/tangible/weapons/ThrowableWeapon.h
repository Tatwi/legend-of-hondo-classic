/*
 *	ThrowableWeapon.h generated by engine3 IDL compiler 0.55
 */

#ifndef THROWABLEWEAPON_H_
#define THROWABLEWEAPON_H_

#include "engine/orb/DistributedObjectBroker.h"

class CreatureObject;

class Player;

class RangedWeapon;

#include "RangedWeapon.h"

class ThrowableWeapon : public RangedWeapon {
public:
	ThrowableWeapon(unsigned long long oid, unsigned int tempCRC, const UnicodeString& n, const String& tempn, int tp, bool eqp = false);

	ThrowableWeapon(CreatureObject* creature, const String& temp, const UnicodeString& n, const String& tempn, int tp, bool eqp = false);

	void useCharge(Player* player);

	void remove(Player* player);

	int useObject(Player* player);

	void setSkill(const String& sk);

	bool isUsefull(Player* player);

	unsigned int getSkillCRC();

protected:
	ThrowableWeapon(DummyConstructorParameter* param);

	virtual ~ThrowableWeapon();

	friend class ThrowableWeaponHelper;
};

class ThrowableWeaponImplementation;

class ThrowableWeaponAdapter : public RangedWeaponAdapter {
public:
	ThrowableWeaponAdapter(ThrowableWeaponImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void useCharge(Player* player);

	void remove(Player* player);

	int useObject(Player* player);

	void setSkill(const String& sk);

	bool isUsefull(Player* player);

	unsigned int getSkillCRC();

protected:
	String _param0_setSkill__String_;
};

class ThrowableWeaponHelper : public DistributedObjectClassHelper, public Singleton<ThrowableWeaponHelper> {
	static ThrowableWeaponHelper* staticInitializer;

public:
	ThrowableWeaponHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<ThrowableWeaponHelper>;
};

#include "RangedWeaponImplementation.h"

class ThrowableWeaponServant : public RangedWeaponImplementation {
public:
	ThrowableWeapon* _this;

public:
	ThrowableWeaponServant(unsigned long long oid, unsigned int tempCRC, const UnicodeString& n, const String& tempn, int tp, bool eqp);
	ThrowableWeaponServant(CreatureObject* creature, const String& temp, const UnicodeString& n, const String& tempn, int tp, bool eqp);
	virtual ~ThrowableWeaponServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*THROWABLEWEAPON_H_*/
