-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

-- relations table is the NPC's standing with the specified factions. 
-- Player must have higher npcStanding to buy, unless the value is the special case of -9000. 
-- Negative number means enemy faction, lower values make NPC more leinient toward player relations with his enemy. 
-- Set npcStanding=-1 to make NPC refuse to talk if player has 2+ faction with his enemy.
-- Set npcStanding=-9000 to make the NPC always do business, but also adjust the price based on the specified faction standing.
-- NIL faction values means player always accepted, no discount, no sircharge.
-- priceAdjust applies % discount/sircharge on a sliding scale. Use 1 to 99. 
-- +5000 friendly faction = 100% discount, -5000 enemy faction = 100% surcharge.
-- Price adjustments are cumulative when multiple factions are present.
-- "Enemy of my Enemy" discount is 1/4th of the "My Enemy/Enemy of my friend" surcharge.

local ObjectManager = require("managers.object.object_manager")

TestosioSP = ScreenPlay:new {
	numberOfActs = 1, 
	questString = "testosio",
	states = {}, 
	relations = { 
		{name="jabba", npcStanding=300, priceAdjust=25}, -- Friend
		{name="rebel", npcStanding=-9000, priceAdjust=10}, -- Adjust price only
		{name="thug", npcStanding=-1000, priceAdjust=50}  -- Enemy
	},
	goods = {
		{optName="survey_mineral", cost=250, itemName="Mineral Survey Tool", item="object/tangible/survey_tool/survey_tool_mineral.iff"}, 
		{optName="survey_chemical", cost=300, itemName="Chemical Survey Tool", item="object/tangible/survey_tool/survey_tool_liquid.iff"},
		{optName="slitherhorn", cost=100, itemName="Slitherhorn", item="object/tangible/instrument/slitherhorn.iff"}, 
		{optName="fanfar", cost=500, itemName="Fanfar", item="object/tangible/instrument/fanfar.iff"}
	},
}

registerScreenPlay("TestosioSP", true)

function TestosioSP:start() 
	-- Mos Espa
	spawnMobile("tatooine", "testosio", 1, -2946, 5.0, 2077, 108, 0 )
end


-- Purchasing Functions

function TestosioSP:firstToUpper(str)
	-- Convert word to Word
    return (str:gsub("^%l", string.upper))
end

function TestosioSP:refuseService(conversingPlayer)
	return ObjectManager.withCreatureAndPlayerObject(conversingPlayer, function(creatureObject, playerObject)
		-- Check NPC/Player relations
		for lc = 1, table.getn(TestosioSP.relations) , 1 do
			local playerStanding = playerObject:getFactionStanding(TestosioSP.relations[lc].name)
			
			if (playerStanding ~= -9000) then -- Ignore special case price adjust standing
				if (playerStanding < TestosioSP.relations[lc].npcStanding and TestosioSP.relations[lc].npcStanding > 0) then
					creatureObject:sendSystemMessage("Hint: Increase your " .. TestosioSP:firstToUpper(TestosioSP.relations[lc].name) .. " faction and speak with the NPC again.")
					return 2 -- Not friendly enough for service
				elseif (TestosioSP.relations[lc].npcStanding < 0 and (TestosioSP.relations[lc].npcStanding + playerStanding) > 0) then
					creatureObject:sendSystemMessage("Hint: Decrease your " .. TestosioSP:firstToUpper(TestosioSP.relations[lc].name) .. " faction and speak with the NPC again.")
					return 1 -- Too friendly with my enemy for service
				end
			end
		end
		return 0 -- Will talk to player
	end)
end

function TestosioSP:adjustPrice(conversingPlayer, cost)

	print ("adjustPrice function called...")
	
	return ObjectManager.withCreatureAndPlayerObject(conversingPlayer, function(creatureObject, playerObject)
		-- Calculate price adjustment
		local finalPrice = cost
		for lc = 1, table.getn(TestosioSP.relations) , 1 do
			local playerStanding = playerObject:getFactionStanding(TestosioSP.relations[lc].name)
			playerStanding = math.min(playerStanding, 5000) -- cap faction due to Rebel/Imperial
			
			local adjustment = TestosioSP.relations[lc].priceAdjust
			
			print ("playerStanding is: " .. playerStanding)
			print ("adjustment is: " .. adjustment)
			
			if (playerStanding ~= nil) then
				if (playerStanding > 0 and (TestosioSP.relations[lc].npcStanding > 0 or TestosioSP.relations[lc].npcStanding == -9000)) then
					-- Discount: You are my friend or are a friend of my friend
					finalPrice = finalPrice / ((adjustment * playerStanding / 5000 ) / 100 + 1)
				elseif (playerStanding < 0 and TestosioSP.relations[lc].npcStanding < 0 and TestosioSP.relations[lc].npcStanding ~= -9000) then
					-- Discount: You are also the enemy of my enemy
					finalPrice = finalPrice / ((adjustment / 4 * math.abs(playerStanding) / 5000 ) / 100 + 1)
				elseif (playerStanding > 0 and TestosioSP.relations[lc].npcStanding < 0 ) then
					-- Surcharge: You are friendly with my enemy
					finalPrice = finalPrice * ((adjustment * playerStanding / 5000 ) / 100 + 1)
				elseif (playerStanding < 0 and TestosioSP.relations[lc].npcStanding == -9000) then
					-- Surcharge: You are an enemy of my friend
					finalPrice = finalPrice * ((adjustment * math.abs(playerStanding) / 5000 ) / 100 + 1)
				end	
			end
			print ("finalPrice in loop " .. lc .. " is " .. finalPrice)
		end
		
		print ("Final Price is: " .. finalPrice)
		return math.floor(finalPrice)
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
		local noSpace = "false"
		
		if ( lastConversationScreen == nil ) then
			-- See if NPC will talk to player
			local canTalk = TestosioSP:refuseService(conversingPlayer)
		
			if (canTalk == 1) then
				nextConversationScreen = conversation:getScreen("get_lost")
			elseif (canTalk == 2) then
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
					if (inventory:hasFullContainerObjects() == true) then
						-- Bail if the player doesn't have enough space in their inventory.
						noSpace = "true"
						creature:sendSystemMessage("You need 1 available inventory space to complete transaction.")
					else
						-- Sell the item 
						local chargePlayer = TestosioSP:adjustPrice(conversingPlayer, TestosioSP.goods[lc].cost)
						
						print ("chargePlayer is ... " .. chargePlayer)
						
						creature:subtractCashCredits(chargePlayer)
						local pItem = giveItem(pInventory, TestosioSP.goods[lc].item, -1)
					end
				end
			end
			
			-- Play the next screen or jump to insufficient_funds
			if (insufficientFunds == "true") then
				nextConversationScreen = conversation:getScreen("insufficient_funds")
			elseif (noSpace == "true") then
				nextConversationScreen = conversation:getScreen("no_space")
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
			local price = TestosioSP:adjustPrice(conversingPlayer, TestosioSP.goods[lc].cost)
			clonedConversation:addOption(TestosioSP.goods[lc].itemName .. "  (" .. price .. ")" , TestosioSP.goods[lc].optName)
		end 
	end
	
	
	return conversationScreen
end