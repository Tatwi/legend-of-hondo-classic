-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

AssistantNyltSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="spice_collective", npcStanding=-9000, priceAdjust=22}, -- Adjust price only
	},
	goods = {
		{optName="bank01", cost=25000, itemName="Bank - Brown", items={"object/tangible/deed/city_deed/bank_tatooine_deed.iff"}},
        {optName="bank01", cost=25000, itemName="Bank - Grey", items={"object/tangible/deed/city_deed/bank_corellia_deed.iff"}},
        {optName="bank01", cost=25000, itemName="Bank - Green", items={"object/tangible/deed/city_deed/bank_naboo_deed.iff"}},
	},
}


registerScreenPlay("AssistantNyltSP", true)

function AssistantNyltSP:start() 
	spawnMobile("tatooine", "assistant_nylt", 1, 19.6184, 3.22324, -31.5097, 133, 9995618) -- Mos Espa waypoint -2972 2020
end

assistantnylt_convo_handler = Object:new {
	tstring = "myconversation"
 }

function assistantnylt_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, AssistantNyltSP.relations, AssistantNyltSP.goods)
	
	return nextConversationScreen
end

function assistantnylt_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, AssistantNyltSP.relations, AssistantNyltSP.goods)
	
	return conversationScreen
end