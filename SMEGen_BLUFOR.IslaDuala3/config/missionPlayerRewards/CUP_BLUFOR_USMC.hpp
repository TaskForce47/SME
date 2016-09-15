class CUP_BLUFOR_USMC {
  fullArsenal		   	= 0;
  missionReward01		= "CUP_B_M1133_MEV_Woodland_Slat";
  missionReward02		= "CUP_RG31_M2_OD";
  missionReward03		= "CUP_B_UH60L_FFV_US";

  class base_reward {
    BackpackReward[]  = {};
    ItemReward[]      = {};
    MagazineReward[]	= {};
    WeaponReward[]		= {};
  };

  class startingGear : base_reward {
    BackpackReward[] = {
      "CUP_B_AssaultPack_Coyote"
    };
    ItemReward[] = {
      "B_UavTerminal",
      "ItemWatch",
      "ItemCompass",
      "ItemGPS",
      "ItemRadio",
      "ItemMap",
      "Binocular",
      "NVGoggles",
      "NVGoggles_OPFOR",
      "NVGoggles_INDEP",
      "ToolKit",
      "FirstAidKit",
      "Medikit",
      "V_Rangemaster_belt",
      "V_BandollierB_khk",
      "V_BandollierB_rgr",
      "V_BandollierB_cbr",
      "V_BandollierB_blk",
      "V_BandollierB_oli",
      "H_Booniehat_khk",
      "H_Booniehat_mcamo",
      "H_Booniehat_tan",
      "H_Booniehat_dgtl",
      "H_Cap_tan",
      "H_Cap_tan_specops_US",
      "H_Cap_khaki_specops_UK",
      "H_Cap_grn",
      "H_Cap_grn_BI",
      "H_Cap_blk_ION",
      "H_Cap_headphones",
      "H_MilCap_mcamo",
      "H_MilCap_gry",
      "H_MilCap_blue",
      "H_Bandanna_khk",
      "H_Bandanna_cbr",
      "H_Bandanna_sgg",
      "H_Bandanna_gry",
      "H_Bandanna_camo",
      "H_Bandanna_mcamo",
      "H_ShemagOpen_tan",
      "H_Beret_blk",
      "H_Watchcap_blk",
      "H_Watchcap_khk",
      "H_Watchcap_camo",
      "H_Shemag_olive_hs",
      "H_Shemag_olive",
      "H_Booniehat_oli",
      "H_Bandanna_sand",
      "H_Watchcap_cbr",
      "H_Cap_usblack",
      "CUP_H_FR_Bandana_Headset",
      "CUP_H_FR_BandanaGreen",
      "CUP_H_FR_BandanaWdl",
      "CUP_H_FR_BeanieGreen",
      "CUP_H_FR_BoonieMARPAT",
      "CUP_H_FR_BoonieWDL",
      "CUP_H_FR_Cap_Headset_Green",
      "CUP_H_FR_Cap_Officer_Headset",
      "CUP_H_USMC_Officer_Cap",
      "CUP_H_FR_Headband_Headset",
      "CUP_H_FR_Headset",
      "CUP_U_B_USMC_MARPAT_WDL_Kneepad",
      "CUP_U_B_USMC_MARPAT_WDL_RolledUp",
      "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad",
      "CUP_U_B_USMC_MARPAT_WDL_Sleeves",
      "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads",
      "CUP_U_B_USMC_Officer",
      "CUP_U_B_USMC_PilotOverall"
    };
    MagazineReward[] = {
      "CUP_M136_M",
      "CUP_7Rnd_45ACP_1911",
      "CUP_17Rnd_9x19_glock17",
      "CUP_15Rnd_9x19_M9",
      "CUP_30Rnd_9x19_MP5",
      "CUP_30Rnd_556x45_Stanag",
      "CUP_30Rnd_556x45_G36",
      "CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
      "CUP_30Rnd_TE1_Green_Tracer_556x45_G36",
      "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36",
      "CUP_100Rnd_556x45_BetaCMag",
      "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag",
      "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag",
      "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag",
      "30Rnd_556x45_Stanag",
      "30Rnd_556x45_Stanag_Tracer_Red",
      "30Rnd_556x45_Stanag_Tracer_Green",
      "30Rnd_556x45_Stanag_Tracer_Yellow",
      "CUP_20Rnd_556x45_Stanag",
      "CUP_HandGrenade_M67",
      "B_IR_Grenade",
      "Chemlight_green",
      "Chemlight_red",
      "Chemlight_yellow",
      "Chemlight_blue",
      "SmokeShell",
      "SmokeShellYellow",
      "SmokeShellRed",
      "SmokeShellGreen",
      "SmokeShellPurple",
      "SmokeShellBlue",
      "SmokeShellOrange",
      "CUP_TimeBomb_M",
      "CUP_PipeBomb_M",
      "DemoCharge_Remote_Mag"
    };
    WeaponReward[] = {
      "CUP_launch_M136",
      "CUP_hgun_Colt1911",
      "CUP_hgun_Glock17",
      "CUP_hgun_M9",
      "CUP_smg_MP5A5",
      "CUP_arifle_M16A2",
      "CUP_glaunch_M79"
    };
  };

  class CORPORAL : base_reward {
    ItemReward[] = {
      "CUP_V_B_MTV",
      "CUP_V_B_RRV_Light"
    };
    MagazineReward[] = {
      "CUP_1Rnd_StarCluster_White_M203",
      "CUP_1Rnd_StarCluster_Red_M203",
      "CUP_1Rnd_StarCluster_Green_M203",
      "CUP_1Rnd_StarFlare_White_M203",
      "CUP_1Rnd_StarFlare_Red_M203",
      "CUP_1Rnd_StarFlare_Green_M203",
      "CUP_1Rnd_HE_M203",
      "CUP_1Rnd_HEDP_M203",
      "CUP_FlareWhite_M203",
      "CUP_FlareGreen_M203",
      "CUP_FlareRed_M203",
      "CUP_FlareYellow_M203",
      "CUP_1Rnd_Smoke_M203",
      "CUP_1Rnd_SmokeRed_M203",
      "CUP_1Rnd_SmokeGreen_M203",
      "CUP_1Rnd_SmokeYellow_M203",
      "1Rnd_HE_Grenade_shell",
      "UGL_FlareWhite_F",
      "UGL_FlareGreen_F",
      "UGL_FlareRed_F",
      "UGL_FlareYellow_F",
      "UGL_FlareCIR_F",
      "1Rnd_Smoke_Grenade_shell",
      "1Rnd_SmokeRed_Grenade_shell",
      "1Rnd_SmokeGreen_Grenade_shell",
      "1Rnd_SmokeYellow_Grenade_shell",
      "1Rnd_SmokePurple_Grenade_shell",
      "1Rnd_SmokeBlue_Grenade_shell",
      "1Rnd_SmokeOrange_Grenade_shell"
    };
    WeaponReward[] = {
      "CUP_arifle_M16A2_GL"
    };
  };

  class SERGEANT : base_reward {
    BackpackReward[]	= {
      "CUP_B_USMC_AssaultPack"
    };
    ItemReward[] = {
      "CUP_optic_Eotech533",
      "CUP_optic_CompM2_Black",
      "CUP_optic_CompM4",
      "CUP_optic_TrijiconRx01_black",
      "CUP_optic_RCO",
      "CUP_muzzle_snds_M16",
      "CUP_bipod_Harris_1A2_L",
      "bipod_01_F_snd",
      "bipod_01_F_mtp",
      "bipod_01_F_blk",
      "CUP_V_B_RRV_Medic",
      "CUP_V_B_RRV_MG",
      "CUP_V_B_RRV_Officer",
      "CUP_V_B_RRV_Scout",
      "CUP_V_B_RRV_Scout2",
      "CUP_V_B_RRV_Scout3",
      "CUP_V_B_RRV_TL"
    };
    WeaponReward[] = {
      "CUP_arifle_M16A4_GL",
      "CUP_arifle_M16A4_Base",
      "CUP_srifle_Mk12SPR"
    };
  };

  class LIEUTENANT : base_reward {
    ItemReward[] = {
      "CUP_optic_SMAW_Scope",
      "CUP_H_USMC_Crew_Helmet",
      "CUP_H_USMC_Goggles_HelmetWDL",
      "CUP_H_USMC_Headset_GoggleW_HelmetWDL",
      "CUP_H_USMC_Headset_HelmetWDL",
      "CUP_H_USMC_Helmet_Pilot",
      "CUP_H_USMC_HelmetWDL"
    };
    MagazineReward[] = {
      "CUP_SMAW_HEAA_M",
      "CUP_SMAW_HEDP_M",
      "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
      "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
      "CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
      "CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
      "CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
      "CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
      "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
      "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
      "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
      "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1",
      "CUP_30Rnd_556x45_Stanag",
      "CUP_30Rnd_556x45_G36",
      "30Rnd_556x45_STANAG",
      "CUP_6Rnd_HE_M203",
      "CUP_6Rnd_Smoke_M203",
      "CUP_6Rnd_SmokeRed_M203",
      "CUP_6Rnd_SmokeGreen_M203",
      "CUP_6Rnd_SmokeYellow_M203"
    };
    WeaponReward[] = {
      "CUP_launch_Mk153Mod0",
      "CUP_lmg_M249",
      "CUP_glaunch_M32"
    };
  };

  class CAPTAIN : base_reward {
    ItemReward[] = {
      "CUP_V_B_PilotVest",
      "CUP_V_B_MTV_LegPouch",
      "CUP_V_B_MTV_Marksman",
      "CUP_V_B_MTV_MG",
      "CUP_V_B_MTV_Mine",
      "CUP_V_B_MTV_noCB",
      "CUP_V_B_MTV_Patrol",
      "CUP_V_B_MTV_PistolBlack",
      "CUP_V_B_MTV_Pouches",
      "CUP_V_B_MTV_TL",
      "CUP_optic_ACOG",
      "CUP_optic_ElcanM145",
      "CUP_optic_SB_11_4x20_PM",
      "CUP_H_FR_ECH"
    };
    MagazineReward[] = {
      "CUP_20Rnd_762x51_DMR",
      "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR",
      "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR",
      "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR",
      "CUP_20Rnd_TE1_White_Tracer_762x51_DMR",
      "20Rnd_762x51_Mag"
    };
    WeaponReward[] = {
      "CUP_srifle_M14",
      "CUP_arifle_M4A1_BUIS_GL",
      "CUP_arifle_M4A1_black"
    };
  };

  class MAJOR : base_reward {
    BackpackReward[] = {
      "CUP_B_USPack_Coyote",
      "CUP_B_USMC_MOLLE",
      "CUP_B_USMC_MOLLE_WDL"
    };
    ItemReward[] = {
      "CUP_optic_LeupoldMk4_CQ_T",
      "CUP_optic_LeupoldMk4",
      "CUP_optic_Leupold_VX3"
    };
    MagazineReward[] = {
      "CUP_20Rnd_762x51_B_M110",
      "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110",
      "CUP_20Rnd_TE1_Red_Tracer_762x51_M110",
      "CUP_20Rnd_TE1_Green_Tracer_762x51_M110",
      "CUP_20Rnd_TE1_White_Tracer_762x51_M110"
    };
    WeaponReward[] = {
      "CUP_srifle_M110",
      "CUP_srifle_DMR"
    };
  };

  class COLONEL : base_reward {
    MagazineReward[] = {
      "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
      "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
    };
    WeaponReward[] = {
      "CUP_lmg_M240"
    };
    ItemReward[] = {
      "CUP_optic_ELCAN_SpecterDR",
      "V_PlateCarrier1_rgr",
      "V_PlateCarrier2_rgr",
      "V_PlateCarrierSpec_rgr",
      "V_PlateCarrier1_blk",
      "V_PlateCarrierGL_rgr",
      "V_PlateCarrier3_rgr"
    };
  };

  class GENERAL : base_reward {
    ItemReward[] = {
      "CUP_optic_LeupoldMk4_10x40_LRT_Desert",
      "CUP_bipod_VLTOR_Modpod",
      "CUP_V_B_RRV_DA1",
      "CUP_V_B_RRV_DA2"
    };
    MagazineReward[] = {
      "CUP_5Rnd_762x51_M24",
      "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
      "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
    };
    WeaponReward[] = {
      "CUP_srifle_M24_des",
      "CUP_lmg_M60A4"
    };
  };
};
