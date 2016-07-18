-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2016


assistantnylt_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "assistantnylt_convo_handler",
	screens = {}
}


assistantnylt_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "*Sneeze* Here to buy a banking kiosk for the city?",
  stopConversation = "false",
  options = {
  	{"That I am!", "shop"},
    {"Nope", "nope"}
  }
}
assistantnylt_template:addScreen(assistantnylt_start);


assistantnylt_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Sorry, I hope my, uh, allergies don't bother you... Here are the designs we have to offer.",
  stopConversation = "false",
  options = { 
  }
}
assistantnylt_template:addScreen(assistantnylt_shop);


assistantnylt_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
assistantnylt_template:addScreen(assistantnylt_confirm_purchase);


assistantnylt_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Take care, sugar.",
  stopConversation = "true",
  options = {
  }
}
assistantnylt_template:addScreen(assistantnylt_bye);


assistantnylt_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "You can nope yourself on out of here, if that's how you're going to be.",
  stopConversation = "true",
  options = { 
  }
}
assistantnylt_template:addScreen(assistantnylt_nope);


assistantnylt_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a house?", "get_lost_reply"}
  }
}
assistantnylt_template:addScreen(assistantnylt_get_lost);

assistantnylt_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
assistantnylt_template:addScreen(assistantnylt_get_lost_reply);


assistantnylt_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
assistantnylt_template:addScreen(assistantnylt_faction_too_low);


assistantnylt_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
assistantnylt_template:addScreen(assistantnylt_insufficient_funds);


-- Template Footer
addConversationTemplate("assistantnylt_template", assistantnylt_template);
