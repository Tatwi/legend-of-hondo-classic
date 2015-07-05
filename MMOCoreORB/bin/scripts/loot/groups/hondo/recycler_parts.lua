-- Created by hand by Tatwi!

recycler_parts = {
	description = "",
	minimumLevel = 0,
	maximumLevel = 0,
	lootItems = {
		-- Schematics 10%
		{itemTemplate = "metal_recycler_schematic", weight = 200000},
		{itemTemplate = "chemical_recycler_schematic", weight = 200000},
		{itemTemplate = "creature_recycler_schematic", weight = 200000},
		{itemTemplate = "flora_recycler_schematic", weight = 200000},
		{itemTemplate = "ore_recycler_schematic", weight = 200000},
		
		-- Component Scematics 18%
		{itemTemplate = "agitator_motor_schematic", weight = 900000},
		{itemTemplate = "tumble_blender_schematic", weight = 900000},
		
		-- Pieces 72%
		{itemTemplate = "blue_wiring", weight = 800000},
		{itemTemplate = "cheap_copper_battery", weight = 800000},
		{itemTemplate = "feed_tube", weight = 800000},
		{itemTemplate = "heating_element", weight = 800000},
		{itemTemplate = "processor_attachment", weight = 800000},
		{itemTemplate = "pulverizer", weight = 800000},
		{itemTemplate = "red_wiring", weight = 800000},
		{itemTemplate = "small_motor", weight = 800000},
		{itemTemplate = "spinner_blade", weight = 800000},
	}
}

addLootGroupTemplate("recycler_parts", recycler_parts)