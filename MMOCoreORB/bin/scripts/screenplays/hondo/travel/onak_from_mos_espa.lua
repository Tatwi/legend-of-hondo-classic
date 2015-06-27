-- Onak Personal Star Ship Travel System
-- R. Bassett Jr. (Tatwi) www.tpot.ca 2015
-- Function: NPCs and teleports for galactic travel hub.

-- Charging credits and Teleporting had to be placed in the seperate functions
-- due to conversingPlayer pointing to the creature object in getNextConversationScreen()
-- and the player object in runScreenHandlers(), each of which have different "methods".
-- At least that is the sense I made of it! - Tatwi 2015

local ObjectManager = require("managers.object.object_manager")

OnakFromEspaScreenPlay = ScreenPlay:new {
	numberOfActs = 1,
	safeHarbor = "false",
	dungeonTravel = "false",
	screenplayName = "OnakFromEspaScreenPlay"
}

registerScreenPlay("OnakFromEspaScreenPlay", true)

function OnakFromEspaScreenPlay:start()
  if (isZoneEnabled("tatooine")) then
    self:spawnSceneObjects()
    self:spawnMobiles()
  end
end

function OnakFromEspaScreenPlay:spawnSceneObjects()
  -- Placing The Onak
  spawnSceneObject("tatooine", "object/ship/rebel_gunboat_tier1.iff", -2829.73, 13.5, 2077.33, 0, 0.893976, 0, 0.448115, 0)
  -- Pretend Legs
  spawnSceneObject("tatooine", "object/static/structure/military/bunker_pillar_style_03.iff", -2826.75, 4.5, 2088.51, 0, 0.883777, 0, 0.467907, 0)
  spawnSceneObject("tatooine", "object/static/structure/military/bunker_pillar_style_03.iff", -2818.51, 4.5, 2077.41, 0, 0.883777, 0, 0.467907, 0)
  spawnSceneObject("tatooine", "object/static/structure/military/bunker_pillar_style_03.iff", -2841.1, 4.5, 2057.51, 0, 0.883777, 0, 0.467907, 0)
  spawnSceneObject("tatooine", "object/static/structure/military/bunker_pillar_style_03.iff", -2851.75, 4.5, 2070.71, 0, 0.883777, 0, 0.467907, 0)

end

function OnakFromEspaScreenPlay:spawnMobiles()
  -- Spawn Wolten Kinhara and Jammer
  local pWolten = spawnMobile("tatooine", "wolten_kinhara_from_espa", 1, -2822.5, 5, 2100.85, 37, 0 )
  local pJ4MR = spawnMobile("tatooine", "j4mr", 1, -2822.56, 5, 2098.63, 37, 0 )  
  
end


woltenkinharafromespa_convo_handler = Object:new {
	tstring = "myconversation"
 }


function woltenkinharafromespa_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
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
			
			-- Charage player for trip
			if (optionLink == "dantooine" or
			  	optionLink == "dathomir" or
			  	optionLink == "endor" or
			 	 optionLink == "lok" 
			 	) then
				-- Safe harbor.
				if (credits < 5000) then       
					insufficientFunds = "true"
				else
					creature:subtractCashCredits(5000)
					self.safeHarbor = "true"
				end

			elseif (optionLink == "dwb" or
			  		optionLink == "droid" or
			  		optionLink == "janta" or
			  		optionLink == "warren" or
			  		optionLink == "nightsister"
			 	) then
				-- Dungeon access.
				if (credits < 10000) then       
					insufficientFunds = "true"
				else
					creature:subtractCashCredits(10000)
					self.dungeonTravel = "true"
				end	
			end
			
			-- Play the next screen or jump to insufficient_funds
			if (insufficientFunds == "true") then
				nextConversationScreen = conversation:getScreen("insufficient_funds")
			else
				nextConversationScreen = conversation:getScreen(optionLink)
			end	
			
		end  -- ending if ( lastConversationScreen == nil )
	end -- ending if ( conversation ~= nil )
	
	return nextConversationScreen
end


function woltenkinharafromespa_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	-- Plays the screens of the conversation.
	local player = LuaSceneObject(conversingPlayer)
	local screen = LuaConversationScreen(conversationScreen)
	local screenID = screen:getScreenID()
	
	-- Teleport Player
	if (self.safeHarbor == "true") then
		if (screenID == "dantooine") then
		  player:switchZone("dantooine", 1521, 4, -6430, 0)
		elseif (screenID == "dathomir") then
		  player:switchZone("dathomir", 619, 0, 3089, 0)
		elseif (screenID == "endor") then
		  player:switchZone("endor", -955, 0, 1557, 0)
		elseif (screenID == "lok") then
		  player:switchZone("lok", 303, 11, 4836, 0)
		end
		self.safeHarbor = "false"
	end
	if (self.dungeonTravel == "true") then
		if (screenID == "dwb") then
		  	player:switchZone("endor", -4686, 13, 4310, 0)
		elseif (screenID == "droid") then
		  	player:switchZone("lok", 3485, 0, -5027, 0)
		elseif (screenID == "janta") then
		  	player:switchZone("dantooine", 7035, 0, -4078, 0)
		elseif (screenID == "warren") then
		  	player:switchZone("dantooine", -524, 7, -3773, 0)
		elseif (screenID == "nightsister") then
		  	player:switchZone("dathomir", -4266, 120, 65, 0)
		  	self.dungeonTravel = "false"
		end
	end
	return conversationScreen
end

