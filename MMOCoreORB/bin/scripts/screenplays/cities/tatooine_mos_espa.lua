TatooineMosEspaScreenPlay = ScreenPlay:new {
	numberOfActs = 1,

	screenplayName = "TatooineMosEspaScreenPlay"
}

registerScreenPlay("TatooineMosEspaScreenPlay", true)

function TatooineMosEspaScreenPlay:start()
	if (isZoneEnabled("tatooine")) then
		self:spawnMobiles()
        self:spawnSceneObjects()
	end
end

function TatooineMosEspaScreenPlay:spawnMobiles()
    -- Some mobs are loaded using managers/spawn_manager/tatooine.lua, as it has support for extras such as animations.
    -- These include: Trainers, Junk Dealers, and any mob that is sitting or otherwise using an animation.
    -- Specific Quest NPCs are in screenplays/tasks/tatooine/
    -- Imperial fortress is in screenplays/poi/tatooine_imperial_detachment_hq.lua
    
    -- Outside the city clockwise N-E-S-W
    
    -- North Gate Guard
    spawnMobile("tatooine", "mos_espa_police_officer", 300, -3033.79, 5, 2571.73, 329, 0) 
    spawnMobile("tatooine", "mos_espa_police_officer", 300, -3032.83, 5, 2573.37, -103, 0) 
    spawnMobile("tatooine", "sand_trooper", 300, -3036.09, 5, 2573.52, 104, 0) 
    
    -- N Critters, from W to E
    spawnMobile("tatooine", "womp_rat", 300, -3080.63, 6.04392, 2612, 236, 0) 
    spawnMobile("tatooine", "worrt", 300, -3076.69, 6.02173, 2609.32, 107, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -3069.7, 5.92922, 2614, 56, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -3072.92, 6.04623, 2616.97, 308, 0) 
    spawnMobile("tatooine", "rill", 300, -3073.45, 6.07163, 2619.32, 348, 0) 
    spawnMobile("tatooine", "worrt", 300, -3069.92, 6.04253, 2623.75, 53, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -3065.58, 5.82606, 2618.17, 145, 0) 
    spawnMobile("tatooine", "worrt", 300, -3047.86, 7.84569, 2660.74, 34, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -3044.32, 7.82126, 2660.64, 10300, 0) 
    spawnMobile("tatooine", "worrt", 300, -3038.33, 7.99263, 2663.98, 26, 0) 
    spawnMobile("tatooine", "rill", 300, -3017.08, 7.98012, 2688.26, 323, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -3016.7, 8.1367300, 2692.53, 3300, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -3012.66, 8.03594, 2693.53, 99, 0) 
    spawnMobile("tatooine", "rockmite", 300, -3007.99, 7.81093, 2694.2300, 40, 0) 
    spawnMobile("tatooine", "worrt", 300, -3007.15, 7.9069, 2700.67, 22, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -300300, 7.33477, 2701.36, 107, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -2976.28, 5.58774, 2650.49, 8300, 0) 
    spawnMobile("tatooine", "rill", 300, -2965.6300, 6.29176, 2662.84, 30, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -2962.78, 6.65452, 2670.19, 45, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -2933.13, 7.72372, 2689.82, 24, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -2929.5, 7.83069, 2689.93, 115, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2922.78, 8.044, 2711.55, 14, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2920.93, 7.7913, 2717.82, 9300, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -2911.69, 7.81694, 2706.6, 147, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -2910.62, 7.88052, 2695.62, 179, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -2902.87, 6.0574, 2678.5, 153, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2898.7300, 5.5667300, 2674.7300, 69, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2890.93, 5.01156, 2671.88, 147, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -2884.1300, 5.31703, 2661.0300, 82, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -2883.3300, 5.66593, 2655.54, 187, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2878.54, 5.5959300, 2650.4, 9300, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2870.77, 5.74516, 2651.2300, 106, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -2868.23, 5.70927, 2648.1300, 178, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2872.4, 5.46409, 2641.59, 23300, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -2879.5300, 5.33777, 2638.7300, 254, 0) 
    spawnMobile("tatooine", "rill", 300, -2878.3, 5.26182, 2634.3, 104, 0) 
    spawnMobile("tatooine", "rill", 300, -2868.87, 5.47704, 2638.68, 35, 0) 
    
    -- NE Mynock Infestation
    spawnMobile("tatooine", "tatooine_mynock",300,-2775.96,5,2483.96,160.007,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2795.9,5,2465.26,234.054,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2738.08,7.0857,2593.59,10.0957,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2814.11,5,2564.44,351.252,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2704.69,5,2447,144.669,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2681.63,5,2446.35,49.6666,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2776.92,5,2519.58,127.489,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2727.05,5,2452.36,233.461,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2708.25,5,2502.65,33.3582,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2712.84,5,2531.4,66.9802,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2724.24,5,2493.81,125.127,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2759.53,5,2452.82,285.438,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2725.86,5,2448.69,319.256,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2672.59,5,2453.01,205.972,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2702.54,5,2484.93,263.207,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2686.76,5,2433.69,241.59,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2723.47,5,2516.85,226.256,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2723.69,5,2481,27.9293,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2674.03,5.08911,2516.33,146.077,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2753.85,5,2515.57,287.643,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2689.61,5,2510.66,127.468,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2712.54,5,2478.41,328.789,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2783.56,5,2547.41,274.367,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2770.34,5,2507.88,282.073,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2688.24,5.18783,2540.25,306.662,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2697.2,5.68001,2579.61,60.858,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2660.7,5.26786,2500.87,151.217,0)
	spawnMobile("tatooine", "tatooine_mynock",300,-2674.79,5,2495.31,90.1322,0)
    
    -- E Critters
    spawnMobile("tatooine", "rill", 300, -2595.25, 5, 2226.0300, 95, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -2589.84, 5, 2224.88, 114, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -2590.26, 5, 2220.26, 190, 0) 
    spawnMobile("tatooine", "rill", 300, -2591.9300, 5, 2218.95, 235, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -2594.53, 5, 2219.92, 287, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -2593.95, 5, 2216.8300, 143, 0) 
    spawnMobile("tatooine", "rill", 300, -259300, 5, 2215.45, 112, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -2590.64, 5, 2212.62, 194, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2594.73, 5, 2211.92, 210, 0) 
    
    -- S Critters
    spawnMobile("tatooine", "rill", 300, -2803.02, 5.36905, 1761.22, 64, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2796.84, 5.35977, 1762.65, 153, 0) 
    spawnMobile("tatooine", "rill", 300, -2793.1300, 5.74332, 1763.4, 197, 0) 
    spawnMobile("tatooine", "rill", 300, -2789.72, 6.33112, 1758.95, 22300, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2791.04, 6.5469, 1753.7300, 286, 0) 
    spawnMobile("tatooine", "rockmite", 300, -2795.89, 6.47869, 1750.22, 325, 0) 
    
    -- W Critters
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -3208.74, 6.41933, 2010.53, 59, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -3206.59, 6.0535300, 2016.49, 18, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -3208.3300, 5.78562, 2025.69, 327, 0) 
    spawnMobile("tatooine", "rill", 300, -3213.18, 5.72169, 2032.93, 335, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -3222.7300, 5.7706300, 2045.33, 265, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -3228.65, 5.9540300, 2054.29, 330, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -3225.6, 5.73476, 2059.64, 4300, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -3222.75, 5.45462, 2072.93, 36, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -3219.44, 5.18862, 2082.19, 14, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -3221.9300, 5.16339, 2087.79, 257, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -3224.58, 5.28155, 2084.7, 218, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -3229.58, 5.18309, 2090.98, 333, 0) 
    spawnMobile("tatooine", "rill", 300, -3224.86, 5.08795, 2096.79, 54, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -3222.6300, 5.00422, 2104.12, 3300, 0) 
    spawnMobile("tatooine", "womp_rat", 300, -3229.4300, 5.06942, 2112.7300, 297, 0) 
    spawnMobile("tatooine", "lesser_desert_womp_rat", 300, -3236.44, 5.35316, 2107.2, 16300, 0) 
    spawnMobile("tatooine", "minor_worrt", 300, -3221.12, 5, 2115.5, 139, 0) 
    
    -- W Hospital Gate Guard
    spawnMobile("tatooine", "sand_trooper", 500, -3169.95, 5, 2136.47, 327, 0)
    spawnMobile("tatooine", "sand_trooper", 500, -3166.4, 5, 2140.25, 306, 0)
    
    -- Inside the city
    
    -- North Slum
    spawnMobile("tatooine", "criminal", 300, -2865.6, 5, 2468.13, -147, 0) 
    spawnMobile("tatooine", "bandit", 300, -2858.2300, 5, 2473.5, 172, 0) 
    spawnMobile("tatooine", "male_rodian_thug_low", 300, -2871.39, 5, 2495.54, 104, 0) 
    spawnMobile("tatooine", "criminal", 300, -2874.74, 5, 2538.18, 356, 0) 
    spawnMobile("tatooine", "thug", 300, -2876.57, 5, 2542.05, 152, 0) 
    spawnMobile("tatooine", "bandit", 300, -2847.03, 5, 2498.47, 72, 0) 
    spawnMobile("tatooine", "criminal", 300, -2840.8300, 5, 2482.24, 84, 0) 
    spawnMobile("tatooine", "thug", 300, -2838.56, 5, 2481.89, 263, 0) 
    spawnMobile("tatooine", "pirate_crewman", 300, -2834.74, 5, 2462.29, 133, 0) 
    spawnMobile("tatooine", "desert_demon_brawler", 300, -2822.64, 5, 2448.57, 314, 0) 
    spawnMobile("tatooine", "desert_demon", 300, -2821.57, 5, 2433.65, 236, 0) 
    spawnMobile("tatooine", "desert_demon_bodyguard", 300, -2837.36, 5, 2427.79, 146, 0) 
    spawnMobile("tatooine", "desert_demon_leader", 300, -2836.2300, 5, 2423.12, 355, 0)
    spawnMobile("tatooine", "thug", 300, -2845.16, 5, 2395.02, 234, 0) 
    spawnMobile("tatooine", "desert_demon_marksman", 300, -2858.51, 5, 2389.81, 301, 0) 
    -- N Rebel Tent 
    spawnMobile("tatooine", "coa2_rebel_coordinator",60,-2927.64,5,2574.17,304.433,0) 
    -- S Rebel Tent 
    spawnMobile("tatooine", "rebel_scout", 500, -2816.02, 5, 2396.14, 81, 0) 
    spawnMobile("tatooine", "rebel_recruiter", 500, -2812.67, 5, 2395.47, 323, 0) 
    
    --All Jawa
	spawnMobile("tatooine", "jawa",300,-3033.6,5,2245.5,80,0)
	spawnMobile("tatooine", "jawa",300,-3028.7,5,2246.4,-99,0)
	spawnMobile("tatooine", "jawa",300,-2997.5,5,2246.5,-83,0)
	spawnMobile("tatooine", "jawa",300,-2921.8,5,2561,-17,0)
	spawnMobile("tatooine", "jawa",300,-2922.7,5,2565.1,167,0)
	spawnMobile("tatooine", "jawa",300,-2918.3,5,2587.5,-147,0)
	spawnMobile("tatooine", "jawa",300,-2923.6,5,2579.2,24,0)
	spawnMobile("tatooine", "jawa",300,-2888,5,2591,90.7367,0)
	spawnMobile("tatooine", "jawa",300,-2886.7,5,2591,-90,0)
	spawnMobile("tatooine", "jawa",300,-2854.7,5,2461.1,-77,0)
	spawnMobile("tatooine", "jawa",300,-2857,5,2461.6,112,0)
	spawnMobile("tatooine", "jawa",300,-2820.6,5,2414.3,-6,0)
	spawnMobile("tatooine", "jawa",300,-2821,5,2417.3,154,0)
	spawnMobile("tatooine", "jawa",300,-2842.4,5,2317.4,-132,0)
	spawnMobile("tatooine", "jawa",300,-2844.9,5,2315.3,49,0)
	spawnMobile("tatooine", "jawa",300,-2866.7,5,2311.8,-51,0)
	spawnMobile("tatooine", "jawa",300,-2869.2,5,2314,140,0)
	spawnMobile("tatooine", "jawa",300,-2737.2,5,2179.2,-12,0)
	spawnMobile("tatooine", "jawa",300,-2736.3,5,2181.5,-97,0)
	spawnMobile("tatooine", "jawa",300,-2737.7,5,2183.6,169,0)
	spawnMobile("tatooine", "jawa_engineer",300,-2834.7,5,2399,76,0)
	spawnMobile("tatooine", "jawa_engineer",300,-2771.4,5,1934.2,84,0)
	spawnMobile("tatooine", "jawa_engineer",300,-2735,5,2189.5,-116,0)
	spawnMobile("tatooine", "jawa_engineer",300,-2742.4,5,2175.1,78,0)
	spawnMobile("tatooine", "jawa_healer",300,-2866.1,5,2465.9,-33,0)
	spawnMobile("tatooine", "jawa_healer",300,-2830.7,5,2400,-111,0)
	spawnMobile("tatooine", "jawa_healer",300,-2775.7,5,1925,2,0)
	spawnMobile("tatooine", "jawa_healer",300,-2775.8,5,1931.4,54,0)
	spawnMobile("tatooine", "jawa_healer",300,-2773.3,5,1932.7,-122,0)
	spawnMobile("tatooine", "jawa_healer",300,-2775.5,5,1927.9,-176,0)
	spawnMobile("tatooine", "jawa_healer",300,-2766.8,5,1934,-95,0)
	spawnMobile("tatooine", "jawa_henchman",300,-2906.1,5,2594.7,103,0)
	spawnMobile("tatooine", "jawa_smuggler",300,-3002.1,5,2245.9,77,0)
	spawnMobile("tatooine", "jawa_smuggler",300,-2775.8,5,1918.2,152,0)
	spawnMobile("tatooine", "jawa_smuggler",300,-2776.8,5,1913.8,78,0)
	spawnMobile("tatooine", "jawa_thief",300,-2903,5,2594.2,-80,0)
	spawnMobile("tatooine", "jawa_thief",300,-2867.9,5,2468,144,0)
	spawnMobile("tatooine", "jawa_thief",300,-2867.6,5,2421.4,-130,0)
	spawnMobile("tatooine", "jawa_thief",300,-2848.8,5,2430.5,103,0)
	spawnMobile("tatooine", "jawa_thief",300,-2739.1,5,2175.5,-96,0)
	spawnMobile("tatooine", "jawa_thief",300,-2736.1,5,2188.86,69.1613,0)
    
    -- Random Quest Givers
    spawnMobile("tatooine", "businessman",60,-2881.87,5,2142.69,18.8035,0)
	spawnMobile("tatooine", "businessman",60,-2787.25,5,1962.04,14.8999,0)
	spawnMobile("tatooine", "businessman",60,-2939.1,5,1962.9,15.9578,0)
	spawnMobile("tatooine", "businessman",60,-2881.87,5,1974.41,329.04,0)
	spawnMobile("tatooine", "businessman",60,-2895.8,5,2225.4,180,0)
	spawnMobile("tatooine", "businessman",60,-2897.39,5,2323.06,54.7434,0)
	spawnMobile("tatooine", "businessman",60,-2898.72,5.52789,2449.09,-108,0)
	spawnMobile("tatooine", "businessman",60,-2931.98,5,2495.44,266.081,0)
	spawnMobile("tatooine", "businessman",60,-2774.25,5,2018.1,237.899,0)
	spawnMobile("tatooine", "businessman",60,-2722.49,5,2007.18,217.488,0)
	spawnMobile("tatooine", "businessman",60,-2767.35,5,2232.76,164.701,0)
	spawnMobile("tatooine", "businessman",60,-2766.88,5,2314.77,201.13,0)
    spawnMobile("tatooine", "businessman", 60, -3019.32, 5.19531, 2089.37, 16, 0) 
    spawnMobile("tatooine", "businessman", 60, -2750.16, 5, 2062.64, 138, 0) 
    spawnMobile("tatooine", "noble",60,-2924.82,5,2143.27,127.261,0)
	spawnMobile("tatooine", "noble",60,-3081.03,5,2104.52,341.726,0)
	spawnMobile("tatooine", "noble",60,-3064.8,5,2095.01,-130,0)
	spawnMobile("tatooine", "noble",60,-3011.41,5.52789,2375.79,24,0)
	spawnMobile("tatooine", "noble",60,-2847.77,5,2393.35,42.0583,0)
	spawnMobile("tatooine", "noble",60,-2810.65,5,2195.86,318.004,0)
	spawnMobile("tatooine", "noble",60,-3091.67,5,2165.61,286.75,0)
	spawnMobile("tatooine", "noble",60,-3062.85,5,2195.92,156.151,0)
    spawnMobile("tatooine", "scientist",60,-2969.77,5,2194.82,198.34,0)
	spawnMobile("tatooine", "scientist",60,-3055.28,5,2098.76,237.173,0)
	spawnMobile("tatooine", "scientist",60,-2913.31,5,2566.89,167.24,0)
	spawnMobile("tatooine", "scientist",60,-2972.78,5,2477.4,58.2554,0)
	spawnMobile("tatooine", "scientist",60,-2860.55,5,2534.77,227.149,0)
    
    -- Bounty Hunter Informants
    spawnMobile("tatooine", "informant_npc_lvl_1",0,-2804,5,2237,315,0)
	spawnMobile("tatooine", "informant_npc_lvl_1",0,-3036,5,2430,-54,0)
	spawnMobile("tatooine", "informant_npc_lvl_1",0,-2889,5,2373,25,0) --
	spawnMobile("tatooine", "informant_npc_lvl_2",0,-2879,5,2555,135,0)
    
    -- Misc flair
    spawnMobile("tatooine", "cll8_binary_load_lifter",60,-2922.62,5,2143.4,19.5832,0)
	spawnMobile("tatooine", "eg6_power_droid",300,-2971.98,5,2475.9,186.376,0)
    
    -- Inside Structures
    
    --Guild Hall -2857 1987
	spawnMobile("tatooine", "contractor",60,-3.69,1.13306,-6,11.0003,1256306)
	spawnMobile("tatooine", "gungan_chef",60,-10.694,1.13306,-13.3009,-8,1256012)
    spawnMobile("tatooine", "commoner_naboo",60,7.65031,1.13306,-11.193,112,1256010)  

	--Cantina
	spawnMobile("tatooine", "bartender",60,-11.1703,-0.894992,1.53149,33.4278,1256058)
    
	--Med Center
    spawnMobile("tatooine", "medic", 60, 17.8407, 0.26, -7.91422, 335, 9995699)
    spawnMobile("tatooine", "medic", 60, 21.4956, 0.26, 3.76379, 1, 9995699)
    spawnMobile("tatooine", "scientist", 60, -14.6019, 0.26, 9.5709, 338, 9995780)
    spawnMobile("tatooine", "medic", 60, -22.3045, 0.26, -0.538794, 272, 9995780)

	--Hotel
	spawnMobile("tatooine", "scientist",60,20.2668,1.56616,15.1105,241.986,1261018)
