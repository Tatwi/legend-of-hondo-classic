-- Legend of Hondo Pirate Quest System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016
-- Uses some functions from the Merchant System and Hondo Common Functions.

local ObjectManager = require("managers.object.object_manager")
includeFile("data_locations_tatooine.lua")
includeFile("data_quests.lua")
includeFile("functions_events.lua")
includeFile("functions_objectives.lua")

PirateQuestSystem = ScreenPlay:new {
	numberOfActs = 1,
	screenplayName = "PirateQuestSystem",
}

registerScreenPlay("PirateQuestSystem", true)



-- Calculate Credit Payout
function PirateQuestSystem:getPayout(conversingPlayer, startPayout, relationsTable)
    local renownBonus = 0
    local smugglerBonus = 0
    local luck = 0
    local newPayout = startPayout * (1 + renownBonus + smugglerBonus + luck)
    local finalPayout = newPayout * 2 - MerchantSystem:adjustPrice(conversingPlayer, newPayout, relationsTable)
    
    return finalPayout
end 