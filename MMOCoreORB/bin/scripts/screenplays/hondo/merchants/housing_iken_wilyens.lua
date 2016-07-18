-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

IkenWilyensSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="townsperson", npcStanding=-9000, priceAdjust=15}, -- Adjust price only
		{name="thug", npcStanding=-3600, priceAdjust=30}  -- Enemy
	},
	goods = {
		{optName="small_house01", cost=15000, itemName="[2L]Small", items={"object/tangible/deed/player_house_deed/tatooine_house_small_deed.iff"}}, 
		{optName="small_house02", cost=29000, itemName="[3L]Small Style 2", items={"object/tangible/deed/player_house_deed/tatooine_house_small_style_02_deed.iff"}},
		{optName="medium_house01", cost=95000, itemName="[6L]Medium Patio", items={"object/tangible/deed/player_house_deed/tatooine_house_medium_deed.iff"}},
        {optName="medium_house02", cost=95000, itemName="[6L]Medium Bunker", items={"object/tangible/deed/player_house_deed/tatooine_house_medium_style_02_deed.iff"}}, 
		{optName="large_house01", cost=325000, itemName="[8L]Large Patio", items={"object/tangible/deed/player_house_deed/tatooine_house_large_deed.iff"}},
        {optName="large_house02", cost=325000, itemName="[8L]Large Tavern", items={"object/tangible/deed/player_house_deed/tatooine_house_large_style_02_deed.iff"}},
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