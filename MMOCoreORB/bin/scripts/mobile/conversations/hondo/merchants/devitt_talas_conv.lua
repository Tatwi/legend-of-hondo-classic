-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2016


devitttalas_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "devitttalas_convo_handler",
	screens = {}
}


devitttalas_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Welcome to the Imperial Association for Managing Player Associations Association. How can I help you today?",
  stopConversation = "false",
  options = {
  	{"I hear you sell guild halls?", "shop"},
  	{"You just made that up!", "banter1"},
    {"I have to go...", "nope"}
  }
}
devitttalas_template:addScreen(devitttalas_start);


devitttalas_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "These are some of the finest buildings money can buy - lots of room, well worth the expense, if you ask me. Which one would you like to buy today?",
  stopConversation = "false",
  options = { 
  }
}
devitttalas_template:addScreen(devitttalas_shop);


devitttalas_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
devitttalas_template:addScreen(devitttalas_confirm_purchase);


devitttalas_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "The elevator is on your left.",
  stopConversation = "true",
  options = {
  }
}
devitttalas_template:addScreen(devitttalas_bye);


devitttalas_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "Do see yourself out.",
  stopConversation = "true",
  options = { 
  }
}
devitttalas_template:addScreen(devitttalas_nope);


devitttalas_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a house?", "get_lost_reply"}
  }
}
devitttalas_template:addScreen(devitttalas_get_lost);

devitttalas_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
devitttalas_template:addScreen(devitttalas_get_lost_reply);


devitttalas_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
devitttalas_template:addScreen(devitttalas_faction_too_low);


devitttalas_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
devitttalas_template:addScreen(devitttalas_insufficient_funds);


devitttalas_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "You'd think so, you really would... Anyhow, I assume you're here to purchase a guild hall?",
  stopConversation = "false",
  options = {
	{"It's not very busy down here, is it?", "banter1a"},
	{"You go it!", "shop"},
  }
}
devitttalas_template:addScreen(devitttalas_banter1);


devitttalas_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "If I had an Imperial credit for every customer who strolled in here this month, I'd have... about one credit? I guess it is a touch lonely down here, but the upside is there isn't any sand. That and the hall is plenty long enough for paper air plane races!",
  stopConversation = "false",
  options = {
	{"About that guildhall", "shop"},
    {"Nice! Is that your model there?", "banter1b"},
    {"Know what, I have to run...", "bye"}
  }
}
devitttalas_template:addScreen(devitttalas_banter1a);


devitttalas_banter1b = ConvoScreen:new {
  id = "banter1b",
  leftDialog = "",
  customDialogText = "Yup, built it myself from scratch. I was working on one of those nifty B-Wings, but my boss thought it would be hilarious to blow it up with his 'Tie Bomber'. The fat bastard sat on it, rumbled out the longest fart I have ever heard, and left my B-Wing's stinking husk on my desk for me to flick into the trash bin with a pen, one putrid little piece at a time. Tears in my eyes *sighs* for so many reasons...",
  stopConversation = "false",
  options = {
	{"That's disgusting!", "banter1c"},
  }
}
devitttalas_template:addScreen(devitttalas_banter1b);


devitttalas_banter1c = ConvoScreen:new {
  id = "banter1c",
  leftDialog = "",
  customDialogText = "Just be glad that it didn't happen earlier today... or this week. *shudders* The air circulation in here is terrible... But yeah, I enjoy building models. Thanks for noticing.",
  stopConversation = "false",
  options = {
	{"About that guildhall", "shop"},
    {"Was nice talking with you", "bye"}
  }
}
devitttalas_template:addScreen(devitttalas_banter1c);


devitttalas_help = ConvoScreen:new {
  id = "help",
  leftDialog = "",
  customDialogText = "[1L] means the building has 1 Lot. Each lot comes with 250 storage. The bigger the building, the more it costs to buy and maintain.",
  stopConversation = "false",
  options = {
	{"Thanks, let's start over.", "start"}
  }
}
devitttalas_template:addScreen(devitttalas_help);


-- Template Footer
addConversationTemplate("devitttalas_template", devitttalas_template);
