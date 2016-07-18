-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2016


hurdnefre_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "hurdnefre_convo_handler",
	screens = {}
}


hurdnefre_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Wow, I swear I've seen you somewhere before! Something I can help you with?",
  stopConversation = "false",
  options = {
  	{"Very witty", "banter1"},
  	{"Am I really me?", "banter2"},
    {"Nope", "nope"}
  }
}
hurdnefre_template:addScreen(hurdnefre_start);


hurdnefre_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "While not fully up to traditional standards, like this here facility or big cloners you'll find in major cities, the cloners I sell are excellent for low volume personal use. Spacious, clean, and affordable. They work great on pets too!",
  stopConversation = "false",
  options = { 
  }
}
hurdnefre_template:addScreen(hurdnefre_shop);


hurdnefre_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
hurdnefre_template:addScreen(hurdnefre_confirm_purchase);


hurdnefre_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Take care and thanks for stopping by.",
  stopConversation = "true",
  options = {
  }
}
hurdnefre_template:addScreen(hurdnefre_bye);


hurdnefre_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "Have it your way...",
  stopConversation = "true",
  options = { 
  }
}
hurdnefre_template:addScreen(hurdnefre_nope);


hurdnefre_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a house?", "get_lost_reply"}
  }
}
hurdnefre_template:addScreen(hurdnefre_get_lost);

hurdnefre_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
hurdnefre_template:addScreen(hurdnefre_get_lost_reply);


hurdnefre_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
hurdnefre_template:addScreen(hurdnefre_faction_too_low);


hurdnefre_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
hurdnefre_template:addScreen(hurdnefre_insufficient_funds);


hurdnefre_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "Sorry. Ever since I woke up the other day I've been beside myself.",
  stopConversation = "false",
  options = {
	{"Stop!", "banter1a"},
  }
}
hurdnefre_template:addScreen(hurdnefre_banter1);


hurdnefre_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "Alright, alright. *chuckles* You're here to buy yourself a cloner, eh?",
  stopConversation = "false",
  options = {
    {"That I am", "shop"},
	{"Cloner? Nope", "bye"}
  }
}
hurdnefre_template:addScreen(hurdnefre_banter1a);


hurdnefre_banter2 = ConvoScreen:new {
  id = "banter2",
  leftDialog = "",
  customDialogText = "*Poke* You look the part. Good enough for me! Don't worry, the dizziness will go away and trust me, soon enough you'll be so busy living that you'll just carry on from where you left off, without looking back.",
  stopConversation = "false",
  options = {
	{"OK. I can't help but be sad though", "banter2a"}
  }
}
hurdnefre_template:addScreen(hurdnefre_banter2);


hurdnefre_banter2a = ConvoScreen:new {
  id = "banter2a",
  leftDialog = "",
  customDialogText = "Right, because your former self was the king of the universe, capable of leaping tall buildings in a single bound! Look buddy, just be happy you weren't a cheapskate and enjoy your new, old life.",
  stopConversation = "false",
  options = {
	{"Good point. I'll be fine.", "banter2b"},
  }
}
hurdnefre_template:addScreen(hurdnefre_banter2a);


hurdnefre_banter2b = ConvoScreen:new {
  id = "banter2b",
  leftDialog = "",
  customDialogText = "So fine that you're in the market to purchase your own personal cloning facility?",
  stopConversation = "false",
  options = {
	{"Sure! Show me what you're offering!", "shop"},
    {"Cloner? Nope", "bye"}
  }
}
hurdnefre_template:addScreen(hurdnefre_banter2b);


-- Template Footer
addConversationTemplate("hurdnefre_template", hurdnefre_template);
