event_nightsister_elder = Creature:new {
	objectName = "@mob/creature_names:nightsister_elder",
	customName = "a Nightsister elder (event)",
	socialGroup = "nightsister",
	pvpFaction = "nightsister",
	faction = "nightsister",
	level = 278,
	chanceHit = 272.5,
	damageMin = 1520,
	damageMax = 2750,
	baseXp = 0,
	baseHAM = 321000,
	baseHAMmax = 392000,
	armor = 3,
	resists = {100,25,25,100,100,100,100,100,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER + HEALER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_dathomir_nightsister_elder.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = merge(tkamaster,brawlermaster,forcewielder)
}

CreatureTemplates:addCreatureTemplate(event_nightsister_elder, "event_nightsister_elder")
