-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

DuagHauserSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="imperial", npcStanding=-9000, priceAdjust=15}, -- Adjust price only
		{name="rebel", npcStanding=-200, priceAdjust=30},  -- Enemy
		{name="jabba", npcStanding=-3500, priceAdjust=10},  -- Enemy
		{name="valarian", npcStanding=-1000, priceAdjust=15},  -- Enemy
	},
	goods = {
		{optName="star_map", cost=5000, itemName="Star Map Package", items={
			"object/tangible/painting/painting_starmap.iff", 
			"object/tangible/painting/painting_tato_s04.iff", 
			"object/tangible/painting/painting_smoking_ad.iff",
		}},
        {optName="small_square01", cost=29000, itemName="[3L]Small Square", items={"object/tangible/deed/player_house_deed/generic_house_small_deed.iff"}},
        {optName="small_square02", cost=29000, itemName="[3L]Small Square Style 2", items={"object/tangible/deed/player_house_deed/generic_house_small_floor_02_deed.iff"}},
        {optName="small_rounded01", cost=29000, itemName="[3L]Small Rounded", items={"object/tangible/deed/player_house_deed/generic_house_small_style_02_deed.iff"}},
        {optName="small_rounded02", cost=29000, itemName="[3L]Small Rounded Style 2", items={"object/tangible/deed/player_house_deed/generic_house_small_style_02_floor_02_deed.iff"}},
	},
}

registerScreenPlay("DuagHauserSP", true)

function DuagHauserSP:start() 
	spawnMobile("tatooine", "duag_hauser", 1, -35.28, 1.29, -2.60, 85, 926479 ) -- Bestine waypoint -1139 -3561
end

duaghauser_convo_handler = Object:new {
	tstring = "myconversation"
 }

function duaghauser_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, DuagHauserSP.relations, DuagHauserSP.goods)
	
	return nextConversationScreen
end

function duaghauser_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, DuagHauserSP.relations, DuagHauserSP.goods)
	
	return conversationScreen
end