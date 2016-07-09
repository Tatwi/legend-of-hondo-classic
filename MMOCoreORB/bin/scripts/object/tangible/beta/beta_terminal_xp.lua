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


object_tangible_beta_beta_terminal_xp = object_tangible_beta_shared_beta_terminal_xp:new {

	gameObjectType = 16400,
			
	maxCondition = 0,

	templateType = CHARACTERBUILDERTERMINAL,
    
    suiBoxTitle = "Character Builder", 
    suiBoxText = "The BETA Terminal is capable of imprinting upon your mind a range of skills that you may find entertaining. This service is freely available to all citizens of the Empire. Enjoy!",

	itemList = {
		"Learn Skill",
		{
			"Dancer",
			{
				"Novice", "social_dancer_novice",
				"Techniques",
				{
					"Dancing Techniques I", "social_dancer_ability_01",
					"Dancing Techniques II", "social_dancer_ability_02",
					"Dancing Techniques III", "social_dancer_ability_03",
					"Technique Specialist IV", "social_dancer_ability_04"
				},
				"Wound Healing",
				{
					"Dancer's Wound Healing I", "social_dancer_wound_01",
					"Dancer's Wound Healing II", "social_dancer_wound_02",
					"Dancer's Wound Healing III", "social_dancer_wound_03",
					"Dancer's Wound Healing IV", "social_dancer_wound_04"
				},
				"Knowledge",
				{
					"Dancing Knowledge I", "social_dancer_knowledge_01",
					"Dancing Knowledge II", "social_dancer_knowledge_02",
					"Dancing Knowledge III", "social_dancer_knowledge_03",
					"Dancing Knowledge IV", "social_dancer_knowledge_04"
				},
				"Fatigue Healing",
				{
					"Dancer's Fatigue Healing I", "social_dancer_shock_01",
					"Dancer's Fatigue Healing II", "social_dancer_shock_02",
					"Dancer's Fatigue Healing III", "social_dancer_shock_03",
					"Dancer's Fatigue Healing IV", "social_dancer_shock_04"
				},
				"Master", "social_dancer_master"
			},
			"Entertainer",
			{
				"Novice", "social_entertainer_novice",
				"Image Design",
				{
					"Image Design I", "social_entertainer_hairstyle_01",
					"Image Design II", "social_entertainer_hairstyle_02",
					"Image Design III", "social_entertainer_hairstyle_03",
					"Image Design IV", "social_entertainer_hairstyle_04"
				},
				"Musicianship",
				{
					"Musicianship I", "social_entertainer_music_01",
					"Musicianship II", "social_entertainer_music_02",
					"Musicianship III", "social_entertainer_music_03",
					"Musicianship IV", "social_entertainer_music_04"
				},
				"Dancing",
				{
					"Dancing I", "social_entertainer_dance_01",
					"Dancing II", "social_entertainer_dance_02",
					"Dancing III", "social_entertainer_dance_03",
					"Dancing IV", "social_entertainer_dance_04"
				},
				"Entertainment Healing",
				{
					"Entertainment Healing I", "social_entertainer_healing_01",
					"Entertainment Healing II", "social_entertainer_healing_02",
					"Entertainment Healing III", "social_entertainer_healing_03",
					"Entertainment Healing IV", "social_entertainer_healing_04"
				},
				"Master", "social_entertainer_master"
			},
			"Image Designer",
			{
				"Novice", "social_imagedesigner_novice",
				"Hairstyling",
				{
					"Hairstyling I", "social_imagedesigner_hairstyle_01",
					"Hairstyling II", "social_imagedesigner_hairstyle_02",
					"Hairstyling III", "social_imagedesigner_hairstyle_03",
					"Hairstyling IV", "social_imagedesigner_hairstyle_04"
				},
				"Face",
				{
					"Face I", "social_imagedesigner_exotic_01",
					"Face II", "social_imagedesigner_exotic_02",
					"Face III", "social_imagedesigner_exotic_03",
					"Face IV", "social_imagedesigner_exotic_04"
				},
				"Bodyform",
				{
					"Bodyform I", "social_imagedesigner_bodyform_01",
					"Bodyform II", "social_imagedesigner_bodyform_02",
					"Bodyform III", "social_imagedesigner_bodyform_03",
					"Bodyform Iv", "social_imagedesigner_bodyform_04"
				},
				"Markings",
				{
					"Markings I", "social_imagedesigner_markings_01",
					"Markings II", "social_imagedesigner_markings_02",
					"Markings III", "social_imagedesigner_markings_03",
					"Markings IV", "social_imagedesigner_markings_04"
				},
				"Master", "social_imagedesigner_master"
			},
			"Merchant",
			{
				"Novice", "crafting_merchant_novice",
				"Advertising",
				{
					"Advertising I", "crafting_merchant_advertising_01",
					"Advertising II", "crafting_merchant_advertising_02",
					"Advertising III", "crafting_merchant_advertising_03",
					"Advertising IV", "crafting_merchant_advertising_04"
				},
				"Efficiency",
				{
					"Efficiency I", "crafting_merchant_sales_01",
					"Efficiency II", "crafting_merchant_sales_02",
					"Efficiency III", "crafting_merchant_sales_03",
					"Efficiency IV", "crafting_merchant_sales_04"
				},
				"Hiring",
				{
					"Hiring I", "crafting_merchant_hiring_01",
					"Hiring II", "crafting_merchant_hiring_02",
					"Hiring III", "crafting_merchant_hiring_03",
					"Hiring IV", "crafting_merchant_hiring_04"
				},
				"Management",
				{
					"Management I", "crafting_merchant_management_01",
					"Management II", "crafting_merchant_management_02",
					"Management III", "crafting_merchant_management_03",
					"Management IV", "crafting_merchant_management_04"
				},
				"Master", "crafting_merchant_master"
			},
			"Musician",
			{
				"Novice", "social_musician_novice",
				"Techniques",
				{
					"Musical Techniques I", "social_musician_ability_01",
					"Musical Techniques II", "social_musician_ability_02",
					"Musical Techniques III", "social_musician_ability_03",
					"Technique Specialist IV", "social_musician_ability_04"
				},
				"Wound Healing",
				{
					"Musician's Wound Healing I", "social_musician_wound_01",
					"Musician's Wound Healing II", "social_musician_wound_02",
					"Musician's Wound Healing III", "social_musician_wound_03",
					"Musician's Wound Healing IV", "social_musician_wound_04"
				},
				"Knowledge",
				{
					"Musical Knowledge I", "social_musician_knowledge_01",
					"Musical Knowledge II", "social_musician_knowledge_02",
					"Musical Knowledge III", "social_musician_knowledge_03",
					"Musical Knowledge IV", "social_musician_knowledge_04"
				},
				"Fatigue Healing",
				{
					"Musician's Fatigue Healing I", "social_musician_shock_01",
					"Musician's Fatigue Healing II", "social_musician_shock_02",
					"Musician's Fatigue Healing III", "social_musician_shock_03",
					"Musician's Fatigue Healing IV", "social_musician_shock_04"
				},
				"Master", "social_musician_master"
			},
			"Politician",
			{
				"Novice", "social_politician_novice",
				"Fiscal Policy",
				{
					"Fiscal Policy I", "social_politician_fiscal_01",
					"Fiscal Policy II", "social_politician_fiscal_02",
					"Fiscal Policy III", "social_politician_fiscal_03",
					"Fiscal Policy IV", "social_politician_fiscal_04"
				},
				"Martial Policy",
				{
					"Martial Policy I", "social_politician_martial_01",
					"Martial Policy II", "social_politician_martial_02",
					"Martial Policy III", "social_politician_martial_03",
					"Martial Policy IV", "social_politician_martial_04"
				},
				"Civic Policy",
				{
					"Civic Policy I", "social_politician_civic_01",
					"Civic Policy II", "social_politician_civic_02",
					"Civic Policy III", "social_politician_civic_03",
					"Civic Policy IV", "social_politician_civic_04"
				},
				"City Customization",
				{
					"City Customization I", "social_politician_urban_01",
					"City Customization II", "social_politician_urban_02",
					"City Customization III", "social_politician_urban_03",
					"City Customization IV", "social_politician_urban_04"
				},
				"Master", "social_politician_master"
			},
		},
		"Learn Languages", "language",
	}
}

ObjectTemplates:addTemplate(object_tangible_beta_beta_terminal_xp, "object/tangible/beta/beta_terminal_xp.iff")
