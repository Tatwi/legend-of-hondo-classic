-- Starter Weapons Merchant
-- R. Bassett Jr. www.tpot.ca
-- July 2014

starterweapons = ScreenPlay:new {
	numberOfActs = 1, 
	questString = "starter_weapons_task",
	states = {}, 
}

registerScreenPlay("starterweapons", true)

function starterweapons:start() 
	-- Tatooine
		spawnMobile("tatooine", "starter_weapons", 1, 3518.8, 5.0, -4801.3, 132, 0 ) -- Mos Eisley
		spawnMobile("tatooine", "starter_weapons", 1, -2926.8, 5.0, 2151.6, 108, 0 ) -- Mos Espa
		spawnMobile("tatooine", "starter_weapons", 1, -1274.8, 12.0, -3631.0, -22, 0 ) -- Bestine
end


starterweapons_convo_handler = Object:new {
	tstring = "myconversation"
 }

function starterweapons_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
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
			
			-- Play Stater Weapons Screen
			elseif (optionLink == "starter") then
				nextConversationScreen = conversation:getScreen("starter") 
			
			-- Play Advanced Weapons Screen
			elseif (optionLink == "advanced") then
				nextConversationScreen = conversation:getScreen("advanced") 
			
			-- Bail if player chooses "Hey, what are you trying to push on me?"
			elseif ( optionLink == "deny_quest") then
				nextConversationScreen = conversation:getScreen("deny_quest")
			
			-- Make Sale 
			elseif ( optionLink == "s_pistol" and credits >= 250) then
				creature:subtractCashCredits(250)
				local pItem = giveItem(pInventory, "object/weapon/ranged/pistol/pistol_cdef.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "s_carbine" and credits >= 250) then
				creature:subtractCashCredits(250)
				local pItem = giveItem(pInventory, "object/weapon/ranged/carbine/carbine_cdef.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "s_rifle" and credits >= 250) then
				creature:subtractCashCredits(250)
				local pItem = giveItem(pInventory, "object/weapon/ranged/rifle/rifle_cdef.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "s_stoneknife" and credits >= 50) then
				creature:subtractCashCredits(50)
				local pItem = giveItem(pInventory, "object/weapon/melee/knife/knife_stone.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "s_survivalknife" and credits >= 75) then
				creature:subtractCashCredits(75)
				local pItem = giveItem(pInventory, "object/weapon/melee/knife/knife_survival.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "s_axe" and credits >= 125) then
				creature:subtractCashCredits(125)
				local pItem = giveItem(pInventory, "object/weapon/melee/axe/axe_heavy_duty.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "s_staff" and credits >= 90) then
				creature:subtractCashCredits(90)
				local pItem = giveItem(pInventory, "object/weapon/melee/polearm/lance_staff_wood_s1.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "bounty_hunter" and credits >= 12000) then
				creature:subtractCashCredits(12000)
				local pItem = giveItem(pInventory, "object/weapon/ranged/rifle/rifle_lightning.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "rifleman" and credits >= 12000) then
				creature:subtractCashCredits(12000)
				local pItem = giveItem(pInventory, "object/weapon/ranged/rifle/rifle_laser_noob.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "tka" and credits >= 12000) then
				creature:subtractCashCredits(12000)
				local pItem = giveItem(pInventory, "object/weapon/melee/special/vibroknuckler.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "carbineer" and credits >= 12000) then
				creature:subtractCashCredits(12000)
				local pItem = giveItem(pInventory, "object/weapon/ranged/carbine/carbine_laser.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "commando" and credits >= 12000) then
				creature:subtractCashCredits(12000)
				local pItem = giveItem(pInventory, "object/weapon/ranged/pistol/pistol_launcher.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "fencer" and credits >= 12000) then
				creature:subtractCashCredits(12000)
				local pItem = giveItem(pInventory, "object/weapon/melee/sword/sword_blade_ryyk.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "pikeman" and credits >= 12000) then
				creature:subtractCashCredits(12000)
				local pItem = giveItem(pInventory, "object/weapon/melee/polearm/polearm_vibro_axe.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "pistoleer" and credits >= 12000) then
				creature:subtractCashCredits(12000)
				local pItem = giveItem(pInventory, "object/weapon/ranged/pistol/pistol_republic_blaster.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
			elseif ( optionLink == "swordsman" and credits >= 12000) then
				creature:subtractCashCredits(12000)
				local pItem = giveItem(pInventory, "object/weapon/melee/axe/axe_vibroaxe.iff", -1)
				nextConversationScreen = conversation:getScreen("thank_you")
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


function starterweapons_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	-- Plays the screens of the conversation.
	return conversationScreen
end
