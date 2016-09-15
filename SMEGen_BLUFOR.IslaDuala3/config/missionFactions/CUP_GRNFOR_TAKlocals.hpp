class CUP_GRNFOR_TAKlocals : base_faction {
  spawnUnitsSide = GRNFOR;

  class units : units {
    OFFICER		 		= "CUP_I_TK_GUE_Commander";
    SQUADLEADER  	= "CUP_I_TK_GUE_Soldier_TL";
    TEAMLEADER	 	= "CUP_I_TK_GUE_Soldier_TL";
    CORPSMAN	 		= "CUP_I_TK_GUE_Guerilla_Medic";
    MARKSMAN	 		= "CUP_I_TK_GUE_Sniper";
    HEAVYMG		 		= "CUP_I_TK_GUE_Soldier_MG";
    LIGHTMG		 		= "CUP_I_TK_GUE_Soldier_AR";
    ANTITANK	 		= "CUP_I_TK_GUE_Soldier_HAT";
    ANTIPERSON	 	= "CUP_I_TK_GUE_Soldier_AT";
    ANTIAIR		 		= "CUP_I_TK_GUE_Soldier_AA";
    GRENADIER	 		= "CUP_I_TK_GUE_Soldier_GL";
    RIFLEMAN	 		= "CUP_I_TK_GUE_Soldier";

    OFFROAD		 		= "CUP_C_Datsun_Tubeframe";
    OFFROAD_A	 		= "CUP_I_Datsun_PK_TK";

    APC_SMALL			= "CUP_I_BRDM2_HQ_TK_Gue";
    APC_MEDIUM		= "CUP_I_BRDM2_TK_Gue";
    APC_HEAVY			= "CUP_I_BMP1_TK_GUE";
  };

  class vehicles : vehicles {
    EMPTY_OFFROAD			= "CUP_C_Datsun_Tubeframe";
    EMPTY_OFFROAD_A		= "CUP_O_UAZ_MG_TKA";
    EMPTY_TRUCK				= "CUP_O_Ural_SLA";
    EMPTY_TRUCK_AMMO	= "CUP_O_Ural_Reammo_SLA";
    EMPTY_TRUCK_FUEL	= "CUP_O_Ural_Refuel_SLA";
    EMPTY_MORTAR			= "CUP_I_2b14_82mm_TK_GUE";
    EMPTY_HMG_HIGH		= "CUP_I_DSHKM_TK_GUE";
    EMPTY_HELI_TRANS	= "CUP_I_UH1H_TK_GUE";
  };
};
