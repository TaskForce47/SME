/*
 =======================================================================================================

	SME.Gen - Small Military Encounter Genenerator
	INIT Client

	File:		init.sqf
	Author:		T-800a
	E-Mail:		t-800a@gmx.net

 =======================================================================================================
*/

#include <..\MACRO.hpp>


waitUntil { !isNull player AND { isPlayer player } AND { alive player }};
if !(hasInterface) exitWith {};


// wait for Parameters
waitUntil { !isNil "T8SME_param_INIT" };


// check slots restrictions
[] call T8SME_client_fnc_checkSlots;


// INIT Arsenal
[ "INIT" ] call T8SME_client_fnc_updateArsenal;


// add key presses
[] spawn T8SME_client_fnc_keysAdd;


// add diary entries
[] call T8SME_client_fnc_addDiary;

// debug add keys for missionSites export
if !( isMultiplayer ) exitWith { waitUntil { !isNil "T8SME_server_var_arrayCleanup" }; [] spawn T8SME_client_fnc_debugKeysAdd; [] spawn T8SME_client_fnc_debugSiteMarkers; };
