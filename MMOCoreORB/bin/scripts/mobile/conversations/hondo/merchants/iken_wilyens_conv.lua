-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


ikenwilyens_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "ikenwilyens_convo_handler",
	screens = {}
}


ikenwilyens_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "If you're in the market for a new Tatooine style house, I ken help you! We have many designs, small and large. Would you like to see our designs?",
  stopConversation = "false",
  options = {
  	{"That sounds fantastic!", "shop"},
  	{"Can you tell me more about housing?", "help1"},
  	{"So you only sell Tatooine style homes?", "help2"},
    {"Nope", "nope"}
  }
}
ikenwilyens_template:addScreen(ikenwilyens_start);


ikenwilyens_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "@conversation/faction_recruiter_imperial:s_330", -- Very well. I will show you what is available.
  stopConversation = "false",
  options = { 
  }
}
ikenwilyens_template:addScreen(ikenwilyens_shop);


ikenwilyens_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
ikenwilyens_template:addScreen(ikenwilyens_confirm_purchase);


ikenwilyens_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Take care and thanks for stopping by.",
  stopConversation = "true",
  options = {
  }
}
ikenwilyens_template:addScreen(ikenwilyens_bye);


ikenwilyens_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "Have it your way...",
  stopConversation = "true",
  options = { 
  }
}
ikenwilyens_template:addScreen(ikenwilyens_nope);


ikenwilyens_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a house?", "get_lost_reply"}
  }
}
ikenwilyens_template:addScreen(ikenwilyens_get_lost);

ikenwilyens_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
ikenwilyens_template:addScreen(ikenwilyens_get_lost_reply);


ikenwilyens_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
ikenwilyens_template:addScreen(ikenwilyens_faction_too_low);


ikenwilyens_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
ikenwilyens_template:addScreen(ikenwilyens_insufficient_funds);


ikenwilyens_help1 = ConvoScreen:new {
  id = "help1",
  leftDialog = "",
  customDialogText = "There are basically two kinds of houses, those which have already been built and those which need to be built. We sell deeds that you can use to construct a new building. As for the buildings that are already in the world, generally speaking, they already belong to someone else, eh.",
  stopConversation = "false",
  options = {
	{"Why can I do with a house?", "help1a"},
	{"May I see what you're selling?", "shop"}
  }
}
ikenwilyens_template:addScreen(ikenwilyens_help1);


ikenwilyens_help1a = ConvoScreen:new {
  id = "help1a",
  leftDialog = "",
  customDialogText = "Why, you can live in it of course! Houses are great for storing your stuff, relaxing, crafting, you name it! Bigger houses may cost a lot up front and to maintain, but they give you crazy amounts of space to call your own.",
  stopConversation = "false",
  options = {
    {"Storge? Maintenance?", "help1b"},
	{"May I see what you're selling?", "shop"}
  }
}
ikenwilyens_template:addScreen(ikenwilyens_help1a);


ikenwilyens_help1b = ConvoScreen:new {
  id = "help1b",
  leftDialog = "",
  customDialogText = "[1L] means the building has 1 Lot. Each lot comes with 250 storage. The bigger the building, the more it costs to buy and maintain.",
  stopConversation = "false",
  options = {
	{"May I see what you're selling?", "shop"}
  }
}
ikenwilyens_template:addScreen(ikenwilyens_help1b);


ikenwilyens_help2 = ConvoScreen:new {
  id = "help2",
  leftDialog = "",
  customDialogText = "Here at Iken Construction, we specialize in buildings of the highest quality that are made to withstand the harsh environments of Tatooine. But if that's not what you're looking for, I heard there is a shop called New Gunga in Mos Entha that sells Naboo styled structures. There are probably other merchants selling other things as well... who knows!",
  stopConversation = "false",
  options = {
	{"May I see what you're selling?", "shop"}
  }
}
ikenwilyens_template:addScreen(ikenwilyens_help2);


-- Template Footer
addConversationTemplate("ikenwilyens_template", ikenwilyens_template);
