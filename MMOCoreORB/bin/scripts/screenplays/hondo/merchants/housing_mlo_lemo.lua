-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

MloLemoSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="gungan", npcStanding=1000, priceAdjust=20}, -- Friend
		{name="townsperson", npcStanding=-9000, priceAdjust=5}, -- Adjust price only
		{name="borvo", npcStanding=-250, priceAdjust=10},  -- Enemy
		{name="plasma_thief", npcStanding=-1000, priceAdjust=10},  -- Enemy
		{name="swamp_rat", npcStanding=-2000, priceAdjust=10}  -- Enemy
	},
	goods = {
		{optName="small_house01", cost=15000, itemName="[2L]Small Round", items={"object/tangible/deed/player_house_deed/naboo_house_small_deed.iff"}}, 
		{optName="small_house02", cost=29000, itemName="[3L]Small Square", items={"object/tangible/deed/player_house_deed/naboo_house_small_style_02_deed.iff"}},
		{optName="medium_house", cost=95000, itemName="[6L]Medium House", items={"object/tangible/deed/player_house_deed/naboo_house_medium_deed.iff"}},
		{optName="large_house", cost=325000, itemName="[8L]Large Castle", items={"object/tangible/deed/player_house_deed/naboo_house_large_deed.iff"}},
	},
}


registerScreenPlay("MloLemoSP", true)

function MloLemoSP:start() 
	spawnMobile("tatooine", "mlo_lemo", 1, -0.36, -0.38, -4.28, -42, 1157706 ) -- Mos Entha waypoint 1251 3290
end

mlolemo_convo_handler = Object:new {
	tstring = "myconversation"
 }

function mlolemo_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, MloLemoSP.relations, MloLemoSP.goods)
	
	return nextConversationScreen
end

function mlolemo_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, MloLemoSP.relations, MloLemoSP.goods)
	
	return conversationScreen
end