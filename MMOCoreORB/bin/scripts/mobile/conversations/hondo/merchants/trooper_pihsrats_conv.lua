-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2016


trooperpihsrats_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "trooperpihsrats_convo_handler",
	screens = {}
}


trooperpihsrats_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "GOOD DAY, SOLDIER! MAY I INQUIRE AS TO WHY YOU ARE SO RUDELY INTERUPTING MY HARD EARNED COFFEE BREAK?",
  stopConversation = "false",
  options = {
  	{"I NEED A HOUSE, SIR!", "shop"},
  	{"You know... nevermind...", "banter1"},
    {"SORRY, SIR! GOOD BYE, SIR!", "nope"}
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_start);


trooperpihsrats_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "HOUSE? *sigh* Son, I been stuck here selling housing deeds for so long even yelling at people almost ain't fun. Almost. But, I'll get that promotion... I WILL! NOW QUIT FLAPPIN YER GABBER HOLE LIKE A RUSTY CLANKER AND BUY SOMETHING WHILE MY COFFFE'S STILL HOT!",
  stopConversation = "false",
  options = { 
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_shop);


trooperpihsrats_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "IS THIS WHAT YOU WANT?",
  stopConversation = "false",
  options = { 
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_confirm_purchase);


trooperpihsrats_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "GOOD DAY, SIR!",
  stopConversation = "true",
  options = {
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_bye);


trooperpihsrats_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "GIT OUTA MY OFFICE, MAGGOT!",
  stopConversation = "true",
  options = { 
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_nope);


trooperpihsrats_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "WHY ARE YOU FILTHIN UP MY OFFICE, TURD?",
  stopConversation = "false",
  options = {
	{"So, I take it you're not going to sell me a house?", "get_lost_reply"}
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_get_lost);

trooperpihsrats_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "WHAT PART OF -I'M HOLDING A RIFLE- DID YOU NOT UNDERSTAND?",
  stopConversation = "true",
  options = {
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_get_lost_reply);


trooperpihsrats_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "HOW DID YOU GET IN HERE?",
  stopConversation = "false",
  options = {
	{"Through the door?", "bye"}
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_faction_too_low);


trooperpihsrats_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "WHO GOES SHOPPING WITHOUT THEIR WALLET??? WHAT DO YOU THINK THIS IS, ON OF THEM LOVEY DOVEY GARDEN CO-OP THINGS? OOOH, HAVE YOU TRIED THE SUN DRIED TOMA - GO TO THE BANK, YA HIPPY!",
  stopConversation = "true",
  options = { 
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_insufficient_funds);


trooperpihsrats_banter1 = ConvoScreen:new {
  id = "banter1",
  leftDialog = "",
  customDialogText = "I LIKE YOU, SOLDIER! A GOOD SOLDIER KNOWS WHEN TO SHUT THE HELL UP AND FOLLOW ORDERS. DO YOU WANT TO BUY A HOUSE, MAGGOT?",
  stopConversation = "false",
  options = {
	{"Pardon?", "banter1a"},
	{"YES, SIR!", "shop"},
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_banter1);


trooperpihsrats_banter1a = ConvoScreen:new {
  id = "banter1a",
  leftDialog = "",
  customDialogText = "WATCH IT, DOROTHY, OR THAT HOUSE WILL BE LANDING ON YOUR SORRY BE-HIND. DO YOU HEAR ME, DROID FOR BRAINS?",
  stopConversation = "false",
  options = {
	{"I hear you sell houses?", "shop"},
    {"Forget it...", "bye"}
  }
}
trooperpihsrats_template:addScreen(trooperpihsrats_banter1a);


-- Template Footer
addConversationTemplate("trooperpihsrats_template", trooperpihsrats_template);
