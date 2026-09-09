/*
  ==============================================================================
  config.cpp

  This file configures our custom vests, referencing macros and selection sets
  defined in "config_macros.hpp" and "unscf_vest_sel.hpp". It includes:
    - CfgPatches (describing what's included in this addon).
    - CfgVehicles (to define supply containers or special vest containers).
    - CfgWeapons (to define the vests themselves).

  Notable Macros:
    - VEST_MAXLOAD: sets the maximum carrying capacity for the containerClass.
    - UNSCF_VEST_ALL_VARIANTS(): expands into multiple vest classes for each
      camo variant (e.g., standard or winter).
  ==============================================================================
*/

// This directive suppresses specific Hemtt warnings related to padded arguments in the configuration file.
#pragma hemtt suppress pw3_padded_arg config

// Includes the macros used below (e.g., VEST_MAXLOAD, etc.)
#include "config_macros.hpp"


// -----------------------------------------------------------------------------
//  CfgPatches
// -----------------------------------------------------------------------------
class CfgPatches {
  class twelfth_vests {
    units[]= {}; // We’re not defining placeable units in this PBO.
    weapons[]= { 
        /*
          If you create more vests that are stand-alone (not just variants),
          add them here so the engine recognizes them as part of this mod.
        */
    };
    requiredAddons[] = {"TCP_Characters"};
    requiredVersion=0.1;
  };
};

// -----------------------------------------------------------------------------
//  CfgVehicles
// -----------------------------------------------------------------------------
class CfgVehicles {
};

// -----------------------------------------------------------------------------
//  CfgWeapons (Primary location for vest definitions)
// -----------------------------------------------------------------------------
class CfgWeapons
{
  // Base uniform item for new-gen armor
  //-New Armour-----------------------------------------------------
  class CC_M43_Base{
    class itemInfo;
  };
  GENERATE_VEST_CLASSES(std)

};


class XtdGearModels {
  class CfgWeapons {
    class twelfth_base_vests {
      label="12th Infantry Vests";
      options[] = {"camo","element","role","belt","shoulders","collar","legs"};
      class camo {
        alwaysSelectable = 1;
        label="Camouflage";
        values[]={"forest", "std", "forest90", "urban", "drk", "desert","winter"};
        class forest {label="Standard";};
        class std {label="MARPAT";};
        class forest90 {label="Forest90";};
        class urban {label="Urban";}; //maybe winter?? will need to look into new armor pieces
        class drk {label="VBSS";};
        class desert {label="Desert";};
        class winter {label="Winter";};
      };
      class collar {
        alwaysSelectable = 1;
        label="Collar Armour";
        values[]={"none", "flak", "armored"};
        class none {label="None";};
        class flak {label="Flak";};
        class armored {label="Armoured";};
      };
      class shoulders {
        alwaysSelectable = 1;
        label="Shoulder Armour";
        values[]={"Light","Pads","BaseSec","GungnirS","GungnirL"};
        class Light  {label="None";};
        class Pads  {label="Pads";};
        class BaseSec {label="Security";};
        class GungnirS {label="Gungnir(S)";};
        class GungnirL {label="Gungnir(L)";};
      };
      class belt {
        alwaysSelectable = 1;
        label="Belt";
        values[]={"none", "belt"};
        class none {label="None";};
        class belt {label="Belt";};
      };
      class legs {
        alwaysSelectable = 1;
        label="Leg Armour";
        values[]={"none", "thigh", "full"};
        class none {label="None";};
        class thigh {label="Thigh";};
        class full {label="Full";};
      };
      class element {
        alwaysSelectable = 1;
        label="Element";
        values[]={"na","hq","1pl","2pl","lpl"};
        class na  {label="None";};
        class hq  {label="HQ";  image=XTP(athena);};
        class 1pl {label="1PLT"; image=XTP(1pl);};
        class 2pl {label="2PLT";   image=XTP(2pl);};
        class lpl {label="LOGI";   image=XTP(chaos);};
      };
      class role {
        alwaysSelectable = 1;
        label="MOS";
        values[]={"na","med"};
        class na  {label="None";};
        class med {label="Corpsman"; image=XTP(med);};
      };
    };
  };
};

class XtdGearInfos {
  class CfgWeapons {
    // VEST GI
    GENERATE_VEST_XTDGI(std)
    GENERATE_VEST_XTDGI(desert)
    GENERATE_VEST_XTDGI(winter)
  };
};
