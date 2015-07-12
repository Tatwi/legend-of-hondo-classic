-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


industrabaggins_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "industrabaggins_convo_handler",
	screens = {}
}


industrabaggins_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Welcome to Iken Construction, how can I help you today?",
  stopConversation = "false",
  options = {
  	{"I'd like to purchase a factory.", "shop"},
  	{"Can you tell me more about factories?", "help1"},
    {"Nope", "nope"}
  }
}
industrabaggins_template:addScreen(industrabaggins_start);


industrabaggins_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Here are our prices. I think you'll find that they're fair.",
  stopConversation = "false",
  options = { 
  }
}
industrabaggins_template:addScreen(industrabaggins_shop);


industrabaggins_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
industrabaggins_template:addScreen(industrabaggins_confirm_purchase);


industrabaggins_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Hope you found everything you were looking for.",
  stopConversation = "true",
  options = {
  }
}
industrabaggins_template:addScreen(industrabaggins_bye);


industrabaggins_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "Where did I leave my glasses...",
  stopConversation = "true",
  options = { 
  }
}
industrabaggins_template:addScreen(industrabaggins_nope);


industrabaggins_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"Look who's talking!", "get_lost_reply"}
  }
}
industrabaggins_template:addScreen(industrabaggins_get_lost);

industrabaggins_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
industrabaggins_template:addScreen(industrabaggins_get_lost_reply);


industrabaggins_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
industrabaggins_template:addScreen(industrabaggins_faction_too_low);


industrabaggins_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
industrabaggins_template:addScreen(industrabaggins_insufficient_funds);


industrabaggins_help1 = ConvoScreen:new {
  id = "help1",
  leftDialog = "",
  customDialogText = "Factories are buildings you can use to mass produce crafted items. Some crafted items require components that have been made to strict standards of similarity, a feat of engineering only made possible by automated factories like ours. I will sell you a deed and then it's just a matter of you finding a nice location to build the factory. All factories consume power while running and require maintainance fees to be paid at all times.",
  stopConversation = "false",
  options = {
	{"Are there different kinds of factories?", "help1a"},
	{"How much do they go for?", "shop"}
  }
}
industrabaggins_template:addScreen(industrabaggins_help1);


industrabaggins_help1a = ConvoScreen:new {
  id = "help1a",
  leftDialog = "",
  customDialogText = "Yes, there are. Factories are built to general specifications, such as: [clothing and armor], [food and chemicals], [weapons, tools, droids, and vehicles], [structures, furniture]. In fact, if you study to be an Architect you can make your own factories using parts you've made in a factory!",
  stopConversation = "false",
  options = {
	{"Huh. May I see your prices?", "shop"}
  }
}
industrabaggins_template:addScreen(industrabaggins_help1a);


-- Template Footer
addConversationTemplate("industrabaggins_template", industrabaggins_template);
