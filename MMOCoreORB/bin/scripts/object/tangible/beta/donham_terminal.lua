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

	itemList = {
		"Tatooine", 
        {
            "Bridges - Walkways",
            {
                "Bridge - Small", "object/tangible/furniture/static/structure/tatooine/bridge_tatooine_small_style_01.iff",
            },
            "Gates - Archways",
            {
                "Gate - Style 1", "object/tangible/furniture/static/structure/tatooine/wall_gate_tatooine_style_01.iff",
                "Gate - Style 2", "object/tangible/furniture/static/structure/tatooine/wall_gate_tatooine_style_02.iff",
                "Gate - Style 3", "object/tangible/furniture/static/structure/tatooine/wall_gate_tatooine_style_03.iff",
                "Gate - Wide", "object/tangible/furniture/static/structure/tatooine/wall_gate_tatooine_wide_style_01.iff",
                "Archway - Large", "object/tangible/furniture/static/structure/tatooine/wall_archway_tatooine_large_style_01.iff",
                "Archway - Wide", "object/tangible/furniture/static/structure/tatooine/wall_archway_tatooine_wide_style_01.iff",
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
            },
            
        }, -- Tatooine End
	}

}

ObjectTemplates:addTemplate(object_tangible_beta_donham_terminal, "object/tangible/beta/donham_terminal.iff")
