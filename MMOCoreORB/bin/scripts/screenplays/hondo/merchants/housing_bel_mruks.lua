-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016

local ObjectManager = require("managers.object.object_manager")

BelMruksSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="jawa", npcStanding=2000, priceAdjust=5}, -- Friend
		{name="rebel", npcStanding=-9000, priceAdjust=2},  -- Price Adjust Only
		{name="tusken_raider", npcStanding=-2000, priceAdjust=50},  -- Enemy
	},
	goods = {
        {optName="tent_01", cost=5000, itemName="[1L]Small Grey", items={"object/tangible/deed/player_house_deed/merchant_tent_style_02_deed.iff"}}, 
        {optName="tent_02", cost=5000, itemName="[1L]Small Green", items={"object/tangible/deed/player_house_deed/merchant_tent_style_03_deed.iff"}},
        {optName="tent_03", cost=15000, itemName="[2L]Large Grey", items={"object/tangible/deed/player_house_deed/salon_tent_style_02_deed.iff"}},
        {optName="tent_04", cost=15000, itemName="[2L]Large Green", items={"object/tangible/deed/player_house_deed/salon_tent_style_03_deed.iff"}},
	},
}

registerScreenPlay("BelMruksSP", true)

function BelMruksSP:start() 
	spawnMobile("tatooine", "bel_mruks", 1, -6134.01, 9.19838, 1891.19, 176, 0) -- Jawa camp
end

belmruks_convo_handler = Object:new {
	tstring = "myconversation"
 }

function belmruks_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, BelMruksSP.relations, BelMruksSP.goods)
	
	return nextConversationScreen
end

function belmruks_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, BelMruksSP.relations, BelMruksSP.goods)
	
	return conversationScreen
end