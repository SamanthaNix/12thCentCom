/*
  ==============================================================================
  config_macros.hpp

  This file provides:
    - Path macros for referencing custom textures in 12th_aircraft.
    - `AIR_SP_INFO` for your custom vehicle spawn script integration.
    - Large macros (PELICAN_TEXTURESETS, FALCON_TEXTURESETS, etc.) 
      that define hiddenSelections[] + hiddenSelectionsTextures[] + 
      class textureSources. This simplifies the config for each vehicle.

  ==============================================================================
*/
#define P(PATH) \x\12thMEU\addons\12th_aircraft\##PATH
#define QP(PATH) #P(PATH)

// AIR_SP_INFO macro:
//  - Creates a "VehicleSpawnerInfo" class with sub-class twelfth_air_spawner. 
//  - Config values like priority, spawner name, type, and cost.
#define AIR_SP_INFO(VEH,PRI,TYPE) \
class VehicleSpawnerInfo {        \
  class twelfth_air_spawner {        \
    priority=PRI;                 \
    spawner = "12th Aircraft";    \
    scope = 1;                    \
    vehicle = #VEH;               \
    icon="";                      \
    type=#TYPE;                   \
    cost=0;                       \
  };                              \
};

