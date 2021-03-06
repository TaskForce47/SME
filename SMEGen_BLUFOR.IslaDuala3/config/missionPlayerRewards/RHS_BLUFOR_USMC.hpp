class RHS_BLUFOR_USMC {
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
      "B_AssaultPack_cbr",
      "B_AssaultPack_rgr",
      "B_AssaultPack_blk",
      "B_UAV_01_backpack_F",
      "rhsusf_assault_eagleaiii_coy",
      "B_Static_Designator_01_weapon_F",
      "RHS_M2_Gun_Bag",
      "RHS_M2_Tripod_Bag",
      "RHS_M2_MiniTripod_Bag",
      "RHS_Mk19_Gun_Bag",
      "RHS_Mk19_Tripod_Bag",
      "B_Kitbag_cbr",
      "B_Kitbag_cbr",
      "B_Kitbag_rgr",
      "B_Parachute",
      "ACE_TacticalLadder_Pack",
      "ACE_NonSteerableParachute"
    };
    ItemReward[] = {
      //UNIFORM
      "rhs_uniform_FROG01_d",
      "U_B_FullGhillie_ard",
      "U_B_PilotCoveralls",
      "U_B_HeliPilotCoveralls",
      "U_B_GhillieSuit",

      //VESTS
      "rhsusf_spc",
      "rhsusf_spc_rifleman",
      "rhsusf_spc_iar",
      "rhsusf_spc_corpsman",
      "rhsusf_spc_crewman",
      "rhsusf_spc_light",
      "rhsusf_spc_marksman",
      "rhsusf_spc_mg",
      "rhsusf_spc_squadleader",
      "rhsusf_spc_teamleader",
      "V_Chestrig_khk",
      "V_Chestrig_rgr",
      "V_TacVestIR_blk",

      //HEADGEAR
      "rhsusf_ach_helmet_M81",
      "rhsusf_cvc_green_helmet",
      "rhsusf_cvc_green_ess",
      "rhsusf_cvc_helmet",
      "rhsusf_cvc_ess",
      "rhs_Booniehat_m81",
      "rhs_Booniehat_marpatd",
      "rhs_Booniehat_marpatwd",
      "rhsusf_Bowman",
      "rhsusf_bowman_cap",
      "H_CrewHelmetHeli_B",
      "H_PilotHelmetHeli_B",

      "rhsusf_lwh_helmet_marpatd",
      "rhsusf_lwh_helmet_marpatd_ess",
      "rhsusf_lwh_helmet_marpatd_headset",

      "rhsusf_hgu56p",
      "rhsusf_hgu56p_mask",
      "RHS_jetpilot_usaf",
      "H_PilotHelmetFighter_B",
      "tf47_beret",

      //GOOGLES
      "rhs_googles_orange",
      "rhs_googles_yellow",
      "rhs_googles_clear",
      "rhs_googles_black",

      //NVGs
      "rhsusf_ANPVS_14",
      "rhsusf_ANPVS_15",

      //BINOCULARS
      "Rangefinder",
      "Binocular",
      "Laserdesignator",
      "lerca_1200_black",
      "lerca_1200_tan",
      "Leupold_Mk4",
      "ACE_Vector",
      "ACE_Yardage450",

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
      "ACE_Flashlight_KSF1",
      "ACE_Flashlight_MX991",
      "ACE_Flashlight_XL50",
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
      "ACE_atropine",
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

      //ATACHMENTS Pistol

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
      "rhsusf_acc_ACOG2_USMC",
      "rhsusf_acc_ACOG3_USMC",
      "rhsusf_acc_ACOG_USMC",
      "rhsusf_acc_ELCAN",
      "rhsusf_acc_ELCAN_pip",
      "rhsusf_acc_eotech_552",
      "rhsusf_acc_compm4",
      "rhsusf_acc_nt4_black",
      "rhsusf_acc_nt4_tan",
      "rhsusf_acc_SF3P556",
      "rhsusf_acc_SFMB556",
      "rhsusf_acc_M2010S",

      //ATTACHMENTS
      "rhs_weap_optic_smaw",
      "tf47_optic_smaw",
      "tf47_optic_m3maaws"
    };
    MagazineReward[] = {
      //LAUNCHER AMMO
      "tf47_smaw_HEAA",
      "tf47_smaw_HEDP",
      "tf47_smaw_SR",
      "tf47_smaw_NE",
      "tf_m3maaws_heat",
      "tf47_m3maaws_hedp",
      "tf47_m3maaws_he",
      "tf47_m3maaws_illum",
      "tf47_m3maaws_smoke",
      "rhs_mag_smaw_SR",
      "rhs_mag_smaw_HEAA",
      "rhs_mag_smaw_HEDP",
      "rhs_m136_mag",
      "rhs_m136_hedp_mag",
      "rhs_m136_hp_mag",
      "rhs_fim92_mag",
      "rhs_fgm148_magazine_AT",

      //PISTOL AMMO
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_17Rnd_9x19_JHP",
      "rhsusf_mag_17Rnd_9x19_FMJ",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_FMJ",

      //RIFLE AMMO
      "rhsusf_20Rnd_762x51_m118_special_Mag",
      "rhsusf_20Rnd_762x51_m993_Mag",
      "rhs_mag_30Rnd_556x45_Mk318_Stanag",
      "rhs_mag_30Rnd_556x45_Mk262_Stanag",
      "rhs_mag_30Rnd_556x45_M855A1_Stanag",
      "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
      "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
      "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
      "rhsusf_5Rnd_300winmag_xm2010",
      "rhsusf_50Rnd_762x51",
      "rhsusf_50Rnd_762x51_m993",
      "rhsusf_50Rnd_762x51_m80a1epr",
      "rhsusf_100Rnd_762x51",
      "rhsusf_100Rnd_762x51_m993",
      "rhsusf_100Rnd_762x51_m80a1epr",
      "rhsusf_200Rnd_556x45_soft_pouch",
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
      "20Rnd_556x45_UW_mag",
      "30Rnd_556x45_Stanag",
      "30Rnd_9x21_Mag",

      //ULG Ammo
      "ACE_HuntIR_M203",
      "rhs_mag_M441_HE",
      "rhs_mag_M433_HEDP",
      "rhs_mag_m4009",
      "rhs_mag_m576",
      "UGL_FlareCIR_F",
      "UGL_FlareWhite_F",
      "UGL_FlareGreen_F",
      "UGL_FlareRed_F",
      "UGL_FlareYellow_F",
      "1Rnd_HE_Grenade_shell",
      "1Rnd_Smoke_Grenade_shell",
      "1Rnd_SmokeRed_Grenade_shell",
      "1Rnd_SmokeGreen_Grenade_shell",
      "1Rnd_SmokeYellow_Grenade_shell",
      "1Rnd_SmokePurple_Grenade_shell",
      "1Rnd_SmokeBlue_Grenade_shell",
      "1Rnd_SmokeOrange_Grenade_shell",

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
      "rhsusf_weap_m1911a1",
      "rhs_weap_M320",
      "rhsusf_weap_glock17g4",
      "rhsusf_weap_m9",

      //LAUNCHER
      "tf47_at4_heat",
      "tf47_at4_hedp",
      "tf47_at4_hp",
      "tf47_smaw",
      "tf47_smaw_green",
      "tf47_m3maaws",
      "rhs_weap_smaw",
      "rhs_weap_M136",
      "rhs_weap_M136_hedp",
      "rhs_weap_M136_hp",
      "rhs_weap_fim92",
      "rhs_weap_fgm148",

      //PRIMARY
      "rhs_weap_sr25_ec",
      "rhs_weap_m14ebrri",
      "rhs_weap_m16a4",
      "rhs_weap_m16a4_grip",
      "rhs_weap_m16a4_carryhandle",
      "rhs_weap_m16a4_carryhandle_grip",
      "rhs_weap_m16a4_carryhandle_grip_pmag",
      "rhs_weap_m16a4_carryhandle_M203",
      "rhs_weap_m16a4_carryhandle_pmag",
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
      "rhs_weap_m27iar",
      "rhs_weap_M590_8RD",
      "rhs_weap_M590_5RD"
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
