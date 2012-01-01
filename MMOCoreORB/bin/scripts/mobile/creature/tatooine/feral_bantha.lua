feral_bantha = Creature:new {
	objectName = "@mob/creature_names:feral_bantha",
	socialGroup = "Bantha",
	pvpFaction = "",
	faction = "",
	level = 15,
	chanceHit = 0.31,
	damageMin = 170,
	damageMax = 180,
	baseXp = 960,
	baseHAM = 1200,
	baseHAMmax = 1400,
	armor = 0,
	resists = {5,10,5,30,-1,-1,-1,-1,-1},
	meatType = "meat_herbivore",
	meatAmount = 415,
	hideType = "hide_wooly",
	hideAmount = 305,
	boneType = "bone_mammal",
	boneAmount = 215,
	milk = 0,
	tamingChance = 0.25,
	ferocity = 2,
	pvpBitmask = AGGRESSIVE + ATTACKABLE,
	creatureBitmask = PACK + HERD + KILLER,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/bantha.iff"},
	lootgroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"dizzyattack","dizzyChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(feral_bantha, "feral_bantha")