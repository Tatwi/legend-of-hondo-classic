-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


mlolemo_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "mlolemo_convo_handler",
	screens = {}
}


mlolemo_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Welcome to mesa home and shop. How may mesa be helpin' you?",
  stopConversation = "false",
  options = {
  	{"I heard that you sell Naboo style homes.", "shop"},
  	{"Isn't it a bit dry on Tatooine for Gungans?", "banter1"},
    {"Nope", "nope"}
  }
}
mlolemo_template:addScreen(mlolemo_start);


mlolemo_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Yes, mesa be selling all kinds of the Naboo building designs. Well, technically some were first made by wesa Gungans on Rori, but yousa not be needed to know 'bout that mesa speck. See anything yousa like?",
  stopConversation = "false",
  options = { 
  }
}
mlolemo_template:addScreen(mlolemo_shop);


mlolemo_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
mlolemo_template:addScreen(mlolemo_confirm_purchase);


mlolemo_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Yousa have a good day!",
  stopConversation = "true",
  options = {
  }
}
mlolemo_template:addScreen(mlolemo_bye);


mlolemo_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "Mesa day startin pretty okee-day with a brisky morning munchy, then BOOM! Yousa all walking in here a jabberin' for no reason...",
  stopConversation = "true",
  options = { 
  }
}
mlolemo_template:addScreen(mlolemo_nope);


mlolemo_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "Der be some bombad clankens comin' dis way!",
  stopConversation = "false",
  options = {
	{"uh... what? Bombad clankens?", "get_lost_reply"}
  }
}
mlolemo_template:addScreen(mlolemo_get_lost);

mlolemo_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Yousa just be all leaving and no speakin', okiday?",
  stopConversation = "true",
  options = {
  }
}
mlolemo_template:addScreen(mlolemo_get_lost_reply);


mlolemo_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Mesa not besa trusting yousa. Yousa come back when yousa proved no hurting Gungans.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
mlolemo_template:addScreen(mlolemo_faction_too_low);


mlolemo_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, yousa not be having enough credits on hand to maka this purchase.",
  stopConversation = "true",
  options = { 
  }
}
mlolemo_template:addScreen(mlolemo_insufficient_funds);


mlolemo_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "Ooi moiday, isa very bad, it is! But wesa built us a pool downstairs and wesa gettin' by.",
  stopConversation = "false",
  options = {
	{"There's a pool in your basement?", "banter1a"},
	{"Of course... May I see your designs, please?", "shop"}
  }
}
mlolemo_template:addScreen(mlolemo_banter1);


mlolemo_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "Yousa be wanting to go a swimmin'? Wesa be having lots of family yousa can meet and splash with. Maybe yousa stay for dinner?",
  stopConversation = "false",
  options = {
	{"Would you look at the time! I really need to see those house designs.", "shop"}
  }
}
mlolemo_template:addScreen(mlolemo_banter1a);



-- Template Footer
addConversationTemplate("mlolemo_template", mlolemo_template);
