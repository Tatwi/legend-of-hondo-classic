-- Legend of Hondo
-- Pirate Mission reward table
-- Values are a min amount before level, skill, and luck bonuses are applied.
-- Loot groups for civil, criminal, and gcw (Imperial/Rebel) type targets.
-- resourceStacks = 0 still has a luck/skill based roll for a chance at 1 random stack.
-- factionGain is faction gain/loss for objectives where the player is working for someone else.
-- factionTarget is faction loss with the group that was pirated.
-- factionGiver is the faction lost on quest failure with faction who hired the player.
-- Renown and Infamy are % bonuses. Doubled for Imperial/Rebel targets.
-- bountyCost is % of advancedPay
-- forgiveness is % reduction in faction loss on failure, if bounty is paid by the player.

quests = {
    raid = {
        -- Good Stuff
        advancedPay = 0,
        finalPay = 0,
        lootCriminal = {"junk", "grenades_looted", "heavy_weapons"},
        lootCivil = {"junk", "wearables_common"},
        lootGCW = {"weapons_all", "armor_all", "wearables_rare", "armor_attachments", "clothing_attachments"},
        lootQuantity = 3,
        resourceStacks = 1,
        resourceQuantity = 250,
        factionGain = 0,
        renown = 5,
        infamy = 3,
        -- Bad Stuff
        factionTarget = -100,
        factionGiver = 0,
        refusePayment = "false",
        bountyDuration = 0,
        bountyCost = 0,
        bountyCanPay = "false",
        forgiveness = 0,
    },
    collect = {
        -- Good Stuff
        advancedPay = 0,
        finalPay = 500,
        lootCriminal = {"junk"},
        lootCivil = {"junk"},
        lootGCW = {}, --NA
        lootQuantity = 1,
        resourceStacks = 0,
        resourceQuantity = 75,
        factionGain = 75,
        renown = 1,
        infamy = 1,
        -- Bad Stuff
        factionTarget = -25,
        factionGiver = -10,
        refusePayment = "true",
        bountyDuration = 0,
        bountyCost = 0,
        bountyCanPay = "false",
        forgiveness = 0,
    },
    beguile = {
        -- Good Stuff
        advancedPay = 0,
        finalPay = 0,
        lootCriminal = {"junk",},
        lootCivil = {"junk", "wearables_common"},
        lootGCW = {"weapons_all", "armor_all"},
        lootQuantity = 1,
        resourceStacks = 1,
        resourceQuantity = 250,
        factionGain = 0,
        renown = 5,
        infamy = 10,
        -- Bad Stuff
        factionTarget = -200,
        factionGiver = 0,
        refusePayment = "false",
        bountyDuration = 0,
        bountyCost = 0,
        bountyCanPay = "false",
        forgiveness = 0,
    },
    espionage = {
        -- Good Stuff
        advancedPay = 0,
        finalPay = 15000,
        lootCriminal = {"junk", "weapons_all", "armor_all"},
        lootCivil = {"junk", "wearables_uncommon"},
        lootGCW = {"weapons_all", "armor_all", "wearables_rare", "armor_attachments", "clothing_attachments"},
        lootQuantity = 0,
        resourceStacks = 0,
        resourceQuantity = 250,
        factionGain = 125,
        renown = 7,
        infamy = 10,
        -- Bad Stuff
        factionTarget = -125,
        factionGiver = -50,
        refusePayment = "true",
        bountyDuration = 0,
        bountyCost = 0,
        bountyCanPay = "false",
        forgiveness = 0,
    },
    smuggleNormal = {
        -- Good Stuff
        advancedPay = 2000,
        finalPay = 10000,
        lootCriminal = {"junk", "weapons_all", "armor_all"},
        lootCivil = {"junk", "wearables_uncommon"},
        lootGCW = {"weapons_all", "armor_all", "wearables_rare", "armor_attachments", "clothing_attachments"},
        lootQuantity = 5,
        resourceStacks = 2,
        resourceQuantity = 375,
        factionGain = 150,
        renown = 10,
        infamy = 5,
        -- Bad Stuff
        factionTarget = -150,
        factionGiver = -85,
        refusePayment = "true",
        bountyDuration = 24,
        bountyCost = 50,
        bountyCanPay = "true",
        forgiveness = 80,
    },
    smuggleCovert = {
        -- Good Stuff
        advancedPay = 5000,
        finalPay = 20000,
        lootCriminal = {"junk", "weapons_all", "armor_all"},
        lootCivil = {"junk", "wearables_scarce"},
        lootGCW = {"weapons_all", "armor_all", "wearables_scarce", "armor_attachments", "clothing_attachments"},
        lootQuantity = 10,
        resourceStacks = 5,
        resourceQuantity = 425,
        factionGain = 175,
        renown = 15,
        infamy = 5,
        -- Bad Stuff
        factionTarget = -175,
        factionGiver = -200,
        refusePayment = "true",
        bountyDuration = 48,
        bountyCost = 75,
        bountyCanPay = "true",
        forgiveness = 50,
    },
    rescue = {
        -- Good Stuff
        advancedPay = 15000,
        finalPay = 50000,
        lootCriminal = {"weapons_all", "armor_all", "armor_attachments", "clothing_attachments"},
        lootCivil = {"weapons_all", "armor_all", "armor_attachments", "clothing_attachments"},
        lootGCW = {"weapons_all", "armor_all", "armor_attachments", "clothing_attachments"},
        lootQuantity = 4,
        resourceStacks = 2,
        resourceQuantity = 500,
        factionGain = 225,
        renown = 25,
        infamy = 1,
        -- Bad Stuff
        factionTarget = -275,
        factionGiver = -300,
        refusePayment = "true",
        bountyDuration = 72,
        bountyCost = 100,
        bountyCanPay = "true",
        forgiveness = 25,
    },
    assassinate = {
        -- Good Stuff
        advancedPay = 15000,
        finalPay = 50000,
        lootCriminal = {"weapons_all", "armor_all", "armor_attachments", "clothing_attachments"},
        lootCivil = {"weapons_all", "armor_all", "armor_attachments", "clothing_attachments"},
        lootGCW = {"weapons_all", "armor_all", "armor_attachments", "clothing_attachments"},
        lootQuantity = 4,
        resourceStacks = 2,
        resourceQuantity = 500,
        factionGain = 225,
        renown = 4,
        infamy = 25,
        -- Bad Stuff
        factionTarget = -275,
        factionGiver = -300,
        refusePayment = "true",
        bountyDuration = 72,
        bountyCost = 100,
        bountyCanPay = "false",
        forgiveness = 0,
    },

}