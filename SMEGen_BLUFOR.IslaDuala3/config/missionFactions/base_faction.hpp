class base_faction {
  spawnUnitsSide	= REDFOR;

  class units {
    OFFICER				= "O_officer_F";
    SQUADLEADER		= "O_Soldier_SL_F";
    TEAMLEADER		= "O_Soldier_TL_F";
    CORPSMAN			= "O_medic_F";
    MARKSMAN			= "O_Soldier_M_F";
    HEAVYMG				= "O_HeavyGunner_F";
    LIGHTMG				= "O_Soldier_AR_F";
    ANTITANK			= "O_Soldier_AT_F";
    ANTIPERSON		= "O_Soldier_LAT_F";
    ANTIAIR				= "O_Soldier_AA_F";
    GRENADIER			= "O_Soldier_GL_F";
    RIFLEMAN			= "O_Soldier_F";

    OFFROAD				= "O_MRAP_02_F";
    OFFROAD_A			= "O_MRAP_02_hmg_F";

    APC_SMALL			= "O_MRAP_02_hmg_F";
    APC_MEDIUM		= "O_APC_Wheeled_02_rcws_F";
    APC_HEAVY			= "O_APC_Tracked_02_cannon_F";
  };

  class vehicles {
    EMPTY_OFFROAD			= "O_G_Offroad_01_F";
    EMPTY_OFFROAD_A		= "O_G_Offroad_01_armed_F";
    EMPTY_TRUCK				= "O_Truck_02_covered_F";
    EMPTY_TRUCK_AMMO	= "O_Truck_02_ammo_F";
    EMPTY_TRUCK_FUEL	= "O_Truck_02_fuel_F";
    EMPTY_MORTAR			= "B_G_Mortar_01_F";
    EMPTY_HMG_HIGH		= "O_HMG_01_high_F";
    EMPTY_HELI_TRANS	= "O_Heli_Light_02_F";
  };
};
