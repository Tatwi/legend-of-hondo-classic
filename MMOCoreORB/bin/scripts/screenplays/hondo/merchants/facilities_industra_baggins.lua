-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

IndustraBaggins = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="townsperson", npcStanding=-9000, priceAdjust=15}, -- Adjust price only
		{name="thug", npcStanding=-3000, priceAdjust=30}  -- Enemy
	},
	goods = {
		{optName="clothing", cost=125000, itemName="Clothing Factory", items={"object/tangible/deed/factory_deed/factory_clothing_deed.iff"}}, 
		{optName="food", cost=125000, itemName="Food Factory", items={"object/tangible/deed/factory_deed/factory_food_deed.iff"}},
		{optName="weapon", cost=125000, itemName="Weapon and Item Factory", items={"object/tangible/deed/factory_deed/factory_item_deed.iff"}}, 
		{optName="structure", cost=125000, itemName="Structure Factory", items={"object/tangible/deed/factory_deed/factory_structure_deed.iff"}},
	},
}

registerScreenPlay("IndustraBaggins", true)

function IndustraBaggins:start() 
	spawnMobile("tatooine", "industra_baggins", 1, 13.84, 1.13, -12.77, -57, 1256021 ) -- Mos Espa waypoint -3040 2052
end

industrabaggins_convo_handler = Object:new {
	tstring = "myconversation"
 }

function industrabaggins_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, IndustraBaggins.relations, IndustraBaggins.goods)
	
	return nextConversationScreen
end

function industrabaggins_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, IndustraBaggins.relations, IndustraBaggins.goods)
	
	return conversationScreen
end