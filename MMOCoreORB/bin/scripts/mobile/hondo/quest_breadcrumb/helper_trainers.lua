helper_trainers = Creature:new {
	objectName = "@mob/creature_names:artisan",
	customName = "Wherma Traynr (Quest)",
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

	templates = {"object/mobile/dressed_borvos_soldier.iff"},
				
	lootGroups = {},
	weapons = {},
	conversationTemplate = "helpertrainers_template",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(helper_trainers, "helper_trainers")
