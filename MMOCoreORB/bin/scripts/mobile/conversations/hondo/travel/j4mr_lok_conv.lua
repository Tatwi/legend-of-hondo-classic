-- Legend of Hondo Travel System
-- By Tatwi www.tpot.ca 2015


j4mrlok_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "j4mrlok_convo_handler",
	screens = {}
}


j4mrlok_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "I love flying on Lok. Just like old times with the Z-95! Where are we heading today?",
  stopConversation = "false",
  options = {
  	{"Wolten left you in charge again, eh?", "he_did"},
    {"Let's head back Home. (Travel to Mos Espa)", "espa"},
    {"We're going to Nym's (Quick Travel)", "nyms"},
    {"Still remember where the Droid Cave is? (Quick Travel)", "droid"}
  }
}
j4mrlok_template:addScreen(j4mrlok_start);


j4mrlok_he_did = ConvoScreen:new {
  id = "he_did",
  leftDialog = "",
  customDialogText = "If I pretend it's because I am a great pilot, it warms my circuits.",
  stopConversation = "false",
  options = {
  	{"But you know he just wanted to go find some action at the cantina.", "yeah"}
  }
}
j4mrlok_template:addScreen(j4mrlok_he_did);


j4mrlok_yeah = ConvoScreen:new {
  id = "yeah",
  leftDialog = "",
  customDialogText = "Yeah.",
  stopConversation = "false",
  options = {
  	{"That's alright, little buddy. Let's go.", "start"}
  }
}
j4mrlok_template:addScreen(j4mrlok_yeah);


j4mrlok_espa = ConvoScreen:new {
  id = "espa",
  leftDialog = "",
  stopConversation = "true",
  options = { 
  }
}
j4mrlok_template:addScreen(j4mrlok_espa);


j4mrlok_nyms = ConvoScreen:new {
  id = "nyms",
  leftDialog = "",
  stopConversation = "true",
  options = { 
  }
}
j4mrlok_template:addScreen(j4mrlok_nyms);


j4mrlok_droid = ConvoScreen:new {
  id = "droid",
  leftDialog = "",
  stopConversation = "true",
  options = { 
  }
}
j4mrlok_template:addScreen(j4mrlok_droid);


-- Template Footer
addConversationTemplate("j4mrlok_template", j4mrlok_template);
