
local ObjectManager = require("managers.object.object_manager")

MerchantSystem = ScreenPlay:new {
	numberOfActs = 1,
	states = {
		active = 2,
		complete = 4,
	}, 
	screenplayName = "MerchantSystem",
	selectedItemName = "Monkey",
	selectedOptName	= "George",
	selectedLineNum = 0,
}

registerScreenPlay("MerchantSystem", true)


function MerchantSystem:startShopping(pObject)
  ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
    creatureObject:setScreenPlayState(MerchantSystem.states.active, MerchantSystem.screenplayName)
  end)
end


function MerchantSystem:endShopping(pObject)
  ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
    creatureObject:removeScreenPlayState(MerchantSystem.states.active, MerchantSystem.screenplayName)
    creatureObject:setScreenPlayState(MerchantSystem.states.complete, MerchantSystem.screenplayName)
        print ("Shopping ended, removed active state and set complete state...")
  end)
end


function MerchantSystem:resetStates(pObject)
  ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
    creatureObject:removeScreenPlayState(MerchantSystem.states.active, MerchantSystem.screenplayName)
    creatureObject:removeScreenPlayState(MerchantSystem.states.complete, MerchantSystem.screenplayName)
  end)
end


function MerchantSystem:firstToUpper(str)
	-- Convert word to Word
    return (str:gsub("^%l", string.upper))
end


function MerchantSystem:adjustPrice(conversingPlayer, cost, relationsTable)
	return ObjectManager.withCreatureAndPlayerObject(conversingPlayer, function(creatureObject, playerObject)
		-- Calculate price adjustment
		local finalPrice = cost
		for lc = 1, table.getn(relationsTable) , 1 do
			local playerStanding = playerObject:getFactionStanding(relationsTable[lc].name)
			playerStanding = math.min(playerStanding, 5000) -- cap faction due to Rebel/Imperial
			
			local adjustment = relationsTable[lc].priceAdjust

			if (playerStanding ~= nil) then
				if (playerStanding > 0 and (relationsTable[lc].npcStanding > 0 or relationsTable[lc].npcStanding == -9000)) then
					-- Discount: You are my friend or are a friend of my friend
					finalPrice = finalPrice / ((adjustment * playerStanding / 5000 ) / 100 + 1)
				elseif (playerStanding < 0 and relationsTable[lc].npcStanding < 0 and relationsTable[lc].npcStanding ~= -9000) then
					-- Discount: You are also the enemy of my enemy
					finalPrice = finalPrice / ((adjustment / 4 * math.abs(playerStanding) / 5000 ) / 100 + 1)
				elseif (playerStanding > 0 and relationsTable[lc].npcStanding < 0 ) then
					-- Surcharge: You are friendly with my enemy
					finalPrice = finalPrice * ((adjustment * playerStanding / 5000 ) / 100 + 1)
				elseif (playerStanding < 0 and relationsTable[lc].npcStanding == -9000) then
					-- Surcharge: You are an enemy of my friend
					finalPrice = finalPrice * ((adjustment * math.abs(playerStanding) / 5000 ) / 100 + 1)
				end	
			end
		end
		return math.floor(finalPrice)
	end)
end


function MerchantSystem:refuseService(conversingPlayer, relationsTable)
	return ObjectManager.withCreatureAndPlayerObject(conversingPlayer, function(creatureObject, playerObject)
		-- Check NPC/Player relations
		for lc = 1, table.getn(relationsTable) , 1 do
			local playerStanding = playerObject:getFactionStanding(relationsTable[lc].name)
			
			if (playerStanding ~= -9000) then -- Ignore special case price adjust standing
				if (playerStanding < relationsTable[lc].npcStanding and relationsTable[lc].npcStanding > 0) then
					creatureObject:sendSystemMessage("Hint: Increase your " .. MerchantSystem:firstToUpper(relationsTable[lc].name) .. " faction and speak with the NPC again.")
					return 2 -- Not friendly enough for service
				elseif (relationsTable[lc].npcStanding < 0 and (relationsTable[lc].npcStanding + playerStanding) > 0) then
					creatureObject:sendSystemMessage("Hint: Decrease your " .. MerchantSystem:firstToUpper(relationsTable[lc].name) .. " faction and speak with the NPC again.")
					return 1 -- Too friendly with my enemy for service
				end
			end
		end
		return 0 -- Will talk to player
	end)
end


function MerchantSystem:processSelection(pObject, optionLink, goodsTable, gtlc)
	ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject,playerObject)
		if (optionLink == goodsTable[gtlc].optName) then
			-- save selection data for use in confirmation step
			writeScreenPlayData(pObject, "MerchantSystem", "selectedItemName", goodsTable[gtlc].itemName) 
			writeScreenPlayData(pObject, "MerchantSystem", "selectedOptName", goodsTable[gtlc].optName) 
			writeScreenPlayData(pObject, "MerchantSystem", "selectedLineNum", gtlc) 
			print ("hopefully just saved ... " .. goodsTable[gtlc].itemName .. " and " .. goodsTable[gtlc].optName .. " and " .. gtlc )
		end
	end)
end


function MerchantSystem:getSelectedOptName(pObject)
	return ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
		return readScreenPlayData(pObject, "MerchantSystem", "selectedOptName")
	end)
end


function MerchantSystem:getSelectedItemName(pObject)
	return ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
		return readScreenPlayData(pObject, "MerchantSystem", "selectedItemName")
	end)
end

function MerchantSystem:getSelectedLineNum(pObject)
	return ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
		return readScreenPlayData(pObject, "MerchantSystem", "selectedLineNum")
	end)
end

function MerchantSystem:completeSale(pObject, creature, relationsTable, goodsTable)
	ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
		local gtlc = MerchantSystem:getSelectedLineNum(pObject)
		gtlc = tonumber(gtlc)
		print ("gtlc in completeSale is " .. gtlc)
		local credits = creature:getCashCredits()
		local pInventory = creature:getSlottedObject("inventory")
		local inventory = LuaSceneObject(pInventory)
		local numberOfItems = inventory:getContainerObjectsSize()
		local freeSpace = 80 - numberOfItems
		local pieces = #goodsTable[gtlc].items

		if (freeSpace < pieces) then
			creature:sendSystemMessage("Transaction Failed. You need " .. pieces .. " available inventory spaces to complete the transaction.")
		elseif (credits < goodsTable[gtlc].cost) then
			creature:sendSystemMessage("Transaction Failed. You do not have enough cash on hand to complete this transaction.")
		else
			-- Make the sale
			local chargePlayer = MerchantSystem:adjustPrice(pObject, goodsTable[gtlc].cost, relationsTable)
			
			if (chargePlayer ~= nil) then -- Error checking
				creature:subtractCashCredits(chargePlayer)
				-- Grant items
				for ic = 1, table.getn(goodsTable[gtlc].items) , 1 do
					local pItem = giveItem(pInventory, goodsTable[gtlc].items[ic], -1)
				end
			else 
				creature:sendSystemMessage("Transaction Failed. System error in price calculation.")
			end	
		end
	end)
end