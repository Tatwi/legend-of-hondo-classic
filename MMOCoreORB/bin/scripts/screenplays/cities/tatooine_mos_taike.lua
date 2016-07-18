TatooineMosTaikeScreenPlay = ScreenPlay:new {
	numberOfActs = 1,

	screenplayName = "TatooineMosTaikeScreenPlay"
}

registerScreenPlay("TatooineMosTaikeScreenPlay", true)

function TatooineMosTaikeScreenPlay:start()
	if (isZoneEnabled("tatooine")) then
		self:spawnMobiles()
        self:spawnObjects()
	end
end

function TatooineMosTaikeScreenPlay:spawnMobiles()

		--misc
	--spawnMobile("tatooine", "junk_dealer", 1, 3905.3, 33, 2362.9, -90, 0)
	--spawnMobile("tatooine", "junk_nathan", 1, 3817.7, 16.2, 2340.5, 0, 0)
	spawnMobile("tatooine", "informant_npc_lvl_1", 1, 3775, 8.7, 2371, 180, 0)
	spawnMobile("tatooine", "informant_npc_lvl_2", 1, 0.93374, 1.00421, 9.03511, 180, 1154123)
	spawnMobile("tatooine", "informant_npc_lvl_3", 1, -1.97807, -9.54192, 9.62469, -45, 1154131)

		--commoners
	spawnMobile("tatooine", "commoner_tatooine", 1, 3860.7, 28.0, 2361.1, 180, 0)
	spawnMobile("tatooine", "commoner_tatooine", 1, 3775.0, 8.6, 2369.7, 0, 0)
	spawnMobile("tatooine", "commoner_tatooine", 1, 4.9, -0.4, -3.8, -150, 1400866)
	spawnMobile("tatooine", "commoner_tatooine", 1, 3.1, -0.4, -5.8, -45, 1400866)

		--thugs
	spawnMobile("tatooine", "scoundrel", 300, 3867.0, 27.5, 2307.5, -90, 0)
	spawnMobile("tatooine", "spice_fiend", 300, 3865.0, 27.5, 2307.5, 90, 0)
	spawnMobile("tatooine", "dune_stalker", 300, getRandomNumber(13) + 3734.0, 6.2, getRandomNumber(13) + 2466.5, getRandomNumber(360), 0)
	spawnMobile("tatooine", "dune_stalker", 300, getRandomNumber(13) + 3734.0, 6.2, getRandomNumber(13) + 2466.5, getRandomNumber(360), 0)
	spawnMobile("tatooine", "dune_stalker", 300, getRandomNumber(13) + 3734.0, 6.2, getRandomNumber(13) + 2466.5, getRandomNumber(360), 0)
	spawnMobile("tatooine", "dune_stalker_scavenger", 300, getRandomNumber(13) + 3734.0, 6.2, getRandomNumber(13) + 2466.5, getRandomNumber(360), 0)
	spawnMobile("tatooine", "dune_stalker_scavenger", 300, getRandomNumber(13) + 3734.0, 6.2, getRandomNumber(13) + 2466.5, getRandomNumber(360), 0)
	spawnMobile("tatooine", "dune_stalker_scavenger", 300, getRandomNumber(13) + 3734.0, 6.2, getRandomNumber(13) + 2466.5, getRandomNumber(360), 0)

	spawnMobile("tatooine", "swooper", 300, getRandomNumber(13) + 3781, 6.9, getRandomNumber(13) + 2220, getRandomNumber(360), 0)
	spawnMobile("tatooine", "swooper", 300, getRandomNumber(13) + 3781, 6.9, getRandomNumber(13) + 2220, getRandomNumber(360), 0)
	spawnMobile("tatooine", "swooper", 300, getRandomNumber(13) + 3781, 6.9, getRandomNumber(13) + 2220, getRandomNumber(360), 0)
	spawnMobile("tatooine", "swooper", 300, getRandomNumber(13) + 3781, 6.9, getRandomNumber(13) + 2220, getRandomNumber(360), 0)
	spawnMobile("tatooine", "swooper", 300, getRandomNumber(13) + 3781, 6.9, getRandomNumber(13) + 2220, getRandomNumber(360), 0)
	spawnMobile("tatooine", "swooper", 300, getRandomNumber(13) + 3781, 6.9, getRandomNumber(13) + 2220, getRandomNumber(360), 0)

		--jawas
	spawnMobile("tatooine", "jawa_engineer", 300, 3971.5, 8.9, 2496.9, -97, 0)
	spawnMobile("tatooine", "jawa_engineer", 300, 3966.1, 9.1, 2502.9, 40, 0)
	spawnMobile("tatooine", "jawa_smuggler", 300, 3967.6, 9.0, 2503.3, -90, 0)
	spawnMobile("tatooine", "jawa_smuggler", 300, 3966.9, 9.1, 2504.5, -155, 0)
	spawnMobile("tatooine", "jawa_engineer", 300, 3974.4, 7.3, 2517.1, -161, 0)
	spawnMobile("tatooine", "jawa_smuggler", 300, 3980.9, 7.7, 2507.0, 25, 0)

		--creatures
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3992, 7.4, getRandomNumber(13) + 2576, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3992, 7.4, getRandomNumber(13) + 2576, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3992, 7.4, getRandomNumber(13) + 2576, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3992, 7.4, getRandomNumber(13) + 2576, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3992, 7.4, getRandomNumber(13) + 2576, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3992, 7.4, getRandomNumber(13) + 2576, getRandomNumber(360), 0)

	spawnMobile("tatooine", "tatooine_mynock", 300, getRandomNumber(13) + 3660, 7.6, getRandomNumber(13) + 2407, getRandomNumber(360), 0)
	spawnMobile("tatooine", "tatooine_mynock", 300, getRandomNumber(13) + 3660, 7.6, getRandomNumber(13) + 2407, getRandomNumber(360), 0)
	spawnMobile("tatooine", "tatooine_mynock", 300, getRandomNumber(13) + 3660, 7.6, getRandomNumber(13) + 2407, getRandomNumber(360), 0)
	spawnMobile("tatooine", "tatooine_mynock", 300, getRandomNumber(13) + 3660, 7.6, getRandomNumber(13) + 2407, getRandomNumber(360), 0)
	spawnMobile("tatooine", "tatooine_mynock", 300, getRandomNumber(13) + 3660, 7.6, getRandomNumber(13) + 2407, getRandomNumber(360), 0)
	spawnMobile("tatooine", "tatooine_mynock", 300, getRandomNumber(13) + 3660, 7.6, getRandomNumber(13) + 2407, getRandomNumber(360), 0)

	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3660, 8.1, getRandomNumber(13) + 2258, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3660, 8.1, getRandomNumber(13) + 2258, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3660, 8.1, getRandomNumber(13) + 2258, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3660, 8.1, getRandomNumber(13) + 2258, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3660, 8.1, getRandomNumber(13) + 2258, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rockmite", 300, getRandomNumber(13) + 3660, 8.1, getRandomNumber(13) + 2258, getRandomNumber(360), 0)

	spawnMobile("tatooine", "rill", 300, getRandomNumber(13) + 3889, 6.6, getRandomNumber(13) + 2139, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rill", 300, getRandomNumber(13) + 3889, 6.6, getRandomNumber(13) + 2139, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rill", 300, getRandomNumber(13) + 3889, 6.6, getRandomNumber(13) + 2139, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rill", 300, getRandomNumber(13) + 3889, 6.6, getRandomNumber(13) + 2139, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rill", 300, getRandomNumber(13) + 3889, 6.6, getRandomNumber(13) + 2139, getRandomNumber(360), 0)
	spawnMobile("tatooine", "rill", 300, getRandomNumber(13) + 3889, 6.6, getRandomNumber(13) + 2139, getRandomNumber(360), 0)

	spawnMobile("tatooine", "minor_worrt", 300, getRandomNumber(13) + 4102, 12.3, getRandomNumber(13) + 2199, getRandomNumber(360), 0)
	spawnMobile("tatooine", "minor_worrt", 300, getRandomNumber(13) + 4102, 12.3, getRandomNumber(13) + 2199, getRandomNumber(360), 0)
	spawnMobile("tatooine", "minor_worrt", 300, getRandomNumber(13) + 4102, 12.3, getRandomNumber(13) + 2199, getRandomNumber(360), 0)
	spawnMobile("tatooine", "minor_worrt", 300, getRandomNumber(13) + 4102, 12.3, getRandomNumber(13) + 2199, getRandomNumber(360), 0)
	spawnMobile("tatooine", "minor_worrt", 300, getRandomNumber(13) + 4102, 12.3, getRandomNumber(13) + 2199, getRandomNumber(360), 0)
	spawnMobile("tatooine", "minor_worrt", 300, getRandomNumber(13) + 4102, 12.3, getRandomNumber(13) + 2199, getRandomNumber(360), 0)

