-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

TrooperPihsratsSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="imperial", npcStanding=-9000, priceAdjust=15}, -- Adjust price only
		{name="rebel", npcStanding=-200, priceAdjust=30},  -- Enemy
		{name="jabba", npcStanding=-3500, priceAdjust=10},  -- Enemy
		{name="valarian", npcStanding=-1000, priceAdjust=15},  -- Enemy
	},
	goods = {
        {optName="guildhall01", cost=65000, itemName="[5L]Medium Rounded", items={"object/tangible/deed/player_house_deed/generic_house_medium_deed.iff"}},
        {optName="guildhall02", cost=65000, itemName="[5L]Medium Rounded Style 2", items={"object/tangible/deed/player_house_deed/generic_house_medium_style_02_deed.iff"}},
        {optName="guildhall03", cost=175000, itemName="[7L]Large", items={"object/tangible/deed/player_house_deed/generic_house_large_deed.iff"}},
        {optName="guildhall04", cost=175000, itemName="[7L]Large Style 2", items={"object/tangible/deed/player_house_deed/generic_house_large_style_02_deed.iff"}},
	},
}

registerScreenPlay("TrooperPihsratsSP", true)

function TrooperPihsratsSP:start() 
	 spawnMobile("tatooine", "trooper_pihsrats", 1, 35.3878, 1.29422, -3.17062, 264, 926482) -- Bestine waypoint -1184 -3616
end

trooperpihsrats_convo_handler = Object:new {
	tstring = "myconversation"
 }

function trooperpihsrats_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, TrooperPihsratsSP.relations, TrooperPihsratsSP.goods)
	
	return nextConversationScreen
end

function trooperpihsrats_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, TrooperPihsratsSP.relations, TrooperPihsratsSP.goods)
	
	return conversationScreen
end