-- Legend of Hondo
-- This is a file where I can test various things as needed.
includeFile("hondo/resource_list.lua")

local ObjectManager = require("managers.object.object_manager")

HondoTestSP = ScreenPlay:new {
	numberOfActs = 1,
    lootContainers = {}, -- ObjectIDs of spawned containers get stored here for use in initializeLootContainers()
    lootLevel = 13, 
    lootGroups = {
		{
			groups = {
				{group = "junk", chance = 4000000},
				{group = "wearables_common", chance = 2000000},
				{group = "rifles", chance = 1000000},
				{group = "pistols", chance = 1000000},
				{group = "melee_weapons", chance = 1000000},
				{group = "carbines", chance = 1000000},
			}
		}
    },
    lootContainerRespawn = 15 -- 15 seconds
}

--True here tells the server to load this screenplay at server load. False tells it to wait until explicitly started.
registerScreenPlay("HondoTestSP", true)

--This gets executed automatically when the screenplay is started
function HondoTestSP:start()
	if (isZoneEnabled("tatooine")) then
        createEvent(10*1000, "HondoTestSP", "createLootContainers", nil)
        --self:spawnSceneObjects()
    end
end

function HondoTestSP:spawnMobiles()
    --pDood = spawnMobile("tatooine", "borvos_thief", 0, -2895, 5, 2124, 300, 0) 
end

function HondoTestSP:createLootContainers()
    local pContainer = spawnSceneObject("tatooine", "object/tangible/container/drum/treasure_drum.iff", -2895, 5, 2124, 0, 0.906308, 0, 0.422618, 0)
    
    SceneObject(pContainer):setContainerDefaultAllowPermission(MOVEOUT + OPEN)
    SceneObject(pContainer):setContainerComponent("PlaceableLootContainerComponent")

    createEvent(10*1000, "HondoTestSP", "addTheLoot", pContainer)
end

function HondoTestSP:addTheLoot(pContainer)
    local timePassed = getTimestampMilli()
    local rndNum = getRandomNumber(1, #resourceList)
    local targetType = "wood_deciduous_corellia"
    local resourceGuessed = resourceList[rndNum].type
    
    while not (string.find(targetType, resourceGuessed)) do
        rndNum = getRandomNumber(1, #resourceList)
        resourceGuessed = resourceList[rndNum].type
    end
    
    timePassed = (timePassed - getTimestampMilli()) / 1000
    printf("Resource found after ... " .. timePassed .. " seconds of searching")
    
    addResourceToContainer(pContainer, resourceList[rndNum].name, 250)
    
    --createLootFromCollection(pContainer, self.lootGroups, self.lootLevel)
    createEvent(self.lootContainerRespawn*1000, "HondoTestSP", "addTheLoot", pContainer)
end

function HondoTestSP:spawnSceneObjects()
end