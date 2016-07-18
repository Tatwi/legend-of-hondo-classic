-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


jodibenson_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "jodibenson_convo_handler",
	screens = {}
}


jodibenson_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Come to see the show? Isn't it wonderful! The costumes, the sounds... all so real and full of life!",
  stopConversation = "false",
  options = {
  	{"Truly remarkable. I love the perfoming arts.", "banter1"},
  	{"So real it's dangerous!", "banter2"},
    {"Nope", "nope"}
  }
}
jodibenson_template:addScreen(jodibenson_start);


jodibenson_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Many good thespians have found their way to Mos Eisley, due to our grand theater, despite the towns rough and tumble reputation. I look forward to seeing the talent that blossoms in Mos Espa, thanks to you building this small theater. The magic of a performance isn't the grand stage, but the enormous heart of those who spin mystery and wonder upon it.",
  stopConversation = "false",
  options = { 
  }
}
jodibenson_template:addScreen(jodibenson_shop);


jodibenson_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
jodibenson_template:addScreen(jodibenson_confirm_purchase);


jodibenson_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "It was most wonderful to make your acquaintance. I hope to see you again soon!",
  stopConversation = "true",
  options = {
  }
}
jodibenson_template:addScreen(jodibenson_bye);


jodibenson_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "How rude! If only I knew the ways of the Force!",
  stopConversation = "true",
  options = { 
  }
}
jodibenson_template:addScreen(jodibenson_nope);


jodibenson_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a house?", "get_lost_reply"}
  }
}
jodibenson_template:addScreen(jodibenson_get_lost);

jodibenson_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
jodibenson_template:addScreen(jodibenson_get_lost_reply);


jodibenson_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
jodibenson_template:addScreen(jodibenson_faction_too_low);


jodibenson_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
jodibenson_template:addScreen(jodibenson_insufficient_funds);


jodibenson_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "Why thank you! We've put a lot of effort into researching the finer points of the culture on Dathomir, it's history, it's tragedies, and the rebirth of its societies. So sad what happened in the Clone Wars, but the power of the Force knows no bounds!",
  stopConversation = "false",
  options = {
	{"Aren't worried about the Empire?", "banter1a"},
  }
}
jodibenson_template:addScreen(jodibenson_banter1);


jodibenson_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "Heavens no! Why the Emperor himself has graciously funded our entire production. He even convinced the theater manager to allow us to use real trained Rancor. I think he wishes he new the Force and was a male witch in his youth, slave to a beautiful woman! *wink*",
  stopConversation = "false",
  options = {
    {"You're sure into this stuff, eh?", "banter1b"},
	{"Huh, maybe I have life all wrong...", "banter1c"}
  }
}
jodibenson_template:addScreen(jodibenson_banter1a);


jodibenson_banter1b = ConvoScreen:new {
  id = "banter1b",
  leftDialog = "",
  customDialogText = "Oh, I love the theater! It's my life. I live and breathe its dusty ropes and creaking floors, it's burlap sand sacks and warm lights... In fact, in an effort to share the joy with as many people as I can, I'm sponsoring a campaign to bring small theaters to every community on Tatooine. If you're interested, I can sell you a very inexpensive deed for a community theater.",
  stopConversation = "false",
  options = {
	{"Mos Espa could use a theater", "shop"}
  }
}
jodibenson_template:addScreen(jodibenson_banter1b);


jodibenson_banter1c = ConvoScreen:new {
  id = "banter1c",
  leftDialog = "",
  customDialogText = "Maybe you do. *Smile* Maybe you need to spend more time at the theater!",
  stopConversation = "false",
  options = {
	{"You're sure into this stuff, eh?", "banter1b"},
  }
}
jodibenson_template:addScreen(jodibenson_banter1c);


jodibenson_banter2 = ConvoScreen:new {
  id = "banter2",
  leftDialog = "",
  customDialogText = "Oh definitely! The troup takes their craft very seriously and those Rancor aren't stuffed, they're the real deal. Don't get too close to the stage during a performance, because the special effects can be lethal if you're not wearing a proper grounding apparatus.",
  stopConversation = "false",
  options = {
	{"Whoah, that's real lightning?", "banter2a"}
  }
}
jodibenson_template:addScreen(jodibenson_banter2);


jodibenson_banter2a = ConvoScreen:new {
  id = "banter2a",
  leftDialog = "",
  customDialogText = "It sure is! Our Set Deisgner says it's super high voltage, but low amps so it's harmless when you're wearing the grounding stuff. So far, so good!",
  stopConversation = "false",
  options = {
	{"That's incredible! You must really love this stuff, eh?", "banter1b"}
  }
}
jodibenson_template:addScreen(jodibenson_banter2a);


-- Template Footer
addConversationTemplate("jodibenson_template", jodibenson_template);
