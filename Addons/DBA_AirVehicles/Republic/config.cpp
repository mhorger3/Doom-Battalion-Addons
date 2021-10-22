class CfgPatches
{
	class DBA_Republic_AirVehicles
	{
		units[]=
		{
			"101st_laat_Hammer",
			"101st_laatUnarmed_Hammer",
			"101st_laatFloodLight_Hammer",
			"101st_laat_Command",
			"101st_laatUnarmed_Command",
			"101st_laatFloodLight_Command",
			"101st_laatFloodLight_Legacy",
			"101st_laatUnarmed_Legacy",
			"101st_laat_Legacy",
			"101st_Z95_base",
			"101st_ARC_Modified",
			"101st_laat_VTOL_Refit",
			"101st_Nuclass",
			"DBA_arc_170_green",
			"DBA_LAAT_Pylons",
			"101st_laatUnarmed_BaseCG",
			"101st_laatFloodLight_BaseCG",
			"101st_laat_HammerCG",
			"DBA_V19_base",
			"DBA_Patrol_LAAT",
			"101st_YWing",
			"101st_YWing_Red",
			"101st_YWing_Green",
			"DBA_LAAT_PYLON_TESTBED"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Tank_Loadorder"
		};
	};
};
class MFD;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class JLTS_Clone_P2_AB;
class B_soldier_base_F;
class DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class cfgVehicles
{
	// Same definition used in 10 places, reducing duplication
	#define LAAT_LIGHTS\
	class 101st_Interior_Light\
	{\
		displayName = "Interior Light";\
		condition = "!(isNull objectParent player) && (driver (vehicle player) == player)";\
		showDisabled = 0;\
		priority = 1;\
		\
		class 101st_Interior_Light_Off\
		{\
			displayName = "Off";\
			statement = "_target remoteExecCall ['DBA_Vehicles_fnc_disableInteriorLight', 0, false]";\
		};\
		\
		class 101st_Interior_Light_Red\
		{\
			displayName = "<t color='#FF0000'>Red</t>";\
			statement = "[_target, [1, 0, 0]] remoteExecCall ['DBA_Vehicles_fnc_enableInteriorLight', 0, false]";\
		};\
		\
		class 101st_Interior_Light_Green\
		{\
			displayName = "<t color='#00FF00'>Green</t>";\
			statement = "[_target, [0, 1, 0]] remoteExecCall ['DBA_Vehicles_fnc_enableInteriorLight', 0, false]";\
		};\
	};
	class Helicopter;
	class VTOL_Base_F;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class CargoTurret;
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
	{
	};
	class 3as_laat_Base: B_Heli_Attack_01_base_F
	{
		class UserActions;
		class Turrets: Turrets
		{
			class Copilot;
			class LeftDoorgun;
			class RightDoorGun;
		};
	};
	class 3as_laatUnarmed_Base: 3as_laat_Base
	{
		class Turrets: Turrets
		{
			class Copilot;
		};
	};
	class 3as_laatFloodLight_Base: 3as_laat_Base
	{
		class Turrets: Turrets
		{
			class Copilot;
		};
	};
	class 3as_LAAT_Mk2Lights: 3as_laatFloodLight_Base
	{
		class Turrets: Turrets
		{
			class Copilot;
		};
	};
	class 101st_laat_Base: 3as_laat_Base
	{
		TFAR_hasIntercom=1;
		ace_cargo_space = 400;
		faction="Republic_101st";
		displayName="101st LAAT MKV (Republic)";
		author="Trip";
		scope=0;
		side=1;
		crew="101st_Pilot_212th";
		forceInGarage=1;
		crewExplosionProtection=0;
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"DBA_Aircraft_Lasers_Blue",
			"DBA_Aircraft_Heavy_Lasers_Blue",
			"dba_wynd_a2a",
			"dba_wynd_ugm",
			"dba_wynd_lgm",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"dba_ugm_x10_mag",
			"dba_a2a_x4_mag",
			"dba_lgm_x4_mag"
		};
		smokeLauncherGrenadeCount = 48;
		smokeLauncherAngle = 360;
		smokeLauncherVelocity = 14;
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		maximumLoad=5000000000;
		slingLoadMaxCargoMass=5000000000;
		armor=500;
		class HitPoints
		{
			class HitHull
			{
				armor = 4;
				convexComponent = "hull_hit";
				depends = "Total";
				explosionShielding = .5;
				material = 51;
				name = "hull_hit";
				passThrough = 1;
				visual = "zbytek";
				radius = 0.01;
			};
			class HitFuel
			{
				convexcomponent = "engine_hit";
				hitpoint = "engine_hit";
				name = "engine_hit";
				explosionShielding = 2;
				radius = 0.1;
				visual = "";
				passthrough = 0.1;
				minimalhit = 0.1;
				material = -1;
				armor = 0.6;
			};
			class HitEngine
			{
				armor = 0.75;
				convexComponent = "engine_hit";
				explosionShielding =1.2;
				material = 51;
				name = "engine_hit";
				hitpoint = "engine_hit";
				passThrough = 1;
				visual = "";
				radius = 0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent = "engine_hit_1";
				name = "engine_hit_1";
				hitpoint = "engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent = "engine_hit_2";
				name = "engine_hit_2";
				hitpoint = "engine_hit_2";
			};
			class HitAvionics
			{
				armor = 2;
				convexComponent = "avionics_hit";
				explosionShielding = 5;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual = "";
				radius = 0.5;
			};
			class HitGlass1
			{
				armor = 2;
				name = "HitGlass1";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
			class HitGlass2
			{
				armor = 2;
				name = "HitGlass2";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
			class HitGlass3
			{
				armor = 2;
				name = "HitGlass3";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(75 / 120)";
					minFov="(75 / 120)";
					maxFov="(75 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1,7};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="0.425/4";
					minFov="0.425/4";
					maxFov="0.425/4";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/8";
					minFov="0.425/8";
					maxFov="0.425/8";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX16: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/16";
					minFov="0.425/16";
					maxFov="0.425/16";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX24: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/24";
					minFov="0.425/24";
					maxFov="0.425/24";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX36: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/36";
					minFov="0.425/36";
					maxFov="0.425/36";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX48: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/48";
					minFov="0.425/48";
					maxFov="0.425/48";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX60: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/60";
					minFov="0.425/60";
					maxFov="0.425/60";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX80: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/80";
					minFov="0.425/80";
					maxFov="0.425/80";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX100: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/100";
					minFov="0.425/100";
					maxFov="0.425/100";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot
		{
			initAngleX = 0;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = -100;
			maxMoveX = 100;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};

		class TransportWeapons
		{
			
		};
		class TransportMagazines
		{
			
		};
		class TransportItems
		{

			class _transport_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
			class _transport_SurgicalKit
			{
				name = "Surgical Kit";
				count = 2;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=10;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=10;
			};
			class _xx_ACE_packingBandage
			{
				name="packingBandage";
				count=10;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=10;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=5;
			};
		};
		class EventHandlers: DefaultEventhandlers
        {
            init="[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\autocrate.sqf';[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\laat_lift_3.sqf';";
        };
		class UserActions
		{
			class rampOpen
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Open";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==0";
				statement = "this animateSource ['ramp',1,1];";
				onlyforplayer = 0;
			};
			class rampClose//''
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Close";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==1";
				statement = "this animateSource ['ramp',0,1];";				
				onlyforplayer = 0;
			};
			class ThrusterEngage
			{
				displayName = "<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
				textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
				position = "pilotview";
				radius = 20;
				priority = 21;
				onlyForPlayer = 1;
				condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
			};

