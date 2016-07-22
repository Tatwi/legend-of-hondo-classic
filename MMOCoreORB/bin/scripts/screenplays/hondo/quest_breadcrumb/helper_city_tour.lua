-- Bread Crumb Quest: Help the player find the profession trainers.
-- R. Bassett Jr. www.tpot.ca
-- July 2016
--
-- This file can be used a template for other "bread crumb quests" that take place on the same planet as its quest giver.
-- 1. Replace all instances of CivicInspectorScreenPlay and helpercivicinspector_convo_handler, and change the value of questName, className, with something unique.
-- 2. Make a custom character and conversation for that character. Keep in mind the important convo steps that trigger the quest actions.
-- 3. Spawn your character in the spawnMobiles() function.
-- 4. Customize the questConfig table to your liking.
-- That gets you a new quest with minimal effort. As the quest is self contained, not part of a standard framework, you can add new functionality as you see fit, confident that your mods won't break something else.
-- Note that this quest method does not require a client side update, provided your convo lua file is hand made with NPC customDialogText and reply options.

local ObjectManager = require("managers.object.object_manager")


CivicInspectorScreenPlay = ScreenPlay:new {
    numberOfActs = 1,
    screenplayName = "CivicInspectorScreenPlay",
    states = {
        active = 1,
        complete = 2,
        cooldown = 4,
    }, 
    questConfig={
        planetName = "tatooine",
        questName="CivicInspector",  -- Internal quest , should be unique to the quest
        className="CivicInspectorScreenPlay", -- Class name of this class
        questGiverName="Jorip Igta",
        timeResolution=0, -- number of decimal places to use for the time updates 0 = none
        expiryTime = 900, -- (15 minutes) Amount of time in SECONDS that the player has to finish the quest 
        cooldown = 28800, -- (8 hours) Amount of time in SECONDS until the player can repeat the quest
        waypointRadius=6, -- size of the waypoint observer. 3 is good for on foot, 10 for when in a vehicle. 1 makes it kind of annoying to trigger.
        cashReward = 1500, -- set to 0 for no cash reward
        giveItems = "true", -- set false if there isn't an item reward.
        rewardType = "lootgroup", -- Pick One: myListAll = give whole list, myListRNG = pick one item from the list, lootgroup = item from the lootGroups
        lootGroups = {"junk", "loot_kit_parts"}, -- loot groups
        lootQuantity = 1, -- number of items to give
        lootLevelMin = 10, -- range 1 - 300. Set same as lootLevelMax for highest chance of good loot.
        lootLevelMax = 80, -- range 1 - 300. This is not a gaurantee the player will always get top end loot.
        lootMaxCondition = "false", -- set true for item to have full hitpoints
        myList = {
            "object/tangible/dice/eqp_chance_cube.iff",
            "object/tangible/dice/eqp_twenty_sided_dice_set.iff",
        },
    },
    waypointSpecialType = 12, -- Any int 12 and up will do. Use a unique number per quest so they don't over-write eachother if the player takes more than one quest at time. 
    waypoints = { 
        {x = -2795, y = 2155, wpName = "Zone A", wpDesc = ""}, -- Old Shuttle A
        {x = -2873, y = 1915, wpName = "Zone B", wpDesc = ""}, -- Old Shuttle B
        {x = -3024, y = 1945, wpName = "Zone C", wpDesc = ""}, -- New Starport
        {x = -3129, y = 1990, wpName = "Zone D", wpDesc = ""}, -- South West District
        {x = -2979, y = 2343, wpName = "Zone E", wpDesc = ""}, -- Former Banking Center
        {x = -3115, y = 2371, wpName = "Zone F", wpDesc = ""}, -- North West District
        {x = -3004, y = 2480, wpName = "Zone G", wpDesc = ""}, -- North Pass
        {x = -2897, y = 2512, wpName = "Zone H", wpDesc = ""}, -- Bad end of town
        {x = -2868, y = 2253, wpName = "Zone I", wpDesc = ""}, -- Center where medium house was
        {x = -2869, y = 2159, wpName = "Return To Jorip Igta", wpDesc = ""}, -- Quest Giver
    },
}

registerScreenPlay("CivicInspectorScreenPlay", true)

