class CUP_GRNFOR_NAPA : base_faction {
  spawnUnitsSide = GRNFOR;

  class units : units {
    OFFICER		 		= "CUP_I_GUE_Commander";
    SQUADLEADER  	= "CUP_I_GUE_Officer";
    TEAMLEADER	 	= "CUP_I_GUE_Soldier_AKM";
    CORPSMAN	 		= "CUP_I_GUE_Medic";
    MARKSMAN	 		= "CUP_I_GUE_Sniper";
    HEAVYMG		 		= "CUP_I_GUE_Soldier_MG";
    LIGHTMG		 		= "CUP_I_GUE_Soldier_AR";
    ANTITANK	 		= "CUP_I_GUE_Soldier_AT";
    ANTIPERSON	 	= "CUP_I_GUE_Soldier_AT";
    ANTIAIR		 		= "CUP_I_GUE_Soldier_AA";
    GRENADIER	 		= "CUP_I_GUE_Soldier_GL";
    RIFLEMAN	 		= "CUP_I_GUE_Soldier_AKS74";

    OFFROAD		 		= "CUP_C_Datsun_Tubeframe";
    OFFROAD_A	 		= "CUP_I_Datsun_PK_Random";

    APC_SMALL			= "CUP_I_BRDM2_HQ_NAPA";
    APC_MEDIUM		= "CUP_I_BRDM2_NAPA";
    APC_HEAVY			= "CUP_I_BMP2_NAPA";
  };

  class vehicles : vehicles {
    EMPTY_OFFROAD			= "CUP_C_Datsun_Tubeframe";
    EMPTY_OFFROAD_A		= "CUP_B_UAZ_MG_CDF";
    EMPTY_TRUCK				= "CUP_O_Ural_SLA";
    EMPTY_TRUCK_AMMO	= "CUP_O_Ural_Reammo_SLA";
    EMPTY_TRUCK_FUEL	= "CUP_O_Ural_Refuel_SLA";
    EMPTY_MORTAR			= "CUP_B_2b14_82mm_CDF";
    EMPTY_HMG_HIGH		= "CUP_I_DSHKM_NAPA";
    EMPTY_HELI_TRANS	= "CUP_I_UH1H_TK_GUE";
  };
};
