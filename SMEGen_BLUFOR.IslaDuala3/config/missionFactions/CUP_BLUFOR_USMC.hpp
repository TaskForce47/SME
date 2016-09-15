class CUP_BLUFOR_USMC : vanilla_BLUFOR {
  spawnUnitsSide	= BLUFOR;

  class units : units {
    OFFICER				= "CUP_B_USMC_Officer";
    SQUADLEADER		= "CUP_B_USMC_Soldier_SL";
    TEAMLEADER		= "CUP_B_USMC_Soldier_TL";
    CORPSMAN			= "CUP_B_USMC_Medic";
    MARKSMAN			= "CUP_B_USMC_Soldier_Marksman";
    HEAVYMG				= "CUP_B_USMC_Soldier_MG";
    LIGHTMG				= "CUP_B_USMC_Soldier_AR";
    ANTITANK			= "CUP_B_USMC_Soldier_AT";
    ANTIPERSON		= "CUP_B_USMC_Soldier_LAT";
    ANTIAIR				= "CUP_B_USMC_Soldier_AA";
    GRENADIER			= "CUP_B_USMC_Soldier_GL";
    RIFLEMAN			= "CUP_B_USMC_Soldier";

    OFFROAD				= "CUP_B_HMMWV_Unarmed_USMC";
    OFFROAD_A			= "CUP_B_HMMWV_M1114_USMC";

    APC_SMALL			= "CUP_B_HMMWV_MK19_USMC";
    APC_MEDIUM		= "CUP_B_LAV25_USMC";
    APC_HEAVY			= "CUP_B_LAV25M240_USMC";
  };

  class vehicles : vehicles {
    EMPTY_OFFROAD			= "CUP_B_HMMWV_Unarmed_USMC";
    EMPTY_OFFROAD_A		= "CUP_B_HMMWV_M1114_USMC";
//	EMPTY_TRUCK				= "";
//	EMPTY_TRUCK_AMMO	= "";
//	EMPTY_TRUCK_FUEL	= "";
//	EMPTY_MORTAR			= "";
    EMPTY_HMG_HIGH		= "CUP_B_M2StaticMG_USMC";
    EMPTY_HELI_TRANS	= "CUP_B_MH60S_USMC";
  };
};
