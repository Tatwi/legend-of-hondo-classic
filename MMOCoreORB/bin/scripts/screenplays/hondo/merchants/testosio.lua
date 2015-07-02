-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

TestosioSP = ScreenPlay:new {
	numberOfActs = 1, 
	questString = "testosio",
	states = {}, 
	relations = { 
		-- NPC's standing with these factions. 
		-- Player must have higher npcStanding to buy. 
		-- Negative number means enemy faction, lower values make NPC more leinient toward player relations with his enemy. 
		-- Set to -1 to make NPC refuse to talk if player has 2+ faction with his enemy.
		-- NIL faction values mean player always accepted, no discount, no sircharge.
		-- priceAdjust applies discounts and sircharges on a sliding scale.
		{name="jabba", npcStanding=300, priceAdjust=25}, 
		{name="thug", npcStanding=-1000, priceAdjust=50} 
	},
	goods = {
		{optName="survey_mineral", cost=5, itemName="Mineral Survey Tool", item="object/tangible/survey_tool/survey_tool_mineral.iff"}, 
		{optName="survey_chemical", cost=10, itemName="Chemical Survey Tool", item="object/tangible/survey_tool/survey_tool_liquid.iff"},
		{optName="slitherhorn", cost=100, itemName="Slitherhorn", item="object/tangible/instrument/slitherhorn.iff"}, 
		{optName="fanfar", cost=500, itemName="Fanfar", item="object/tangible/instrument/fanfar.iff"}
	},
	selectedItem = "", -- When player makes a selection, it gets written here to be used after the confirmation step.
}

registerScreenPlay("TestosioSP", true)

function TestosioSP:start() 
	-- Mos Espa
	spawnMobile("tatooine", "testosio", 1, -2946, 5.0, 2077, 108, 0 )
end


-- Purchasing Functions

function TestosioSP:refuseService(conversingPlayer)
	print ("I hate this function!")
	return ObjectManager.withCreatureAndPlayerObject(conversingPlayer, function(player, playerObject)

	-- Check NPC/Player relations
	for lc = 1, table.getn(TestosioSP.relations) , 1 do
		print (TestosioSP.relations[lc].name)
	
		playerStanding = playerObject:getFactionStanding(TestosioSP.relations[lc].name)
		
		print ("Player standing is .... " .. playerStanding)
		
		if (playerStanding < TestosioSP.relations[lc].npcStanding) then
			-- Not friendly enough for service
			creatureObject:sendSystemMessage("Try earning some more " .. TestosioSP.relations[lc].name " faction before visiting this Merchant again. One good way to earn faction with a group is to complete missions for them. Another way to gain a group's favour, generally speaking, is to fight their enemies. You can check your standing on the Factions tab of the Character Screen.")
			return true
		end
		
		if (self.relations[lc].npcStanding < 0 and (TestosioSP.relations[lc].npcStanding + playerStanding) > 0) then
			-- Too friendly with my enemy for service
			return true
		end	
	end
	 return false -- Will talk to player
	 end)
end









-- Conversation Logic

testosio_convo_handler = Object:new {
	tstring = "myconversation"
 }


function testosio_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	local creature = LuaCreatureObject(conversingPlayer)
	local player = LuaSceneObject(conversingPlayer)
	local convosession = creature:getConversationSession()
	-- Get some information about the player.
	local credits = creature:getCashCredits()
	local pInventory = creature:getSlottedObject("inventory")
	local inventory = LuaSceneObject(pInventory)
	
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
			if (TestosioSP:refuseService(conversingPlayer) == 1) then
				nextConversationScreen = conversation:getScreen("get_lost")
			elseif (TestosioSP:refuseService(conversingPlayer) == 2) then
				nextConversationScreen = conversation:getScreen("faction_too_low")
			else 
				nextConversationScreen = conversation:getInitialScreen()
			end
		else		
			local luaLastConversationScreen = LuaConversationScreen(lastConversationScreen)
			local optionLink = luaLastConversationScreen:getOptionLink(selectedOption)
			

			-- Sell Item
			for lc = 1, table.getn(TestosioSP.goods) , 1 do
				if (optionLink == TestosioSP.goods[lc].optName) then 
					merchantSystem:processSale(creature, pInventory, TestosioSP.goods[lc].cost, TestosioSP.goods[lc].item)
					--creature:subtractCashCredits(TestosioSP.goods[lc].cost)
					--local pItem = giveItem(pInventory, TestosioSP.goods[lc].item, -1)
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


function testosio_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	-- Plays the screens of the conversation.
	local player = LuaSceneObject(conversingPlayer)
	local screen = LuaConversationScreen(conversationScreen)
	local screenID = screen:getScreenID()
	
	if ( screenID == "yes" ) then
		-- Clone screen
		conversationScreen = screen:cloneScreen()
		local screen = LuaConversationScreen(conversationScreen)
		conversationScreen = screen:cloneScreen()
		local clonedConversation = LuaConversationScreen(conversationScreen)
		
		for lc = 1, table.getn(TestosioSP.goods) , 1 do
			clonedConversation:addOption(TestosioSP.goods[lc].itemName .. "  (" .. TestosioSP.goods[lc].cost .. ")" , TestosioSP.goods[lc].optName)
		end 
	end
	
	
	return conversationScreen
end