class RHS_BLUFOR_ARMY_OCP : vanilla_BLUFOR {
  spawnUnitsSide	= BLUFOR;

  class units : units {
    OFFICER				= "rhsusf_army_ocp_officer";
    SQUADLEADER		= "rhsusf_army_ocp_squadleader";
    TEAMLEADER		= "rhsusf_army_ocp_teamleader";
    CORPSMAN			= "rhsusf_army_ocp_medic";
    MARKSMAN			= "rhsusf_army_ocp_marksman";
    HEAVYMG				= "rhsusf_army_ocp_machinegunner";
    LIGHTMG				= "rhsusf_army_ocp_autorifleman";
    ANTITANK			= "rhsusf_army_ocp_javelin";
    ANTIPERSON		= "rhsusf_army_ocp_riflemanat";
    ANTIAIR				= "rhsusf_army_ocp_aa";
    GRENADIER			= "rhsusf_army_ocp_grenadier";
    RIFLEMAN			= "rhsusf_army_ocp_rifleman_m16";

    OFFROAD				= "rhsusf_m1025_d";
    OFFROAD_A			= "rhsusf_m1025_d_m2";

    APC_SMALL			= "rhsusf_m113d_usarmy_M240";
    APC_MEDIUM		= "rhsusf_rg33_m2_d";
    APC_HEAVY			= "RHS_M2A3_BUSKI";
  };

  class vehicles : vehicles {
    EMPTY_OFFROAD			= "rhsusf_m1025_d";
    EMPTY_OFFROAD_A		= "rhsusf_m1025_d_m2";
    EMPTY_TRUCK				= "rhsusf_M1078A1P2_B_d_fmtv_usarmy";
    EMPTY_TRUCK_AMMO	= "rhsusf_M1078A1P2_B_d_open_fmtv_usarmy";
    EMPTY_TRUCK_FUEL	= "rhsusf_M1083A1P2_d_flatbed_fmtv_usarmy";
//	EMPTY_MORTAR		= "";
    EMPTY_HMG_HIGH		= "RHS_M2StaticMG_D";
    EMPTY_HELI_TRANS	= "RHS_UH60M_d";
  };
};
