-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2016


piezzegren_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "piezzegren_convo_handler",
	screens = {}
}


piezzegren_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Welcome. Are you here to make a donation to the Tatooine Wildlife Fund?",
  stopConversation = "false",
  options = {
  	{"No... I heard you sell hospitals?", "banter1"},
  	{"The sparrow flies at midnight", "banter2"},
    {"Nope", "nope"}
  }
}
piezzegren_template:addScreen(piezzegren_start);


piezzegren_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "The buildings aren't much to look at and they aren't too large on the inside either, but their tougher than nails. Should be able withstand a direct assault from a squad of AT-ST. That said, we're low on equipment so you'll have to source that yourself. Still Interested?",
  stopConversation = "false",
  options = { 
  }
}
piezzegren_template:addScreen(piezzegren_shop);


piezzegren_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
piezzegren_template:addScreen(piezzegren_confirm_purchase);


piezzegren_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Take care and thanks for stopping by.",
  stopConversation = "true",
  options = {
  }
}
piezzegren_template:addScreen(piezzegren_bye);


piezzegren_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "Have it your way...",
  stopConversation = "true",
  options = { 
  }
}
piezzegren_template:addScreen(piezzegren_nope);


piezzegren_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a house?", "get_lost_reply"}
  }
}
piezzegren_template:addScreen(piezzegren_get_lost);

piezzegren_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
piezzegren_template:addScreen(piezzegren_get_lost_reply);


piezzegren_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
piezzegren_template:addScreen(piezzegren_faction_too_low);


piezzegren_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
piezzegren_template:addScreen(piezzegren_insufficient_funds);


piezzegren_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "Animal hospitals. Officially anyway, if you follow me. Are you interested in setting up your own?",
  stopConversation = "false",
  options = {
	{"I'm confused", "banter1a"},
	{"I love cats!", "shop"}
  }
}
piezzegren_template:addScreen(piezzegren_banter1);


piezzegren_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "*Whipsers* We sell hospitals for people, diguised from the Empire as animal hospitals, becasue the Empire wants to track all patients carefully. Some folk, such as yourself perhaps, may appreciate being able to heal a wound or two more privately.",
  stopConversation = "false",
  options = {
    {"So you DO sell hospitals!", "shop"},
	{"Oh, I don't want one of those", "bye"}
  }
}
piezzegren_template:addScreen(piezzegren_banter1a);


piezzegren_banter2 = ConvoScreen:new {
  id = "banter2",
  leftDialog = "",
  customDialogText = "Hmm, that's an old code. Let me check my book... I'm afriad that shipment has been depleted, Sir, but wasn't it your people who brought that one in for us?",
  stopConversation = "false",
  options = {
	{"Right! I meant pigeon at dawn", "banter2a"}
  }
}
piezzegren_template:addScreen(piezzegren_banter2);


piezzegren_banter2a = ConvoScreen:new {
  id = "banter2a",
  leftDialog = "",
  customDialogText = "Ya crusty pirate, stop fishing for discounts! Would you like to buy a hospital facility now or what?",
  stopConversation = "false",
  options = {
	{"Hey, it's my nature!", "shop"},
    {"Nah, I was just testing you", "bye"}
  }
}
piezzegren_template:addScreen(piezzegren_banter2a);


-- Template Footer
addConversationTemplate("piezzegren_template", piezzegren_template);
