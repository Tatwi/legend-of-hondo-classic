proficient_jinda_worker = Creature:new {
	objectName = "@mob/creature_names:proficient_jinda_worker",
	socialGroup = "jinda_tribe",
	pvpFaction = "jinda_tribe",
	faction = "",
	level = 28,
	chanceHit = 0.36,
	damageMin = 240,
	damageMax = 250,
	baseXp = 2822,
	baseHAM = 7200,
	baseHAMmax = 8800,
	armor = 0,
	resists = {35,35,0,0,0,0,0,0,-1},
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
	creatureBitmask = PACK,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {
			"object/mobile/jinda_male.iff",
			"object/mobile/jinda_female.iff",
			"object/mobile/jinda_male_01.iff",
			"object/mobile/jinda_female_01.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(proficient_jinda_worker, "proficient_jinda_worker")