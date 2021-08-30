class CfgPatches
{	
	class DBA_Ground_Vehicles
	{
		author="Trip";
		name="Doom Battalion Ground Vehicles";
		units[] = 
		{
			"DBA_TX130_Standard",
			"DBA_TX130_GMG",
			"DBA_TX130_Super",
			"DBA_TX130_Recon",
			"101st_Warden_Tank",
			"DBA_BEARD",
			"DBA_Tyrant",
			"DBA_Overlord",
			"DBA_Warrior_Testbed",
			"DBA_Winter_Warrior",
			"DBA_Doom_Warrior",
			"DBA_Fennek",
			"DBA_Fennek_GL",
			"DBA_Fennek_Medic",
			"DBA_Rooikat",
			"DBA_Leopard",
			"DBA_Leopard_Testbed",
			"DBA_Merkava",	
			"DBA_Merkava_Testbed",
			"DBA_Armata",
			"DBA_Armata_Testbed",
			"DBA_AV7_Testbed",
			"DBA_Bantha_Testbed",
			"DBA_LSV",
			"DBA_ATTE_Base",
			"101st_Octo_Droid",
			"101st_DSD3_Droid",
			"101st_Crab_Droid",
			"DBA_Technical",
			"DBA_Marid",
			"DBA_Viper",
			"DBA_Skorpion",
			"101st_patrolcraft",
			"DBA_Highgrav_transport_HMG",
			"DBA_Highgrav_transport_HE"

		};
	}
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventhandlers;
class CfgVehicles
{
//normal inheritiance trees

	//Warden
	class APC_Tracked_01_base_F;
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F
	{
		class Turrets;
	};
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class CommanderOptics;
		};
		class Components;
	};

	//AA
	class B_SAM_System_02_F;
	class B_SAM_System_01_F;



		class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class ViewGunner;
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class RCWSOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class turrets;
	class APC_Tracked_03_base_F : Tank_F
	{
		class Turrets: turrets
		{
			class MainTurret;
		};
	};
	class I_APC_tracked_03_base_F : APC_Tracked_03_base_F
	{
		class HitPoints;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints;
				class turrets;
			};
		};
	};
	class I_APC_tracked_03_cannon_F : I_APC_tracked_03_base_F
	{
		class HitPoints: HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints: HitPoints
				{
					class HitTurret;
					class HitGun;
				};
				class turrets: turrets
				{
					class commanderoptics;
				};
			};
		};
	};
	class MBT_03_base_F: Tank_F
    {
        class turrets: turrets
        {
            class MainTurret;
        };
    };
    class I_MBT_03_base_F: MBT_03_base_F
    {
        class turrets: turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };
    class I_MBT_03_cannon_F: I_MBT_03_base_F
    {
        class turrets: turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                };
            };
        };
    };
    class MBT_01_base_F: Tank_F
	{
		class turrets : turrets
		{
			class MainTurret;
			
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F
	{
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets;
				
			};
		};
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets;
				
			};
		};
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
	{
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets : Turrets
				{
					class CommanderOptics;
					
				};
			};
		};
	};
	class MBT_04_base_F: Tank_F
	{
		class turrets : turrets
		{
			class MainTurret;
			
		};
	};
	class MBT_04_command_base_F: MBT_04_base_F
	{
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets;
				
			};
		};
	};
	class O_T_MBT_04_command_F: MBT_04_command_base_F
	{
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
				};
			};
		};
	};
	class 3as_01_arty_base_F : MBT_01_arty_base_F{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
				};
			};
		};
	};	
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Eventhandlers;
		class ViewPilot;
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class CargoTurret;
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitBody;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class MRAP_02_base_F : Car_F
	{
		class Turrets : turrets
		{
			class MainTurret;
			class CommanderTurret;
		};
	};
	class MRAP_02_hmg_base_F : MRAP_02_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
			class CommanderTurret : CommanderTurret
			{};
		};
	};
	class O_T_MRAP_02_hmg_ghex_F : MRAP_02_hmg_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
			class CommanderTurret : CommanderTurret
			{};
		};
	};
	class MRAP_03_base_F : Car_F
	{
		class Turrets: turrets
		{
			class MainTurret;
			class CommanderTurret;
		};
	};
	class MRAP_03_hmg_base_F : MRAP_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderTurret : CommanderTurret
			{};
		};
	};
	class I_MRAP_03_hmg_F : MRAP_03_hmg_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderTurret : CommanderTurret
			{};
		};
	};
	class I_MRAP_03_gmg_F;
	class Wheeled_APC_F: Car_F
	{
		class turrets : turrets
		{
			class MainTurret;
			
		};
	};
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
	{
		class turrets : turrets
		{
			class MainTurret;
			
		};
	};
	class B_AFV_Wheeled_01_cannon_F : AFV_Wheeled_01_base_F 
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
//stupidass 3as inheritance
	class 3as_saber_01_Base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: NewTurret
			{
			};
			class Mainturret_top: MainTurret_bottom
			{
			};
		};
	};
	class 3as_saber_Base: 3as_saber_01_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
			};
			class Mainturret_top: Mainturret_top
			{
			};
		};
	};
	class 3as_saber_m1: 3as_saber_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
			};
			class Mainturret_top: Mainturret_top
			{
			};
		};
	};
	class 3as_saber_02_Base : 3as_saber_01_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
			};
			class Mainturret_top: Mainturret_top
			{
			};
		};
	};
	class 3as_saber_m1G: 3as_saber_02_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
			};
			class Mainturret_top: Mainturret_top
			{
			};
		};
	};

	class 3as_saber_super_base: 3as_saber_01_Base
	{
		class Turrets: Turrets
		{
			class Mainturret_super: MainTurret_bottom
			{
			};
		};
	};
	class 3as_saber_super: 3as_saber_super_base
	{
		class Turrets: Turrets
		{
			class Mainturret_super: Mainturret_super
			{
			};
		};
	};
	class 3as_saber_03_Base: 3as_saber_01_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_top: Mainturret_top
			{
			};
			class MainTurret_bottom: MainTurret_bottom
			{
			};
		};
	};
	class 3as_saber_m1Recon: 3as_saber_03_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_top: MainTurret_top
			{
			};
			class MainTurret_bottom: MainTurret_bottom
			{
			};
		};
	};
	
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class AllVehicles;
	class Ship : AllVehicles
	{
		class ViewPilot;
	};
	class Ship_F : Ship
	{
		class Turrets;
	};
	class Boat_F : Ship_F
	{
		class Turrets : Turrets
		{
			class mainturret;
		};
	};
	class optre_catfish_f : Boat_F
	{
		class Turrets : Turrets
		{
			class mainturret : mainturret
			{
			};
		};

	};
	class optre_catfish_unarmed_f : optre_catfish_f
	{
		class Turrets : Turrets
		{
			class mainturret : mainturret
			{
			};
		};
	};
	class optre_catfish_mg_f : optre_catfish_f
	{
		class turrets : turrets
		{
			class mainturret : mainturret
			{

			};
		};
	};
	class 212th_APC_Wheeled_01_base_F: Wheeled_APC_F{
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class 212th_B_APC_Wheeled_01_base_F : 212th_APC_Wheeled_01_base_F{
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class 212th_B_APC_Wheeled_01_cannon_F : 212th_B_APC_Wheeled_01_base_F{
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
//Bantha Testbed
class DBA_Bantha_Testbed : 212th_B_APC_Wheeled_01_cannon_F{
	scope=2;
	scopeCurator=2;
	side=1;
	editorSubcategory = "EdSubcat_APCs";
	faction="Republic_101st";
	armor=700;
	armorStructural=8;
	displayName="Bantha Testbed";
	icon = "\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
	hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
	model = "212th\Vehicles\212th_APC\212th_apc.p3d";
	hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\bantha\bantha-ext_arma_material_101st_co.paa",
			"101st_Aux_Mod\Addons\textures\bantha\Bantha-Tire_Arma_Material_CO.paa",
			"101st_Aux_Mod\Addons\textures\bantha\Bantha-Turret_Arma_Material_CO.paa",
			"101st_Aux_Mod\Addons\textures\bantha\Bantha-Int_Arma_Material_CO.paa"
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


		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack = "RD501_JLTS_Clone_Flip_backpack";
				count = 1;
			};
		};
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '101st_Aux_Mod\Addons\Vehicles\Resupply\autocrate.sqf';";
		};
		class TransportWeapons
		{

		};	
	class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				weapons[] = {
					"DBA_25mw_P252G_AC",
					"DBA_93mw_TPV13_Rockets",
					"DBA_127mw_PVX90_ATGM",
					};
				magazines[] = {
					"DBA_25mm_PM258_KEP_x160_mag",
					"DBA_25mm_PL266_HE_x360_mag",
					"DBA_93mm_TPV13_TBR_x24_mag",
					"DBA_127mm_PVX90_ATGM_x2_mag",
					};
				memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
				minElev=-17;
				maxElev=70;
				class Turrets: Turrets
				{
					class CommanderOptics : CommanderOptics{
						weapons[] = {
						"SmokeLauncher",
						"DBA_127_C3HB_RCWS",
						"Laserdesignator_vehicle",
						};
						magazines[] = {
						"SmokeLauncherMag",
						"SmokeLauncherMag",
						"SmokeLauncherMag",
						"SmokeLauncherMag",
						"SmokeLauncherMag",
						"DBA_127_X962_x1500_mag",
						"Laserbatteries"
						};
					};
				};
			};
		};
	thrustDelay = 0.1;
    brakeIdleSpeed = 5;
    maxSpeed = 95;
    wheelCircumference = 3.805;
    waterLeakiness = 0.0;
	waterLinearDampingCoefX = 10.0;
	waterLinearDampingCoefY = 2.0;
	waterResistanceCoef = 0.0005;
	rudderForceCoef = 1.25;
	waterAngularDampingCoef = 1.0;
	canFloat = 1;
    normalSpeedForwardCoef = 0.95;
    accelAidForceYOffset = -1.5;
    antiRollbarForceCoef = 35;
    antiRollbarForceLimit = 30;
    antiRollbarSpeedMin = 15;
    antiRollbarSpeedMax = 200;
    simulation = "carx";
    dampersBumpCoef = 4.5;
    differentialType = "all_limited";
    frontRearSplit = 0.5;
    frontBias = 1.3;
    rearBias = 1.3;
    centreBias = 1.3;
    clutchStrength = 400;
    enginePower = 1230.405;
    peakTorque = 6894.15884;
    idleRpm = 700;
    redRpm = 2400;
    maxOmega=251.3274;
	minOmega=73.303;
	accelAidForceCoef = 4.0;
	accelAidForceSpd = 35.0;
    dampingRateFullThrottle = 0.08;
    dampingRateZeroThrottleClutchEngaged = 1;
    dampingRateZeroThrottleClutchDisengaged = 0.05;
    memoryPointLMissile = "Rocket_1";
    memoryPointRMissile = "Rocket_2";
    torqueCurve[] = {
		{"(0/2300)","(0/2260)"},
		{"(1000/2300)","(1625/2260)"},
		{"(1400/2300)","(2100/2260)"},
		{"(1500/2300)","(2200/2260)"},
		{"(1550/2300)","(2260/2260)"},
		{"(1600/2300)","(2200/2260)"},
		{"(2300/2300)","(1700/2260)"},
		{"(4700/2300)","(0/2260)"}
		};
    changeGearMinEffectivity[] = {0.5,0.15,0.97,0.97,0.97,0.97,0.97,0.985};
    class complexGearbox
    {
        GearboxRatios[] = {"R1",-0.54,"N",0,"D1",3.43,"D2",2.01,"D3",1.42,"D4",1,"D5",0.83,"D6",0.59};
        TransmissionRatios[] = {"High",8};
        AmphibiousRatios[] = {"R1",-10,"N",0,"D1",30};
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
    };
    switchTime = 0.1;
    latency = 0.4;
};
//AT-TE
class 3as_ATTE_Base: Tank_F{
	class Turrets{
		class MainTurretTop: NewTurret
			{
				startEngine=0;
				body="MainTurret";
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				gun="MainGun";
				proxyIndex=1;
				viewGunnerInExternal=1;
				commanding=5;
				proxytype="CPGunner";
				gunnername="Gunner";
				showgunneroptics=1;
				animationSourceBody="Mainturret";
				animationSourceGun="Maingun";
				gunBeg="Konec hlavne";
				gunEnd="Usti hlavne";
				memoryPointGun="usti hlavne";
				memoryPointGunnerOptics="gunnerview";
				weapons[]=
				{
					"3AS_ATTE_AT_Turret",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"3AS_10rnd_ATTE_AT_Mag",
					"3AS_10rnd_ATTE_AT_Mag",
					"3AS_10rnd_ATTE_AT_Mag",
					"3AS_10rnd_ATTE_AT_Mag",
					"3AS_10rnd_ATTE_AT_Mag",
					"3AS_10rnd_ATTE_AT_Mag",
					"SmokeLauncherMag"
				};
				gunnerAction="mbt1_slot2_out";
				gunnerInAction="ATAP_Commander";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				selectionFireAnim="zasleh2";
				minElev=-10;
				initElev=0;
				maxElev=45;
				maxTurn=360;
				minTurn=-360;
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-15;
				maxOutTurn=175;
				initOutTurn=0;
				forceHideGunner=1;
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				gunnerForceOptics=0;
				LODTurnedIn=1000;
				LODOpticsIn=1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.155;
						minFov=0.155;
						maxFov=0.155;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.2;
						material=-1;
						name="otocvez";
						visual="commander_turret_hit";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.30000001;
					};
					class HitGun
					{
						armor=0.1;
						material=-1;
						name="gun1_hit";
						visual="commander_gun_hit";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.5;
					};
				};
			};
			class MainTurretFront: NewTurret
			{
				startEngine=0;
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				selectionFireAnim="";
				body="mainturret2";
				gun="maingun2";
				proxyIndex=2;
				viewGunnerInExternal=1;
				commanding=1;
				proxytype="CPGunner";
				gunnername="Commander";
				animationSourceBody="mainturret2";
				animationSourceGun="maingun2";
				forceHideGunner=1;
				showgunneroptics=1;
				gunnerInAction="UTAT_Driver";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				elevationMode=0;
				gunEnd="";
				gunBeg="";
				memoryPointGun[]=
				{
					"FTL_muzzle",
					"FTR_Muzzle",
					"FBR_Muzzle",
					"FBL_Muzzle"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.56234097,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.56234097,
					1,
					30
				};
				weapons[]=
				{
					"3AS_ATAP_PD_Turret"
				};
				magazines[]=
				{
					"3AS_500Rnd_ATAP_PD_Mag",
					"3AS_500Rnd_ATAP_PD_Mag",
					"3AS_500Rnd_ATAP_PD_Mag",
					"3AS_500Rnd_ATAP_PD_Mag",
					"3AS_500Rnd_ATAP_PD_Mag",
					"3AS_500Rnd_ATAP_PD_Mag"
				};
				minElev=-10;
				maxElev=10;
				maxTurn=15;
				minTurn=-15;
				initElev=0;
				initTurn=0;
				memoryPointGunnerOptics="commanderview";
				gunnerForceOptics=0;
				isPersonTurret=0;
				LODTurnedIn=1000;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.155;
						minFov=0.155;
						maxFov=0.155;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.60000002;
						material=-1;
						name="turret2_hit";
						visual="main_turret_hit";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.40000001;
						material=-1;
						name="gun2_hit";
						visual="main_gun_hit";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.25;
					};
				};
			};
			class MainTurretBack: MainTurretFront
			{
				body="mainturret3";
				gun="maingun3";
				animationSourceBody="mainturret3";
				animationSourceGun="maingun3";
				proxyIndex=1;
				commanding=-1;
				proxytype="CPCargo";
				gunnername="Rear Gunner";
				memoryPointGun[]=
				{
					"BTL_muzzle",
					"BTR_Muzzle"
				};
				maxTurn=195;
				minTurn=165;
				initElev=0;
				initTurn=180;
				LODTurnedIn=1200;
				LODOpticsIn=1000;
				memoryPointGunnerOptics="commanderview2";
			};
	};
};
class DBA_ATTE_Base : 3as_ATTE_Base{
	enginePower=50000;
	maxOmega=500;
	maxSpeed=55;
	peakTorque=10000;
	thrustDelay=0.5;
	clutchStrength=250;
	fuelCapacity=1885;
	brakeIdleSpeed=1.78;
	latency=0.1;
	tankTurnForce=68000;
	dampingRateZeroThrottleClutchEngaged=5;
	dampingRateZeroThrottleClutchDisengaged=10;
	idleRpm=1500;
	redRpm=5000;
	displayname="AT-TE Test Bed";
	faction="Republic_101st";
	side=1;
	transportSoldier=24;
	armor=10000;
	class Turrets{
		class MainTurretTop: NewTurret
			{
				weapons[]=
				{
					"3AS_ATTE_AT_Turret",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"3AS_10rnd_ATTE_AT_Mag",
					"3AS_10rnd_ATTE_AT_Mag",
					"3AS_10rnd_ATTE_AT_Mag",
					"3AS_10rnd_ATTE_AT_Mag",
					"3AS_10rnd_ATTE_AT_Mag",
					"3AS_10rnd_ATTE_AT_Mag",
					"SmokeLauncherMag"
				};
				minElev=-10;
				initElev=0;
				maxElev=65;
				maxTurn=360;
				minTurn=-360;
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-15;
				maxOutTurn=175;
				initOutTurn=0;
				forceHideGunner=1;
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				gunnerForceOptics=0;
				LODTurnedIn=1000;
				LODOpticsIn=1;
			};
			class MainTurretFront: NewTurret
			{
				gunEnd="";
				gunBeg="";
				memoryPointGun[]=
				{
					"FTL_muzzle",
					"FTR_Muzzle",
					"FBR_Muzzle",
					"FBL_Muzzle"
				};
				weapons[]=
				{
					"3AS_ATAP_PD_Turret"
				};
				magazines[]=
				{
					"3AS_500Rnd_ATAP_PD_Mag",
					"3AS_500Rnd_ATAP_PD_Mag",
					"3AS_500Rnd_ATAP_PD_Mag",
					"3AS_500Rnd_ATAP_PD_Mag",
					"3AS_500Rnd_ATAP_PD_Mag",
					"3AS_500Rnd_ATAP_PD_Mag"
				};
				minElev=-10;
				maxElev=10;
				maxTurn=15;
				minTurn=-15;
				initElev=0;
				initTurn=0;
				memoryPointGunnerOptics="commanderview";
				gunnerForceOptics=0;
				isPersonTurret=0;
				LODTurnedIn=1000;
			};
			class MainTurretBack: MainTurretFront
			{
				body="mainturret3";
				gun="maingun3";
				animationSourceBody="mainturret3";
				animationSourceGun="maingun3";
				proxyIndex=1;
				commanding=-1;
				proxytype="CPCargo";
				gunnername="Rear Gunner";
				memoryPointGun[]=
				{
					"BTL_muzzle",
					"BTR_Muzzle"
				};
				maxTurn=195;
				minTurn=165;
				initElev=0;
				initTurn=180;
				LODTurnedIn=1200;
				LODOpticsIn=1000;
				memoryPointGunnerOptics="commanderview2";
			};
	};
};
//Sabers
	class DBA_TX130_Standard: 3as_saber_m1
	{
		displayName="TX-130 Saber";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		faction="Republic_101st";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Saber\saber_hull_co.paa", "101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Saber\saber_weapons_co.paa"};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
				weapons[]=
				{
					"DBA_Ground_AC_Generic",
					"dba_wynd_lgm",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"dba_lgm_x4_mag",
					"SmokeLauncherMag"
				};
			};
			class Mainturret_top: Mainturret_top
			{
				//Commander
				weapons[]=
				{
					"DBA_Ground_HMG_Generic",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"SmokeLauncherMag"
				};
			};
		};
	};
	class DBA_TX130_GMG: 3as_saber_m1G
	{
		displayName="TX-130 Saber GL";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		faction="Republic_101st";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Saber\saber_hull_co.paa",
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Saber\saber_weaponsgmg_co.paa"
		};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
		class Turrets: Turrets
		{
			class Mainturret_top: Mainturret_top
			{
			};
			class MainTurret_bottom: MainTurret_bottom
			{
				weapons[]=
				{
					"DBA_Ground_AC_Generic",
					"dba_wynd_lgm",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"dba_lgm_x4_mag",
					"SmokeLauncherMag"
				};
			};
		};
	};
	class DBA_TX130_Super: 3as_saber_super
	{
		displayName="TX-130 Super Saber";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		faction="Republic_101st";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Saber\saber_hull_co.paa",
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Saber\saber_weapons_co.paa"
		};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
		class Turrets: Turrets
		{
			class Mainturret_super: Mainturret_super
			{
				weapons[]=
				{
					"DBA_MBT_Cannon",
					"DBA_Ground_HMG_Generic",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_ap_x12_mag",
					"DBA_lancer_mbt_td_x12_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"SmokeLauncherMag"
				};
			};
		};
	};
	class DBA_TX130_Recon: 3as_saber_m1Recon
	{
		displayName="TX-130 Saber Recon";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		faction="Republic_101st";
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Saber\saber_hull_co.paa",
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Saber\saber_weapons_scout_co.paa"
		};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret_top: MainTurret_top
			{
			};
			class MainTurret_bottom: MainTurret_bottom
			{
				weapons[]=
				{
					"DBA_Ground_AC_Generic",
					"DBA_Ground_HMG_Generic",
					"dba_wynd_lgm",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"DBA_AC_blue_x100_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"dba_lgm_x4_mag",
					"dba_lgm_x4_mag",
					"SmokeLauncherMag"
				};
			};
		};
	};

