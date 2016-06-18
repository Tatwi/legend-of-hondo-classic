-- Bread Crumb Quest: Help the player find the profession trainers.
-- R. Bassett Jr. www.tpot.ca
-- June 2016
--
-- This file can be used a template for other "bread crumb quests" that takes place on the same planet as its quest giver.
-- 1. Replace all instances of HelperTrainersScreenPlay and helpertrainers_convo_handler, and change the value of questName, className, with something unique.
-- 2. Make a custom character and conversation for that character. Keep in mind the important convo steps that trigger the quest actions.
-- 3. Spawn your character in the spawnMobiles() function.
-- 4. Customize the questConfig table to your liking.
-- That gets you a new quest with minimal effort. As the quest is self contained, not part of a standard framework, you can add new functionality as you see fit, confident that your mods won't break something else.
-- Note that this quest method does not require a client side update, provided your convo lua file is hand made with NPC customDialogText and reply options.
-- This system was originally based upon the race track logic created by SWGEmu.

local ObjectManager = require("managers.object.object_manager")


HelperTrainersScreenPlay = ScreenPlay:new {
  numberOfActs = 1,
  screenplayName = "HelperTrainersScreenPlay",
  states = {
    active = 2,
    complete = 4,
  }, 
  questConfig={
    planetName = "tatooine",
    questName="HelperTrainers",  -- Internal quest , should be unique to the quest
    className="HelperTrainersScreenPlay", -- Class name of this class
    questGiverName="Wherma Traynr",
    timeResolution=0, -- number of decimal places to use for the time updates 0 = none
    expiryTime = 3600, --Amount of time in seconds that a player will be expired from the quest
    waypointRadius=3, -- size of the waypoint observer. 3 is good for on foot, 10 for when in a vehicle. 1 makes it kind of annoying to trigger.
    cashReward = 0, -- set to 0 for no cash reward
    giveItems = "true", -- set set false if there isn't an item reward.
    rewardType = "random", -- Pick One: all = give whole list, random = pick one item from the list, lootgroup = pick 1 item from the lootGroup
    lootGroup = "junk", -- any single loot group
    lootMinStackSize = 1, -- For stacks of loot when using a loot group
    lootMaxStackSize = 5, -- Size chosen at random between min and max
    itemRewards = {
      "object/tangible/treasure_map/treasure_map_pirate1.iff",
      "object/tangible/treasure_map/treasure_map_pirate2.iff",
    },
    waypoints = { 
      {x = -2910, y = 2150, wpName = "Beginner's Square", wpDesc = "Before we get started, it's worth mentioning that you'll find other people like me to talk to here in the Starport area. Take a moment and have a look around, before heading out."},
      {x = -2986, y = 2150, wpName = "Auto-Teach Termial", wpDesc = "First thing's, first... What you're looking at here is BETA, the super experience induction device. It's capable of helping you learn a range of skills that you may find useful or enjoyable. These skills do not require or use Skill Points and the machine is even free to use!"},
      {x = -3057, y = 2060, wpName = "Crafter's Guild", wpDesc = "Here in this guild for crafters, you will find trainers for Architecture, Armorsmithing, Droid Engineering, and Weaponsmithing. There's also an array of related Merchants here, much like you will find in other shops throughout your travels."},
      {x = -3136, y = 2114, wpName = "Hospital", wpDesc = "Yup, this is the local hospital. Sure, it's not as fancy as what you'll find in some other cities, but it has all the services you might need, such as that standard issue Wound Terminal over there. The local doctor is a good teacher, having trained many in the use of advanced medicine and healing. I've heard he'll even teach you how to make and use poisons, so... probably a wise idea to stay on his good side. The Doc's second in command, the Medic trainer, is kinda skittish, but he's OK I guess."},
      {x = -3089, y = 2219, wpName = "The Hotel", wpDesc = "Somewhere in this entertaining place I'm sure you'll find the Smuggler trainer. Can't say as though I've ever seen him anywhere else, now that I think about it..."},
      {x = -2992, y = 2223, wpName = "Lovable Critters", wpDesc = "The local Creature Handler is a nice guy. He mostly looks after mounts at the cantina these days, but rumor has it that he's seen some adventures in his time."},
      {x = -3097, y = 2284, wpName = "Cloning Facility", wpDesc = "Ah, the other doctor in town. This creap used to work at the hospital, until they found him... uh, you know what, never mind. He works at the cloner now and calls himself a Bio-Engineer. If you store your clone data there, your clone can see him when you die!"},
      {x = -2898, y = 2425, wpName = "Nado's Junk Shop", wpDesc = "Being so close to the rough side of town, Nado likes to keep a guard in each of his entrances at all times. Perfect job for a retired Swordsman and Fencer who still have some swash left in their old buckles."},
      {x = -3015, y = 2423, wpName = "Fighter's Guild", wpDesc = "Across the road from the best defended junk shop in the galaxy, you have the local Fighter's Guild. Markman, Rifelman, Brawler, and Pikeman trainers are usually here, as is the Teras Kasi Artist. The Pistoleer and Carbineer trainer on the other hand are probably out shooting mynocks again... or is it still..."},
      {x = -2988, y = 2534, wpName = "Outdoorman", wpDesc = "Out here on the edge of town is the Scouting and Ranger Center. They should be more than happy to train you, sell you some camping gear, feed you to something. You know, the usual. "},
      {x = -2716, y = 2506, wpName = "About Them Mynocks...", wpDesc = "I was right, wasn't I? Well, at least their happy, which is more than I can say for the Pistoleer's wife. She's the Marksman Tainer you just met, you know, back at the office where somebody has to do all the paper work. Somebody."},
      {x = -2763, y = 2035, wpName = "The Nine to Fiver's Club", wpDesc = "It may come as a surprise, but the Empire does at least TRY to train their troops to the best of their ability, even if they have to bring in contract workers to get it done. You'll usually find their Squad Leader, Commando, and Bounty Hunter trainers relaxing here together when they aren't working for the man."},
      {x = -2838, y = 1991, wpName = "Artisan's Mall", wpDesc = "This is a nice little place. A top notch Tailor, an Artisan who knows a little about a lot of things, and... the food is delicious! Be sure to tell that to the Chef even -especially- when it isn't."},
      {x = -2896, y = 2083, wpName = "The Starport", wpDesc = "Finally, inside the Starport is the local Shipwright who always seems ready to help folks build stuff."},
      {x = -2896, y = 2137, wpName = "Wherma's Hangout", wpDesc = "Welcome back! Speak to me again to complete the mission."}, -- final waypoint should be the quest giver, because quest ends only after talking to them.
    }
  } -- End questConfig1
}

