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
  class CC_M392_DMR;
  class CC_BR55;
  class CC_MA5B;
  class CC_LMG_M731;
  class UGL_F;
  class ACE_optic_Hamr_2D;
  class optic_DMS;
  class TCP_optic_M43RCO;
  class TCP_OpticsMode_Base_Irons;
  class InventoryOpticsItem_Base_F;
  class launch_MRAWS_base_F;
	//Base MA6
	class twelfth_MA6: CC_MA40 {
		model="x\12thMEU\addons\12th_weapons\data\MA6\MA6.p3d";
		author = "Sammy";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[12th] MA-6";
		picture="x\12thMEU\addons\12th_weapons\data\MA6\Ma6-preview.paa";
		baseWeapon = "twelfth_MA6";
		canShootInWater = 1;
		magazines[] = COMMON_MA5C_MAGAZINES;
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6\animations\MA6.rtm"};
    	hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6\MA6_co.paa",
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor","TCP_muzzle_snds_762_01" };
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
	class twelfth_MA6_green: twelfth_MA6 {
		model="x\12thMEU\addons\12th_weapons\data\MA6\MA6.p3d";
		author = "Sammy";
    	baseWeapon = "twelfth_MA6_green";
		displayName = "[12th] MA-6 (Green)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6\green\MA6_co.paa",
		};
	};
	class twelfth_MA6_Desert: twelfth_MA6 {
		model="x\12thMEU\addons\12th_weapons\data\MA6\MA6.p3d";
		author = "Sammy";
    	baseWeapon = "twelfth_MA6_Desert";
		displayName = "[12th] MA-6 (Desert)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6\desert\MA6_co.paa",
		};
	};
	//UGL
	class twelfth_MA6_UGL:twelfth_MA6{
		baseWeapon = "twelfth_MA6_UGL";
		displayName = "[12th] MA-6 (GL)";
		model="x\12thMEU\addons\12th_weapons\data\MA6\MA6_UGL.p3d";
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6_UGL\Ma_6_UGL.rtm"};
		muzzles[] = {"this", "MA6_UGL"};
		class WeaponSlotsInfo:WeaponSlotsInfo{
			class UnderBarrelSlot{};
		};
		class MA6_UGL: UGL_F /// Some grenade launcher to have some more fun
		{
			displayName = "MA-6 Grenade Launcher";
			descriptionShort = "MA-6-GL";
			useModelOptics = "false";
			useExternalOptic = "false"; /// Doesn't use optics from the attachment, has it's own
			magazines[] = {"1Rnd_HE_Grenade_shell"};
			cameraDir = "OP_look";
			discreteDistance[] = {100, 200, 300, 400};
			discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"}; /// the angle of gun changes with zeroing
			discreteDistanceInitIndex = 1; /// 200 is the default zero
		};
	};
	class twelfth_MA6_UGL_Green:twelfth_MA6_UGL{
		displayName = "[12th] MA-6 Assault Rifle (GL) (Green)";
			baseWeapon = "twelfth_MA6_UGL_green";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6\green\MA6_co.paa"
		};
	};
	//Carbine
	class twelfth_MA6_K: CC_MA37K {
		model="x\12thMEU\addons\12th_weapons\data\MA6_K\MA6_K.p3d";
		author = "Sammy";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[12th] MA-6K";
		picture="x\12thMEU\addons\12th_weapons\data\MA6_K\Ma6-k-preview.paa";
		baseWeapon = "twelfth_MA6_K";
		canShootInWater = 1;
		magazines[] = COMMON_MA5C_MAGAZINES;
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6\animations\MA6.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor","TCP_muzzle_snds_762_01" };
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
	class twelfth_MA6_K_Green: twelfth_MA6_K {
		author = "Sammy";
		displayName = "[12th] MA-6K (Green)";
		baseWeapon = "twelfth_MA6_K_green";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6_k\green\MA6_k_co.paa",
		};
	};
	class twelfth_MA6_K_Desert: twelfth_MA6_K {
		author = "Sammy";
		displayName = "[12th] MA-6K (Desert)";
		baseWeapon = "twelfth_MA6_K_Desert";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6_k\desert\MA6_k_co.paa",
		};
	};
	class twelfth_MA6_K_UGL: twelfth_MA6_K {
    	model="x\12thMEU\addons\12th_weapons\data\MA6_K\MA6_K_UGL.p3d";
		author = "Sammy";
    	baseWeapon = "twelfth_MA6_K_UGL";
		displayName = "[12th] MA-6K (GL)";
   	 	handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6_UGL\Ma_6_UGL.rtm"};
    	muzzles[] = {"this", "MA6_UGL"};
    class WeaponSlotsInfo:WeaponSlotsInfo{
      class UnderBarrelSlot{};
    };
    class MA6_UGL: UGL_F /// Some grenade launcher to have some more fun
		{
			displayName = "MA-6 Grenade Launcher";
			descriptionShort = "MA-6-GL";
			useModelOptics = "false";
			useExternalOptic = "false"; /// Doesn't use optics from the attachment, has it's own
			magazines[] = {"1Rnd_HE_Grenade_shell"};
			cameraDir = "OP_look";
			discreteDistance[] = {100, 200, 300, 400};
			discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"}; /// the angle of gun changes with zeroing
			discreteDistanceInitIndex = 1; /// 200 is the default zero
		};
	};
	class twelfth_MA6_K_UGL_Green:twelfth_MA6_K_UGL{
		displayName = "[12th] MA-6K (GL) (Green)";
		baseWeapon = "twelfth_MA6_K_UGL_green";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6_k\green\MA6_k_co.paa"
		};
	};
	class twelfth_MA6_K_UGL_Desert:twelfth_MA6_K_UGL{
		displayName = "[12th] MA-6K (GL) (Desert)";
		baseWeapon = "twelfth_MA6_K_UGL_Desert";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6_k\Desert\MA6_k_co.paa"
		};
	};
	//DM Rifle
	class twelfth_MA6_D: CC_M392_DMR {
		model="x\12thMEU\addons\12th_weapons\data\MA6_D\MA6_D.p3d";
		author = "Sammy";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[12th] MA-6D Marksman Rifle";
		baseWeapon = "twelfth_MA6_D";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6_d\MA6_d_co.paa"
		};
		canShootInWater = 1;
		magazines[] = {"CC_32Rnd_762x51_Mag","CC_32Rnd_762x51_Mag_Dual","CC_32Rnd_762x51_Mag_Tracer","CC_32Rnd_762x51_Mag_Tracer_IR","CC_32Rnd_762x51_Mag_Tracer_Yellow"};
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6\animations\MA6.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor","TCP_muzzle_snds_762_01" };
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
	class twelfth_MA6_D_Desert: twelfth_MA6_D {
		author = "Sammy";
		displayName = "[12th] MA-6D (Desert)";
		baseWeapon = "twelfth_MA6_D_Desert";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6_D\desert\MA6_D_co.paa",
		};
	};
	class twelfth_MA6_D_Green: twelfth_MA6_D {
		author = "Sammy";
		displayName = "[12th] MA-6D (Green)";
		baseWeapon = "twelfth_MA6_D_Green";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=// List of textures, in the same order as the hiddenSelections definition
		{
		"x\12thMEU\addons\12th_weapons\data\MA6_D\green\MA6_D_co.paa",
		};
	};
	// AR Rifle
	class twelfth_MA6_A_BOX: CC_LMG_M731{
		model="x\12thMEU\addons\12th_weapons\data\MA6_A\MA6_A_BOX.p3d";
		author = "Sammy";
    	mass = 160;
		displayName = "[12th] MA-6A Box";
		baseWeapon = "twelfth_MA6_A_BOX";
		ace_overheating_closedBolt = 0; 
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor","TCP_muzzle_snds_762_01" };
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
	class twelfth_MA6_A_DRUM: CC_LMG_M731{
		model="x\12thMEU\addons\12th_weapons\data\MA6_A\MA6_A_DRUM.p3d";
		author = "Sammy";
    	mass = 160;
		displayName = "[12th] MA-6A Drum";
		baseWeapon = "twelfth_MA6_A_DRUM";
		ace_overheating_closedBolt = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor","TCP_muzzle_snds_762_01" };
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
		displayName = "[12th] MA-6B IAR";
		baseWeapon = "twelfth_MA6_B";
		canShootInWater = 1;
		magazines[] = {"OPTRE_60Rnd_762x51_Mag", "twelfth_60Rnd_762x51_Mag_T", "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer", "OPTRE_32Rnd_762x51_Mag_UW" };
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6\animations\MA6.rtm"};
		hiddenSelections[] = {};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor","TCP_muzzle_snds_762_01" };
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
		displayName = "[12th] MA-6B H-IAR";
		baseWeapon = "twelfth_MA6_AL";
		canShootInWater = 1;
		magazines[] = {"twelfth_56Rnd_95x40_Mag", "twelfth_56Rnd_95x40_Mag_T", "twelfth_br_36Rnd", "twelfth_br_36Rnd_T","twelfth_br_36Rnd_UW" };
		handAnim[] = {"OFP2_ManSkeleton","x\12thMEU\addons\12th_weapons\data\MA6\animations\MA6.rtm"};
		hiddenSelections[] = {};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleitems[] = { "OPTRE_MA5Suppressor","TCP_muzzle_snds_762_01" };
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

	 class Weapon_launch_MRAWS_green_F
	  {
	  	ace_reloadlaunchers_enabled=1;
	  };
	  class Weapon_launch_MRAWS_olive_F
	  {
	  	ace_reloadlaunchers_enabled=1;
	  };
	  class Weapon_launch_MRAWS_sand_F
	  {
	  	ace_reloadlaunchers_enabled=1;
	  };

    // class definitions

    class twelfth_MAAWS_base: launch_MRAWS_base_F
    {
	    author = "Waylen";
	    displayName = "[12th] MAAWS (Green)";
	    baseWeapon = "twelfth_MAAWS_base";
	    scope = 2;
	    hiddenSelectionsTextures[] =
      {
        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_darkgreen_01_F_co",
        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
      };

      class WeaponSlotsInfo: WeaponSlotsInfo
      {
        mass = 65;
      };
    };

    class twelfth_MAAWS_olive: twelfth_MAAWS_base {
	    author = "Waylen";
	    displayName = "[12th] MAAWS (Olive)";
	    baseWeapon = "twelfth_MAAWS_olive";
	    scope = 2;
	    hiddenSelectionsTextures[] =
      {
			  "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_olive_01_F_co",
			  "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
      };
    };

    class twelfth_MAAWS_sand: twelfth_MAAWS_base {
	    author = "Waylen";
	    displayName = "[12th] MAAWS (Sand)";
	    baseWeapon = "twelfth_MAAWS_sand";
	    scope = 2;
	    hiddenSelectionsTextures[] =
      {
			  "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_sand_01_F_co",
			  "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
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

		  class twelfth_buris : optic_DMS {
    author = "rex";
    displayName = "[12th] Buris XTR 2";
    class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 12;
			opticType = 2;
			optics = 1;
			modelOptics = "\A3\Weapons_f\acc\reticle_marksman_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 1200;
					discretefov[] = {0.125,0.0625};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F","\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Iron: Snip
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"",""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
				};
			};
		};
  };
class optic_LRPS;
  class twelfth_nightforce : optic_LRPS {
    author = "Rex";
    displayName = "[12th] Nightforce NXS";
    class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 16;
			opticType = 2;
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.042;
					opticsZoomInit = 0.042;
					discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 300;
					distanceZoomMax = 2400;
					discretefov[] = {0.042,0.01};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F","\A3\Weapons_F\acc\reticle_lrps_z_F"};
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
  };

	class mortar_82mm;
	class NDS_W_M224_mortar: mortar_82mm
	{
		magazines[] = 
		{
			"NDS_M_6Rnd_60mm_HE",
			"NDS_M_6Rnd_60mm_HE_0",
			"NDS_M_6Rnd_60mm_ILLUM",
			"avm224_M_6Rnd_60mm_ILLUM_IR",
			"NDS_M_6Rnd_60mm_SMOKE",
      "twelfth_M_6Rnd_60mm_HUNTIR"
		};
	};
  class avm224_W_M224_mortar_proxy: NDS_W_M224_mortar {
    magazines[] = 
		{
			"NDS_M_6Rnd_60mm_HE",
			"NDS_M_6Rnd_60mm_HE_0",
			"NDS_M_6Rnd_60mm_ILLUM",
			"avm224_M_6Rnd_60mm_ILLUM_IR",
			"NDS_M_6Rnd_60mm_SMOKE",
      "twelfth_M_6Rnd_60mm_HUNTIR"
		};
	};

	 class Missile_AA_04_Plane_CAS_01_F;
  class twelfth_universal_sabre_launcher: Missile_AA_04_Plane_CAS_01_F {
    magazines[] = { 
      "twelfth_pylonrack_aim120x1", "twelfth_pylonrack_aim120x2",
      "twelfth_pylonrack_aim132x1", "twelfth_pylonrack_aim132x2"
    };
  };
  
  class ace_missile_aim120_aim120Launcher; // AIM-120D
  class twelfth_ace_missile_aim120_aim120Launcher: ace_missile_aim120_aim120Launcher { magazines[] += {"twelfth_pylonrack_aim120x1","twelfth_pylonrack_aim120x2"}; showEmpty = 0; };
  class ace_maverick_D_Launcher; // AGM-65D
  class twelfth_ace_maverick_D_Launcher: ace_maverick_D_Launcher { magazines[] += {"twelfth_pylonrack_AGM65Dx1","twelfth_pylonrack_AGM65Dx3"}; showEmpty = 0;};
  class ace_maverick_G_Launcher; // AGM-65G
  class twelfth_ace_maverick_G_Launcher: ace_maverick_G_Launcher { magazines[] += {"twelfth_pylonrack_AGM65Gx1","twelfth_pylonrack_AGM65Gx3"}; showEmpty = 0;};
  class ace_maverick_L_Launcher_Plane; // AGM-65L
  class twelfth_ace_maverick_L_Launcher_Plane: ace_maverick_L_Launcher_Plane { magazines[] += {"twelfth_pylonrack_AGM65Lx1","twelfth_pylonrack_AGM65Lx3"}; showEmpty = 0;};
  class weapon_HARMLauncher; // AGM-88C
  class twelfth_weapon_HARMLauncher: weapon_HARMLauncher { magazines[] += {"twelfth_pylonrack_AGM88Cx1"}; showEmpty = 0;};
  class ace_hellfire_launcher; // AIM-132, AGM-114K
  class twelfth_ace_hellfire_launcher: ace_hellfire_launcher { magazines[] += {"twelfth_pylonrack_AGM114Kx1","twelfth_pylonrack_AGM114Kx3","twelfth_pylonrack_AGM114Kx4","twelfth_pylonrack_aim132x1","twelfth_pylonrack_aim132x2"}; showEmpty = 0; };
  class ace_hellfire_launcher_L; // AGM-114L
  class twelfth_ace_hellfire_launcher_L: ace_hellfire_launcher_L { magazines[] += {"twelfth_pylonrack_AGM114Lx1","twelfth_pylonrack_AGM114Lx3","twelfth_pylonrack_AGM114Lx4"}; showEmpty = 0;};
  class ace_hellfire_launcher_N; // AGM-114N
  class twelfth_ace_hellfire_launcher_N: ace_hellfire_launcher_N { magazines[] += {"twelfth_pylonrack_AGM114Nx1","twelfth_pylonrack_AGM114Nx3","twelfth_pylonrack_AGM114Nx4"}; showEmpty = 0;};
  class OPTRE_missiles_Jackknife; // AGM-502
  class twelfth_OPTRE_missiles_Jackknife: OPTRE_missiles_Jackknife { magazines[] += {"twelfth_pylonrack_AGM502x1","twelfth_pylonrack_AGM502x2","twelfth_pylonrack_AGM502x3","twelfth_pylonrack_AGM502x4"}; showEmpty = 0;};
  class OPTRE_missiles_Scorpion; // AGM-90B
  class twelfth_OPTRE_missiles_Scorpion: OPTRE_missiles_Scorpion { magazines[] += {"twelfth_pylonrack_AGM90Bx1","twelfth_pylonrack_AGM90Bx2","twelfth_pylonrack_AGM90Bx3","twelfth_pylonrack_AGM90Bx4"}; showEmpty = 0;};
};

class CfgMagazineWells
{
  class CBA_Carl_Gustaf
  {
    twelfth_MAAWS_ammo[] =
    {
      "twelfth_HEAT_95"
    };
  };
};


