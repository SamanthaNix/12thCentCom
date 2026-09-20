

/*
  ==============================================================================
  config.cpp

  This file defines all the 12th MEU aircraft classes. It references base
  classes from OPTRE, the Splits Pelican mod, and vanilla Arma. The macros
  in config_macros.hpp apply additional textures, set up hiddenSelections,
  and define spawn info (AIR_SP_INFO) used by your vehicle spawner script.

  Key Points:
    - CfgPatches: Registers these classes so Arma recognizes them.
    - CfgVehicles: Actual aircraft classes with references to new textures,
      macros for additional texture sets, and custom factions (twelfth_MEU).
    - Macros for each aircraft type handle texture sources, hidden selections,
      and spawner info definitions.

  Expand or comment out sections as needed for future updates or newly added
  aircraft.
  ==============================================================================
*/

class CfgPatches {
  class twelfth_aircraft {
    units[] = {
      "twelfth_sabre_single",
      "twelfth_sabre_single_vtol"
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "A3_Air_F",
      "A3_Air_F_Beta",
      "A3_Weapons_F",
      "OPTRE_Core",
      "OPTRE_Vehicles_Air",
    };
  };
};

/*
  ==============================================================================
  CfgVehicles
  ==============================================================================
  Each custom aircraft class inherits from a base class (e.g., Splits_Pelican_base),
  modifies textures, sets faction, and includes macros for more complex logic
  like extended spawn info or texture sets.
*/

class CfgVehicles {
  // -------------------------- Base Classes --------------------------
class OPTRE_Sabre_Base;
class Components;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeftSensors;
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
  class twelfth_sabre_single : OPTRE_Sabre_Base{
    scope = 2;
    scopeCurator = 2;
    displayName = "[12th] YSS-1000-A-S Sabre";
    acceleration = 2000;
    altNoForce = 990000;
    altFullForce = 990000;
    envelope[] = {0,0.1,0.8,3,4,4.4,4.5,4.5,4.4,4.1,3.5,2.5,2};
    thrustCoef[] = {1.76,1.69,1.62,1.68,1.74,1.81,1.89,1.95,1.96,1.96,1.92,1.4,0.4,0.0,0.0,0.0};
    elevatorCoef[] = {0.3,0.5,0.6,0.7,0.8,0.9,1,0.9,0.7,0.6,0.5,0.3,0.1};
    aileronCoef[] = {0.5,0.7,0.8,0.9,1,1.1,1.2,1.1,0.9,0.8,0.7,0.5,0.3};
    rudderCoef[] = {"0.7*5","0.8*5","0.9*5","1*5","1*5","0.9*5","0.8*5","0.7*5","0.6*5","0.5*5","0.4*5","0.3*5","0.2*5","0.1*5"};
    radarRange = 150000;

    //Spawning stuff
    editorPreview = "\OPTRE_Vehicles_Air\Sabre\data\UI\OPTRE_YSS_1000_A.jpg";
    side = 1;
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_FixedWing";
    magazines[] = {"Laserbatteries","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery","OPTRE_SpLaser_Battery"};
    weapons[] += { 
      "twelfth_ace_missile_aim120_aim120Launcher",
      "twelfth_ace_maverick_D_Launcher","twelfth_ace_maverick_G_Launcher","twelfth_ace_maverick_L_Launcher_Plane",
      "twelfth_weapon_HARMLauncher",
      "twelfth_ace_hellfire_launcher", "twelfth_ace_hellfire_launcher_L","twelfth_ace_hellfire_launcher_N",
      "twelfth_OPTRE_missiles_Scorpion","twelfth_OPTRE_missiles_Jackknife",
      "twelfth_W_GBU_prototype_250_Launcher", "twelfth_W_GBU_prototype_500_Launcher" };
    //single seater
    class Turrets{};
    AIR_SP_INFO(Sabre,4,Fixed Wing)
    class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class pylons
				{
					class Pylons_MedusaPod_1
					{
            hardpoints[] = {"twelfth_hardpoint_sabre2","B_GBU12","twelfth_hardpoint_prototypes"}; //"B_BOMB_PYLON"
            priority = 5;
            maxweight = 10000;
            UIposition[] = {0.1,0.1};
            bay = 1;
					};
          class Pylons_DO_NOT_USE1: Pylons_MedusaPod_1
          {
            UIposition[] = {1,1};
            bay = 1;
          };
          class Pylons_Missile_Bay_1: Pylons_MedusaPod_1
					{
						UIposition[] = {0.5,0.1};
						bay = 1;
					};
          class Pylons_DO_NOT_USE2: Pylons_MedusaPod_1
					{
            UIposition[] = {1,1};
						bay = 1;
					};
          class Pylons_Missile_Bay_3: Pylons_MedusaPod_1
					{
						UIposition[] = {0.1,0.3};
						bay = 1;
					};
          class Pylons_Missile_Bay_4: Pylons_MedusaPod_1
					{
						UIposition[] = {0.5,0.3};
						bay = 1;
					};
          class Pylons_Poopbay: Pylons_MedusaPod_1
          {
            UIposition[] = {0.05,0.2};
            bay = 1;
          };
          class  Pylons_Poopbay2: Pylons_MedusaPod_1
          {
            UIposition[] = {0.55,0.2};
            bay = 1;
          };
					class Pylons_30mmGun
					{
						displayName = "M1024 ASW/AC 30mm MLA";
						priority = 2;
						attachment = "OPTRE_M1024_2000Rnd_30mm";
						maxweight = 10000;
						UIposition[] = {0,0};
						hardpoints[] = {"OPTRE_Hardpoint_M1024_30mm"};
					};
				};
			};
		};
  };
  class twelfth_sabre_single_vtol : twelfth_sabre_single{
    scope = 2;
    scopeCurator = 2;
    displayName = "[12th] YSS-1000-A-S Sabre VTOL";
		VTOL = 1;
		VTOLYawInfluence = 1.0;
		VTOLPitchInfluence = 1.0;
		VTOLRollInfluence = 1.0;
    AIR_SP_INFO(Sabre Vtol,6,Fixed Wing)
  };
};
