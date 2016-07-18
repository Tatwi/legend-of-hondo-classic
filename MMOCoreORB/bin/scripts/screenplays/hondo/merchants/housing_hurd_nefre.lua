-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016

local ObjectManager = require("managers.object.object_manager")

HurdNefreSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="jabba", npcStanding=2500, priceAdjust=15}, -- Friend
		{name="imperial", npcStanding=-20, priceAdjust=30},  -- Enemy
	},
	goods = {
        {optName="cloner01", cost=45000, itemName="[4L]Cloner - Brown", items={"object/tangible/deed/city_deed/cloning_tatooine_deed.iff"}},
        {optName="cloner02", cost=45000, itemName="[4L]Cloner - Grey", items={"object/tangible/deed/city_deed/cloning_corellia_deed.iff"}},
        {optName="cloner03", cost=45000, itemName="[4L]Cloner - Brick", items={"object/tangible/deed/city_deed/cloning_naboo_deed.iff"}},
	},
}

registerScreenPlay("HurdNefreSP", true)

function HurdNefreSP:start() 
	 spawnMobile("tatooine", "hurd_nefre", 1, -0.587116, -5.50649, -4.53444, 82, 1528384) -- Wayfar waypoint -5073 -6632
end

hurdnefre_convo_handler = Object:new {
	tstring = "myconversation"
 }

function hurdnefre_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, HurdNefreSP.relations, HurdNefreSP.goods)
	
	return nextConversationScreen
end

function hurdnefre_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, HurdNefreSP.relations, HurdNefreSP.goods)
	
	return conversationScreen
end