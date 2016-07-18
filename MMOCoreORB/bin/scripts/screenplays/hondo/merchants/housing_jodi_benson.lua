-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016

local ObjectManager = require("managers.object.object_manager")

JodiBensonSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="nightsister", npcStanding=-9000, priceAdjust=30}, -- Price Adjust Only
		{name="mtn_clan", npcStanding=-9000, priceAdjust=30},  -- Price Adjust Only
	},
	goods = {
        {optName="theater01", cost=15000, itemName="[2L]Theater - Brown", items={"object/tangible/deed/city_deed/theater_tatooine_deed.iff"}},
        {optName="theater02", cost=15000, itemName="[2L]Theater - Grey", items={"object/tangible/deed/city_deed/theater_corellia_deed.iff"}},
        {optName="theater03", cost=15000, itemName="[2L]Theater - Brick", items={"object/tangible/deed/city_deed/theater_naboo_deed.iff"}},
	},
}

registerScreenPlay("JodiBensonSP", true)

function JodiBensonSP:start() 
	 spawnMobile("tatooine", "jodi_benson", 1, -24.159, 2.12878, 72.9793, 88, 1105854) -- Mos Eisley waypoint 3216 -4738
end

jodibenson_convo_handler = Object:new {
	tstring = "myconversation"
 }

function jodibenson_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, JodiBensonSP.relations, JodiBensonSP.goods)
	
	return nextConversationScreen
end

function jodibenson_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, JodiBensonSP.relations, JodiBensonSP.goods)
	
	return conversationScreen
end