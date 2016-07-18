-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


duaghauser_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "duaghauser_convo_handler",
	screens = {}
}


duaghauser_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Hello, Citizen. How can I help you today?",
  stopConversation = "false",
  options = {
  	{"I'd like to buy a housing deed.", "shop"},
  	{"Can you tell me more about housing?", "help1"},
    {"Nope", "nope"}
  }
}
duaghauser_template:addScreen(duaghauser_start);


duaghauser_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Could I interest you in a star map while you're here? They're proudly sponsored by the Tatooine Travel Association and Gaffi's Stix. The star map even comes with a couple free posters from our sponsors. Your kind support will help keep Bestine a safe city for all citizens of the Empire!",
  options = { 
  }
}
duaghauser_template:addScreen(duaghauser_shop);


duaghauser_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
duaghauser_template:addScreen(duaghauser_confirm_purchase);


duaghauser_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "The Empire thanks you for your contributions, Citizen.",
  stopConversation = "true",
  options = {
  }
}
duaghauser_template:addScreen(duaghauser_bye);


duaghauser_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "OK then, have a nice day!",
  stopConversation = "true",
  options = { 
  }
}
duaghauser_template:addScreen(duaghauser_nope);


duaghauser_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"Relax man. it's all good...", "get_lost_reply"}
  }
}
duaghauser_template:addScreen(duaghauser_get_lost);

duaghauser_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "You'll leave quickly if you know what's good for you.",
  stopConversation = "true",
  options = {
  }
}
duaghauser_template:addScreen(duaghauser_get_lost_reply);


duaghauser_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
duaghauser_template:addScreen(duaghauser_faction_too_low);


duaghauser_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
duaghauser_template:addScreen(duaghauser_insufficient_funds);


duaghauser_help1 = ConvoScreen:new {
  id = "help1",
  leftDialog = "",
  customDialogText = "There are basically two kinds of houses, those which have already been built and those which need to be built. We sell deeds that you can use to construct a new building. As for the buildings that are already in the world, many be purchased from us here at the Imperial Housing Authority.",
  stopConversation = "false",
  options = {
	{"How does that work?", "help1a"}
  }
}
duaghauser_template:addScreen(duaghauser_help1);


duaghauser_help1a = ConvoScreen:new {
  id = "help1a",
  leftDialog = "",
  customDialogText = "As you explore Tatooine, you'll find small, medium, and large Tatooine style homes that you may purchase by using the Structure Management Terminal within them. Many come partly decorated. In other locations you may find an Administrator Droid who is able to sell you the structure.",
  stopConversation = "false",
  options = {
	{"Are all buildings the same price?", "help1b"}
  }
}
duaghauser_template:addScreen(duaghauser_help1a);


duaghauser_help1b = ConvoScreen:new {
  id = "help1b",
  leftDialog = "",
  customDialogText = "No each building type has its own price. I sell deeds for generic style homes and you'll find other merchants in your travels who sell other types of buildings at various prices.",
  stopConversation = "false",
  options = {
	{"Sounds good. Let's see what you've got.", "shop"}
  }
}
duaghauser_template:addScreen(duaghauser_help1b);


-- Template Footer
addConversationTemplate("duaghauser_template", duaghauser_template);
