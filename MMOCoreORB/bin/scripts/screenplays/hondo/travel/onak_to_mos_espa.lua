-- Onak Personal Star Ship Travel System
-- R. Bassett Jr. (Tatwi) www.tpot.ca 2015
-- Function: NPCs and teleports for galactic travel hub.

-- Return trip the home base of Mos Espa is free

local ObjectManager = require("managers.object.object_manager")

OnakToEspaScreenPlay = ScreenPlay:new {
	numberOfActs = 1,
	safeHarbor = "false",
	dungeonTravel = "false",
	screenplayName = "OnakToEspaScreenPlay"
}

registerScreenPlay("OnakToEspaScreenPlay", true)

function OnakToEspaScreenPlay:start()
  if (isZoneEnabled("tatooine")) then
    self:spawnSceneObjects()
    self:spawnMobiles()
  end
end

function OnakToEspaScreenPlay:spawnSceneObjects()

	-- J4M-R's Radio Antenna
	spawnSceneObject("endor", "object/static/structure/corellia/corl_power_arial_thin.iff", -4687, 13, 4308, 0, 0.883777, 0, 0.467907, 0)
	spawnSceneObject("dantooine", "object/static/structure/corellia/corl_power_arial_thin.iff", 7038, 45.5, -4070, 0, 0.883777, 0, 0.467907, 0)
	spawnSceneObject("dantooine", "object/static/structure/corellia/corl_power_arial_thin.iff", -526, 6, -3769, 0, 0.883777, 0, 0.467907, 0)
	spawnSceneObject("dathomir", "object/static/structure/corellia/corl_power_arial_thin.iff", -4267, 120, 67, 0, 0.883777, 0, 0.467907, 0)

	-- Spawn The Onak at Nym's on Lok
	spawnSceneObject("lok", "object/ship/rebel_gunboat_tier1.iff", 289.182, 20.735, 4812.81, 0, 0.992228, 0, 0.124436, 0)
	-- Pretend Legs
	spawnSceneObject("lok", "object/static/structure/military/bunker_pillar_style_03.iff", 299.087, 11.5, 4819.74, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("lok", "object/static/structure/military/bunker_pillar_style_03.iff", 284.263, 11.5, 4823.31, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("lok", "object/static/structure/military/bunker_pillar_style_03.iff", 275.936, 11.5, 4793.05, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("lok", "object/static/structure/military/bunker_pillar_style_03.iff", 291.377, 11.5, 4789.37, 0, 0.993845, 0, 0.110782, 0)

	-- Spawn The Onak at the Droid Cave on Lok
	spawnSceneObject("lok", "object/ship/rebel_gunboat_tier1.iff", 3507.18, 20.7, -5008.01, 0, -0.580131, 0, 0.814523, 0)
	-- Pretend Legs
	spawnSceneObject("lok", "object/static/structure/military/bunker_pillar_style_03.iff", 3496.16, 11.4, -5004, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("lok", "object/static/structure/military/bunker_pillar_style_03.iff", 3500.96, 11.4, -5017.94, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("lok", "object/static/structure/military/bunker_pillar_style_03.iff", 3530.89, 11.4, -5007.85, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("lok", "object/static/structure/military/bunker_pillar_style_03.iff", 3525.69, 11.4, -4993.13, 0, 0.993845, 0, 0.110782, 0)

	-- Spawn The Onak at the Pirate Outpost on Dantooine
	spawnSceneObject("dantooine", "object/ship/rebel_gunboat_tier1.iff", 1503.4, 12.3, -6452.76, 0, 0.943439, 0, 0.331547, 0)
	-- Pretend Legs
	spawnSceneObject("dantooine", "object/static/structure/military/bunker_pillar_style_03.iff", 1503.42, 2.5, -6440.98, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("dantooine", "object/static/structure/military/bunker_pillar_style_03.iff", 1515.1, 2.5, -6450.38, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("dantooine", "object/static/structure/military/bunker_pillar_style_03.iff", 1495.5, 2.5, -6475.15, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("dantooine", "object/static/structure/military/bunker_pillar_style_03.iff", 1483.4, 1.7, -6465.27, 0, 0.993845, 0, 0.110782, 0)

end

function OnakToEspaScreenPlay:spawnMobiles()
 	-- Safe Harbor
 	local pWoltenLok = spawnMobile("lok", "j4mr_travel_lok", 1, 295.97, 12.0319, 4827.06, 26, 0 )
	local pPilotDantooine = spawnMobile("dantooine", "wolten_kinhara_dant_pirate", 1, 1506, 4, -6439, 48, 0)
	local pPilotDathomir = spawnMobile("dathomir", "j4mr_travel", 1, 597.006, 6, 3095.09, 115, 0)
	local pPilotEndor = spawnMobile("endor", "j4mr_travel", 1, -972.542, 73, 1560.99, 123, 0)
	-- Dungeons
	local pPilot1 = spawnMobile("endor", "j4mr_travel", 1, -4688, 13, 4309, 42, 0)  
	local pPilot5 = spawnMobile("dantooine", "j4mr_travel", 1, 7039, 46, -4071, 149, 0) 
	local pPilot6= spawnMobile("dantooine", "j4mr_travel", 1, -527, 7, -3770, -151, 0)
	local pPilot7 = spawnMobile("lok", "j4mr_travel_lok", 1, 3478, 12, -5023, 42, 0)
	local pPilot8 = spawnMobile("dathomir", "j4mr_travel", 1, -4268, 120, 68, 42, 0)
	
end

-- J4M-R's Generic Conversation

j4mrtoespa_convo_handler = Object:new {
	tstring = "myconversation"
 }


function j4mrtoespa_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	local creature = LuaCreatureObject(conversingPlayer)
	local convosession = creature:getConversationSession()
	local credits = creature:getCashCredits()
	
	lastConversation = nil

	local conversation = LuaConversationTemplate(conversationTemplate)
	
	local nextConversationScreen 
	
	if ( conversation ~= nil ) then
		if ( convosession ~= nil ) then 
			 local session = LuaConversationSession(convosession)
			 
			 if ( session ~= nil ) then
			 	lastConversationScreen = session:getLastConversationScreen()
			 end
		end
		
		local insufficientFunds = "false"
		
		if ( lastConversationScreen == nil ) then
			nextConversationScreen = conversation:getInitialScreen()
		else		
			local luaLastConversationScreen = LuaConversationScreen(lastConversationScreen)
			local optionLink = luaLastConversationScreen:getOptionLink(selectedOption)
			
			nextConversationScreen = conversation:getScreen(optionLink)
			
		end  -- ending if ( lastConversationScreen == nil )
	end -- ending if ( conversation ~= nil )
	
	return nextConversationScreen
end


function j4mrtoespa_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	-- Plays the screens of the conversation.
	local player = LuaSceneObject(conversingPlayer)
	local screen = LuaConversationScreen(conversationScreen)
	local screenID = screen:getScreenID()
	
	-- Teleport Player
	if (screenID == "confirm") then
		player:switchZone("tatooine", -2824, 0, 2105, 0) 
	end
	
	return conversationScreen
end


-- J4M-R's Lok Conversation

j4mrlok_convo_handler = Object:new {
	tstring = "myconversation"
 }


function j4mrlok_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	local creature = LuaCreatureObject(conversingPlayer)
	local convosession = creature:getConversationSession()
	local credits = creature:getCashCredits()
	
	lastConversation = nil

	local conversation = LuaConversationTemplate(conversationTemplate)
	
	local nextConversationScreen 
	
	if ( conversation ~= nil ) then
		if ( convosession ~= nil ) then 
			 local session = LuaConversationSession(convosession)
			 
			 if ( session ~= nil ) then
			 	lastConversationScreen = session:getLastConversationScreen()
			 end
		end
		
		local insufficientFunds = "false"
		
		if ( lastConversationScreen == nil ) then
			nextConversationScreen = conversation:getInitialScreen()
		else		
			local luaLastConversationScreen = LuaConversationScreen(lastConversationScreen)
			local optionLink = luaLastConversationScreen:getOptionLink(selectedOption)
			
			nextConversationScreen = conversation:getScreen(optionLink)
			
		end  -- ending if ( lastConversationScreen == nil )
	end -- ending if ( conversation ~= nil )
	
	return nextConversationScreen
end


function j4mrlok_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	-- Plays the screens of the conversation.
	local player = LuaSceneObject(conversingPlayer)
	local screen = LuaConversationScreen(conversationScreen)
	local screenID = screen:getScreenID()
	
	-- Teleport Player
	if (screenID == "espa") then
		player:switchZone("tatooine", -2824, 0, 2105, 0)
	elseif (screenID == "droid") then
  		player:switchZone("lok", 3485, 0, -5027, 0)
  	elseif (screenID == "nyms") then
  		player:switchZone("lok", 303, 11, 4836, 0) 
	end
	
	return conversationScreen
end


-- Wolten's Conversation

woltenkinharadantpirate_convo_handler = Object:new {
	tstring = "myconversation"
 }


function woltenkinharadantpirate_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	local creature = LuaCreatureObject(conversingPlayer)
	local convosession = creature:getConversationSession()
	local credits = creature:getCashCredits()
	
	lastConversation = nil

	local conversation = LuaConversationTemplate(conversationTemplate)
	
	local nextConversationScreen 
	
	if ( conversation ~= nil ) then
		if ( convosession ~= nil ) then 
			 local session = LuaConversationSession(convosession)
			 
			 if ( session ~= nil ) then
			 	lastConversationScreen = session:getLastConversationScreen()
			 end
		end
		
		local insufficientFunds = "false"
		
		if ( lastConversationScreen == nil ) then
			nextConversationScreen = conversation:getInitialScreen()
		else		
			local luaLastConversationScreen = LuaConversationScreen(lastConversationScreen)
			local optionLink = luaLastConversationScreen:getOptionLink(selectedOption)
			
			nextConversationScreen = conversation:getScreen(optionLink)
			
		end  -- ending if ( lastConversationScreen == nil )
	end -- ending if ( conversation ~= nil )
	
	return nextConversationScreen
end


function woltenkinharadantpirate_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	-- Plays the screens of the conversation.
	local player = LuaSceneObject(conversingPlayer)
	local screen = LuaConversationScreen(conversationScreen)
	local screenID = screen:getScreenID()
	
	-- Teleport Player
	if (screenID == "confirm") then
		player:switchZone("tatooine", -2824, 0, 2105, 0) 
	end
	
	return conversationScreen
end

