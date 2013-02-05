swirl_prong_pack_leader = Creature:new {
	objectName = "@mob/creature_names:swirl_prong_pack_leader",
	socialGroup = "prong",
	pvpFaction = "",
	faction = "",
	level = 32,
	chanceHit = 0.4,
	damageMin = 305,
	damageMax = 320,
	baseXp = 3188,
	baseHAM = 8600,
	baseHAMmax = 10500,
	armor = 1,
	resists = {35,15,15,15,-1,-1,-1,15,-1},
	meatType = "meat_herbivore",
	meatAmount = 0,
	hideType = "hide_leathery",
	hideAmount = 0,
	boneType = "bone_mammal",
	boneAmount = 0,
	milk = 1,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + HERD,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/swirl_prong_hue.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(swirl_prong_pack_leader, "swirl_prong_pack_leader")