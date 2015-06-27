crazylarry_template = ConvoTemplate:new {
	initialScreen = "first_screen",
	templateType = "Lua",
	luaClassHandler = "crazylarry_convo_handler",
	screens = {}
}



crazylarry_first_screen = ConvoScreen:new {
	id = "first_screen",
	leftDialog = "",
	customDialogText = "Welcome to Crazy Larry's Luxury Landspeeders! Would you like to buy a vehicle?",
	stopConversation = "false",
	options = {
		{"XP-31 Landspeeder (6,000)", "xp31"},
		{"XP-34 Landspeeder (10,000)", "xp34"},
		{"Speederbike (15,000)", "speederbike"},
		{"Swoop Bike (25,000)", "swoop"},
		{"Flash Speeder (325,000)", "flash"},
		{"AV-21 Landspeeder (750,000)", "av21"},
		{"Customization Kit (250)", "kit"},
	}
}
crazylarry_template:addScreen(crazylarry_first_screen);


crazylarry_xp31 = ConvoScreen:new {
	id = "xp31",
	leftDialog = "",
	customDialogText = "Slow and steady... gets it done eventually, I guess.",
	stopConversation = "true",
	options = {	
	}
}
crazylarry_template:addScreen(crazylarry_xp31);


crazylarry_xp34 = ConvoScreen:new {
	id = "xp34",
	leftDialog = "",
	customDialogText = "Sure you're not interested in a set of rims for that?",
	stopConversation = "true",
	options = {	
	}
}
crazylarry_template:addScreen(crazylarry_xp34);


crazylarry_speederbike = ConvoScreen:new {
	id = "speederbike",
	leftDialog = "",
	customDialogText = "Enjoy that Speederbike!",
	stopConversation = "true",
	options = {	
	}
}
crazylarry_template:addScreen(crazylarry_speederbike);


crazylarry_swoop = ConvoScreen:new {
	id = "swoop",
	leftDialog = "",
	customDialogText = "Swoop! It even sounds fast!",
	stopConversation = "true",
	options = {	
	}
}
crazylarry_template:addScreen(crazylarry_swoop);


crazylarry_flash = ConvoScreen:new {
	id = "flash",
	leftDialog = "",
	customDialogText = "It may a little old, but it's in great shape and a real classic.",
	stopConversation = "true",
	options = {	
	}
}
crazylarry_template:addScreen(crazylarry_flash);


crazylarry_av21 = ConvoScreen:new {
	id = "av21",
	leftDialog = "",
	customDialogText = "You're going to love that AV-21! Come back any time!",
	stopConversation = "true",
	options = {	
	}
}
crazylarry_template:addScreen(crazylarry_av21);


crazylarry_deny_quest = ConvoScreen:new {
	id = "deny_quest",
	leftDialog = "",
	customDialogText = "Well, ya'll have a nice day. Ya hear!",
	stopConversation = "true",
	options = {	
	}
}
crazylarry_template:addScreen(crazylarry_deny_quest);


crazylarry_insufficient_funds = ConvoScreen:new {
	id = "insufficient_funds",
	leftDialog = "",
	customDialogText = "Sorry, but you don't have enough credits with you to purchase that. Head on over to the bank. I'll be here when ya get back!",
	stopConversation = "true",
	options = {	
	}
}
crazylarry_template:addScreen(crazylarry_insufficient_funds);


crazylarry_insufficient_space = ConvoScreen:new {
	id = "insufficient_space",
	leftDialog = "",
	customDialogText = "Sorry, but you don't have enough space in your inventory to accept the item. Please make some space and try again.",
	stopConversation = "true",
	options = {	
	}
}
crazylarry_template:addScreen(crazylarry_insufficient_space);


addConversationTemplate("crazylarry_template", crazylarry_template);