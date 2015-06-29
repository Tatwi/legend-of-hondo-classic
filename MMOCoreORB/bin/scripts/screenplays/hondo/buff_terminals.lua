-- Buff Terminals
-- R. Bassett Jr. www.tpot.ca
-- June 2015 (Oiringally July 2014)
--
-- Terminals located insdide Medical Centers

BuffTerminals = ScreenPlay:new {
	numberOfActs = 1,
}

registerScreenPlay("BuffTerminals", true)


function BuffTerminals:start()
	self:spawnSceneObjects()
end


function BuffTerminals:spawnSceneObjects()

	-- Bestine
	spawnSceneObject("tatooine", "object/tangible/beta/beta_terminal_wound.iff", 1.1233, 0.184067, 0.0367278, 4005383, 0.790803, 0, 0.61207, 0) 
	-- Mos Eisley
	spawnSceneObject("tatooine", "object/tangible/beta/beta_terminal_wound.iff", 1.1233, 0.184067, 0.0367278, 9655496, 0.790803, 0, 0.61207, 0) 
	 -- Mos Entha
	spawnSceneObject("tatooine", "object/tangible/beta/beta_terminal_wound.iff", -21.7355, 0.26, -2.34, 1153586, 0.999413, 0, 0.0342538, 0)
	-- Mos Espa
	spawnSceneObject("tatooine", "object/tangible/beta/beta_terminal_wound.iff", 1.1233, 0.184067, 0.0367278, 4005424, 0.790803, 0, 0.61207, 0) 

	-- XP Termina, Mos Espa Cantina
	spawnSceneObject("tatooine", "object/tangible/beta/beta_terminal_xp.iff",  27.0829, -0.894995, 8.00572, 1256058,  -0.704913, 0, 0.709294, 0) 

end
