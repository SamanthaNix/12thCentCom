
class CfgAmmo {

    class SmokeShell;
   //Modify standard 40mm grenade ammo to remove bounce
  	class G_40mm_Smoke: SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};
	class FlareBase;
    class F_HuntIR: FlareBase {
    class Eventhandlers;
    };
    class F_HuntIR_mortar : F_HuntIR {
        author = "Hen gizzard and Turnip wizard";
        timeToLive = 15;
        class Eventhandlers {
        fired = "[gunner (_this#0), _this#1, _this#2, _this#3, _this#4, _this#5, _this#6] call ACE_huntir_fnc_handleFired;";
        };
    };
    class R_MRAAWS_HEAT_F;
    class twelfth_MAAWS_HEAT: R_MRAAWS_HEAT_F{
        hit = 380;
        fuseDistance = 30;
    };
    class Bomb_03_F;
    class twelfth_W_B250 : Bomb_03_F {
        maneuvrability = 0; // no maneuvrability so that default guidance doesnt work
        class ace_missileguidance {
        enabled = 1; // Explicit enabling of the system
        
        pitchRate = 15; // How many degrees/second the missile can pitch
        yawRate = 20; // How many degrees/second this missile can yaw
        
        canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

        // Guidance type for munitions
        defaultSeekerType = "GPS"; // Default seeker type
        seekerTypes[] = { "SALH", "GPS" };

        defaultSeekerLockMode = "LOAL"; // Default lock mode
        seekerLockModes[] = { "LOAL" };

        defaultNavigationType = "LINE";
        navigationTypes[] = { "LINE" };

        lineGainP = 50;
        lineGainD = 0;

        useModeForAttackProfile = 1;

        seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
        seekerAngle = 70;           // Angle in front of the missile which can be searched
        seekerAccuracy = 1;         // seeker accuracy multiplier

        seekerMinRange = 5;         // Minimum range from the missile which the seeker can visually search
        seekerMaxRange = 4000;      // Maximum range from the missile which the seeker can visually search

        // Attack profile type selection
        defaultAttackProfile = "JDAM";
        attackProfiles[] = {"JDAM"};
        };
        hit = 5000;
        indirectHit = 1200;
        indirectHitRange = 12;
    };

    class Bomb_04_F;
    class twelfth_W_B500 : Bomb_04_F {
        maneuvrability = 0; // no maneuvrability so that default guidance doesnt work
        class ace_missileguidance {
        enabled = 1; // Explicit enabling of the system
        
        pitchRate = 15; // How many degrees/second the missile can pitch
        yawRate = 20; // How many degrees/second this missile can yaw

        canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

        // Guidance type for munitions
        defaultSeekerType = "GPS"; // Default seeker type
        seekerTypes[] = { "SALH", "GPS" };

        defaultSeekerLockMode = "LOAL"; // Default lock mode
        seekerLockModes[] = { "LOAL" };

        defaultNavigationType = "LINE";
        navigationTypes[] = { "LINE" };

        lineGainP = 50;
        lineGainD = 0;

        useModeForAttackProfile = 1;

        seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
        seekerAngle = 70;           // Angle in front of the missile which can be searched
        seekerAccuracy = 1;         // seeker accuracy multiplier

        seekerMinRange = 5;         // Minimum range from the missile which the seeker can visually search
        seekerMaxRange = 4000;      // Maximum range from the missile which the seeker can visually search

        // Attack profile type selection
        defaultAttackProfile = "JDAM";
        attackProfiles[] = {"JDAM"};
        };
        hit = 5000;
        indirectHit = 1200;
        indirectHitRange = 12;
    };
    };

    class CfgMagazines {
        class CC_95x40_36Rnd_Mag;
        class CC_95x40_36Rnd_Mag_Tracer;

        //56 round 9.5 magazine
    class twelfth_56Rnd_95x40_Mag: CC_95x40_36Rnd_Mag{
        scope = 2;
        author = "Rex";
        displayName = "56rnd 9.5x40mm Box";
        count = 56;
        mass = 28;
    };

    class twelfth_56Rnd_95x40_Mag_T: CC_95x40_36Rnd_Mag_Tracer{
        scope = 2;
        author = "Rex";
        displayName = "56rnd 9.5x40mm Box (T)";
        count = 56;
        mass = 28; 
    };
    class avm224_M_6Rnd_60mm_ILLUM_IR;
    class twelfth_M_6Rnd_60mm_HUNTIR: avm224_M_6Rnd_60mm_ILLUM_IR {
        displayName = "M770 6Rnd 60mm HuntIR";
            displayNameShort = "6Rnd M770 HuntIR";
        author = "Hen gizzard and Turnip wizard";
        picture = "\x\12thMEU\addons\12th_weapons\data\m224\ammo_mag_huntir.paa";
        hiddenSelections[] = { "box_1" };
        hiddenSelectionsMaterials[] = { "x\12thMEU\addons\12th_weapons\data\m224\M224_mag_huntir.rvmat" };
        ammo = "F_HuntIR_mortar";
        mass = 60;
    };
    class twelfth_M_1Rnd_60mm_HUNTIR_csw: twelfth_M_6Rnd_60mm_HUNTIR {
        displayName = "[CSW] M770 1Rnd 60mm HuntIR";
            displayNameShort = "M770 HuntIR x1";
        author = "Hen gizzard and Turnip wizard";
        picture = "\x\12thMEU\addons\12th_weapons\data\m224\ammo_mag_huntir.paa";
        model = "\z\ace\addons\mk6mortar\data\l16_ammo_illum.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsMaterials[] = {};
        type = 256;
        count = 1;
        ACE_isBelt = 1;
        mass = 6;
    };
    class MRAWS_HEAT_F;
    class twelfth_HEAT_95: MRAWS_HEAT_F
    {
        scope = 2;
        author = "Waylen";
        displayName = "MAAWS HEAT 95 Round";
        mass = 50;
        ammo = "twelfth_MAAWS_HEAT";  
    };
    // pylonWeapon = "twelfth_universal_sabre_launcher";
    // AIM-120D
    class ace_missile_aim120_PylonRack_Missile_d_x1;
    class ace_missile_aim120_PylonRack_Missile_d_x2;
    class twelfth_pylonrack_aim120x1: ace_missile_aim120_PylonRack_Missile_d_x1 { pylonWeapon = "ace_missile_aim120_aim120Launcher"; displayNameShort = "AIM-120D"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_aim120x2: ace_missile_aim120_PylonRack_Missile_d_x2 { pylonWeapon = "ace_missile_aim120_aim120Launcher"; displayNameShort = "AIM-120D"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    // AIM-132
    class ace_missile_aim9_PylonRack_1Rnd_aim132;
    class ace_missile_aim9_PylonRack_2Rnd_aim132;
    class twelfth_pylonrack_aim132x1: ace_missile_aim9_PylonRack_1Rnd_aim132 { pylonWeapon = "twelfth_ace_hellfire_launcher"; displayNameShort = "AIM-132"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_aim132x2: ace_missile_aim9_PylonRack_2Rnd_aim132 { pylonWeapon = "twelfth_ace_hellfire_launcher"; displayNameShort = "AIM-132"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    // AGM-65 D/G/L
    class ace_maverick_D_pylonRack_1Rnd;
    class ace_maverick_D_pylonRack_3Rnd;
    class twelfth_pylonrack_AGM65Dx1: ace_maverick_D_pylonRack_1Rnd { pylonWeapon = "twelfth_ace_maverick_D_Launcher"; displayNameShort = "AGM-65D"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM65Dx3: ace_maverick_D_pylonRack_3Rnd { pylonWeapon = "twelfth_ace_maverick_D_Launcher"; displayNameShort = "AGM-65D"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class ace_maverick_G_pylonRack_1Rnd;
    class ace_maverick_G_pylonRack_3Rnd;
    class twelfth_pylonrack_AGM65Gx1: ace_maverick_G_pylonRack_1Rnd { pylonWeapon = "twelfth_ace_maverick_G_Launcher"; displayNameShort = "AGM-65G"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM65Gx3: ace_maverick_G_pylonRack_3Rnd { pylonWeapon = "twelfth_ace_maverick_G_Launcher"; displayNameShort = "AGM-65G"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class ace_maverick_L_pylonRack_1Rnd;
    class ace_maverick_L_pylonRack_3Rnd;
    class twelfth_pylonrack_AGM65Lx1: ace_maverick_L_pylonRack_1Rnd { pylonWeapon = "twelfth_ace_maverick_L_Launcher_Plane"; displayNameShort = "AGM-65L"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM65Lx3: ace_maverick_L_pylonRack_3Rnd { pylonWeapon = "twelfth_ace_maverick_L_Launcher_Plane"; displayNameShort = "AGM-65L"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    // AGM-88
    class PylonMissile_Missile_HARM_x1;
    class twelfth_pylonrack_AGM88Cx1: PylonMissile_Missile_HARM_x1 { pylonWeapon = "twelfth_weapon_HARMLauncher"; displayNameShort = "AGM-88C"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    // AGM-114K/L/N
    class PylonRack_1Rnd_ACE_Hellfire_AGM114K;
    class PylonRack_3Rnd_ACE_Hellfire_AGM114K;
    class PylonRack_4Rnd_ACE_Hellfire_AGM114K;
    class twelfth_pylonrack_AGM114Kx1: PylonRack_1Rnd_ACE_Hellfire_AGM114K { pylonWeapon = "ace_hellfire_launcher"; displayNameShort = "AGM-114K"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM114Kx3: PylonRack_3Rnd_ACE_Hellfire_AGM114K { pylonWeapon = "ace_hellfire_launcher"; displayNameShort = "AGM-114K"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM114Kx4: PylonRack_4Rnd_ACE_Hellfire_AGM114K { pylonWeapon = "ace_hellfire_launcher"; displayNameShort = "AGM-114K"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class PylonRack_1Rnd_ACE_Hellfire_AGM114L;
    class PylonRack_3Rnd_ACE_Hellfire_AGM114L;
    class PylonRack_4Rnd_ACE_Hellfire_AGM114L;
    class twelfth_pylonrack_AGM114Lx1: PylonRack_1Rnd_ACE_Hellfire_AGM114L { pylonWeapon = "twelfth_ace_hellfire_launcher_L"; displayNameShort = "AGM-114L"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM114Lx3: PylonRack_3Rnd_ACE_Hellfire_AGM114L { pylonWeapon = "twelfth_ace_hellfire_launcher_L"; displayNameShort = "AGM-114L"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM114Lx4: PylonRack_4Rnd_ACE_Hellfire_AGM114L { pylonWeapon = "twelfth_ace_hellfire_launcher_L"; displayNameShort = "AGM-114L"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class PylonRack_1Rnd_ACE_Hellfire_AGM114N;
    class PylonRack_3Rnd_ACE_Hellfire_AGM114N;
    class PylonRack_4Rnd_ACE_Hellfire_AGM114N;
    class twelfth_pylonrack_AGM114Nx1: PylonRack_1Rnd_ACE_Hellfire_AGM114N { pylonWeapon = "twelfth_ace_hellfire_launcher_N"; displayNameShort = "AGM-114L"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM114Nx3: PylonRack_3Rnd_ACE_Hellfire_AGM114N { pylonWeapon = "twelfth_ace_hellfire_launcher_N"; displayNameShort = "AGM-114L"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM114Nx4: PylonRack_4Rnd_ACE_Hellfire_AGM114N { pylonWeapon = "twelfth_ace_hellfire_launcher_N"; displayNameShort = "AGM-114L"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    // AGM-502
    class OPTRE_1Rnd_Jackknife_missile;
    class OPTRE_2Rnd_Jackknife_missile;
    class OPTRE_3Rnd_Jackknife_missile;
    class OPTRE_4Rnd_Jackknife_missile;
    class twelfth_pylonrack_AGM502x1: OPTRE_1Rnd_Jackknife_missile { pylonWeapon = "twelfth_OPTRE_missiles_Jackknife"; displayNameShort = "AGM-502"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM502x2: OPTRE_2Rnd_Jackknife_missile { pylonWeapon = "twelfth_OPTRE_missiles_Jackknife"; displayNameShort = "AGM-502"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM502x3: OPTRE_3Rnd_Jackknife_missile { pylonWeapon = "twelfth_OPTRE_missiles_Jackknife"; displayNameShort = "AGM-502"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM502x4: OPTRE_4Rnd_Jackknife_missile { pylonWeapon = "twelfth_OPTRE_missiles_Jackknife"; displayNameShort = "AGM-502"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    // AGM-90B
    class OPTRE_1Rnd_Scorpion_missiles;
    class OPTRE_2Rnd_Scorpion_missiles;
    class OPTRE_4Rnd_Scorpion_missiles;
    class OPTRE_8Rnd_Scorpion_missiles;
    class twelfth_pylonrack_AGM90Bx1: OPTRE_1Rnd_Scorpion_missiles { pylonWeapon = "twelfth_OPTRE_missiles_Scorpion"; displayNameShort = "AGM-90B"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM90Bx2: OPTRE_2Rnd_Scorpion_missiles { pylonWeapon = "twelfth_OPTRE_missiles_Scorpion"; displayNameShort = "AGM-90B"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM90Bx4: OPTRE_4Rnd_Scorpion_missiles { pylonWeapon = "twelfth_OPTRE_missiles_Scorpion"; displayNameShort = "AGM-90B"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };
    class twelfth_pylonrack_AGM90Bx8: OPTRE_8Rnd_Scorpion_missiles { pylonWeapon = "twelfth_OPTRE_missiles_Scorpion"; displayNameShort = "AGM-90B"; hardpoints[] += {"twelfth_hardpoint_sabre2"}; };

    class PylonMissile_1Rnd_Bomb_03_F;
    class twelfth_W_P_GBU_prototype_250x1: PylonMissile_1Rnd_Bomb_03_F {
        displayName = "1x GBU-139/P 'Weakass' Guided 250lbs Bomb";
        displayNameShort = "GBU-139/P";
        ammo = "twelfth_W_B250";
        count = 1;
        hardpoints[] = {"twelfth_hardpoint_prototypes"};
        pylonWeapon = "twelfth_W_GBU_prototype_250_Launcher";
        scope = 2;
    };
    class twelfth_W_P_GBU_prototype_250x2: twelfth_W_P_GBU_prototype_250x1 {
        displayName = "2x GBU-139/P 'Weakass' Guided 250lbs Bomb";
        count = 2;
    };
    class twelfth_W_P_GBU_prototype_250x4: twelfth_W_P_GBU_prototype_250x1 {
        displayName = "4x GBU-139/P 'Weakass' Guided 250lbs Bomb";
        count = 4;
    };
    class PylonMissile_1Rnd_Bomb_04_F;
    class twelfth_W_P_GBU_prototype_500x1: PylonMissile_1Rnd_Bomb_04_F {
        displayName = "1x GBU-140/P 'Bigass' Guided 500lbs Bomb";
        displayNameShort = "GBU-140/P";
        ammo = "twelfth_W_B500";
        count = 1;
        hardpoints[] = {"twelfth_hardpoint_prototypes"};
        pylonWeapon = "twelfth_W_GBU_prototype_500_Launcher";
        scope = 2;
    };
    class twelfth_W_P_GBU_prototype_500x2: twelfth_W_P_GBU_prototype_500x1 {
        displayName = "2x GBU-140/P 'Bigass' Guided 500lbs Bomb";
        count = 2;
    };
};