function CivicInspectorScreenPlay:start()
    if (isZoneEnabled(self.questConfig.planetName)) then
        -- Spawn character
        local pCoord = spawnMobile(self.questConfig.planetName, "helper_civic_inspector", 1, -2869.82, 5, 2159.27, 337, 0) 
    end
end

-- Start Quest
function CivicInspectorScreenPlay:startQuesting(pObject)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        -- Set quest active
        creatureObject:setScreenPlayState(CivicInspectorScreenPlay.states.active, CivicInspectorScreenPlay.screenplayName)
        
        -- Create first waypoint
        self:createPoint(pObject, 1)
        
        -- Set start and expiry time
        local time = getTimestampMilli()
        writeScreenPlayData(pObject, self.questConfig.questName, "starttime", time)
        createEvent(self.questConfig.expiryTime*1000, self.questConfig.className, "resetPlayerUnfinishedEventHandler",pObject)
        
        -- Inform player
        creatureObject:sendSystemMessage("You have " .. (self:roundNumber(self.questConfig.expiryTime/60)) .. " minutes to complete your mission.")
        creatureObject:playMusicMessage("sound/music_themequest_acc_criminal.snd")
    end)
end

-- Create active area and waypoint
function CivicInspectorScreenPlay:createPoint(pObject, wpIndex)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        -- Create active area
        local pWaypointAA = spawnActiveArea(self.questConfig.planetName, "object/active_area.iff", self.waypoints[wpIndex].x, 0, self.waypoints[wpIndex].y, self.questConfig.waypointRadius, 0)
        if (pWaypointAA ~= nil) then
          createObserver(ENTEREDAREA, self.questConfig.className, "triggerPoint" , pWaypointAA)
          writeScreenPlayData(pObject, self.questConfig.questName, "activeAreaID", SceneObject(pWaypointAA):getObjectIDAsString()) -- Newer SWGEmu code users can just use getObjectID
        end
        
        -- Create waypoint
		local waypointID = playerObject:addWaypoint(self.questConfig.planetName, self.waypoints[wpIndex].wpName, "", self.waypoints[wpIndex].x, self.waypoints[wpIndex].y, WAYPOINTGREEN, true, true, self.waypointSpecialType, 0)
        writeScreenPlayData(pObject, self.questConfig.questName, "activeWaypoint", tostring(wpIndex))
    end)
end

-- Process arrival at waypoint
function CivicInspectorScreenPlay:triggerPoint(pActiveArea, pObject)
-- START VERIFICATION STEPS
    if not SceneObject(pObject):isPlayerCreature() then
        -- Object is not a player
        return 0
    end

    return ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        local questActive = creatureObject:hasScreenPlayState(CivicInspectorScreenPlay.states.active, CivicInspectorScreenPlay.screenplayName)
        if not (questActive) then
            -- Player is not on the quest
            return 0
        end
        
        local wpIndex =  tonumber(readScreenPlayData(pObject, self.questConfig.questName, "activeWaypoint"))
        if (wpIndex == nil) then
            -- Shouldn't happen, but if it does it will crash server without this check.
            self:resetQuest(pObject, 2)
            return 0
        end
