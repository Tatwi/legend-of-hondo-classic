--Copyright (C) 2008 <SWGEmu>


--This File is part of Core3.

--This program is free software; you can redistribute 
--it and/or modify it under the terms of the GNU Lesser 
--General Public License as published by the Free Software
--Foundation; either version 2 of the License, 
--or (at your option) any later version.

--This program is distributed in the hope that it will be useful, 
--but WITHOUT ANY WARRANTY; without even the implied warranty of 
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
--See the GNU Lesser General Public License for
--more details.

--You should have received a copy of the GNU Lesser General 
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

--Linking Engine3 statically or dynamically with other modules 
--is making a combined work based on Engine3. 
--Thus, the terms and conditions of the GNU Lesser General Public License 
--cover the whole combination.

--In addition, as a special exception, the copyright holders of Engine3 
--give you permission to combine Engine3 program with free software 
--programs or libraries that are released under the GNU LGPL and with 
--code included in the standard release of Core3 under the GNU LGPL 
--license (or modified versions of such code, with unchanged license). 
--You may copy and distribute such a system following the terms of the 
--GNU LGPL for Engine3 and the licenses of the other code concerned, 
--provided that you include the source code of that other code when 
--and as the GNU LGPL requires distribution of source code.

--Note that people who make modified versions of Engine3 are not obligated 
--to grant this special exception for their modified versions; 
--it is their choice whether to do so. The GNU Lesser General Public License 
--gives permission to release a modified version without this exception; 
--this exception also makes it possible to release a modified version 
--which carries forward this exception.
verne = Creature:new {
	objectName = "verne",  -- Lua Object Name
	creatureType = "ANIMAL",
	faction = "Verne",
	gender = "",

	speciesName = "verne",
	stfName = "mob/creature_names",
	objectCRC = 1915375945, 
	socialGroup = "Verne",
	

	level = 17,
	

	ATTACKABLE_FLAG + ENEMY_FLAG + AGGRESSIVE_FLAG,

	healthMax = 4300,
	healthMin = 3500,
	strength = 500,
	constitution = 500,

	actionMax = 4300,
	actionMin = 3500,
	quickness = 500,
	stamina = 500,

	mindMax = 4300,
	mindMin = 3500,
	focus = 500,
	willpower = 500,

	height = 1, -- Size of creature
	armor = 1, -- 0 = None; 1 = Light; 2 = Medium; 3 = Heavy
	kinetic = 0,
	energy = 0,
	electricity = 25,
	stun = -1,
	blast = 0,
	heat = -1,
	cold = -1,
	acid = 25,
	lightsaber = 0,

	accuracy = 200,

	healer = 0,

	pack = 1,
	herd = 1,
	stalker = 0,
	killer = 0,
	aggressive = 0,
	invincible = 0, 

	meleeDefense = 1,  
	rangedDefense = 1,

	attackCreatureOnSight = "", -- Enter socialGroups 

	weapon = "", -- File path to weapon -> object\xxx\xxx\xx
	weaponName = "", -- Name ex. 'a Vibrolance'
	weaponTemp = "", -- Weapon Template ex. 'lance_vibrolance'
	weaponClass = "", -- Weapon Class ex. 'PolearmMeleeWeapon'
	weaponEquipped = 0,
	weaponMinDamage = 0,
	weaponMaxDamage = 0,
	weaponAttackSpeed = 0,
	weaponDamageType = "", -- ELECTRICITY, KINETIC, etc
	weaponArmorPiercing = "", -- LIGHT, NONE, MEDIUM, HEAVY

	alternateWeapon = "", -- File path to weapon -> object\xxx\xxx\xx
	alternateWeaponName = "", -- Name ex. 'a Vibrolance'
	alternateWeaponTemp = "", -- Weapon Template ex. 'lance_vibrolance'
	alternateWeaponClass = "", -- Weapon Class ex. 'PolearmMeleeWeapon'
	alternateWeaponEquipped = 0,
	alternateWeaponMinDamage = 0,
	alternateWeaponMaxDamage = 0,
	alternateWeaponAttackSpeed = 0,
	alternateWeaponDamageType = "", -- ELECTRICITY, KINETIC, etc
	alternateWeaponArmorPiercing = "", -- LIGHT, NONE, MEDIUM, HEAVY

	internalNPCDamageModifier = 0.3, -- Damage Modifier to other NPC's

	lootGroup = "0", -- Group it belongs to for loot

	tame = 0.25,  -- Likely hood to be tamed

	milk = 0,

	boneType = "bone_mammal_dathomir",
	boneMax = 80,

	hideType = "hide_leathery_dathomir",
	hideMax = 90,

	meatType = "meat_herbivore_dathomir",
	meatMax = 125,

	skills = { "verneAttack1" },
	respawnTimer = 60,

	behaviorScript = "", -- Link to the behavior script for this object
}

Creatures:addCreature(verne, 1915375945) --  Add to Global Table
