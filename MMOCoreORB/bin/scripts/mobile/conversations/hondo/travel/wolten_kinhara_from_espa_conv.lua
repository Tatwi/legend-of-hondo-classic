-- Legend of Hondo Travel System
-- By Tatwi www.tpot.ca 2015


woltenkinharafromespa_template = ConvoTemplate:new {
	initialScreen = "first_screen",
	templateType = "Lua",
	luaClassHandler = "woltenkinharafromespa_convo_handler",
	screens = {}
}

woltenkinharafromespa_first_screen = ConvoScreen:new {
	id = "first_screen",
	leftDialog = "",
	customDialogText = "Hi Boss. Where are we heading today?",
	stopConversation = "false",
	options = {
		{"We're heading to safe harbor off world.", "safe_harbor" },
		{"Wolten, it's time for an adventure!", "dungeons"},
		{"Can't you just fly me to Mos Eisley?", "public_transit"}
	}
}

woltenkinharafromespa_template:addScreen(woltenkinharafromespa_first_screen);


woltenkinharafromespa_public_transit = ConvoScreen:new {
	id = "public_transit",
	leftDialog = "",
	customDialogText = "We've been over this... You have your own figher ship to fly or you can use the public shuttle system. Either of those are WAY cheaper than flying the Onak everywhere. Open up your datapad to access your ship or head to a shuttle port to use public transit.",
  	stopConversation = "false",
  	options = { 
		{"Since when have I had my own fighter?", "awesome"},
  		{"Does public transit go to other planets?", "just_local"},
  		{"I like you, Wolten. Thanks.", "byebye"}
  	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_public_transit);


woltenkinharafromespa_just_local = ConvoScreen:new {
	id = "just_local",
	leftDialog = "",
	customDialogText = "Nah, their little shuttles are only good traveling on their own planet. The Onak here is your best way off Tatooine. Costly as she may be, she's your ship, Boss.",
  	stopConversation = "false",
  	options = { 
  		{"Thanks for reminding me, Wolten. Take care of the ship.", "byebye"}
  	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_just_local);


woltenkinharafromespa_awesome = ConvoScreen:new {
	id = "awesome",
	leftDialog = "",
	customDialogText = "Since you won that small fleet of them from the Hutts when we smuggled that spice shipment to Nar Shadaa. We sure proved it wasn't impossible to slip that spice right through the Imperial blockade! I don't think Meera the Hutt will be making any bets against us any time soon. Would be nice to get some more work though...",
  	stopConversation = "false",
  	options = { 
  		{"Yeah, we're awesome! I just love hearing you tell that story.", "byebye"}
  	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_awesome);


woltenkinharafromespa_byebye = ConvoScreen:new {
	id = "byebye",
	leftDialog = "",
	customDialogText = "Take care of yourself.",
	stopConversation = "true",
	options = {
		
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_byebye);


woltenkinharafromespa_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you don't have enough credits with you to pay for our fuel. Head on over to the bank, I'll be here when ya get back!",
  stopConversation = "true",
  options = { 
	{"Ah, crap. I guess I'll be back later.", "byebye"}
  }
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_insufficient_funds);



-- Safe Harbor ==========================

woltenkinharafromespa_safe_harbor = ConvoScreen:new {
	id = "safe_harbor",
	leftDialog = "",
	customDialogText = "Stanard fare, eh? 5000 credits should cover the fees and fuel.",
	stopConversation = "false",
	options = {
		{"Lok, our old stomping grounds.", "lok"},
		{"Dantooine Pirate Outpost", "dantooine" },
		{"Dathomir Trade Outpost", "dathomir"},
		{"Endor Smuggler Outpost", "endor"}
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_safe_harbor);


woltenkinharafromespa_dantooine = ConvoScreen:new {
	id = "dantooine",
	leftDialog = "",
	customDialogText = "Dantooine is nice.",
	stopConversation = "true",
	options = {
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_dantooine);


woltenkinharafromespa_dathomir = ConvoScreen:new {
	id = "dathomir",
	leftDialog = "",
	customDialogText = "Oh man, what are smuggling this time? Dathomir gives me the creeps!",
	stopConversation = "true",
	options = {
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_dathomir);


woltenkinharafromespa_endor = ConvoScreen:new {
	id = "endor",
	leftDialog = "",
	customDialogText = "You're not going to sell me to the Ewoks, are you?",
	stopConversation = "true",
	options = {
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_endor);


woltenkinharafromespa_lok = ConvoScreen:new {
	id = "lok",
	leftDialog = "",
	customDialogText = "Lok, eh? Feeling a little nostalgic are we?",
	stopConversation = "true",
	options = {
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_lok);


-- Dungeons ==========================


woltenkinharafromespa_dungeons = ConvoScreen:new {
	id = "dungeons",
	leftDialog = "",
	customDialogText = "Lookin' to cause some trouble, are ya? These kinds of aventures usually run us 10000 credits.",
	stopConversation = "false",
	options = {
		{"Death Watch Bunker (Endor)", "dwb" },
		{"Nightsister Stronghold (Dathomir)", "nightsister" },
		{"Janta Cave (Dantooine)", "janta" },
		{"Droid Cave (Lok)", "droid" },
		{"Warrens (Dantooine)", "warren"}
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_dungeons);


woltenkinharafromespa_dwb = ConvoScreen:new {
	id = "dwb",
	leftDialog = "",
	stopConversation = "true",
	options = {
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_dwb);


woltenkinharafromespa_nightsister = ConvoScreen:new {
	id = "nightsister",
	leftDialog = "",
	stopConversation = "true",
	options = {
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_nightsister);


woltenkinharafromespa_janta = ConvoScreen:new {
	id = "janta",
	leftDialog = "",
	stopConversation = "true",
	options = {
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_janta);


woltenkinharafromespa_droid = ConvoScreen:new {
	id = "droid",
	leftDialog = "",
	stopConversation = "true",
	options = {
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_droid);


woltenkinharafromespa_warren = ConvoScreen:new {
	id = "warren",
	leftDialog = "",
	stopConversation = "true",
	options = {
	}
}
woltenkinharafromespa_template:addScreen(woltenkinharafromespa_warren);

addConversationTemplate("woltenkinharafromespa_template", woltenkinharafromespa_template);