registerScreenPlay("HelperTrainersScreenPlay", true)

function HelperTrainersScreenPlay:start()
  if (isZoneEnabled("tatooine")) then
    self:spawnSceneObjects()
    self:spawnMobiles()
    self:createBreadCrumbs()
  end
end

function HelperTrainersScreenPlay:spawnSceneObjects()
    -- Decorations
end

function HelperTrainersScreenPlay:spawnMobiles()
    -- Quest Giver
  local pCoord = spawnMobile("tatooine", "helper_trainers", 1, -2896.3, 5.0, 2137.3, -67, 0)
end



-- Handle Quest

function HelperTrainersScreenPlay:enteredWaypoint(pActiveArea, pObject)
  return self:processWaypoint(pActiveArea, pObject)
end


function HelperTrainersScreenPlay:createBreadCrumbs()
  for lc = 1, table.getn(self.questConfig.waypoints) , 1 do
    local pWaypointAA = spawnActiveArea(self.questConfig.planetName, "object/active_area.iff", self.questConfig.waypoints[lc].x, 0, self.questConfig.waypoints[lc].y, self.questConfig.waypointRadius, 0)

    if (pWaypointAA ~= nil) then
      createObserver(ENTEREDAREA, self.questConfig.className, "enteredWaypoint" , pWaypointAA)
    end
  end
