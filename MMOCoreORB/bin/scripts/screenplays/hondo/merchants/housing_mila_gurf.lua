-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016

local ObjectManager = require("managers.object.object_manager")

MilaGurfSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="fed_dub", npcStanding=-9000, priceAdjust=14}, -- Adjust price only
	},
	goods = {
        {optName="small_house01", cost=29000, itemName="[3L]Small Squared 1", items={"object/tangible/deed/player_house_deed/corellia_house_small_deed.iff"}},
        {optName="small_house02", cost=29000, itemName="[3L]Small Squared 2", items={"object/tangible/deed/player_house_deed/corellia_house_small_floor_02_deed.iff"}}, 
        {optName="small_house03", cost=29000, itemName="[3L]Small Rounded 1", items={"object/tangible/deed/player_house_deed/corellia_house_small_style_02_deed.iff"}}, 
        {optName="small_house04", cost=29000, itemName="[3L]Small Rounded 2", items={"object/tangible/deed/player_house_deed/corellia_house_small_style_02_floor_02_deed.iff"}}, 
	},
}

registerScreenPlay("MilaGurfSP", true)

function MilaGurfSP:start()
    spawnMobile("tatooine", "mila_gurf", 1, 4.0707, -9.54192, -5.68019, 164, 1154132) -- Mos Taike 3772, 2382
end

milagurf_convo_handler = Object:new {
	tstring = "myconversation"
 }

function milagurf_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, MilaGurfSP.relations, MilaGurfSP.goods)
	
	return nextConversationScreen
end

function milagurf_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, MilaGurfSP.relations, MilaGurfSP.goods)
	
	return conversationScreen
end