			class ThrusterDisngage: ThrusterEngage
			{
				priority = 21;
				displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
			};

			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				position = "pilotview";
				radius = 20;
				priority = 0;
				onlyForPlayer = 1;
				condition = "((player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
				shortcut="User19"
			};

			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority = 0;
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
				shortcut="User20"
			};
		};
		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev = -60;
				minturn = -240;
				maxelev = 40;
				maxturn = -120;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						initAngleX = 0;
						minAngleX = -10;
						maxAngleX = 90;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.425;
						minFov = 0.425;
						maxFov = 0.425;
						thermalMode[] = {0,1,2,3,4,5};
						visionMode[] = {"Normal","NVG","Ti"};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class zoomx4: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.425/4)";
						minFov = "(0.425/4)";
						maxFov = "(0.425/4)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/8)";
						minFov = "(0.42/8)";
						maxFov = "(0.42/8)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/20)";
						minFov = "(0.42/20)";
						maxFov = "(0.42/20)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/50)";
						minFov = "(0.42/50)";
						maxFov = "(0.42/50)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/70)";
						minFov = "(0.42/70)";
						maxFov = "(0.42/70)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics = 1;
					showUAVViewInOptics = 0;
					showSlingLoadManagerInOptics = 1;
				};
			};
			class LeftDoorgun: LeftDoorgun
			{
				weapons[] = 
				{
					"DBA_20mw_LAATBALL_AC","Laserdesignator_pilotCamera"
				};
				magazines[] = 
				{
					"Laserbatteries",
					"DBA_20mm_PM359_x150_mag",
					"DBA_20mm_PM359_x150_mag",
					"DBA_20mm_P594_x250_mag",
					"DBA_20mm_P594_x250_mag",
					"DBA_20mm_P594_x250_mag",
				};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						initAngleX = 0;
						minAngleX = -10;
						maxAngleX = 90;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.425;
						minFov = 0.425;
						maxFov = 0.425;
						thermalMode[] = {0,1,2,3,4,5};
						visionMode[] = {"Normal","NVG","Ti"};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class zoomx4: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.425/4)";
						minFov = "(0.425/4)";
						maxFov = "(0.425/4)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/8)";
						minFov = "(0.42/8)";
						maxFov = "(0.42/8)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/20)";
						minFov = "(0.42/20)";
						maxFov = "(0.42/20)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/50)";
						minFov = "(0.42/50)";
						maxFov = "(0.42/50)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/70)";
						minFov = "(0.42/70)";
						maxFov = "(0.42/70)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics = 1;
					showUAVViewInOptics = 0;
					showSlingLoadManagerInOptics = 1;
				};
				memorypointgunneroptics = "FIXME";
			};
			class RightDoorGun: RightDoorGun
			{
				weapons[] = 
				{
					"DBA_20mw_LAATBALL_AC","Laserdesignator_pilotCamera"
				};
				magazines[] = 
				{
					"Laserbatteries",
					"DBA_20mm_PM359_x150_mag",
					"DBA_20mm_PM359_x150_mag",
					"DBA_20mm_P594_x250_mag",
					"DBA_20mm_P594_x250_mag",
					"DBA_20mm_P594_x250_mag",
				};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						initAngleX = 0;
						minAngleX = -10;
						maxAngleX = 90;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.425;
						minFov = 0.425;
						maxFov = 0.425;
						thermalMode[] = {0,1,2,3,4,5};
						visionMode[] = {"Normal","NVG","Ti"};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class zoomx4: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.425/4)";
						minFov = "(0.425/4)";
						maxFov = "(0.425/4)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/8)";
						minFov = "(0.42/8)";
						maxFov = "(0.42/8)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/20)";
						minFov = "(0.42/20)";
						maxFov = "(0.42/20)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/50)";
						minFov = "(0.42/50)";
						maxFov = "(0.42/50)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/70)";
						minFov = "(0.42/70)";
						maxFov = "(0.42/70)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics = 1;
					showUAVViewInOptics = 0;
					showSlingLoadManagerInOptics = 1;
				};
				memorypointgunneroptics = "FIXME";
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 400;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 2000;
						maxFogSeeThrough = 0.995;
						color[] = {1, 0, 0, 1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 100;
						aimDown = 1;
						animDirection = ""; //@@@@@@
						componentType = "VisualSensorComponent";
						nightRangeCoef = 0;
						maxFogSeeThrough = 0.94;
						color[] = {1, 1, 0.5, 0.80000001};
						typeRecognitionDistance = 2000;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
						componentType = "PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange = 45000;
							maxRange = 45000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 12000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						color[] = {0.5, 1, 0.5, 0.5};
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
						allowsMarking = 0;
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 8000;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = 0.2;
						componentType = "ActiveRadarSensorComponent";
						maxGroundNoiseDistance = 200;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						color[] = {0, 1, 1, 1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						componentType = "LaserSensorComponent";
						class AirTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						typeRecognitionDistance = 0;
						color[] = {1, 1, 1, 0};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class NVSensorComponent : SensorTemplateNV
					{
						componentType = "NVSensorComponent";
						color[] = {1, 1, 1, 0};
						typeRecognitionDistance = 0;
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,4000,2000,16000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,4000,2000,16000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
	//Sounds
		soundEngineOnInt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_start_int.wss",
			0.316228,
			1
		};
		soundEngineOnExt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_start.wss",
			0.79432797,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_end_int.wss",
			0.316228,
			1
		};
		soundEngineOffExt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_end.wss",
			0.79432797,
			1,
			600
		};
		soundLocked[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_lock_on_beep.wss",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_lock_on_alert_beep.wss",
			0.316228,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_02\Mrap_02_Enter",
			0.446684,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_02\Mrap_02_Exit",
			0.446684,
			1,
			40
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		buildCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		buildCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.125,
			"buildCrash1",
			0.125,
			"buildCrash2",
			0.125,
			"buildCrash3",
			0.125,
			"buildCrash4",
			0.125,
			"buildCrash5",
			0.125,
			"buildCrash6",
			0.125,
			"buildCrash7",
			0.125
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
			1.99526,
			1,
			75
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
			1.99526,
			1,
			75
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
			1.99526,
			1,
			75
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
			1.99526,
			1,
			75
		};
		WoodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
			1.99526,
			1,
			75
		};
		WoodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
			1.99526,
			1,
			75
		};
		WoodCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
			1.99526,
			1,
			75
		};
		WoodCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
			1.99526,
			1,
			75
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.125,
			"woodCrash1",
			0.125,
			"woodCrash2",
			0.125,
			"woodCrash3",
			0.125,
			"woodCrash4",
			0.125,
			"woodCrash5",
			0.125,
			"woodCrash6",
			0.125,
			"woodCrash7",
			0.125
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		armorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		armorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		armorCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		armorCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.125,
			"ArmorCrash1",
			0.125,
			"ArmorCrash2",
			0.125,
			"ArmorCrash3",
			0.125,
			"ArmorCrash4",
			0.125,
			"ArmorCrash5",
			0.125,
			"ArmorCrash6",
			0.125,
			"ArmorCrash7",
			0.125
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		Crash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		Crash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		Crash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		Crash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundCrashes[]=
		{
			"Crash0",
			0.125,
			"Crash1",
			0.125,
			"Crash2",
			0.125,
			"Crash3",
			0.125,
			"Crash4",
			0.125,
			"Crash5",
			0.125,
			"Crash6",
			0.125,
			"Crash7",
			0.125
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
			0.63095701,
			1,
			50
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
			0.63095701,
			1,
			50
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095701,
			1,
			50
		};
		BushCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095701,
			0.80000001,
			50
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.25,
			"BushCrash2",
			0.25,
			"BushCrash3",
			0.25,
			"BushCrash4",
			0.25
		};
		class sounds
		{
			class EngineInt
			{
				sound[]=
				{
					"kobra\442_a_vehicle\laat\sounds\laat_engine_int.wss",
					0.79432797,
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class EngineExt
			{
				sound[]=
				{
					"kobra\442_a_vehicle\laat\sounds\laat_engine.wss",
					1.25893,
					1,
					600
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.25893,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.25893,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					700
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					700
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					"db-7",
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
					0.316228,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.316228,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387201,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
		};
	};
	class 101st_laatUnarmed_Base: 3as_laatUnarmed_Base
	{
		TFAR_hasIntercom=1;
		ace_cargo_space = 400;
		faction="Republic_101st";
		displayName="101st LAAT MKVI (Republic)";
		author="Trip";
		scope=0;
		side=1;
		crew="101st_Pilot_212th";
		forceInGarage=1;
		crewExplosionProtection=0;

		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"DBA_Aircraft_Lasers_Blue",
			"DBA_Aircraft_Heavy_Lasers_Blue",
			"dba_wynd_a2a",
			"dba_wynd_ugm",
			"dba_wynd_lgm",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"dba_ugm_x10_mag",
			"dba_a2a_x4_mag",
			"dba_lgm_x4_mag"
		};
		smokeLauncherGrenadeCount = 48;
		smokeLauncherAngle = 360;
		smokeLauncherVelocity = 14;
		transportSoldier = 18;
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		maximumLoad=5000000000;
		slingLoadMaxCargoMass=5000000000;
		armor=500;
		class HitPoints
		{
			class HitHull
			{
				armor = 4;
				convexComponent = "hull_hit";
				depends = "Total";
				explosionShielding = .5;
				material = 51;
				name = "hull_hit";
				passThrough = 1;
				visual = "zbytek";
				radius = 0.01;
			};
			class HitFuel
			{
				convexcomponent = "engine_hit";
				hitpoint = "engine_hit";
				name = "engine_hit";
				explosionShielding = 2;
				radius = 0.1;
				visual = "";
				passthrough = 0.1;
				minimalhit = 0.1;
				material = -1;
				armor = 0.6;
			};
			class HitEngine
			{
				armor = 0.75;
				convexComponent = "engine_hit";
				explosionShielding =1.2;
				material = 51;
				name = "engine_hit";
				hitpoint = "engine_hit";
				passThrough = 1;
				visual = "";
				radius = 0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent = "engine_hit_1";
				name = "engine_hit_1";
				hitpoint = "engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent = "engine_hit_2";
				name = "engine_hit_2";
				hitpoint = "engine_hit_2";
			};
			class HitAvionics
			{
				armor = 2;
				convexComponent = "avionics_hit";
				explosionShielding = 5;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual = "";
				radius = 0.5;
			};
			class HitGlass1
			{
				armor = 2;
				name = "HitGlass1";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
			class HitGlass2
			{
				armor = 2;
				name = "HitGlass2";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
			class HitGlass3
			{
				armor = 2;
				name = "HitGlass3";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(75 / 120)";
					minFov="(75 / 120)";
					maxFov="(75 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1,7};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="0.425/4";
					minFov="0.425/4";
					maxFov="0.425/4";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/8";
					minFov="0.425/8";
					maxFov="0.425/8";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX16: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/16";
					minFov="0.425/16";
					maxFov="0.425/16";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX24: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/24";
					minFov="0.425/24";
					maxFov="0.425/24";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX36: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/36";
					minFov="0.425/36";
					maxFov="0.425/36";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX48: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/48";
					minFov="0.425/48";
					maxFov="0.425/48";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX60: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/60";
					minFov="0.425/60";
					maxFov="0.425/60";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX80: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/80";
					minFov="0.425/80";
					maxFov="0.425/80";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX100: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/100";
					minFov="0.425/100";
					maxFov="0.425/100";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot
		{
			initAngleX = 0;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = -100;
			maxMoveX = 100;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};

		class TransportWeapons
		{
			
		};
		class TransportMagazines
		{
			
		};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
			class _transport_SurgicalKit
			{
				name = "Surgical Kit";
				count = 2;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=10;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=10;
			};
			class _xx_ACE_packingBandage
			{
				name="packingBandage";
				count=10;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=10;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=5;
			};
		};
		class EventHandlers: DefaultEventhandlers
        {
            init="[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\autocrate.sqf';[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\laat_lift_3.sqf';";
        };
		class UserActions
		{
			class rampOpen
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Open";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==0";
				statement = "this animateSource ['ramp',1,1];";
				onlyforplayer = 0;
			};
			class rampClose//''
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Close";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==1";
				statement = "this animateSource ['ramp',0,1];";				
				onlyforplayer = 0;
			};
			class ThrusterEngage
			{
				displayName = "<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
				textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
				position = "pilotview";
				radius = 20;
				priority = 21;
				onlyForPlayer = 1;
				condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
			};

			class ThrusterDisngage: ThrusterEngage
			{
				priority = 21;
				displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
			};

			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				position = "pilotview";
				radius = 20;
				priority = 0;
				onlyForPlayer = 1;
				condition = "((player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
				shortcut="User19"
			};

			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority = 0;
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
				shortcut="User20"
			};
		};
		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev = -60;
				minturn = -240;
				maxelev = 40;
				maxturn = -120;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						initAngleX = 0;
						minAngleX = -10;
						maxAngleX = 90;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.425;
						minFov = 0.425;
						maxFov = 0.425;
						thermalMode[] = {0,1,2,3,4,5};
						visionMode[] = {"Normal","NVG","Ti"};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class zoomx4: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.425/4)";
						minFov = "(0.425/4)";
						maxFov = "(0.425/4)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/8)";
						minFov = "(0.42/8)";
						maxFov = "(0.42/8)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/20)";
						minFov = "(0.42/20)";
						maxFov = "(0.42/20)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/50)";
						minFov = "(0.42/50)";
						maxFov = "(0.42/50)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/70)";
						minFov = "(0.42/70)";
						maxFov = "(0.42/70)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics = 1;
					showUAVViewInOptics = 0;
					showSlingLoadManagerInOptics = 1;
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 400;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 2000;
						maxFogSeeThrough = 0.995;
						color[] = {1, 0, 0, 1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 100;
						aimDown = 1;
						animDirection = ""; //@@@@@@
						componentType = "VisualSensorComponent";
						nightRangeCoef = 0;
						maxFogSeeThrough = 0.94;
						color[] = {1, 1, 0.5, 0.80000001};
						typeRecognitionDistance = 2000;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
						componentType = "PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange = 45000;
							maxRange = 45000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 12000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						color[] = {0.5, 1, 0.5, 0.5};
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
						allowsMarking = 0;
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 8000;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = 0.2;
						componentType = "ActiveRadarSensorComponent";
						maxGroundNoiseDistance = 200;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						color[] = {0, 1, 1, 1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						componentType = "LaserSensorComponent";
						class AirTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						typeRecognitionDistance = 0;
						color[] = {1, 1, 1, 0};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class NVSensorComponent : SensorTemplateNV
					{
						componentType = "NVSensorComponent";
						color[] = {1, 1, 1, 0};
						typeRecognitionDistance = 0;
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,4000,2000,16000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,4000,2000,16000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
	//Sounds
		soundEngineOnInt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_start_int.wss",
			0.316228,
			1
		};
		soundEngineOnExt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_start.wss",
			0.79432797,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_end_int.wss",
			0.316228,
			1
		};
		soundEngineOffExt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_end.wss",
			0.79432797,
			1,
			600
		};
		soundLocked[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_lock_on_beep.wss",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_lock_on_alert_beep.wss",
			0.316228,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_02\Mrap_02_Enter",
			0.446684,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_02\Mrap_02_Exit",
			0.446684,
			1,
			40
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		buildCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		buildCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.125,
			"buildCrash1",
			0.125,
			"buildCrash2",
			0.125,
			"buildCrash3",
			0.125,
			"buildCrash4",
			0.125,
			"buildCrash5",
			0.125,
			"buildCrash6",
			0.125,
			"buildCrash7",
			0.125
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
			1.99526,
			1,
			75
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
			1.99526,
			1,
			75
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
			1.99526,
			1,
			75
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
			1.99526,
			1,
			75
		};
		WoodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
			1.99526,
			1,
			75
		};
		WoodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
			1.99526,
			1,
			75
		};
		WoodCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
			1.99526,
			1,
			75
		};
		WoodCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
			1.99526,
			1,
			75
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.125,
			"woodCrash1",
			0.125,
			"woodCrash2",
			0.125,
			"woodCrash3",
			0.125,
			"woodCrash4",
			0.125,
			"woodCrash5",
			0.125,
			"woodCrash6",
			0.125,
			"woodCrash7",
			0.125
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		armorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		armorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		armorCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		armorCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.125,
			"ArmorCrash1",
			0.125,
			"ArmorCrash2",
			0.125,
			"ArmorCrash3",
			0.125,
			"ArmorCrash4",
			0.125,
			"ArmorCrash5",
			0.125,
			"ArmorCrash6",
			0.125,
			"ArmorCrash7",
			0.125
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		Crash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		Crash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		Crash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		Crash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundCrashes[]=
		{
			"Crash0",
			0.125,
			"Crash1",
			0.125,
			"Crash2",
			0.125,
			"Crash3",
			0.125,
			"Crash4",
			0.125,
			"Crash5",
			0.125,
			"Crash6",
			0.125,
			"Crash7",
			0.125
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
			0.63095701,
			1,
			50
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
			0.63095701,
			1,
			50
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095701,
			1,
			50
		};
		BushCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095701,
			0.80000001,
			50
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.25,
			"BushCrash2",
			0.25,
			"BushCrash3",
			0.25,
			"BushCrash4",
			0.25
		};
		class sounds
		{
			class EngineInt
			{
				sound[]=
				{
					"kobra\442_a_vehicle\laat\sounds\laat_engine_int.wss",
					0.79432797,
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class EngineExt
			{
				sound[]=
				{
					"kobra\442_a_vehicle\laat\sounds\laat_engine.wss",
					1.25893,
					1,
					600
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.25893,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.25893,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					700
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					700
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					"db-7",
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
					0.316228,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.316228,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387201,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
		};
	};
	
	class 101st_laatFloodLight_Base: 3as_LAAT_Mk2Lights
	{
		TFAR_hasIntercom=1;
		ace_cargo_space = 400;
		faction="Republic_101st";
		displayName="LAAT MKVI Lights (Republic)";
		author="Trip";
		scope=0;
		side=1;
		crew="101st_Pilot_212th";
		forceInGarage=1;
		crewExplosionProtection=0;
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"DBA_Aircraft_Lasers_Blue",
			"DBA_Aircraft_Heavy_Lasers_Blue",
			"dba_wynd_a2a",
			"dba_wynd_ugm",
			"dba_wynd_lgm",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"dba_ugm_x10_mag",
			"dba_a2a_x4_mag",
			"dba_lgm_x4_mag"
		};
		smokeLauncherGrenadeCount = 48;
		smokeLauncherAngle = 360;
		smokeLauncherVelocity = 14;
		transportSoldier = 18;
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		maximumLoad=5000000000;
		slingLoadMaxCargoMass=5000000000;
		armor=500;
		class HitPoints
		{
			class HitHull
			{
				armor = 4;
				convexComponent = "hull_hit";
				depends = "Total";
				explosionShielding = .5;
				material = 51;
				name = "hull_hit";
				passThrough = 1;
				visual = "zbytek";
				radius = 0.01;
			};
			class HitFuel
			{
				convexcomponent = "engine_hit";
				hitpoint = "engine_hit";
				name = "engine_hit";
				explosionShielding = 2;
				radius = 0.1;
				visual = "";
				passthrough = 0.1;
				minimalhit = 0.1;
				material = -1;
				armor = 0.6;
			};
			class HitEngine
			{
				armor = 0.75;
				convexComponent = "engine_hit";
				explosionShielding =1.2;
				material = 51;
				name = "engine_hit";
				hitpoint = "engine_hit";
				passThrough = 1;
				visual = "";
				radius = 0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent = "engine_hit_1";
				name = "engine_hit_1";
				hitpoint = "engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent = "engine_hit_2";
				name = "engine_hit_2";
				hitpoint = "engine_hit_2";
			};
			class HitAvionics
			{
				armor = 2;
				convexComponent = "avionics_hit";
				explosionShielding = 5;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual = "";
				radius = 0.5;
			};
			class HitGlass1
			{
				armor = 2;
				name = "HitGlass1";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
			class HitGlass2
			{
				armor = 2;
				name = "HitGlass2";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
			class HitGlass3
			{
				armor = 2;
				name = "HitGlass3";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(75 / 120)";
					minFov="(75 / 120)";
					maxFov="(75 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1,7};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="0.425/4";
					minFov="0.425/4";
					maxFov="0.425/4";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/8";
					minFov="0.425/8";
					maxFov="0.425/8";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX16: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/16";
					minFov="0.425/16";
					maxFov="0.425/16";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX24: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/24";
					minFov="0.425/24";
					maxFov="0.425/24";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX36: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/36";
					minFov="0.425/36";
					maxFov="0.425/36";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX48: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/48";
					minFov="0.425/48";
					maxFov="0.425/48";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX60: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/60";
					minFov="0.425/60";
					maxFov="0.425/60";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX80: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/80";
					minFov="0.425/80";
					maxFov="0.425/80";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX100: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/100";
					minFov="0.425/100";
					maxFov="0.425/100";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-360;
			maxTurn=360;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot
		{
			initAngleX = 0;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = -100;
			maxMoveX = 100;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};

		class TransportWeapons
		{
			
		};
		class TransportMagazines
		{
			
		};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
			class _transport_SurgicalKit
			{
				name = "Surgical Kit";
				count = 2;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=10;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=10;
			};
			class _xx_ACE_packingBandage
			{
				name="packingBandage";
				count=10;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=10;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=5;
			};
		};
		class EventHandlers: DefaultEventhandlers
        {
            init="[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\autocrate.sqf';[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\laat_lift_3.sqf';";
        };
		class UserActions
		{
			class rampOpen
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Open";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==0";
				statement = "this animateSource ['ramp',1,1];";
				onlyforplayer = 0;
			};
			class rampClose//''
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Close";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==1";
				statement = "this animateSource ['ramp',0,1];";				
				onlyforplayer = 0;
			};
			class ThrusterEngage
			{
				displayName = "<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
				textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
				position = "pilotview";
				radius = 20;
				priority = 21;
				onlyForPlayer = 1;
				condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
			};

			class ThrusterDisngage: ThrusterEngage
			{
				priority = 21;
				displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
			};

			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				position = "pilotview";
				radius = 20;
				priority = 0;
				onlyForPlayer = 1;
				condition = "((player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
				shortcut="User19"
			};

			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority = 0;
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
				shortcut="User20"
			};
		};
		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev = -60;
				minturn = -240;
				maxelev = 40;
				maxturn = -120;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						initAngleX = 0;
						minAngleX = -10;
						maxAngleX = 90;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.425;
						minFov = 0.425;
						maxFov = 0.425;
						thermalMode[] = {0,1,2,3,4,5};
						visionMode[] = {"Normal","NVG","Ti"};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class zoomx4: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.425/4)";
						minFov = "(0.425/4)";
						maxFov = "(0.425/4)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/8)";
						minFov = "(0.42/8)";
						maxFov = "(0.42/8)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/20)";
						minFov = "(0.42/20)";
						maxFov = "(0.42/20)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/50)";
						minFov = "(0.42/50)";
						maxFov = "(0.42/50)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(0.42/70)";
						minFov = "(0.42/70)";
						maxFov = "(0.42/70)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics = 1;
					showUAVViewInOptics = 0;
					showSlingLoadManagerInOptics = 1;
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 400;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 2000;
						maxFogSeeThrough = 0.995;
						color[] = {1, 0, 0, 1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 100;
						aimDown = 1;
						animDirection = ""; //@@@@@@
						componentType = "VisualSensorComponent";
						nightRangeCoef = 0;
						maxFogSeeThrough = 0.94;
						color[] = {1, 1, 0.5, 0.80000001};
						typeRecognitionDistance = 2000;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
						componentType = "PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange = 45000;
							maxRange = 45000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 12000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						color[] = {0.5, 1, 0.5, 0.5};
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
						allowsMarking = 0;
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 8000;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = 0.2;
						componentType = "ActiveRadarSensorComponent";
						maxGroundNoiseDistance = 200;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						color[] = {0, 1, 1, 1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						componentType = "LaserSensorComponent";
						class AirTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						typeRecognitionDistance = 0;
						color[] = {1, 1, 1, 0};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class NVSensorComponent : SensorTemplateNV
					{
						componentType = "NVSensorComponent";
						color[] = {1, 1, 1, 0};
						typeRecognitionDistance = 0;
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,4000,2000,16000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,4000,2000,16000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
	//Sounds
		soundEngineOnInt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_start_int.wss",
			0.316228,
			1
		};
		soundEngineOnExt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_start.wss",
			0.79432797,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_end_int.wss",
			0.316228,
			1
		};
		soundEngineOffExt[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_engine_end.wss",
			0.79432797,
			1,
			600
		};
		soundLocked[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_lock_on_beep.wss",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"kobra\442_a_vehicle\laat\sounds\laat_lock_on_alert_beep.wss",
			0.316228,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_02\Mrap_02_Enter",
			0.446684,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_02\Mrap_02_Exit",
			0.446684,
			1,
			40
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		buildCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		buildCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.125,
			"buildCrash1",
			0.125,
			"buildCrash2",
			0.125,
			"buildCrash3",
			0.125,
			"buildCrash4",
			0.125,
			"buildCrash5",
			0.125,
			"buildCrash6",
			0.125,
			"buildCrash7",
			0.125
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
			1.99526,
			1,
			75
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
			1.99526,
			1,
			75
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
			1.99526,
			1,
			75
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
			1.99526,
			1,
			75
		};
		WoodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
			1.99526,
			1,
			75
		};
		WoodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
			1.99526,
			1,
			75
		};
		WoodCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
			1.99526,
			1,
			75
		};
		WoodCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
			1.99526,
			1,
			75
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.125,
			"woodCrash1",
			0.125,
			"woodCrash2",
			0.125,
			"woodCrash3",
			0.125,
			"woodCrash4",
			0.125,
			"woodCrash5",
			0.125,
			"woodCrash6",
			0.125,
			"woodCrash7",
			0.125
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		armorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		armorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		armorCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		armorCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.125,
			"ArmorCrash1",
			0.125,
			"ArmorCrash2",
			0.125,
			"ArmorCrash3",
			0.125,
			"ArmorCrash4",
			0.125,
			"ArmorCrash5",
			0.125,
			"ArmorCrash6",
			0.125,
			"ArmorCrash7",
			0.125
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		Crash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		Crash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		Crash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		Crash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundCrashes[]=
		{
			"Crash0",
			0.125,
			"Crash1",
			0.125,
			"Crash2",
			0.125,
			"Crash3",
			0.125,
			"Crash4",
			0.125,
			"Crash5",
			0.125,
			"Crash6",
			0.125,
			"Crash7",
			0.125
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
			0.63095701,
			1,
			50
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
			0.63095701,
			1,
			50
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095701,
			1,
			50
		};
		BushCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095701,
			0.80000001,
			50
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.25,
			"BushCrash2",
			0.25,
			"BushCrash3",
			0.25,
			"BushCrash4",
			0.25
		};
		class sounds
		{
			class EngineInt
			{
				sound[]=
				{
					"kobra\442_a_vehicle\laat\sounds\laat_engine_int.wss",
					0.79432797,
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class EngineExt
			{
				sound[]=
				{
					"kobra\442_a_vehicle\laat\sounds\laat_engine.wss",
					1.25893,
					1,
					600
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.25893,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.25893,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					700
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					700
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					"db-7",
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
					0.316228,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.316228,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387201,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
		};
	};

	

	class 101st_laat_Hammer: 101st_laat_Base
	{
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "LAAT MK5 (Hammer)";
		side = 1;
		editorPreview = "";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Hull_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Wings_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Weapons_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Details_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Interior_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
			#include "baseLaatSwitcher.hpp"
		};
		class TextureSources
		{
			class 101st_base_LAAT
			{
				displayName = "101st";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\101st_laat_wings_doors_CO.paa",
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\101st_laat_base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa"
				};
			};
			class 101st_CG_LAAT
			{
				displayName = "CG";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\Vehicles\LAAT\CG_LAAT_Wings_Doors_CO.paa",
					"101st_Aux_Mod\Addons\Vehicles\LAAT\CG_LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa"
				};
			};
		};
		textureList[] = 
		{
			"101st_base_LAAT",1,
			"101st_CG_LAAT",1
		};
	};

	class 101st_laatUnarmed_Hammer: 101st_laatUnarmed_Base
	{
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "LAAT MK6 (Hammer)";
		side = 1;
		editorPreview = "";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Hull_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Wings_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Weapons_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Details_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Interior_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
			#include "baseLaatSwitcher.hpp"
		};
		class TextureSources
		{
			class 101st_base_LAAT
			{
				displayName = "101st";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\101st_laat_wings_doors_CO.paa",
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\101st_laat_base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\LAAT_doors_CO.paa"
				};
			};
			class 101st_CG_LAAT
			{
				displayName = "CG";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_Wings_Doors_CO.paa",
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_doors_CO.paa"
				};
			};
		};
		textureList[] = 
		{
			"101st_base_LAAT",1,
			"101st_CG_LAAT",1
		};
	};

	class 101st_laatFloodLight_Hammer: 101st_laatFloodLight_Base
	{
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "LAAT MK6/2 (Hammer)";
		side = 1;
		editorPreview = "";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Hull_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Wings_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Weapons_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Details_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Interior_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
			#include "baseLaatSwitcher.hpp"
		};
		class TextureSources
		{
			class 101st_base_LAAT
			{
				displayName = "101st";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\101st_laat_wings_doors_CO.paa",
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\101st_laat_base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\LAAT_doors_CO.paa"
				};
			};
			class 101st_CG_LAAT
			{
				displayName = "CG";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_Wings_Doors_CO.paa",
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_doors_CO.paa"
				};
			};
		};
		textureList[] = 
		{
			"101st_base_LAAT",1,
			"101st_CG_LAAT",1
		};
	};
	class 101st_laat_Command: 101st_laat_Base
	{
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "LAAT MK5 (Command)";
		side = 1;
		editorPreview = "";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Hull_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Wings_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Weapons_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Details_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Interior_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
			#include "commandLaatSwitcher.hpp"
		};
	};
	class 101st_laatUnarmed_Command: 101st_laatUnarmed_Base
	{
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "LAAT MK6 (Command)";
		side = 1;
		editorPreview = "";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Hull_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Wings_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Weapons_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Details_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Interior_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
			#include "commandLaatSwitcher.hpp"
		};
	};
	class 101st_laatFloodLight_Command: 101st_laatFloodLight_Base
	{
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "LAAT MK6/2 (Command)";
		side = 1;
		editorPreview = "";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Hull_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Wings_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Weapons_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Details_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Interior_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
			#include "commandLaatSwitcher.hpp"
		};
	};

	class 101st_laat_Legacy: 101st_laat_Base
	{
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "LAAT MK5 (Legacy)";
		side = 1;
		editorPreview = "";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Command_Wings_Doors_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Command_Base_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
			#include "legacyLaatSwitcher.hpp"
		};
	};
	class 101st_laatUnarmed_Legacy: 101st_laatUnarmed_Base
	{
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "LAAT MK6 (Legacy)";
		side = 1;
		editorPreview = "";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Command_Wings_Doors_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Command_Base_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\LAAT_doors_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
			#include "legacyLaatSwitcher.hpp"
		};
	};
	class 101st_laatFloodLight_Legacy: 101st_laatFloodLight_Base
	{
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "LAAT MK6/2 (Legacy)";
		side = 1;
		editorPreview = "";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Command_Wings_Doors_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\Command_Base_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\LAAT_doors_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
			#include "legacyLaatSwitcher.hpp"
		};
	};

	class VTOL_Base : VTOL_Base_F
	{
		class Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class ViewPilot;
		class ViewOptics;
		class components;
		class CargoTurret;
	};
	class 101st_laat_VTOL_Refit_Base : VTOL_Base
	{
		displayName="101st LAAT VTOL Refit";
		author="Muttie The Modder";
		model="3as\3as_laat\LAATi\model\tcw_laat.p3d";
		icon="\3AS\3as_Laat\LAATI\data\ui\Map_laat_CA.paa";
		picture="3AS\3as_Laat\LAATI\data\ui\LAAT_Profile_ca.paa";
		editorpreview="\3AS\3as_Laat\LAATI\data\editorpreview\3as_laat.jpg";
		defaultUserMFDvalues[]={0.082000002,0.40799999,0.039000001,1};
		memoryPointTaskMarker="TaskMarker_1_pos";
		cargoaction[]=
		{
			"passenger_boat_holdleft",
			"passenger_boat_holdleft",
			"passenger_boat_holdleft"
		};
		driveOnComponent[]=
		{
			"Skids"
		};
		accuracy=0.5;
		geardowntime=1.5;
		gearretracting=1;
		gearuptime=1.5;
		gearMinAlt=0;
		gearsUpFrictionCoef=0.001;
		nameSound="veh_helicopter_s";
		fuelCapacity=700;
		fuelConsumptionRate=0.2;
		bodyFrictionCoef=1.9845001;
		maxSpeed=800;
		startDuration=4.5;
		castDriverShadow=0;
		canFloat=1;
		waterLeakiness=0.2;
		waterResistanceCoef=0.89999998;
		waterResistance=1;
		waterLinearDampingCoefY=3;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=3;
		maxFordingDepth=110.65;
		vtol=4;
		VTOLYawInfluence=10;
		VTOLPitchInfluence=10;
		VTOLRollInfluence=6;
		envelope[]={0,0.0099999998,0.2,4,6,7.5999999,8.3999996,9.1999998,9.3999996,9.6000004,9.6999998,9.8000002,8,1};
		aileronSensitivity=1;
		aileronControlsSensitivityCoef=2;
		aileronCoef[]={.8,1,1,1.1,1.2,1.15,0.1};
		elevatorSensitivity=1;
		elevatorControlsSensitivityCoef=2;
		elevatorCoef[]={.8,1,1,1.1,1.2,1.15,0.1};
		rudderInfluence=1;
		rudderControlsSensitivityCoef=3;
		rudderCoef[]={10,10.5,12,13,13.05,13.1,13.15};
		flaps=0;
		airbrake=1;
		airBrakeFrictionCoef=30;
		tailhook=0;
		draconicForceXCoef=6.5999999;
		draconicForceYCoef=1.5;
		draconicForceZCoef=0.22;
		draconicTorqueXCoef[]={3.5,3,2.8,2.6500001,2.4749999,2.4000001,2.425,2.625,2.75,2.875,3};
		draconicTorqueYCoef[]={0,0.5,1.2,2,3,2.5999999,2.4000001,2.2,2,1.9,1.8};
		airFrictionCoefs2[]={0.001,0.0060000001,7.0000002e-005};
		airFrictionCoefs1[]={0.1,0.60000002,0.0066999998};
		airFrictionCoefs0[]={0,0,0};
		thrustCoef[]={2,1.96,1.89,1.76,1.71,1.6900001,1.66,1.5,1.3,1,0.89999998,0.81999999,0.33000001,0,0,0};
		altFullForce=2000;
		armor=200;
		armorStructural=1;
		armorFuel = 2;
		altFullForce=137400;
		altNoForce=172400;
		crewCrashProtection=0;
		explosionShielding=0.25;
		soundGetIn[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\VTOL_02\TO_getin",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\VTOL_02\getout",
			1,
			1,
			40
		};
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			3.1622801,
			1,
			900
		};
		soundEngineOnInt[]=
		{
			"3as\3as_laat\sounds\LAAT_Start.ogg",
			"1/2",
			1
		};
		soundEngineOnExt[]=
		{
			"3as\3as_laat\sounds\LAAT_Start.ogg",
			"1*1.5",
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"3as\3as_laat\sounds\LAAT_End.ogg",
			"1/2",
			1
		};
		soundEngineOffExt[]=
		{
			"3as\3as_laat\sounds\LAAT_End.ogg",
			"1*1.5",
			1,
			300
		};
		soundIncommingMissile[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",
			1,
			1.5
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					1,
					1,
					2100
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					1,
					1.2,
					2500
				};
				frequency=1;
				volume="camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_forsage_ext",
					1.41254,
					1.2,
					2800
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.4, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class TurbineOut
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					1,
					1,
					1800
				};
				frequency="rpm * (thrust/4 + 0.5)";
				volume="camPos * 2 * rpm * thrust * (rpm factor[0, 0.4])";
			};
			class TurbineHighOut
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					1,
					1,
					1800
				};
				frequency="1.7 * (rpm factor[-5,1])";
				volume="0.8 * camPos * (rpm factor[-1,1]) * (rpm factor[0, 0.4])";
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_02\noise",
					0.56234097,
					1,
					150
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class EngineLowInt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					0.63095701,
					1,
					2100
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighInt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					0.63095701,
					1.2,
					2500
				};
				frequency=1;
				volume="(1-camPos)*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class TurbineInt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					0.63095701,
					1,
					1800
				};
				frequency="rpm * (thrust/4 + 0.5)";
				volume="(1-camPos) * 2 * rpm * thrust * (rpm factor[0, 0.4])";
			};
			class TurbineHighInt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					0.63095701,
					1,
					1800
				};
				frequency="1.7 * (rpm factor[-5,1])";
				volume="0.8 * (1-camPos) * (rpm factor[-1,1]) * (rpm factor[0, 0.4])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1.77828,
					1,
					100
				};
				frequency=1;
				volume="camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * rain * (speed factor[50, 0])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.56234097,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
					1.99526,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * (gmeterZ factor[1.0, 2.5])";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					0.50118703,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[60,80])";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						1.25893,
						1,
						400
					};
					frequency="rotorSpeed";
					volume="3 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class RotorExt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						1.25893,
						1,
						1000
					};
					frequency="(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
					volume="3*camPos * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
				};
				class RotorSwist
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_01\rotor_swist",
						0.707946,
						1,
						300
					};
					frequency=1;
					volume=0;
				};
				class EngineInt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						0.79432797,
						1
					};
					frequency="rotorSpeed";
					volume="3*(1-camPos)*2*(0 max (rotorSpeed-0.4))";
				};
				class RotorInt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						0.63095701,
						1
					};
					frequency="(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
					volume="3*(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
				};
				class RotorBench
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_int_rotor_normal_bench",
						0.50118703,
						1,
						1000
					};
					frequency="(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
					volume="(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class EngineBench
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_ext_engine_bench",
						0.35481301,
						1,
						400
					};
					frequency="rotorSpeed";
					volume="(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
				};
				class WindBench
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_open_out",
						0.56234097,
						1,
						50
					};
					frequency=1;
					volume="4 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.316228,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.22387201,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.316228,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.22387201,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05])";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_int_open",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_open_int",
						1.12202,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class WindLateralMovementInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",
						1.99526,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
						0.316228,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
			class Waternoise_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\air_driving_in_water",
					0.707946,
					1,
					300
				};
				frequency="1";
				volume="(speed factor[0, 5]) * water * camPos + (speed factor[-0.1, -5]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int",
					0.56234097,
					1,
					100
				};
				frequency="1";
				volume="(speed factor[0, 5]) * water * (1-camPos) + (speed factor[-0.1, -5]) * water * (1-camPos)";
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3as_Laat\LAATI\Textures\LAAT_Wings_Doors_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Base_CO.paa"
		};
		class UserActions
		{
			class rampOpen
			{
				available=0;
				showWindow=0;
				displayName="Ramp Open";
				position="pilotview";
				radius=9;
				condition="(player == driver this) && (this animationphase 'ramp' ==0)";
				statement="this animateSource ['ramp',1,1];";
				onlyforplayer=0;
			};
			class rampClose
			{
				available=0;
				showWindow=0;
				displayName="Ramp Close";
				position="pilotview";
				radius=9;
				condition="(player == driver this) && (this animationphase 'ramp' ==1)";
				statement="this animateSource ['ramp',0,1];";
				onlyforplayer=0;
			};
		};
		ace_fastroping_enabled=1;
		ace_fastroping_ropeOrigins[]=
		{
			{1.5,1,-3.5},
			{1.5,2.5,-3.5},
			{1.5,-1,-3.5},
			{-1.5,1,-3.5},
			{-1.5,2.5,-3.5},
			{-1.5,-1,-3.5}
		};
		ace_fastroping_onCut="ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare="ace_fastroping_fnc_onPrepareCommon";
		slingLoadMaxCargoMass=5000000;
		radarType=8;
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		driverAction="LAAT_Pilot";
		getInAction="ChopperLight_L_In_H";
		getOutAction="GetOutLow";
		memoryPointsGetInCargo[]=
		{
			"pos_cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos_cargo_dir"
		};
		usePreciseGetInAction=0;
		memoryPointsGetInDriverPrecise="pos_driver";
		memorypointsgetindriver="pos_driver";
		memorypointsgetindriverdir="pos_driver_dir";
		memoryPointsGetInCargoPrecise[]=
		{
			"GetIn_Cargo",
			"GetIn_Cargo2"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		getInRadius=10;
		typicalCargo[]=
		{
			"B_HeliPilot_F"
		};
		memorypointlmissile="Rocket_1";
		memorypointrmissile="Rocket_2";
		memoryPointLRocket="Rocket_1";
		memoryPointRRocket="Rocket_2";
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"DBA_Aircraft_Lasers_Blue",
			"DBA_Aircraft_Heavy_Lasers_Blue",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag"
		};
		memoryPointGun[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunBeg[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunEnd[]=
		{
			"z_gunL_chamber",
			"z_gunR_chamber"
		};
		memoryPointDriverOptics="PilotCamera";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(15 / 120)";
					minFov="(15 / 120)";
					maxFov="(15 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(3.75 / 120)";
					minFov="(3.75 / 120)";
					maxFov="(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-120;
			maxTurn=120;
			initTurn=0;
			minElev=-120;
			maxElev=10;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		maximumLoad=25000;
		class SpeechVariants
		{
			class Default
			{
				speechplural[]=
				{
					"veh_air_gunship_p"
				};
				speechsingular[]=
				{
					"veh_air_gunship_s"
				};
			};
		};
		scopeCurator=2;
		transportsoldier=28;
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12,13,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11,12,13,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34};
		class Turrets: Turrets
		{
			class Copilot: MainTurret
			{
				memoryPointGun[]=
				{
					"b_start"
				};
				gunBeg="b_start";
				gunEnd="B_end";
				caneject=0;
				castgunnershadow=1;
				commanding=-1;
				discretedistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discretedistanceinitindex=5;
				gunneraction="LAAT_Pilot";
				gunnerforceoptics=0;
				displayname="CoPilot";
				gunnergetinaction="Heli_Attack_01_Gunner_Enter";
				gunnergetoutaction="Heli_Attack_01_Gunner_Exit";
				gunnerinaction="";
				gunnerlefthandanimname="lever_copilot";
				gunneropticseffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunneropticsmodel="";
				gunnerrighthandanimname="stick_copilot";
				initelev=-5;
				initturn=-180;
				iscopilot=1;
				maxelev=20;
				maxturn=-170;
				memorypointgunneroptics="backview";
				memorypointsgetingunner="pos_driver";
				memorypointsgetingunnerdir="pos_driver_dir";
				minelev=-20;
				minturn=-190;
				outgunnermayfire=1;
				precisegetinout=1;
				primarygunner=0;
				selectionfireanim="zasleh";
				soundservo[]=
				{
					"",
					0.0099999998,
					1
				};
				startengine=0;
				animationSourceBody="mainTurret5";
				animationsourcegun="Maingun5";
				animationsourcehatch="";
				body="mainTurret5";
				gun="Maingun5";
				memorypointlmissile="Rocket_1";
				memorypointrmissile="Rocket_2";
				memoryPointLRocket="Rocket_1";
				memoryPointRRocket="Rocket_2";
				turretinfotype="RscOptics_Heli_Attack_01_gunner";
				weapons[]=
				{
					"ParticleBeamCannon_B",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"Laser_Battery_F",
					"Laser_Battery_F"
				};
				class OpticsIn
				{
					class Wide
					{
						gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
						initanglex=0;
						initangley=0;
						initfov=0.46599999;
						maxanglex=30;
						maxangley=100;
						maxfov=0.46599999;
						minanglex=-30;
						minangley=-100;
						minfov=0.46599999;
						opticsdisplayname="W";
						thermalmode[]={0,1};
						visionmode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
					};
					class Medium: Wide
					{
						gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
						initfov=0.093000002;
						maxfov=0.093000002;
						minfov=0.093000002;
						opticsdisplayname="M";
					};
					class Narrow: Wide
					{
						gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initfov=0.028999999;
						maxfov=0.028999999;
						minfov=0.028999999;
						opticsdisplayname="N";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						gunneropticseffect[]={};
						gunneropticsmodel="";
						initanglex=0;
						initangley=0;
						initfov=1.1;
						maxanglex=30;
						maxangley=100;
						maxfov=1.1;
						minanglex=-30;
						minangley=-100;
						minfov=0.133;
						visionmode[]=
						{
							"Normal",
							"NVG"
						};
					};
				};
				class HitTurret
				{
					armor=0.80000001;
					material=-1;
					name="gun1";
					passthrough=0.5;
					visual="gun1";
				};
				class HitGun
				{
					armor=0.40000001;
					material=-1;
					name="gun2";
					passthrough=0.2;
					visual="gun2";
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_5";
				canHideGunner=0;
				gunnerCompartments="Compartment2";
				getOutAction="GetOutLow";
				memoryPointsGetInCargo[]=
				{
					"pos_cargo"
				};
				memoryPointsGetInCargoDir[]=
				{
					"pos_cargo_dir"
				};
				gunnerName="Ramp Gunner (Left)";
				proxyIndex=15;
				soundAttenuationTurret="HeliAttenuationGunner";
				isPersonTurret=1;
				ejectDeadGunner=1;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
				playerPosition=4;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment3";
				getOutAction="GetOutLow";
				memoryPointsGetInCargo[]=
				{
					"pos_cargo"
				};
				memoryPointsGetInCargoDir[]=
				{
					"pos_cargo_dir"
				};
				gunnerName="Ramp Gunner (Right)";
				proxyIndex=14;
				class dynamicViewLimits
				{
					CargoTurret_01[]={-65,95};
				};
			};
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"Limit1",
					"limit2"
				};
				disableHeightLimit=1;
				maxLoadMass=200000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0.15000001,0};
				exits[]=
				{
					"ramp_exit"
				};
				unloadingInterval=2;
				loadingDistance=10;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=50;
			};
		};
		defaultUserMFDvalues[]={0,1,0,1,0};
		class MFD
		{
			class B_Plane_Fighter_01_static_HUD
			{
				enableParallax=0;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.032499999,0.032499999,0.1};
				helmetRight[]={0.064999998,0,0};
				helmetDown[]={0,-0.064999998,0};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class PlaneOrientation
					{
						type="vector";
						source="forward";
						pos[]={0.5,0.5};
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98540199;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class ThrustVectoringRotation
					{
						type="rotational";
						source="vtolvectoring";
						sourceScale=100;
						center[]={0.89899999,0.5};
						min=0;
						max=100;
						minAngle=180;
						maxAngle=270;
						aspectRatio=0.98290598;
					};
					class Target
					{
						type="vector";
						source="targetToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodDir
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodTarget
					{
						source="pilotcameratargettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPointRelative
					{
						type="vector";
						source="impactpointtoviewweaponRelative";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=0.98540199;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.2,0.1,0.80000001,0.1};
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WPPointToView: WPPoint
					{
						source="WPPointToView";
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1ToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Airport2: Airport1
					{
						source="airportCorner2ToView";
					};
					class Airport3: Airport1
					{
						source="airportCorner3ToView";
					};
					class Airport4: Airport1
					{
						source="airportCorner4ToView";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.58219999,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.58099997};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min="-rad(30)";
						max="rad(30)";
						minAngle="180.25-30";
						maxAngle="180.75+30";
						aspectRatio=1;
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.5};
						pos10[]={0.884,0.88};
						type="horizontoview";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					width=1;
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="(1 - (cameraHeadingDiffY<=-40) + (abs(cameraHeadingDiffX)>=30))*on";
					class VelocityLine
					{
						type="line";
						width=1;
						points[]=
						{
							
							{
								"PlaneW",
								1
							},
							
							{
								"Velocity",
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.0049145301},
								1
							},
							
							{
								"Velocity",
								{0.0024999999,-0.0042559798},
								1
							},
							
							{
								"Velocity",
								{0.0043299999,-0.0024572599},
								1
							},
							
							{
								"Velocity",
								{0.0049999999,0},
								1
							},
							
							{
								"Velocity",
								{0.0043299999,0.0024572599},
								1
							},
							
							{
								"Velocity",
								{0.0024999999,0.0042559798},
								1
							},
							
							{
								"Velocity",
								{0,0.0049145301},
								1
							},
							
							{
								"Velocity",
								{-0.0024999999,0.0042559798},
								1
							},
							
							{
								"Velocity",
								{-0.0043299999,0.0024572599},
								1
							},
							
							{
								"Velocity",
								{-0.0049999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.0043299999,-0.0024572599},
								1
							},
							
							{
								"Velocity",
								{-0.0024999999,-0.0042559798},
								1
							},
							
							{
								"Velocity",
								{0,-0.0049145301},
								1
							},
							{}
						};
					};
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.039999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.039999999,0},
								1
							}
						};
					};
					class PlaneMovementCrosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type="line";
							width=1.5;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=1.5;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								}
							};
						};
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.19,0.55000001},
									1
								},
								
								{
									{0.19,0.70999998},
									1
								},
								
								{
									{0.20999999,0.70999998},
									1
								},
								{},
								
								{
									{0.20999999,0.67000002},
									1
								},
								
								{
									{0.19,0.67000002},
									1
								},
								{},
								
								{
									{0.20999999,0.63},
									1
								},
								
								{
									{0.19,0.63},
									1
								},
								{},
								
								{
									{0.20999999,0.58999997},
									1
								},
								
								{
									{0.19,0.58999997},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.73000002},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.19,0.70999998},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.69},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.208,0.70999998},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.208,0.70999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.22,0.52999997},
								1
							};
							right[]=
							{
								{0.25999999,0.52999997},
								1
							};
							down[]=
							{
								{0.22,0.56999999},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.22,0.61000001},
								1
							};
							right[]=
							{
								{0.25999999,0.61000001},
								1
							};
							down[]=
							{
								{0.22,0.64999998},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.69},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.2,0.69},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.73000002},
								1
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.039416101},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsText
					{
						condition="1- mgun";
						class WeaponsText
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class MGunText
					{
						condition="mgun";
						class WeaponsText
						{
							type="text";
							source="static";
							text="GUN";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.032000002,0.88},
							1
						};
						right[]=
						{
							{0.086999997,0.88},
							1
						};
						down[]=
						{
							{0.032000002,0.92500001},
							1
						};
					};
					class Laser
					{
						condition="laseron";
						class LaserText
						{
							type="text";
							source="static";
							text="LASER";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.80000001},
								1
							};
							right[]=
							{
								{0.98699999,0.80000001},
								1
							};
							down[]=
							{
								{0.93199998,0.84500003},
								1
							};
						};
					};
					class TargetLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						color[]={1,0,0};
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21678799},
								1
							};
							right[]=
							{
								{0.54500002,0.21678799},
								1
							};
							down[]=
							{
								{0.48500001,0.266058},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class MainCenterLine1
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.44999999,0},
								1
							}
						};
					};
					class MainCenterLine2
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.33000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.25,0},
								1
							}
						};
					};
					class MainCenterLine3
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{0.25,0},
								1
							}
						};
					};
					class SpeedIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							}
						};
					};
					class BrakesWarn
					{
						type="text";
						source="userText";
						sourceScale=1;
						sourceIndex=5;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38,-0.30000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.38 + 0.05",
								-0.30000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38,
								"-0.3 + 0.05"
							},
							1
						};
					};
					class OverSpeedGroup
					{
						type="group";
						condition="speed > 185";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class SpeedNumber
						{
							type="text";
							source="speed";
							sourceScale=3.5999999;
							align="center";
							scale=1;
							pos[]=
							{
								"PlaneW",
								{-0.40000001,-0.25},
								1
							};
							right[]=
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							};
							down[]=
							{
								"PlaneW",
								{-0.40000001,-0.2},
								1
							};
						};
						class OverSpeedWarn
						{
							type="text";
							source="static";
							align="left";
							text="-OVERSPEED-";
							scale=1;
							pos[]=
							{
								"PlaneW",
								{-0.30000001,-0.17},
								1
							};
							right[]=
							{
								"PlaneW",
								
								{
									"-0.3 + 0.05",
									-0.17
								},
								1
							};
							down[]=
							{
								"PlaneW",
								
								{
									-0.30000001,
									"-0.17 + 0.05"
								},
								1
							};
						};
					};
					class ThrottleNumber
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.40000001,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"0.4 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.40000001,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class ThrottleText
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							"PlaneW",
							{0.43000001,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"0.43 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.43000001,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class ThrustVectoring
					{
						condition="1+vtolvectoring";
						class VectoringNumber
						{
							type="text";
							source="vtolvectoring";
							sourceScale=90;
							align="left";
							scale=1;
							pos[]=
							{
								{0.88,0.5},
								1
							};
							right[]=
							{
								{0.93000001,0.5},
								1
							};
							down[]=
							{
								{0.88,0.53500003},
								1
							};
						};
						class VectoringArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ThrustVectoringRotation",
									{-0.034000002,-0.0060000001},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.044,0},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.034000002,0.0060000001},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.034000002,-0.0060000001},
									1
								},
								{},
								
								{
									"ThrustVectoringRotation",
									{-0.044,0},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.0040000002,0},
									1
								},
								{}
							};
						};
					};
					class ThrustVectoringAuto
					{
						condition="-vtolvectoring";
						class VectoringText
						{
							type="text";
							source="static";
							text="AUTO";
							align="left";
							scale=1;
							pos[]=
							{
								{0.889,0.54000002},
								1
							};
							right[]=
							{
								{0.93900001,0.54000002},
								1
							};
							down[]=
							{
								{0.889,0.57499999},
								1
							};
						};
					};
					class AlphaNumber
					{
						type="text";
						source="AoA";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.162},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.162
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"0.162 + 0.05"
							},
							1
						};
					};
					class AlphaText
					{
						type="text";
						source="static";
						text="AoA:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.162},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.162
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"0.162 + 0.05"
							},
							1
						};
					};
					class GNumber
					{
						type="text";
						source="userText";
						sourceIndex=4;
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.213},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.213
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"0.213 + 0.05"
							},
							1
						};
					};
					class GText
					{
						type="text";
						source="static";
						text="G:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.213},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.213
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"0.213 + 0.05"
							},
							1
						};
					};
					class SpeedGroup
					{
						type="group";
						condition="speed < 185";
						class SpeedNumber
						{
							type="text";
							source="speed";
							sourceScale=3.5999999;
							align="center";
							scale=1;
							pos[]=
							{
								"PlaneW",
								{-0.40000001,-0.25},
								1
							};
							right[]=
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							};
							down[]=
							{
								"PlaneW",
								{-0.40000001,-0.2},
								1
							};
						};
					};
					class Grid
					{
						condition="on";
						class CoordXNumber
						{
							type="text";
							source="coordinateX";
							sourceScale=0.0099999998;
							sourceLength=3;
							sourceOffset=-0.5;
							align="left";
							scale=1;
							pos[]=
							{
								{0.90600002,0.85399997},
								1
							};
							right[]=
							{
								{0.954,0.85399997},
								1
							};
							down[]=
							{
								{0.90600002,0.89899999},
								1
							};
						};
						class CoordYNumber: CoordXNumber
						{
							source="coordinateY";
							align="right";
							pos[]=
							{
								{0.92199999,0.85399997},
								1
							};
							right[]=
							{
								{0.96700001,0.85399997},
								1
							};
							down[]=
							{
								{0.92199999,0.89899999},
								1
							};
						};
						class Time: CoordXNumber
						{
							source="time";
							text="%X";
							align="center";
							pos[]=
							{
								{0.90700001,0.88},
								1
							};
							right[]=
							{
								{0.95499998,0.88},
								1
							};
							down[]=
							{
								{0.90700001,0.92500001},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class AltitudeIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							}
						};
					};
					class AltitudeNumberASL
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.47999999,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.40000001,-0.2},
							1
						};
					};
					class AltitudeRadarText
					{
						type="text";
						source="static";
						text="R";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							"PlaneW",
							{0.31999999,-0.192},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"+0.32 + 0.04",
								-0.192
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.31999999,
								"-0.192 + 0.041"
							},
							1
						};
					};
					class AltitudeNumberAGL
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.47999999,-0.19},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.54000002,-0.19},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.47999999,-0.15000001},
							1
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="P:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="R:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="C:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class HeadingArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.02,0.041999999},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0,0.022},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.02,0.041999999},
								1
							}
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.92400002,0.60501802},
								1
							};
							down[]=
							{
								{0.92400002,0.64246398},
								1
							};
							right[]=
							{
								{0.96399999,0.60501802},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.87699997,0.60501802},
								1
							};
							right[]=
							{
								{0.917,0.60501802},
								1
							};
							down[]=
							{
								{0.87699997,0.64246398},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="WP";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.825+0.01",
									0.60650003
								},
								1
							};
							right[]=
							{
								{0.875,0.60650003},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.01",
									0.6415
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text=":";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.825+0.09",
									0.60650003
								},
								1
							};
							right[]=
							{
								{0.95499998,0.60650003},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.09",
									0.6415
								},
								1
							};
						};
					};
					class HeadingRotation
					{
						condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type="text";
							source="cameraDir";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.80-0.302",
									"0.082+0.065"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.065"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.065"
								},
								1
							};
						};
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.48800001,0.141},
									1
								},
								
								{
									{0.51200002,0.141},
									1
								},
								
								{
									{0.542,0.161},
									1
								},
								
								{
									{0.51200002,0.18099999},
									1
								},
								
								{
									{0.48800001,0.18099999},
									1
								},
								
								{
									{0.458,0.161},
									1
								},
								
								{
									{0.48800001,0.141},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						NeverEatSeaWeed=1;
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=3;
						top=0.1;
						center=0.5;
						bottom=0.89999998;
						lineXleft=0.105;
						lineYright=0.115;
						lineXleftMajor=0.094999999;
						lineYrightMajor=0.115;
						majorLineEach=5;
						numberEach=5;
						step="18 / 9";
						stepSize="(0.70 - 0.3) / 15";
						align="center";
						scale=1;
						pos[]={0.096000001,0.0546};
						right[]={0.14300001,0.0546};
						down[]={0.096000001,0.093000002};
					};
					class HeadingIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							}
						};
					};
					class HeadingIndicatorArrow
					{
						type="polygon";
						points[]=
						{
							
							{
								
								{
									"PlaneW",
									{-0.015,-0.45500001},
									1
								},
								
								{
									"PlaneW",
									{0,-0.44499999},
									1
								},
								
								{
									"PlaneW",
									{0.015,-0.45500001},
									1
								}
							}
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5			)"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								0.029999999,
								"(-0.5			)"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5 + 0.045	)"
							},
							1
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									-0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							}
						};
					};
					class HorizonBankRotLines
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.619959,0.71298599},
								1
							},
							
							{
								{0.63143897,0.74420297},
								1
							},
							{},
							
							{
								{0.58291,0.73901898},
								1
							},
							
							{
								{0.58808702,0.76077801},
								1
							},
							{},
							
							{
								{0.54057401,0.74850398},
								1
							},
							
							{
								{0.54318398,0.77083802},
								1
							},
							{},
							
							{
								{0.4975,0.740421},
								1
							},
							
							{
								{0.4975,0.77420998},
								1
							},
							{},
							
							{
								{0.45442599,0.74850398},
								1
							},
							
							{
								{0.45181599,0.77083802},
								1
							},
							{},
							
							{
								{0.41209,0.73901898},
								1
							},
							
							{
								{0.40691301,0.76077801},
								1
							},
							{},
							
							{
								{0.37504101,0.71298599},
								1
							},
							
							{
								{0.363561,0.74420297},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0.2,0.2};
						clipBR[]={0.80000001,0.80000001};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
						};
						class HideOnTurn
						{
							condition="20-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=340)) ";
							class Limiter
							{
								class Level0
								{
									type="line";
									width=2;
									points[]={};
								};
								class LevelM5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM5",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.22,0},
											1
										},
										
										{
											"LevelM5",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.19,0},
											1
										},
										
										{
											"LevelM5",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.16,0},
											1
										},
										
										{
											"LevelM5",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.13,0},
											1
										},
										
										{
											"LevelM5",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.1,0},
											1
										},
										
										{
											"LevelM5",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.07,0},
											1
										},
										
										{
											"LevelM5",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM5",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.22,0},
											1
										},
										
										{
											"LevelM5",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.19,0},
											1
										},
										
										{
											"LevelM5",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.16,0},
											1
										},
										
										{
											"LevelM5",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.13,0},
											1
										},
										
										{
											"LevelM5",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.1,0},
											1
										},
										
										{
											"LevelM5",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.07,0},
											1
										},
										
										{
											"LevelM5",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_5
								{
									type="text";
									source="static";
									text=-5;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_5_R
								{
									type="text";
									source="static";
									text=-5;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP5",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_5
								{
									type="text";
									source="static";
									text="5";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_5_R
								{
									type="text";
									source="static";
									text="5";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM10",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.22,0},
											1
										},
										
										{
											"LevelM10",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.19,0},
											1
										},
										
										{
											"LevelM10",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.16,0},
											1
										},
										
										{
											"LevelM10",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.13,0},
											1
										},
										
										{
											"LevelM10",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.1,0},
											1
										},
										
										{
											"LevelM10",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.07,0},
											1
										},
										
										{
											"LevelM10",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM10",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.22,0},
											1
										},
										
										{
											"LevelM10",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.19,0},
											1
										},
										
										{
											"LevelM10",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.16,0},
											1
										},
										
										{
											"LevelM10",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.13,0},
											1
										},
										
										{
											"LevelM10",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.1,0},
											1
										},
										
										{
											"LevelM10",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.07,0},
											1
										},
										
										{
											"LevelM10",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_10
								{
									type="text";
									source="static";
									text=-10;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_10_R
								{
									type="text";
									source="static";
									text=-10;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP10",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_10
								{
									type="text";
									source="static";
									text="10";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_10_R
								{
									type="text";
									source="static";
									text="10";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM15",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.22,0},
											1
										},
										
										{
											"LevelM15",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.19,0},
											1
										},
										
										{
											"LevelM15",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.16,0},
											1
										},
										
										{
											"LevelM15",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.13,0},
											1
										},
										
										{
											"LevelM15",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.1,0},
											1
										},
										
										{
											"LevelM15",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.07,0},
											1
										},
										
										{
											"LevelM15",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM15",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.22,0},
											1
										},
										
										{
											"LevelM15",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.19,0},
											1
										},
										
										{
											"LevelM15",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.16,0},
											1
										},
										
										{
											"LevelM15",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.13,0},
											1
										},
										
										{
											"LevelM15",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.1,0},
											1
										},
										
										{
											"LevelM15",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.07,0},
											1
										},
										
										{
											"LevelM15",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_15
								{
									type="text";
									source="static";
									text=-15;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_15_R
								{
									type="text";
									source="static";
									text=-15;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP15",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_15
								{
									type="text";
									source="static";
									text="15";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_15_R
								{
									type="text";
									source="static";
									text="15";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM20",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.22,0},
											1
										},
										
										{
											"LevelM20",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.19,0},
											1
										},
										
										{
											"LevelM20",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.16,0},
											1
										},
										
										{
											"LevelM20",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.13,0},
											1
										},
										
										{
											"LevelM20",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.1,0},
											1
										},
										
										{
											"LevelM20",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.07,0},
											1
										},
										
										{
											"LevelM20",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM20",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.22,0},
											1
										},
										
										{
											"LevelM20",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.19,0},
											1
										},
										
										{
											"LevelM20",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.16,0},
											1
										},
										
										{
											"LevelM20",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.13,0},
											1
										},
										
										{
											"LevelM20",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.1,0},
											1
										},
										
										{
											"LevelM20",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.07,0},
											1
										},
										
										{
											"LevelM20",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_20
								{
									type="text";
									source="static";
									text=-20;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_20_R
								{
									type="text";
									source="static";
									text=-20;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP20",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_20
								{
									type="text";
									source="static";
									text="20";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_20_R
								{
									type="text";
									source="static";
									text="20";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM25",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.22,0},
											1
										},
										
										{
											"LevelM25",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.19,0},
											1
										},
										
										{
											"LevelM25",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.16,0},
											1
										},
										
										{
											"LevelM25",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.13,0},
											1
										},
										
										{
											"LevelM25",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.1,0},
											1
										},
										
										{
											"LevelM25",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.07,0},
											1
										},
										
										{
											"LevelM25",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM25",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.22,0},
											1
										},
										
										{
											"LevelM25",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.19,0},
											1
										},
										
										{
											"LevelM25",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.16,0},
											1
										},
										
										{
											"LevelM25",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.13,0},
											1
										},
										
										{
											"LevelM25",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.1,0},
											1
										},
										
										{
											"LevelM25",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.07,0},
											1
										},
										
										{
											"LevelM25",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_25
								{
									type="text";
									source="static";
									text=-25;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_25_R
								{
									type="text";
									source="static";
									text=-25;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP25",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_25
								{
									type="text";
									source="static";
									text="25";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_25_R
								{
									type="text";
									source="static";
									text="25";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM30",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.22,0},
											1
										},
										
										{
											"LevelM30",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.19,0},
											1
										},
										
										{
											"LevelM30",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.16,0},
											1
										},
										
										{
											"LevelM30",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.13,0},
											1
										},
										
										{
											"LevelM30",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.1,0},
											1
										},
										
										{
											"LevelM30",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.07,0},
											1
										},
										
										{
											"LevelM30",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM30",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.22,0},
											1
										},
										
										{
											"LevelM30",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.19,0},
											1
										},
										
										{
											"LevelM30",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.16,0},
											1
										},
										
										{
											"LevelM30",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.13,0},
											1
										},
										
										{
											"LevelM30",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.1,0},
											1
										},
										
										{
											"LevelM30",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.07,0},
											1
										},
										
										{
											"LevelM30",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_30
								{
									type="text";
									source="static";
									text=-30;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_30_R
								{
									type="text";
									source="static";
									text=-30;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP30",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_30
								{
									type="text";
									source="static";
									text="30";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_30_R
								{
									type="text";
									source="static";
									text="30";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM35",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.22,0},
											1
										},
										
										{
											"LevelM35",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.19,0},
											1
										},
										
										{
											"LevelM35",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.16,0},
											1
										},
										
										{
											"LevelM35",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.13,0},
											1
										},
										
										{
											"LevelM35",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.1,0},
											1
										},
										
										{
											"LevelM35",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.07,0},
											1
										},
										
										{
											"LevelM35",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM35",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.22,0},
											1
										},
										
										{
											"LevelM35",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.19,0},
											1
										},
										
										{
											"LevelM35",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.16,0},
											1
										},
										
										{
											"LevelM35",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.13,0},
											1
										},
										
										{
											"LevelM35",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.1,0},
											1
										},
										
										{
											"LevelM35",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.07,0},
											1
										},
										
										{
											"LevelM35",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_35
								{
									type="text";
									source="static";
									text=-35;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_35_R
								{
									type="text";
									source="static";
									text=-35;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP35",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_35
								{
									type="text";
									source="static";
									text="35";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_35_R
								{
									type="text";
									source="static";
									text="35";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM40",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.22,0},
											1
										},
										
										{
											"LevelM40",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.19,0},
											1
										},
										
										{
											"LevelM40",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.16,0},
											1
										},
										
										{
											"LevelM40",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.13,0},
											1
										},
										
										{
											"LevelM40",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.1,0},
											1
										},
										
										{
											"LevelM40",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.07,0},
											1
										},
										
										{
											"LevelM40",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM40",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.22,0},
											1
										},
										
										{
											"LevelM40",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.19,0},
											1
										},
										
										{
											"LevelM40",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.16,0},
											1
										},
										
										{
											"LevelM40",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.13,0},
											1
										},
										
										{
											"LevelM40",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.1,0},
											1
										},
										
										{
											"LevelM40",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.07,0},
											1
										},
										
										{
											"LevelM40",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_40
								{
									type="text";
									source="static";
									text=-40;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_40_R
								{
									type="text";
									source="static";
									text=-40;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP40",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_40
								{
									type="text";
									source="static";
									text="40";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_40_R
								{
									type="text";
									source="static";
									text="40";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM45",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.22,0},
											1
										},
										
										{
											"LevelM45",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.19,0},
											1
										},
										
										{
											"LevelM45",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.16,0},
											1
										},
										
										{
											"LevelM45",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.13,0},
											1
										},
										
										{
											"LevelM45",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.1,0},
											1
										},
										
										{
											"LevelM45",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.07,0},
											1
										},
										
										{
											"LevelM45",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM45",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.22,0},
											1
										},
										
										{
											"LevelM45",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.19,0},
											1
										},
										
										{
											"LevelM45",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.16,0},
											1
										},
										
										{
											"LevelM45",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.13,0},
											1
										},
										
										{
											"LevelM45",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.1,0},
											1
										},
										
										{
											"LevelM45",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.07,0},
											1
										},
										
										{
											"LevelM45",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_45
								{
									type="text";
									source="static";
									text=-45;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_45_R
								{
									type="text";
									source="static";
									text=-45;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP45",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_45
								{
									type="text";
									source="static";
									text="45";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_45_R
								{
									type="text";
									source="static";
									text="45";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM50",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.22,0},
											1
										},
										
										{
											"LevelM50",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.19,0},
											1
										},
										
										{
											"LevelM50",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.16,0},
											1
										},
										
										{
											"LevelM50",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.13,0},
											1
										},
										
										{
											"LevelM50",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.1,0},
											1
										},
										
										{
											"LevelM50",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.07,0},
											1
										},
										
										{
											"LevelM50",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM50",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.22,0},
											1
										},
										
										{
											"LevelM50",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.19,0},
											1
										},
										
										{
											"LevelM50",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.16,0},
											1
										},
										
										{
											"LevelM50",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.13,0},
											1
										},
										
										{
											"LevelM50",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.1,0},
											1
										},
										
										{
											"LevelM50",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.07,0},
											1
										},
										
										{
											"LevelM50",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_50
								{
									type="text";
									source="static";
									text=-50;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_50_R
								{
									type="text";
									source="static";
									text=-50;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP50",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_50
								{
									type="text";
									source="static";
									text="50";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_50_R
								{
									type="text";
									source="static";
									text="50";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM60",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.22,0},
											1
										},
										
										{
											"LevelM60",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.19,0},
											1
										},
										
										{
											"LevelM60",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.16,0},
											1
										},
										
										{
											"LevelM60",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.13,0},
											1
										},
										
										{
											"LevelM60",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.1,0},
											1
										},
										
										{
											"LevelM60",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.07,0},
											1
										},
										
										{
											"LevelM60",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM60",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.22,0},
											1
										},
										
										{
											"LevelM60",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.19,0},
											1
										},
										
										{
											"LevelM60",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.16,0},
											1
										},
										
										{
											"LevelM60",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.13,0},
											1
										},
										
										{
											"LevelM60",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.1,0},
											1
										},
										
										{
											"LevelM60",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.07,0},
											1
										},
										
										{
											"LevelM60",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_60
								{
									type="text";
									source="static";
									text=-60;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_60_R
								{
									type="text";
									source="static";
									text=-60;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP60",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_60
								{
									type="text";
									source="static";
									text="60";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_60_R
								{
									type="text";
									source="static";
									text="60";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM70",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.22,0},
											1
										},
										
										{
											"LevelM70",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.19,0},
											1
										},
										
										{
											"LevelM70",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.16,0},
											1
										},
										
										{
											"LevelM70",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.13,0},
											1
										},
										
										{
											"LevelM70",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.1,0},
											1
										},
										
										{
											"LevelM70",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.07,0},
											1
										},
										
										{
											"LevelM70",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM70",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.22,0},
											1
										},
										
										{
											"LevelM70",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.19,0},
											1
										},
										
										{
											"LevelM70",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.16,0},
											1
										},
										
										{
											"LevelM70",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.13,0},
											1
										},
										
										{
											"LevelM70",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.1,0},
											1
										},
										
										{
											"LevelM70",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.07,0},
											1
										},
										
										{
											"LevelM70",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_70
								{
									type="text";
									source="static";
									text=-70;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_70_R
								{
									type="text";
									source="static";
									text=-70;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP70",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_70
								{
									type="text";
									source="static";
									text="70";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_70_R
								{
									type="text";
									source="static";
									text="70";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM80",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.22,0},
											1
										},
										
										{
											"LevelM80",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.19,0},
											1
										},
										
										{
											"LevelM80",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.16,0},
											1
										},
										
										{
											"LevelM80",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.13,0},
											1
										},
										
										{
											"LevelM80",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.1,0},
											1
										},
										
										{
											"LevelM80",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.07,0},
											1
										},
										
										{
											"LevelM80",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM80",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.22,0},
											1
										},
										
										{
											"LevelM80",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.19,0},
											1
										},
										
										{
											"LevelM80",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.16,0},
											1
										},
										
										{
											"LevelM80",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.13,0},
											1
										},
										
										{
											"LevelM80",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.1,0},
											1
										},
										
										{
											"LevelM80",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.07,0},
											1
										},
										
										{
											"LevelM80",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_80
								{
									type="text";
									source="static";
									text=-80;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_80_R
								{
									type="text";
									source="static";
									text=-80;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP80",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_80
								{
									type="text";
									source="static";
									text="80";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_80_R
								{
									type="text";
									source="static";
									text="80";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM90",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.22,0},
											1
										},
										
										{
											"LevelM90",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.19,0},
											1
										},
										
										{
											"LevelM90",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.16,0},
											1
										},
										
										{
											"LevelM90",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.13,0},
											1
										},
										
										{
											"LevelM90",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.1,0},
											1
										},
										
										{
											"LevelM90",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.07,0},
											1
										},
										
										{
											"LevelM90",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM90",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.22,0},
											1
										},
										
										{
											"LevelM90",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.19,0},
											1
										},
										
										{
											"LevelM90",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.16,0},
											1
										},
										
										{
											"LevelM90",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.13,0},
											1
										},
										
										{
											"LevelM90",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.1,0},
											1
										},
										
										{
											"LevelM90",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.07,0},
											1
										},
										
										{
											"LevelM90",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_90
								{
									type="text";
									source="static";
									text=-90;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_90_R
								{
									type="text";
									source="static";
									text=-90;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP90",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_90
								{
									type="text";
									source="static";
									text="90";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_90_R
								{
									type="text";
									source="static";
									text="90";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{0.25999999,0.033},
										1
									};
								};
							};
						};
						class UnhideOnTurn
						{
							condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=340)-20";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.02,0},
										1
									},
									
									{
										"PlaneW",
										{-0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0.02,0},
										1
									},
									
									{
										"PlaneW",
										{0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,-0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,-0.039416101},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,0.039416101},
										1
									},
									{}
								};
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.773,0.773};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,-0.0020000001},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								}
							};
						};
					};
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			class MFDColors
			{

			};
			LAAT_LIGHTS
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 400;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 2000;
						maxFogSeeThrough = 0.995;
						color[] = {1, 0, 0, 1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 100;
						aimDown = 1;
						animDirection = ""; //@@@@@@
						componentType = "VisualSensorComponent";
						nightRangeCoef = 0;
						maxFogSeeThrough = 0.94;
						color[] = {1, 1, 0.5, 0.80000001};
						typeRecognitionDistance = 2000;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
						componentType = "PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange = 45000;
							maxRange = 45000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 12000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						color[] = {0.5, 1, 0.5, 0.5};
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
						allowsMarking = 0;
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 8000;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = 0.2;
						componentType = "ActiveRadarSensorComponent";
						maxGroundNoiseDistance = 200;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						color[] = {0, 1, 1, 1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						componentType = "LaserSensorComponent";
						class AirTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						typeRecognitionDistance = 0;
						color[] = {1, 1, 1, 0};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class NVSensorComponent : SensorTemplateNV
					{
						componentType = "NVSensorComponent";
						color[] = {1, 1, 1, 0};
						typeRecognitionDistance = 0;
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,4000,2000,16000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,4000,2000,16000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture="\kobra\442_a_vehicle\laat\data\ui\laat_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="DBA_pylon_lgm_x3_mag";
						priority=5;
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						turret[]={};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						priority=4;
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						attachment="DBA_pylon_lgm_x3_mag";
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						priority=3;
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						attachment="DBA_pylon_lgm_x3_mag";
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[]={0.58999997,0.30000001};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.62,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.63999999,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
	};
	class 101st_laat_VTOL_Refit : 101st_laat_VTOL_Refit_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author = "Muttie The Modder";
		displayName = "101st LAAT/I VTOL Refit";
		faction="Republic_101st";	

		//I personally think this is cursed af - Trip
	};

	class 3as_nuclass_f;
	class 101st_Nuclass: 3as_nuclass_f
	{
		faction="Republic_101st";
		displayName="101st Nu Class Shuttle";
		author="Trip";

		scope=2;
		scopeCurator=2;

		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"DBA_Aircraft_Lasers_Blue",
			"DBA_Aircraft_Heavy_Lasers_Blue",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag",
			"DBA_generic_aircraft_cannon_blue_x200_mag"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\Vehicles\Nu\exterior_CO.paa",
			"101st_Aux_Mod\Addons\Vehicles\Nu\wings_CO.paa",
			"101st_Aux_Mod\Addons\Vehicles\Nu\interior_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\Nu\cockpit_doors_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"101st_Aux_Mod\Addons\Vehicles\Nu\NU-Exterior.rvmat",
			"101st_Aux_Mod\Addons\Vehicles\Nu\NU-Wings.rvmat",
			"101st_Aux_Mod\Addons\Vehicles\Nu\NU-Interior.rvmat",
			"101st_Aux_Mod\Addons\Vehicles\Nu\NU-Cockpit.rvmat"
		};
		class ViewPilot
		{
			initAngleX = 0;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = -100;
			maxMoveX = 100;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(75 / 120)";
					minFov="(75 / 120)";
					maxFov="(75 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1,7};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="0.425/4";
					minFov="0.425/4";
					maxFov="0.425/4";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/8";
					minFov="0.425/8";
					maxFov="0.425/8";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX16: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/16";
					minFov="0.425/16";
					maxFov="0.425/16";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX24: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/24";
					minFov="0.425/24";
					maxFov="0.425/24";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX36: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/36";
					minFov="0.425/36";
					maxFov="0.425/36";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX48: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/48";
					minFov="0.425/48";
					maxFov="0.425/48";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX60: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/60";
					minFov="0.425/60";
					maxFov="0.425/60";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX80: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/80";
					minFov="0.425/80";
					maxFov="0.425/80";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX100: Wide
				{
					opticsDisplayName="NFOV";
					initFov="0.425/100";
					minFov="0.425/100";
					maxFov="0.425/100";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class HitPoints
		{
			class HitHull
			{
				armor = 2;
				convexComponent = "hull_hit";
				depends = "Total";
				explosionShielding = 1;
				material = 51;
				name = "hull_hit";
				passThrough = 1;
				visual = "zbytek";
				radius = 0.01;
			};
			class HitFuel
			{
				convexcomponent = "engine_hit";
				hitpoint = "engine_hit";
				name = "engine_hit";
				explosionShielding = 2;
				radius = 0.1;
				visual = "";
				passthrough = 0.1;
				minimalhit = 0.1;
				material = -1;
				armor = 0.8;
			};
			class HitEngine
			{
				armor = 0.8;
				convexComponent = "engine_hit";
				explosionShielding = 2;
				material = 51;
				name = "engine_hit";
				hitpoint = "engine_hit";
				passThrough = 1;
				visual = "";
				radius = 0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent = "engine_hit_1";
				name = "engine_hit_1";
				hitpoint = "engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent = "engine_hit_2";
				name = "engine_hit_2";
				hitpoint = "engine_hit_2";
			};
			class HitAvionics
			{
				armor = 1.5;
				convexComponent = "avionics_hit";
				explosionShielding = 2;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual = "";
				radius = 0.5;
			};
		};
		scope=2;
		side=1;
		crew="101st_Pilot_212th";
		armor=1300;
		class UserActions
		{
			class rampOpen
			{
				
				displayName = "Cargo Ramp Open";
				position = "cargoaction";
				radius = 12;
				condition = "(this animationSourcePhase 'ramp' ==0 AND (alive this))";
				statement = "this animateSource ['ramp',1]";
				onlyforplayer = 0;
				role = 0;
			};
			class rampClose:rampOpen//''
			{
				
				displayName = "Cargo Ramp Close";
				position = "cargoaction";
				radius = 12;
				condition = "(this animationSourcePhase 'ramp' ==1 AND (alive this))";
				statement = "this animateSource ['ramp',0]";				
				onlyforplayer = 0;
			};
			class frontrampOpen
			{
				role = 0;
				displayName = "Ramp Open";
				position = "frontaction";
				radius = 12;
				condition = "(this animationSourcePhase 'rampfront' ==0 AND (alive this))";
				statement = "this animateSource ['rampfront',1]";
				onlyforplayer = 0;
			
			};
			class frontrampClose:frontrampOpen//''
			{
				displayName = "Ramp Close";
				position = "frontaction";
				radius =12;
				condition = "(this animationSourcePhase 'rampfront' ==1 AND (alive this))";
				statement = "this animateSource ['rampfront',0]";				
				onlyforplayer = 0;
			};
			class ThrusterEngage
			{
				displayName = "<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
				textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
				position = "pilotview";
				radius = 20;
				priority = 21;
				onlyForPlayer = 1;
				condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
			};

			class ThrusterDisngage: ThrusterEngage
			{
				priority = 21;
				displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
			};

			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				position = "pilotview";
				radius = 20;
				priority = 0;
				onlyForPlayer = 1;
				condition = "((player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
				shortcut="User19"
			};

			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority = 0;
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
				shortcut="User20"
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
		};
	};
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
		class ViewPilot;
	};
	class Ejection_Seat_Base_F;
	class Plane_Canopy_Base_F;
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
		};
		class Eventhandlers;
		class ViewPilot;
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons;
				class Presets;
			};
		};
	};
	class 3as_Z95_base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				
				class Pylons;
				class Presets;
			};
		};
		class pilotCamera;
	};
	class RD501_z95_blue: 3as_Z95_base
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				
				class Pylons;
				class Presets;
			};
		};
	};
	class 101st_Z95_base: RD501_z95_blue
	{	
		armor=300;
		scope=2;
		displayName="101st Z-95 Headhunter";
		faction="Republic_101st";
		crew="101st_Pilot_212th";
		alwaysTarget=0;
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"DBA_Aircraft_Lasers_Green",
			"DBA_Aircraft_Heavy_Lasers_Green",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"DBA_generic_aircraft_gun_Green_x1000_mag",
			"DBA_generic_aircraft_gun_Green_x1000_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag"
		};			
		hiddenselectionstextures[] =
		{
			"3AS\3as_Z95\Data\green_co.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="3as\3as_z95\data\plane_z95_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						attachment="DBA_pylon_agm_x4_mag";
						priority=10;
						maxweight=300;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						attachment="DBA_pylon_aa_x3_mag";
						priority=9;
						maxweight=2500;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						attachment="DBA_pylon_stomper_aa_x3_mag";
						priority=7;
						maxweight=5000;
						UIposition[]={0.5,0.25};
					};
					class pylons6: pylons5
					{
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=5;
					};
					class Pylons7
					{
						hardpoints[]=
						{
							"DBA_Universal_rail",
							"B_HARM_RAIL",
							"z95_CANON_PYLON"
						};
						priority=5;
						attachment= "empty";
						maxweight=4000;
						UIposition[]={0.32499999,0.15000001};
					};
				};
				class presets
				{
					class empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
				};
			};
		};
	};

	class 3as_V19_base;
	class DBA_V19_base: 3as_V19_base
	{	
		armor=300;
		scope=2;
		scopeCurator=2;
		displayName="101st V-19 Torrent";
		faction="Republic_101st";
		crew="101st_Pilot_212th";
		alwaysTarget=0;
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"DBA_Aircraft_Heavy_Lasers_Green",
			"dba_wynd_a2a",
			"dba_wynd_agm",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"DBA_generic_aircraft_cannon_Green_x200_mag",
			"dba_a2a_x4_mag",
			"dba_agm_x6_mag"
		};			
	};
	
	class CopilotTurret;
	class Components;
	class NewTurret;
	class 3as_arc_170_green;
	class 101st_ARC_Modified : 3as_arc_170_green
	{
		author = "Mutt";
		displayname = "101st ARC-170 (FM)"
		scope = 2;
		scopeCurator = 2;
		faction="Republic_101st";
		crew="101st_Pilot_212th";
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"DBA_Aircraft_Lasers_Blue",
			"DBA_generic_kannon",
			"CMFlareLauncher"
			
		};
		magazines[]=
		{
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_generic_aircraft_gun_blue_x1000_mag",
			"DBA_Kannon_x100_mag",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(25 / 120)";
					minFov="(25 / 120)";
					maxFov="(25 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(10 / 120)";
					minFov="(10 / 120)";
					maxFov="(10 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(1.5 / 120)";
					minFov="(1.5 / 120)";
					maxFov="(1.5 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=400;
						componentType="IRSensorComponent";
						typeRecognitionDistance=2000;
						maxFogSeeThrough=0.995;
						color[]={1,0,0,1};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="";
						componentType="VisualSensorComponent";
						nightRangeCoef=0;
						maxFogSeeThrough=0.94;
						color[]={1,1,0.5,0.80000001};
						typeRecognitionDistance=2000;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange=45000;
							maxRange=45000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						color[]={0.5,1,0.5,0.5};
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						groundNoiseDistanceCoef=0.2;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=200;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						componentType="LaserSensorComponent";
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						componentType="NVSensorComponent";
						color[]={1,1,1,0};
						typeRecognitionDistance=0;
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="3as\3as_arc170\data\plane_arc_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"DBA_Universal_rail",
							"B_BOMB_PYLON",
							"ARC_EMP_RAIL"
						};
						attachment="DBA_pylon_aa_x3_mag";
						priority=10;
						maxweight=300;
						UIposition[]={0.5,0.25};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"DBA_Universal_rail",
							"B_HARM_RAIL"
						};
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						priority=9;
						maxweight=2500;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						attachment="DBA_pylon_aa_x3_mag";
						priority=7;
						maxweight=5000;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons6: pylons5
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=5;
					};
				};
				class presets
				{
					class empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
				};
			};
		};	
	};
	
	//Experimental LAAT

	class 3AS_Patrol_LAAT_Republic;
	class DBA_Patrol_LAAT:3AS_Patrol_LAAT_Republic
	{
		displayname="101st LAAT/le";
		crew="101st_Pilot_212th";
		faction="Republic_101st";
		scope=2;
		scopeCurator=2;
		memoryPointGun[] = {"L_Muzzle","R_muzzle"};
		gunBeg[] = {"L_Muzzle","R_Muzzle"};
		gunEnd[] ={"L_Chamber","R_Chamber"};
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"DBA_Aircraft_Lasers_Blue",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"DBA_generic_aircraft_gun_blue_x1000_mag"
		};
		class UserActions
		{		
			class beacons_start
			{
				displayName="$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				position = "pilotview";
				available = 0;
				showWindow = 0;
				radius = 9;
				onlyForplayer=0;
				condition="(ace_player == driver this) AND {this animationSourcePhase 'Beacons' < 0.5}";
				statement="this animateSource ['Beacons',1];";
			};
			class beacons_stop: beacons_start
			{
				displayName="$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition="(ace_player == driver this) AND {this animationSourcePhase 'Beacons' > 0.5}";
				statement="this animateSource ['Beacons',0];";
			};
			class LeftDoor_Open
			{
				available = 0;
				showWindow = 0;
				displayName = "Left Door Open";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_L' == 0)";
				statement = "this animateSource ['Door_L',1];";
				onlyforplayer = 0;
			};
			class LeftDoor_Close
			{
				available = 0;
				showWindow = 0;
				displayName = "Left Door Close";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_L' == 1)";
				statement = "this animateSource ['Door_L',0];";				
				onlyforplayer = 0;
			};
			class RightDoor_Open
			{
				available = 0;
				showWindow = 0;
				displayName = "Right Door Open";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_R' == 0)";
				statement = "this animateSource ['Door_R',1];";
				onlyforplayer = 0;
			};
			class RightDoor_Close//''
			{
				available = 0;
				showWindow = 0;
				displayName = "Right Door Close";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_R' == 1)";
				statement = "this animateSource ['Door_R',0];";				
				onlyforplayer = 0;
			};
			class ThrusterEngage
			{
				displayName = "<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
				textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
				position = "pilotview";
				radius = 20;
				priority = 21;
				onlyForPlayer = 1;
				condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
			};

			class ThrusterDisngage: ThrusterEngage
			{
				priority = 21;
				displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
			};

			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				position = "pilotview";
				radius = 20;
				priority = 0;
				onlyForPlayer = 1;
				condition = "((player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
				shortcut="User19"
			};

			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority = 0;
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
				shortcut="User20"
			};
		};
	};


	class 442_laat_2_ab;
	class Eventhandlers;
	class DBA_LAAT_Pylons: 442_laat_2_ab
	{
		ace_cargo_space=400;
		crew="101st_Pilot_212th";



		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"DBA_Aircraft_Lasers_Blue",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"DBA_generic_aircraft_gun_blue_x1000_mag"
		};
		hiddenselections[]=
		{
			"body",
			"body_2",
			"door_1",
			"door_2",
			"door_3",
			"wings",
			"missiles",
			"cockpits",
			"glass",
			"clan",
			"zasleh_l",
			"zasleh_r",
			"zasleh_b"
		};
		hiddenselectionstextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\mk4\body_1_co.paa",
			"kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_1_co.paa",
			"kobra\442_a_vehicle\laat\data\door_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_3_co.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\mk4\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
		};
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		allowTabLock=1;
		side=1;

		faction="Republic_101st";

		icon="kobra\442_a_vehicle\laat\data\ui\laat_icon.paa";
		editorpreview="kobra\442_a_vehicle\laat\data\ui\laat_preview.jpg";
		picture="";
		availableForSupportTypes[]=
		{
			"CAS_Heli",
			"Drop",
			"Transport"
		};
		armor=420;

		displayname="LAAT MK4 Gunship";

		class HitPoints
		{
			class HitHull
			{
				armor=4;
				convexComponent="hull_hit";
				depends="Total";
				explosionShielding=1;
				material=51;
				name="hull_hit";
				passThrough=1;
				visual="zbytek";
				radius=0.0099999998;
			};
			class HitFuel
			{
				convexcomponent="fuel_hit";
				hitpoint="fuel_hit";
				name="fuel_hit";
				explosionShielding=2;
				radius=0.1;
				visual="";
				passthrough=0.1;
				minimalhit=0.1;
				material=-1;
				armor=0.6;
			};
			class HitEngine
			{
				armor=0.75;
				convexComponent="engine_hit";
				explosionShielding=2;
				material=51;
				name="engine_hit";
				hitpoint="engine_hit";
				passThrough=1;
				visual="";
				radius=0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent="engine_hit_1";
				name="engine_hit_1";
				hitpoint="engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent="engine_hit_2";
				name="engine_hit_2";
				hitpoint="engine_hit_2";
			};
			class HitAvionics
			{
				armor=2;
				convexComponent="avionics_hit";
				explosionShielding=5;
				material=51;
				name="avionics_hit";
				passThrough=1;
				visual="";
				radius=0.5;
			};
		};
		class EventHandlers: EventHandlers
        {
            init="[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\autocrate.sqf';[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\laat_lift_4.sqf';";
        };
		class ViewPilot
		{
			initAngleX = 0;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = -100;
			maxMoveX = 100;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class transportweapons
		{
		};
		class transportmagazines
		{
		};
		class transportItems
		{
			class _transport_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
			class _transport_SurgicalKit
			{
				name = "Surgical Kit";
				count = 2;
			};
		};
		class transportBackpacks
		{
		};
		class useractions
		{
			class laat_ramp_open
			{
				displayname="Open Ramp";
				position="pilotview";
				priority="107";
				radius=5;
				onlyforplayer=0;
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_ramp_open"" == 0;";
				statement="this animatesource [""laat_ramp_open"",1]; [this, ""laat_ramp""] remoteExec [""say3d"",0,false]; ";
			};
			class laat_ramp_close: laat_ramp_open
			{
				displayname="Close Ramp";
				priority="108";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_ramp_open"" == 1;";
				statement="this animatesource[""laat_ramp_open"",0]; [this, ""laat_ramp""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_close: laat_ramp_open
			{
				displayname="Close Doors";
				priority="101";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 0 AND this animationsourcephase ""laat_door_r"" == 0;";
				statement="this animatesource [""laat_door_l"",1]; this animatesource [""laat_door_r"",1]; [this, ""laat_door_close""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_open: laat_ramp_open
			{
				displayname="Open Doors";
				priority="102";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 1 AND this animationsourcephase ""laat_door_r"" == 1;";
				statement="this animatesource [""laat_door_l"",0]; this animatesource [""laat_door_r"",0]; [this, ""laat_door_open""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_r_close: laat_ramp_open
			{
				displayname="Close Right Doors";
				priority="103";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_r"" == 0;";
				statement="this animatesource [""laat_door_r"",1]; [this, ""laat_door_close""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_r_open: laat_ramp_open
			{
				displayname="Open Right Doors";
				priority="104";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_r"" == 1;";
				statement="this animatesource [""laat_door_r"",0]; [this, ""laat_door_open""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_l_close: laat_ramp_open
			{
				displayname="Close Left Doors";
				priority="105";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 0;";
				statement="this animatesource [""laat_door_l"",1]; [this, ""laat_door_close""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_l_open: laat_ramp_open
			{
				displayname="Open Left Doors";
				priority="106";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 1;";
				statement="this animatesource [""laat_door_l"",0]; [this, ""laat_door_open""] remoteExec [""say3d"",0,false];";
			};
			class ThrusterEngage
			{
				displayName = "<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
				textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
				position = "pilotview";
				radius = 20;
				priority = 21;
				onlyForPlayer = 1;
				condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
			};

			class ThrusterDisngage: ThrusterEngage
			{
				priority = 21;
				displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
			};

			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				position = "pilotview";
				radius = 20;
				priority = 0;
				onlyForPlayer = 1;
				condition = "((player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
				shortcut="User19"
			};

			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority = 0;
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
				shortcut="User20"
			};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 400;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 2000;
						maxFogSeeThrough = 0.995;
						color[] = {1, 0, 0, 1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 100;
						aimDown = 1;
						animDirection = ""; //@@@@@@
						componentType = "VisualSensorComponent";
						nightRangeCoef = 0;
						maxFogSeeThrough = 0.94;
						color[] = {1, 1, 0.5, 0.80000001};
						typeRecognitionDistance = 2000;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
						componentType = "PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange = 45000;
							maxRange = 45000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 12000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						color[] = {0.5, 1, 0.5, 0.5};
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
						allowsMarking = 0;
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 8000;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = 0.2;
						componentType = "ActiveRadarSensorComponent";
						maxGroundNoiseDistance = 200;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						color[] = {0, 1, 1, 1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						componentType = "LaserSensorComponent";
						class AirTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						typeRecognitionDistance = 0;
						color[] = {1, 1, 1, 0};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class NVSensorComponent : SensorTemplateNV
					{
						componentType = "NVSensorComponent";
						color[] = {1, 1, 1, 0};
						typeRecognitionDistance = 0;
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,4000,2000,16000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,4000,2000,16000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture="\kobra\442_a_vehicle\laat\data\ui\laat_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="DBA_pylon_lgm_x3_mag";
						priority=5;
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						turret[]={};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						priority=4;
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						attachment="DBA_pylon_lgm_x3_mag";
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						priority=3;
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						attachment="DBA_pylon_lgm_x3_mag";
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[]={0.58999997,0.30000001};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.62,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.63999999,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
	};

	class 101st_laat_HammerCG : 101st_laat_Hammer
	{
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		displayName = "LAAT MK5 (CG)";
		side = 1;
		editorPreview = "";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_Wings_Doors_CO.paa",
            "101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_Base_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
		};
	};
	class 101st_laatUnarmed_BaseCG : 101st_laatUnarmed_Base
	{
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		displayName = "LAAT MK6 (CG)";
		side = 1;
		editorPreview = "";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_Wings_Doors_CO.paa",
            "101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_Base_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\GC_LAAT_doors_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
		};
	};
	class 101st_laatFloodLight_BaseCG : 101st_laatFloodLight_Base
	{
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		displayName = "LAAT MK6/2 (CG)";
		side = 1;
		editorPreview = "";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_Wings_Doors_CO.paa",
            "101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\CG_LAAT_Base_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\LAAT\GC_LAAT_doors_CO.paa"
        };
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			LAAT_LIGHTS
		};
	};
	class 3as_V19_base;
	class 101st_YWing_base: 3as_V19_base
	{
		irTarget=1;
		irTargetSize=0.34999999;
		radarTarget=1;
		radarTargetSize=0.2;
		memoryPointDriverOptics="PilotCamera_pos";
		unitInfoType="RscOptics_CAS_Pilot";
		driverWeaponsInfoType="RscOptics_CAS_01_TGP";
		selectionFireAnim="zasleh";
		simulation="airplaneX";
		scope=1;
		scopecurator=1;
		side=1;
		getInAction="GetInHigh";
		getOutAction = "GetOutHigh";
		driverCanEject = 1;
		model="\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\YWing.p3d";
		displayName = "Y-Wing BTL-B StarFighter";
		crew="101st_Pilot_212th";
		icon="A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		picture="A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=400;
						componentType="IRSensorComponent";
						typeRecognitionDistance=2000;
						maxFogSeeThrough=0.995;
						color[]={1,0,0,1};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="";
						componentType="VisualSensorComponent";
						nightRangeCoef=0;
						maxFogSeeThrough=0.94;
						color[]={1,1,0.5,0.80000001};
						typeRecognitionDistance=2000;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange=45000;
							maxRange=45000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						color[]={0.5,1,0.5,0.5};
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						groundNoiseDistanceCoef=0.2;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=200;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						componentType="LaserSensorComponent";
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						componentType="NVSensorComponent";
						color[]={1,1,1,0};
						typeRecognitionDistance=0;
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture="a3\air_f_gamma\plane_fighter_03\data\ui\plane_a143_3den_ca.paa";
				class Pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"DBA_Opfor_rail"
						};
						attachment="DBA_pylon_generic_aircraft_gun_yellow_x1000_mag";
						priority=10;
						maxweight=300;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"DBA_Opfor_rail"
						};
						attachment="DBA_pylon_agm_x4_mag";
						priority=9;
						maxweight=2500;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						hardpoints[]=
						{
							"DBA_Opfor_rail"
						};
						attachment="DBA_pylon_agm_x4_mag";
						priority=13;
						maxweight=5000;
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						hardpoints[]=
						{
							"DBA_Opfor_rail"
						};
						attachment="DBA_pylon_ugm_x10_mag";
						priority=7;
						maxweight=5000;
						UIposition[]={0.5,0.25};
					};
					class pylons6: pylons5
					{
						hardpoints[]=
						{
							"DBA_Opfor_rail"
						};
						attachment="DBA_pylon_ugm_x10_mag";
						priority=12;
						maxweight=5000;
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=5;
					};
					class Pylons7
					{
						hardpoints[]=
						{
							"DBA_Opfor_rail"
						};
						priority=5;
						attachment="DBA_pylon_stomper_aa_x3_mag";
						maxweight=4000;
						UIposition[]={0.1,0.25};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay="EmptyDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,2000,4000,16000,30000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,2000,4000,16000,30000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		
		class UserActions
		{
			class ThrusterEngage
			{
				displayName = "<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
				textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
				position = "pilotview";
				radius = 20;
				priority = 21;
				onlyForPlayer = 1;
				condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
			};

			class ThrusterDisngage: ThrusterEngage
			{
				priority = 21;
				displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
			};

			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				position = "pilotview";
				radius = 20;
				priority = 0;
				onlyForPlayer = 1;
				condition = "((player == driver this) AND (alive this) AND (speed this >10) )";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
				shortcut="User19"
			};

			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority = 0;
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
				shortcut="User20"
			};
		};
		hiddenselections[]=
		{
			"ballgun", "body", "cockpit", "leftwing", "r2", "rightwing", 
		};
		hiddenselectionstextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Ballgun_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Body_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Cockpit_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Left_wing_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\r2_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Right_wing_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Ballgun.rvmat", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Body.rvmat", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\cockpit.rvmat", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\leftwing.rvmat", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\r2.rvmat", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\rightwing.rvmat"};
		insideSoundCoef=0.2;
		destrType="DestructWreck";
		driveraction="Plane_Fighter_03_pilot";
		armor=95;
		 faction="Republic_101st";
		editorSubcategory = "EdSubcat_Planes";
		vehicleClass = "Air";
	};
	class 101st_YWing: 101st_YWing_base
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		displayName = "Y-Wing BTL-B StarFighter";
		side=1;
		forceingarage=1;
        faction="Republic_101st";
		editorSubcategory = "EdSubcat_Planes";
		vehicleClass = "Air";
		crew="101st_Pilot_212th";
		icon="A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		hiddenselections[]=
		{
			"ballgun", "body", "cockpit", "leftwing", "r2", "rightwing", 
		};
		hiddenselectionstextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Ballgun_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Body_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Cockpit_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Left_wing_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\r2_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Yellow\Right_wing_CO.paa"
		};
		weapons[] = {"dba_wynd_agm","DBA_ClusterBomb","DBA_SDBLauncher","DBA_LGBLauncher","Laserdesignator_pilotCamera","CMFlareLauncher"};
		editorPreview="";
		magazines[] = {"Laserbatteries","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine","DBA_HMG_red_x500_mag","DBA_HMG_red_x500_mag","DBA_agm_x6_mag","DBA_cluster_bomb_x4_mag","DBA_cluster_bomb_x4_mag","DBA_cluster_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_lgb_bomb_x4_mag","DBA_lgb_bomb_x4_mag","DBA_lgb_bomb_x4_mag"};
	};
	class 101st_YWing_Green: 101st_YWing_base
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		displayName = "Y-Wing BTL-B StarFighter (Green)";
		side=1;
		forceingarage=1;
         faction="Republic_101st";
		editorSubcategory = "EdSubcat_Planes";
		vehicleClass = "Air";
		crew="101st_Pilot_212th";
		icon="A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
	hiddenselections[]=
		{
			"ballgun", "body", "cockpit", "leftwing", "r2", "rightwing", 
		};
		hiddenselectionstextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Green\Ballgun_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Green\Body_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Green\Cockpit_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Green\Left_wing_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Green\r2_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Green\Right_wing_CO.paa"
		};
		weapons[] = {"dba_wynd_agm","DBA_ClusterBomb","DBA_SDBLauncher","DBA_LGBLauncher","Laserdesignator_pilotCamera","CMFlareLauncher"};
		editorPreview="";
		magazines[] = {"Laserbatteries","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine","DBA_HMG_red_x500_mag","DBA_HMG_red_x500_mag","DBA_agm_x6_mag","DBA_cluster_bomb_x4_mag","DBA_cluster_bomb_x4_mag","DBA_cluster_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_lgb_bomb_x4_mag","DBA_lgb_bomb_x4_mag","DBA_lgb_bomb_x4_mag"};
	};
	class 101st_YWing_Red: 101st_YWing_base
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		displayName = "Y-Wing BTL-B StarFighter (Red)";
		side=1;
		forceingarage=1;
         faction="Republic_101st";
		editorSubcategory = "EdSubcat_Planes";
		vehicleClass = "Air";
		crew="101st_Pilot_212th";
		icon="A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
			hiddenselections[]=
		{
			"ballgun", "body", "cockpit", "leftwing", "r2", "rightwing", 
		};
		hiddenselectionstextures[]=
		{
			"\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Red\Ballgun_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Red\Body_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Red\Cockpit_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Red\Left_wing_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Red\r2_CO.paa", "\101st_Aux_Mod\Addons\DBA_AirVehicles\YWing\Red\Right_wing_CO.paa"
		};
		weapons[] = {"dba_wynd_agm","DBA_ClusterBomb","DBA_SDBLauncher","DBA_LGBLauncher","Laserdesignator_pilotCamera","CMFlareLauncher"};
		editorPreview="";
		magazines[] = {"Laserbatteries","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine","DBA_HMG_red_x500_mag","DBA_HMG_red_x500_mag","DBA_agm_x6_mag","DBA_cluster_bomb_x4_mag","DBA_cluster_bomb_x4_mag","DBA_cluster_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_lgb_bomb_x4_mag","DBA_lgb_bomb_x4_mag","DBA_lgb_bomb_x4_mag"};
	};
	//Laat testbed
	class DBA_LAAT_PYLON_TESTBED : B_Heli_Attack_01_base_F{
		tas_max_impulse=800;
		tas_impulse_break=100;
		tas_can_impulse=1;
		_generalMacro="DBA_LAAT_PYLON_TESTBED";
		side=1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		radarTargetSize = 1.2;
		irTargetSize = 1.3;
		access=2;
		faction="Republic_101st";
		displayName="LAAT Pylon TTB (Test)";
		author="3AS + Ammendments by DBA";
		model="3as\3as_laat\LAATi\model\tcw_laat.p3d";
		icon="\3AS\3as_Laat\LAATI\data\ui\Map_laat_CA.paa";
		picture="3AS\3as_Laat\LAATI\data\ui\LAAT_Profile_ca.paa";
		editorpreview="\3AS\3as_Laat\LAATI\data\editorpreview\3as_laat.jpg";
		editorSubcategory="EdSubcat_Helicopters";
		memoryPointSupply="doplnovani";
		memoryPointTaskMarker="TaskMarker_1_pos";
		
		cargoaction[]=
		{
			"passenger_boat_holdleft",
			"passenger_boat_holdleft",
			"passenger_boat_holdleft"
		};
		class HitPoints
		{
			class HitHull
			{
				armor=4;
				convexComponent="hull_hit";
				depends="Total";
				explosionShielding=0.5;
				material=51;
				name="hull_hit";
				passThrough=1;
				visual="zbytek";
				radius=0.0099999998;
			};
			class HitFuel
			{
				convexcomponent="engine_hit";
				hitpoint="engine_hit";
				name="engine_hit";
				explosionShielding=2;
				radius=0.1;
				visual="";
				passthrough=0.1;
				minimalhit=0.1;
				material=-1;
				armor=0.60000002;
			};
			class HitEngine
			{
				armor=0.75;
				convexComponent="engine_hit";
				explosionShielding=1.2;
				material=51;
				name="engine_hit";
				hitpoint="engine_hit";
				passThrough=1;
				visual="";
				radius=0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent="engine_hit_1";
				name="engine_hit_1";
				hitpoint="engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent="engine_hit_2";
				name="engine_hit_2";
				hitpoint="engine_hit_2";
			};
			class HitAvionics
			{
				armor=2;
				convexComponent="avionics_hit";
				explosionShielding=5;
				material=51;
				name="avionics_hit";
				passThrough=1;
				visual="";
				radius=0.5;
			};
			class HitGlass1
			{
				armor=2;
				name="HitGlass1";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
			class HitGlass2
			{
				armor=2;
				name="HitGlass2";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
			class HitGlass3
			{
				armor=2;
				name="HitGlass3";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
		};
		driveOnComponent[]=
		{
			"Skids"
		};
		accuracy=0.5;
		geardowntime=1.5;
		gearretracting=1;
		gearuptime=1.5;
		gearMinAlt=0;
		gearsUpFrictionCoef=0.001;
		nameSound="veh_helicopter_s";
		fuelCapacity=700;
		fuelConsumptionRate=0.2;
		mainBladeRadius=0.1;
		liftForceCoef=3;
		bodyFrictionCoef=1.9845001;
		cyclicAsideForceCoef=2.8;
		backRotorForceCoef=1.8;
		cyclicForwardForceCoef=2;
		acceleration=450;
		maxSpeed=600;
		brakeDistance=400;
		mainRotorSpeed=-1;
		backRotorSpeed=1;
		hasterminal=1;
		maxMainRotorDive=7;
		minMainRotorDive=-7;
		neutralMainRotorDive=0;
		class RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
			autoHoverCorrection[]={3.2,0,0};
			defaultCollective=0.80500001;
			retreatBladeStallWarningSpeed=83;
			maxTorque=5800;
			stressDamagePerSec=0.0099999998;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
		};
		startDuration=4.5;
		castDriverShadow=0;
		canFloat=1;
		waterLeakiness=0.2;
		waterResistanceCoef=0.89999998;
		waterResistance=1;
		waterLinearDampingCoefY=3;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=3;
		maxFordingDepth=110.65;
		armor=500;
		armorStructural=1;
		altFullForce=137400;
		altNoForce=172400;
		crewCrashProtection=0;
		explosionShielding=0.33000001;
		epeImpulseDamageCoef=0;
		soundEngineOnInt[]=
		{
			"3as\3as_laat\sounds\LAAT_Start.ogg",
			"1/2",
			1
		};
		soundEngineOnExt[]=
		{
			"3as\3as_laat\sounds\LAAT_Start.ogg",
			"1*1.5",
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"3as\3as_laat\sounds\LAAT_End.ogg",
			"1/2",
			1
		};
		soundEngineOffExt[]=
		{
			"3as\3as_laat\sounds\LAAT_End.ogg",
			"1*1.5",
			1,
			300
		};
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Hull_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Wings_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Weapons_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Details_CO.paa",
			"101st_Aux_Mod\Addons\DBA_AirVehicles\Republic\NewLAAT\DBA_Hammer_Interior_CO.paa"
        };
		class EventHandlers: DefaultEventHandlers
		{
			init="[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\autocrate.sqf';[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\laat_lift_3.sqf';";
		};
		class UserActions
		{
			class rampOpen
			{
				available=0;
				showWindow=0;
				displayName="Ramp Open";
				position="pilotview";
				radius=9;
				condition="this animationphase 'ramp' ==0";
				statement="this animateSource ['ramp',1,1];";
				onlyforplayer=0;
			};
			class rampClose
			{
				available=0;
				showWindow=0;
				displayName="Ramp Close";
				position="pilotview";
				radius=9;
				condition="this animationphase 'ramp' ==1";
				statement="this animateSource ['ramp',0,1];";
				onlyforplayer=0;
			};
			class ThrusterEngage
			{
				displayName="<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault="<t color='#4C9900'>[Impulsor On]</t>";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				position="pilotview";
				radius=20;
				priority=21;
				onlyForPlayer=1;
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
				statement="this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
			};
			class ThrusterDisngage: ThrusterEngage
			{
				priority=21;
				displayName="<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault="<t color='#FF9933'>[RepulsorBrake On]</t>";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement="this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
			};
			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName="";
				displayNameDefault="";
				textToolTip="";
				position="pilotview";
				radius=20;
				priority=0;
				onlyForPlayer=1;
				condition="((player == driver this) AND (alive this) AND (speed this >10) )";
				statement="this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\fn_impulseS.sqf""";
				shortcut="User19";
			};
			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority=0;
				displayName="";
				displayNameDefault="";
				textToolTip="";
				condition="((player == driver this) AND (alive this))";
				statement="this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTD.sqf""";
				shortcut="User20";
			};
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					1.7782794,
					1,
					800
				};
				frequency="rotorSpeed";
				volume="2 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class RotorExt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					1.4125376,
					0.80000001,
					2000
				};
				frequency="rotorSpeed*1.1";
				volume="camPos*(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 0)/ 900),(((-150) max 500)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 500)/ 900),(((-200) max 500)/ 900)])) / 3";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorSwistExt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Impulse.ogg",
					2,
					1,
					2000
				};
				frequency=1;
				volume="2 * camPos*(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 300)/ 900),(((-150) max 900)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 900)/ 900),(((-200) max 900)/ 900)]))";
				cone[]={1,1.4,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\\LAAT_Impulse.ogg",
					0.79432821,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					1,
					0.80000001
				};
				frequency="rotorSpeed*1.1";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.2589254,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.2589254,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.33095738,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
					0.60000002,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[50,80])";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						1.7782794,
						1,
						800
					};
					frequency="rotorSpeed";
					volume="2 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class RotorExt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						1.4125376,
						0.80000001,
						2000
					};
					frequency="rotorSpeed*1.1";
					volume="camPos**(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 300)/ 900),(((-150) max 900)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 900)/ 900),(((-200) max 900)/ 900)]))";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorSwistExt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Impulse.ogg",
						1,
						1,
						2000
					};
					frequency=1;
					volume="2 * camPos*(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 300)/ 900),(((-150) max 900)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 900)/ 900),(((-200) max 900)/ 900)]))";
					cone[]={1,1.4,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						0.79432821,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						1,
						0.80000001
					};
					frequency="rotorSpeed*1.1";
					volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"",
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.33095738,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
						0.60000002,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						1,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[50,80])";
				};
			};
		};
		ace_fastroping_enabled=1;
		ace_fastroping_ropeOrigins[]=
		{
			{1.5,1,-3.5},
			{1.5,2.5,-3.5},
			{1.5,-1,-3.5},
			{-1.5,1,-3.5},
			{-1.5,2.5,-3.5},
			{-1.5,-1,-3.5}
		};
		ace_fastroping_onCut="ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare="ace_fastroping_fnc_onPrepareCommon";
		ace_cargo_space=40;
		ace_cargo_hasCargo=1;
		slingLoadMaxCargoMass=50000;
		slingLoadMemoryPoint="sling";
		radarType=8;
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		driverAction="LAAT_Pilot";
		getInAction="ChopperLight_L_In_H";
		getOutAction="GetOutLow";
		memoryPointsGetInCargo[]=
		{
			"pos_cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos_cargo_dir"
		};
		usePreciseGetInAction=0;
		memoryPointsGetInDriverPrecise="";
		memorypointsgetindriver="pos_driver";
		memorypointsgetindriverdir="pos_driver_dir";
		memoryPointsGetInCargoPrecise[]=
		{
			"GetIn_Cargo",
			"GetIn_Cargo2"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		getInRadius=5;
		typicalCargo[]=
		{
			"B_HeliPilot_F"
		};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_SurgicalKit
			{
				name="Surgical Kit";
				count=2;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=10;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=10;
			};
			class _xx_ACE_packingBandage
			{
				name="packingBandage";
				count=10;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=10;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=5;
			};
		};
		memorypointlmissile="Rocket_1";
		memorypointrmissile="Rocket_2";
		memoryPointLRocket="Rocket_1";
		memoryPointRRocket="Rocket_2";
		weapons[]=
		{
			"DBA_23mw_GH197_AC",
			"DBA_45mw_GH20K_AC",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"DBA_23mm_PS59_x400_mag",
			"DBA_45mm_PS73_x80_mag",
			"Laserbatteries",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
		};
		memoryPointGun[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunBeg[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunEnd[]=
		{
			"z_gunL_chamber",
			"z_gunR_chamber"
		};
		memoryPointDriverOptics="PilotCamera";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(15 / 120)";
					minFov="(15 / 120)";
					maxFov="(15 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(3.75 / 120)";
					minFov="(3.75 / 120)";
					maxFov="(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-120;
			maxTurn=120;
			initTurn=0;
			minElev=-120;
			maxElev=10;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		maximumLoad=25000;
		class SpeechVariants
		{
			class Default
			{
				speechplural[]=
				{
					"veh_air_gunship_p"
				};
				speechsingular[]=
				{
					"veh_air_gunship_s"
				};
			};
		};
		class Components: components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=400;
						componentType="IRSensorComponent";
						typeRecognitionDistance=2000;
						maxFogSeeThrough=0.995;
						color[]={1,0,0,1};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="";
						componentType="VisualSensorComponent";
						nightRangeCoef=0;
						maxFogSeeThrough=0.94;
						color[]={1,1,0.5,0.80000001};
						typeRecognitionDistance=2000;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange=45000;
							maxRange=45000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						color[]={0.5,1,0.5,0.5};
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						groundNoiseDistanceCoef=0.2;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=200;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						componentType="LaserSensorComponent";
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						componentType="NVSensorComponent";
						color[]={1,1,1,0};
						typeRecognitionDistance=0;
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,4000,2000,16000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,4000,2000,16000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture="\kobra\442_a_vehicle\laat\data\ui\laat_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="DBA_AD3M_x2_pylon";
						priority=5;
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						turret[]={};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						priority=4;
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						attachment="DBA_D39M_x4_pylon";
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						priority=3;
						hardpoints[]=
						{
							"DBA_Universal_rail"
						};
						attachment="DBA_50mm_R5P_x24_pod";
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[]={0.58999997,0.30000001};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.62,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.63999999,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		transportsoldier=28;
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12,13,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11,12,13,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_laser
			{
				source="ammorandom";
				weapon="ParticleBeamCannon";
			};
			class muzzle_rot_laser_R
			{
				source="ammorandom";
				weapon="ParticleBeamCannon_R";
			};
			class Laser_L
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Laser_R
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class ramp
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2
			{
				source="Hit";
				hitpoint="HitGlass2";
			};
			class HitGlass3
			{
				source="Hit";
				hitpoint="HitGlass3";
			};
		};
		class Turrets: Turrets
		{
			class Copilot: MainTurret
			{
				memoryPointGun="rear_chamber";
				gunBeg="rear_chamber";
				gunEnd="rear_muzzle";
				caneject=0;
				castgunnershadow=1;
				commanding=-1;
				discretedistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discretedistanceinitindex=5;
				gunneraction="LAAT_Pilot";
				gunnerforceoptics=0;
				gunnername="CoPilot";
				usePiP=1;
				gunnergetinaction="Heli_Attack_01_Gunner_Enter";
				gunnergetoutaction="Heli_Attack_01_Gunner_Exit";
				gunnerinaction="";
				gunnerlefthandanimname="lever_copilot";
				gunneropticseffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunneropticsmodel="";
				gunnerrighthandanimname="stick_copilot";
				initelev=-5;
				initturn=-180;
				iscopilot=1;
				maxelev=20;
				maxturn=-170;
				memorypointgunneroptics="backview";
				memorypointsgetingunner="pos_driver";
				memorypointsgetingunnerdir="pos_driver_dir";
				minelev=-20;
				minturn=-190;
				outgunnermayfire=1;
				precisegetinout=1;
				primarygunner=0;
				selectionfireanim="zasleh";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.36234099,
					1,
					20
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.36234099,
					1,
					30
				};
				startengine=0;
				animationSourceBody="mainTurret5";
				animationsourcegun="Maingun5";
				animationsourcehatch="";
				body="mainTurret5";
				gun="Maingun5";
				memorypointlmissile="Rocket_1";
				memorypointrmissile="Rocket_2";
				memoryPointLRocket="Rocket_1";
				memoryPointRRocket="Rocket_2";
				turretinfotype="RscOptics_Heli_Attack_01_gunner";
				weapons[]=
				{
					"DBA_20mw_LAATBALL_AC",
					"Laserdesignator_pilotCamera"
				};
				magazines[]=
				{
					"Laserbatteries",
					"DBA_20mm_PM359_x150_mag",
					"DBA_20mm_PM359_x150_mag",
					"DBA_20mm_P594_x250_mag",
					"DBA_20mm_P594_x250_mag",
					"DBA_20mm_P594_x250_mag"
				};
				class OpticsIn
				{
					class Wide
					{
						gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
						initanglex=0;
						initangley=0;
						initfov=0.46599999;
						maxanglex=30;
						maxangley=100;
						maxfov=0.46599999;
						minanglex=-30;
						minangley=-100;
						minfov=0.46599999;
						opticsdisplayname="W";
						thermalmode[]={0,1};
						visionmode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
					};
					class Medium: Wide
					{
						gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
						initfov=0.093000002;
						maxfov=0.093000002;
						minfov=0.093000002;
						opticsdisplayname="M";
					};
					class Narrow: Wide
					{
						gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initfov=0.028999999;
						maxfov=0.028999999;
						minfov=0.028999999;
						opticsdisplayname="N";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						gunneropticseffect[]={};
						gunneropticsmodel="";
						initanglex=0;
						initangley=0;
						initfov=1.1;
						maxanglex=30;
						maxangley=100;
						maxfov=1.1;
						minanglex=-30;
						minangley=-100;
						minfov=0.133;
						visionmode[]=
						{
							"Normal",
							"NVG"
						};
					};
				};
				class HitTurret
				{
					armor=0.80000001;
					material=-1;
					name="gun1";
					passthrough=0.5;
					visual="gun1";
				};
				class HitGun
				{
					armor=0.40000001;
					material=-1;
					name="gun2";
					passthrough=0.2;
					visual="gun2";
				};
			};
			class LeftDoorgun: MainTurret
			{
				weapons[]=
				{
					"DBA_20mw_LAATBALL_AC",
					"Laserdesignator_pilotCamera"
				};
				magazines[]=
				{
					"Laserbatteries",
					"DBA_20mm_PM359_x150_mag",
					"DBA_20mm_PM359_x150_mag",
					"DBA_20mm_P594_x250_mag",
					"DBA_20mm_P594_x250_mag",
					"DBA_20mm_P594_x250_mag"
				};
				animationsourcebody="mainTurret";
				animationsourcegun="mainGun";
				animationsourcehatch="";
				body="mainTurret";
				gun="mainGun";
				castgunnershadow=1;
				commanding=-2;
				memoryPointGun="laser_l_chamber";
				gunBeg="laser_l_chamber";
				gunEnd="laser_l_muzzle";
				gunneraction="LAAT_Gunner";
				gunnercompartments="Compartment2";
				gunnerdoor="";
				gunnerforceoptics=0;
				gunnerinaction="gunner_Heli_Transport_01";
				gunnerlefthandanimname="";
				gunnername="Ball Turret (Left)";
				gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunneropticsshowcursor=1;
				gunneroutopticsshowcursor=1;
				gunnerrighthandanimname="";
				iscopilot=0;
				lodturnedin=1000;
				lodturnedout=1000;
				minElev=-90;
				maxElev=90;
				initElev=0;
				minTurn=0;
				maxTurn=130;
				initTurn=0;
				selectionfireanim="";
				memorypointgunneroptics="laser_l_chamber";
				memorypointsgetingunner="pos_cargo_dir";
				memorypointsgetingunnerdir="pos_cargo";
				primarygunner=0;
				proxyindex=3;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.36234099,
					1,
					20
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.36234099,
					1,
					30
				};
				stabilizedinaxes=0;
				viewgunnershadow=1;
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.60000002;
					maxanglex=30;
					maxangley=100;
					maxfov=0.75;
					minanglex=-30;
					minangley=-100;
					minfov=0.30000001;
				};
			};
			class RightDoorGun: LeftDoorgun
			{
				isCopilot=0;
				body="mainTurret2";
				gun="mainGun2";
				inGunnerMayFire=1;
				gunnerFireAlsoInInternalCamera=1;
				outGunnerMayFire=1;
				animationSourceBody="MainTurret2";
				animationSourceGun="MainGun2";
				memoryPointGun="laser_R_muzzle";
				gunBeg="laser_R_muzzle";
				gunEnd="lazer_R_chamber";
				minElev=-90;
				maxElev=90;
				initElev=0;
				minTurn=-130;
				maxTurn=0;
				initTurn=0;
				gunnerlefthandanimname="";
				gunnerrighthandanimname="";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				stabilizedInAxes=3;
				selectionFireAnim="";
				proxyIndex=2;
				commanding=-5;
				primaryObserver=0;
				primaryGunner=0;
				turretFollowFreeLook=0;
				isPersonTurret=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.36234099,
					1,
					20
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.36234099,
					1,
					30
				};
				gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerName="Ball Turret (Right)";
				memoryPointGunnerOptics="laser_R_muzzle";
				gunnerCompartments="Compartment5";
				memorypointsgetingunner="pos_cargo_dir";
				memorypointsgetingunnerdir="pos_cargo";
				weapons[]=
				{
					"DBA_20mw_LAATBALL_AC",
					"Laserdesignator_pilotCamera"
				};
				magazines[]=
				{
					"Laserbatteries",
					"DBA_20mm_PM359_x150_mag",
					"DBA_20mm_PM359_x150_mag",
					"DBA_20mm_P594_x250_mag",
					"DBA_20mm_P594_x250_mag",
					"DBA_20mm_P594_x250_mag"
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_5";
				canHideGunner=0;
				gunnerCompartments="Compartment2";
				getOutAction="GetOutLow";
				memoryPointsGetInCargo[]=
				{
					"pos_cargo"
				};
				memoryPointsGetInCargoDir[]=
				{
					"pos_cargo_dir"
				};
				gunnerName="Ramp Gunner (Left)";
				proxyIndex=15;
				soundAttenuationTurret="HeliAttenuationGunner";
				isPersonTurret=1;
				ejectDeadGunner=1;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
				playerPosition=4;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment3";
				getOutAction="GetOutLow";
				memoryPointsGetInCargo[]=
				{
					"pos_cargo"
				};
				memoryPointsGetInCargoDir[]=
				{
					"pos_cargo_dir"
				};
				gunnerName="Ramp Gunner (Right)";
				proxyIndex=14;
				class dynamicViewLimits
				{
					CargoTurret_01[]={-65,95};
				};
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos_cargo";
				memoryPointsGetInGunnerDir="pos_cargo_dir";
				gunnerName="$STR_A3_TURRETS_BENCH_R1";
				proxyIndex=17;
				isPersonTurret=1;
				ejectDeadGunner=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{9.4394999,-94.855698},
						{12.5849,-34.384102},
						{14.0365,60.875801},
						{14.1021,95}
					};
					limitsArrayBottom[]=
					{
						{-32.2276,-94.901703},
						{-32.7616,-79.195801},
						{-45,-75.648804},
						{-44.965302,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
				class dynamicViewLimits
				{
					CargoTurret_06[]={-65,95};
				};
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos_cargo";
				memoryPointsGetInGunnerDir="pos_cargo_dir";
				gunnerName="$STR_A3_TURRETS_BENCH_L2";
				proxyIndex=18;
				class dynamicViewLimits
				{
					CargoTurret_05[]={-65,95};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{10.6196,-94.8601},
						{11.1364,-69.195396},
						{14.0333,15.3744},
						{11.6789,94.968201}
					};
					limitsArrayBottom[]=
					{
						{-32.208099,-94.038101},
						{-32.368198,-78.541496},
						{-45,-72.854202},
						{-44.918598,94.886497}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_05: CargoTurret_04
			{
				gunnerCompartments="Compartment6";
				gunnerName="$STR_A3_TURRETS_BENCH_L1";
				memoryPointsGetInGunner="pos cargo LF";
				memoryPointsGetInGunnerDir="pos cargo LF dir";
				proxyIndex=19;
				class dynamicViewLimits
				{
					CargoTurret_04[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{14.705,-95},
						{14.1224,-62.859001},
						{12.3049,32.941399},
						{9.0861998,94.947998}
					};
					limitsArrayBottom[]=
					{
						{-45,-94.965599},
						{-45,80.990402},
						{-31.903299,82.846497},
						{-31.793501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_06: CargoTurret_03
			{
				gunnerCompartments="Compartment7";
				gunnerName="$STR_A3_TURRETS_BENCH_R2";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				proxyIndex=16;
				class dynamicViewLimits
				{
					CargoTurret_03[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{12.1826,-95},
						{14.4163,-16.698299},
						{11.5046,68.829201},
						{11.8156,94.980904}
					};
					limitsArrayBottom[]=
					{
						{-44.897598,-94.999397},
						{-44.973999,81.190598},
						{-32.447899,83.791603},
						{-32.740501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};
		destrType="DestructDefault";
		class Damage
		{
			mat[]=
			{
				"3AS\3as_Laat\laati\data\base.rvmat",
				"3AS\3as_Laat\laati\data\base_damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base_destruct.rvmat",
				"3AS\3as_Laat\laati\data\LAAT_Wings.rvmat",
				"3AS\3as_Laat\laati\data\LAAT_Wings_Damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base_destruct.rvmat",
				"3as\3as_laat\laati\textures\doors\laat_doors.rvmat",
				"3AS\3as_Laat\laati\data\laat_doors_damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base_destruct.rvmat",
				"3as\3as_laat\laati\textures\floodlight.rvmat",
				"3AS\3as_Laat\laati\data\floodlight_damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base_destruct.rvmat",
				"3as\3as_laat\laati\textures\bakedinside\inside.rvmat",
				"3AS\3as_Laat\laati\data\inside_damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base_destruct.rvmat",
				"A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_glass.rvmat",
				"A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_glass_damage.rvmat",
				"A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_glass_damage.rvmat"
			};
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"Limit1",
					"limit2"
				};
				disableHeightLimit=1;
				maxLoadMass=200000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0.15000001,0};
				exits[]=
				{
					"ramp_exit"
				};
				unloadingInterval=2;
				loadingDistance=10;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=50;
			};
		};
		class RenderTargets
		{
			class mfd
			{
				rendertarget="rendertarget0";
				class CameraView1
				{
					fov=0.1;
					pointdirection="PIP0_dir";
					pointposition="PIP0_pos";
					renderquality=2;
					rendervisionmode=2;
				};
			};
			class BayCamera
			{
				RenderTarget="rendertarget1";
				class CargoBay
				{
					pointPosition="Pip_bay";
					pointDirection="Pip_bay_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliMed";
			};
		};
		defaultUserMFDvalues[]={0,1,0,1,0};
		class MFD
		{
			class B_Plane_Fighter_01_static_HUD
			{
				enableParallax=1;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="PuristaLight";
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]=
				{
					"user0",
					"user1",
					"user2"
				};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class PlaneOrientation
					{
						type="vector";
						source="forward";
						pos[]={0.5,0.5};
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.1,0.1};
						pos10[]={0.1,0.1};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98540199;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Target
					{
						type="vector";
						source="targetToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodDir
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodTarget
					{
						source="pilotcameratargettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPointRelative
					{
						type="vector";
						source="impactpointtoviewweaponRelative";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=0.98540199;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.2,0.1,0.80000001,0.1};
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WPPointToView: WPPoint
					{
						source="WPPointToView";
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1ToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Airport2: Airport1
					{
						source="airportCorner2ToView";
					};
					class Airport3: Airport1
					{
						source="airportCorner3ToView";
					};
					class Airport4: Airport1
					{
						source="airportCorner4ToView";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.58219999,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.58099997};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min="-rad(30)";
						max="rad(30)";
						minAngle="180.25-30";
						maxAngle="180.75+30";
						aspectRatio=1;
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.5};
						pos10[]={0.884,0.88};
						type="horizontoview";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					width=1;
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.039999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.039999999,0},
								1
							}
						};
					};
					class PlaneMovementCrosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								}
							};
						};
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.19,0.55000001},
									1
								},
								
								{
									{0.19,0.70999998},
									1
								},
								
								{
									{0.20999999,0.70999998},
									1
								},
								{},
								
								{
									{0.20999999,0.67000002},
									1
								},
								
								{
									{0.19,0.67000002},
									1
								},
								{},
								
								{
									{0.20999999,0.63},
									1
								},
								
								{
									{0.19,0.63},
									1
								},
								{},
								
								{
									{0.20999999,0.58999997},
									1
								},
								
								{
									{0.19,0.58999997},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.73000002},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.19,0.70999998},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.69},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.208,0.70999998},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.208,0.70999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.22,0.52999997},
								1
							};
							right[]=
							{
								{0.25999999,0.52999997},
								1
							};
							down[]=
							{
								{0.22,0.56999999},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.22,0.61000001},
								1
							};
							right[]=
							{
								{0.25999999,0.61000001},
								1
							};
							down[]=
							{
								{0.22,0.64999998},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.69},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.2,0.69},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.73000002},
								1
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.039416101},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsText
					{
						condition="1- mgun";
						class WeaponsText
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class MGunText
					{
						condition="mgun";
						class WeaponsText
						{
							type="text";
							source="static";
							text="GUN";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.032000002,0.88},
							1
						};
						right[]=
						{
							{0.086999997,0.88},
							1
						};
						down[]=
						{
							{0.032000002,0.92500001},
							1
						};
					};
					class Laser
					{
						condition="laseron";
						class LaserText
						{
							type="text";
							source="static";
							text="LASER";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.80000001},
								1
							};
							right[]=
							{
								{0.98699999,0.80000001},
								1
							};
							down[]=
							{
								{0.93199998,0.84500003},
								1
							};
						};
					};
					class Flaps
					{
						condition="flaps";
						class FlapsText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.92000002},
								1
							};
							right[]=
							{
								{0.98699999,0.92000002},
								1
							};
							down[]=
							{
								{0.93199998,0.96499997},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.83999997},
								1
							};
							right[]=
							{
								{0.98699999,0.83999997},
								1
							};
							down[]=
							{
								{0.93199998,0.88499999},
								1
							};
						};
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class TargetLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21678799},
								1
							};
							right[]=
							{
								{0.54500002,0.21678799},
								1
							};
							down[]=
							{
								{0.48500001,0.266058},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class MainCenterLine1
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.44999999,0},
								1
							}
						};
					};
					class MainCenterLine2
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.33000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.25,0},
								1
							}
						};
					};
					class MainCenterLine3
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{0.25,0},
								1
							}
						};
					};
					class SpeedIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							}
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{-0.30000001,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{-0.40000001,-0.2},
							1
						};
					};
					class AltitudeIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							}
						};
					};
					class AltitudeNumberASL
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.47999999,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.40000001,-0.2},
							1
						};
					};
					class AltitudeRadarText
					{
						type="text";
						source="static";
						text="AGL->";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							"PlaneW",
							{0.31999999,-0.192},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"+0.32 + 0.04",
								-0.192
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.31999999,
								"-0.192 + 0.041"
							},
							1
						};
					};
					class AltitudeNumberAGL
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.47999999,-0.19},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.54000002,-0.19},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.47999999,-0.15000001},
							1
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.05",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="P:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.05",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="R:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.05",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="C:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class fuelNumber
					{
						type="text";
						source="fuel";
						sourceScale=100;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.40000001,0.07},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.40 + 0.08",
								0.07
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.40000001,
								"0.07 + 0.08"
							},
							1
						};
					};
					class fuelText
					{
						type="text";
						source="static";
						text="F:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.079999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.079999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"0.08 + 0.05"
							},
							1
						};
					};
					class HeadingArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.02,0.041999999},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0,0.022},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.02,0.041999999},
								1
							}
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.92400002,0.505018},
								1
							};
							down[]=
							{
								{0.92400002,0.54246402},
								1
							};
							right[]=
							{
								{0.96399999,0.505018},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.87699997,0.505018},
								1
							};
							right[]=
							{
								{0.917,0.505018},
								1
							};
							down[]=
							{
								{0.87699997,0.54246402},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="WP";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.825+0.01",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.875,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.01",
									0.54149997
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text=":";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.825+0.09",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.95499998,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.09",
									0.54149997
								},
								1
							};
						};
					};
					class HeadingRotation
					{
						condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type="text";
							source="cameraDir";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.80-0.302",
									"0.082+0.065"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.065"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.065"
								},
								1
							};
						};
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.48800001,0.141},
									1
								},
								
								{
									{0.51200002,0.141},
									1
								},
								
								{
									{0.542,0.161},
									1
								},
								
								{
									{0.51200002,0.18099999},
									1
								},
								
								{
									{0.48800001,0.18099999},
									1
								},
								
								{
									{0.458,0.161},
									1
								},
								
								{
									{0.48800001,0.141},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						NeverEatSeaWeed=1;
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=3;
						top=0.1;
						center=0.5;
						bottom=0.89999998;
						lineXleft=0.105;
						lineYright=0.115;
						lineXleftMajor=0.094999999;
						lineYrightMajor=0.115;
						majorLineEach=5;
						numberEach=5;
						step="18 / 9";
						stepSize="(0.70 - 0.3) / 15";
						align="center";
						scale=1;
						pos[]={0.096000001,0.0546};
						right[]={0.14300001,0.0546};
						down[]={0.096000001,0.093000002};
					};
					class HeadingIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							}
						};
					};
					class HeadingIndicatorArrow
					{
						type="polygon";
						points[]=
						{
							
							{
								
								{
									"PlaneW",
									{-0.015,-0.45500001},
									1
								},
								
								{
									"PlaneW",
									{0,-0.44499999},
									1
								},
								
								{
									"PlaneW",
									{0.015,-0.45500001},
									1
								}
							}
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5   )"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								0.029999999,
								"(-0.5   )"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5 + 0.045 )"
							},
							1
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									-0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							}
						};
					};
					class HorizonBankRotLines
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.619959,0.71298599},
								1
							},
							
							{
								{0.63143897,0.74420297},
								1
							},
							{},
							
							{
								{0.58291,0.73901898},
								1
							},
							
							{
								{0.58808702,0.76077801},
								1
							},
							{},
							
							{
								{0.54057401,0.74850398},
								1
							},
							
							{
								{0.54318398,0.77083802},
								1
							},
							{},
							
							{
								{0.4975,0.740421},
								1
							},
							
							{
								{0.4975,0.77420998},
								1
							},
							{},
							
							{
								{0.45442599,0.74850398},
								1
							},
							
							{
								{0.45181599,0.77083802},
								1
							},
							{},
							
							{
								{0.41209,0.73901898},
								1
							},
							
							{
								{0.40691301,0.76077801},
								1
							},
							{},
							
							{
								{0.37504101,0.71298599},
								1
							},
							
							{
								{0.363561,0.74420297},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0.2,0.2};
						clipBR[]={0.80000001,0.80000001};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
						};
						class HideOnTurn
						{
							condition="on";
							class Limiter
							{
								class Level0
								{
									type="line";
									width=2;
									points[]={};
								};
								class LevelM5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM5",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.22,0},
											1
										},
										
										{
											"LevelM5",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.19,0},
											1
										},
										
										{
											"LevelM5",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.16,0},
											1
										},
										
										{
											"LevelM5",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.13,0},
											1
										},
										
										{
											"LevelM5",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.1,0},
											1
										},
										
										{
											"LevelM5",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.07,0},
											1
										},
										
										{
											"LevelM5",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM5",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.22,0},
											1
										},
										
										{
											"LevelM5",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.19,0},
											1
										},
										
										{
											"LevelM5",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.16,0},
											1
										},
										
										{
											"LevelM5",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.13,0},
											1
										},
										
										{
											"LevelM5",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.1,0},
											1
										},
										
										{
											"LevelM5",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.07,0},
											1
										},
										
										{
											"LevelM5",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_5
								{
									type="text";
									source="static";
									text=-5;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_5_R
								{
									type="text";
									source="static";
									text=-5;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP5",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_5
								{
									type="text";
									source="static";
									text="5";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_5_R
								{
									type="text";
									source="static";
									text="5";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM10",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.22,0},
											1
										},
										
										{
											"LevelM10",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.19,0},
											1
										},
										
										{
											"LevelM10",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.16,0},
											1
										},
										
										{
											"LevelM10",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.13,0},
											1
										},
										
										{
											"LevelM10",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.1,0},
											1
										},
										
										{
											"LevelM10",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.07,0},
											1
										},
										
										{
											"LevelM10",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM10",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.22,0},
											1
										},
										
										{
											"LevelM10",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.19,0},
											1
										},
										
										{
											"LevelM10",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.16,0},
											1
										},
										
										{
											"LevelM10",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.13,0},
											1
										},
										
										{
											"LevelM10",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.1,0},
											1
										},
										
										{
											"LevelM10",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.07,0},
											1
										},
										
										{
											"LevelM10",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_10
								{
									type="text";
									source="static";
									text=-10;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_10_R
								{
									type="text";
									source="static";
									text=-10;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP10",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_10
								{
									type="text";
									source="static";
									text="10";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_10_R
								{
									type="text";
									source="static";
									text="10";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM15",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.22,0},
											1
										},
										
										{
											"LevelM15",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.19,0},
											1
										},
										
										{
											"LevelM15",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.16,0},
											1
										},
										
										{
											"LevelM15",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.13,0},
											1
										},
										
										{
											"LevelM15",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.1,0},
											1
										},
										
										{
											"LevelM15",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.07,0},
											1
										},
										
										{
											"LevelM15",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM15",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.22,0},
											1
										},
										
										{
											"LevelM15",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.19,0},
											1
										},
										
										{
											"LevelM15",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.16,0},
											1
										},
										
										{
											"LevelM15",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.13,0},
											1
										},
										
										{
											"LevelM15",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.1,0},
											1
										},
										
										{
											"LevelM15",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.07,0},
											1
										},
										
										{
											"LevelM15",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_15
								{
									type="text";
									source="static";
									text=-15;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_15_R
								{
									type="text";
									source="static";
									text=-15;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP15",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_15
								{
									type="text";
									source="static";
									text="15";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_15_R
								{
									type="text";
									source="static";
									text="15";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM20",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.22,0},
											1
										},
										
										{
											"LevelM20",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.19,0},
											1
										},
										
										{
											"LevelM20",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.16,0},
											1
										},
										
										{
											"LevelM20",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.13,0},
											1
										},
										
										{
											"LevelM20",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.1,0},
											1
										},
										
										{
											"LevelM20",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.07,0},
											1
										},
										
										{
											"LevelM20",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM20",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.22,0},
											1
										},
										
										{
											"LevelM20",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.19,0},
											1
										},
										
										{
											"LevelM20",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.16,0},
											1
										},
										
										{
											"LevelM20",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.13,0},
											1
										},
										
										{
											"LevelM20",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.1,0},
											1
										},
										
										{
											"LevelM20",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.07,0},
											1
										},
										
										{
											"LevelM20",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_20
								{
									type="text";
									source="static";
									text=-20;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_20_R
								{
									type="text";
									source="static";
									text=-20;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP20",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_20
								{
									type="text";
									source="static";
									text="20";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_20_R
								{
									type="text";
									source="static";
									text="20";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM25",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.22,0},
											1
										},
										
										{
											"LevelM25",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.19,0},
											1
										},
										
										{
											"LevelM25",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.16,0},
											1
										},
										
										{
											"LevelM25",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.13,0},
											1
										},
										
										{
											"LevelM25",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.1,0},
											1
										},
										
										{
											"LevelM25",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.07,0},
											1
										},
										
										{
											"LevelM25",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM25",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.22,0},
											1
										},
										
										{
											"LevelM25",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.19,0},
											1
										},
										
										{
											"LevelM25",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.16,0},
											1
										},
										
										{
											"LevelM25",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.13,0},
											1
										},
										
										{
											"LevelM25",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.1,0},
											1
										},
										
										{
											"LevelM25",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.07,0},
											1
										},
										
										{
											"LevelM25",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_25
								{
									type="text";
									source="static";
									text=-25;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_25_R
								{
									type="text";
									source="static";
									text=-25;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP25",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_25
								{
									type="text";
									source="static";
									text="25";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_25_R
								{
									type="text";
									source="static";
									text="25";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM30",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.22,0},
											1
										},
										
										{
											"LevelM30",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.19,0},
											1
										},
										
										{
											"LevelM30",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.16,0},
											1
										},
										
										{
											"LevelM30",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.13,0},
											1
										},
										
										{
											"LevelM30",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.1,0},
											1
										},
										
										{
											"LevelM30",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.07,0},
											1
										},
										
										{
											"LevelM30",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM30",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.22,0},
											1
										},
										
										{
											"LevelM30",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.19,0},
											1
										},
										
										{
											"LevelM30",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.16,0},
											1
										},
										
										{
											"LevelM30",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.13,0},
											1
										},
										
										{
											"LevelM30",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.1,0},
											1
										},
										
										{
											"LevelM30",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.07,0},
											1
										},
										
										{
											"LevelM30",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_30
								{
									type="text";
									source="static";
									text=-30;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_30_R
								{
									type="text";
									source="static";
									text=-30;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP30",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_30
								{
									type="text";
									source="static";
									text="30";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_30_R
								{
									type="text";
									source="static";
									text="30";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM35",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.22,0},
											1
										},
										
										{
											"LevelM35",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.19,0},
											1
										},
										
										{
											"LevelM35",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.16,0},
											1
										},
										
										{
											"LevelM35",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.13,0},
											1
										},
										
										{
											"LevelM35",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.1,0},
											1
										},
										
										{
											"LevelM35",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.07,0},
											1
										},
										
										{
											"LevelM35",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM35",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.22,0},
											1
										},
										
										{
											"LevelM35",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.19,0},
											1
										},
										
										{
											"LevelM35",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.16,0},
											1
										},
										
										{
											"LevelM35",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.13,0},
											1
										},
										
										{
											"LevelM35",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.1,0},
											1
										},
										
										{
											"LevelM35",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.07,0},
											1
										},
										
										{
											"LevelM35",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_35
								{
									type="text";
									source="static";
									text=-35;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_35_R
								{
									type="text";
									source="static";
									text=-35;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP35",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_35
								{
									type="text";
									source="static";
									text="35";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_35_R
								{
									type="text";
									source="static";
									text="35";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM40",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.22,0},
											1
										},
										
										{
											"LevelM40",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.19,0},
											1
										},
										
										{
											"LevelM40",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.16,0},
											1
										},
										
										{
											"LevelM40",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.13,0},
											1
										},
										
										{
											"LevelM40",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.1,0},
											1
										},
										
										{
											"LevelM40",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.07,0},
											1
										},
										
										{
											"LevelM40",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM40",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.22,0},
											1
										},
										
										{
											"LevelM40",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.19,0},
											1
										},
										
										{
											"LevelM40",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.16,0},
											1
										},
										
										{
											"LevelM40",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.13,0},
											1
										},
										
										{
											"LevelM40",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.1,0},
											1
										},
										
										{
											"LevelM40",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.07,0},
											1
										},
										
										{
											"LevelM40",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_40
								{
									type="text";
									source="static";
									text=-40;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_40_R
								{
									type="text";
									source="static";
									text=-40;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP40",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_40
								{
									type="text";
									source="static";
									text="40";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_40_R
								{
									type="text";
									source="static";
									text="40";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM45",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.22,0},
											1
										},
										
										{
											"LevelM45",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.19,0},
											1
										},
										
										{
											"LevelM45",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.16,0},
											1
										},
										
										{
											"LevelM45",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.13,0},
											1
										},
										
										{
											"LevelM45",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.1,0},
											1
										},
										
										{
											"LevelM45",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.07,0},
											1
										},
										
										{
											"LevelM45",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM45",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.22,0},
											1
										},
										
										{
											"LevelM45",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.19,0},
											1
										},
										
										{
											"LevelM45",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.16,0},
											1
										},
										
										{
											"LevelM45",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.13,0},
											1
										},
										
										{
											"LevelM45",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.1,0},
											1
										},
										
										{
											"LevelM45",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.07,0},
											1
										},
										
										{
											"LevelM45",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_45
								{
									type="text";
									source="static";
									text=-45;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_45_R
								{
									type="text";
									source="static";
									text=-45;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP45",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_45
								{
									type="text";
									source="static";
									text="45";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_45_R
								{
									type="text";
									source="static";
									text="45";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM50",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.22,0},
											1
										},
										
										{
											"LevelM50",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.19,0},
											1
										},
										
										{
											"LevelM50",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.16,0},
											1
										},
										
										{
											"LevelM50",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.13,0},
											1
										},
										
										{
											"LevelM50",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.1,0},
											1
										},
										
										{
											"LevelM50",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.07,0},
											1
										},
										
										{
											"LevelM50",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM50",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.22,0},
											1
										},
										
										{
											"LevelM50",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.19,0},
											1
										},
										
										{
											"LevelM50",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.16,0},
											1
										},
										
										{
											"LevelM50",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.13,0},
											1
										},
										
										{
											"LevelM50",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.1,0},
											1
										},
										
										{
											"LevelM50",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.07,0},
											1
										},
										
										{
											"LevelM50",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_50
								{
									type="text";
									source="static";
									text=-50;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_50_R
								{
									type="text";
									source="static";
									text=-50;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP50",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_50
								{
									type="text";
									source="static";
									text="50";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_50_R
								{
									type="text";
									source="static";
									text="50";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM60",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.22,0},
											1
										},
										
										{
											"LevelM60",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.19,0},
											1
										},
										
										{
											"LevelM60",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.16,0},
											1
										},
										
										{
											"LevelM60",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.13,0},
											1
										},
										
										{
											"LevelM60",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.1,0},
											1
										},
										
										{
											"LevelM60",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.07,0},
											1
										},
										
										{
											"LevelM60",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM60",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.22,0},
											1
										},
										
										{
											"LevelM60",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.19,0},
											1
										},
										
										{
											"LevelM60",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.16,0},
											1
										},
										
										{
											"LevelM60",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.13,0},
											1
										},
										
										{
											"LevelM60",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.1,0},
											1
										},
										
										{
											"LevelM60",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.07,0},
											1
										},
										
										{
											"LevelM60",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_60
								{
									type="text";
									source="static";
									text=-60;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_60_R
								{
									type="text";
									source="static";
									text=-60;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP60",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_60
								{
									type="text";
									source="static";
									text="60";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_60_R
								{
									type="text";
									source="static";
									text="60";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM70",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.22,0},
											1
										},
										
										{
											"LevelM70",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.19,0},
											1
										},
										
										{
											"LevelM70",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.16,0},
											1
										},
										
										{
											"LevelM70",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.13,0},
											1
										},
										
										{
											"LevelM70",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.1,0},
											1
										},
										
										{
											"LevelM70",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.07,0},
											1
										},
										
										{
											"LevelM70",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM70",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.22,0},
											1
										},
										
										{
											"LevelM70",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.19,0},
											1
										},
										
										{
											"LevelM70",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.16,0},
											1
										},
										
										{
											"LevelM70",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.13,0},
											1
										},
										
										{
											"LevelM70",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.1,0},
											1
										},
										
										{
											"LevelM70",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.07,0},
											1
										},
										
										{
											"LevelM70",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_70
								{
									type="text";
									source="static";
									text=-70;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_70_R
								{
									type="text";
									source="static";
									text=-70;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP70",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_70
								{
									type="text";
									source="static";
									text="70";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_70_R
								{
									type="text";
									source="static";
									text="70";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM80",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.22,0},
											1
										},
										
										{
											"LevelM80",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.19,0},
											1
										},
										
										{
											"LevelM80",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.16,0},
											1
										},
										
										{
											"LevelM80",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.13,0},
											1
										},
										
										{
											"LevelM80",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.1,0},
											1
										},
										
										{
											"LevelM80",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.07,0},
											1
										},
										
										{
											"LevelM80",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM80",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.22,0},
											1
										},
										
										{
											"LevelM80",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.19,0},
											1
										},
										
										{
											"LevelM80",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.16,0},
											1
										},
										
										{
											"LevelM80",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.13,0},
											1
										},
										
										{
											"LevelM80",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.1,0},
											1
										},
										
										{
											"LevelM80",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.07,0},
											1
										},
										
										{
											"LevelM80",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_80
								{
									type="text";
									source="static";
									text=-80;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_80_R
								{
									type="text";
									source="static";
									text=-80;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP80",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_80
								{
									type="text";
									source="static";
									text="80";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_80_R
								{
									type="text";
									source="static";
									text="80";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM90",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.22,0},
											1
										},
										
										{
											"LevelM90",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.19,0},
											1
										},
										
										{
											"LevelM90",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.16,0},
											1
										},
										
										{
											"LevelM90",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.13,0},
											1
										},
										
										{
											"LevelM90",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.1,0},
											1
										},
										
										{
											"LevelM90",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.07,0},
											1
										},
										
										{
											"LevelM90",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM90",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.22,0},
											1
										},
										
										{
											"LevelM90",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.19,0},
											1
										},
										
										{
											"LevelM90",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.16,0},
											1
										},
										
										{
											"LevelM90",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.13,0},
											1
										},
										
										{
											"LevelM90",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.1,0},
											1
										},
										
										{
											"LevelM90",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.07,0},
											1
										},
										
										{
											"LevelM90",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_90
								{
									type="text";
									source="static";
									text=-90;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_90_R
								{
									type="text";
									source="static";
									text=-90;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP90",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_90
								{
									type="text";
									source="static";
									text="90";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_90_R
								{
									type="text";
									source="static";
									text="90";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{0.25999999,0.033},
										1
									};
								};
							};
						};
						class UnhideOnTurn
						{
							condition="on";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.02,0},
										1
									},
									
									{
										"PlaneW",
										{-0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0.02,0},
										1
									},
									
									{
										"PlaneW",
										{0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,-0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,-0.039416101},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,0.039416101},
										1
									},
									{}
								};
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.773,0.773};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,-0.0020000001},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								}
							};
						};
					};
				};
			};
		};
		class Reflectors
		{
			class Right
			{
				ambient[]={70,75,100};
				color[]={7000,7500,10000};
				coneFadeCoef=10;
				dayLight=0;
				direction="Light_R_end";
				FlareSize=4;
				hitpoint="Light_R";
				innerAngle=5;
				intensity=50;
				outerAngle=75;
				position="Light_R";
				selection="Light_R";
				size=1;
				useFlare=1;
				class Attenuation
				{
					constant=0;
					hardLimitEnd=250;
					hardLimitStart=200;
					linear=1;
					quadratic=0;
					start=0;
				};
			};
		};
		class TextureSources
		{
			class ARC
			{
				displayName="ARC";
				author="Charger";
				textures[]=
				{
					"3AS\3as_Laat\LAATI\Textures\ARC_LAAT_Wings_Doors_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\ARC_LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\ARC_LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\Doors\LAAT_doors_CO.paa"
				};
				factions[]=
				{
					"3as_rep"
				};
			};
			class Imperial
			{
				displayName="Imperial";
				author="Charger";
				textures[]=
				{
					"3AS\3as_Laat\LAATI\Textures\Imperial_LAAT_Wings_Doors_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\Imperial_LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\Imperial_LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\Doors\LAAT_doors_CO.paa"
				};
				factions[]=
				{
					"3as_rep"
				};
			};
			class Hasbro
			{
				displayName="Hasbro Episode 3";
				author="Poly";
				textures[]=
				{
					"3AS\3as_Laat\LAATI\data\HasBro\LAAT_Wings_Doors_CO.paa",
					"3AS\3as_Laat\LAATI\data\HasBro\LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\data\HasBro\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\Doors\LAAT_doors_CO.paa"
				};
				factions[]=
				{
					"3as_rep"
				};
			};
			class 212thAB
			{
				displayName="212th Attack Battalion";
				author="Charger";
				textures[]=
				{
					"3AS\3as_Laat\LAATI\Textures\212th_LAAT_Wings_Doors_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\212th_LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\Doors\LAAT_doors_CO.paa"
				};
				factions[]=
				{
					"3as_rep"
				};
			};
			class 501stLegion
			{
				displayName="501st Legion";
				author="Charger";
				textures[]=
				{
					"3AS\3as_Laat\LAATI\Textures\501st_LAAT_Wings_Doors_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\501st_LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\Doors\LAAT_doors_CO.paa"
				};
				factions[]=
				{
					"3as_rep"
				};
			};
			class 91stRecon
			{
				displayName="91st Reconnisance";
				author="Charger";
				textures[]=
				{
					"3AS\3as_Laat\LAATI\Textures\91st_LAAT_Wings_Doors_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\91st_LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\Doors\LAAT_doors_CO.paa"
				};
				factions[]=
				{
					"3as_rep"
				};
			};
			class 101stDoom
			{
				displayName="101st Doom Company";
				author="Charger";
				textures[]=
				{
					"3AS\3as_Laat\LAATI\Textures\101st_LAAT_Wings_Doors_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\101st_LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\Doors\LAAT_doors_CO.paa"
				};
				factions[]=
				{
					"3as_rep"
				};
			};
			class 327th
			{
				displayName="327th Star Corps";
				author="Charger";
				textures[]=
				{
					"3AS\3as_Laat\LAATI\Textures\327th_LAAT_Wings_Doors_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\327th_LAAT_Base_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa",
					"3AS\3as_Laat\LAATI\Textures\Doors\LAAT_doors_CO.paa"
				};
				factions[]=
				{
					"3as_rep"
				};
			};
		};
	};
};