end

function HelperTrainersScreenPlay:startQuesting(pObject)
  ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
    clearScreenPlayData(pObject,self.questConfig.questName )
    self:createResetPlayerUnfinishedEvent(pObject)
    local waypointID = playerObject:addWaypoint(self.questConfig.planetName, self.questConfig.waypoints[1].wpName, "", self.questConfig.waypoints[1].x, self.questConfig.waypoints[1].y, WAYPOINTWHITE,true,true,WAYPOINTRACETRACK)
    local time = getTimestampMilli()
    writeScreenPlayData(pObject, self.questConfig.questName, "starttime", time)
    writeScreenPlayData(pObject, self.questConfig.questName, "waypoint", 1)
    creatureObject:setScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName) -- Set quest active
    creatureObject:sendSystemMessage("You have " .. (self :roundNumber(self.questConfig.expiryTime/60)) .. " minutes to complete your mission.")
    creatureObject:sendSystemMessage(self.questConfig.waypoints[1].wpName) -- Display first location
    creatureObject:playMusicMessage("sound/music_themequest_acc_criminal.snd")
  end)
end

function HelperTrainersScreenPlay:processWaypoint(pActiveArea, pObject)
  if not SceneObject(pObject):isPlayerCreature() then
    return 0
  end

  local lastIndex =  readScreenPlayData(pObject, self.questConfig.questName, "waypoint")
  if lastIndex ~= "" then
    local index = self:getWaypointIndex(pActiveArea)
    if tonumber(lastIndex)==index then
      if tonumber(index)==table.getn(self.questConfig.waypoints) then
        self:finalWaypoint(pActiveArea, pObject)
      else
        self:ongoingWaypoints(pObject,index)
      end
      
    end
  end

  return 0
end

function HelperTrainersScreenPlay:roundNumber(num)
  local mult = 10 ^ (self.questConfig.timeResolution or 0 )
  return math.floor(num * mult + 0.5) / mult
end


function HelperTrainersScreenPlay:ongoingWaypoints(pObject,index)
  ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject,playerObject)
    local waypointID = playerObject:addWaypoint(self.questConfig.planetName, self.questConfig.waypoints[index+1].wpName, "", self.questConfig.waypoints[index+1].x, self.questConfig.waypoints[index+1].y, WAYPOINTWHITE,true,true,WAYPOINTRACETRACK)
    writeScreenPlayData(pObject,self.questConfig.questName, "waypoint", index+1)
    
    -- Update Player on quest status 
    local timePassed = self:getLaptime(pObject) / 1000 -- miliseconds to seconds
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
    creatureObject:sendSystemMessage(self.questConfig.waypoints[index].wpDesc)
    
    -- Or tell them what the next waypoint is...
    --creatureObject:sendSystemMessage(self.questConfig.waypoints[index+1].wpName) 
    
    creatureObject:playMusicMessage("sound/ui_select_info.snd")
  end)
end

function HelperTrainersScreenPlay:finalWaypoint(pActiveArea, pObject)
  ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject,playerObject)
    -- get current waypoint
    index = table.getn(self.questConfig.waypoints)
    
    -- Play final waypoint description
    creatureObject:sendSystemMessage(self.questConfig.waypoints[index].wpDesc)
    
    -- Job is complete, turn off "Active", and turn on "Complete"
    creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName) 
    creatureObject:setScreenPlayState(HelperTrainersScreenPlay.states.complete, HelperTrainersScreenPlay.screenplayName)
    
    -- Remove the waypoint and play a sound!
    playerObject:removeWaypointBySpecialType(WAYPOINTRACETRACK)
    creatureObject:playMusicMessage("sound/music_combat_bfield_vict.snd")
    
    -- Player must talk to the quest giver to finish the quest
  end)
