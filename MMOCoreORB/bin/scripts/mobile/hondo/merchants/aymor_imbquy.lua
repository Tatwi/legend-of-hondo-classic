aymor_imbquy = Creature:new {
	objectName = "@mob/creature_names:commoner",
	customName = "Aymor Imbquy (Housing Merchant)",
	socialGroup = "townsperson",
	pvpFaction = "townsperson",
	faction = "townsperson",
	level = 1,
	chanceHit = 0.25,
	damageMin = 50,
	damageMax = 55,
	baseXp = 113,
	baseHAM = 180,
	baseHAMmax = 220,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
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
	creatureBitmask = NONE,
	optionsBitmask = 264, --for conversation
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_commoner_fat_human_male_02.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "aymorimbquy_template",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(aymor_imbquy, "aymor_imbquy")
