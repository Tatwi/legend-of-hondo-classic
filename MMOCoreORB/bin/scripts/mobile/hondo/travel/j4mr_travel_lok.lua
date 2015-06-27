j4mr_travel_lok = Creature:new {
	objectName = "@mob/creature_names:j4mr",
	customName = "JAM-R (Lokian Travel Minion)",
	socialGroup = "townsperson",
	faction = "townsperson",
	level = 4,
	chanceHit = 0.24,
	damageMin = 40,
	damageMax = 45,
	baseXp = 62,
	baseHAM = 113,
	baseHAMmax = 138,
	armor = 0,
	resists = {15,15,15,15,15,15,15,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = HERD,
	optionsBitmask = 264, --for conversation
	diet = HERBIVORE,

	templates = {
		"object/mobile/r5.iff"
	},		
	lootGroups = {},
	weapons = {},
	conversationTemplate = "j4mrlok_template",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(j4mr_travel_lok, "j4mr_travel_lok")