end


function HelperTrainersScreenPlay:resetQuest(pObject)
  ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject, playerObject)
    playerObject:removeWaypointBySpecialType(WAYPOINTRACETRACK)
    clearScreenPlayData(pObject,self.questConfig.questName )
    creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
    creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.complete, HelperTrainersScreenPlay.screenplayName)
    creatureObject:sendSystemMessage("You have succesfullly abandoned your mission.")
    creatureObject:playMusicMessage("sound/music_themequest_fail_imperial.snd")
  end)
end


function HelperTrainersScreenPlay:getLaptime(pObject)
  local startTime = readScreenPlayData(pObject, self.questConfig.questName, "starttime")
  local seconds = getTimestampMilli() - tonumber(startTime)
  writeScreenPlayData(pObject, self.questConfig.questName, "laptime",seconds)
  return seconds
end


function HelperTrainersScreenPlay:getWaypointIndex(pActiveArea)
  return ObjectManager.withSceneObject(pActiveArea, function(sceneObject)
    local index = 0
    local wpX = sceneObject:getPositionX()
    local wpY = sceneObject:getPositionY()
    for lc = 1, table.getn(self.questConfig.waypoints) , 1 do
      if self.questConfig.waypoints[lc].x==wpX and self.questConfig.waypoints[lc].y==wpY then
        index = lc
        break
      end
    end
    return index
  end)
end

function HelperTrainersScreenPlay:createResetPlayerUnfinishedEvent(pObject)
  createEvent(self.questConfig.expiryTime*1000, self.questConfig.className, "resetPlayerUnfinishedEventHandler",pObject)
end


function HelperTrainersScreenPlay:resetPlayerUnfinishedEventHandler(pObject)
  ObjectManager.withCreatureAndPlayerObject(pObject, function(creatureObject,playerObject)
    local startTime = tonumber(readScreenPlayData(pObject, self.questConfig.questName , "starttime"))
    if not(startTime == nil) then 
      local time = getTimestampMilli()
      if  math.abs((time/1000) - (startTime/1000)) > (self.questConfig.expiryTime-5) then
        clearScreenPlayData(pObject,self.questConfig.questName )
        playerObject:removeWaypointBySpecialType(WAYPOINTRACETRACK)
        
        creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
        creatureObject:removeScreenPlayState(HelperTrainersScreenPlay.states.complete, HelperTrainersScreenPlay.screenplayName)
        creatureObject:sendSystemMessage("Sorry, you have failed to complete your mission in time.")
        creatureObject:playMusicMessage("sound/music_themequest_fail_imperial.snd")
      end 
    end
  end)
end


function HelperTrainersScreenPlay:checkSpace(creature)   
    local pInventory = creature:getSlottedObject("inventory")
    local inventory = LuaSceneObject(pInventory)
    local pieces = #HelperTrainersScreenPlay.questConfig.itemRewards -- gets # of items in the reward list
            
    -- Check for room in inventory
    local numberOfItems = inventory:getContainerObjectsSize()
    local freeSpace = 80 - numberOfItems

    if (inventory:hasFullContainerObjects() == true and HelperTrainersScreenPlay.questConfig.rewardType ~= "all") then
        -- Bail if the player doesn't have enough space in their inventory.
        creature:sendSystemMessage("You need 1 available inventory space to complete this quest.")
        return false
    elseif (HelperTrainersScreenPlay.questConfig.rewardType == "all" and freeSpace < pieces) then
        -- Bail if the player doesn't have enough space in their inventory.
        creature:sendSystemMessage("You do not have enough inventory space to complete this quest. Please free up " .. pieces .. " spaces and speak to the quest giver again")
        return false
    end
    
    return true
end


