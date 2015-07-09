
local ObjectManager = require("managers.object.object_manager")

MerchantSystem = ScreenPlay:new {
	numberOfActs = 1,
	states = {active = 2}, 
	screenplayName = "MerchantSystem",
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