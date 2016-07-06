-- Legend of Hondo
-- This is a file where I can test various things as needed.

HondoTestSP = ScreenPlay:new {
	numberOfActs = 1,
}

--True here tells the server to load this screenplay at server load. False tells it to wait until explicitly started.
registerScreenPlay("HondoTestSP", true)

--This gets executed automatically when the screenplay is started
function HondoTestSP:start()
	self:spawnMobiles()
    self:spawnSceneObjects()
end

--Put all the initial spawning of mobiles in a nice method like this.
function HondoTestSP:spawnMobiles()

end

function HondoTestSP:spawnSceneObjects()
    --spawnSceneObject("tatooine", "object/tangible/furniture/static/structure/tatooine/wall_archway_tatooine_large_style_01.iff", -2906.17, 5, 2568.92, 0, 0.906308, 0, 0.422618, 0) -- new "static object" as "tangible object" that is targetable so we can move/rotate it.
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_archway_tatooine_large_style_01.iff", -2899.51, 5, 2561.47, 0, 0.906308, 0, 0.422618, 0) -- original "static object" with manually edited path after using /getobjvars spout
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_archway_tatooine_large_style_01.iff", -2906.17, 5, 2568.92, 0, 0.906308, 0, 0.422618, 0) -- completely generated with /getobjvars static used on the tangible object version in the game! 
end