//Warden
	class 101st_Warden_Tank: B_APC_Tracked_01_rcws_F
	{
		enginePower=2400;
		gearBox[]={-7,0,11,8,5.6999998,4.1999998};
		maxSpeed=120;
		maxOmega=500;
		peakTorque=7400;
		torqueCurve[]=
		{
			"[0.291667",
			"0.540541]",
			"[0.416667",
			"0.675676]",
			"[0.583333",
			"0.810811]",
			"[0.666667",
			"0.891892]",
			"[0.75",
			"0.972973]",
			"[0.833333",
			"1.02703]",
			"[0.916667",
			"1]",
			"[1",
			"0.945946]"
		};
		engineMOI=1;
		armor=500;
		weapons[]=
		{
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
		
		ace_refuel_fuelCargo=999999999999;
		ace_rearm_defaultSupply=999999999999;
		ace_cargo_space=400;
		ace_repair_canRepair=1;
		ace_refuel_hooks[]=
		{
			{0.38,-3.1700001,-0.69999999},
			{-0.41,-3.1700001,-0.69999999}
		};

		displayName="Overseer Support Vehicle";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		faction="Republic_101st";

		editorSubcategory = "EdSubcat_APCs";
		
		transportSoldier=8;
		LESH_canTow=1;
		LESH_AxisOffsetTower[]={0,-6,1};
		driverCanSee=31;
		gunnerCanSee=31;
		commanderCanSee=31;
		canUseScanner=1;
		incomingMissileDetectionSystem=16;
		weaponLockSystem="2+4+8";
		receiveRemoteTargets="true";
		reportRemoteTargets="true";
		reportOwnPosition="true";

		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\Vehicles\Warden\overseer_ext1_cream_green_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\Warden\overseer_ext2_cream_green_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\Warden\overseer_turret_cream_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\Warden\overseer_ext3_cream_green_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};

		class EventHandlers
		{
			init = "[_this select 0] execVM '101st_Aux_Mod\Addons\Vehicles\Resupply\autocrate.sqf';";
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"Laserdesignator_pilotCamera",
					"CMFlareLauncher",
					"DBA_Ground_HMG_Generic",
					"dba_wynd_a2a"
				};
				magazines[]=
				{
					"Laserbatteries",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_orange_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_pink_x500_mag",
					"DBA_HMG_purple_x500_mag",
					"DBA_HMG_black_x500_mag",
					"DBA_HMG_yellow_x500_mag",
					"dba_a2a_x4_mag",
					"dba_a2a_x4_mag",
					"dba_a2a_x4_mag",
					"dba_a2a_x4_mag"
				};
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
		class components: Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						maxFogSeeThrough=-1;
						nightRangeCoef=1;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
							maxFogSeeThrough=-1;
							nightRangeCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
							maxFogSeeThrough=-1;
							nightRangeCoef=1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ManSensorComponent: SensorTemplateMan
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				right=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType="MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={32000,16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				left=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType="MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={32000,16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
//Static AA // Currently doesnt work?

	class DBA_Tyrant : B_SAM_System_02_F
	{
		displayName = "OPFOR Tyrant";
		side = 0;
		faction="Republic_101st";
		scopeCurator=2;
	};
	class DBA_Overlord : B_SAM_System_01_F
	{
		displayName = "OPFOR Overlord";
		side = 0;
		faction="Republic_101st";
		scopeCurator=2;
	};

//Warrior
	class DBA_Warrior_Testbed : I_APC_tracked_03_cannon_F
	{
		ace_cargo_space = 400;
		displayName = "Warrior Test Bed";
		scope=2;
		scopeCurator=2;
		side=1;
		armor=700;
		transportSoldier=13;
		faction="Republic_101st";
		hiddenSelections[] = {"Camo1","Camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\Warrior\warrior_ext_01_101_co.paa","101st_Aux_Mod\Addons\textures\Warrior\warrior_ext_02_101_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"};
		icon = "\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_40mw_P4M_Cannon",
					"DBA_762_C95A1_CG",
					"DBA_127_C3HB_HMG",
				};
				magazines[]=
				{
					"DBA_40mm_PM225_AP_x80_mag",
					"DBA_40mm_PM225_AP_x80_mag",
					"DBA_40mm_PM225_AP_x80_mag",
					"DBA_40mm_PL31A_HESH_x320_mag",
					"DBA_40mm_PL31A_HESH_x320_mag",
					"DBA_762_D61_x2000_mag",
					"DBA_127_X962_x1500_mag",
				};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor=13;
					};
					class HitGun: HitGun
					{
						armor=13;
					};
				};
				class turrets: turrets
				{
					class commanderoptics: commanderoptics
					{
						weapons[]=
						{
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
			};
		};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '101st_Aux_Mod\Addons\Vehicles\Resupply\autocrate.sqf';";
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
	};
	class DBA_Winter_Warrior : I_APC_tracked_03_cannon_F
	{
		displayName = "RFV-103 Winter Warrior";
		scope=2;
		scopeCurator=2;
		side=1;
		armor=700;
		ace_cargo_space = 400;
		faction="Republic_101st";
		hiddenSelections[] = {"Camo1","Camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\Warrior\warrior_ext_01_co.paa","101st_Aux_Mod\Addons\textures\Warrior\warrior_ext_02_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"};
		icon = "\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_Ground_AC_Generic",
					"missiles_DAGR",
					"missiles_titan"
				};
				magazines[]=
				{
					"DBA_AC_green_x100_mag",
					"DBA_AC_green_x100_mag",
					"DBA_AC_green_x100_mag",
					"DBA_AC_green_x100_mag",
					"DBA_AC_green_x100_mag",
					"DBA_AC_green_x100_mag",
					"12Rnd_PG_missiles",
					"12Rnd_PG_missiles",
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles"
				};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor=13;
					};
					class HitGun: HitGun
					{
						armor=13;
					};
				};
				class turrets: turrets
				{
					class commanderoptics: commanderoptics
					{
						weapons[]=
						{
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
			};
		};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '101st_Aux_Mod\Addons\Vehicles\Resupply\autocrate.sqf';";
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
	};
	class DBA_Doom_Warrior : I_APC_tracked_03_cannon_F
	{
		ace_cargo_space = 400;
		displayName = "RFV-103 Warrior";
		scope=2;
		scopeCurator=2;
		side=1;
		armor=700;
		faction="Republic_101st";
		hiddenSelections[] = {"Camo1","Camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\Warrior\warrior_ext_01_101_co.paa","101st_Aux_Mod\Addons\textures\Warrior\warrior_ext_02_101_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"};
		icon = "\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_Ground_AC_Generic",
					"missiles_DAGR",
					"missiles_titan"
				};
				magazines[]=
				{
					"DBA_AC_green_x100_mag",
					"DBA_AC_green_x100_mag",
					"DBA_AC_green_x100_mag",
					"DBA_AC_green_x100_mag",
					"DBA_AC_green_x100_mag",
					"DBA_AC_green_x100_mag",
					"12Rnd_PG_missiles",
					"12Rnd_PG_missiles",
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles"
				};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor=13;
					};
					class HitGun: HitGun
					{
						armor=13;
					};
				};
				class turrets: turrets
				{
					class commanderoptics: commanderoptics
					{
						weapons[]=
						{
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
			};
		};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '101st_Aux_Mod\Addons\Vehicles\Resupply\autocrate.sqf';";
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
	};

