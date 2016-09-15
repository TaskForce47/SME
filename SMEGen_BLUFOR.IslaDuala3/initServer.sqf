/*
 =======================================================================================================================

	SME.Gen - Small Military Encounter Genenerator

	File:		initServer.sqf
	Author:		T-800a
	E-Mail:		t-800a@gmx.net

 =======================================================================================================================
*/


#include <initParams.sqf>


// initialize SME.Gen server
[] spawn T8SME_INIT_fnc_server;

// initialize garbage collecting ( bodies / wrecks now handled via BIS/description )
[] execVM "scripts\garbageCollector.sqf";
