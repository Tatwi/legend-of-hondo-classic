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
  	{"That's an ironic name...", "banter1"},
    {"You can't!", "nope"}
  }
}
duaghauser_template:addScreen(duaghauser_start);


duaghauser_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Sure! While you're here, could I interest you in a star map? They're proudly sponsored by the Tatooine Travel Association and Gaffi's Stix. The star map even comes with a couple free posters from our sponsors. Your kind support will help Bestine remain a safe city for all citizens of the Empire!",
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


duaghauser_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "Huh?",
  stopConversation = "false",
  options = {
	{"Nevermind", "banter1a"},
    {"Your name, it's kind of funny", "banter1b"}
  }
}
duaghauser_template:addScreen(duaghauser_banter1);


duaghauser_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "I assume you're here to purchase a deed for a small generic house? If you're looking for a large or medium, you'll need to speak to Trooper across the way. He's... well, he's Trooper!",
  stopConversation = "false",
  options = {
	{"Show me what you've got!", "shop"}
  }
}
duaghauser_template:addScreen(duaghauser_banter1a);


duaghauser_banter1b = ConvoScreen:new {
  id = "banter1b",
  leftDialog = "",
  customDialogText = "Your face is kinda funny, but you don't see me saying anything about it, do ya?",
  stopConversation = "false",
  options = {
	{"You just did", "banter1c"},
    {"So mature...", "banter1d"}
  }
}
duaghauser_template:addScreen(duaghauser_banter1b);


duaghauser_banter1c = ConvoScreen:new {
  id = "banter1c",
  leftDialog = "",
  customDialogText = "Huh?",
  stopConversation = "false",
  options = {
	{"Can I just buy a house now, please?", "shop"}
  }
}
duaghauser_template:addScreen(duaghauser_banter1c);


duaghauser_banter1d = ConvoScreen:new {
  id = "banter1d",
  leftDialog = "",
  customDialogText = "Hey, I didn't say anything about you looking old and smelling bad too. I just said you're ugly. Like, shockingly hideous... bleh!",
  stopConversation = "false",
  options = {
	{"Can I just buy a house now, please?", "shop"}
  }
}
duaghauser_template:addScreen(duaghauser_banter1d);


-- Template Footer
addConversationTemplate("duaghauser_template", duaghauser_template);
