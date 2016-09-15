/*
 =======================================================================================================================

	SME.Gen - Small Military Encounter Genenerator

	File:		missionFactions.hpp
	Author:		T-800a
	E-Mail:		t-800a@gmx.net

	spawnUnitsSide:
	- EAST:			0
	- WEST: 		1
	- INDEPENDENT:	2

	sub-classes:
	- units			all units/vehicles spawned with AI
	- vehicles		all units/vehicles spawned with-OUT AI

 =======================================================================================================================
*/

#define REDFOR 0
#define BLUFOR 1
#define GRNFOR 2

class missionFactions
{

	#include "missionFactions\base_faction.hpp"

	// --------------------------------------------------------------
	//	vanilla OPFOR
	//

	class vanilla_OPFOR : base_faction {};

	#include "missionFactions\vanilla_OPFOR_URBAN.hpp"

	#include "missionFactions\vanilla_OPFOR_GUER.hpp"

	// --------------------------------------------------------------
	//	vanilla GRNFOR
	//

	#include "missionFactions\vanilla_INDEP.hpp"

	#include "missionFactions\vanilla_INDEP_GUER.hpp"

	// --------------------------------------------------------------
	//	vanilla BLUFOR
	//

	#include "missionFactions\vanilla_BLUFOR.hpp"

	// --------------------------------------------------------------
	//	CUP Factions: OPFOR
	//

	#include "missionFactions\CUP_OPFOR_TAKarmy.hpp"

	// --------------------------------------------------------------
	//	CUP Factions: GRNFOR
	//

	#include "missionFactions\CUP_GRNFOR_TAKlocals.hpp"

	#include "missionFactions\CUP_GRNFOR_NAPA.hpp"

	// --------------------------------------------------------------
	//	CUP Factions: BLUFOR
	//

	#include "missionFactions\CUP_BLUFOR_USMC.hpp"

	// --------------------------------------------------------------
	//	RHS Factions: BLUFOR
	//

	#include "missionFactions\RHS_BLUFOR_ARMY_OCP.hpp"

	// --------------------------------------------------------------
	//	RHS Factions: REDFOR
	//

	#include "missionFactions\RHS_OPFOR_EMR.hpp"

	// --------------------------------------------------------------
	//	RHS Factions: GRNFOR
	//
};
