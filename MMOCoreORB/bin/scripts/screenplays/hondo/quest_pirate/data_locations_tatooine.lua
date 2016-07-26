-- Legend of Hondo
-- Pirate mission location table
-- Mob spawn locations here are in addition to the mobs already loaded in city / poi screenplays and the planet manager at these locations.

tatooine = {
    -- Level 1 - Easy
    chunkerCamp = {
        name = "Chunker Camp",
        waypoint = {x = "", y = ""},
        faction = "thug",
        lootType = "lootCriminal",
        defenderTypes = {"chunker_braggart", "chunker_bully", "chunker_creep", "chunker_goon", "chunker_mooch", "chunker_pest", "chunker_bruiser"},
        defenderSpawns = {
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
        },
        prisonerSpawns{
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
            {x = "", z = "", y = "", rot = "", cell = "", state = ""},
        },
        lootContainers = {
            {customName = "Cache of Supplies", template = "object/tangible/container/drum/treasure_drum.iff", x = "", z = "", y = "", cell = "", dw = "", dx = "", dy = "", dz = ""},
        }
    },
    -- Level 2 - Modest
    -- Level 3 - Hard
    -- Level 4 - Harder
    -- Level 5 - Epic
}