//Fennek
	class O_T_LSV_02_unarmed_black_F;
	class DBA_LSV : O_T_LSV_02_unarmed_black_F
	{
		ace_cargo_space = 400;
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\Fennek\LSV_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		scope=2;
		scopeCurator=2;
		side=1;
		faction="Republic_101st";
		armor=700;
		displayName="LSV-808";
	};
	class DBA_Fennek : I_MRAP_03_hmg_F
	{
		ace_cargo_space = 400;
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\textures\Fennek\Fennek101st_ext_co.paa",
			"101st_Aux_Mod\Addons\textures\Fennek\Turret_co.paa"
		};
		scope=2;
		scopeCurator=2;
		side=1;
		faction="Republic_101st";
		armor=700;
		displayName="RFV-101 Fennek";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_Ground_HMG_Generic",
				};
				magazines[]=
				{
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag"
				};
			};
			class CommanderTurret : CommanderTurret
			{
				weapons[]=
				{
					"CMFlareLauncher",
					"SmokeLauncher",
					"Laserdesignator_vehicle"
				};
				magazines[]=
				{
					"300Rnd_CMFlare_Chaff_Magazine",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"Laserbatteries"
				};
			};
		};
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
	};	
	class DBA_Fennek_GL : I_MRAP_03_gmg_F
	{
		ace_cargo_space = 400;
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\textures\Fennek\Fennek101st_ext_co.paa",
			"101st_Aux_Mod\Addons\textures\Fennek\Turret_co.paa"
		};
		scope=2;
		scopeCurator=2;
		side=1;
		faction="Republic_101st";
		armor=700;
		displayName="RFV-101 Fennek GMG";
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
	};
	class DBA_Fennek_Medic : I_MRAP_03_hmg_F
	{
		ace_cargo_space = 400;
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\Fennek\fennek_Medic_CO.paa",
			"101st_Aux_Mod\Addons\textures\Fennek\Turret_co.paa"};
		scope=2;
		scopeCurator=2;
		side=1;
		faction="Republic_101st";
		armor=700;
		displayName="RFV-101 Medical Fennek";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_Ground_HMG_Generic"
				};
				magazines[]=
				{
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag"
				};
			};
			class CommanderTurret : CommanderTurret
			{
				weapons[]=
				{
					"CMFlareLauncher",
					"SmokeLauncher",
					"Laserdesignator_vehicle"
				};
				magazines[]=
				{
					"300Rnd_CMFlare_Chaff_Magazine",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"Laserbatteries"
				};
			};
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=50;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=20;
			};
			class _xx_ACE_packingBandage
			{
				name="packingBandage";
				count=20;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=5;
			};
			class _xx_ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=10;
			};
			class _xx_ACE_salineIV_250
			{
				name="ACE_salineIV_500";
				count=15;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=20;
			};
		};
	};
	