-- END VERIFICATION STEPS
    
        -- Remove current active area
        SceneObject(pActiveArea):destroyObjectFromWorld()
        
        -- Remove current waypoint
        playerObject:removeWaypointBySpecialType(self.waypointSpecialType) 
        
        if (wpIndex == table.getn(self.waypoints)) then
            -- Final waypoint
            creatureObject:removeScreenPlayState(CivicInspectorScreenPlay.states.active, CivicInspectorScreenPlay.screenplayName)
            creatureObject:setScreenPlayState(CivicInspectorScreenPlay.states.complete, CivicInspectorScreenPlay.screenplayName)
            
            -- Inform player
            creatureObject:sendSystemMessage("Final step complete!")
            creatureObject:sendSystemMessage("Speak to " .. self.questConfig.questGiverName .. " again to complete your mission.")
            creatureObject:playMusicMessage("sound/ui_select_info.snd")
        else
            -- Ongoing waypoints
            
            -- Create next waypoint
            wpIndex = wpIndex + 1
            self:createPoint(pObject, wpIndex)
            
            -- Update player on quest status 
            local startTime = readScreenPlayData(pObject, self.questConfig.questName, "starttime")
            local timePassed = (getTimestampMilli() - tonumber(startTime)) / 1000 -- miliseconds to seconds
            local timeLeft = self.questConfig.expiryTime - timePassed
            local timeType = " minutes"
            if (timeLeft < 60) then
              timeType = " seconds"
            else
              if (timeLeft < 120) then
                timeType = " minute" -- because pluralization matters people! :)
              end
              timeLeft = timeLeft / 60 -- show time in minutes
            end
            timeLeft = self:roundNumber(timeLeft) -- drop the decimal places
            
            creatureObject:sendSystemMessage("You have " .. timeLeft .. timeType .. " to complete " .. self.questConfig.questGiverName .. "'s mission.")
            
            -- Describe the waypoint the player arrived at...
            if (self.waypoints[wpIndex].wpDesc ~= nil) then
                creatureObject:sendSystemMessage(self.waypoints[wpIndex-1].wpDesc) -- remove -1 to describe the next waypoint instead of the one the player arrived at.
            end
            
            --creatureObject:playMusicMessage("sound/ui_select_info.snd")
            creatureObject:playEffect("clienteffect/survey_tool_gas.cef", "")
        end
        
        return 0
    end)
end

-- Reset quest
function CivicInspectorScreenPlay:resetQuest(pObject, reason)
  ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
    -- Remove current active area
    local activeAreaID = readScreenPlayData(pObject, self.questConfig.questName, "activeAreaID")
    local pActiveArea = getSceneObject(activeAreaID)
    if (pActiveArea ~= nil) then
        SceneObject(pActiveArea):destroyObjectFromWorld()
    end
  
    -- Remove current waypoint
    playerObject:removeWaypointBySpecialType(self.waypointSpecialType)

    -- Clear screenplay data
    clearScreenPlayData(pObject,self.questConfig.questName)
    creatureObject:removeScreenPlayState(CivicInspectorScreenPlay.states.active, CivicInspectorScreenPlay.screenplayName)
    creatureObject:removeScreenPlayState(CivicInspectorScreenPlay.states.complete, CivicInspectorScreenPlay.screenplayName)
    
    -- Inform player
    if (reason == 1) then
        creatureObject:sendSystemMessage("You have succesfullly abandoned " .. self.questConfig.questGiverName .. "'s mission.")
    elseif (reason == 2) then
        creatureObject:sendSystemMessage("Something has broken " .. self.questConfig.questGiverName .. "'s mission. It has automatically been abandoned for you.")
    else
        creatureObject:sendSystemMessage("You were unable to finish " .. self.questConfig.questGiverName .. "'s mission in time.")
    end
    creatureObject:playMusicMessage("sound/music_themequest_fail_imperial.snd")
  end)
end

-- Timeout quest
function CivicInspectorScreenPlay:resetPlayerUnfinishedEventHandler(pObject)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        local questActive = creatureObject:hasScreenPlayState(CivicInspectorScreenPlay.states.active, CivicInspectorScreenPlay.screenplayName)
        if not (questActive) then
            -- Player has already completed the quest
            return
        end
        
        self:resetQuest(pObject, 0)
    end)
end

-- End quest and start cooldown
function CivicInspectorScreenPlay:endQuest(pObject)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        -- Reset quest state
        creatureObject:removeScreenPlayState(CivicInspectorScreenPlay.states.active, CivicInspectorScreenPlay.screenplayName)
        creatureObject:removeScreenPlayState(CivicInspectorScreenPlay.states.complete, CivicInspectorScreenPlay.screenplayName)
        
        -- Start cooldown
        createEvent(self.questConfig.cooldown*1000, self.questConfig.className, "cooldownEventHandler",pObject)
        creatureObject:setScreenPlayState(CivicInspectorScreenPlay.states.cooldown, CivicInspectorScreenPlay.screenplayName)
        
        -- Inform player
        creatureObject:playMusicMessage("sound/music_combat_bfield_vict.snd")
    end)
end

