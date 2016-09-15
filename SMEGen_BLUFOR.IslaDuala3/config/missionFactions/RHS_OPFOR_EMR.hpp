class RHS_OPFOR_EMR : base_faction {
  spawnUnitsSide	= REDFOR;

  class units : units {
    OFFICER		 		= "rhs_vdv_officer_armored";
    SQUADLEADER  	= "rhs_vdv_sergeant";
    TEAMLEADER	 	= "rhs_vdv_sergeant";
    CORPSMAN	 		= "rhs_vdv_medic";
    MARKSMAN	 		= "rhs_vdv_marksman";
    HEAVYMG		 		= "rhs_vdv_arifleman";
    LIGHTMG		 		= "rhs_vdv_machinegunner";
    ANTITANK	 		= "rhs_vdv_at";
    ANTIPERSON	 	= "rhs_vdv_grenadier_rpg";
    ANTIAIR		 		= "rhs_vdv_aa";
    GRENADIER	 		= "rhs_vdv_grenadier";
    RIFLEMAN	 		= "rhs_vdv_rifleman";

    OFFROAD		 		= "rhs_tigr_vdv";
    OFFROAD_A	 		= "rhs_tigr_sts_vdv";

    APC_SMALL			= "rhsgref_BRDM2_vdv";
    APC_MEDIUM		= "rhs_bmd2m";
    APC_HEAVY			= "rhs_bmp2_vdv";
  };

  class vehicles : vehicles {
    EMPTY_OFFROAD			= "rhs_tigr_vdv";
    EMPTY_OFFROAD_A		= "rhs_tigr_sts_vdv";
    EMPTY_TRUCK				= "rhs_gaz66_repair_vdv";
    EMPTY_TRUCK_AMMO	= "rhs_gaz66_ammo_vdv";
    EMPTY_TRUCK_FUEL	= "RHS_Ural_Fuel_VDV_01";
    EMPTY_MORTAR		  = "rhs_2b14_82mm_vdv";
    EMPTY_HMG_HIGH		= "rhs_KORD_high_VDV";
    EMPTY_HELI_TRANS	= "RHS_Mi8MTV3_vdv";
  };
};