/*// Tank Destroyer
	class DBA_Rooikat: B_AFV_Wheeled_01_cannon_F //Has TD rounds, very powerful AP rounds, should 1 shot anything
	{
		author="Mutt";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="RFV-102 Rooikat";
		faction="Republic_101st";
		dlc = "101st_Aux_Mod";
		editorSubcategory = "EdSubcat_APCs";
		crew="SoldierWCrew";
		model = "\A3\Armor_F_Tank\AFV_Wheeled_01\AFV_Wheeled_01_cannon_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\101st_Aux_Mod\Addons\textures\MBT\Rooikat_ext1_Republic_101st_CO.paa",
			"\101st_Aux_Mod\Addons\textures\MBT\Rooikat_ext2_Republic_101st_CO.paa",
			"\101st_Aux_Mod\Addons\textures\MBT\Rooikat_ext3_Republic_101st_CO.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"
		};
		vehicleClass="RD501_Vehicle_Class_APC";
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons;
		class TransportMagazines;
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM 'RD501_Vehicles\_init_functions\wheel_dmg.sqf';";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_MBT_Cannon",
					"DBA_Ground_HMG_Generic"
				};
				magazines[]=
				{
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_ap_x12_mag",
					"DBA_lancer_mbt_td_x12_mag",
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_ap_x12_mag",
					"DBA_lancer_mbt_td_x12_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
			};
		};
	};*/
	
