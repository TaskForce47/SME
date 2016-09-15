class vanilla_INDEP : base_faction {
  spawnUnitsSide = GRNFOR;

  class units : units {
    OFFICER		 		= "I_officer_F";
    SQUADLEADER 	= "I_Soldier_SL_F";
    TEAMLEADER	 	= "I_Soldier_TL_F";
    CORPSMAN	 		= "I_medic_F";
    MARKSMAN	 		= "I_Soldier_M_F";
    HEAVYMG		 		= "I_Soldier_AR_F";
    LIGHTMG		 		= "I_Soldier_AR_F";
    ANTITANK	 		= "I_Soldier_AT_F";
    ANTIPERSON 		= "I_Soldier_LAT_F";
    ANTIAIR		 		= "I_Soldier_AA_F";
    GRENADIER	 		= "I_Soldier_GL_F";
    RIFLEMAN	 		= "I_Soldier_F";

    OFFROAD		 		= "I_MRAP_03_F";
    OFFROAD_A	 		= "I_MRAP_03_hmg_F";

    APC_SMALL			= "I_MRAP_03_hmg_F";
    APC_MEDIUM		= "I_APC_Wheeled_03_cannon_F";
    APC_HEAVY			= "I_APC_tracked_03_cannon_F";
  };

  class vehicles : vehicles {
    EMPTY_TRUCK				= "I_Truck_02_transport_F";
    EMPTY_TRUCK_AMMO	= "I_Truck_02_ammo_F";
    EMPTY_TRUCK_FUEL	= "I_Truck_02_fuel_F";

    EMPTY_HELI_TRANS	= "I_Heli_Transport_02_F";
  };
};
