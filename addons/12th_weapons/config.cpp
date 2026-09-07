/*
  ==============================================================================
  config.cpp

  This file pulls together all of our weapon, ammo, magazine, and macro configs
  for the 12th MEU custom weapons. It references a series of .hpp files that
  contain definitions for CfgAmmo, CfgMagazines, CfgWeapons, and macros.

  Files included:
    - config_macros.hpp  (Shared macros for attachments, magazines, bipods, etc.)
    - config_ammo.hpp    (Ammo definitions like ballistics, underwater ammo, etc.)
    - config_magazines.hpp (Magazine definitions, capacities, weights, etc.)
    - config_weapons.hpp (Weapon definitions referencing macros, ammo, magazines.)

  Note on Required Addons:
    `requiredAddons[]` must list all addons that our mod depends on to function.
    Make sure you update these when referencing external mods (e.g., ACE, OPTRE).

  ==============================================================================
*/
#include "config_macros.hpp"
#include "config_weapons.hpp"
#include "model.cfg"
class CfgPatches
{
  class twelfth_weapons
  {
    units[] = {}; // If you add a placeable object/vehicle that belongs to this mod,
                  // you should list that class name here.
    weapons[] = {
				         "twelfth_MA6_K","twelfth_MA6","twelfth_MA6_D","twelfth_MA6_A_BOX","twelfth_MA6_A_DRUM","twelfth_MA6_AL",
                 }; // Ensure any newly created weapon class is listed above.
    ammo[] = {}; // Please add your new ammo types to this list
    magazines[] = {}; // Add new magazines here.
    requiredVersion = 0.1;
    requiredAddons[] = { "OPTRE_Weapons",
                        "A3_Weapons_F", "A3_Weapons_F_Exp", 
                        "ace_missileguidance","ace_common", "a3_weapons_f_tank", "ace_reloadlaunchers","ace_csw","ace_apl","ace_huntir"
                        }; 
        /*
        IMPORTANT: If you rely on additional external mods,
        add them here so the game loads them before ours.
      */
  };
  
  //Smoke bouncing fix, I don't know why but this needs to be here in order for the change in config_ammo.hpp line 87 to work
  class ABI_SmokeFix
	{
		units[] = {};
		weapons[] = {};
		author = "Abbi";
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Weapons_F" };
	};
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class StandBase;
	class States {
		class MA6Animation: StandBase {
			file="x\12thMEU\addons\12th_weapons\data\MA6\animations\MA6.rtm";
			looped=1;
			speed=1;
			mask = "bodyFullReal";
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {0};
		};
		class MA6KAnimation: StandBase {
			file="x\12thMEU\addons\12th_weapons\data\MA6_K\animations\MA6_K.rtm";
			looped=1;
			speed=1;
			mask = "bodyFullReal";
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {0};
		};
	};
};
