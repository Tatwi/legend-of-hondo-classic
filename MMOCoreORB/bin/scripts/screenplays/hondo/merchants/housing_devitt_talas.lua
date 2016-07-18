-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016

local ObjectManager = require("managers.object.object_manager")

DevittTalasSP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="imperial", npcStanding=-9000, priceAdjust=15}, -- Adjust price only
		{name="rebel", npcStanding=-200, priceAdjust=30},  -- Enemy
		{name="jabba", npcStanding=-3500, priceAdjust=10},  -- Enemy
		{name="valarian", npcStanding=-1000, priceAdjust=15},  -- Enemy
	},
	goods = {
        {optName="small_square01", cost=475000, itemName="[9L]Guild Hall - Brown", items={"object/tangible/deed/guild_deed/tatooine_guild_deed.iff"}},
        {optName="small_square01", cost=475000, itemName="[9L]Guild Hall - Grey", items={"object/tangible/deed/guild_deed/generic_guild_deed.iff"}},
        {optName="small_square01", cost=475000, itemName="[9L]Guild Hall - White", items={"object/tangible/deed/guild_deed/corellia_guild_deed.iff"}},
        {optName="small_square01", cost=475000, itemName="[9L]Guild Hall - Green", items={"object/tangible/deed/guild_deed/naboo_guild_deed.iff"}},
	},
}

registerScreenPlay("DevittTalasSP", true)

function DevittTalasSP:start() 
	 spawnMobile("tatooine", "devitt_talas", 1, 9.39974, -9, 13.012, 211, 1261563) -- Bestine waypoint -1134 -3530
end

devitttalas_convo_handler = Object:new {
	tstring = "myconversation"
 }

function devitttalas_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, DevittTalasSP.relations, DevittTalasSP.goods)
	
	return nextConversationScreen
end

function devitttalas_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, DevittTalasSP.relations, DevittTalasSP.goods)
	
	return conversationScreen
end