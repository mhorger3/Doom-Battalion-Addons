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
			"101st_Z95_base",
			"101st_ARC_Modified",
			"101st_Nuclass",
			"DBA_arc_170_green",
			"DBA_LAAT_Pylons"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Tank_Loadorder"
		};
	};
};
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
		ace_cargo_space = 400;
		faction="Republic_101st";
		editorSubcategory = "RD501_Editor_Category_Air_Republic_heli";
		vehicleClass = "RD501_Air_Vehicle_Class_Republic";
		displayName="101st LAAT MKV (Republic)";
		author="Trip";
		hiddenSelectionsTextures[] = {"3AS\3as_Laat\LAATI\Textures\laat_wings_doors_basecolor.paa","3AS\3as_Laat\LAATI\Textures\laat_base_basecolor.paa"};
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
            init="[_this select 0] execVM '101st_Aux_Mod\Addons\LAAT\3.0\autocrate.sqf';[_this select 0] execVM 'RD501_Main\functions\vehicle_lift\laat_lift_3.sqf';";
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
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTE.sqf""";
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
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTE.sqf""";
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
				weapons[] = {"RD501_turret_laat_ball_beam_l","Laserdesignator_pilotCamera"};
				magazines[] = {"Laserbatteries","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag"};
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
				weapons[] = {"RD501_turret_laat_ball_beam_r","Laserdesignator_pilotCamera"};
				magazines[] = {"Laserbatteries","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag","RD501_laat_ball_beam_x300_mag"};
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
		ace_cargo_space = 400;
		faction="Republic_101st";
		editorSubcategory = "RD501_Editor_Category_Air_Republic_heli";
		vehicleClass = "RD501_Air_Vehicle_Class_Republic";
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
            init="[_this select 0] execVM '101st_Aux_Mod\Addons\LAAT\3.0\autocrate.sqf';[_this select 0] execVM 'RD501_Main\functions\vehicle_lift\laat_lift_3.sqf';";
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
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTE.sqf""";
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
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTE.sqf""";
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
		ace_cargo_space = 400;
		faction="Republic_101st";
		editorSubcategory = "RD501_Editor_Category_Air_Republic_heli";
		vehicleClass = "RD501_Air_Vehicle_Class_Republic";
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
            init="[_this select 0] execVM '101st_Aux_Mod\Addons\LAAT\3.0\autocrate.sqf';[_this select 0] execVM 'RD501_Main\functions\vehicle_lift\laat_lift_3.sqf';";
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
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTE.sqf""";
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
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTE.sqf""";
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
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\Vehicles\LAAT\101st_laat_wings_doors_CO.paa",
			"101st_Aux_Mod\Addons\Vehicles\LAAT\101st_laat_base_CO.paa"
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
			class 101st_Style_Changer
		    {
		        displayName="Change Style"; //Written by RD501
		        exceptions[]=
		        {
		            "isNotInside",
		            "isNotSwimming",
		            "isNotSitting"
		        };
		        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
		        showDisabled=0;
		        priority=2;

		        class 101st_NoseArt_None
		        {
		            displayName="None";
		            exceptions[]=
		            {
		                "isNotInside",
		                "isNotSwimming",
		                "isNotSitting"
		            };
		            condition="!(isNull objectParent player)";
		            statement="_target setObjectTextureGlobal [1,'101st_Aux_Mod\Addons\Vehicles\LAAT\101st_laat_base_CO.paa']";
		            showDisabled=0;
		            runOnHover=0;
		            priority=2.5;
		        };
				
		        class 101st_NoseArt_Sunlight: 101st_NoseArt_None
		        {
		            displayName="Sunlight";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Nyom_CO.paa']";
		        };

		     	class 101st_NoseArt_Lightning: 101st_NoseArt_None
		        {
		            displayName="Lightning";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Frisk_CO.paa']";
		        };

		        class 101st_NoseArt_Ice: 101st_NoseArt_None
		        {
		            displayName="Fox";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Prof_CO.paa']";
		        };

		        class 101st_NoseArt_Nexu: 101st_NoseArt_None
		        {
		            displayName="Nexu";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Nexus_CO.paa']";
		        };
		        class 101st_NoseArt_Gearhead: 101st_NoseArt_None
		        {
		            displayName="Gearhead";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Arcturus_CO.paa']";
		        };
		    };
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
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\Vehicles\LAAT\101st_laat_wings_doors_CO.paa",
			"101st_Aux_Mod\Addons\Vehicles\LAAT\101st_laat_base_CO.paa"
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
			class 101st_Style_Changer
		    {
		        displayName="Change Style"; //Written by RD501
		        exceptions[]=
		        {
		            "isNotInside",
		            "isNotSwimming",
		            "isNotSitting"
		        };
		        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
		        showDisabled=0;
		        priority=2;

		        class 101st_NoseArt_None
		        {
		            displayName="None";
		            exceptions[]=
		            {
		                "isNotInside",
		                "isNotSwimming",
		                "isNotSitting"
		            };
		            condition="!(isNull objectParent player)";
		            statement="_target setObjectTextureGlobal [1,'101st_Aux_Mod\Addons\Vehicles\LAAT\101st_laat_base_CO.paa']";
		            showDisabled=0;
		            runOnHover=0;
		            priority=2.5;
		        };
				
		        class 101st_NoseArt_Sunlight: 101st_NoseArt_None
		        {
		            displayName="Sunlight";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Nyom_CO.paa']";
		        };

		     	class 101st_NoseArt_Lightning: 101st_NoseArt_None
		        {
		            displayName="Lightning";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Frisk_CO.paa']";
		        };

		        class 101st_NoseArt_Ice: 101st_NoseArt_None
		        {
		            displayName="Fox";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Prof_CO.paa']";
		        };

		        class 101st_NoseArt_Nexu: 101st_NoseArt_None
		        {
		            displayName="Nexu";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Nexus_CO.paa']";
		        };
		        class 101st_NoseArt_Gearhead: 101st_NoseArt_None
		        {
		            displayName="Gearhead";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Arcturus_CO.paa']";
		        };
		    };
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
		hiddenselectionstextures[] =
			{
				"101st_Aux_Mod\Addons\Vehicles\LAAT\101st_laat_wings_doors_CO.paa",
				"101st_Aux_Mod\Addons\Vehicles\LAAT\101st_laat_base_CO.paa"
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
			class 101st_Style_Changer
		    {
		        displayName="Change Style"; //Written by RD501
		        exceptions[]=
		        {
		            "isNotInside",
		            "isNotSwimming",
		            "isNotSitting"
		        };
		        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
		        showDisabled=0;
		        priority=2;

		        class 101st_NoseArt_None
		        {
		            displayName="None";
		            exceptions[]=
		            {
		                "isNotInside",
		                "isNotSwimming",
		                "isNotSitting"
		            };
		            condition="!(isNull objectParent player)";
		            statement="_target setObjectTextureGlobal [1,'101st_Aux_Mod\Addons\Vehicles\LAAT\101st_laat_base_CO.paa']";
		            showDisabled=0;
		            runOnHover=0;
		            priority=2.5;
		        };
				
		        class 101st_NoseArt_Sunlight: 101st_NoseArt_None
		        {
		            displayName="Sunlight";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Nyom_CO.paa']";
		        };

		     	class 101st_NoseArt_Lightning: 101st_NoseArt_None
		        {
		            displayName="Lightning";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Frisk_CO.paa']";
		        };

		        class 101st_NoseArt_Ice: 101st_NoseArt_None
		        {
		            displayName="Fox";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Prof_CO.paa']";
		        };

		        class 101st_NoseArt_Nexu: 101st_NoseArt_None
		        {
		            displayName="Nexu";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Nexus_CO.paa']";
		        };
		        class 101st_NoseArt_Gearhead: 101st_NoseArt_None
		        {
		            displayName="Gearhead";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\LAAT_Base_Arcturus_CO.paa']";
		        };
		    };
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
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Wings_Doors_CO.paa",
			"101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Base_CO.paa"
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
			class 101st_Style_Changer
		    {
		        displayName="Change Style"; //Written by RD501
		        exceptions[]=
		        {
		            "isNotInside",
		            "isNotSwimming",
		            "isNotSitting"
		        };
		        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
		        showDisabled=0;
		        priority=2;

		        class 101st_NoseArt_None
		        {
		            displayName="None";
		            exceptions[]=
		            {
		                "isNotInside",
		                "isNotSwimming",
		                "isNotSitting"
		            };
		            condition="!(isNull objectParent player)";
		            statement="_target setObjectTextureGlobal [1,'101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Base_CO.paa']";
		            showDisabled=0;
		            runOnHover=0;
		            priority=2.5;
		        };
				

		        class 101st_NoseArt_Kraken: 101st_NoseArt_None
		        {
		            displayName="Kraken";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Peanut_CO.paa']";
		        };
				
		        class 101st_NoseArt_Sunlight: 101st_NoseArt_None
		        {
		            displayName="Sunlight";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Nyom_CO.paa']";
		        };

		     	class 101st_NoseArt_Lightning: 101st_NoseArt_None
		        {
		            displayName="Lightning";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Frisk_CO.paa']";
		        };

		        class 101st_NoseArt_Ice: 101st_NoseArt_None
		        {
		            displayName="Fox";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Prof_CO.paa']";
		        };

		        class 101st_NoseArt_Patriot: 101st_NoseArt_None
		        {
		            displayName="Patriot";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Hines_CO.paa']";
		        };

		        class 101st_NoseArt_Nexu: 101st_NoseArt_None
		        {
		            displayName="Nexu";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Nexus_CO.paa']";
		        };

		        class 101st_NoseArt_Gearhead: 101st_NoseArt_None
		        {
		            displayName="Gearhead";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Arcturus_CO.paa']";
		        };
		    };
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
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Wings_Doors_CO.paa",
			"101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Base_CO.paa"
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
			class 101st_Style_Changer
		    {
		        displayName="Change Style"; //Written by RD501
		        exceptions[]=
		        {
		            "isNotInside",
		            "isNotSwimming",
		            "isNotSitting"
		        };
		        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
		        showDisabled=0;
		        priority=2;

		        class 101st_NoseArt_None
		        {
		            displayName="None";
		            exceptions[]=
		            {
		                "isNotInside",
		                "isNotSwimming",
		                "isNotSitting"
		            };
		            condition="!(isNull objectParent player)";
		            statement="_target setObjectTextureGlobal [1,'101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Base_CO.paa']";
		            showDisabled=0;
		            runOnHover=0;
		            priority=2.5;
		        };
				
		        class 101st_NoseArt_Kraken: 101st_NoseArt_None
		        {
		            displayName="Kraken";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Peanut_CO.paa']";
		        };
				
		        class 101st_NoseArt_Sunlight: 101st_NoseArt_None
		        {
		            displayName="Sunlight";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Nyom_CO.paa']";
		        };

		     	class 101st_NoseArt_Lightning: 101st_NoseArt_None
		        {
		            displayName="Lightning";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Frisk_CO.paa']";
		        };

		        class 101st_NoseArt_Ice: 101st_NoseArt_None
		        {
		            displayName="Fox";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Prof_CO.paa']";
		        };

		        class 101st_NoseArt_Patriot: 101st_NoseArt_None
		        {
		            displayName="Patriot";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Hines_CO.paa']";
		        };

		        class 101st_NoseArt_Nexu: 101st_NoseArt_None
		        {
		            displayName="Nexu";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Nexus_CO.paa']";
		        };
		       	class 101st_NoseArt_Gearhead: 101st_NoseArt_None
		        {
		            displayName="Gearhead";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Arcturus_CO.paa']";
		        };
		    };
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
		hiddenselectionstextures[] =
			{
				"101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Wings_Doors_CO.paa",
				"101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Base_CO.paa"
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
			class 101st_Style_Changer
		    {
		        displayName="Change Style"; //Written by RD501
		        exceptions[]=
		        {
		            "isNotInside",
		            "isNotSwimming",
		            "isNotSitting"
		        };
		        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
		        showDisabled=0;
		        priority=2;

		        class 101st_NoseArt_None
		        {
		            displayName="None";
		            exceptions[]=
		            {
		                "isNotInside",
		                "isNotSwimming",
		                "isNotSitting"
		            };
		            condition="!(isNull objectParent player)";
		            statement="_target setObjectTextureGlobal [1,'101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Base_CO.paa']";
		            showDisabled=0;
		            runOnHover=0;
		            priority=2.5;
		        };
				
		        class 101st_NoseArt_Kraken: 101st_NoseArt_None
		        {
		            displayName="Kraken";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Peanut_CO.paa']";
		        };
				
		        class 101st_NoseArt_Sunlight: 101st_NoseArt_None
		        {
		            displayName="Sunlight";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Nyom_CO.paa']";
		        };

		     	class 101st_NoseArt_Lightning: 101st_NoseArt_None
		        {
		            displayName="Lightning";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Frisk_CO.paa']";
		        };

		        class 101st_NoseArt_Ice: 101st_NoseArt_None
		        {
		            displayName="Fox";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Prof_CO.paa']";
		        };

		        class 101st_NoseArt_Patriot: 101st_NoseArt_None
		        {
		            displayName="Patriot";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Hines_CO.paa']";
		        };

		        class 101st_NoseArt_Nexu: 101st_NoseArt_None
		        {
		            displayName="Nexu";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Nexus_CO.paa']";
		        };
		        class 101st_NoseArt_Gearhead: 101st_NoseArt_None
		        {
		            displayName="Gearhead";
		            statement="_target setObjectTextureGlobal [1, '101st_Aux_Mod\Addons\Vehicles\LAAT\Command_Arcturus_CO.paa']";
		        };
		    };
		};
	};

	class 3as_nuclass_f;
	class 101st_Nuclass: 3as_nuclass_f
	{
		faction="Republic_101st";
		editorSubcategory = "RD501_Editor_Category_Air_Republic_heli";
		vehicleClass = "RD501_Air_Vehicle_Class_Republic";
		displayName="101st Nu Class Shuttle";
		author="Trip";
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
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTE.sqf""";
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
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTE.sqf""";
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
	
	class Plane_Fighter_03_base_F;
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class Components;
	};
	class 3as_Z95_base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent;
		};
		class pilotCamera;
	};
	class RD501_z95_blue: 3as_Z95_base
	{
		class Components: Components
		{
			class TransportPylonsComponent;
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
			"3AS\3as_Z95\Data\grey_co.paa",
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
							"DBA_Universal_rail"
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
	
	class CopilotTurret;
	class VTOL_01_base_F
	{
		class Turrets
		{
			class MainTurret
			{
			};
		};
		class Components
		{
		};
	};
	class NewTurret;
	class 3as_arc_170_base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent;
		};
	};
	class 3as_arc_170_green: 3as_arc_170_base
	{
		class Components: Components
		{
			class TransportPylonsComponent;
		};
	};
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
			class TransportPylonsComponent
			{
				UIPicture="3as\3as_arc170\data\plane_arc_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"DBA_Universal_rail"
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
							"B_BOMB_PYLON",
							"ARC_EMP_RAIL"
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
							"DBA_Universal_rail",
							"B_HARM_RAIL",
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
		class EventHandlers: Eventhandlers
		{
			init="(_this) spawn kobra_Vehicle_fnc_ImpulsorMonitor;";
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
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTE.sqf""";
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
				statement = "this execVM ""\101st_Aux_Mod\Addons\DBA_AirVehicles\Impulse\initTE.sqf""";
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
};