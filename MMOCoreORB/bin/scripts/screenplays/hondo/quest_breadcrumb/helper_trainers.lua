-- Bread Crumb Quest: Help the player find the profession trainers.
-- R. Bassett Jr. www.tpot.ca
-- July 2016
--
-- This file can be used a template for other "bread crumb quests" that take place on the same planet as its quest giver.
-- 1. Replace all instances of HelperTrainersScreenPlay and helpertrainers_convo_handler, and change the value of questName, className, with something unique.
-- 2. Make a custom character and conversation for that character. Keep in mind the important convo steps that trigger the quest actions.
-- 3. Spawn your character in the spawnMobiles() function.
-- 4. Customize the questConfig table to your liking.
-- That gets you a new quest with minimal effort. As the quest is self contained, not part of a standard framework, you can add new functionality as you see fit, confident that your mods won't break something else.
-- Note that this quest method does not require a client side update, provided your convo lua file is hand made with NPC customDialogText and reply options.

local ObjectManager = require("managers.object.object_manager")


HelperTrainersScreenPlay = ScreenPlay:new {
    numberOfActs = 1,
    screenplayName = "HelperTrainersScreenPlay",
    states = {
        active = 1,
        complete = 2,
        cooldown = 4,
    }, 
    questConfig={
        planetName = "tatooine",
        questName="HelperTrainers",  -- Internal quest , should be unique to the quest
        className="HelperTrainersScreenPlay", -- Class name of this class
        questGiverName="Wherma Traynr",
        timeResolution=0, -- number of decimal places to use for the time updates 0 = none
        expiryTime = 3600, -- (1 Hour) Amount of time in SECONDS that the player has to finish the quest 
        cooldown = 3600, -- (1 hour) Amount of time in SECONDS until the player can repeat the quest
        waypointRadius=3, -- size of the waypoint observer. 3 is good for on foot, 10 for when in a vehicle. 1 makes it kind of annoying to trigger.
        cashReward = 0, -- set to 0 for no cash reward
        giveItems = "true", -- set false if there isn't an item reward.
        rewardType = "myListRNG", -- Pick One: myListAll = give whole list, myListRNG = pick one item from the list, lootgroup = item from the lootGroups
        lootGroups = {"junk", "loot_kit_parts"}, -- loot groups
        lootQuantity = 1, -- number of items to give
        lootLevelMin = 10, -- range 1 - 300. Set same as lootLevelMax for highest chance of good loot.
        lootLevelMax = 80, -- range 1 - 300. This is not a gaurantee the player will always get top end loot.
        lootMaxCondition = "false", -- set true for item to have full hitpoints
        myList = {
            "object/tangible/treasure_map/treasure_map_pirate1.iff",
            "object/tangible/treasure_map/treasure_map_pirate2.iff",
        },
    },
    waypointSpecialType = 14, -- Any int 12 and up will do. Use a unique number per quest so they don't over-write eachother if the player takes more than one quest at time. 
    waypoints = { 
        {x = -2910, y = 2150, wpName = "Beginner's Square", wpDesc = "Before we get started, it's worth mentioning that you'll find other people like me to talk to here in the Starport area. Take a moment and have a look around, before heading out."},
        {x = -2986, y = 2150, wpName = "Auto-Teach Termial", wpDesc = "First thing's, first... What you're looking at here is BETA, the super experience induction device. It's capable of helping you learn a range of skills that you may find useful or enjoyable. Most of these skills do not require Skill Points and the machine is even free to use!"},
        {x = -3057, y = 2060, wpName = "Crafter's Guild", wpDesc = "Here in this guild for crafters, you will find trainers for Architecture, Armorsmithing, Droid Engineering, and Weaponsmithing. There's also an array of related Merchants here, much like you will find in other shops throughout your travels."},
        {x = -3152, y = 2097, wpName = "Hospital", wpDesc = "Here is the local hospital. It has all the services you might need, such as that standard issue Wound Terminal over there. The doctor is a good teacher, having trained many in the use of advanced medicine and healing. I've heard he'll even teach you how to make and use poisons, so... probably a wise idea to stay on his good side. The Doc's second in command, the Medic trainer, is kinda skittish, but he's OK I guess."},
        {x = -3089, y = 2219, wpName = "The Hotel", wpDesc = "Somewhere in this entertaining place I'm sure you'll find the Smuggler trainer. Can't say as though I've ever seen him anywhere else, now that I think about it..."},
        {x = -2992, y = 2223, wpName = "Lovable Critters", wpDesc = "The local Creature Handler is a nice guy. He mostly looks after mounts at the cantina these days, but rumor has it that he's seen some adventures in his time."},
        {x = -3097, y = 2284, wpName = "Cloning Facility", wpDesc = "Ah, the other doctor in town. This creap used to work at the hospital, until they found him... uh, you know what, never mind. He works at the cloner now and calls himself a Bio-Engineer. If you store your clone data there, your clone can see him when you die!"},
        {x = -2898, y = 2425, wpName = "Nado's Junk Shop", wpDesc = "Being so close to the rough side of town, Nado likes to keep a guard in each of his entrances at all times. Perfect job for a retired Swordsman and an old Fencer who still have some swash left in their old buckles."},
        {x = -3015, y = 2423, wpName = "Fighter's Guild", wpDesc = "Across the road from the best defended junk shop in the galaxy, you have the local Fighter's Guild. Markman, Rifelman, Brawler, and Pikeman trainers are usually here, as is the Teras Kasi Artist. The Pistoleer and Carbineer trainer on the other hand are probably out shooting mynocks again... or is it still..."},
        {x = -2981, y = 2533, wpName = "Outdoorman", wpDesc = "Out here on the edge of town is the Scouting and Ranger Center. They should be more than happy to train you, sell you some camping gear, feed you to something. You know, the usual. "},
        {x = -2716, y = 2506, wpName = "About Them Mynocks...", wpDesc = "I was right, wasn't I? Well, at least their happy, which is more than I can say for the Pistoleer's wife. She's the Marksman Tainer you just met, you know, back at the office where somebody has to do all the paper work. Somebody."},
        {x = -2763, y = 2035, wpName = "The Nine to Fiver's Club", wpDesc = "It may come as a surprise, but the Empire does at least TRY to train their troops to the best of their ability, even if they have to bring in contract workers to get it done. You'll usually find their Squad Leader, Commando, and Bounty Hunter trainers relaxing here together when they aren't working for the man."},
        {x = -2838, y = 1991, wpName = "Artisan's Mall", wpDesc = "This is a nice little place. A top notch Tailor, an Artisan who knows a little about a lot of things, and... the food is delicious! Be sure to tell that to the Chef even -especially- when it isn't."},
        {x = -2896, y = 2083, wpName = "The Starport", wpDesc = "Finally, inside the Starport is the local Shipwright who always seems ready to help folks build stuff."},
        {x = -2896, y = 2137, wpName = "Wherma's Hangout", wpDesc = ""}, -- final waypoint should be the quest giver, because quest ends only after talking to them.
    },
}

