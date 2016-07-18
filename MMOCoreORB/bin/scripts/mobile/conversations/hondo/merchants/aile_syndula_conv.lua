-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2016


ailesyndula_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "ailesyndula_convo_handler",
	screens = {}
}


ailesyndula_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "I know you. You're that bigshot from Mos Espa. Looking for a more vibrant night life, were ya?",
  stopConversation = "false",
  options = {
  	{"Actually, I was wondering if you could help me?", "banter1"},
    {"Just passing through", "nope"}
  }
}
ailesyndula_template:addScreen(ailesyndula_start);


ailesyndula_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Now you're talkin! Anyways, these new cantina deeds are good for a whole new layout that's more cozy and cost effective the big old designs like our place here. Which one would you like?",
  stopConversation = "false",
  options = { 
  }
}
ailesyndula_template:addScreen(ailesyndula_shop);


ailesyndula_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
ailesyndula_template:addScreen(ailesyndula_confirm_purchase);


ailesyndula_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Take care, sugar.",
  stopConversation = "true",
  options = {
  }
}
ailesyndula_template:addScreen(ailesyndula_bye);


ailesyndula_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "You can nope yourself on out of here, if that's how you're going to be.",
  stopConversation = "true",
  options = { 
  }
}
ailesyndula_template:addScreen(ailesyndula_nope);


ailesyndula_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a house?", "get_lost_reply"}
  }
}
ailesyndula_template:addScreen(ailesyndula_get_lost);

ailesyndula_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
ailesyndula_template:addScreen(ailesyndula_get_lost_reply);


ailesyndula_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
ailesyndula_template:addScreen(ailesyndula_faction_too_low);


ailesyndula_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
ailesyndula_template:addScreen(ailesyndula_insufficient_funds);


ailesyndula_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "Then you've come to the right place. I'd be happy, ecstatic even, to set you up with a deed for a cantina.",
  stopConversation = "false",
  options = {
	{"Really? What's in it for you?", "banter1a"},
  }
}
ailesyndula_template:addScreen(ailesyndula_banter1);


ailesyndula_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "Let's just say that, anything you can do to ruffle Lady Valarian's feathers is fine by me. If you ask me, that dumpy hovel she calls a cantina has no business being in the center of your fine town. I'd tell you to buy it off her, but I hear it's got a real nasty rat problem.",
  stopConversation = "false",
  options = {
	{"Nothing a few seismic charges can't handle, right?", "shop"},
  }
}
ailesyndula_template:addScreen(ailesyndula_banter1a);


-- Template Footer
addConversationTemplate("ailesyndula_template", ailesyndula_template);
