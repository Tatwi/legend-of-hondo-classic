--Copyright (C) 2010 <SWGEmu>


--This File is part of Core3.

--This program is free software; you can redistribute 
--it and/or modify it under the terms of the GNU Lesser 
--General Public License as published by the Free Software
--Foundation; either version 2 of the License, 
--or (at your option) any later version.

--This program is distributed in the hope that it will be useful, 
--but WITHOUT ANY WARRANTY; without even the implied warranty of 
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
--See the GNU Lesser General Public License for
--more details.

--You should have received a copy of the GNU Lesser General 
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

--Linking Engine3 statically or dynamically with other modules 
--is making a combined work based on Engine3. 
--Thus, the terms and conditions of the GNU Lesser General Public License 
--cover the whole combination.

--In addition, as a special exception, the copyright holders of Engine3 
--give you permission to combine Engine3 program with free software 
--programs or libraries that are released under the GNU LGPL and with 
--code included in the standard release of Core3 under the GNU LGPL 
--license (or modified versions of such code, with unchanged license). 
--You may copy and distribute such a system following the terms of the 
--GNU LGPL for Engine3 and the licenses of the other code concerned, 
--provided that you include the source code of that other code when 
--and as the GNU LGPL requires distribution of source code.

--Note that people who make modified versions of Engine3 are not obligated 
--to grant this special exception for their modified versions; 
--it is their choice whether to do so. The GNU Lesser General Public License 
--gives permission to release a modified version without this exception; 
--this exception also makes it possible to release a modified version 


