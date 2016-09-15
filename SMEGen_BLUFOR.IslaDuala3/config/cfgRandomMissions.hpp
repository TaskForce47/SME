/*
 =======================================================================================================================

	SME.Gen - Small Military Encounter Genenerator

	File:		cfgRandomMissions.hpp
	Author:		T-800a
	E-Mail:		t-800a@gmx.net

 =======================================================================================================================
*/

class cfgRandomMissions
{
	class missionConfig
	{

	// --------------------------------------------------------------
	//	missionConfig - BASE MISSION CONFIG
	//

	// player faction
	// 0 - East
	// 1 - West
	// 2 - Indep

		playerFaction				= 1;

	// default faction ( if not overwritten by mission Params )
	// find in < missionFactions.hpp > to change spawned units / add factions

		spawnUnitsFaction					= "vanilla_OPFOR_URBAN";
		spawnUnitsFactionFriendly	= "vanilla_BLUFOR_ACE";

	// default gear/reward set ( if not overwritten by mission Params )
	// find in < missionPlayerRewards.hpp > to change

		playerRewardSet				= "vanilla_fullArsenal";

	// missions "won" needed for new vehicle
		serverRewardSuccesses	= 3;

	// amount of spawned mission AOs
		spawnedSitesCount			= 2;

	// delays in minutes between a finished set of AOs will be cleanded,
	// and a new set will be spawned

		missionCleanDelay			= 4;	// minutes
		missionSpawnDelay			= 2;	// minutes

	// modificators will affect spawned group sizes
	//
	// _mod = ceil(((( _playerCount / !spawnModPlayer! ) * 2 ) * (( _groupCount / !spawnModGroup! ) * 2 )) * 2 );
	//

		spawnModPlayer				= 5;
		spawnModGroup					= 15;

	// slot restrictions

		adminWhitelist[]				= {};
		pilotWhitelist01[]			= {};
		pilotWhitelist02[]			= {};

	// vehicle restrictions

		whitelistHelicopter[]		= {};
		whitelistJet[]					= {};
		whitelistCar[]					= {};
		whitelistAPC[]					= {};
		whitelistTruck[]				= {};
		whitelistArmor[]				= {};

	// rewards vehicle restriction

		missionRewardRestriction01	= "";
		missionRewardRestriction02	= "";
		missionRewardRestriction03	= "";

	};

	// --------------------------------------------------------------
	//
	//	MISSION PLAYER REWARDS
	//

	#include <missionPlayerRewards.hpp>

	// --------------------------------------------------------------
	//
	//	MISSION SITES
	//

	#include <missionSites.hpp>

	// --------------------------------------------------------------
	//
	//	MISSION TYPES
	//

	#include <missionTypes.hpp>

	// --------------------------------------------------------------
	//
	//	MISSION FACTIONS
	//

	#include <missionFactions.hpp>

	// --------------------------------------------------------------
	//	END OF CONFIG
};
