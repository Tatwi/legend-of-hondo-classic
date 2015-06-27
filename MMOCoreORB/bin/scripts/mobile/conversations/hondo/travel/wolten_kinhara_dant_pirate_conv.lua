-- Legend of Hondo Travel System
-- By Tatwi www.tpot.ca 2015


woltenkinharadantpirate_template = ConvoTemplate:new {
	initialScreen = "first_screen",
	templateType = "Lua",
	luaClassHandler = "woltenkinharadantpirate_convo_handler",
	screens = {}
}

woltenkinharadantpirate_first_screen = ConvoScreen:new {
	id = "first_screen",
	leftDialog = "",
	customDialogText = "Hey Boss, good to see you're still living. Turns out these pirates demanded a departure fee, so I went ahead and paid them the 500 credits to get out of here.",
	stopConversation = "false",
	options = {
		{"Good man!", "departure_fee" },
		{"Can you fly me up to the Mining Outpost?", "public_transit"},
		{"Awesome, let's go home. (Travel to Mos Espa)", "confirm" }
	}
}

woltenkinharadantpirate_template:addScreen(woltenkinharadantpirate_first_screen);


woltenkinharadantpirate_public_transit = ConvoScreen:new {
	id = "public_transit",
	leftDialog = "",
	customDialogText = "With the price of fuel these days you may as well use a local transport, it's WAY cheaper! Look for the pilot in the outpost.",
  	stopConversation = "false",
  	options = { 
  		{"Good thinking, Wolten.", "first_screen"}
  	}
}
woltenkinharadantpirate_template:addScreen(woltenkinharadantpirate_public_transit);


woltenkinharadantpirate_confirm = ConvoScreen:new {
	id = "confirm",
	leftDialog = "",
	customDialogText = "Take care of yourself.",
	stopConversation = "true",
	options = {
		
	}
}
woltenkinharadantpirate_template:addScreen(woltenkinharadantpirate_confirm);


woltenkinharadantpirate_departure_fee = ConvoScreen:new {
  id = "departure_fee",
  leftDialog = "",
  customDialogText = "Well you know how it goes. Would be a darn shame make these guys angry and be forced to sneak into here every time we want to eat at the diner.",
  stopConversation = "false",
  options = { 
	{"That's a good point... Good point.", "first_screen"},
	{"You won't find a better pikatta pie anywhere else!", "fire_stew"}
  }
}
woltenkinharadantpirate_template:addScreen(woltenkinharadantpirate_departure_fee);


woltenkinharadantpirate_fire_stew = ConvoScreen:new {
	id = "fire_stew",
	leftDialog = "",
	customDialogText = "Ain't that the truth! I could eat their fire stew every day and not get sick of it.",
	stopConversation = "false",
	options = {
		{"Blech! Really? I swear that stuff burned a hole in our toilet.", "toilet"}
	}
}
woltenkinharadantpirate_template:addScreen(woltenkinharadantpirate_fire_stew);


woltenkinharadantpirate_toilet = ConvoScreen:new {
	id = "toilet",
	leftDialog = "",
	customDialogText = "That was Jammer. Something to do with mold, danger... I dunno, I stopped paying attention.",
	stopConversation = "false",
	options = {
		{"That's ah... Wow.", "first_screen"}
	}
}
woltenkinharadantpirate_template:addScreen(woltenkinharadantpirate_toilet);


addConversationTemplate("woltenkinharadantpirate_template", woltenkinharadantpirate_template);