-- End cooldown
function CivicInspectorScreenPlay:cooldownEventHandler(pObject)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        clearScreenPlayData(pObject,self.questConfig.questName)
        creatureObject:removeScreenPlayState(CivicInspectorScreenPlay.states.cooldown, CivicInspectorScreenPlay.screenplayName)
        
        -- Inform player
        creatureObject:sendSystemMessage("Something gives you the feeling that " .. self.questConfig.questGiverName .. " might need your help again...")
    end)
end

-- Failsafe end cooldown
function CivicInspectorScreenPlay:failsafeEndCooldown(pObject)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        local onCooldown = creatureObject:hasScreenPlayState(CivicInspectorScreenPlay.states.cooldown, CivicInspectorScreenPlay.screenplayName)
        if not (onCooldown) then
            -- Player is not on the quest or it's not on cooldown
            return
        end
        
        local startTime = readScreenPlayData(pObject, self.questConfig.questName, "starttime")
        local timePassed = (getTimestampMilli() - tonumber(startTime)) / 1000 -- miliseconds to seconds
    
        if (timePassed > self.questConfig.cooldown) then
            clearScreenPlayData(pObject,self.questConfig.questName)
            creatureObject:removeScreenPlayState(CivicInspectorScreenPlay.states.cooldown, CivicInspectorScreenPlay.screenplayName)
        end
    end)
end


-- Helper functions

function CivicInspectorScreenPlay:roundNumber(num)
  local mult = 10 ^ (self.questConfig.timeResolution or 0 )
  return math.floor(num * mult + 0.5) / mult
end


-- Handle Rewards 

function CivicInspectorScreenPlay:checkSpace(creature)
    if (CivicInspectorScreenPlay.questConfig.giveItems == "false") then
        return true -- always enough room for nothing!
    end
    
    local pInventory = creature:getSlottedObject("inventory")
    local inventory = LuaSceneObject(pInventory)
    local pieces = 0
    
    if (CivicInspectorScreenPlay.questConfig.rewardType == "lootgroup") then
        pieces = CivicInspectorScreenPlay.questConfig.lootQuantity
    else
        pieces = #CivicInspectorScreenPlay.questConfig.myList -- gets # of items in the reward list
    end
    
    -- Check for room in inventory
    local numberOfItems = inventory:getContainerObjectsSize()
    local freeSpace = 80 - numberOfItems
    
    if (freeSpace < pieces) then
        -- Bail if the player doesn't have enough space in their inventory.
        creature:sendSystemMessage("You do not have enough inventory space to complete this quest. Please free up " .. pieces .. " space(s) and speak to the quest giver again.")
        return false
    end
    
    return true
end

