-- Starter Gear Merchants
-- R. Bassett Jr. www.tpot.ca
-- July 2014

startergear = ScreenPlay:new {
	numberOfActs = 1, 
	questString = "starter_gear_task",
	states = {}, 
}

registerScreenPlay("startergear", true)

function startergear:start() 
	-- Tatooine
		spawnMobile("tatooine", "starter_gear", 1, 3517.8, 5.0, -4800.3, 132, 0 ) -- Mos Eisley
		spawnMobile("tatooine", "starter_gear", 1, -2925.8, 5.0, 2150.6, 108, 0 ) -- Mos Espa
		spawnMobile("tatooine", "starter_gear", 1, -1273.8, 12.0, -3630.0, -22, 0 ) -- Bestine
end


startergear_convo_handler = Object:new {
	tstring = "myconversation"
 }

function startergear_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
-- Assign the player to variable creature for use inside this function.
	local creature = LuaCreatureObject(conversingPlayer)
	
	-- Get the last conversation to determine whetehr or not we're  on the first screen
	local convosession = creature:getConversationSession()
	lastConversation = nil
	local conversation = LuaConversationTemplate(conversationTemplate)
	local nextConversationScreen 
	
	-- If there is a conversation open, do stuff with it
	if ( conversation ~= nil ) then
		-- check to see if we have a next screen
		if ( convosession ~= nil ) then
			 local session = LuaConversationSession(convosession)
			 if ( session ~= nil ) then
			 	lastConversationScreen = session:getLastConversationScreen()
			 end
		end
		
		-- Last conversation was nil, so get the first screen
		if ( lastConversationScreen == nil ) then
			nextConversationScreen = conversation:getInitialScreen()
		else
		-- Start playing the rest of the conversation based on user input
			local luaLastConversationScreen = LuaConversationScreen(lastConversationScreen)
			
			-- Set variable to track what option the player picked and get the option picked
			local optionLink = luaLastConversationScreen:getOptionLink(selectedOption)
			nextConversationScreen = conversation:getScreen(optionLink)
			
			-- Get some information about the player.
			local credits = creature:getCashCredits()
			local pInventory = creature:getSlottedObject("inventory")
			local inventory = LuaSceneObject(pInventory)
			
			-- Bail if inventory is full
			if (inventory:hasFullContainerObjects() == true) then
				nextConversationScreen = conversation:getScreen("insufficient_space") 
				creature:sendSystemMessage("You do not have enough inventory space")

			-- Play Tools Screen
			elseif (optionLink == "tools") then
				nextConversationScreen = conversation:getScreen("tools") 
			
			-- Play Armor Screen
			elseif (optionLink == "armor") then
				nextConversationScreen = conversation:getScreen("armor") 
				
			-- Play Buildings Screen
			elseif (optionLink == "structures") then
				nextConversationScreen = conversation:getScreen("structures") 
				
			-- TOOLS
			elseif ( optionLink == "x31" and credits >= 6000) then
				creature:subtractCashCredits(6000)
				local pItem = giveItem(pInventory, "object/tangible/deed/vehicle_deed/landspeeder_x31_deed.iff", -1)
				nextConversationScreen = conversation:getScreen("x31")
			elseif ( optionLink == "tool_generic" and credits >= 25) then
				creature:subtractCashCredits(25)
				local pItem = giveItem(pInventory, "object/tangible/crafting/station/generic_tool.iff", -1)
				nextConversationScreen = conversation:getScreen("tool_generic")
			elseif ( optionLink == "tool_food" and credits >= 75) then
				creature:subtractCashCredits(75)
				local pItem = giveItem(pInventory, "object/tangible/crafting/station/food_tool.iff", -1)
				nextConversationScreen = conversation:getScreen("tool_food")
			elseif ( optionLink == "survey_mineral" and credits >= 50) then
				creature:subtractCashCredits(50)
				local pItem = giveItem(pInventory, "object/tangible/survey_tool/survey_tool_mineral.iff", -1)
				nextConversationScreen = conversation:getScreen("survey_mineral")
			elseif ( optionLink == "survey_chemical" and credits >= 50) then
				creature:subtractCashCredits(50)
				local pItem = giveItem(pInventory, "object/tangible/survey_tool/survey_tool_liquid.iff", -1)
				nextConversationScreen = conversation:getScreen("survey_chemical")
			elseif ( optionLink == "instrument_slitherhorn" and credits >= 25) then
				creature:subtractCashCredits(25)
				local pItem = giveItem(pInventory, "object/tangible/instrument/slitherhorn.iff", -1)
				nextConversationScreen = conversation:getScreen("instrument_slitherhorn")
			elseif ( optionLink == "instrument_fanfar" and credits >= 75) then
				creature:subtractCashCredits(75)
				local pItem = giveItem(pInventory, "object/tangible/instrument/fanfar.iff", -1)
				nextConversationScreen = conversation:getScreen("instrument_fanfar")
			-- ARMOR
			elseif ( optionLink == "human_armor" and credits >= 10000) then
				creature:subtractCashCredits(10000)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/zam/armor_zam_wesell_helmet.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/zam/armor_zam_wesell_chest_plate.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/zam/armor_zam_wesell_gloves.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/zam/armor_zam_wesell_pants.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/zam/armor_zam_wesell_boots.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "ithorian_armor" and credits >= 10000) then
				creature:subtractCashCredits(10000)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/ithorian_sentinel/ith_armor_s03_helmet.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/ithorian_sentinel/ith_armor_s03_chest_plate.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/ithorian_sentinel/ith_armor_s03_gloves.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/ithorian_sentinel/ith_armor_s03_leggings.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/ithorian_sentinel/ith_armor_s03_boots.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "wookiee_armor" and credits >= 10000) then
				creature:subtractCashCredits(10000)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/kashyyykian_ceremonial/armor_kashyyykian_ceremonial_bracer_l.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/kashyyykian_ceremonial/armor_kashyyykian_ceremonial_bracer_r.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/kashyyykian_ceremonial/armor_kashyyykian_ceremonial_chest_plate.iff", -1)
				local pItem = giveItem(pInventory, "object/tangible/wearables/armor/kashyyykian_ceremonial/armor_kashyyykian_ceremonial_leggings.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			-- STRUCTURES
			elseif ( optionLink == "house_small" and credits >= 18000) then
				creature:subtractCashCredits(18000)
				local pItem = giveItem(pInventory, "object/tangible/deed/player_house_deed/generic_house_small_deed.iff", -1)
				nextConversationScreen = conversation:getScreen("house_small")
			elseif ( optionLink == "factory_equipment" and credits >= 125000) then
				creature:subtractCashCredits(125000)
				local pItem = giveItem(pInventory, "object/tangible/deed/factory_deed/factory_item_deed.iff", -1)
				nextConversationScreen = conversation:getScreen("factory_equipment")
			elseif ( optionLink == "factory_food" and credits >= 125000) then
				creature:subtractCashCredits(125000)
				local pItem = giveItem(pInventory, "object/tangible/deed/factory_deed/factory_food_deed.iff", -1)
				nextConversationScreen = conversation:getScreen("factory_food")
			elseif ( optionLink == "factory_clothing" and credits >= 125000) then
				creature:subtractCashCredits(125000)
				local pItem = giveItem(pInventory, "object/tangible/deed/factory_deed/factory_clothing_deed.iff", -1)
				nextConversationScreen = conversation:getScreen("factory_clothing")
			elseif ( optionLink == "factory_structure" and credits >= 125000) then
				creature:subtractCashCredits(125000)
				local pItem = giveItem(pInventory, "object/tangible/deed/factory_deed/factory_structure_deed.iff", -1)
				nextConversationScreen = conversation:getScreen("factory_structure")
			else
				-- Bail because the player doesn't have enough cash on hand.
				nextConversationScreen = conversation:getScreen("insufficient_funds")
				creature:sendSystemMessage("You have insufficient funds")
			end
		end
	end
	-- end of the conversation logic.
	return nextConversationScreen
end


function startergear_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	-- Plays the screens of the conversation.
	return conversationScreen
end
