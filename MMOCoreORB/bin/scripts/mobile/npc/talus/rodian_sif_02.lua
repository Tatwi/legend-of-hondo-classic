rodian_sif_02 = Creature:new {
	objectName = "",
	customName = "a rodian Sif",
	socialGroup = "Sif",
	pvpFaction = "Sif",
	faction = "",
	level = 45,
	chanceHit = 0.47,
	damageMin = 370,
	damageMax = 450,
	baseXp = 4461,
	baseHAM = 9700,
	baseHAMmax = 11900,
	armor = 0,
	resists = {40,40,0,-1,-1,0,-1,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + KILLER + STALKER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_talus_sif_mercenary_rodian_02.iff"},
	lootgroups = {},
	weapons = {"sif_weapons"},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(rodian_sif_02, "rodian_sif_02")