//AV7
	class DBA_AV7_Testbed : 3as_01_arty_base_F{
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-7 Test Bed";
		crew="101st_CloneTrooper_212th";
		faction="Republic_101st";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
				};
				gunBeg="MainCannon_Barrel";
				gunEnd="MainCannon_Chamber";
				gunnerAction="AV7_Driver";
				gunnerInAction="AV7_Driver";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerLeftHandAnimName="turret_control_y";
				gunnerRightHandAnimName="turret_control_y";
				memorypointsgetingunner="pos_driver";
				memorypointsgetingunnerdir="pos_driver_dir";
				weapons[]=
				{
					"DBA_210mw_VK39_Cannon",
					"DBA_210mw_VK39_Cannon_Nuke"
				};
				magazines[]=
				{
					"DBA_210mm_K17_x6_mag",
					"DBA_210mm_K17_x6_mag",
					"DBA_210mm_K17_x6_mag",
					"DBA_210mm_K17_x6_mag",
					"DBA_210mm_K17_x6_mag",
					"DBA_210mm_K17_x6_mag",
					"DBA_210mm_K18_x3_mag",
					"DBA_210mm_S19_x8_mag",
					"DBA_210mm_CK17_x4_mag",
					"DBA_210mm_UMK20_x4_mag",
					"DBA_210mm_ATN3S_TACN_x1_mag",
				};
			};
		};
	};
	
