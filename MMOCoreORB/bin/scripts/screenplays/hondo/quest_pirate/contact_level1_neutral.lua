-- Legend of Hondo Pirate Quest System
-- By R. Bassett Jr. (Tatwi) - www.tpot.ca
-- July 2016

local ObjectManager = require("managers.object.object_manager")

ContactLevel1NeutralSP = ScreenPlay:new {
	numberOfActs = 1,
    states = {
		active = 1,
		complete = 2,
        cooldown = 4,
	}, 
	relations = { 
		{name="pirate", npcStanding=-9000, priceAdjust=20}, -- Adjust price only
	},
	config = {
        level = 1, -- mob level = math.ceil(playerLevel * level)
        cooldown = 4, -- hours
        quests = {"raid","collect","beguile","espionage"},
        locations = {
            tatooine = {"chunkerCamp"},
        },
        events = {"alert", "competition", "curious", "distraction"},
	},
}

registerScreenPlay("ContactLevel1NeutralSP", true)

function ContactLevel1NeutralSP:start()
    spawnMobile("tatooine", "mila_gurf", 1, 4.0707, -9.54192, -5.68019, 164, 1154132) -- Mos Taike 3772, 2382
end

contactlevel1neutral_convo_handler = Object:new {
	tstring = "myconversation"
 }

function contactlevel1neutral_convo_handler:getNextConversationScreen(conversationTemplate, conversingPlayer, selectedOption)
	nextConversationScreen = PirateQuestSystem:nextConvoScreenInnards(conversationTemplate, conversingPlayer, selectedOption, ContactLevel1NeutralSP.relations, ContactLevel1NeutralSP.config)
	
	return nextConversationScreen
end

function contactlevel1neutral_convo_handler:runScreenHandlers(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen)
	conversationScreen = PirateQuestSystem:runScreenHandlerInnards(conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen, ContactLevel1NeutralSP.relations, ContactLevel1NeutralSP.config)
	
	return conversationScreen
end