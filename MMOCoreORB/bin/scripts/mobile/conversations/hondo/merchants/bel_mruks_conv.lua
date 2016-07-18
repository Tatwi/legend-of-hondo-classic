-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


belmruks_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "belmruks_convo_handler",
	screens = {}
}


belmruks_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "You buy tent, yes?",
  stopConversation = "false",
  options = {
  	{"Yes, I buy tent.", "shop"},
    {"No tent for me...", "nope"},
    {"How does this work?", "help"}
  }
}
belmruks_template:addScreen(belmruks_start);


belmruks_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Get better price, kill evil Tusken Raiders!",
  stopConversation = "false",
  options = { 
  }
}
belmruks_template:addScreen(belmruks_shop);


belmruks_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "You sure buy tent?",
  stopConversation = "false",
  options = { 
  }
}
belmruks_template:addScreen(belmruks_confirm_purchase);


belmruks_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Jub Jub!",
  stopConversation = "true",
  options = {
  }
}
belmruks_template:addScreen(belmruks_bye);


belmruks_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "You love big dragon with face. Go!",
  stopConversation = "true",
  options = { 
  }
}
belmruks_template:addScreen(belmruks_nope);


belmruks_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "No Tusken here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a tent?", "get_lost_reply"}
  }
}
belmruks_template:addScreen(belmruks_get_lost);

belmruks_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "You go now!",
  stopConversation = "true",
  options = {
  }
}
belmruks_template:addScreen(belmruks_get_lost_reply);


belmruks_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Who you? You no trusty!",
  stopConversation = "false",
  options = {
	{"But I have money!", "get_lost_reply"}
  }
}
belmruks_template:addScreen(belmruks_faction_too_low);


belmruks_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "No credits, no tent! You get credits, come back.",
  stopConversation = "true",
  options = { 
  }
}
belmruks_template:addScreen(belmruks_insufficient_funds);


belmruks_help = ConvoScreen:new {
  id = "help",
  leftDialog = "",
  customDialogText = "[1L] mean 1 Lot, give 250 storage. More Lots, more storage, more credits!",
  stopConversation = "false",
  options = {
	{"Thanks, let's start over.", "start"}
  }
}
belmruks_template:addScreen(belmruks_help);


-- Template Footer
addConversationTemplate("belmruks_template", belmruks_template);
