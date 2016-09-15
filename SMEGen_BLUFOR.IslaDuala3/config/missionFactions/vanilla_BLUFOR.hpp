class vanilla_BLUFOR : base_faction	{
  spawnUnitsSide	= BLUFOR;

  class units : units	{
    OFFICER				= "B_officer_F";
    SQUADLEADER		= "B_Soldier_SL_F";
    TEAMLEADER		= "B_Soldier_TL_F";
    CORPSMAN			= "B_medic_F";
    MARKSMAN			= "B_Sharpshooter_F";
    HEAVYMG				= "B_HeavyGunner_F";
    LIGHTMG				= "B_Soldier_AR_F";
    ANTITANK			= "B_Soldier_AT_F";
    ANTIPERSON		= "B_Soldier_LAT_F";
    ANTIAIR				= "B_Soldier_AA_F";
    GRENADIER			= "B_Soldier_GL_F";
    RIFLEMAN			= "B_Soldier_F";

    OFFROAD				= "B_MRAP_01_F";
    OFFROAD_A			= "B_MRAP_01_hmg_F";

    APC_SMALL			= "B_MRAP_01_hmg_F";
    APC_MEDIUM		= "B_APC_Wheeled_01_cannon_F";
    APC_HEAVY			= "B_APC_Tracked_01_rcws_F";
  };

  class vehicles : vehicles	{
    EMPTY_OFFROAD			= "B_G_Offroad_01_F";
    EMPTY_OFFROAD_A		= "B_G_Offroad_01_armed_F";
    EMPTY_TRUCK				= "B_Truck_01_covered_F";
    EMPTY_TRUCK_AMMO	= "B_Truck_01_ammo_F";
    EMPTY_TRUCK_FUEL	= "B_Truck_01_fuel_F";
    EMPTY_MORTAR			= "B_Mortar_01_F";
    EMPTY_HMG_HIGH		= "B_HMG_01_high_F";
    EMPTY_HELI_TRANS	= "B_Heli_Transport_01_F";
  };
};
