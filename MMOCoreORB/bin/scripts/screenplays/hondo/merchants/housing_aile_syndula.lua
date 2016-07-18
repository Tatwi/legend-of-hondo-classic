-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016

local ObjectManager = require("managers.object.object_manager")

AileSyndulaSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="pirate", npcStanding=-9000, priceAdjust=18}, -- Price Adjust Only
        {name="valarian", npcStanding=-440, priceAdjust=20}  -- Enemy
	},
	goods = {
        {optName="cantina01", cost=325000, itemName="[8L]Cantina - Brown", items={"object/tangible/deed/city_deed/cantina_tatooine_deed.iff"}},
        {optName="cantina02", cost=325000, itemName="[8L]Cantina - Grey", items={"object/tangible/deed/city_deed/cantina_corellia_deed.iff"}},
        {optName="cantina03", cost=325000, itemName="[8L]Cantina - Brick", items={"object/tangible/deed/city_deed/cantina_naboo_deed.iff"}},
	},
}

registerScreenPlay("AileSyndulaSP", true)

function AileSyndulaSP:start() 
	 spawnMobile("tatooine", "aile_syndula", 1, 6.56645, -0.894992, -2.29232, 124, 1082877) -- Mos Eisley waypoint 3436 -4823
end

ailesyndula_convo_handler = Object:new {
	tstring = "myconversation"
 }

function ailesyndula_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, AileSyndulaSP.relations, AileSyndulaSP.goods)
	
	return nextConversationScreen
end

function ailesyndula_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, AileSyndulaSP.relations, AileSyndulaSP.goods)
	
	return conversationScreen
end