//Tanks
	class DBA_Leopard_Testbed : I_MBT_03_cannon_F
	{
		ace_cargo_space = 400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="Leopard Test Bed";
		crew="101st_CloneTrooper_212th";
		armor=950;
		armorStructural=10;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"CamoNet"
		};
		textureList[]={};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\textures\MBT\101stMBT_ext01_CO.paa",
			"101st_Aux_Mod\Addons\textures\MBT\101stMBT_ext02_CO.paa",
			"101st_Aux_Mod\Addons\textures\MBT\101st_mbt_03_rcws_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		};		
		faction="Republic_101st";
		normalSpeedForwardCoef = 0.95;
		slowSpeedForwardCoef = 0.25;
		enginePower=1677.825;
		maxOmega=273;
		minOmega=84;
		maxSpeed=78;
		peakTorque=8150;
		thrustDelay=0.2;
		clutchStrength=250;
		brakeIdleSpeed=7;
		latency=0.1;
		tankTurnForce=850000;
		idleRpm=800;
		redRpm=2600;
		engineLosses=5;
		torqueCurve[]= 
		{
			{0.424242,0.8},
			{0.545455,0.95},
			{0.606061,0.99},
			{0.636364,1},
			{0.666667,0.97},
			{0.727273,0.95},
			{0.878788,0.9},
			{1,0.875}
		};
		epeImpulseDamageCoef=0.01;
		class complexGearbox
		{
        GearboxRatios[] = {"R1",-1.15,"N",0,"D1",4.4,"D2",3,"D3",1.65,"D4",0.8};
        transmissionRatios[] = {"High",13};
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
		};
		class EventHandlers: DefaultEventhandlers
		{
		};
		class Turrets: turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_105mw_PN105M_Cannon",
					"DBA_762_C3M_CG",
				};
				magazines[]=
				{
					"DBA_105mm_P900_x4_mag",
					"DBA_105mm_P900_x4_mag",
					"DBA_105mm_P900_x4_mag",
					"DBA_105mm_P900_x4_mag",
					"DBA_105mm_P900_x4_mag",
					"DBA_105mm_P456_x4_mag",
					"DBA_105mm_P456_x4_mag",
					"DBA_105mm_P456_x4_mag",
					"DBA_105mm_P395_x4_mag",
					"DBA_105mm_P395_x4_mag",
					"DBA_105mm_P395_x4_mag",
					"DBA_105mm_P395_x4_mag",
					"DBA_105mm_S416_x8_mag",
					"DBA_105mm_S416_x8_mag",
					"DBA_762_D61_x400_mag",
					"DBA_762_D61_x400_mag",
					"DBA_762_D61_x400_mag",
					"DBA_762_D61_x400_mag",
				};
				minElev = -16;
				maxElev = 45;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGun = "usti hlavne2";
						selectionFireAnim = "zasleh2";
						weapons[]=
						{
							"DBA_792mw_DC42_MG",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle",
						};
						magazines[]=
						{
							"DBA_792_PKW_x5000_mag",
							"DBA_792_PKW_x5000_mag",
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
			};
		};
	};
	class DBA_Leopard : I_MBT_03_cannon_F //Sacrifices top Autocannon for HMG with more ammo better for extended missions w/o resupply
	{
		ace_cargo_space = 400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="RFV-104 Leopard";
		crew="101st_CloneTrooper_212th";
		armor=700;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"CamoNet"
		};
		textureList[]={};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\textures\MBT\101stMBT_ext01_CO.paa",
			"101st_Aux_Mod\Addons\textures\MBT\101stMBT_ext02_CO.paa",
			"101st_Aux_Mod\Addons\textures\MBT\101st_mbt_03_rcws_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		};		
		faction="Republic_101st";
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
		};
		class Turrets: turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_MBT_Cannon",
					"DBA_Ground_HMG_Generic"
				};
				magazines[]=
				{
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_ap_x12_mag",
					"DBA_lancer_mbt_ap_x12_mag",
					"DBA_lancer_mbt_ap_x12_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"DBA_Ground_HMG_Generic",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"DBA_HMG_green_x500_mag",
							"DBA_HMG_green_x500_mag",
							"DBA_HMG_green_x500_mag",
							"DBA_HMG_green_x500_mag",
							"DBA_HMG_green_x500_mag",
							"DBA_HMG_green_x500_mag",
							"DBA_HMG_green_x500_mag",
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
			};
		};
	};

	class DBA_Merkava_Testbed : B_MBT_01_TUSK_F{
		ace_cargo_space = 400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="Merkava Testbed MODTEAM ONLY <- Read";
		crew="101st_CloneTrooper_212th";
		armor=1100;
		armorStructural=10;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"CamoSlat"
		};
		textureList[]={};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\MBT\MBT_01_body_101st_CO.paa",
			"101st_Aux_Mod\Addons\textures\MBT\MBT_01_tow_101st_CO.paa",
			"101st_Aux_Mod\Addons\textures\MBT\MBT_01_addons_101st_CO.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};	
		faction="Republic_101st";
		normalSpeedForwardCoef = 0.95;
		slowSpeedForwardCoef = 0.25;
		engineMOI=9;
		enginePower=1118.55;
		maxOmega=251.3274;
		minOmega=73.303;
		maxSpeed=67.5;
		peakTorque=5950.56926;
		thrustDelay=0.2;
		clutchStrength=250;
		brakeIdleSpeed=7;
		latency=0.1;
		tankTurnForce=1200000;
		idleRpm=700;
		redRpm=2400;
		engineLosses=5;
		accelAidForceCoef = 4.0;
		accelAidForceSpd = 30.0;
		torqueCurve[] = {
			{0.363636,0.8},
			{0.454545,0.83},
			{0.545455,0.95},
			{0.606061,0.98},
			{0.666667,1},
			{0.727273,0.94},
			{0.848485,0.9},
			{1,0.87}
		};
		epeImpulseDamageCoef=0.01;
		class complexGearbox
		{
        GearboxRatios[] = {"R1",-0.15,"N",0,"D1",4.9,"D2",3.1,"D3",1.9,"D4",1.05};
        transmissionRatios[] = {"High",12};
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
		};
		smokeLauncherGrenadeCount = 20;
		smokeLauncherVelocity = 20;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 360;
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
		};
		class Turrets: turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_120mw_PG251_Cannon",
					"DBA_762_C110_CG"
				};
				magazines[]=
				{
					"DBA_120mm_PM53_x16_mag",
					"DBA_120mm_P225_x16_mag",
					"DBA_120mm_PM11_x18_mag",
					"DBA_120mm_Kanabo_x5_mag",
					"DBA_762_D61_x400_mag",
					"DBA_762_D61_x400_mag",
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg = "commander_gun_muzzle_pos";
						gunEnd = "commander_gun_muzzle_end";
						memoryPointGun = "commander_gun_muzzle";
						selectionFireAnim = "commander_muzzleflash";
						minElev = -20;
						maxElev = 40;
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;
						turretInfoType = "RscOptics_MBT_01_commander_RCWS";
						weapons[]=
						{
							"DBA_127_C3HB_RCWS",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle",
						};
						magazines[]=
						{
							"DBA_127_X962_x1500_mag",
							"DBA_127_X962_x1500_mag",
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries",
						};
					};
				};
			};
		};
	};
	class DBA_Armata_Testbed : O_T_MBT_04_command_F{
		ace_cargo_space = 400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="Armata Testbed";
		crew="101st_CloneTrooper_212th";
		armor=1450;
		armorStructural=15;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		textureList[]={};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\textures\MBT\MBT_04_exterior_1_101st_Gray_CO.paa",
			"101st_Aux_Mod\Addons\textures\MBT\MBT_04_exterior_2_101st_Gray_CO.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
		};		
		faction="Republic_101st";
		normalSpeedForwardCoef = 0.95;
		slowSpeedForwardCoef = 0.25;
		engineMOI=7;
		enginePower=1342.26;
		maxOmega=251.3274;
		minOmega=73.303;
		maxSpeed=45;
		peakTorque=5840.75536;
		thrustDelay=0.2;
		clutchStrength=250;
		brakeIdleSpeed=7;
		latency=0.1;
		tankTurnForce=1500000;
		idleRpm=700;
		redRpm=2400;
		engineLosses=5;
		accelAidForceCoef = 2.5;
		accelAidForceSpd = 15.0;
		torqueCurve[] = {
			{0.416667,0.863636},
			{0.5,0.890909},
			{0.583333,0.938182},
			{0.666667,0.981818},
			{0.75,1},
			{0.833333,0.963636},
			{0.916667,0.863636},
			{1,0.854545}};
		epeImpulseDamageCoef=0.01;
		class complexGearbox
    {
        GearboxRatios[] = {"R1",-1.05,"N",0,"D1",7.8,"D2",5.6,"D3",4,"D4",2.9,"D5",2.1,"D6",1.5,"D7",1.1};
        transmissionRatios[] = {"High",5.5};
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
    };
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
		};
		class Turrets: turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_152mw_M83S_Cannon",
					"DBA_VehicleLauncher",
					"DBA_762_CP46_CG"
				};
				magazines[]=
				{
					"DBA_152mm_Tanto1_x25_mag",
					"DBA_152mm_Tanto3_x35_mag",
					"DBA_152mm_Tanto5_x2_mag",
					"DBA_60mm_PLX772_x5_mag",
					"DBA_60mm_PLX772_x5_mag",
					"DBA_762_DN71_x250_mag",
					"DBA_762_DN71_x250_mag",
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg = "Usti hlavne2";
						gunEnd = "Konec hlavne2";
						memoryPointGun = "usti hlavne2";
						selectionFireAnim = "zasleh2";
						minElev = -18;
						maxElev = 70;
						weapons[]=
						{
							"DBA_20mw_GAIBO1_AC",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"DBA_20mm_PM359_x150_mag",
							"DBA_20mm_PM359_x150_mag",
							"DBA_20mm_P594_x250_mag",
							"DBA_20mm_P594_x250_mag",
							"DBA_20mm_P594_x250_mag",
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
			};
		};
	};
	class DBA_Merkava : B_MBT_01_TUSK_F //Sacrifices ammo for troop transport + slightly uparmored
	{
		ace_cargo_space = 400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="RFV-105 Merkava";
		crew="101st_CloneTrooper_212th";
		armor=750;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"CamoSlat"
		};
		textureList[]={};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\MBT\MBT_01_body_101st_CO.paa",
			"101st_Aux_Mod\Addons\textures\MBT\MBT_01_tow_101st_CO.paa",
			"101st_Aux_Mod\Addons\textures\MBT\MBT_01_addons_101st_CO.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};	
		faction="Republic_101st";
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
		};
		class Turrets: turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_MBT_Cannon",
					"DBA_Ground_HMG_Generic"
				};
				magazines[]=
				{
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_ap_x12_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"DBA_Ground_AC_Generic",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle",
						};
						magazines[]=
						{
							"DBA_AC_green_x100_mag",
							"DBA_AC_green_x100_mag",
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries",
						};
					};
				};
			};
		};
	};
	

	class O_MRAP_02_F;
	class DBA_Highgrav_trasport : O_MRAP_02_F
	{
		ace_cargo_space = 400;
		scope = 2;
		side = 1;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "101st High Grav Transport";
		crew = "101st_CloneTrooper_212th";
		armor = 400;
		hiddenSelection[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = 
		{ 
			"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
			"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
			"\A3\Data_F\Vehicles\turret_opfor_co.paa" 
		};
		faction = "Republic_101st";
		class TransportItems
		{
			class _transport_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
			class _transport_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _transport_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 6;
			};
			class _transport_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon = "RD501_launcher_rps1";
				count = 2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack = "RD501_JLTS_Clone_Flip_backpack";
				count = 1;
			};
		};
	};

	class O_T_MRAP_02_gmg_ghex_F;
	class DBA_Highgrav_transport_HE : O_T_MRAP_02_gmg_ghex_F
	{
		ace_cargo_space = 400;
		scope = 2;
		side = 1;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "101st High GMG Grav Transport";
		crew = "101st_CloneTrooper_212th";
		armor = 400;
		hiddenSelection[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = 
		{ 
			"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa" 
		};
		faction = "Republic_101st";
		class TransportItems
		{
			class _transport_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
			class _transport_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _transport_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 6;
			};
			class _transport_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon = "RD501_launcher_rps1";
				count = 2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack = "RD501_JLTS_Clone_Flip_backpack";
				count = 1;
			};
		};
		class EventHandlers : DefaultEventhandlers
		{
		};
	};

	class DBA_Highgrav_transport_HMG : O_T_MRAP_02_hmg_ghex_F
	{
		ace_cargo_space = 400;
		scope = 2;
		side = 1;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "101st High HMG Grav Transport";
		crew = "101st_CloneTrooper_212th";
		armor = 400;
		hiddenSelection[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
		};
		faction = "Republic_101st";
		class TransportItems
		{
			class _transport_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
			class _transport_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _transport_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 6;
			};
			class _transport_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon = "RD501_launcher_rps1";
				count = 2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack = "RD501_JLTS_Clone_Flip_backpack";
				count = 1;
			};
		};
		class Turrets : Turrets
		{

			class MainTurret : MainTurret
			{
				weapons[] =
				{
					"DBA_Ground_HMG_Generic"
				};
				magazines[] =
				{
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag"
				};
				magazineReloadTime = 4;
				
			};
		};
	};
	class DBA_Armata : O_T_MBT_04_command_F //Balanced, has autocannon on top, HMG Coax, MBT cannon top
	{
		ace_cargo_space = 400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="RFV-106 Armata";
		crew="101st_CloneTrooper_212th";
		armor=700;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		textureList[]={};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\textures\MBT\MBT_04_exterior_1_101st_Gray_CO.paa",
			"101st_Aux_Mod\Addons\textures\MBT\MBT_04_exterior_2_101st_Gray_CO.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
		};		
		faction="Republic_101st";
		class TransportItems
		{
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _transport_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _transport_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=6;
			};
			class _transport_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="RD501_launcher_rps1";
				count=2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack="RD501_JLTS_Clone_Flip_backpack";
				count=1;
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
		};
		class Turrets: turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_MBT_Cannon",
					"DBA_Ground_HMG_Generic"
				};
				magazines[]=
				{
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_he_x12_mag",
					"DBA_lancer_mbt_ap_x12_mag",
					"DBA_lancer_mbt_ap_x12_mag",
					"DBA_lancer_mbt_ap_x12_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"DBA_Ground_AC_Generic",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"DBA_AC_green_x100_mag",
							"DBA_AC_green_x100_mag",
							"DBA_AC_green_x100_mag",
							"DBA_AC_green_x100_mag",
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
			};
		};
	};
	class 101st_patrolcraft : optre_catfish_mg_f
	{
		ace_cargo_space = 400;
		scope = 2;
		side = 1;
		scopeCurator = 2;
		forceInGarage = 1;
		armor = 300;
		displayName = "101st Patrol Craft";
		crew = "101st_CloneTrooper_212th";
		class TransportItems
		{
			class _transport_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
			class _transport_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _transport_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 6;
			};
			class _transport_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 40;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon = "101st_disposable_launcher";
				count = 2;
			};
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _transport_gravpack
			{
				backpack = "RD501_JLTS_Clone_Flip_backpack";
				count = 1;
			};
		};
		class Turrets : Turrets
		{

			class MainTurret : MainTurret
			{
				weapons[] =
				{
					"DBA_Ground_HMG_Generic"
				};
				magazines[] =
				{
					"DBA_HMG_blue_x500_mag"
				};
				magazineReloadTime = 4;
			};
		};
	};
	//CIS Vanilla Stuff

	class LT_01_base_F;
	class LT_01_cannon_base_F : LT_01_base_F
	{
		class components;
		class turrets : turrets
		{
			class MainTurret;
		};
	};
	class I_LT_01_cannon_F : LT_01_cannon_base_F
	{
		class components;
		class turrets : turrets
		{
			class MainTurret;
		};
	};
	class Offroad_01_military_base_F;
	class Offroad_01_armed_base_F : Offroad_01_military_base_F
	{
		class Turrets
		{
			class M2_Turret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};

	class DBA_Technical : Offroad_01_armed_base_F
	{
		displayName = "Technical";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 0;
		crew = "O_DBA_CIS_B1_Crew_Droid_F";
		faction = "O_DBA_CIS_F";
		editorSubcategory = "RD501_Editor_Category_IFV";
		vehicleClass = "RD501_Vehicle_Class_IFV";
		class Turrets : Turrets
		{
			class Laser_Turret : M2_Turret
			{
				weapons[] =
				{
					"DBA_Ground_lmg_Generic",
				};
				magazines[] =
				{
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag"
				};
				class ViewOptics : ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class ViewGunner : ViewGunner
				{
				};
			};
		};
	};
	class APC_Wheeled_02_base_F : Wheeled_APC_F
	{
		class Turrets
		{
			class MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class APC_Wheeled_02_base_v2_F : APC_Wheeled_02_base_F
	{
		class Turrets :Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class O_APC_Wheeled_02_rcws_v2_F : APC_Wheeled_02_base_v2_F
	{
		class Turrets :Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class DBA_Marid : O_APC_Wheeled_02_rcws_v2_F
	{
		displayName = "Marid IFV";
		textureList[] = {};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Testing\marid_co.paa",
			"",
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Testing\maridturret_co.paa",
			"",
			"",
		};
		forceInGarage = 1;
		crew = "O_DBA_CIS_B1_Crew_Droid_F";
		faction = "O_DBA_CIS_F";
		editorSubcategory = "RD501_Editor_Category_IFV";
		vehicleClass = "RD501_Vehicle_Class_IFV";
		class Turrets :Turrets
		{
			class MainTurret :MainTurret
			{
				gunnerForceOptics = 0;
				gunnerAction = "Commander_APC_Wheeled_02_rcws_F_out";
				gunnerInAction = "Commander_APC_Wheeled_02_rcws_F_in";
				body = "mainTurret";
				gun = "mainGun";
				weapons[] =
				{
					"GMG_40mm",
					"DBA_Ground_LMG_Generic",
					"SmokeLauncher"
				};
				magazines[] =
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"DBA_LMG_orange_x500_mag",
					"DBA_LMG_orange_x500_mag",
					"DBA_LMG_orange_x500_mag",
					"DBA_LMG_orange_x500_mag",
					"SmokeLauncherMag"
				};
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				soundServo[] =
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[] =
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				gunnerName = "$STR_POSITION_COMMANDER";
				commanding = 1;
				primaryGunner = 1;
				primaryObserver = 0;
				LODOpticsIn = 0;
				viewGunnerInExternal = 1;
				forceHideGunner = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				startEngine = 0;
				usePip = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000 };
				discreteDistanceInitIndex = 2;
				gunnerOutOpticsModel = "";
				gunnerOpticsEffect[] = {};
				stabilizedInAxes = 3;
				animationSourceStickX = "turret_control_x";
				animationSourceStickY = "turret_control_y";
				gunnerRightHandAnimName = "turret_control";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "commanderview";
				selectionFireAnim = "zasleh2";
				turretInfoType = "RscOptics_crows";
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				minElev = -15;
				maxElev = 30;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				class HitPoints
				{
					class HitTurret
					{
						armor = -250;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "otocvez";
						passThrough = 0;
						minimalHit = 0.029999999;
						explosionShielding = 0.40000001;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun
					{
						armor = -250;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "otochlaven";
						passThrough = 0;
						minimalHit = 0.029999999;
						explosionShielding = 0.2;
						radius = 0.2;
						isGun = 1;
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.31;
					minFov = 0.034000002;
					maxFov = 0.31;
					visionMode[] =
					{
						"Normal",
						"NVG",
						"TI"
					};
				};
				viewGunnerShadowAmb = 0.5;
				viewGunnerShadowDiff = 0.050000001;
			};
			class CommanderOptics;
		};
	};

	class DBA_Skorpion: I_LT_01_cannon_F
	{
		displayName="Skorpion Recon Tank";
		textureList[]={};
		forceInGarage=1;
		side=0;
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		faction="O_DBA_CIS_F";
		editorSubcategory="RD501_Editor_Category_IFV";
		vehicleClass="RD501_Vehicle_Class_IFV";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Testing\skorpionmain_co.paa",
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Testing\skorpionturret_co.paa",
			"",
			"",
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"SmokeLauncher",
					"DBA_Ground_HMG_Generic"
				};
				magazines[]=
				{
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag"
				};
			};
		};
	};

	class APC_Tracked_02_base_F:Tank_F 
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};
	class O_APC_Tracked_02_base_F:APC_Tracked_02_base_F 
	{
		class Components;
	};
	class O_APC_Tracked_02_cannon_F:O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class DBA_Viper : O_APC_Tracked_02_cannon_F
	{
		displayName="Viper Heavy APC";
		textureList[]={};
		forceInGarage=1;
		side=0;
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		faction="O_DBA_CIS_F";
		editorSubcategory="RD501_Editor_Category_IFV";
		vehicleClass="RD501_Vehicle_Class_IFV";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Testing\vipermain_co.paa",
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Testing\viper2nd_co.paa",
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Testing\viperturret_co.paa",
			"",
			"",
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_Ground_AC_Generic",
					"missiles_titan"
				};
				magazines[]=
				{
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"2Rnd_GAT_missiles_O",
					"2Rnd_GAT_missiles_O"
				};
			};
		};
	};
	class APC_Tracked_02_base_F:Tank_F 
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};
	class O_APC_Tracked_02_base_F:APC_Tracked_02_base_F 
	{
		class Components;
	};
	class O_APC_Tracked_02_cannon_F:O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class DBA_Viper : O_APC_Tracked_02_cannon_F
	{
		displayName="Viper Heavy APC";
		textureList[]={};
		forceInGarage=1;
		side=0;
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		faction="O_DBA_CIS_F";
		editorSubcategory="RD501_Editor_Category_IFV";
		vehicleClass="RD501_Vehicle_Class_IFV";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Testing\vipermain_co.paa",
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Testing\viper2nd_co.paa",
			"101st_Aux_Mod\Addons\DBA_GroundVehicles\data\Testing\viperturret_co.paa",
			"",
			"",
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_Ground_HMG_Generic",
					"DBA_Ground_AC_Generic",
					"missiles_titan"
				};
				magazines[]=
				{
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"2Rnd_GAT_missiles_O",
					"2Rnd_GAT_missiles_O"
				};
			};
		};
	};
};
};
