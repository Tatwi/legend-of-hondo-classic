-- Legend of Hondo Merchant System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2015

local ObjectManager = require("managers.object.object_manager")

CrazyLarry = ScreenPlay:new {
	numberOfActs = 1, 	
	relations = { 
		{name="nym", npcStanding=-9000, priceAdjust=15}, -- Adjust price only
		{name="lok_mercenaries", npcStanding=-9000, priceAdjust=5}, -- Adjust price only
		{name="bloodrazor", npcStanding=-1000, priceAdjust=20},  -- Enemy
		{name="canyon_corsair", npcStanding=-1000, priceAdjust=20}  -- Enemy
	},
	goods = {
		{optName="kit", cost=500, itemName="Customization Kit", items={"object/tangible/item/vehicle_customization.iff"}}, 
		{optName="x31", cost=6000, itemName="x31 Landspeeder", items={"object/tangible/deed/vehicle_deed/landspeeder_x31_deed.iff"}},
		{optName="x34", cost=10000, itemName="x34 Landspeeder", items={"object/tangible/deed/vehicle_deed/landspeeder_x34_deed.iff"}}, 
		{optName="speederbike", cost=14000, itemName="Speederbike", items={"object/tangible/deed/vehicle_deed/speederbike_deed.iff"}},
		{optName="swoop", cost=18000, itemName="Swoop Bike", items={"object/tangible/deed/vehicle_deed/speederbike_swoop_deed.iff"}},
		{optName="flash", cost=125000, itemName="Flash Landspeeder", items={"object/tangible/deed/vehicle_deed/speederbike_flash_deed.iff"}},
		{optName="av21", cost=255000, itemName="AV21 Landspeeder", items={"object/tangible/deed/vehicle_deed/landspeeder_av21_deed.iff"}},
	},
}


registerScreenPlay("CrazyLarry", true)

function CrazyLarry:start() 
	spawnMobile("tatooine", "crazylarry", 1, -2720.3, 5.0, 2260.4, -133, 0 ) -- Mos Espa 
	-- Load some decorations
	spawnSceneObject("tatooine", "object/tangible/camp/camp_pavilion_s1.iff", -2720.3, 5.0, 2260.4, 0, 0, 0, 1, 0)
	spawnSceneObject("tatooine", "object/tangible/furniture/all/frn_all_data_terminal_free_s2.iff", -2722.3, 5.0, 2262.85, 0, 0, 0, 1, 0)
	spawnSceneObject("tatooine", "object/static/vehicle/static_speeder_bike.iff", -2725.44, 5.0, 2271.17, 0, 0.0255217, 0, 0.999674, 0)
	spawnSceneObject("tatooine", "object/static/vehicle/static_swoop_bike.iff", -2722.25, 5.0, 2272.43, 0, 0.0582651, 0, 0.998301, 0)
	spawnSceneObject("tatooine", "object/static/vehicle/e3/landspeeder.iff", -2725.62, 5.0, 2260.19, 0, 0.729313, 0, 0.68418, 0)
	spawnSceneObject("tatooine", "object/mobile/vehicle/landspeeder_av21.iff", -2714.16, 5.0, 2260.32, 0, 0.641522, 0, 0.767105, 0)
	spawnSceneObject("tatooine", "object/mobile/vehicle/speederbike_flash.iff", -2720.57, 5.0, 2254.14, 0, -0.103943, 0, 0.994583, 0)
end

crazylarry_convo_handler = Object:new {
	tstring = "myconversation"
 }

function crazylarry_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = MerchantSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, CrazyLarry.relations, CrazyLarry.goods)
	
	return nextConversationScreen
end

function crazylarry_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = MerchantSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, CrazyLarry.relations, CrazyLarry.goods)
	
	return conversationScreen
end