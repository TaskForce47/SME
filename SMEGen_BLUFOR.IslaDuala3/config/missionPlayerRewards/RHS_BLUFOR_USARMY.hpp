class RHS_BLUFOR_USARMY {
  fullArsenal				= 0;
  missionReward01		= "";
  missionReward02		= "";
  missionReward03		= "";

  class base_reward {
    BackpackReward[]	= {};
    ItemReward[]			= {};
    MagazineReward[]	= {};
    WeaponReward[]		= {};
  };

  class startingGear : base_reward {
    BackpackReward[] = {
      //BACKPACKS
      "B_AssaultPack_cbr",
      "B_AssaultPack_rgr",
      "B_AssaultPack_mcamo",
      "B_AssaultPack_blk",
      "B_UAV_01_backpack_F",
      "rhsusf_assault_eagleaiii_ocp",
      "B_Static_Designator_01_weapon_F",
      "RHS_M2_Gun_Bag",
      "RHS_M2_Tripod_Bag",
      "RHS_M2_MiniTripod_Bag",
      "RHS_Mk19_Gun_Bag",
      "RHS_Mk19_Tripod_Bag",
      "tf_rt1523g_big_rhs",
      "tf_rt1523g_rhs",
      "B_Kitbag_cbr",
      "B_Kitbag_cbr",
      "B_Kitbag_rgr",
      "B_Kitbag_mcamo",
      "B_Parachute",
      "ACE_TacticalLadder_Pack",
      "ACE_NonSteerableParachute",

      "B_Mortar_01_support_F",
      "B_Mortar_01_weapon_F"
    };
    ItemReward[] = {
      //UNIFORM
      "rhs_uniform_cu_ocp",
      "rhs_uniform_cu_ocp_101st",
      "rhs_uniform_cu_ocp_10th",
      "rhs_uniform_cu_ocp_1stcav",
      "rhs_uniform_cu_ocp_82nd",
      "U_B_GhillieSuit",
      "U_B_Wetsuit",
      "U_B_FullGhillie_lsh",
      "U_B_FullGhillie_sard",
      "U_B_FullGhillie_ard",
      "U_B_PilotCoveralls",
      "U_B_HeliPilotCoveralls",

      //VESTS
      "rhsusf_iotv_ocp_Grenadier",
      "rhsusf_iotv_ocp_Medic",
      "rhsusf_iotv_ocp",
      "rhsusf_iotv_ocp_Repair",
      "rhsusf_iotv_ocp_Rifleman",
      "rhsusf_iotv_ocp_SAW",
      "rhsusf_iotv_ocp_Squadleader",
      "rhsusf_iotv_ocp_Teamleader",

      "V_Chestrig_khk",
      "V_Chestrig_rgr",
      "V_Rangemaster_belt",
      "V_RebreatherB",
      "V_TacVestIR_blk",

      //HEADGEAR
      "rhsusf_ach_helmet_ocp",
      "rhsusf_ach_helmet_ESS_ocp",
      "rhsusf_ach_helmet_headset_ocp",
      "rhsusf_ach_helmet_headset_ess_ocp",
      "rhsusf_ach_helmet_camo_ocp",
      "rhsusf_cvc_green_helmet",
      "rhsusf_cvc_green_ess",
      "rhsusf_cvc_helmet",
      "rhsusf_cvc_ess",
      "rhs_Booniehat_ocp",
      "rhsusf_Bowman",
      "rhsusf_bowman_cap",
      "H_CrewHelmetHeli_B",
      "H_PilotHelmetHeli_B",
      "rhsusf_mich_bare_norotos",
      "rhsusf_mich_bare_norotos_arc",
      "rhsusf_mich_bare_norotos_tan",
      "rhsusf_mich_bare_norotos_arc_tan",
      "rhsusf_opscore_02",
      "rhsusf_opscore_01",
      "rhsusf_opscore_02_tan",
      "rhsusf_opscore_01_tan",
      "rhsusf_opscore_04_ocp",
      "rhsusf_opscore_03_ocp",
      "rhsusf_patrolcap_ocp",
      "rhsusf_patrolcap_ucp",
      "H_PilotHelmetFighter_B",
      "tf47_beret",

      //GOOGLES
      "rhs_googles_orange",
      "rhs_googles_yellow",
      "rhs_googles_clear",
      "rhs_googles_black",
      "G_Bandanna_beast",
      "G_Bandanna_tan",
      "G_Bandanna_oli",
      "G_Bandanna_khk",
      "G_B_Diving",

      //NVGs
      "rhsusf_ANPVS_14",
      "rhsusf_ANPVS_15",
      //"ACE_NVG_Wide",
      //"UK3CB_BAF_HMNVS",

      //BINOCULARS
      "Rangefinder",
      "Binocular",
      "Laserdesignator",
      "lerca_1200_black",
      "lerca_1200_tan",
      "Leupold_Mk4",
      "ACE_Vector",
      "ACE_Yardage450",
      "ACE_MX2A",

      //MAP
      "ItemMap",

      //GPSs
      "ItemGPS",
      "B_UavTerminal",

      //COPASS
      "ItemCompass",

      //RADIOS
      "tf_anprc152",
      "tf_rf7800str",

      //WATCHES
      "ItemWatch",
      "tf_microdagr",
      "ACE_Altimeter",

      //ACE Stuff
      "ACE_RangeCard",
      "ACE_Kestrel4500",
      "ACE_EarPlugs",
      "ACE_DefusalKit",
      "ACE_Clacker",
      "ACE_DAGR",
      "ACE_CableTie",
      "ACE_IR_Strobe_Item",
      "ACE_ATragMX",
      "ACE_Tripod",
      "ACE_SpottingScope",
      "ACE_Sandbag_empty",
      "ACE_SpareBarrel",
      "ACE_RangeTable_82mm",
      "ACE_microDAGR",
      "ACE_bodyBag",
      "ACE_surgicalKit",
      "ACE_personalAidKit",
      "ACE_quikclot",
      "ACE_salineIV_250",
      "ACE_salineIV_500",
      "ACE_salineIV",
      "ACE_bloodIV_250",
      "ACE_bloodIV_500",
      "ACE_bloodIV",
      "ACE_plasmaIV_250",
      "ACE_plasmaIV_500",
      "ACE_plasmaIV",
      "ACE_epinephrine",
      "ACE_Adenosine",
      "ACE_morphine",
      "ACE_tourniquet",
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_fieldDressing",
      "ACE_MapTools",
      "ACE_wirecutter",
      "ACE_UAVBattery",
      "ACE_HuntIR_monitor",
      "ACE_Banana",
      "ToolKit",
      "MineDetector",
      "ACE_Flashlight_MX991",
      "ACE_Flashlight_KSF1",
      "ACE_Flashlight_XL50",
      "ACE_SpraypaintBlack",
      "ACE_SpraypaintBlue",
      //"ACE_EntrenchingTool",
      "ACE_SpraypaintGreen",
      "ACE_SpraypaintRed",
      "ACE_Sandbag_empty",

      //ATACHMENTS Pistol
      "muzzle_snds_acp",
      "optic_MRD",

      //ATACHMENTS Rifle
      "rhsusf_acc_SR25S",
      "rhsusf_acc_anpeq15side",
      "rhsusf_acc_anpeq15",
      "rhsusf_acc_anpeq15_light",
      "rhsusf_acc_LEUPOLDMK4",
      "rhsusf_acc_LEUPOLDMK4_2",
      "rhsusf_acc_LEUPOLDMK4_2_d",
      "rhsusf_acc_harris_bipod",
      "bipod_02_F_hex",
      "rhsusf_acc_ELCAN",
      "rhsusf_acc_ELCAN_pip",
      "rhsusf_acc_ACOG",
      "rhsusf_acc_ACOG_pip",
      "rhsusf_acc_ACOG2",
      "rhsusf_acc_ACOG3",
      "rhsusf_acc_eotech_552",
      "rhsusf_acc_compm4",
      "rhsusf_acc_nt4_black",
      "rhsusf_acc_nt4_tan",
      "rhsusf_acc_SF3P556",
      "rhsusf_acc_SFMB556",
      "rhsusf_acc_M2010S",
      "optic_Holosight",

      "rhsusf_acc_M2010S",
      "optic_Holosight_smg",

      //ATTACHMENTS
      "tf47_optic_m3maaws",
      "tf47_smaw_optic",
      "tf47_optic_smaw",
      "tf47_smaw_optic",
      "tf47_optic_smaw",
      "tf47_smaw_optic",
      "tf47_optic_smaw",
      "tf47_smaw_optic",

      "optic_AMS",
      "optic_LRPS",
      "optic_KHS_blk",
      "muzzle_snds_L"
    };
    MagazineReward[] = {
      // Mortar
      "ACE_1Rnd_82mm_Mo_HE",
      "ACE_1Rnd_82mm_Mo_Smoke",
      "ACE_1Rnd_82mm_Mo_Illum",
      "ACE_1Rnd_82mm_Mo_HE_Guided",
      "ACE_1Rnd_82mm_Mo_HE_LaserGuided",

      //LAUNCHER AMMO
      "rhs_fim92_mag",
      "tf47_m3maaws_HEAT",
      "tf47_m3maaws_HEDP",
      "tf47_m3maaws_HE",
      "tf47_m3maaws_SMOKE",
      "tf47_m3maaws_ILLUM",
      // "tf47_at4_m_HEAT",
      // "tf47_at4_m_HEDP",
      // "tf47_at4_m_HP",
      "tf47​​_smaw_heaa",
      "tf47_smaw_hedp",
      "tf47_smaw_sr​",
      "tf47_smaw_sr​_",
      "tf47_smaw_HEAA",
      "tf47_smaw_HEDP",
      "tf47_smaw_SR",
      "UK3CB_BAF_1Rnd_81mm_Mo_Flare_white",
      "UK3CB_BAF_1Rnd_81mm_Mo_Smoke_white",
      "UK3CB_BAF_1Rnd_81mm_Mo_shells",

      "UK3CB_BAF_32Rnd_40mm_G_Box",
      "UK3CB_BAF_32Rnd_40mm_G_Box",
      "UK3CB_BAF_100Rnd_127x99_Box",

      //PISTOL AMMO
      "rhsusf_mag_15Rnd_9x19_FMJ",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_17Rnd_9x19_JHP",
      "rhsusf_mag_17Rnd_9x19_FMJ",

      //RIFLE AMMO
      "rhsusf_20Rnd_762x51_m118_special_Mag",
      "rhsusf_20Rnd_762x51_m993_Mag",
      "rhs_mag_30Rnd_556x45_Mk318_Stanag",
      "rhs_mag_30Rnd_556x45_Mk262_Stanag",
      "rhs_mag_30Rnd_556x45_M855A1_Stanag",
      "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
      "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
      "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
      "rhs_mag_30Rnd_556x45_M200_Stanag",
      "rhsusf_5Rnd_300winmag_xm2010",
      "rhsusf_50Rnd_762x51",
      "rhsusf_50Rnd_762x51_m993",
      "rhsusf_50Rnd_762x51_m80a1epr",
      "rhsusf_100Rnd_762x51",
      "rhsusf_100Rnd_762x51_m993",
      "rhsusf_100Rnd_762x51_m80a1epr",
      "rhsusf_200Rnd_556x45_soft_pouch",
      "rhsusf_100Rnd_556x45_M200_soft_pouch",
      "rhsusf_100Rnd_556x45_soft_pouch",
      "rhs_200rnd_556x45_T_SAW",
      "rhs_200rnd_556x45_B_SAW",
      "rhs_200rnd_556x45_M_SAW",
      "rhsusf_8Rnd_00Buck",
      "rhsusf_8Rnd_doomsday_Buck",
      "rhsusf_8Rnd_Slug",
      "rhsusf_8Rnd_HE",
      "rhsusf_8Rnd_FRAG",
      "rhs_weap_M590_8RD",
      "rhs_weap_M590_5RD",
      "30Rnd_45ACP_Mag_SMG_01",
      "30Rnd_45ACP_Mag_SMG_01_Tracer_Green",
      "30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
      "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
      "30Rnd_556x45_Stanag",
      "30Rnd_9x21_Mag",

      "30Rnd_45ACP_Mag_SMG_01",

      //ULG Ammo
      "rhs_mag_M441_HE",
      "rhs_mag_M433_HEDP",
      "rhs_mag_m4009",
      "rhs_mag_m576",
      "UGL_FlareCIR_F",
      "UGL_FlareWhite_F",
      "UGL_FlareGreen_F",
      "UGL_FlareRed_F",
      "UGL_FlareYellow_F",
      "1Rnd_Smoke_Grenade_shell",
      "1Rnd_SmokeRed_Grenade_shell",
      "1Rnd_SmokeGreen_Grenade_shell",
      "1Rnd_SmokeYellow_Grenade_shell",
      "1Rnd_SmokePurple_Grenade_shell",
      "1Rnd_SmokeBlue_Grenade_shell",
      "1Rnd_SmokeOrange_Grenade_shell",
      "ACE_HuntIR_M203",

      //Explosives
      "SatchelCharge_Remote_Mag",
      "ClaymoreDirectionalMine_Remote_Mag",
      "DemoCharge_Remote_Mag",
      "ATMine_Range_Mag",
      "ClaymoreDirectionalMine_Remote_Mag",
      "APERSBoundingMine_Range_Mag",
      "SLAMDirectionalMine_Wire_Mag",
      "APERSTripMine_Wire_Mag",
      "APERSMine_Range_Mag",

      //GRENADES
      "rhs_mag_m67",
      "ACE_M84",
      "rhs_mag_an_m14_th3",
      "rhs_mag_m7a3_cs",
      "rhs_mag_an_m8hc",
      "rhs_mag_m18_green",
      "rhs_mag_m18_red",
      "rhs_mag_m18_purple",
      "rhs_mag_m18_yellow",
      "rhs_mag_mk3a2",
      "ACE_HandFlare_White",
      "ACE_HandFlare_Red",
      "ACE_HandFlare_Green",
      "ACE_HandFlare_Yellow",
      "rhs_mag_m69",
      "Chemlight_green",
      "Chemlight_red",
      "Chemlight_yellow",
      "Chemlight_blue",
      "B_IR_Grenade",

      //LASER BATTERIES
      "Laserbatteries"
    };
    WeaponReward[] = {
      //PISTOLS
      "rhs_weap_M320",
      "rhsusf_weap_m9",
      "rhsusf_weap_glock17g4",

      //LAUNCHER
      "rhs_weap_fim92",
      "tf47_m3maaws",
      "tf47_optic_m3maaws",
      "tf47_at4_heat",
      "tf47_at4_HEDP",
      "tf47_at4_HP",

      //PRIMARY
      "rhs_weap_sr25_ec",
      "rhs_weap_m14ebrri",
      "rhs_weap_XM2010",
      "rhs_weap_XM2010_wd",
      "rhs_weap_XM2010_wd",
      "rhs_weap_XM2010_d",
      "rhs_weap_m240B",
      "rhs_weap_m240B_CAP",
      "rhs_weap_m240G",
      "rhs_weap_m249_pip_L",
      "rhs_weap_m249_pip_L_para",
      "rhs_weap_m249_pip_L_vfg",
      "rhs_weap_m249_pip_S",
      "rhs_weap_m249_pip_S_para",
      "rhs_weap_m249_pip_S_vfg",
      "rhs_weap_m4",
      "rhs_weap_m4_grip2",
      "rhs_weap_m4_grip",
      "rhs_weap_m4_carryhandle",
      "rhs_weap_m4_carryhandle_pmag",
      "rhs_weap_m4_m203",
      "rhs_weap_m4_m320",
      "rhs_weap_m4a1_carryhandle",
      "rhs_weap_m4a1_carryhandle_grip2",
      "rhs_weap_m4a1_carryhandle_grip",
      "rhs_weap_m4a1_carryhandle_pmag",
      "rhs_weap_m4a1_carryhandle_m203",
      "rhs_weap_m4a1",
      "rhs_weap_m4a1_grip2",
      "rhs_weap_m4a1_grip",
      "rhs_weap_m4a1_m203",
      "rhs_weap_m4a1_m320",
      "SMG_01_F"
    };
  };

  class CORPORAL : base_reward {
  };

  class SERGEANT : base_reward {
  };

  class LIEUTENANT : base_reward {
  };

  class CAPTAIN : base_reward {
  };

  class MAJOR : base_reward {
  };

  class COLONEL : base_reward {
  };

  class GENERAL : base_reward {
  };
};
