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
		{optName="small_house01", cost=8000, itemName="Small House", items={"object/tangible/deed/player_house_deed/naboo_house_small_deed.iff"}}, 
		{optName="small_house02", cost=8000, itemName="Small House Style 2", items={"object/tangible/deed/player_house_deed/naboo_house_small_style_02_deed.iff"}},
		{optName="medium_house", cost=15000, itemName="Medium House", items={"object/tangible/deed/player_house_deed/naboo_house_medium_deed.iff"}},
		{optName="guild_hall02", cost=15000, itemName="Medium House Style 2", items={"object/tangible/deed/player_house_deed/naboo_house_medium_style_02_deed.iff"}},
		{optName="large_house", cost=20000, itemName="Large House", items={"object/tangible/deed/player_house_deed/naboo_house_large_deed.iff"}},
		{optName="guild_hall01", cost=30000, itemName="Guild Hall", items={"object/tangible/deed/guild_deed/naboo_guild_deed.iff"}},
		{optName="cantina", cost=75000, itemName="Cantina", items={"object/tangible/deed/city_deed/cantina_naboo_deed.iff"}},
		{optName="cityhall", cost=125000, itemName="Cityhall", items={"object/tangible/deed/city_deed/cityhall_naboo_deed.iff"}},
		{optName="cloner", cost=20000, itemName="Cloning Facility", items={"object/tangible/deed/city_deed/cloning_naboo_deed.iff"}},
		{optName="hospital", cost=20000, itemName="Small Hospital", items={"object/tangible/deed/city_deed/hospital_naboo_deed.iff"}},
		{optName="theater", cost=20000, itemName="Small Theater", items={"object/tangible/deed/city_deed/theater_naboo_deed.iff"}}
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