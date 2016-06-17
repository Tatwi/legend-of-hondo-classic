-- Tarkin New Player Festival

helpertrainers_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "helpertrainers_convo_handler",
	screens = {}
}


helpertrainers_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Hey, you look a little lost. Need some help finding a trainer? ",
  stopConversation = "false",
  options = {
    {"Thanks, let's get started.", "quest_start"},
    {"Nah, I'm good...", "bye"}
  }
}
helpertrainers_template:addScreen(helpertrainers_start);

helpertrainers_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Sure thing, boss.",
  stopConversation = "true",
  options = { 
  }
}
helpertrainers_template:addScreen(helpertrainers_bye);


-- Quest

helpertrainers_quest_start = ConvoScreen:new {
  id = "quest_start",
  leftDialog = "",
  customDialogText = "Here, take this communicator and head to the waypoints as I give them to you.",
  stopConversation = "false",
  options = {
    {"Sounds good.", "quest_accept"}
  }
}
helpertrainers_template:addScreen(helpertrainers_quest_start);



helpertrainers_quest_accept = ConvoScreen:new {
  id = "quest_accept",
  leftDialog = "",
  customDialogText = "Have fun out there!",
  stopConversation = "true",
  options = { 
  }
}
helpertrainers_template:addScreen(helpertrainers_quest_accept);



helpertrainers_quest_active = ConvoScreen:new {
  id = "quest_active",
  leftDialog = "",
  customDialogText = "Didn't I give you a job to do?.",
  stopConversation = "false",
  options = { 
    {"You sure did, I will get right on it!", "bye"},
    {"I don't want to do this job anymore.", "confirm_reset"}
  }
}
helpertrainers_template:addScreen(helpertrainers_quest_active);

helpertrainers_confirm_reset = ConvoScreen:new {
  id = "confirm_reset",
  leftDialog = "",
  customDialogText = "Are you sure you want to abandon this mission?",
  stopConversation = "false",
  options = { 
    {"Yes, I am sure I want to abandon this mission.", "quest_reset"},
    {"No, I want to keep trying.", "bye"}
  }
}
helpertrainers_template:addScreen(helpertrainers_confirm_reset);


helpertrainers_quest_reset = ConvoScreen:new {
  id = "quest_reset",
  leftDialog = "",
  customDialogText = "Come back and see me if you would like to try again later.",
  stopConversation = "true",
  options = { 
  }
}
helpertrainers_template:addScreen(helpertrainers_quest_reset);


helpertrainers_quest_complete = ConvoScreen:new {
  id = "quest_complete",
  leftDialog = "",
  customDialogText = "So that's, that! Hope you enjoyed the tour. Hey, while you're here, take this map and see what you can make of it. I find'em laying around a lot, but they're just a bunch nonsense to me!",
  stopConversation = "false",
  options = { 
    {"Will do, thanks.", "give_rewards"}
  }
}
helpertrainers_template:addScreen(helpertrainers_quest_complete);

helpertrainers_give_rewards = ConvoScreen:new {
  id = "give_rewards",
  leftDialog = "",
  customDialogText = "Feel free to come back and see me later if you need a refresher course, eh.",
  stopConversation = "true",
  options = { 
  }
}
helpertrainers_template:addScreen(helpertrainers_give_rewards);

helpertrainers_no_space = ConvoScreen:new {
  id = "no_space",
  leftDialog = "",
  customDialogText = "Looks like you need to make some room in your inventory before I can give you a reward!",
  stopConversation = "true",
  options = { 
  }
}
helpertrainers_template:addScreen(helpertrainers_no_space);


-- Template Footer
addConversationTemplate("helpertrainers_template", helpertrainers_template);