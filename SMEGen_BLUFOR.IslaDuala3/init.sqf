/*
 =======================================================================================================================

	SME.Gen - Small Military Encounter Genenerator

	File:		init.sqf
	Author:		T-800a
	E-Mail:		t-800a@gmx.net

 =======================================================================================================================
*/

// viewDistance settings (addons / scripts)
tawvd_disablenone	= true;
CHVD_allowNoGrass	= false;		// Set 'false' if you want to disable "None" option for terrain (default: true)
CHVD_maxView		= 3500;			// Set maximum view distance (default: 12000)
CHVD_maxObj			= 2500;			// Set maximimum object view distance (default: 12000)

CIVILIAN setFriend [ WEST, 1 ];
CIVILIAN setFriend [ EAST, 1 ];
CIVILIAN setFriend [ RESISTANCE, 1 ];

// initialize BIS Dynamic Groups
waitUntil { time > 5 };
if ( isServer ) then { [ "Initialize", [ true ]] spawn BIS_fnc_dynamicGroups; };
if ( hasInterface ) then { [ "InitializePlayer", [ player, true ]] spawn BIS_fnc_dynamicGroups; };
