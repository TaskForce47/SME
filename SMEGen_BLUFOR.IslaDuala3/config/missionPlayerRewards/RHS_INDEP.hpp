class RHS_INDEP {
  fullArsenal			  = 0;
  missionReward01		= "rhs_gaz66_ap2_vdv";
  missionReward02		= "rhs_btr60_vdv";
  missionReward03		= "RHS_Mi24P_CAS_vdv";

  class base_reward {
    BackpackReward[]	= {};
    ItemReward[]			= {};
    MagazineReward[]	= {};
    WeaponReward[]		= {};
  };

  class startingGear : base_reward {
    BackpackReward[] = {
      "rhs_assault_umbts"
    };
    ItemReward[] = {
      "ACE_SpareBarrel",
      "ACE_EarPlugs",
      "ToolKit",
      "ACE_wirecutter",
      "ACE_MapTools",
      "ACE_fieldDressing",
      "ACE_morphine",
      "ACE_epinephrine",
      "ACE_bloodIV",
      "ACE_microDAGR",
      "ACE_RangeTable_82mm",
      "ACE_NVG_Gen1",
      "ACE_NVG_Gen2",
      "ACE_NVG_Gen4",
      "ACE_NVG_Wide",
      "ACE_SpottingScope",
      "ACE_Tripod",
      "ACE_key_west",
      "ACE_ATragMX",
      "ACE_IR_Strobe_Item",
      "ACE_CableTie",
      "ACE_DAGR",
      "ACE_Clacker",
      "ACE_DefusalKit",
      "ACE_M26_Clacker",
      "ACE_DeadManSwitch",
      "ACE_Kestrel4500",
      "ACE_RangeCard",
      "FirstAidKit",
      "Medikit",
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
      "rhs_vydra_3m",
      "rhs_6sh92_digi",
      "rhs_6sh92",
      "V_BandollierB_cbr",
      "V_BandollierB_blk",
      "V_BandollierB_oli",
      "H_Booniehat_khk",
      "H_Booniehat_mcamo",
      "H_Booniehat_tan",
      "H_Booniehat_dgtl",
      "rhs_beanie_green",
      "rhs_acc_1p29",
      "rhs_Booniehat_flora",
      "CUP_H_FR_BandanaGreen",
      "rhs_uniform_gorka_r_y",
      "rhs_uniform_gorka_r_g",
      "rhs_uniform_flora_patchless",
      "rhs_uniform_flora_patchless_alt",
      "U_BG_Guerrilla_6_1",
      "U_BG_Guerilla2_3",
      "rhs_uniform_df15"
    };
    MagazineReward[] = {
      "rhs_weap_rshg2",
      "rhs_mag_9x18_12_57N181S",
      "rhs_30Rnd_545x39_AK",
      "rhs_30Rnd_545x39_7N10_AK",
      "rhs_30Rnd_545x39_AK_green",
      "rhs_mag_rgo","B_IR_Grenade",
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
      "DemoCharge_Remote_Mag"
    };
    WeaponReward[] = {
      "rhs_weap_rshg2",
      "rhs_weap_makarov_pmm",
      "rhs_weap_ak74m_2mag_camo"
    };
  };

  class CORPORAL : base_reward {
    ItemReward[] = {
      "H_HelmetSpecB_blk",
      "H_HelmetSpecB_paint2",
      "H_HelmetSpecB_paint1",
      "H_HelmetSpecB",
      "H_HelmetB_plain_blk",
      "H_HelmetB_plain_mcamo",
      "optic_Holosight",
      "optic_Holosight_smg",
      "muzzle_snds_acp",
      "muzzle_snds_H",
      "muzzle_snds_L"
    };
    WeaponReward[] = {
      "arifle_MX_Black_F",
      "arifle_MXC_Black_F",
      "arifle_MX_SW_Black_F"
    };
  };

  class SERGEANT : base_reward {
    ItemReward[] = {
      "bipod_01_F_snd",
      "bipod_01_F_mtp",
      "bipod_01_F_blk",
      "ACE_HuntIR_monitor"
    };
    MagazineReward[] = {
      "1Rnd_HE_Grenade_shell",
      "1Rnd_Smoke_Grenade_shell",
      "1Rnd_SmokeRed_Grenade_shell",
      "1Rnd_SmokeBlue_Grenade_shell",
      "ACE_HuntIR_M203"
    };
    WeaponReward[] = {
      "arifle_MXM_Black_F",
      "arifle_MXM_F",
      "arifle_MX_GL_F",
      "arifle_MX_GL_Black_F"
    };
  };

  class LIEUTENANT : base_reward {
    ItemReward[] = {
      "ACE_acc_pointer_green_IR",
      "ACE_acc_pointer_green",
      "ACE_acc_pointer_red",
      "B_Bergen_blk",
      "B_Bergen_sgg",
      "B_Bergen_rgr",
      "B_Bergen_mcamo",
      "optic_MRCO",
      "optic_Hamr",
      "optic_Arco",
      "V_Chestrig_khk",
      "V_Chestrig_oli",
      "V_Chestrig_blk",
      "V_Chestrig_rgr"
    };
  };

  class CAPTAIN : base_reward {
    ItemReward[] = {
      "muzzle_snds_B",
      "optic_DMS",
      "H_HelmetB_light_grass",
      "H_HelmetB_light_snakeskin",
      "H_HelmetB_light_desert",
      "H_HelmetB_light_black",
      "H_HelmetB_light_sand"
    };
    MagazineReward[] = {
      "20Rnd_762x51_Mag"
    };
    WeaponReward[] = {
      "srifle_DMR_02_F",
      "srifle_DMR_02_camo_F",
      "srifle_DMR_02_sniper_F",
      "srifle_DMR_03_tan_F",
      "srifle_DMR_03_khaki_F",
      "srifle_DMR_03_F"
    };
  };

  class MAJOR : base_reward {
    ItemReward[] = {
      "muzzle_snds_338_sand",
      "optic_AMS_snd"
    };
    MagazineReward[] = {
      "10Rnd_338_Mag"
    };
    WeaponReward[] = {
      "srifle_DMR_02_F",
      "srifle_DMR_02_camo_F",
      "srifle_DMR_02_sniper_F"
    };
  };

  class COLONEL : base_reward {
    MagazineReward[] = {
      "130Rnd_338_Mag"
    };
    WeaponReward[] = {
      "MMG_02_camo_F",
      "MMG_02_black_F",
      "MMG_02_sand_F"
    };
    ItemReward[] = {
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
      "V_PlateCarrierGL_blk",
      "V_PlateCarrierGL_mtp",
      "V_PlateCarrierSpec_blk",
      "V_PlateCarrierGL_mtp"
    };
  };
};
