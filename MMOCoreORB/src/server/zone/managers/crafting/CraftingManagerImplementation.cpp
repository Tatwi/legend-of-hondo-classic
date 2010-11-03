/*
 Copyright (C) 2007 <SWGEmu>

 This File is part of Core3.

 This program is free software; you can redistribute
 it and/or modify it under the terms of the GNU Lesser
 General Public License as published by the Free Software
 Foundation; either version 2 of the License,
 or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 See the GNU Lesser General Public License for
 more details.

 You should have received a copy of the GNU Lesser General
 Public License along with this program; if not, write to
 the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

 Linking Engine3 statically or dynamically with other modules
 is making a combined work based on Engine3.
 Thus, the terms and conditions of the GNU Lesser General Public License
 cover the whole combination.

 In addition, as a special exception, the copyright holders of Engine3
 give you permission to combine Engine3 program with free software
 programs or libraries that are released under the GNU LGPL and with
 code included in the standard release of Core3 under the GNU LGPL
 license (or modified versions of such code, with unchanged license).
 You may copy and distribute such a system following the terms of the
 GNU LGPL for Engine3 and the licenses of the other code concerned,
 provided that you include the source code of that other code when
 and as the GNU LGPL requires distribution of source code.

 Note that people who make modified versions of Engine3 are not obligated
 to grant this special exception for their modified versions;
 it is their choice whether to do so. The GNU Lesser General Public License
 gives permission to release a modified version without this exception;
 this exception also makes it possible to release a modified version
 which carries forward this exception.
 */

#include "CraftingManager.h"
#include "server/zone/objects/resource/ResourceContainer.h"

void CraftingManagerImplementation::initialize() {
	schematicMap = SchematicMap::instance();
	schematicMap->initialize(zoneServer);
}

void CraftingManagerImplementation::awardSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient) {
	schematicMap->addSchematics(playerObject, schematicgroups, updateClient);
}

void CraftingManagerImplementation::removeSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient) {
	schematicMap->removeSchematics(playerObject, schematicgroups, updateClient);
}

void CraftingManagerImplementation::sendDraftSlotsTo(PlayerCreature* player, uint32 schematicID) {
	schematicMap->sendDraftSlotsTo(player, schematicID);
}

void CraftingManagerImplementation::sendResourceWeightsTo(PlayerCreature* player, uint32 schematicID) {
	schematicMap->sendResourceWeightsTo(player, schematicID);
}

int CraftingManagerImplementation::calculateAssemblySuccess(PlayerCreature* player,
		DraftSchematic* draftSchematic, float effectiveness) {

	// assemblyPoints is 0-12
	float assemblyPoints = ((float)player->getSkillMod(draftSchematic->getAssemblySkill())) / 10.0f;

	// 0.85-1.15
	float toolModifier = 1.0f + (effectiveness / 100.0f);

	//Pyollian Cake
	/*if (player->hasBuff(BuffCRC::FOOD_CRAFT_BONUS)) {
		Buff* buff = player->getBuff(BuffCRC::FOOD_CRAFT_BONUS);

		if (buff != NULL) {
			float craftbonus = buff->getSkillModifierValue("craft_bonus");
			toolModifier *= 1.0f + (craftbonus / 100.0f);
			player->removeBuff(buff);
		}
	}*/


	int luckRoll = System::random(100);

	if(luckRoll > 95)
		return AMAZINGSUCCESS;

	if(luckRoll < 5)
		return CRITICALFAILURE;

	luckRoll += System::random(player->getSkillMod("luck") + player->getSkillMod("force_luck"));

	int assemblyRoll = (toolModifier * (luckRoll + (assemblyPoints * 5)));

	if (assemblyRoll > 70)
		return GREATSUCCESS;

	if (assemblyRoll > 60)
		return GOODSUCCESS;

	if (assemblyRoll > 50)
		return MODERATESUCCESS;

	if (assemblyRoll > 40)
		return SUCCESS;

	if (assemblyRoll > 30)
		return MARGINALSUCCESS;

	if (assemblyRoll > 20)
		return OK;

	return BARELYSUCCESSFUL;
}

float CraftingManagerImplementation::calculateAssemblyValueModifier(int assemblyResult) {


	if(assemblyResult == CraftingManager::AMAZINGSUCCESS)
		return 1.2f;
	else
		return 1.0f;

	/*float results = ((3.4 / Math::ln(assemblyResult + 4)) - 1.1111);

	// Unless we want amazing assemblies to get a bonus, we cap the madifier at 1

	if (results > 1.00) {

		if (results < 1.05) {

			results = 1.0f;

		} else {

			results = 1.2f;

		}

	}

	return results;*/

}

float CraftingManagerImplementation::getAssemblyPercentage(float value) {

	float percentage = (value * (0.000015f * value + .015f)) * 0.01f;

	return percentage;
}

