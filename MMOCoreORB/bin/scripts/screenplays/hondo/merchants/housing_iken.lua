-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

IKenSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="townsperson", npcStanding=-9000, priceAdjust=15}, -- Adjust price only
		{name="thug", npcStanding=-3000, priceAdjust=30}  -- Enemy
	},
	goods = {
		{optName="small_house01", cost=8000, itemName="Small House", items={"object/tangible/deed/player_house_deed/tatooine_house_small_deed.iff"}}, 
		{optName="small_house02", cost=8000, itemName="Small House Style 2", items={"object/tangible/deed/player_house_deed/tatooine_house_small_style_02_deed.iff"}},
		{optName="medium_house", cost=15000, itemName="Medium House", items={"object/tangible/deed/player_house_deed/tatooine_house_medium_deed.iff"}}, 
		{optName="large_house", cost=20000, itemName="Large House", items={"object/tangible/deed/player_house_deed/tatooine_house_large_deed.iff"}},
		{optName="guild_hall01", cost=30000, itemName="Guild Hall", items={"object/tangible/deed/guild_deed/tatooine_guild_deed.iff"}},
		{optName="guild_hall02", cost=30000, itemName="Guild Hall Style 2", items={"object/tangible/deed/guild_deed/tatooine_guild_style_02_deed.iff"}},
		{optName="cantina", cost=75000, itemName="Cantina", items={"object/tangible/deed/city_deed/cantina_tatooine_deed.iff"}},
		{optName="cityhall", cost=125000, itemName="Cityhall", items={"object/tangible/deed/city_deed/cityhall_tatooine_deed.iff"}},
		{optName="cloner", cost=20000, itemName="Cloning Facility", items={"object/tangible/deed/city_deed/cloning_tatooine_deed.iff"}},
		{optName="hospital", cost=20000, itemName="Small Hospital", items={"object/tangible/deed/city_deed/hospital_tatooine_deed.iff"}},
		{optName="theater", cost=20000, itemName="Small Theater", items={"object/tangible/deed/city_deed/theater_tatooine_deed.iff"}}
	},
}


registerScreenPlay("IKenSP", true)

function IKenSP:start() 
	-- Mos Espa
	spawnMobile("tatooine", "iken", 1, -2946, 5.0, 2077, 108, 0 )
end

iken_convo_handler = Object:new {
	tstring = "myconversation"
 }

function iken_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	local creature = LuaCreatureObject(conversingPlayer)
	local convosession = creature:getConversationSession()
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
		
		if ( lastConversationScreen == nil ) then
			MerchantSystem:endShopping(conversingPlayer)
			-- See if NPC will talk to player
			local canTalk = MerchantSystem:refuseService(conversingPlayer, IKenSP.relations)
		
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
			
			local isShopping = creature:hasScreenPlayState(MerchantSystem.states.active, MerchantSystem.screenplayName)

			if (isShopping) then 
				optionLink = "bye"
				MerchantSystem:endShopping(conversingPlayer)
			end
			
			print ("optionLink is: " .. optionLink)
			
			nextConversationScreen = conversation:getScreen(optionLink)
			
		end 
	end
	
	return nextConversationScreen
end

function iken_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	local creature = LuaCreatureObject(conversingPlayer)
	local player = LuaSceneObject(conversingPlayer)
	local screen = LuaConversationScreen(conversationScreen)
	local screenID = screen:getScreenID()
	

	
	if (screenID == "shop") then
		-- Clone screen
		conversationScreen = screen:cloneScreen()
		local clonedConversation = LuaConversationScreen(conversationScreen)
		
		-- Add items to choose
		for lc = 1, table.getn(IKenSP.goods) , 1 do
			local price = MerchantSystem:adjustPrice(conversingPlayer, IKenSP.goods[lc].cost, IKenSP.relations)
			clonedConversation:addOption(IKenSP.goods[lc].itemName .. "  (" .. price .. ")" , IKenSP.goods[lc].optName)
		end 
		MerchantSystem:startShopping(conversingPlayer)
	end
	
	return conversationScreen
end