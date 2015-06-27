startergear_template = ConvoTemplate:new {
	initialScreen = "first_screen",
	templateType = "Lua",
	luaClassHandler = "startergear_convo_handler",
	screens = {}
}



startergear_first_screen = ConvoScreen:new {
	id = "first_screen",
	leftDialog = "",
	customDialogText = "The galaxy is a rough place. I've got some of the things you'll need to get started.",
	stopConversation = "false",
	options = {
		{"Tools and Vehicles", "tools"},
		{"Basic Armor", "armor"},
		{"Buildings", "structures"},
	}
}
startergear_template:addScreen(startergear_first_screen);


-- Categories

startergear_armor = ConvoScreen:new {
	id = "armor",
	leftDialog = "",
	customDialogText = "These are full sets of very basic armor. Only 10,000 each! As an Armorsmith, you could craft better.",
	stopConversation = "false",
	options = {
		{"Starter Armor - Ithorians", "ithorian_armor"},
		{"Starter Armor - Wookiees", "wookiee_armor"},
		{"Starter Armor - Everyone Else!", "human_armor"},
	}
}
startergear_template:addScreen(startergear_armor);


startergear_tools = ConvoScreen:new {
	id = "tools",
	leftDialog = "",
	customDialogText = "Some things you need, some things you don't!",
	stopConversation = "false",
	options = {
		{"Generic Crafting Tool (25)", "tool_generic"},
		{"Food and Medical Crafting Tool (75)", "tool_food"},
		{"Mineral Survey Tool (50)", "survey_mineral"},
		{"Chemical Survey Tool(50)", "survey_chemical"},
		{"Slitherhorn (25)", "instrument_slitherhorn"},
		{"Fanfar (75)", "instrument_fanfar"},
		{"X-31 Landpseeder (6,000)", "x31"},
	}
}
startergear_template:addScreen(startergear_tools);


startergear_structures = ConvoScreen:new {
	id = "structures",
	leftDialog = "",
	customDialogText = "All buildings have a maintance.Factories and harvesters require power while they are operating. As an Architect you could craft many buildings, tools, and furnature.",
	stopConversation = "false",
	options = {	
		{"Small Generic House (18,000)", "house_small"},
		{"Equipment Factory (125,000)", "factory_equipment"},
		{"Food Factory (125,000)", "factory_food"},
		{"Clothing Factory (125,000)", "factory_clothing"},
		{"Structure Factory (125,000)", "factory_structure"},
	}
}
startergear_template:addScreen(startergear_structures);


-- Items

startergear_test = ConvoScreen:new {
	id = "test",
	leftDialog = "",
	customDialogText = "This was a test.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(test_x31);


startergear_x31 = ConvoScreen:new {
	id = "x31",
	leftDialog = "",
	customDialogText = "Remember, as an Artisan you can craft more advanced vehicles of better quality.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_x31);


startergear_tool_generic = ConvoScreen:new {
	id = "tool_generic",
	leftDialog = "",
	customDialogText = "Remember, as an Artisan you can craft more advanced tools of better quality.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_tool_generic);


startergear_tool_food = ConvoScreen:new {
	id = "tool_food",
	leftDialog = "",
	customDialogText = "Remember, as an Artisan you can craft more advanced tools of better quality.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_tool_food);


startergear_survey_mineral = ConvoScreen:new {
	id = "survey_mineral",
	leftDialog = "",
	customDialogText = "In case you didn't know, you can use the tool's radial menu to increase its range as your Survey skill improves.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_survey_mineral);


startergear_survey_chemical = ConvoScreen:new {
	id = "survey_chemical",
	leftDialog = "",
	customDialogText = "In case you didn't know, you can use the tool's radial menu to increase its range as your Survey skill improves.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_survey_chemical);


startergear_instrument_slitherhorn = ConvoScreen:new {
	id = "instrument_slitherhorn",
	leftDialog = "",
	customDialogText = "There are many instruments that you can craft using a Generic Crafting Tool.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_instrument_slitherhorn);


startergear_instrument_fanfar = ConvoScreen:new {
	id = "instrument_fanfar",
	leftDialog = "",
	customDialogText = "There are many instruments that you can craft using a Generic Crafting Tool.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_instrument_fanfar);


startergear_house_small = ConvoScreen:new {
	id = "house_small",
	leftDialog = "",
	customDialogText = "Remember, as an Architect you can craft huge variety of housing and decor!",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_house_small);


startergear_factory_equipment = ConvoScreen:new {
	id = "factory_equipment",
	leftDialog = "",
	customDialogText = "Remember, as an Architect you can craft your own factories for less money, once you have collected all the resources.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_factory_equipment);


startergear_factory_food = ConvoScreen:new {
	id = "factory_food",
	leftDialog = "",
	customDialogText = "Remember, as an Architect you can craft your own factories for less money, once you have collected all the resources.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_factory_food);


startergear_factory_clothing = ConvoScreen:new {
	id = "factory_clothing",
	leftDialog = "",
	customDialogText = "Remember, as an Architect you can craft your own factories for less money, once you have collected all the resources.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_factory_clothing);


startergear_factory_structure = ConvoScreen:new {
	id = "factory_structure",
	leftDialog = "",
	customDialogText = "Remember, as an Architect you can craft your own factories for less money, once you have collected all the resources.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_factory_structure);



-- Generic Replies

startergear_thank_you = ConvoScreen:new {
	id = "thank_you",
	leftDialog = "",
	customDialogText = "Thank you, come again!",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_thank_you);


startergear_deny_quest = ConvoScreen:new {
	id = "deny_quest",
	leftDialog = "",
	customDialogText = "Have a great day!",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_deny_quest);


startergear_insufficient_funds = ConvoScreen:new {
	id = "insufficient_funds",
	leftDialog = "",
	customDialogText = "Sorry, but you don't have enough credits with you to purchase that. Head on over to the bank. I'll be here when ya get back!",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_insufficient_funds);


startergear_insufficient_space = ConvoScreen:new {
	id = "insufficient_space",
	leftDialog = "",
	customDialogText = "Sorry, but you don't have enough space in your inventory to accept the item. Please make some space and try again.",
	stopConversation = "true",
	options = {	
	}
}
startergear_template:addScreen(startergear_insufficient_space);


addConversationTemplate("startergear_template", startergear_template);