registerScreenPlay("HelperTrainersScreenPlay", true)

function HelperTrainersScreenPlay:start()
    if (isZoneEnabled(self.questConfig.planetName)) then
        -- Spawn character
        local pCoord = spawnMobile(self.questConfig.planetName, "helper_trainers", 1, -2896.3, 5.0, 2137.3, -67, 0)
    end
end

-- Start Quest
function HelperTrainersScreenPlay:startQuesting(pObject)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        -- Set quest active
        creatureObject:setScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
        
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
function HelperTrainersScreenPlay:createPoint(pObject, wpIndex)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        -- Create active area
        local pWaypointAA = spawnActiveArea(self.questConfig.planetName, "object/active_area.iff", self.waypoints[wpIndex].x, 0, self.waypoints[wpIndex].y, self.questConfig.waypointRadius, 0)
        if (pWaypointAA ~= nil) then
          createObserver(ENTEREDAREA, self.questConfig.className, "triggerPoint" , pWaypointAA)
          writeScreenPlayData(pObject, self.questConfig.questName, "activeAreaID", SceneObject(pWaypointAA):getObjectIDAsString()) -- Newer SWGEmu code users can just use getObjectID
        end
        
        -- Create waypoint
		local waypointID = playerObject:addWaypoint(self.questConfig.planetName, self.waypoints[wpIndex].wpName, "", self.waypoints[wpIndex].x, self.waypoints[wpIndex].y, WAYPOINTORANGE, true, true, self.waypointSpecialType, 0)
        writeScreenPlayData(pObject, self.questConfig.questName, "activeWaypoint", tostring(wpIndex))
    end)