end

function TatooineMosTaikeScreenPlay:spawnObjects()
    -- Tavern, bottom floor large room 3776, 2386
    spawnSceneObject("tatooine", "object/tangible/painting/painting_skyscraper.iff", -2.52585, -8.64192, -3.86967, 1154132, 0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/painting/painting_cargoport.iff", -2.53704, -8.64192, -7.70725, 1154132, 0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/modern/dining_table_modern_style_01.iff", -1.00423, -9.54192, -6.2154, 1154132, 0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_chest_s01.iff", -0.766252, -9.54192, -6.15711, 1154132, 0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/all/frn_all_data_terminal_free_s1.iff", -1.41734, -9.29192, -5.17496, 1154132, 0.843391, 0, 0.5373, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/technical/chair_s01.iff", -0.0421339, -9.54192, -4.79639, 1154132, -0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/technical/chair_s01.iff", 0.191827, -9.54192, -7.52727, 1154132, -0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/all/frn_all_technical_console_s02.iff", 4.01343, -9.54192, -7.43351, 1154132, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/tangible/crafting/station/structure_station.iff", 7.77539, -9.54192, -10.5012, 1154132, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/all/frn_all_chair_meatal_wheeled_s1.iff", 9.5315, -9.54192, -8.14117, 1154132, 0.0436194, 0, 0.999048, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/decorative/professor_desk.iff", 10.3403, -9.54192, -9.01554, 1154132, -0.92388, 0, 0.382683, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/decorative/radio.iff", 10.8039, -8.80192, -8.6024, 1154132, -0.608762, 0, 0.793353, 0) 
    spawnSceneObject("tatooine", "object/tangible/painting/painting_valley_view.iff", 11.9639, -9.04192, -7.99245, 1154132, -0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/all/frn_all_plant_potted_lg_s1.iff", 10.746, -9.54192, -5.98173, 1154132, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/tangible/loot/collectible/collectible_rewards/collectible_sculpture_s01.iff", 3.80907, -8.60192, 1.37957, 1154132, 0.92388, 0, 0.382683, 0) 
    spawnSceneObject("tatooine", "object/tangible/painting/painting_agrilat_s01.iff", 5.3034, -8.24192, 2.31707, 1154132, -0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_chest_s01.iff", 3.81157, -9.54192, 1.47451, 1154132, -3.11932e-07, 0, 1, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/all/frn_all_potted_plants_sml_s05.iff", 4.73874, -9.54192, 1.11845, 1154132, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_chair_s01.iff", 8.17936, -9.54192, 0.805894, 1154132, -0.173648, 0, -0.984808, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_chair_s01.iff", 9.685, -9.54192, 0.678255, 1154132, -0.173648, 0, 0.984808, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_end_table_s01.iff", 10.858, -9.54192, 0.572331, 1154132, 0.965926, 0, 0.258819, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_couch_s01.iff", 10.7453, -9.54192, -1.4327, 1154132, -0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/all/frn_all_plant_potted_lg_s2.iff", 10.8885, -9.54192, -3.14553, 1154132, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_bookcase_s01.iff", 10.0681, -9.54192, -4.01778, 1154132, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_chair_s01.iff", 8.07544, -9.54192, -3.44811, 1154132, -0.92388, 0, -0.382684, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_coffee_table_s01.iff", 8.60692, -9.54192, -1.64081, 1154132, 0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_coffee_table_s01.iff", 9.11936, -9.54192, -1.66265, 1154132, -0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/plain/plain_chair_s01.iff", 6.87883, -9.54192, -1.91339, 1154132, 0.766045, 0, 0.642788, 0) 
    spawnSceneObject("tatooine", "object/tangible/furniture/modern/rug_oval_m_s02.iff", 8.76081, -9.60192, -1.34585, 1154132, 1, 0, 0, 0) 
end
