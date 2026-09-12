/*
  ==============================================================================
  config_weapons.hpp

  This file defines our custom weapons, including rifles, SMGs, machine guns,
  launchers, etc. Each class typically inherits from a known parent mod/class
  like OPTRE_MA5C or 19_UNSC_M6C. Then we override properties such as
  displayName, magazines[], attachments, etc.

  Key Points:
    - `scope` and `scopeArsenal` control how the weapon appears in the editor/arsenal.
    - `baseWeapon` is the "root" weapon that is recognized by the Arsenal.
    - `magazines[]` sets which magazines the weapon can use.
    - `class WeaponSlotsInfo` controls attachable items (muzzle, optics, etc.)
    - The macros from config_macros.hpp (e.g. COMMON_SIGHTS) reduce repetition.
  ==============================================================================
*/
// Predeclaring references for weapon states, attachments, etc.
  class WeaponSlotsInfo; // Base class for weapon slots
  class MuzzleSlot;      // Base class for muzzle attachments
  class CowsSlot;
  class PointerSlot;     // Base class for pointer attachments
  class UnderBarrelSlot; // Base class for underbarrel attachments

class CfgWeapons
{
  // Base classes from external mods or vanilla A3
  class CC_MA37K;
  class CC_MA40;
  class CC_M392;
  class CC_BR55;
  class CC_MA5B;
  class CC_M731;
  class ACE_optic_Hamr_2D;
  class optic_DMS;
  class TCP_optic_M43RCO;
  class TCP_OpticsMode_Base_Irons;
  class InventoryOpticsItem_Base_F;
	//Base MA6
	class twelfth_MA6: CC_MA40 {
		model="x\12thMEU\addons\12th_weapons\data\MA6\MA6.p3d";
		author = "Sammy";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[12th] MA6 Assault Rifle";
		baseWeapon = "twelfth_MA6";
		canShootInWater = 1;
		magazines[] = COMMON_MA5C_MAGAZINES;
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6\animations\MA6.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot: CowsSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] = COMMON_SIGHTS;
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleitems[] = {COMMON_RAIL_ATTACHMENTS};
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleitems[] = COMMON_LIGHT_BIPOD;
			};
		};
	};

	//Carbine
	class twelfth_MA6_K: CC_MA37K {
		model="x\12thMEU\addons\12th_weapons\data\MA6_K\MA6_K.p3d";
		author = "Sammy";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[12th] MA6-K Carbine";
		baseWeapon = "twelfth_MA6_K";
		canShootInWater = 1;
		magazines[] = COMMON_MA5C_MAGAZINES;
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6_K\animations\MA6_K.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot: CowsSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] = COMMON_SIGHTS;
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleitems[] = {COMMON_RAIL_ATTACHMENTS};
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleitems[] = COMMON_LIGHT_BIPOD;
			};
		};
	};

	//DM Rifle
	class twelfth_MA6_D: CC_M392 {
		model="x\12thMEU\addons\12th_weapons\data\MA6_D\MA6_D.p3d";
		author = "Sammy";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[12th] MA6-D Marksman Rifle";
		baseWeapon = "twelfth_MA6_D";
		canShootInWater = 1;
		magazines[] = COMMON_MA5C_MAGAZINES;
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6\animations\MA6.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot: CowsSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] = COMMON_SIGHTS;
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleitems[] = {COMMON_RAIL_ATTACHMENTS};
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleitems[] = COMMON_MEDIUM_BIPOD;
			};
		};
	};

	// AR Rifle
	class twelfth_MA6_A_BOX: CC_M731{
		model="x\12thMEU\addons\12th_weapons\data\MA6_A\MA6_A_BOX.p3d";
		author = "Sammy";
    mass = 160;
		displayName = "[12th] MA6-A Box";
		baseWeapon = "twelfth_MA6_A_BOX";
		ace_overheating_closedBolt = 0; 
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot: CowsSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] = COMMON_SIGHTS;
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleitems[] = {COMMON_RAIL_ATTACHMENTS};
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleitems[] = COMMON_MEDIUM_BIPOD;
			};
		};
	};
	class twelfth_MA6_A_DRUM: CC_M731{
		model="x\12thMEU\addons\12th_weapons\data\MA6_A\MA6_A_DRUM.p3d";
		author = "Sammy";
    	mass = 160;
		displayName = "[12th] MA6-A Drum";
		baseWeapon = "twelfth_MA6_A_DRUM";
		ace_overheating_closedBolt = 0; 
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot: CowsSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] = COMMON_SIGHTS;
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleitems[] = {COMMON_RAIL_ATTACHMENTS};
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleitems[] = COMMON_MEDIUM_BIPOD;
			};
		};
	};

  // IAR Rifle
  class twelfth_MA6_B: CC_MA5B {
		model="x\12thMEU\addons\12th_weapons\data\MA6_B\MA6_B.p3d";
		author = "Rex";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[12th] MA6-B IAR";
		baseWeapon = "twelfth_MA6_B";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"addons\12th_weapons\data\MA6_B\MA6_B_CO.paa"};
		canShootInWater = 1;
		magazines[] = {"OPTRE_60Rnd_762x51_Mag", "twelfth_60Rnd_762x51_Mag_T", "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer", "OPTRE_32Rnd_762x51_Mag_UW" };
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6\animations\MA6.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot: CowsSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] = COMMON_SIGHTS;
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleitems[] = {COMMON_RAIL_ATTACHMENTS};
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleitems[] = COMMON_MEDIUM_BIPOD;
			};
		};
	};

  class twelfth_MA6_AL: CC_BR55 {
		model="x\12thMEU\addons\12th_weapons\data\MA6_B\MA6_B.p3d";
		author = "Rex";
		mass = 60;
		scope = 2;
		scopeArsenal = 2;
		displayName = "[12th] MA6-B H-IAR";
		baseWeapon = "twelfth_MA6_AL";
    	texture[] = {"addons\12th_weapons\data\MA6_B\MA6_B_CO.paa"};
		canShootInWater = 1;
		magazines[] = {"twelfth_56Rnd_95x40_Mag", "twelfth_56Rnd_95x40_Mag_T", "twelfth_br_36Rnd", "twelfth_br_36Rnd_T","twelfth_br_36Rnd_UW" };
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6\animations\MA6.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot: CowsSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleitems[] = COMMON_SIGHTS;
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleitems[] = {COMMON_RAIL_ATTACHMENTS};
			};
			class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleitems[] = COMMON_MEDIUM_BIPOD;
			};
		};
	};
  /*
    =============================================================================
    Custom Attachments
    =============================================================================
  */
	class MA6_K_SmartLink: ACE_optic_Hamr_2D{
		author = "Sammy";
		displayName = "[12th] MA6-K Smartlink";
		descriptionShort = "MA6-K Smartlink";
		model = "x\12thMEU\addons\12th_weapons\data\MA6_Smartlink\MA6_K_SmartLink.p3d";
	};
	class MA6_SmartLink: optic_DMS{
		author = "Sammy";
		displayName = "[12th] MA6 Smartlink";
		descriptionShort = "MA6 Smartlink";
		model = "x\12thMEU\addons\12th_weapons\data\MA6_Smartlink\MA6_SmartLink.p3d";
	};
	class twelfth_m43rco : TCP_optic_M43RCO{
		author = "rex";
		displayName = "[12th] M43 RCO";
		class ItemInfo: InventoryOpticsItem_Base_F{
			mass = 10;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			opticType = 2;
			class OpticsModes
			{
				class Irons: TCP_OpticsMode_Base_Irons{};
				class EVOSD
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.083333336;
					opticsZoomMax = 0.25;
					opticsZoomInit = 0.25;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					discreteFOV[] = {0.25,0.125,0.083333336};
					discreteInitIndex = 0;
					modelOptics[] = {"\TCP\Weapons_ins\Acc\Optic\M43RCO\reticle_M43RCO_1x.p3d","\TCP\Weapons_ins\Acc\Optic\M43RCO\reticle_M43RCO_2x.p3d","\TCP\Weapons_ins\Acc\Optic\M43RCO\reticle_M43RCO_3x.p3d"};
					memoryPointCamera = "opticView";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class twelfth_m43rco_crs : twelfth_m43rco {
		author = "rex";
		displayName = "[12th] M43 RCO (CRS)";
		picture = "\TCP\Weapons_ins\Acc\Optic\M43RCO\data\ui\icon_optic_M43RCO_CRS_CA.paa";
		model = "\TCP\Weapons_ins\Acc\Optic\M43RCO\acco_M43RCO_CRS.p3d";
	};
	class twelfth_m43rco_crs_cup : twelfth_m43rco {
		author = "rex";
		displayName = "[12th] M43 RCO (CRS, Eyecup)";
		picture = "\TCP\Weapons_ins\Acc\Optic\M43RCO\data\ui\icon_optic_M43RCO_CRS_CUP_CA.paa";
		model = "\TCP\Weapons_ins\Acc\Optic\M43RCO\acco_M43RCO_CRS_CUP.p3d";
	};
	class twelfth_m43rco_cup : twelfth_m43rco {
		author = "rex";
		displayName = "[12th] M43 RCO (Eyecup)";
		picture = "\TCP\Weapons_ins\Acc\Optic\M43RCO\data\ui\icon_optic_M43RCO_CUP_CA.paa";
		model = "\TCP\Weapons_ins\Acc\Optic\M43RCO\acco_M43RCO_CUP.p3d";
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
};