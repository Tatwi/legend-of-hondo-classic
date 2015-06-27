-- Onak Personal Star Ship Travel System
-- R. Bassett Jr. (Tatwi) www.tpot.ca 2015
-- Function: NPCs and teleports for galactic travel hub.

-- Return trip the home base of Mos Espa is free

local ObjectManager = require("managers.object.object_manager")

OnakDantPirate = ScreenPlay:new {
	numberOfActs = 1,
	safeHarbor = "false",
	dungeonTravel = "false",
	screenplayName = "OnakDantPirate"
}

registerScreenPlay("OnakDantPirate", true)

function OnakDantPirate:start()
  if (isZoneEnabled("tatooine")) then
    self:spawnSceneObjects()
    self:spawnMobiles()
  end
end

function OnakDantPirate:spawnSceneObjects()
	-- Spawn The Onak at the Pirate Outpost on Dantooine
	spawnSceneObject("dantooine", "object/ship/rebel_gunboat_tier1.iff", 1503.4, 12.3, -6452.76, 0, 0.943439, 0, 0.331547, 0)
	-- Pretend Legs
	spawnSceneObject("dantooine", "object/static/structure/military/bunker_pillar_style_03.iff", 1503.42, 2.5, -6440.98, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("dantooine", "object/static/structure/military/bunker_pillar_style_03.iff", 1515.1, 2.5, -6450.38, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("dantooine", "object/static/structure/military/bunker_pillar_style_03.iff", 1495.5, 2.5, -6475.15, 0, 0.993845, 0, 0.110782, 0)
	spawnSceneObject("dantooine", "object/static/structure/military/bunker_pillar_style_03.iff", 1483.4, 1.7, -6465.27, 0, 0.993845, 0, 0.110782, 0)

end

function OnakDantPirate:spawnMobiles()
 	-- Safe Harbor
	local pPilotDantooine = spawnMobile("dantooine", "wolten_kinhara_dant_pirate", 1, 1506, 4, -6439, 48, 0)
	
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

