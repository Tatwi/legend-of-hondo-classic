-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2016


milagurf_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "milagurf_convo_handler",
	screens = {}
}


milagurf_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Small house deed... small... deeds... Sure, we have plenty of small deeds around here.",
  stopConversation = "false",
  options = {
  	{"OK... Let's see them", "shop"},
  	{"You alright, ma'am?", "banter1"},
    {"Know what, I'm good", "nope"}
  }
}
milagurf_template:addScreen(milagurf_start);


milagurf_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Ah, houses! I like the roundy ones. Wooooo, like living in a bathtub, only not, but sort of. Hmmm... But not... with doors and... What kind of houses do you like?",
  stopConversation = "false",
  options = { 
  }
}
milagurf_template:addScreen(milagurf_shop);


milagurf_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
milagurf_template:addScreen(milagurf_confirm_purchase);


milagurf_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "You're so lucky to have somewhere else to go...",
  stopConversation = "true",
  options = {
  }
}
milagurf_template:addScreen(milagurf_bye);


milagurf_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "Well, nice chatting with you.",
  stopConversation = "true",
  options = { 
  }
}
milagurf_template:addScreen(milagurf_nope);


milagurf_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a house?", "get_lost_reply"}
  }
}
milagurf_template:addScreen(milagurf_get_lost);

milagurf_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
milagurf_template:addScreen(milagurf_get_lost_reply);


milagurf_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
milagurf_template:addScreen(milagurf_faction_too_low);


milagurf_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
milagurf_template:addScreen(milagurf_insufficient_funds);


milagurf_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "Huh? Oh, I'm fine. Nothing a good sand storm or giant man eating lizard can't solve.",
  stopConversation = "false",
  options = {
	{"Yeah... How 'bout that...", "banter1a"},
	{"May I see what you're selling?", "shop"},
  }
}
milagurf_template:addScreen(milagurf_banter1);


milagurf_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "Did you want something? The cantina is upstairs, if that's what you're after - I ain't making no sandwiches!",
  stopConversation = "false",
  options = {
	{"Small Corellian house deeds?", "shop"},
    {"Know what, I have to run...", "bye"}
  }
}
milagurf_template:addScreen(milagurf_banter1a);


milagurf_help = ConvoScreen:new {
  id = "help",
  leftDialog = "",
  customDialogText = "[1L] means the building has 1 Lot. Each lot comes with 250 storage. The bigger the building, the more it costs to buy and maintain.",
  stopConversation = "false",
  options = {
	{"Thanks, let's start over.", "start"}
  }
}
milagurf_template:addScreen(milagurf_help);


-- Template Footer
addConversationTemplate("milagurf_template", milagurf_template);