end


function TatooineMosEspaScreenPlay:spawnSceneObjects()
    -- Decorations added for Legend of Hondo
    -- spawnSceneObject(<planet>, <objecttemplatefile>, x, z, y, <cell>, dw, dx, dy, dz>  where dw and dy are the ow and oy rotaion values in the dumpz command output
    
    -- Inside Guild Hall -2857 1987
    spawnSceneObject("tatooine", "object/tangible/crafting/station/public_food_station.iff",  -10.5241, 1.13306, -14.8839, 1256012,  0.0, 0, 0.0, 0) 
    spawnSceneObject("tatooine", "object/tangible/crafting/station/public_weapon_station.iff",  3.6814, 1.13306, -5.82231, 1256306,  0.999998, 0, 0.0, 0)
    spawnSceneObject("tatooine", "object/tangible/crafting/station/public_clothing_station.iff",  15.0941, 1.13306, -4.6966, 1256306,  1.0, 0, 0.0, 0)  
    spawnSceneObject("tatooine", "object/tangible/crafting/station/public_structure_station.iff",  -6.36432, 1.13306, -6.0, 1256306,  0.999998, 0, 0.0, 0)  
 
     -- Inside Guild Hall -3063 2079
    spawnSceneObject("tatooine", "object/tangible/crafting/station/public_weapon_station.iff",  -7.18723, 1.13306, -10.4749, 1256023,  -0.700969, 0, 0.713191, 0)
    spawnSceneObject("tatooine", "object/tangible/crafting/station/public_weapon_station.iff",  0.00787778, 1.13306, -15, 1256022,  1.0, 0, 0.0, 0)
    spawnSceneObject("tatooine", "object/tangible/crafting/station/public_clothing_station.iff",  -8.76385, 1.13306, 2.52475, 1256020,  0.998299, 0, -0.0582979, 0) 
    spawnSceneObject("tatooine", "object/tangible/crafting/station/public_structure_station.iff",  14.6757, 1.13306, -8.22967, 1256021,  -0.41052, 0, 0.911852, 0)  
    
    -- Inside Hospital
    spawnSceneObject("tatooine", "object/tangible/crafting/station/public_food_station.iff", -32.7385, 0.254413, -6.32808, 9995780, 0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/tangible/crafting/station/public_food_station.iff", 16.3456, 0.26, 11.5, 9995699, 0, 0, 1, 0) 

    -- Inside West Starport - wall and junk blocking back door due outside terrain being higher than the door.
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_pristine_tatooine_tall_style_01.iff", -3133.03, 5.40995, 1867.07, 0, -0.793354, 0, 0.608761, 0) 
    spawnSceneObject("tatooine", "object/tangible/destructible/wreckage/wreck_starship_small_01.iff", -55.6942, 3.65111, 27.1233, 9995694, 0.0858318, 0.172987, -0.98106, 0.0151345) 
    spawnSceneObject("tatooine", "object/static/structure/general/prp_junk_s7.iff", -57.428, 2.65111, 29.2323, 9995694, -0.704416, -0.0616284, 0.640856, -0.298836)
    spawnSceneObject("tatooine", "object/static/space/debris/tie_fighter_debris_a.iff", -54.1297, 2.65111, 28.8105, 9995694, 0.461749, 0, 0.887011, 0) 

    -- Outside roughly counter clockwise N-W-S-E

    -- Outdoorman
    spawnSceneObject("tatooine", "object/tangible/camp/camp_tent_s1.iff",  -2980.62, 5.0, 2528.85, 0,  0.963207, 0, -0.268761, 0)
    spawnSceneObject("tatooine", "object/tangible/camp/camp_tent_s2.iff",  -2994.26, 5.0, 2537.57, 0,  0.256278, 0, 0.966603, 0)
    spawnSceneObject("tatooine", "object/tangible/camp/camp_tent_s4.iff",  -2985.99, 5.0, 2532.78, 0,  0.998804, 0, 0.048897, 0)
    spawnSceneObject("tatooine", "object/static/flora/flora_tree_palm_fngi.iff",  -2982.34, 5.0, 2535.57, 0,  0.960846, 0, 0.277085, 0)
    spawnSceneObject("tatooine", "object/static/flora/flora_tree_palm_thk.iff",  -2994.2, 5.0, 2533.32, 0,  -0.460367, 0, 0.887729, 0)
    spawnSceneObject("tatooine", "object/static/structure/tatooine/pillar_ruined_small_style_01.iff", -2973.82, 5, 2532.98, 0, -0.92388, 0, 0.382683, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_junkshop_watto.iff", -2980.89, 5, 2525.26, 0, 0.358368, 0, 0.93358, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/pillar_pristine_large_style_01.iff", -2986.95, 5, 2518.91, 0, 0.939693, 0, 0.34202, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_archway_tatooine_large_style_01.iff", -2990.16, 5, 2516.04, 0, 0.92388, 0, 0.382683, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/pillar_damaged_large_style_01.iff", -2993.57, 5, 2513.05, 0, -5.96046e-08, 0, 1, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_pristine_tatooine_large_style_01.iff", -2997.1, 5, 2513.17, 0, 0.707107, 0, 0.707107, 0) 

    -- North West District
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_ruined_tatooine_large_style_01.iff", -3168.35, 5.17998, 2318.01, 0, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/building/tatooine/filler_building_block_64x32_style_01.iff", -3174.74, 5.22394, 2357.83, 0, 0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_ruined_tatooine_large_style_02.iff", -3168.11, 6.0251, 2394.84, 0, 0.5, 0, 0.866026, 0) 
    spawnSceneObject("tatooine", "object/building/tatooine/filler_building_tatt_style01_04.iff", -3156.76, 5.15661, 2415.41, 0, 0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_pristine_tatooine_large_style_01.iff", -3146.81, 4.5933, 2435.33, 0, 0.939693, 0, 0.34202, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/pillar_pristine_large_style_01.iff", -3143.62, 4.59596, 2438.65, 0, 0.939693, 0, 0.34202, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_gate_tatooine_wide_style_01.iff", -3139.28, 5.56632, 2444.72, 0, 0.939693, 0, 0.34202, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/pillar_pristine_large_style_01.iff", -3133.89, 4.58993, 2450.19, 0, 0.382683, 0, 0.92388, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_damaged_tatooine_large_style_01.iff", -3131.51, 4.59138, 2453.71, 0, -0.382683, 0, 0.92388, 0) 
    spawnSceneObject("tatooine", "object/building/tatooine/filler_building_tatt_style01_06.iff", -3122.88, 4.97422, 2464.37, 0, -0.996195, 0, -0.0871558, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_cleft_tatooine_large_style_01.iff", -3109.55, 5.20013, 2463.35, 0, -0.713251, 0, 0.700909, 0) 
    spawnSceneObject("tatooine", "object/building/tatooine/filler_building_tatt_style01_03.iff", -3091.97, 5, 2457.43, 0, -4.37114e-08, 0, 1, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_gate_tatooine_style_01.iff", -3072.8, 5, 2458.4, 0, 0.707107, 0, 0.707107, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_ruined_tatooine_large_style_02.iff", -3039.17, 5, 2428.01, 0, 0.999048, 0, -0.0436194, 0) 
    spawnSceneObject("tatooine", "object/building/tatooine/filler_building_tatt_style01_05.iff", -3051.21, 5, 2412.17, 0, 0.629321, 0, -0.777146, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_gate_tatooine_style_02.iff", -3039.36, 5, 2397.44, 0, 0.994522, 0, -0.104528, 0)
    spawnSceneObject("tatooine", "object/tangible/terminal/terminal_mission.iff", -3103.32, 5, 2446.86, 0, -4.37114e-08, 0, 1, 0) 
    spawnSceneObject("tatooine", "object/tangible/terminal/terminal_mission_scout.iff", -3101.4, 5, 2446.87, 0, -4.37114e-08, 0, 1, 0) 
    spawnSceneObject("tatooine", "object/tangible/terminal/terminal_mission_artisan.iff", -3063.27, 5, 2407.39, 0, -0.608761, 0, 0.793353, 0) 
    
    -- West of Hospital
    spawnSceneObject("tatooine", "object/static/structure/tatooine/pillar_pristine_tall_style_01.iff", -3175.88, 5, 2128.66, 0, 0.866026, 0, 0.5, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_pristine_tatooine_large_style_02.iff", -3184.78, 5, 2126.96, 0, 0.766045, 0, 0.642788, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_cleft_tatooine_large_style_01.iff", -3196.6, 5, 2124.88, 0, -0.766045, 0, -0.642788, 0) 
    spawnSceneObject("tatooine", "object/building/tatooine/filler_building_block_64x32_style_02.iff", -3191.77, 5, 2020.64, 0, 0.608762, 0, -0.793353, 0) 
    spawnSceneObject("tatooine", "object/building/tatooine/filler_building_slave_quarters_style_01.iff", -3205.39, 5, 2097.5, 0, -0.67559, 0, 0.737277, 0) 

    -- Wall and Gate at West Starport
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_pristine_tatooine_large_style_01.iff", -3141.27, 4.23425, 1927.78, 0, 0.422618, 0, 0.906308, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/pillar_pristine_tall_style_01.iff", -3143.38, 5.87837, 1930.49, 0, 0.906308, 0, 0.422618, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_junkshop_watto.iff", -3150, 5.04046, 1938.84, 0, 0.887011, 0, 0.461749, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_archway_tatooine_wide_style_01.iff", -3160.3, 5.00479, 1953.56, 0, 0.300706, 0, 0.953717, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/wall_junkshop_watto.iff", -3170.64, 5.18455, 1968.29, 0, 0.461749, 0, -0.887011, 0) 

    -- Walled Home SE Corner of Hospital
    spawnSceneObject("tatooine", "object/static/structure/general/poi_tato_farm_32x32_s02.iff", -3087.66, 5, 2020.94, 0, 0.906308, 0, -0.422618, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/stone_hovel_tatooine_style_01.iff", -3089.48, 5, 2014.55, 0, 0.965926, 0, 0.258819, 0) 
    spawnSceneObject("tatooine", "object/static/flora/flora_tree_palm_thk.iff", -3094.36, 5, 2013.03, 0, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/static/flora/flora_tree_rori_windswept_s03.iff", -3093.4, 5, 2017.58, 0, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/static/flora/flora_tree_rori_windswept_s00.iff", -3087.73, 5, 2024.33, 0, 0.642788, 0, 0.766044, 0) 
    spawnSceneObject("tatooine", "object/static/flora/flora_plant_tato_hubba.iff", -3091.81, 5, 2010.28, 0, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/static/flora/flora_plant_tato_hubba.iff", -3090.93, 5, 2009.36, 0, 0.92388, 0, 0.382683, 0) 
    spawnSceneObject("tatooine", "object/static/flora/flora_plant_tato_hubba.iff", -3090.17, 5, 2010.27, 0, -4.37114e-08, 0, 1, 0) 
    spawnSceneObject("tatooine", "object/tangible/camp/camp_light_s1.iff", -3084.9, 5, 2027.5, 0, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/tangible/camp/camp_crate_s1.iff", -3085.45, 5, 2026.95, 0, 0.92388, 0, 0.382683, 0) 
    spawnSceneObject("tatooine", "object/tangible/camp/camp_chair_s1.iff", -3085.27, 5, 2025.85, 0, -0.608761, 0, 0.793353, 0) 
    spawnSceneObject("tatooine", "object/tangible/camp/camp_chair_s1.iff", -3086.59, 5, 2026.94, 0, 0.0871558, 0, -0.996195, 0) 
    spawnSceneObject("tatooine", "object/static/structure/tatooine/debris_tatt_pipe_dual_unconnected.iff", -3087.53, 5, 2010.9, 0, -4.37114e-08, 0, 1, 0) 

    -- Garden under capitol balcony
    spawnSceneObject("tatooine", "object/building/player/city/garden_naboo_lrg_05.iff", -2985.36, 5, 1990.92, 0, 0.793354, 0, 0.608761, 0)
    spawnSceneObject("tatooine", "object/static/installation/mockup_mining_liquid_moisture_harvester.iff", -2962, 5, 1990.63, 0, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/static/structure/general/planter_generic_style_2.iff", -2971.36, 5.99, 1982.81, 0, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/static/structure/general/planter_generic_style_1.iff", -2993.52, 6.1, 1976.8, 0, 1, 0, 0, 0) 

    -- Gardener's Home south of capitol balcony
    spawnSceneObject("tatooine", "object/static/structure/general/poi_tato_corral_half_32x32_s04.iff", -2975.64, 5, 1919.57, 0, 0.991445, 0, -0.130526, 0)
    spawnSceneObject("tatooine", "object/static/flora/flora_tree_rori_windswept_s02.iff", -2984.35, 5, 1908.39, 0, 1, 0, 0, 0) 
    spawnSceneObject("tatooine", "object/static/installation/mockup_power_generator_photo_bio_style_1.iff", -2955.99, 5, 1922.63, 0, -0.642788, 0, 0.766044, 0) 

    -- Pistoleer and Carbineer Trainer vehicle
    spawnSceneObject("tatooine", "object/static/vehicle/e3/landspeeder.iff", -2727.35, 5, 2505.37, 0, 0.382683, 0, 0.92388, 0) 

end