function HelperTrainersScreenPlay:giveReward(creature)
    -- Reset quest state
    creature:removeScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
    creature:removeScreenPlayState(HelperTrainersScreenPlay.states.complete, HelperTrainersScreenPlay.screenplayName)
    
    local pInventory = creature:getSlottedObject("inventory")
    local inventory = LuaSceneObject(pInventory)
    local pieces = #HelperTrainersScreenPlay.questConfig.itemRewards -- gets # of items in the reward list

    -- Grant cash reward, if there is one
    if (HelperTrainersScreenPlay.questConfig.cashReward ~= 0) then
        creature:addCashCredits(HelperTrainersScreenPlay.questConfig.cashReward, true)
        creature:sendSystemMessage("You have earned " .. HelperTrainersScreenPlay.questConfig.cashReward .. " credits.")
    end

    -- Grant item rewards, if there are any
    if (HelperTrainersScreenPlay.questConfig.giveItems == "true") then
        if (HelperTrainersScreenPlay.questConfig.rewardType == "random") then
            -- Give 1 random item from your list
            local rndNum = getRandomNumber(1, pieces)
            local pItem = giveItem(pInventory, HelperTrainersScreenPlay.questConfig.itemRewards[rndNum], -1)
        elseif (HelperTrainersScreenPlay.questConfig.rewardType == "all") then
            -- Give all items
            for itemCount = 1, pieces do
                local pItem = giveItem(pInventory, HelperTrainersScreenPlay.questConfig.itemRewards[itemCount], -1)
            end
        end
    elseif (HelperTrainersScreenPlay.questConfig.rewardType == "lootgroup") then
        -- Give loot group items
        local rndNum = getRandomNumber(HelperTrainersScreenPlay.questConfig.lootMinStackSize, HelperTrainersScreenPlay.questConfig.lootMaxStackSize)
        createLoot(pInventory, HelperTrainersScreenPlay.questConfig.lootGroup, rndNum, true)
    end
    creature:sendSystemMessage("Loot was placed into your inventory!") 
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
    if ( conversation ~= nil ) then -- 1
        if ( convosession ~= nil ) then  -- 2
            local session = LuaConversationSession(convosession)

            if ( session ~= nil ) then -- 3
                lastConversationScreen = session:getLastConversationScreen()
            end -- 3 end
        end -- 2 end
        
        
        if ( lastConversationScreen == nil ) then -- 4
            -- Player clicked NPC for first time to start conversation
            local questActive = creature:hasScreenPlayState(HelperTrainersScreenPlay.states.active, HelperTrainersScreenPlay.screenplayName)
            local questComplete = creature:hasScreenPlayState(HelperTrainersScreenPlay.states.complete, HelperTrainersScreenPlay.screenplayName)

            if (questActive) then -- 5
                -- Quest is active
                nextConversationScreen = conversation:getScreen("quest_active")
            elseif (questComplete) then
                -- Quest completed
                nextConversationScreen = conversation:getScreen("quest_complete")  
            else
                -- Start the quest
                nextConversationScreen = conversation:getInitialScreen()
            end -- 5 end
        else
            -- Player is already talking to NPC
            local luaLastConversationScreen = LuaConversationScreen(lastConversationScreen)
            local optionLink = luaLastConversationScreen:getOptionLink(selectedOption)

            if (optionLink == "give_rewards") then -- 6
                -- If on the reward step, give reward or bail if player doesn't have enough inventory space for it.
                local enoughSpace = HelperTrainersScreenPlay:checkSpace(creature)
                
                if (enoughSpace) then -- 7
                    HelperTrainersScreenPlay:giveReward(creature)
                else
                    nextConversationScreen = conversation:getScreen("no_space")
                end -- 7 end
            end -- 6 end
            
            -- Just play the next step in the conversation 
            nextConversationScreen = conversation:getScreen(optionLink)
        end -- 4 end
    end  -- 1 end
    
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
    HelperTrainersScreenPlay:resetQuest(conversingPlayer)
  end

  return conversationScreen
end

