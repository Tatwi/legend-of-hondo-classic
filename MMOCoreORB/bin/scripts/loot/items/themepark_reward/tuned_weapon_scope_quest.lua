

tuned_weapon_scope_quest = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/tangible/component/weapon/scope_weapon_advanced_quest.iff",
	craftingValues = {
		{"woundchance",20,20,0},
		{"midrangemod",25,25,0},
		{"attackhealthcost",25,25,0},
		{"attackactioncost",25,25,0},
		{"attackmindcost",20,20,0},
		{"useCount",2,10,0},
		{"hitpoints",0,0,0},
	},
	customizationStringNames = {},
	customizationValues = {},	junkDealerTypeNeeded = JUNKGENERIC,	junkMinValue = 50,	junkMaxValue = 500,
}

addLootItemTemplate("tuned_weapon_scope_quest", tuned_weapon_scope_quest)
