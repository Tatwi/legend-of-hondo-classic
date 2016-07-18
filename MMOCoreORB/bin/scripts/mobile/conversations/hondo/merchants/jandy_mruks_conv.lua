-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


jandymruks_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "jandymruks_convo_handler",
	screens = {}
}


jandymruks_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "You help carry junk, yes?",
  stopConversation = "false",
  options = {
  	{"Ah... me buy tent?", "banter1"},
    {"I don't think so...", "nope"},
    {"How does this work?", "help"}
  }
}
jandymruks_template:addScreen(jandymruks_start);


jandymruks_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "Oh, tent! Jub Jub! Big brown, small brown. You buy now, cheap!",
  stopConversation = "false",
  options = {
  	{"Sounds good to me.", "shop"},
    {"No thanks.", "nope"},
    {"How does this work?", "help"}
  }
}
jandymruks_template:addScreen(jandymruks_banter1);


jandymruks_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "You want pretty, go see brother in village. Need most friendly you... buy tent?",
  stopConversation = "false",
  options = { 
  }
}
jandymruks_template:addScreen(jandymruks_shop);


jandymruks_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "You sure buy tent?",
  stopConversation = "false",
  options = { 
  }
}
jandymruks_template:addScreen(jandymruks_confirm_purchase);


jandymruks_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Jub Jub!",
  stopConversation = "true",
  options = {
  }
}
jandymruks_template:addScreen(jandymruks_bye);


jandymruks_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "You love big dragon with face. Go!",
  stopConversation = "true",
  options = { 
  }
}
jandymruks_template:addScreen(jandymruks_nope);


jandymruks_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "No Tusken here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a tent?", "get_lost_reply"}
  }
}
jandymruks_template:addScreen(jandymruks_get_lost);

jandymruks_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "You go now!",
  stopConversation = "true",
  options = {
  }
}
jandymruks_template:addScreen(jandymruks_get_lost_reply);


jandymruks_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Who you? You no trusty!",
  stopConversation = "false",
  options = {
	{"But I have money!", "get_lost_reply"}
  }
}
jandymruks_template:addScreen(jandymruks_faction_too_low);


jandymruks_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "No credits, no tent! You get credits, come back.",
  stopConversation = "true",
  options = { 
  }
}
jandymruks_template:addScreen(jandymruks_insufficient_funds);


jandymruks_help = ConvoScreen:new {
  id = "help",
  leftDialog = "",
  customDialogText = "[1L] mean 1 Lot, give 250 storage. More Lots, more storage, more credits!",
  stopConversation = "false",
  options = {
	{"Thanks, let's start over.", "start"}
  }
}
jandymruks_template:addScreen(jandymruks_help);


-- Template Footer
addConversationTemplate("jandymruks_template", jandymruks_template);
