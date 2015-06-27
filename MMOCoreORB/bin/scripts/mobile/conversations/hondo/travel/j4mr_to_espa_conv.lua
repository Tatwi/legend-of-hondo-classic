-- Legend of Hondo Travel System
-- By Tatwi www.tpot.ca 2015


j4mrtoespa_template = ConvoTemplate:new {
	initialScreen = "to_espa_start",
	templateType = "Lua",
	luaClassHandler = "j4mrtoespa_convo_handler",
	screens = {}
}



j4mrtoespa_to_espa_start = ConvoScreen:new {
  id = "to_espa_start",
  leftDialog = "",
  customDialogText = "Nice to see you boss. I assume that I'm the droid you were looking for.",
  stopConversation = "false",
  options = {
    {"Very funny Jammer. Where's the ship?", "explain1"},
    {"Do you ever get bored waiting around?", "curious1"},
    {"Radio Wolten and get us out of here. (Travel to Mos Espa)", "confirm"}
  }
}
j4mrtoespa_template:addScreen(j4mrtoespa_to_espa_start);


j4mrtoespa_explain1 = ConvoScreen:new {
  id = "explain1",
  leftDialog = "",
  customDialogText = "The Onak is a big ship, Sir, and given its history of being swallowed by a bog and your...",
  stopConversation = "false",
  options = {
	{"My what, Jammer?", "explain2"}
  }
}
j4mrtoespa_template:addScreen(j4mrtoespa_explain1);


j4mrtoespa_explain2 = ConvoScreen:new {
  id = "explain2",
  leftDialog = "",
  customDialogText = "You're exceedingly great taste in music, Sir! I was reminded of that for a moment.",
  stopConversation = "false",
  options = {
	{"Sorry, what were you saying about the ship?", "explain3"}
  }
}
j4mrtoespa_template:addScreen(j4mrtoespa_explain2);


j4mrtoespa_explain3 = ConvoScreen:new {
  id = "explain3",
  leftDialog = "",
  customDialogText = "That Wolten doesn't like to land anywhere that isn't solid and flat, so he'll fly down from orbit and pick us up rather than landing here. Humans, eh!",
  stopConversation = "false",
  options = {
	{"Yeah, Humans... Let's go. (Travel to Mos Espa)", "confirm"}
  }
}
j4mrtoespa_template:addScreen(j4mrtoespa_explain3);


j4mrtoespa_curious1 = ConvoScreen:new {
  id = "curious1",
  leftDialog = "",
  customDialogText = "Not really.",
  stopConversation = "false",
  options = {
	{"Why did I even ask?", "to_espa_start"},
	{"Is that because you're an old, rusty bucket of bolts?", "curious2"}
  }
}
j4mrtoespa_template:addScreen(j4mrtoespa_curious1);


j4mrtoespa_curious2 = ConvoScreen:new {
  id = "curious2",
  leftDialog = "",
  customDialogText = "Thanks, Dave... And no, it's because I spend my time tending to my collection of spores, molds, and fungus.",
  stopConversation = "false",
  options = {
	{"That is disgusting and you KNOW my name's not Dave!", "to_espa_start"},
	{"Oh... you're a rusty bucket of gross... OK.", "curious3"}
  }
}
j4mrtoespa_template:addScreen(j4mrtoespa_curious2);


j4mrtoespa_curious3 = ConvoScreen:new {
  id = "curious3",
  leftDialog = "",
  customDialogText = "Some of my best samples were harvested from your...",
  stopConversation = "false",
  options = {
	{"JUST RADIO WOLTEN! (Travel to Mos Espa)", "confirm"}
  }
}
j4mrtoespa_template:addScreen(j4mrtoespa_curious3);



j4mrtoespa_confirm = ConvoScreen:new {
  id = "confirm",
  leftDialog = "",
  stopConversation = "true",
  options = { 
  }
}
j4mrtoespa_template:addScreen(j4mrtoespa_confirm);



-- Template Footer
addConversationTemplate("j4mrtoespa_template", j4mrtoespa_template);
