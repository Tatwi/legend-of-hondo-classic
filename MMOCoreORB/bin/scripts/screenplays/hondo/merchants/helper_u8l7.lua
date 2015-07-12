-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

U8L7SP = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="townsperson", npcStanding=-9000, priceAdjust=10}, -- Adjust price only
	},
	goods = {
		{optName="generic_tool", cost=125, itemName="Generic Crafting Tool", items={"object/tangible/crafting/station/generic_tool.iff"}}, 
		{optName="food_tool", cost=125, itemName="Food and Chemical Crafting Tool", items={"object/tangible/crafting/station/food_tool.iff"}},
		{optName="survey_mineral", cost=90, itemName="Mineral Survey Tool", items={"object/tangible/survey_tool/survey_tool_mineral.iff"}}, 
		{optName="survey_chemical", cost=90, itemName="Chemical Survey Tool", items={"object/tangible/survey_tool/survey_tool_liquid.iff"}},
		{optName="pistol", cost=250, itemName="CDEF Pistol", items={"object/weapon/ranged/pistol/pistol_cdef.iff"}},
		{optName="carbine", cost=250, itemName="CDEF Carbine", items={"object/weapon/ranged/carbine/carbine_cdef.iff"}},
		{optName="rifle", cost=250, itemName="CDEF Rifle", items={"object/weapon/ranged/rifle/rifle_cdef.iff"}},
		{optName="staff", cost=250, itemName="Wood Staff", items={"object/weapon/melee/polearm/lance_staff_wood_s1.iff"}},
		{optName="axe", cost=250, itemName="Heavy Duty Axe", items={"object/weapon/melee/axe/axe_heavy_duty.iff"}},
	},
}


registerScreenPlay("U8L7SP", true)

function U8L7SP:start() 
	spawnMobile("tatooine", "u8l7", 1, -2896.84, 5, 2139.55, -126, 0 ) -- Mos Espa 
end

u8l7_convo_handler = Object:new {
	tstring = "myconversation"
 }

function u8l7_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, U8L7SP.relations, U8L7SP.goods)
	
	return nextConversationScreen
end

function u8l7_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, U8L7SP.relations, U8L7SP.goods)
	
	return conversationScreen
end