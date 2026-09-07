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
};
