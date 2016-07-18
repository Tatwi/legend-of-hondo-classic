-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016

local ObjectManager = require("managers.object.object_manager")

JandyMruksSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="jawa", npcStanding=-9000, priceAdjust=8},  -- Price Adjust Only
		{name="tusken_raider", npcStanding=-3700, priceAdjust=50},  -- Enemy
	},
	goods = {
        {optName="tent_01", cost=5000, itemName="[1L]Small Brown", items={"object/tangible/deed/player_house_deed/merchant_tent_style_01_deed.iff"}}, 
        {optName="tent_02", cost=15000, itemName="[2L]Large Brown", items={"object/tangible/deed/player_house_deed/salon_tent_style_01_deed.iff"}},
	},
}

registerScreenPlay("JandyMruksSP", true)

function JandyMruksSP:start() 
	spawnMobile("tatooine", "jandy_mruks", 1, -2913.43, 5, 2106.58, 68, 0) 
end

jandymruks_convo_handler = Object:new {
	tstring = "myconversation"
 }

function jandymruks_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, JandyMruksSP.relations, JandyMruksSP.goods)
	
	return nextConversationScreen
end

function jandymruks_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, JandyMruksSP.relations, JandyMruksSP.goods)
	
	return conversationScreen
end