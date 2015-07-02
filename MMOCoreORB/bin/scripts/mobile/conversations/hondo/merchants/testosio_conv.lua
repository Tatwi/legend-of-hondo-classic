-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


testosio_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "testosio_convo_handler",
	screens = {}
}


testosio_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Would you like to make a purchase today?",
  stopConversation = "false",
  options = {
  	{"Yes, please", "yes"},
    {"Nope", "nope"}
  }
}
testosio_template:addScreen(testosio_start);


testosio_ohmy = ConvoScreen:new {
  id = "ohmy",
  leftDialog = "",
  customDialogText = "Oh, my!",
  stopConversation = "true",
  options = {
  }
}
testosio_template:addScreen(testosio_ohmy);


testosio_yes = ConvoScreen:new {
  id = "yes",
  leftDialog = "@conversation/faction_recruiter_imperial:s_330", -- Very well. I will show you what is available.
  stopConversation = "false",
  options = { 
  }
}
testosio_template:addScreen(testosio_yes);


testosio_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "Have it your way...",
  stopConversation = "true",
  options = { 
  }
}
testosio_template:addScreen(testosio_nope);


testosio_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "true",
  options = { 
  }
}
testosio_template:addScreen(testosio_get_lost);


testosio_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but you'll have to work a little harder before I will do business with you.",
  stopConversation = "true",
  options = { 
  }
}
testosio_template:addScreen(testosio_faction_too_low);


testosio_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
testosio_template:addScreen(testosio_insufficient_funds);


-- Template Footer
addConversationTemplate("testosio_template", testosio_template);
