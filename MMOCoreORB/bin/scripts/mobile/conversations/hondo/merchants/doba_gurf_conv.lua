-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


dobagurf_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "dobagurf_convo_handler",
	screens = {}
}


dobagurf_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Welcome. Are you here to purchase one of our affordable and delightful medium or large Corellian style homes?",
  stopConversation = "false",
  options = {
  	{"I am indeed.", "shop"},
  	{"Aren't they the same as generic houses?", "banter1"},
  	{"What's an old Corsec like you doing out here in the outer rim?", "banter2"},
    {"Nope", "nope"}
  }
}
dobagurf_template:addScreen(dobagurf_start);


dobagurf_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "@conversation/faction_recruiter_imperial:s_330", -- Very well. I will show you what is available.
  stopConversation = "false",
  options = { 
  }
}
dobagurf_template:addScreen(dobagurf_shop);


dobagurf_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
dobagurf_template:addScreen(dobagurf_confirm_purchase);


dobagurf_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Take care and thanks for stopping by.",
  stopConversation = "true",
  options = {
  }
}
dobagurf_template:addScreen(dobagurf_bye);


dobagurf_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "Well, nice chatting with you.",
  stopConversation = "true",
  options = { 
  }
}
dobagurf_template:addScreen(dobagurf_nope);


dobagurf_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a house?", "get_lost_reply"}
  }
}
dobagurf_template:addScreen(dobagurf_get_lost);

dobagurf_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
dobagurf_template:addScreen(dobagurf_get_lost_reply);


dobagurf_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
dobagurf_template:addScreen(dobagurf_faction_too_low);


dobagurf_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
dobagurf_template:addScreen(dobagurf_insufficient_funds);


dobagurf_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "I suppose you could say that, but the Corellian designs are usually painted differently on the outside. That's something.",
  stopConversation = "false",
  options = {
	{"True...", "banter1a"},
	{"May I see what you're selling?", "shop"},
    {"How does this work?", "help"}
  }
}
dobagurf_template:addScreen(dobagurf_banter1);


dobagurf_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "I blame the Empire! It's always sticking its nose in where it doesn't belong. Those so called generic houses are really Corellian designs that the Empire outsourced to the lowest bidder. Course, you aren't going to see any of the savings. They have too many starships to pay for...",
  stopConversation = "false",
  options = {
	{"Yeah, that Empire! So, what have you got?", "shop"},
    {"Know what, I have to run...", "bye"}
  }
}
dobagurf_template:addScreen(dobagurf_banter1a);


dobagurf_banter2 = ConvoScreen:new {
  id = "banter2",
  leftDialog = "",
  customDialogText = "My wife wanted to retire on a sandy beach, so I spent all our savings on some waterfront property, sight unseen. Turns out that sitting in a bog on the dark side of Gorse wasn't what she had in mind. Next thing you know, we're here selling houses for my Architect brother who's living it up back home on Corellia... At least I got the sand part right, eh?",
  stopConversation = "false",
  options = {
    {"That's your wife, Mila, I take it?", "bye"},
	{"May I see what you're selling?", "shop"},
    {"How does this work?", "help"}
  }
}
dobagurf_template:addScreen(dobagurf_banter2);

dobagurf_banter2a = ConvoScreen:new {
  id = "banter2a",
  leftDialog = "",
  customDialogText = "That's my angel! If you're looking for a smaller house, she can probably dig up some deeds for you.",
  stopConversation = "false",
  options = {
	{"May I see what you're selling?", "shop"},
    {"Well, I gotta run.", "bye"}
  }
}
dobagurf_template:addScreen(dobagurf_banter2a);


dobagurf_help = ConvoScreen:new {
  id = "help",
  leftDialog = "",
  customDialogText = "[1L] means the building has 1 Lot. Each lot comes with 250 storage. The bigger the building, the more it costs to buy and maintain.",
  stopConversation = "false",
  options = {
	{"Thanks, let's start over.", "start"}
  }
}
dobagurf_template:addScreen(dobagurf_help);


-- Template Footer
addConversationTemplate("dobagurf_template", dobagurf_template);