function CivicInspectorScreenPlay:giveReward(creature)
    local pInventory = creature:getSlottedObject("inventory")
    local inventory = LuaSceneObject(pInventory)
    local pieces = 0
    
    if (CivicInspectorScreenPlay.questConfig.rewardType == "lootgroup") then
        pieces = CivicInspectorScreenPlay.questConfig.lootQuantity
    else
        pieces = #CivicInspectorScreenPlay.questConfig.myList -- gets # of items in the reward list
    end
    
    -- Grant cash reward, if there is one
    if (CivicInspectorScreenPlay.questConfig.cashReward ~= 0) then
        creature:addCashCredits(CivicInspectorScreenPlay.questConfig.cashReward, true)
        creature:sendSystemMessage("You have earned " .. CivicInspectorScreenPlay.questConfig.cashReward .. " credits.")
    end

    -- Grant item rewards, if there are any
    if (CivicInspectorScreenPlay.questConfig.giveItems == "true") then
        if (CivicInspectorScreenPlay.questConfig.rewardType == "myListRNG") then
            -- Give 1 random list item
            local rndNum = getRandomNumber(1, pieces)
            local pItem = giveItem(pInventory, CivicInspectorScreenPlay.questConfig.myList[rndNum], -1)
            creature:sendSystemMessage("A reward was placed into your inventory!") 
        elseif (CivicInspectorScreenPlay.questConfig.rewardType == "myListAll") then
            -- Give all list items
            for itemCount = 1, pieces do
                local pItem = giveItem(pInventory, CivicInspectorScreenPlay.questConfig.myList[itemCount], -1)
            end
            creature:sendSystemMessage("Rewards were placed into your inventory!") 
        elseif (CivicInspectorScreenPlay.questConfig.rewardType == "lootgroup") then
            -- Give loot group items
            local levelRNG = 0
            local groupRNG  = 0
            for itemCount = 1, pieces do
                groupRNG = getRandomNumber(1, #CivicInspectorScreenPlay.questConfig.lootGroups)
                
                if (CivicInspectorScreenPlay.questConfig.lootLevelMin == CivicInspectorScreenPlay.questConfig.lootLevelMax) then
                    levelRNG = CivicInspectorScreenPlay.questConfig.lootLevelMax
                else 
                    levelRNG = getRandomNumber(CivicInspectorScreenPlay.questConfig.lootLevelMin, CivicInspectorScreenPlay.questConfig.lootLevelMax)
                end
                
                createLoot(pInventory, CivicInspectorScreenPlay.questConfig.lootGroups[groupRNG], levelRNG, CivicInspectorScreenPlay.questConfig.lootMaxCondition)
            end
            creature:sendSystemMessage("Loot was placed into your inventory!")
        end
    end
end


-- Handle Conversation

helpercivicinspector_convo_handler = Object:new {
  tstring = "myconversation"
 }
 

function helpercivicinspector_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
    local creature = LuaCreatureObject(conversingPlayer)
    local convosession = creature:getConversationSession()

    lastConversation = nil

    local conversation = LuaConversationTemplate(conversationTemplate)

    local nextConversationScreen 
    
    -- Player clicked NPC
    if ( conversation ~= nil ) then 
        if ( convosession ~= nil ) then 
            local session = LuaConversationSession(convosession)

            if ( session ~= nil ) then
                lastConversationScreen = session:getLastConversationScreen()
            end 
        end 
        
        
        if ( lastConversationScreen == nil ) then 
            -- Player clicked NPC for first time to start conversation
            CivicInspectorScreenPlay:failsafeEndCooldown(conversingPlayer) -- in case of server crash before cooldown state was removed
            local questActive = creature:hasScreenPlayState(CivicInspectorScreenPlay.states.active, CivicInspectorScreenPlay.screenplayName)
            local questComplete = creature:hasScreenPlayState(CivicInspectorScreenPlay.states.complete, CivicInspectorScreenPlay.screenplayName)
            local questCooldown = creature:hasScreenPlayState(CivicInspectorScreenPlay.states.cooldown, CivicInspectorScreenPlay.screenplayName)

            if (questActive) then 
                -- Quest is active
                nextConversationScreen = conversation:getScreen("quest_active")
            elseif (questComplete) then
                -- Quest completed
                nextConversationScreen = conversation:getScreen("quest_complete")
            elseif (questCooldown) then
                -- Quest completed
                nextConversationScreen = conversation:getScreen("quest_cooldown")  
            else
                -- Start the quest
                nextConversationScreen = conversation:getInitialScreen()
            end 
        else
            -- Player is already talking to NPC
            local luaLastConversationScreen = LuaConversationScreen(lastConversationScreen)
            local optionLink = luaLastConversationScreen:getOptionLink(selectedOption)

            if (optionLink == "give_rewards") then
                -- If on the reward step, give reward or bail if player doesn't have enough inventory space for it.
                local enoughSpace = CivicInspectorScreenPlay:checkSpace(creature)
                
                if (enoughSpace) then
                    CivicInspectorScreenPlay:giveReward(creature)
                    CivicInspectorScreenPlay:endQuest(conversingPlayer)
                else
                    nextConversationScreen = conversation:getScreen("no_space")
                end 
            end
            
            -- Just play the next step in the conversation 
            nextConversationScreen = conversation:getScreen(optionLink)
        end 
    end  
    
    return nextConversationScreen
end


function helpercivicinspector_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
  -- Plays the screens of the conversation.
  local player = LuaSceneObject(conversingPlayer)
  local screen = LuaConversationScreen(conversationScreen)
  local screenID = screen:getScreenID()
  
  if ( screenID == "quest_accept" ) then
    CivicInspectorScreenPlay:startQuesting(conversingPlayer)
  end
  
  if ( screenID == "quest_reset" ) then
    CivicInspectorScreenPlay:resetQuest(conversingPlayer, 1)
  end

  return conversationScreen
end

