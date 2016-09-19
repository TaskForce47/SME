/*
 =======================================================================================================================

	SME.Gen - Small Military Encounter Genenerator

	File:		initParams.sqf
	Author:		T-800a
	E-Mail:		t-800a@gmx.net

 =======================================================================================================================
*/


// faction used to spawn enemy units
switch ( "param_enemy" call BIS_fnc_getParamValue ) do {
	case   0 :	{ T8SME_param_enemyFaction = "vanilla_OPFOR"; };
	case   1 :	{ T8SME_param_enemyFaction = "vanilla_OPFOR_URBAN"; };
	case   2 :	{ T8SME_param_enemyFaction = "vanilla_OPFOR_GUER"; };
	case   3 :	{ T8SME_param_enemyFaction = "vanilla_INDEP"; };
	case   4 :	{ T8SME_param_enemyFaction = "vanilla_INDEP_GUER"; };
	case   5 :	{ T8SME_param_enemyFaction = "CUP_OPFOR_TAKarmy"; };
	case   6 :	{ T8SME_param_enemyFaction = "CUP_GRNFOR_TAKlocals"; };
	case   7 :	{ T8SME_param_enemyFaction = "CUP_GRNFOR_NAPA"; };

	case 100 :	{ T8SME_param_enemyFaction = "vanilla_BLUFOR"; };
	case 110 :	{ T8SME_param_enemyFaction = "CUP_BLUFOR_USMC"; };

	case 200 :	{ T8SME_param_enemyFaction = "RHS_OPFOR_EMR"; };

	case 220 :	{ T8SME_param_enemyFaction = "RHS_BLUFOR_ARMY_OCP"; };

	default		{ T8SME_param_enemyFaction = getText ( missionConfigFile >> "cfgRandomMissions" >> "missionConfig" >> "spawnUnitsFaction" ); };
};

// reward / gearset
switch ( "param_reward" call BIS_fnc_getParamValue ) do {
	case   0 :	{ T8SME_param_playerRewardSet = "vanilla_BLUFOR"; };
	case   1 :	{ T8SME_param_playerRewardSet = "vanilla_BLUFOR_ACE"; };
	case   2 :	{ T8SME_param_playerRewardSet = "CUP_BLUFOR_USMC"; };

	case 200 : 	{ T8SME_param_playerRewardSet = "RHS_BLUFOR_USARMY"; };

	case 900 :	{ T8SME_param_playerRewardSet = "vanilla_fullArsenal"; };
	case 901 :	{ T8SME_param_playerRewardSet = "CUP_BLUFOR_USMC_fullArsenal"; };
	case 902 :	{ T8SME_param_playerRewardSet = "RHS_INDEP_fullArsenal"; };

	default		{ T8SME_param_playerRewardSet = getText ( missionConfigFile >> "cfgRandomMissions" >> "missionConfig" >> "playerRewardSet" ); };
};

// Simultaneous Mission Sites
switch ( "param_sites" call BIS_fnc_getParamValue ) do {
	case 0 :	{ T8SME_param_amountSites = 1; };
	case 1 :	{ T8SME_param_amountSites = 2; };
	case 2 :	{ T8SME_param_amountSites = 3; };
	case 3 :	{ T8SME_param_amountSites = 4; };
	default		{ T8SME_param_amountSites = getNumber ( missionConfigFile >> "cfgRandomMissions" >> "missionConfig" >> "spawnedSitesCount" ); };
};

// AI Skill
// overwrite T8U base settings
private [ "_AIskill" ];
switch ( "param_skill" call BIS_fnc_getParamValue ) do {
	case 0 :	{ _AIskill = 0; };
	case 1 :	{ _AIskill = 1; };
	case 2 :	{ _AIskill = 2; };
	default		{ _AIskill = 0; };
};
T8U_var_Presets = [[ _AIskill, 1 ], [ _AIskill, 1 ], [ _AIskill, 1 ]];

// Keep Loadout After Respawn
switch ( "param_loadout" call BIS_fnc_getParamValue ) do {
	case 0 :	{ T8SME_param_keepRespawnLoadout = true; };
	case 1 :	{ T8SME_param_keepRespawnLoadout = false; };
	default		{ T8SME_param_keepRespawnLoadout = true; };
};

// Allow Vehicle Patrols
switch ( "param_vehiclepatrols" call BIS_fnc_getParamValue ) do {
	case 0 :	{ T8SME_param_allowVehiclePatrols = true; };
	case 1 :	{ T8SME_param_allowVehiclePatrols = false; };
	default		{ T8SME_param_allowVehiclePatrols = true; };
};

switch ("param_radio_system" call BIS_fnc_getParamValue) do {
	case 0 : {T8SME_param_radio_system = "None";};
	case 1 : {T8SME_param_radio_system = "TFAR";};
	case 2 : {T8SME_param_radio_system = "ACRE_2";};
	default {T8SME_param_radio_system = "ACRE_2";};
};
// faction used by the players (set in the cfgRandomMissions.hpp)
T8SME_param_playerFaction	= getNumber ( missionConfigFile >> "cfgRandomMissions" >> "missionConfig" >> "playerFaction" );

// other scripts can check this
T8SME_param_INIT = true;