int CraftingManagerImplementation::calculateExperimentationFailureRate(PlayerCreature* player,
		ManufactureSchematic* manufactureSchematic, int pointsUsed) {

	// Get the Weighted value of MA
	float ma = getWeightedValue(manufactureSchematic, MA);

	// Get Experimentation skill
	String expSkill = manufactureSchematic->getDraftSchematic()->getExperimentationSkill();
	float expPoints = player->getSkillMod(expSkill);

	int failure = int((50.0f + (ma - 500.0f) / 40.0f + expPoints - 5.0f * float(pointsUsed)));

	return failure;
}

int CraftingManagerImplementation::calculateExperimentationSuccess(PlayerCreature* player,
		DraftSchematic* draftSchematic, float effectiveness) {

	// assemblyPoints is 0-12
	float experimentingPoints = ((float)player->getSkillMod(draftSchematic->getExperimentationSkill())) / 10.0f;

	// 0.85-1.15
	float toolModifier = 1.0f + (effectiveness / 100.0f);

	//Pyollian Cake
	/*
	if (player->hasBuff(BuffCRC::FOOD_EXPERIMENT_BONUS)) {
		Buff* buff = player->getBuff(BuffCRC::FOOD_EXPERIMENT_BONUS);

		if (buff != NULL) {
			float expbonus = buff->getSkillModifierValue("experiment_bonus");
			stationModifier *= 1.0f + (expbonus / 100.0f);
			player->removeBuff(buff);
		}
	}*/

	/// Range 0-100
	int luckRoll = System::random(100);

	if(luckRoll > 95)
		return AMAZINGSUCCESS;

	if(luckRoll < 5)
		return CRITICALFAILURE;

	luckRoll += System::random(player->getSkillMod("luck") + player->getSkillMod("force_luck"));

	///
	int experimentRoll = (toolModifier * (luckRoll + (experimentingPoints * 4)));

	if (experimentRoll > 70)
		return GREATSUCCESS;

	if (experimentRoll > 60)
		return GOODSUCCESS;

	if (experimentRoll > 50)
		return MODERATESUCCESS;

	if (experimentRoll > 40)
		return SUCCESS;

	if (experimentRoll > 30)
		return MARGINALSUCCESS;

	if (experimentRoll > 20)
		return OK;

	return BARELYSUCCESSFUL;
}

float CraftingManagerImplementation::calculateExperimentationValueModifier(
		int experimentationResult, int pointsAttempted) {

	// Make it so failure detract

	float results;

	switch (experimentationResult) {

	case 0:
		results = 0.08f;
		break;
	case 1:
		results = 0.07f;
		break;
	case 2:
		results = 0.055f;
		break;
	case 3:
		results = 0.015f;
		break;
	case 4:
		results = 0.01f;
		break;
	case 5:
		results = 0.00f;
		break;
	case 6:
		results = -0.04f;
		break;
	case 7:
		results = -0.07f;
		break;
	case 8:
		results = -0.08f;
		break;
	default:
		results = 0;
		break;
	}

	results *= pointsAttempted;

	return results;

}

float CraftingManagerImplementation::getWeightedValue(ManufactureSchematic* manufactureSchematic, int type) {

	int nsum = 0;
	float weightedAverage = 0;
	int n = 0;
	int stat = 0;

	for (int i = 0; i < manufactureSchematic->getSlotCount(); ++i) {

		Reference<IngredientSlot* > ingredientslot = manufactureSchematic->getIngredientSlot(i);
		Reference<DraftSlot* > draftslot = manufactureSchematic->getDraftSchematic()->getDraftSlot(i);

		if(!ingredientslot->isType(IngredientSlot::RESOURCESLOT))
			continue;

		ManagedReference<ResourceContainer* > resourceContainer = (ResourceContainer*) ingredientslot->get();

		if(resourceContainer == NULL)
			continue;

		ManagedReference<ResourceSpawn* > spawn = resourceContainer->getSpawnObject();

		int combineType = draftslot->getCombineType();

		switch (combineType) {
		case RESOURCE:
			n = draftslot->getQuantity();
			stat = spawn->getValueOf(type);

			if (stat != 0) {

				nsum += n;
				weightedAverage += (stat * n);

			}
			break;
		case COMPONENTLINEAR:
		case COMPONENTPERCENTAGE:
			break;

		}
	}

	if (weightedAverage != 0)
		weightedAverage /= float(nsum);

	return weightedAverage;
}

String CraftingManagerImplementation::generateSerial() {

	StringBuffer ss;

	char a;

	ss << "(";

	for (int i = 0; i < 8; ++i) {

		a = (System::random(34));
		if (a < 9) {
			a = a + 48;
		} else {
			a -= 9;
			a = a + 97;
		}
		ss << a;
	}

	ss << ")";


	return ss.toString();
}
