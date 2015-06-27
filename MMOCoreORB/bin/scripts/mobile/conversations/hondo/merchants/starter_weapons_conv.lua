starterweapons_template = ConvoTemplate:new {
	initialScreen = "first_screen",
	templateType = "Lua",
	luaClassHandler = "starterweapons_convo_handler",
	screens = {}
}


starterweapons_first_screen = ConvoScreen:new {
	id = "first_screen",
	leftDialog = "",
	customDialogText = "M'um m'aloo. You want to buy a weapon? Have a look at these.",
	stopConversation = "false",
	options = {
		{"Starter Weapons", "starter"},
		{"Advanced Weapons", "advanced"},
	}
}
starterweapons_template:addScreen(starterweapons_first_screen);

-- Categories
starterweapons_starter = ConvoScreen:new {
	id = "starter",
	leftDialog = "",
	customDialogText = "Here are some basic weapons.",
	stopConversation = "false",
	options = {
		{"CDEF Pistol (250)", "s_pistol"},
		{"CDEF Carbine (250)", "s_carbine"},
		{"CDEF Rifle (250)", "s_rifle"},
		{"Stone Knife (50)", "s_stoneknife"},
		{"Survival Knife (75)", "s_survivalknife"},
		{"Heavy Axe (125)", "s_axe"},
		{"Wood Staff (90)", "s_staff"},
	}
}
starterweapons_template:addScreen(starterweapons_starter);


starterweapons_advanced = ConvoScreen:new {
	id = "advanced",
	leftDialog = "",
	customDialogText = "These weapons are for advanced professions.  Only 12,000 credits each! They're alright to get you started, but if you were Weaponsmith you could craft weapons better suited for more difficult situations.",
	stopConversation = "false",
	options = {
		{"Bounty Hunter - Light Lightning Cannon", "bounty_hunter"},
		{"Carbineer - Laser Carbine", "carbineer"},
		{"Commando - Launcher Pistol", "commando"},
		{"Fencer - Ryyk Blade", "fencer"},
		{"Rifleman - Laser Rifle", "rifleman"},
		{"Pikeman - Long Vibro Axe", "pikeman"},
		{"Pistoleer - Republic Blaster", "pistoleer"},
		{"Swordsman - Vibro Axe", "swordsman"},
		{"Teras Kasi Artist - Vibro Knuckler", "tka"},
		{"Hey, what are you trying to push on me?", "deny_quest"},
	}
}
starterweapons_template:addScreen(starterweapons_advanced);




-- Generic Replies

starterweapons_thank_you = ConvoScreen:new {
	id = "thank_you",
	leftDialog = "",
	customDialogText = "Taa baa, Ubanya!",
	stopConversation = "true",
	options = {	
	}
}
starterweapons_template:addScreen(starterweapons_thank_you);


starterweapons_deny_quest = ConvoScreen:new {
	id = "deny_quest",
	leftDialog = "",
	customDialogText = "Bom'loo Keeza, Eyeta. Mambay, Ubanya!",
	stopConversation = "true",
	options = {	
	}
}
starterweapons_template:addScreen(starterweapons_deny_quest);


starterweapons_insufficient_funds = ConvoScreen:new {
	id = "insufficient_funds",
	leftDialog = "",
	customDialogText = "Sorry, but you don't have enough credits with you to purchase that. Head on over to the bank. I'll be here when ya get back!",
	stopConversation = "true",
	options = {	
	}
}
starterweapons_template:addScreen(starterweapons_insufficient_funds);


starterweapons_insufficient_space = ConvoScreen:new {
	id = "insufficient_space",
	leftDialog = "",
	customDialogText = "Sorry, but you don't have enough space in your inventory to accept the item. Please make some space and try again.",
	stopConversation = "true",
	options = {	
	}
}
starterweapons_template:addScreen(starterweapons_insufficient_space);


addConversationTemplate("starterweapons_template", starterweapons_template);