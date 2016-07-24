-- Legend on Hondo
-- Common helper functions that can be used in various screenplays
-- July 2016 

-- Includes
includeFile("hondo/resource_list.lua")
includeFile("../managers/resource_manager_spawns.lua")
local ObjectManager = require("managers.object.object_manager")

LoH = ScreenPlay:new {
	numberOfActs = 1,
}

registerScreenPlay("LoH", true)

-- Math

function LoH:roundNumberTo(num, decimals)
  local mult = 10 ^ (decimals or 0 )
  return math.floor(num * mult + 0.5) / mult
end

-- Resources

-- Returns a random resourceList index # of a resource type that, all or in part, matches the search term
-- Specific class: getRandomResourceOfType("vegetable_beans_corellia")
-- Generic category: getRandomResourceOfType("vegetable") or getRandomResourceOfType("beans")
function LoH:getRandomResourceOfType(searchTerm)
    local startTime = getTimestampMilli()
    local timePassed = 0
    local guessedIndex = getRandomNumber(1, #resourceList)
    local guessedType = resourceList[guessedIndex].type
    
    while not (string.match(guessedType, searchTerm)) do
        guessedIndex = getRandomNumber(1, #resourceList)
        guessedType = resourceList[guessedIndex].type
        
        timePassed = (getTimestampMilli() - startTime) 
        if (timePassed > 200) then
             printf("ERROR: getRandomResourceOfType(\"" .. searchTerm .. "\"). Invalid search term?\n")
             return 0
        end
    end

    return guessedIndex
end

-- Returns the numerical value of a specific resource stat (as a string value)
-- Usage: getResourceStat("ResourceName", "OQ")
function LoH:getResourceStat(resourceName, stat)
    local summary = getResourceSummary(resourceName)
    stat = (stat .. ":%s*(%d+)")
    local value = string.match(summary, stat)
    
    return value
end