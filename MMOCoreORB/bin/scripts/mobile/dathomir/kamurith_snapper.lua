kamurith_snapper = Creature:new {
	objectName = "@mob/creature_names:kamurith_snapper",
	socialGroup = "kamurith",
	faction = "",
	level = 44,
	chanceHit = 0.46,
	damageMin = 405,
	damageMax = 520,
	baseXp = 4370,
	baseHAM = 8900,
	baseHAMmax = 10900,
	armor = 0,
	resists = {30,30,30,30,30,30,30,30,-1},
	meatType = "meat_carnivore",
	meatAmount = 90,
	hideType = "hide_leathery",
	hideAmount = 65,
	boneType = "bone_avian",
	boneAmount = 50,
	milk = 0,
	tamingChance = 0,
	ferocity = 2,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/voritor_lizard_hue.iff"},
	scale = 1.1,
	lootGroups = {		{			groups = {				{group = "junk", chance = 7000000},				{group = "wearables_common", chance = 3000000},				{group = "weapons_all", chance = 1000000},			},		}	},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"dizzyattack",""},
		{"stunattack",""}
	}
}

CreatureTemplates:addCreatureTemplate(kamurith_snapper, "kamurith_snapper")
