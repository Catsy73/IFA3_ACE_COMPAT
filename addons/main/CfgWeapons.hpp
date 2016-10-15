class CfgWeapons {

    class LIB_PISTOL;
    class LIB_P38: LIB_PISTOL {
        ACE_barrelTwist = 254;
        ACE_barrelLength = 125.0;
    };

    class LIB_M1908: LIB_P38 {
        ACE_barrelTwist = 254; //unknown
        ACE_barrelLength = 102.0;
    };

    class LIB_TT33: LIB_PISTOL {
        ACE_barrelTwist = 406.4; //unknown
        ACE_barrelLength = 130.0;
    };

    class LIB_M1895: LIB_PISTOL {
        ACE_barrelTwist = 406.4; //unknown
        ACE_barrelLength = 114.0;
    };

    class LIB_Colt_M1911: LIB_PISTOL {
        ACE_barrelTwist = 406.4;
        ACE_barrelLength = 127.0;
    };


    class Rifle_Base_F;
    class LIB_RIFLE: Rifle_Base_F {
        ACE_Overheating_Dispersion = 0.75;
        ACE_Overheating_SlowdownFactor = 1;
        ACE_Overheating_JamChance = 0;
        ACE_overheating_mrbs = 3000;
    };

    class LIB_K98: LIB_RIFLE {
        ACE_barrelTwist = 240;
        ACE_barrelLength = 600;
    };

    class LIB_M9130: LIB_RIFLE {
        ACE_barrelTwist = 254;
        ACE_barrelLength = 730;
    };

    class LIB_MP44: LIB_RIFLE {
        ACE_Overheating_JamChance = 0.0015;
        ACE_barrelTwist = 254; //unknown set to 1:10
        ACE_barrelLength = 420;
    };

    class LIB_SVT_40: LIB_RIFLE {
        ACE_Overheating_JamChance = 0.0003;
        ACE_barrelTwist = 254; //unknown set to 1:10
        ACE_barrelLength = 625;
    };

    class LIB_G43: LIB_RIFLE {
        ACE_Overheating_JamChance = 0.0003;
        ACE_barrelTwist = 254; //unknown set to 1:10
        ACE_barrelLength = 550;
    };

    class LIB_M1_Garand: LIB_RIFLE {
        ACE_Overheating_JamChance = 0.0003;
        ACE_barrelTwist = 254;
        ACE_barrelLength = 609.6;
    };

    class LIB_M1_Carbine: LIB_RIFLE {
        ACE_Overheating_JamChance = 0.0003;
        ACE_barrelTwist = 254; //unknown set to 1:10
        ACE_barrelLength = 460;
    };


    class Rifle_Short_Base_F: Rifle_Base_F {};
    class LIB_SMG: Rifle_Short_Base_F {
        ACE_Overheating_Dispersion = 0.75;
        ACE_Overheating_SlowdownFactor = 1;
        ACE_Overheating_JamChance = 0.0015;
        ACE_overheating_mrbs = 3000;
    };

    class LIB_MP40: LIB_SMG {
        ACE_barrelTwist = 392; //unknown set same as thompson
        ACE_barrelLength = 251;
    };

    class LIB_PPSh41_m: LIB_SMG {
        ACE_barrelTwist = 392; //unknown set same as thompson
        ACE_barrelLength = 269;
    };

    class LIB_M1A1_Thompson: LIB_SMG {
        ACE_barrelTwist = 392;
        ACE_barrelLength = 270;
    };


    class Rifle_Long_Base_F: Rifle_Base_F {};
    class LIB_LMG: Rifle_Long_Base_F {
        ACE_Overheating_Dispersion = 0.75;
        ACE_Overheating_SlowdownFactor = 1;
        ACE_Overheating_JamChance = 0.0075;
        ACE_overheating_mrbs = 3000;
        ACE_overheating_allowSwapBarrel = 1;
    };

    class LIB_DP28: LIB_LMG {
        ACE_barrelTwist = 254; //unknown set to 1:10
        ACE_barrelLength = 604;
    };

    class LIB_DT: LIB_LMG {
        ACE_barrelTwist = 254; //unknown set to 1:10
        ACE_barrelLength = 604;
    };

    class LIB_MG42: LIB_LMG {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 533;
    };

    class LIB_M1918A2_BAR: LIB_LMG {
        ACE_barrelTwist = 254; //unknown set to 1:10
        ACE_barrelLength = 610;
        ACE_overheating_allowSwapBarrel = 0;
    };

    class LIB_SRIFLE: Rifle_Long_Base_F {
        ACE_Overheating_Dispersion = 0.75;
        ACE_Overheating_SlowdownFactor = 1;
        ACE_Overheating_JamChance = 0;
        ACE_overheating_mrbs = 3000;
    };

    class LIB_K98ZF39: LIB_SRIFLE {
        ACE_barrelTwist = 240;
        ACE_barrelLength = 600;
    };

    class LIB_M9130PU: LIB_SRIFLE {
        ACE_barrelTwist = 254;
        ACE_barrelLength = 730;
    };

    class LIB_M1903A4_Springfield: LIB_SRIFLE {
        ACE_barrelTwist = 254;
        ACE_barrelLength = 610;
    };


    class MGun;
    class LIB_MLMG_base;
    class LIB_MLMG: MGun {
        ACE_Overheating_Dispersion = 0.75;
        ACE_Overheating_SlowdownFactor = 1;
        ACE_Overheating_JamChance = 0.0075;
        ACE_overheating_mrbs = 3000;
        ACE_overheating_allowSwapBarrel = 1;
    };

    class LIB_MLMG42: LIB_MLMG_base {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 533;
    };

    class LIB_Maxim_M30: LIB_MLMG_base {
        ACE_barrelTwist = 254; //unknown set to 1:10
        ACE_barrelLength = 732;
        ACE_overheating_allowSwapBarrel = 0;
    };


    class LIB_LAUNCHER;
    class LIB_PzFaust_30m: LIB_LAUNCHER {
        ACE_UsedTube = "LIB_PzFaust_30m_used";
        magazines[] = { "LIB_PzFaust_PreloadedMissileDummy" };  // The dummy magazine
        ace_overpressure_angle = 45;
        ace_overpressure_range = 5;
        ace_overpressure_damage = 0.5;
    };

    class LIB_PzFaust_30m_used: LIB_PzFaust_30m {
        scope = 1;
        ACE_isUsedLauncher = 1;
        magazines[] = { "LIB_PzFaust_FiredMissileDummy" };  // This will disable the used launcher class from being fired again
        weaponPoolAvailable = 0;
    };

    class LIB_RPzB: LIB_LAUNCHER {
        ace_overpressure_angle = 60;
        ace_overpressure_range = 20;
        ace_overpressure_damage = 0.7;
    };

    class LIB_M1A1_Bazooka: LIB_LAUNCHER {
        ace_overpressure_angle = 60;
        ace_overpressure_range = 20;
        ace_overpressure_damage = 0.7;
    };


    class H_LIB_HelmetB;
    class H_LIB_GER_LW_PilotHelmet: H_LIB_HelmetB {
        ACE_Protection = 1;
        ace_hearing_protection = 0.50;
        ace_hearing_lowerVolume = 0.60;
    };

    class H_LIB_SOV_TankHelmet: H_LIB_HelmetB {
        ACE_Protection = 1;
        ace_hearing_protection = 0.50;
        ace_hearing_lowerVolume = 0.60;
    };

    class H_LIB_SOV_PilotHelmet: H_LIB_HelmetB {
        ACE_Protection = 1;
        ace_hearing_protection = 0.50;
        ace_hearing_lowerVolume = 0.60;
    };


    class CannonCore;
    class LIB_TankAPCannon_base;
    class LIB_D25T_AP: LIB_TankAPCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_TankHECannon_base;
    class LIB_D25T_HE: LIB_TankHECannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    //class LIB_D25T_not_loaded: CannonCore
    class LIB_TankCannon_base;
    class LIB_D25T: LIB_TankCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK40_L48_AP: LIB_TankAPCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_TankAPCRCannon_base;
    class LIB_KwK40_L48_APCR: LIB_TankAPCRCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK40_L48_HE: LIB_TankHECannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    //class LIB_KwK40_L48_not_loaded: CannonCore
    class LIB_KwK40_L48: LIB_TankCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK42_L70_AP: LIB_TankAPCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK42_L70_APCR: LIB_TankAPCRCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK42_L70_HE: LIB_TankHECannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    //class LIB_KwK42_L70_not_loaded: CannonCore
    class LIB_KwK42_L70: LIB_TankCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK43_L71_AP: LIB_TankAPCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK43_L71_APCR: LIB_TankAPCRCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK43_L71_HE: LIB_TankHECannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    //class LIB_KwK43_L71_not_loaded: CannonCore
    class LIB_KwK43_L71: LIB_TankCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK36_L56_AP: LIB_TankAPCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK36_L56_APCR: LIB_TankAPCRCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_KwK36_L56_HE: LIB_TankHECannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    //class LIB_KwK36_L56_not_loaded: CannonCore
    class LIB_KwK36_L56: LIB_TankCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_F34_AP: LIB_TankAPCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_F34_APCR: LIB_TankAPCRCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_F34_HE: LIB_TankHECannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    //class LIB_F34_not_loaded: CannonCore
    class LIB_F34: LIB_TankCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_ZIS_S_53_AP: LIB_TankAPCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_ZIS_S_53_APCR: LIB_TankAPCRCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_ZIS_S_53_HE: LIB_TankHECannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    //class LIB_ZIS_S_53_not_loaded: CannonCore
    class LIB_ZIS_S_53: LIB_TankCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_StaticGunAPCannon_base;
    class LIB_ZIS3_AP: LIB_StaticGunAPCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_StaticGunAPCRCannon_base;
    class LIB_ZIS3_APCR: LIB_StaticGunAPCRCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_StaticGunHECannon_base;
    class LIB_ZIS3_HE: LIB_StaticGunHECannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    //class LIB_ZIS3_not_loaded: CannonCore
    class LIB_StaticGunCannon_base;
    class LIB_ZIS3: LIB_StaticGunCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_M3_L40_AP: LIB_TankAPCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_M3_L40_APCR: LIB_TankAPCRCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_M3_L40_HE: LIB_TankHECannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    //class LIB_M3_L40_not_loaded: CannonCore
    class LIB_M3_L40: LIB_TankCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_Pak40_AP: LIB_StaticGunAPCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_Pak40_APCR: LIB_StaticGunAPCRCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    class LIB_Pak40_HE: LIB_StaticGunHECannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };

    //class LIB_Pak40_not_loaded: CannonCore
    class LIB_Pak40: LIB_StaticGunCannon_base {
        ace_overpressure_angle = 90;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.7;
    };


    class ACE_ItemCore;
    class ACE_ExplosiveItem;
    class ToolKit;
    class LIB_ToolKit: ToolKit {
        scope = 1;
    };

    class ACE_LIB_LadungPM: ACE_ItemCore {
        author = "ACE Iron Front";
        scope = 2;
        displayName = "Detonator";
        descriptionShort = "Used to remotely trigger explosives";
        picture = "\WW2\Assets_t\Weapons\Misc_t\Equipment\Mines\gear_Ladung_charger_ca.paa";
        model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_Ladung_pm_inv.p3d";
        ace_explosives_Range = 100;
        ace_explosives_Detonator = 1;
        ace_explosives_triggerType = "LIB_LadungPM";
        class ItemInfo: ACE_ExplosiveItem {
            allowedSlots[] = { 901 };
            mass = 20;
            uniformModel = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_Ladung_pm_inv.p3d";
        };
    };

    class ACE_LIB_FireCord: ACE_ItemCore {
        author = "ACE Iron Front";
        scope = 2;
        displayName = "Black powder fuse";
        descriptionShort = "Used to remotely trigger explosives";
        picture = "\z\ace\addons\explosives\Data\UI\Tripwire.paa";
        model = "\z\ace\addons\captives\models\ace_cabletie.p3d";
        ace_explosives_Range = 100;
        ace_explosives_Detonator = 1;
        ace_explosives_triggerType = "FireCord";
        class ItemInfo: ACE_ExplosiveItem {
            allowedSlots[] = { 901,701 };
            mass = 5;
            uniformModel = "\z\ace\addons\captives\models\ace_cabletie.p3d";
        };
    };
};
