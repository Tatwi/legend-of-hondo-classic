gurk_gatherer = Creature:new {
	objectName = "@mob/creature_names:gurk_gatherer",
	socialGroup = "gurk",
	faction = "",
	level = 30,
	chanceHit = 0.37,
	damageMin = 270,
	damageMax = 280,
	baseXp = 3005,
	baseHAM = 8200,
	baseHAMmax = 10000,
	armor = 0,
	resists = {135,130,15,15,15,15,140,15,-1},
	meatType = "meat_herbivore",
	meatAmount = 350,
	hideType = "hide_leathery",
	hideAmount = 275,
	boneType = "bone_mammal",
	boneAmount = 300,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/gurk.iff"},
	scale = 1.05,
	lootGroups = {		{			groups = {				{group = "junk", chance = 10000000},			}		}	},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"posturedownattack",""},
		{"stunattack",""}
	}
}

CreatureTemplates:addCreatureTemplate(gurk_gatherer, "gurk_gatherer")