end

-- Process arrival at waypoint
function HelperTrainersScreenPlay:triggerPoint(pActiveArea, pObject)
-- START VERIFICATION STEPS
    if not SceneObject(pObject):isPlayerCreature() then
        -- Object is not a player
        return 0
    end

    return ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        local questActive = creatureObject:hasScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
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
            creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
            creatureObject:setScreenPlayState(HelperTrainersScreenPlay.states.complete, HelperTrainersScreenPlay.screenplayName)
            
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
            
            creatureObject:playMusicMessage("sound/ui_select_info.snd")
        end
        
        return 0
    end)
end

-- Reset quest
function HelperTrainersScreenPlay:resetQuest(pObject, reason)
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
    creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
    creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.complete, HelperTrainersScreenPlay.screenplayName)
    
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
function HelperTrainersScreenPlay:resetPlayerUnfinishedEventHandler(pObject)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        local questActive = creatureObject:hasScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
        if not (questActive) then
            -- Player has already completed the quest
            return
        end
        
        self:resetQuest(pObject, 0)
    end)
end

-- End quest and start cooldown
function HelperTrainersScreenPlay:endQuest(pObject)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        -- Reset quest state
        creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
        creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.complete, HelperTrainersScreenPlay.screenplayName)
        
        -- Start cooldown
        createEvent(self.questConfig.cooldown*1000, self.questConfig.className, "cooldownEventHandler",pObject)
        creatureObject:setScreenPlayState(HelperTrainersScreenPlay.states.cooldown, HelperTrainersScreenPlay.screenplayName)
        
        -- Inform player
        creatureObject:playMusicMessage("sound/music_combat_bfield_vict.snd")
    end)
end

-- End cooldown
function HelperTrainersScreenPlay:cooldownEventHandler(pObject)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        clearScreenPlayData(pObject,self.questConfig.questName)
        creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.cooldown, HelperTrainersScreenPlay.screenplayName)
        
        -- Inform player
        creatureObject:sendSystemMessage("Something gives you the feeling that " .. self.questConfig.questGiverName .. " might need your help again...")
    end)
end

-- Failsafe end cooldown
function HelperTrainersScreenPlay:failsafeEndCooldown(pObject)
    ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
        local onCooldown = creatureObject:hasScreenPlayState(HelperTrainersScreenPlay.states.cooldown, HelperTrainersScreenPlay.screenplayName)
        if not (onCooldown) then
            -- Player is not on the quest or it's not on cooldown
            return
        end
        
        local startTime = readScreenPlayData(pObject, self.questConfig.questName, "starttime")
        local timePassed = (getTimestampMilli() - tonumber(startTime)) / 1000 -- miliseconds to seconds
    
        if (timePassed > self.questConfig.cooldown) then
            clearScreenPlayData(pObject,self.questConfig.questName)
            creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.cooldown, HelperTrainersScreenPlay.screenplayName)
        end
    end)
end


-- Helper functions

function HelperTrainersScreenPlay:roundNumber(num)
  local mult = 10 ^ (self.questConfig.timeResolution or 0 )
  return math.floor(num * mult + 0.5) / mult
end


-- Handle Rewards 

function HelperTrainersScreenPlay:checkSpace(creature)
    if (HelperTrainersScreenPlay.questConfig.giveItems == "false") then
        return true -- always enough room for nothing!
    end
    
    local pInventory = creature:getSlottedObject("inventory")
    local inventory = LuaSceneObject(pInventory)
    local pieces = 0
    
    if (HelperTrainersScreenPlay.questConfig.rewardType == "lootgroup") then
        pieces = HelperTrainersScreenPlay.questConfig.lootQuantity
    else
        pieces = #HelperTrainersScreenPlay.questConfig.myList -- gets # of items in the reward list
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

