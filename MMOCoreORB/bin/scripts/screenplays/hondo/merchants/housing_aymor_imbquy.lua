-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

AymorImbquySP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="townsperson", npcStanding=4500, priceAdjust=3}, -- Friend
		{name="bandit", npcStanding=-4000, priceAdjust=20},  -- Enemy
        {name="thug", npcStanding=-2000, priceAdjust=30},  -- Enemy
        {name="pirate", npcStanding=-4800, priceAdjust=20},  -- Enemy
	},
	goods = {
        {optName="large_house", cost=625000, itemName="[10L]Tatooine Estate", items={"object/tangible/deed/guild_deed/tatooine_guild_style_02_deed.iff"}},
	},
}


registerScreenPlay("AymorImbquySP", true)

function AymorImbquySP:start() 
	spawnMobile("tatooine", "aymor_imbquy", 1, 21.0899, 3.22324, -34.8149, 3, 9995618) -- Mos Espa waypoint -2972 2020
end

aymorimbquy_convo_handler = Object:new {
	tstring = "myconversation"
 }

function aymorimbquy_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, AymorImbquySP.relations, AymorImbquySP.goods)
	
	return nextConversationScreen
end

function aymorimbquy_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, AymorImbquySP.relations, AymorImbquySP.goods)
	
	return conversationScreen
end