object_tangible_beta_donham_terminal = object_tangible_beta_shared_donham_terminal:new {

	gameObjectType = 16400,
			
	maxCondition = 0,

	templateType = CHARACTERBUILDERTERMINAL,
    
    suiBoxTitle = "Tatwi's Admin Toolbox",
    suiBoxText = "This terminal is intended to help a server admin decorate cities via screenplays. Use these tangible versions of static objects in conjunctions with my other Admin Toolbox mods: Admin Drop/Pickup Outside, getObjVars command, and the rotate-move any Tangible Object mods.",

	itemList = {
		"Tatooine Themed", 
        {
            "Bridges - Walkways - Stairs",
            {
                "Walking Bridge - Small", "object/tangible/furniture/static/structure/tatooine/bridge_tatooine_small_style_01.iff",
                "Walking Bridge - Medium", "object/tangible/furniture/static/structure/tatooine/bridge_tatooine_small_style_02.iff",
                "Walking Bridge - Large", "object/tangible/furniture/static/structure/tatooine/bridge_tatooine_small_style_02.iff",
                "Stairs - Large 45 Degree", "object/tangible/furniture/static/structure/tatooine/stair_tatooine_large_style_01.iff",
                "Stairs - Large Steep", "object/tangible/furniture/static/structure/tatooine/stair_tatooine_large_style_02.iff",
                "Stairs - Small 45 Degree", "object/tangible/furniture/static/structure/tatooine/stair_tatooine_small_style_01.iff",
                "Stairs - Small Steep", "object/tangible/furniture/static/structure/tatooine/stair_tatooine_small_style_02.iff",
            },
            "Gates - Archways",
            {
                "Gate - Style 1", "object/tangible/furniture/static/structure/tatooine/wall_gate_tatooine_style_01.iff",
                "Gate - Style 2", "object/tangible/furniture/static/structure/tatooine/wall_gate_tatooine_style_02.iff",
                "Gate - Style 3", "object/tangible/furniture/static/structure/tatooine/wall_gate_tatooine_style_03.iff",
                "Gate - Wide", "object/tangible/furniture/static/structure/tatooine/wall_gate_tatooine_wide_style_01.iff",
                "Archway - Large", "object/tangible/furniture/static/structure/tatooine/wall_archway_tatooine_large_style_01.iff",
                "Archway - Wide", "object/tangible/furniture/static/structure/tatooine/wall_archway_tatooine_wide_style_01.iff",
                "Overhead Beam - Style 1", "object/tangible/furniture/static/structure/tatooine/beam_tatooine_overhead_style_01.iff",
                "Overhead Beam - Style 2", "object/tangible/furniture/static/structure/tatooine/beam_tatooine_overhead_style_02.iff",
            },
            "Pillars",
            {
                "Damaged - Large","object/tangible/furniture/static/structure/tatooine/pillar_damaged_large_style_01.iff",
                "Pristine - Large","object/tangible/furniture/static/structure/tatooine/pillar_pristine_large_style_01.iff",
                "Pristine - Small","object/tangible/furniture/static/structure/tatooine/pillar_pristine_small_style_01.iff",
                "Pristine - Tall","object/tangible/furniture/static/structure/tatooine/pillar_pristine_tall_style_01.iff",
                "Ruined - Large","object/tangible/furniture/static/structure/tatooine/pillar_ruined_large_style_01.iff",
                "Ruined - Small","object/tangible/furniture/static/structure/tatooine/pillar_ruined_small_style_01.iff",
                "Junkshop","object/tangible/furniture/static/structure/tatooine/pillar_watto_junkshop.iff",
            },
            "Walls",
            {
                "Wall - Cleft Large", "object/tangible/furniture/static/structure/tatooine/wall_cleft_tatooine_large_style_01.iff",
                "Wall - Damaged Large", "object/tangible/furniture/static/structure/tatooine/wall_damaged_tatooine_large_style_01.iff",
                "Wall - Junkshop Long", "object/tangible/furniture/static/structure/tatooine/wall_junkshop_watto.iff",
                "Wall - Pristine Large", "object/tangible/furniture/static/structure/tatooine/wall_pristine_tatooine_large_style_01.iff",
                "Wall - Pristine Large Long", "object/tangible/furniture/static/structure/tatooine/wall_pristine_tatooine_large_style_02.iff",
                "Wall - Pristine Small Short", "object/tangible/furniture/static/structure/tatooine/wall_pristine_tatooine_small_style_01.iff",
                "Wall - Pristine Tall", "object/tangible/furniture/static/structure/tatooine/wall_pristine_tatooine_tall_style_01.iff",
                "Wall - Ruined Large 1", "object/tangible/furniture/static/structure/tatooine/wall_ruined_tatooine_large_style_01.iff",
                "Wall - Ruined Large 2", "object/tangible/furniture/static/structure/tatooine/wall_ruined_tatooine_large_style_02.iff",
                "Wall - Ruined Small", "object/tangible/furniture/static/structure/tatooine/wall_ruined_tatooine_small_style_01.iff",
                "Concrete Block - Large", "object/tangible/furniture/static/structure/tatooine/concrete_slab_tatooine_16x8.iff",
            },
            "Filler Buildings",
            {
                "Small Round Shed-Tank - No Door", "object/tangible/furniture/static/structure/tatooine/shed_junkshop_watto.iff",
                "Small Round Hovel", "object/tangible/furniture/static/structure/tatooine/stone_hovel_tatooine_style_01.iff",
                "Long Short Block - Style 1", "object/tangible/furniture/static/building/tatooine/filler_building_block_64x16_style_01.iff",
                "Long Short Block - Style 2", "object/tangible/furniture/static/building/tatooine/filler_building_block_64x16_style_02.iff",
                "Long Tall Block - Style 1", "object/tangible/furniture/static/building/tatooine/filler_building_block_64x32_style_01.iff",
                "Long Tall Block - Style 2", "object/tangible/furniture/static/building/tatooine/filler_building_block_64x32_style_02.iff",
                "Slave Apartments", "object/tangible/furniture/static/building/tatooine/filler_building_slave_quarters_style_01.iff",
                "Tall Cube with Offest Door", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_01.iff",
                "Very Tall Tapering Cube", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_02.iff",
                "Double Wide with Tent Over Door", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_03.iff",
                "Pyramid with Door on Corner", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_04.iff",
                "Cube with 3 Roof Bumps on One Side", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_05.iff",
                "Silo - Very Tall", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_06.iff",
                "Silo - Wide with Water Stains", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_07.iff",
                "Silo - Balloon Top", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_08.iff",
                "Silo - Tall", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_09.iff",
                "Silo - Wide Clean", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_10.iff",
                "Pyramid with Door on One Side", "object/tangible/furniture/static/building/tatooine/filler_building_tatt_style01_11.iff",
            },
            "Antenna - Poles - Posts - Pipes",
            {
                "Antenna - Tatooine 1","object/tangible/furniture/static/structure/tatooine/antenna_tatt_style_1.iff",
                "Antenna - Tatooine 2","object/tangible/furniture/static/structure/tatooine/antenna_tatt_style_2.iff",
                "Pipe Dual Unconnected","object/tangible/furniture/static/structure/tatooine/debris_tatt_pipe_dual_unconnected.iff",
                "Pipe Narrow 1","object/tangible/furniture/static/structure/tatooine/debris_tatt_pipe_narrow_1.iff",
                "Pipe Narrow 2","object/tangible/furniture/static/structure/tatooine/debris_tatt_pipe_narrow_2.iff",
                "Pipe Wide Mouth","object/tangible/furniture/static/structure/tatooine/debris_tatt_pipe_widemouth.iff",
            },
            "Pre-made Walls with Gates",
            {
                "Corral 32x32 - Style 1","object/tangible/furniture/static/structure/general/poi_tato_corral_half_32x32_s01.iff",
                "Corral 32x32 - Style 2","object/tangible/furniture/static/structure/general/poi_tato_corral_half_32x32_s02.iff",
                "Corral 32x32 - Style 3","object/tangible/furniture/static/structure/general/poi_tato_corral_half_32x32_s03.iff",
                "Corral 32x32 - Style 4","object/tangible/furniture/static/structure/general/poi_tato_corral_half_32x32_s04.iff",
                "Corral 64x64 - Style 1","object/tangible/furniture/static/structure/general/poi_tato_corral_half_64x64_s01.iff",
                "Corral 64x64 - Style 2","object/tangible/furniture/static/structure/general/poi_tato_corral_half_64x64_s02.iff",
                "Corral 64x64 - Style 3","object/tangible/furniture/static/structure/general/poi_tato_corral_half_64x64_s03.iff",
                "Corral 64x64 - Style 4","object/tangible/furniture/static/structure/general/poi_tato_corral_half_64x64_s04.iff",
                "Pen 16x8","object/tangible/furniture/static/structure/general/poi_tato_corral_pen_16x8_s01.iff",
                "Farm 32x32 - Style 1","object/tangible/furniture/static/structure/general/poi_tato_farm_32x32_s01.iff",
                "Farm 32x32 - Style 2","object/tangible/furniture/static/structure/general/poi_tato_farm_32x32_s02.iff",
            },
        }, -- Tatooine End
        "Plants",
        {
            "Stand-alone",
            {
                "Hubba Tree","object/tangible/furniture/static/flora/flora_plant_tato_hubba.iff",
                "Palm Tree","object/tangible/furniture/static/flora/flora_tree_palm_fngi.iff",
                "Palm Tree - Thin","object/tangible/furniture/static/flora/flora_tree_palm_sm.iff",
                "Palm Tree - Thick","object/tangible/furniture/static/flora/flora_tree_palm_thk.iff",
                "Rori Light Brown Tree 1","object/tangible/furniture/static/flora/flora_tree_rori_windswept_s00.iff",
                "Rori Light Brown Tree 2","object/tangible/furniture/static/flora/flora_tree_rori_windswept_s01.iff",
                "Rori Light Brown Tree 3","object/tangible/furniture/static/flora/flora_tree_rori_windswept_s02.iff",
                "Rori Light Brown Tree 4","object/tangible/furniture/static/flora/flora_tree_rori_windswept_s03.iff",
            },
            "Potted",
            {
                "Huge Potted Tree 1","object/tangible/furniture/static/structure/general/planter_generic_style_1.iff",
                "Huge Potted Tree 2","object/tangible/furniture/static/structure/general/planter_generic_style_2.iff",
                "Huge Potted Tree 3","object/tangible/furniture/static/structure/general/planter_generic_style_3.iff",
                "Huge Potted Tree 4","object/tangible/furniture/static/structure/general/planter_generic_style_4.iff",
                --Not Targetable "Tatooine Orchard 1","object/tangible/furniture/static/structure/tatooine/orchard_tatooine_style_01.iff",
                --Not Targetable "Tatooine Orchard 2","object/tangible/furniture/static/structure/tatooine/orchard_tatooine_style_02.iff",
            },
        }, -- Plants End
        "Misc Decor",
        {
            "Parked X-Wing", "object/tangible/furniture/static/structure/general/xwing.iff",
        }, -- Misc Decor Ends
	} -- List End

}

ObjectTemplates:addTemplate(object_tangible_beta_donham_terminal, "object/tangible/beta/donham_terminal.iff")
