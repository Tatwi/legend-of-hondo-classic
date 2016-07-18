-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016

local ObjectManager = require("managers.object.object_manager")

PiezzEgrenSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="rebel", npcStanding=2500, priceAdjust=15}, -- Friend
		{name="imperial", npcStanding=-20, priceAdjust=30},  -- Enemy
	},
	goods = {
        {optName="hospital01", cost=45000, itemName="[4L]Hospital - Brown", items={"object/tangible/deed/city_deed/hospital_tatooine_deed.iff"}},
        {optName="hospital02", cost=45000, itemName="[4L]Hospital - Grey", items={"object/tangible/deed/city_deed/hospital_corellia_deed.iff"}},
        {optName="hospital03", cost=45000, itemName="[4L]Hospital - Brick", items={"object/tangible/deed/city_deed/hospital_naboo_deed.iff"}},
	},
}

registerScreenPlay("PiezzEgrenSP", true)

function PiezzEgrenSP:start() 
	 spawnMobile("tatooine", "piezz_egren", 1, 110.95, 52, -5429.22, 37, 0) -- Anchorhead
end

piezzegren_convo_handler = Object:new {
	tstring = "myconversation"
 }

function piezzegren_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, PiezzEgrenSP.relations, PiezzEgrenSP.goods)
	
	return nextConversationScreen
end

function piezzegren_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, PiezzEgrenSP.relations, PiezzEgrenSP.goods)
	
	return conversationScreen
end