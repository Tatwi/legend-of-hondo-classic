diseased_vrelt = Creature:new {
	objectName = "@mob/creature_names:diseased_vrelt",
	socialGroup = "Vrelt",
	pvpFaction = "",
	faction = "",
	level = 8,
	chanceHit = 0.27,
	damageMin = 70,
	damageMax = 75,
	baseXp = 187,
	baseHAM = 405,
	baseHAMmax = 495,
	armor = 0,
	resists = {0,0,0,0,0,0,10,-1,-1},
	meatType = "meat_wild",
	meatAmount = 4,
	hideType = "hide_leathery",
	hideAmount = 3,
	boneType = "bone_mammal",
	boneAmount = 2,
	milk = 0,
	tamingChance = 0.25,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE,
	creatureBitmask = NONE,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/vrelt.iff"},
	lootgroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"milddisease",""}
	}
}

CreatureTemplates:addCreatureTemplate(diseased_vrelt, "diseased_vrelt")