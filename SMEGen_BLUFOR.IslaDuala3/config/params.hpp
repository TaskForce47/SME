/*
 =======================================================================================================================

	SME.Gen - Small Military Encounter Genenerator

	File:		params.hpp
	Author:		T-800a
	E-Mail:		t-800a@gmx.net


 =======================================================================================================================
*/


class Params
{
	class param_enemy {
		title			= "Enemy Faction";
		values[]	= { 0,      1,            2,               3,     4,                5,                			6,												7,						200,							999 };
		texts[]		= { "CSAT", "CSAT Urban", "CSAT Guerilla", "AAF", "AAF - Guerilla", "CUP - Takistan Army",	"CUP - Takistan Locals",	"CUP - NAPA",	"OPFOR RHS EMR",	"DEFAUL - CSAT Urban" };
		default		= 999;
	};

	class param_reward {
		title			= "Player Faction";
		values[]	= { 0,        2,					200,					999 };
		texts[]		= { "BLUFOR", "CUP USMC", "RHS USArmy",	"DEFAULT - BLUFOR" };
		default		= 999;
	};

	class param_sites	{
		title			= "Simultaneous Mission Sites";
		values[]	= { 0,        1,					2,					3,					999 };
		texts[]		= { "1 Site",	"2 Sites",	"3 Sites",	"4 Sites",	"DEFAULT - 2 Sites" };
		default		= 999;
	};

	class param_skill	{
		title			= "AI Skill";
		values[]	= { 0,          1,				2,								999 };
		texts[]		= { "Militia",	"Army",		"Special Forces",	"DEFAULT - Militia" };
		default		= 999;
	};

	class param_loadout	{
		title			= "Keep Loadout After Respawn";
		values[]	= { 0,			1,		999 };
		texts[]		= { "YES",	"NO",	"DEFAULT - Yes" };
		default		= 999;
	};

	class param_vehiclepatrols {
		title			= "Allow Vehicle Patrols";
		values[]	= { 0,					1,					999 };
		texts[]		= { "ENABLED",	"DISABLED",	"DEFAULT - ENABLED" };
		default		= 999;
	};

	class param_radio_system {
		title			= "Radio System";
		values[]	= {2,					999};
		texts[]		= {"ACRE 2",	"DEFAULT - ACRE 2"};
		default		= 999;
	};
};
