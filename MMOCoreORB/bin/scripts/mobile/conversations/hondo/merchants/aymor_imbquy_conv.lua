-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


aymorimbquy_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "aymorimbquy_convo_handler",
	screens = {}
}


aymorimbquy_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "I know you! You're that pirate folks have been talking about. Is there something the city can do for you today?",
  stopConversation = "false",
  options = {
  	{"I'd like to buy an estate deed.", "shop"},
  	{"You the mayor around here?", "banter1"},
    {"Nope", "nope"}
  }
}
aymorimbquy_template:addScreen(aymorimbquy_start);


aymorimbquy_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Ah, ready to purchase a Tatooine estate are you? Congratulations, you've worked very hard to earn such a luxury. Enjoy!",
  options = { 
  }
}
aymorimbquy_template:addScreen(aymorimbquy_shop);


aymorimbquy_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
aymorimbquy_template:addScreen(aymorimbquy_confirm_purchase);


aymorimbquy_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Take care!",
  stopConversation = "true",
  options = {
  }
}
aymorimbquy_template:addScreen(aymorimbquy_bye);


aymorimbquy_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "OK then, have a nice day!",
  stopConversation = "true",
  options = { 
  }
}
aymorimbquy_template:addScreen(aymorimbquy_nope);


aymorimbquy_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "I'm too busy to speak with you right now.",
  stopConversation = "false",
  options = {
	{"OK...", "get_lost_reply"}
  }
}
aymorimbquy_template:addScreen(aymorimbquy_get_lost);

aymorimbquy_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "You're still here? Stick around too long and I'll put you to work filing paper work.",
  stopConversation = "true",
  options = {
  }
}
aymorimbquy_template:addScreen(aymorimbquy_get_lost_reply);


aymorimbquy_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Hmm... You're not a person of the people, are you? Come back when you've won the heart of the people.",
  stopConversation = "false",
  options = {
	{"Sure thing", "bye"}
  }
}
aymorimbquy_template:addScreen(aymorimbquy_faction_too_low);


aymorimbquy_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
aymorimbquy_template:addScreen(aymorimbquy_insufficient_funds);


aymorimbquy_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "Me? No, no, I am a but a humble civil servent. Point of fact, Mos Espa doesn't usually have a Mayor in office. The city council usually handles things well enough. Lately though... well, we could use a person like you!",
  stopConversation = "false",
  options = {
	{"Heh, of course you could", "banter1a"}
  }
}
aymorimbquy_template:addScreen(aymorimbquy_banter1);


aymorimbquy_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "If you're looking to really make your mark here in town, go speak with Counciler Mott and she'll get you started. She's usually busy working somewhere in city hall...",
  stopConversation = "false",
  options = {
	{"What will I be doing?", "banter1b"}
  }
}
aymorimbquy_template:addScreen(aymorimbquy_banter1a);


aymorimbquy_banter1b = ConvoScreen:new {
  id = "banter1b",
  leftDialog = "",
  customDialogText = "Well, if I knew that I'd be mayor!",
  stopConversation = "false",
  options = {
	{"Fair enough. Now about that estate", "shop"}
  }
}
aymorimbquy_template:addScreen(aymorimbquy_banter1b);


-- Template Footer
addConversationTemplate("aymorimbquy_template", aymorimbquy_template);
