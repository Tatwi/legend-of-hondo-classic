-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016

local ObjectManager = require("managers.object.object_manager")

DobaGurfSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="corsec", npcStanding=-9000, priceAdjust=25}, -- Adjust price only
        {name="followers_of_lord_nyax", npcStanding=-4500, priceAdjust=15}, -- Enemy
        {name="rogue_corsec", npcStanding=-4000, priceAdjust=35}, -- Enemy
	},
	goods = {
        {optName="medium_house01", cost=65000, itemName="[5L]Medium Style 1", items={"object/tangible/deed/player_house_deed/corellia_house_medium_deed.iff"}}, 
        {optName="medium_house02", cost=65000, itemName="[5L]Medium Style 2", items={"object/tangible/deed/player_house_deed/corellia_house_medium_style_02_deed.iff"}}, 
        {optName="large_house01", cost=175000, itemName="[7L]Large Style 1", items={"object/tangible/deed/player_house_deed/corellia_house_large_deed.iff"}}, 
        {optName="large_house02", cost=175000, itemName="[7L]Large Style 2", items={"object/tangible/deed/player_house_deed/corelliac_house_large_style_02_deed.iff"}},
	},
}

registerScreenPlay("DobaGurfSP", true)

function DobaGurfSP:start() 
	spawnMobile("tatooine", "doba_gurf", 1, 8.4577, -9.54192, -7.91123, 312, 1154132) -- Mos Taike 3772, 2382
end

dobagurf_convo_handler = Object:new {
	tstring = "myconversation"
 }

function dobagurf_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, DobaGurfSP.relations, DobaGurfSP.goods)
	
	return nextConversationScreen
end

function dobagurf_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, DobaGurfSP.relations, DobaGurfSP.goods)
	
	return conversationScreen
end