function HelperTrainersScreenPlay:giveReward(creature)
    local pInventory = creature:getSlottedObject("inventory")
    local inventory = LuaSceneObject(pInventory)
    local pieces = 0
    
    if (HelperTrainersScreenPlay.questConfig.rewardType == "lootgroup") then
        pieces = HelperTrainersScreenPlay.questConfig.lootQuantity
    else
        pieces = #HelperTrainersScreenPlay.questConfig.myList -- gets # of items in the reward list
    end
    
    -- Grant cash reward, if there is one
    if (HelperTrainersScreenPlay.questConfig.cashReward ~= 0) then
        creature:addCashCredits(HelperTrainersScreenPlay.questConfig.cashReward, true)
        creature:sendSystemMessage("You have earned " .. HelperTrainersScreenPlay.questConfig.cashReward .. " credits.")
    end

    -- Grant item rewards, if there are any
    if (HelperTrainersScreenPlay.questConfig.giveItems == "true") then
        if (HelperTrainersScreenPlay.questConfig.rewardType == "myListRNG") then
            -- Give 1 random list item
            local rndNum = getRandomNumber(1, pieces)
            local pItem = giveItem(pInventory, HelperTrainersScreenPlay.questConfig.myList[rndNum], -1)
            creature:sendSystemMessage("A reward was placed into your inventory!") 
        elseif (HelperTrainersScreenPlay.questConfig.rewardType == "myListAll") then
            -- Give all list items
            for itemCount = 1, pieces do
                local pItem = giveItem(pInventory, HelperTrainersScreenPlay.questConfig.myList[itemCount], -1)
            end
            creature:sendSystemMessage("Rewards were placed into your inventory!") 
        elseif (HelperTrainersScreenPlay.questConfig.rewardType == "lootgroup") then
            -- Give loot group items
            local levelRNG = 0
            local groupRNG  = 0
            for itemCount = 1, pieces do
                groupRNG = getRandomNumber(1, #HelperTrainersScreenPlay.questConfig.lootGroups)
                
                if (HelperTrainersScreenPlay.questConfig.lootLevelMin == HelperTrainersScreenPlay.questConfig.lootLevelMax) then
                    levelRNG = HelperTrainersScreenPlay.questConfig.lootLevelMax
                else 
                    levelRNG = getRandomNumber(HelperTrainersScreenPlay.questConfig.lootLevelMin, HelperTrainersScreenPlay.questConfig.lootLevelMax)
                end
                
                createLoot(pInventory, HelperTrainersScreenPlay.questConfig.lootGroups[groupRNG], levelRNG, HelperTrainersScreenPlay.questConfig.lootMaxCondition)
            end
            creature:sendSystemMessage("Loot was placed into your inventory!")
        end
    end
end


-- Handle Conversation

helpertrainers_convo_handler = Object:new {
  tstring = "myconversation"
 }
 

function helpertrainers_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
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
            HelperTrainersScreenPlay:failsafeEndCooldown(conversingPlayer) -- in case of server crash before cooldown state was removed
            local questActive = creature:hasScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
            local questComplete = creature:hasScreenPlayState(HelperTrainersScreenPlay.states.complete, HelperTrainersScreenPlay.screenplayName)
            local questCooldown = creature:hasScreenPlayState(HelperTrainersScreenPlay.states.cooldown, HelperTrainersScreenPlay.screenplayName)

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
                local enoughSpace = HelperTrainersScreenPlay:checkSpace(creature)
                
                if (enoughSpace) then
                    HelperTrainersScreenPlay:giveReward(creature)
                    HelperTrainersScreenPlay:endQuest(conversingPlayer)
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


function helpertrainers_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
  -- Plays the screens of the conversation.
  local player = LuaSceneObject(conversingPlayer)
  local screen = LuaConversationScreen(conversationScreen)
  local screenID = screen:getScreenID()
  
  if ( screenID == "quest_accept" ) then
    HelperTrainersScreenPlay:startQuesting(conversingPlayer)
  end
  
  if ( screenID == "quest_reset" ) then
    HelperTrainersScreenPlay:resetQuest(conversingPlayer, 1)
  end

  return conversationScreen
end

