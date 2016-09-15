class vanilla_INDEP_GUER : vanilla_INDEP {
  spawnUnitsSide = GRNFOR;

  class units : units {
    OFFICER		 		= "I_G_officer_F";
    SQUADLEADER  	= "I_G_Soldier_SL_F";
    TEAMLEADER	 	= "I_G_Soldier_TL_F";
    CORPSMAN	 		= "I_G_medic_F";
    MARKSMAN	 		= "I_G_Soldier_M_F";
    HEAVYMG		 		= "I_G_Soldier_AR_F";
    LIGHTMG		 		= "I_G_Soldier_AR_F";
    ANTITANK	 		= "I_G_Soldier_LAT_F";
    ANTIPERSON	 	= "I_G_Soldier_LAT_F";
    ANTIAIR		 		= "I_G_Soldier_LAT_F";
    GRENADIER	 		= "I_G_Soldier_GL_F";
    RIFLEMAN	 		= "I_G_Soldier_F";

    OFFROAD		 		= "I_G_Offroad_01_F";
    OFFROAD_A	 		= "I_G_Offroad_01_armed_F";
  };

  class vehicles : vehicles {
    EMPTY_TRUCK				= "I_G_Van_01_transport_F";
    EMPTY_TRUCK_AMMO	= "I_Truck_02_ammo_F";
    EMPTY_TRUCK_FUEL	= "I_G_Van_01_fuel_F";
  };
};
