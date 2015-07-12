-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

IkenWilyensSP = ScreenPlay:new {
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


registerScreenPlay("IkenWilyensSP", true)

function IkenWilyensSP:start() 
	spawnMobile("tatooine", "iken_wilyens", 1, 8.24, 1.13, -13.91, 35, 1256021 ) -- Mos Espa waypoint -3046 2050
end

ikenwilyens_convo_handler = Object:new {
	tstring = "myconversation"
 }

function ikenwilyens_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, IkenWilyensSP.relations, IkenWilyensSP.goods)
	
	return nextConversationScreen
end

function ikenwilyens_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, IkenWilyensSP.relations, IkenWilyensSP.goods)
	
	return conversationScreen
end