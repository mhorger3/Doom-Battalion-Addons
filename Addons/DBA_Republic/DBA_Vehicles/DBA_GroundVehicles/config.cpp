class CfgPatches
{
	class DBA_Ground_Vehicles
	{
		author="Trip";
		name="Doom Battalion Ground Vehicles";
		units[]=
		{
			"DBA_TX130_Standard",
			"DBA_TX130_GMG",
			"DBA_TX130_Super",
			"DBA_TX130_Recon",
			"101st_Warden_Tank",
			"DBA_Warrior_Testbed",
			"DBA_Winter_Warrior",
			"DBA_Doom_Warrior",
			"DBA_Fennek",
			"DBA_Fennek_GL",
			"DBA_Fennek_Testbed",
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
			"DBA_Command_Mobility_Vehicle",
			"DBA_Utility_Vehicle",
			"DBA_LSV",
			"DBA_ATTE_Base",
			"DBA_Borodino_TD",
			"DBA_Iskra_AG",
			"101st_patrolcraft",
			"DBA_Highgrav_transport_HMG",
			"DBA_Highgrav_transport_HE"
		};
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"A3_Armor_F_EPB",
			"A3_Armor_F_EPC",
			"A3_Armor_F_Exp",
			"A3_Armor_F",
			"A3_Armor_F_Gamma",
			"3AS_SaberTank"
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
class Optics_Armored;
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
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
	class B_SAM_System_02_F;
	class B_SAM_System_01_F;
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
	class APC_Tracked_03_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class I_APC_tracked_03_base_F: APC_Tracked_03_base_F
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
	class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F
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
		class turrets: Turrets
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
		class turrets: Turrets
		{
			class MainTurret;
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F
	{
		class turrets: turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;
			};
		};
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		class turrets: turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;
			};
		};
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
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
	class MBT_04_base_F: Tank_F
	{
		class turrets: Turrets
		{
			class MainTurret;
		};
	};
	class MBT_04_command_base_F: MBT_04_base_F
	{
		class turrets: turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;
			};
		};
	};
	class O_T_MBT_04_command_F: MBT_04_command_base_F
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
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets: turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: turrets
				{
				};
			};
		};
	};
	class 3as_01_arty_base_F: MBT_01_arty_base_F
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
	class MRAP_02_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class CommanderTurret;
		};
	};
	class MRAP_02_hmg_base_F: MRAP_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderTurret: CommanderTurret
			{
			};
		};
	};
	class O_T_MRAP_02_hmg_ghex_F: MRAP_02_hmg_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderTurret: CommanderTurret
			{
			};
		};
	};
	class MRAP_03_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class CommanderTurret;
		};
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderTurret: CommanderTurret
			{
			};
		};
	};
	class I_MRAP_03_hmg_F: MRAP_03_hmg_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderTurret: CommanderTurret
			{
			};
		};
	};
	class I_MRAP_03_gmg_F;
	class Wheeled_APC_F: Car_F
	{
		class turrets: Turrets
		{
			class MainTurret;
		};
	};
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
	{
		class turrets: turrets
		{
			class MainTurret;
		};
	};
	class B_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F
	{
		class Turrets: turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
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
	class 3as_saber_02_Base: 3as_saber_01_Base
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
	class Ship: AllVehicles
	{
		class ViewPilot;
	};
	class Ship_F: Ship
	{
		class Turrets;
	};
	class Boat_F: Ship_F
	{
		class Turrets: Turrets
		{
			class mainturret;
		};
	};
	class optre_catfish_f: Boat_F
	{
		class Turrets: Turrets
		{
			class mainturret: mainturret
			{
			};
		};
	};
	class optre_catfish_unarmed_f: optre_catfish_f
	{
		class Turrets: Turrets
		{
			class mainturret: mainturret
			{
			};
		};
	};
	class optre_catfish_mg_f: optre_catfish_f
	{
		class turrets: Turrets
		{
			class mainturret: mainturret
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
	class C_Offroad_02_unarmed_F;
	class DBA_Utility_Vehicle : C_Offroad_02_unarmed_F
	{
		author = "Seatie";
		scope = 2;
		scopeCurator = 2;
		side=1;
		displayName="Platoon Utility Vehicle";
		faction="B_DBA_Republic_F";
		thrustDelay = 0.1;
		brakeIdleSpeed = 1.78;
		maxSpeed = 85;
		fuelCapacity = 16;
		waterLeakiness = 10.0;
		waterLinearDampingCoefX = 10.0;
		waterLinearDampingCoefY = 2.0;
		waterResistanceCoef = 0.0005;
		rudderForceCoef = 0.65;
		waterAngularDampingCoef = 1.0;
		canFloat = 0;
		transportSoldier=8;
		slowSpeedForwardCoef = 0.55;
		normalSpeedForwardCoef = 1.00;
		wheelCircumference = 2.633;
		antiRollbarForceCoef = 45;
		antiRollbarForceLimit = 100;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 300;
		idleRpm = 100;
		redRpm = 2100;
		maxCompression = 0.15;
		maxDroop = 0.15;
		accelAidForceCoef = 1.2;
		accelAidForceYOffset = -1;
		accelAidForceSpd = 55;
		enginePower = 234.8955;
		minOmega = 20.943951;
		maxOmega = 219.9114855;
		peakTorque = 3200;
		crewCrashProtection = 0.000;
		epeImpulseDamageCoef= 0.0;
		class complexGearbox
		{
        GearboxRatios[] = {"R1",-0.25,"N",0,"D1",3.588,"D2",2.186,"D3",1.405,"D4",1,"D5",0.65};
        TransmissionRatios[] = {"High",7};
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
        gearUpMaxCoef = 0.95;
        gearDownMaxCoef = 0.85;
        gearUpMinCoef = 0.65;
        gearDownMinCoef = 0.55;
        transmissionDelay = 1;
		};
		switchTime = 0.1;
		latency = 0.5;
		crew = "B_DBA_P2CloneSeatie_F";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
		weapons[] =
		{
			"worthorn",
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class TextureSources
		{
			class Command_Mobility_Vehicle
			{
				displayName = "Command Mobility Vehicle";
				author = "Seatie";
				textures[] = 
				{
				"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\CMV\Command_Mobility_Vehicle.paa",
				"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\CMV\Command_Mobility_Vehicle.paa",
				"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
				"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
		};
		textureList[]={"Command_Mobility_Vehicle",1};
		hiddenSelectionsTextures[]= 
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\CMV\Command_Mobility_Vehicle.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\CMV\Command_Mobility_Vehicle.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
		};
		class PlateInfos
		{
			name="spz";
			color[]={0,0,0,1};
			plateFont = "RobotoCondensedLight";
			//plateFormat = "Lamby's Toes ,Daddy Blind ,ButterBeno ,Hammer had fun ,Dagger had fun ,Biggus Dickus ,Thiccums ,Hoggers,DA DA DA,Wolfe,Corruption dad,Conservative,Asshole,Hoo haw";
			plateFormat = "Lamby's Toes";
			plateLetters="ABCDEFHIKLMOPRSTVXYZ";
		};
	};
	class DBA_Command_Mobility_Vehicle: C_Offroad_02_unarmed_F
	{
		author = "Seatie";
		scope = 2;
		scopeCurator = 2;
		side=1;
		displayName="Bommand Mobility Vehicle";
		faction="B_DBA_Republic_F";
		thrustDelay = 0.1;
		brakeIdleSpeed = 1.78;
		maxSpeed = 195;
		fuelCapacity = 16;
		waterLeakiness = 0.0;
		waterLinearDampingCoefX = 10.0;
		waterLinearDampingCoefY = 2.0;
		waterResistanceCoef = 0.0005;
		rudderForceCoef = 0.65;
		waterAngularDampingCoef = 1.0;
		canFloat = 1;
		maxCompression = 0.15;
		maxDroop = 0.15;
		transportSoldier=25;
		slowSpeedForwardCoef = 0.55;
		normalSpeedForwardCoef = 0.95;
		wheelCircumference = 2.633;
		antiRollbarForceCoef = 45;
		antiRollbarForceLimit = 100;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 300;
		idleRpm = 500;
		redRpm = 8000;
		accelAidForceCoef = 6.5;
		accelAidForceYOffset = -1;
		accelAidForceSpd = 195;
		enginePower = 1500;
		minOmega = 52.3598775;
		maxOmega = 837.75804;
		peakTorque = 1790.493112;
		crewCrashProtection = 0.000;
		epeImpulseDamageCoef= 0.0;
		class complexGearbox
		{
        GearboxRatios[] = {"R1",-0.25,"N",0,"D1",3.588,"D2",2.186,"D3",1.405,"D4",1,"D5",0.65};
		AmphibiousRatios[] = {"R1",-0.25,"N",0,"D1",0.65};
        TransmissionRatios[] = {"High",7};
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
        gearUpMaxCoef = 0.95;
        gearDownMaxCoef = 0.85;
        gearUpMinCoef = 0.65;
        gearDownMinCoef = 0.55;
        transmissionDelay = 1;
		};
		switchTime = 0.1;
		latency = 0.5;
		crew = "B_DBA_P2CloneSeatie_F";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
		weapons[] =
		{
			"worthorn",
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class TextureSources
		{
			class Bommand_Mobility_Vehicle
			{
				displayName = "Bommand Mobility Vehicle";
				author = "Seatie";
				textures[] = 
				{
				"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\CMV\BMV_CO.paa",
				"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\CMV\BMV_CO.paa",
				"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
				"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
			class Command_Mobility_Vehicle
			{
				displayName = "Command Mobility Vehicle";
				author = "Seatie";
				textures[] = 
				{
				"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\CMV\Command_Mobility_Vehicle.paa",
				"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\CMV\Command_Mobility_Vehicle.paa",
				"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
				"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
		};
		textureList[]=
		{
			"Bommand_Mobility_Vehicle",1,
			"Command_Mobility_Vehicle", 0
		};
		hiddenSelectionsTextures[]= 
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\CMV\Command_Mobility_Vehicle.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\CMV\Command_Mobility_Vehicle.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
		};
		class PlateInfos
		{
			name="spz";
			color[]={0,0,0,1};
			plateFont = "RobotoCondensedLight";
			//plateFormat = "Lamby's Toes ,Daddy Blind ,ButterBeno ,Hammer had fun ,Dagger had fun ,Biggus Dickus ,Thiccums ,Hoggers,DA DA DA,Wolfe,Corruption dad,Conservative,Asshole,Hoo haw";
			plateFormat = "Lamby's Toes";
			plateLetters="ABCDEFHIKLMOPRSTVXYZ";
		};
	};
	//Borodino TD
	class MBT_02_base_F : Tank_F{
		class turrets: Turrets
		{
			class MainTurret;
		};
	};
	class MBT_02_arty_base_F : MBT_02_base_F{
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
	class DBA_Borodino_TD : MBT_02_arty_base_F{
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="Borodino Tank Destroyer";
		editorSubcategory="EdSubcat_Tanks";
		crew="";
		faction="B_DBA_Republic_F";
		armor=1250;
		armorStructural=8;
		damageResistance=0.0038900001;
		cost=2500000;
		crewVulnerable=0;
		crewExplosionProtection=0.0;
		artilleryScanner = 0;
		normalSpeedForwardCoef=1.0;
		slowSpeedForwardCoef=0.55;
		enginePower=703.657434;
		maxOmega=366.5;
		minOmega=62.83;
		maxSpeed=40;
		peakTorque=1921;
		thrustDelay=0.2;
		clutchStrength=250;
		brakeIdleSpeed=7;
		latency=0.1;
		tankTurnForce=800000;
		idleRpm=600;
		redRpm=3500;
		epeImpulseDamageCoef=0.000;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-0.54000002,
				"N",
				0,
				"D1",
				3.4300001,
				"D2",
				2.01,
				"D3",
				1.42,
				"D4",
				1,
				"D5",
				0.82999998,
				"D6",
				0.58999997
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"DBA_25mw_P25S_Cannon",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"DBA_25mm_PL25S_x300_mag",
							"SmokeLauncherMag"
						};
					};
				};
				animationSourceHatch="hatchCommander";
				gunnerAction="Gunner_MBT_02_arty_F_out";
				gunnerInAction="Gunner_MBT_02_arty_F_in";
				selectionFireAnim="";
				gunBeg="Usti hlavne3";
				gunEnd="Konec hlavne3";
				weapons[]=
				{
					"DBA_170mw_PK72_Cannon"
				};
				magazines[]=
				{
					"DBA_170mm_K46_x10_mag",
					"DBA_170mm_KN46_x10_mag",
					"DBA_170mm_K46H_x10_mag",
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.15848932,
					0.85,
					50
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					0.85,
					50
				};
				minElev=-8;
				maxElev=50;
				initElev=10;
				minCamElev=-8;
				maxCamElev=50;
				elevationMode=0;
				maxHorizontalRotSpeed=0.55999997;
				maxVerticalRotSpeed=0.5299999;
				stabilizedInAxes = 3;
				memoryPointGunnerOptics="gunnerview";
				cameraDir="look";
				class OpticsIn: Optics_Gunner_MBT_02
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="RscOptics_MBT_02_gunner";
				gunnerForceOptics=0;
				forceHideGunner=0;
				commanding=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
			};
		};
	};
	class DBA_Iskra_AG : MBT_02_arty_base_F{
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="Iskra Assault Gun";
		editorSubcategory="EdSubcat_Tanks";
		crew="";
		faction="B_DBA_Republic_F";
		armor=1500;
		armorStructural=11;
		damageResistance=0.0038900001;
		cost=2500000;
		crewVulnerable=0;
		crewExplosionProtection=0.0;
		artilleryScanner = 0;
		normalSpeedForwardCoef=1.0;
		slowSpeedForwardCoef=0.55;
		enginePower=703.657434;
		maxOmega=366.5;
		minOmega=62.83;
		maxSpeed=40;
		peakTorque=1921;
		thrustDelay=0.2;
		clutchStrength=250;
		brakeIdleSpeed=7;
		latency=0.1;
		tankTurnForce=800000;
		idleRpm=600;
		redRpm=3500;
		epeImpulseDamageCoef=0.000;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-0.54000002,
				"N",
				0,
				"D1",
				3.4300001,
				"D2",
				2.01,
				"D3",
				1.42,
				"D4",
				1,
				"D5",
				0.82999998,
				"D6",
				0.58999997
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"DBA_25mw_P25S_Cannon",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"DBA_25mm_PL25S_x300_mag",
							"SmokeLauncherMag"
						};
					};
				};
				animationSourceHatch="hatchCommander";
				gunnerAction="Gunner_MBT_02_arty_F_out";
				gunnerInAction="Gunner_MBT_02_arty_F_in";
				selectionFireAnim="";
				gunBeg="Usti hlavne3";
				gunEnd="Konec hlavne3";
				weapons[]=
				{
					"DBA_150mw_PG33H_Cannon"
				};
				magazines[]=
				{
					"DBA_150mm_UG33_x15_mag",
					"DBA_150mm_UG39_x10_mag",
					"DBA_150mm_UG42A_x10_mag",
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.15848932,
					0.85,
					50
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					0.85,
					50
				};
				minElev=-8;
				maxElev=80;
				initElev=10;
				minCamElev=-8;
				maxCamElev=50;
				elevationMode=0;
				maxHorizontalRotSpeed=0.3333333333;
				maxVerticalRotSpeed=0.2222222222;
				stabilizedInAxes = 3;
				memoryPointGunnerOptics="gunnerview";
				cameraDir="look";
				class OpticsIn: Optics_Gunner_MBT_02
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="RscOptics_MBT_02_gunner";
				gunnerForceOptics=0;
				forceHideGunner=0;
				commanding=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
			};
		};
	};
	class 3as_ATTE_Base: Tank_F
	{
		class Turrets
		{
			class MainTurretTop: NewTurret
			{
			};
			class MainTurretFront: NewTurret
			{
			};
			class MainTurretBack: MainTurretFront
			{
			};
		};
	};
	class DBA_ATTE_Base: 3as_ATTE_Base
	{
		enginePower=50000;
		maxOmega=200;
		minOmega=50;
		maxSpeed=30;
		peakTorque=4000;
		thrustDelay=0.5;
		clutchStrength=250;
		fuelCapacity=1885;
		brakeIdleSpeed=1.78;
		latency=0.1;
		tankTurnForce=650000;
		dampingRateZeroThrottleClutchEngaged=5;
		dampingRateZeroThrottleClutchDisengaged=10;
		idleRpm=700;
		redRpm=2400;
		displayname="AT-TE Test Bed";
		faction="B_DBA_Republic_F";
		side=1;
		transportSoldier=24;
		armor=10000;
		armorStructural=15;
		class Turrets
		{
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
					"DBA_184mw_LP4M5_Cannon",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"DBA_184mm_K1_AP_x20_mag",
					"DBA_184mm_B1_BESH_x35_mag",
					"DBA_184mm_PL1_HE_x20_mag",
					"SmokeLauncherMag"
				};
				gunnerAction="mbt1_slot2_out";
				gunnerInAction="ATAP_Commander";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000};
				discreteDistanceInitIndex=2;
				selectionFireAnim="zasleh2";
				minElev=-13;
				initElev=0;
				maxElev=50;
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
				ace_fcs_Enabled=0;
				ace_fcs_MinDistance=200;
				ace_fcs_MaxDistance=5500;
				ace_fcs_DistanceInterval=5;
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
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_n_F.p3d";
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
					"DBA_60mw_PG60H_Cannon"
				};
				magazines[]=
				{
					"DBA_60mm_P300_HEAT_x120_mag",
					"DBA_60mm_P300_HEAT_x120_mag"
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
				ace_fcs_Enabled=0;
				ace_fcs_MinDistance=200;
				ace_fcs_MaxDistance=5500;
				ace_fcs_DistanceInterval=5;
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
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_n_F.p3d";
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
	class DBA_TX130_Standard: 3as_saber_m1
	{
		displayName="TX-130 Saber";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		faction="B_DBA_Republic_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Saber\saber_hull_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Saber\saber_weapons_co.paa"
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
		faction="B_DBA_Republic_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Saber\saber_hull_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Saber\saber_weaponsgmg_co.paa"
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
		faction="B_DBA_Republic_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Saber\saber_hull_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Saber\saber_weapons_co.paa"
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
		faction="B_DBA_Republic_F";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Saber\saber_hull_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Saber\saber_weapons_scout_co.paa"
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
		faction="B_DBA_Republic_F";
		editorSubcategory="EdSubcat_APCs";
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warden\overseer_ext1_cream_green_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warden\overseer_ext2_cream_green_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warden\overseer_turret_cream_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warden\overseer_ext3_cream_green_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		class EventHandlers
		{
			init="[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_General\DBA_Impulse\autocrate.sqf';";
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
	class DBA_Tyrant: B_SAM_System_02_F
	{
		displayName="OPFOR Tyrant";
		side=0;
		faction="B_DBA_Republic_F";
		scopeCurator=2;
	};
	class DBA_Overlord: B_SAM_System_01_F
	{
		displayName="OPFOR Overlord";
		side=0;
		faction="B_DBA_Republic_F";
		scopeCurator=2;
	};
	class DBA_Warrior_Testbed: I_APC_tracked_03_cannon_F
	{
		ace_cargo_space=400;
		displayName="Warrior Test Bed";
		scope=2;
		forceInGarage=1;
		scopeCurator=2;
		side=1;
		armor=1100;
		armorStructural=16;
		transportSoldier=13;
		faction="B_DBA_Republic_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warrior\warrior_ext_01_101_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warrior\warrior_ext_02_101_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		icon="\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_40mw_P4M_Cannon",
					"DBA_762_C95A1_CG",
					"DBA_127_C3HB_HMG"
				};
				magazines[]=
				{
					"DBA_40mm_PM225_AP_x80_mag",
					"DBA_40mm_PM225_AP_x80_mag",
					"DBA_40mm_PM225_AP_x80_mag",
					"DBA_40mm_PL31A_HESH_x320_mag",
					"DBA_40mm_PL31A_HESH_x320_mag",
					"DBA_762_D61_x2000_mag",
					"DBA_127_X962_x1500_mag"
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
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_General\DBA_Impulse\autocrate.sqf';";
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
	class DBA_Winter_Warrior: I_APC_tracked_03_cannon_F
	{
		displayName="RFV-103 Winter Warrior";
		scope=2;
		scopeCurator=2;
		side=1;
		forceInGarage=1;
		armor=700;
		ace_cargo_space=400;
		faction="B_DBA_Republic_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warrior\warrior_ext_01_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warrior\warrior_ext_02_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		icon="\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
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
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_General\DBA_Impulse\autocrate.sqf';";
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
	class DBA_Doom_Warrior: I_APC_tracked_03_cannon_F
	{
		ace_cargo_space=400;
		displayName="RFV-103 Warrior";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		side=1;
		armor=700;
		faction="B_DBA_Republic_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warrior\warrior_ext_01_101_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warrior\warrior_ext_02_101_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		icon="\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
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
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '101st_Aux_Mod\Addons\DBA_General\DBA_Impulse\autocrate.sqf';";
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
	class O_T_LSV_02_unarmed_black_F;
	class DBA_LSV: O_T_LSV_02_unarmed_black_F
	{
		ace_cargo_space=400;
		forceInGarage=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\LSV_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
		};
		scope=2;
		scopeCurator=2;
		side=1;
		faction="B_DBA_Republic_F";
		armor=700;
		displayName="LSV-808";
	};
	class DBA_Fennek: I_MRAP_03_hmg_F
	{
		ace_cargo_space=400;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_Turret_CO.paa"
		};
		scope=2;
		scopeCurator=2;
		side=1;
		forceInGarage=1;
		faction="B_DBA_Republic_F";
		armor=700;
		crew="B_DBA_P2CloneTrooper_F";
		displayName="RFV-101 Fennek";
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
			class CommanderTurret: CommanderTurret
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
		class TextureSources
		{
			class DBA_Fennek_Green
			{
				displayName = "Green";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Green_co.paa",
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Green_Turret_CO.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
			class DBA_Fennek_Red
			{
				displayName = "Red";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_co.paa",
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_Turret_CO.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
		};
	};
	class DBA_Fennek_GL: I_MRAP_03_gmg_F
	{
		ace_cargo_space=400;
		forceInGarage=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_Turret_CO.paa"
		};
		scope=2;
		scopeCurator=2;
		side=1;
		faction="B_DBA_Republic_F";
		armor=700;
		crew="B_DBA_P2CloneTrooper_F";
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
		class TextureSources
		{
			class DBA_Fennek_Green
			{
				displayName = "Green";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Green_co.paa",
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Green_Turret_CO.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
			class DBA_Fennek_Red
			{
				displayName = "Red";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_co.paa",
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_Turret_CO.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
		};
	};
	class DBA_Fennek_Testbed : I_MRAP_03_hmg_F{
		ace_cargo_space = 400;
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_Turret_CO.paa"
		};
		scope=2;
		scopeCurator=2;
		side=1;
		forceInGarage=1;
		faction="B_DBA_Republic_F";
		armor=500;
		crew="B_DBA_P2CloneTrooper_F";
		displayName="Fennek CAV (Testbed)";
		thrustDelay = 0.1;
		dampingRateFullThrottle = 0.3;
		dampingRateZeroThrottleClutchEngaged = 1.75;
		dampingRateZeroThrottleClutchDisengaged = 0.25;
		brakeIdleSpeed = 0.5;
		maxBrakeTorque = 1500;
		maxHandBrakeTorque = 3000;
		maxSpeed = 110;
		accelAidForceCoef = 3.25;
		accelAidForceYOffset = -1.5;
		accelAidForceSpd = 65;
		slowSpeedForwardCoef = 0.55;
		normalSpeedForwardCoef = 0.95;
		enginePower = 750;
		peakTorque = 2106.462485;
		minOmega = 10.4719755;
		maxOmega = 356.047167;
		idleRpm = 100;
		redRpm = 3400;
		engineLosses = 0.1;
		transmissionLosses = 0.1;
		antiRollbarForceCoef = 30;
		antiRollbarForceLimit = 80;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 300;
		clutchStrength = 225;
		crewCrashProtection = 0.01;
		epeImpulseDamageCoef= 0.1;
		terrainCoef = 0.15;
		turnCoef = 7.0;
		class complexGearbox
		{
        GearboxRatios[] = {"R1",-0.75,"N",0,"D1",4.3,"D2",2.3,"D3",1.5,"D4",1,"D5",0.73};
        TransmissionRatios[] = {"High",6.759};
        AmphibiousRatios[] = {"R1",-30,"N",0,"D1",50};
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_25mw_P25S_Cannon",
				};
				magazines[]=
				{
					"DBA_25mm_PL25S_x300_mag",
				};
				minElev = -8;
				maxElev = 65;
				stabilizedInAxes = 3;
				maxHorizontalRotSpeed=1.244444444;
				maxVerticalRotSpeed=1.5;
			};
			class CommanderTurret: CommanderTurret
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
			class _transport_ipm5x
			{
				weapon="DBA_IPM5x";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _transport_ik3
			{
				magazine="DBA_IK3_x1_mag";
				count=2;
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
		class TextureSources
		{
			class DBA_Fennek_Green
			{
				displayName = "Green";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Green_co.paa",
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Green_Turret_CO.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
			class DBA_Fennek_Red
			{
				displayName = "Red";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_co.paa",
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_Turret_CO.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
		};
	};
	class I_MRAP_03_F;
	class DBA_Fennek_Medic: I_MRAP_03_F
	{
		ace_cargo_space=400;
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\fennek_Red_Medic_CO.paa"
		};
		scope=2;
		scopeCurator=2;
		side=1;
		forceInGarage=1;
		faction="B_DBA_Republic_F";
		armor=700;
		crew="B_DBA_P2CloneTrooper_F";
		displayName="RFV-101 Medical Fennek";
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
		class TextureSources
		{
			class DBA_Fennek_Green
			{
				displayName = "Green";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Green_Medic_co.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
			class DBA_Fennek_Red
			{
				displayName = "Red";
				author = "Seatie";
				textures[] = 
				{
					"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Fennek\Fennek_Red_Medic_co.paa"
				};
				factions[] = {"B_DBA_Republic_F"};
			};
		};
	};
	class DBA_AV7_Testbed: 3as_01_arty_base_F
	{
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-7 Test Bed";
		crew="101st_CloneTrooper_212th";
		faction="B_DBA_Republic_F";
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
					"DBA_210mw_VK39_Cannon"
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
					"DBA_210mm_ATN3S_TACN_x1_mag"
				};
			};
		};
	};
	class DBA_Leopard_Testbed: I_MBT_03_cannon_F
	{
		ace_cargo_space=400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="Leopard Cavalry Tank";
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
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\101stMBT_ext01_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\101stMBT_ext02_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\101st_mbt_03_rcws_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		};
		faction="B_DBA_Republic_F";
		accelAidForceCoef = 1.35;
		accelAidForceYOffset = -1;
		accelAidForceSpd = 65;
		normalSpeedForwardCoef=0.99999999;
		slowSpeedForwardCoef=0.25;
		enginePower=1677.825;
		maxOmega=273;
		minOmega=84;
		maxSpeed=90;
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
			{0.42424199,0.80000001},
			{0.54545498,0.94999999},
			{0.60606098,0.99000001},
			{0.63636398,1},
			{0.66666698,0.97000003},
			{0.72727299,0.94999999},
			{0.87878799,0.89999998},
			{1,0.875}
		};
		epeImpulseDamageCoef=0.0099999998;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-0.55,
				"N",
				0,
				"D1",
				4.4000001,
				"D2",
				3,
				"D3",
				1.65,
				"D4",
				0.80000001
			};
			transmissionRatios[]=
			{
				"High",
				13
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
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
					"DBA_762_C3M_CG"
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
					"DBA_762_D61_x400_mag"
				};
				minElev=-20;
				maxElev=45;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGun="usti hlavne2";
						selectionFireAnim="zasleh2";
						weapons[]=
						{
							"DBA_792mw_DC42_MG",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
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
	class DBA_Leopard: I_MBT_03_cannon_F
	{
		ace_cargo_space=400;
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
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\101stMBT_ext01_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\101stMBT_ext02_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\101st_mbt_03_rcws_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		};
		faction="B_DBA_Republic_F";
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
	class DBA_Merkava_Testbed: B_MBT_01_TUSK_F
	{
		ace_cargo_space=400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="Merkava Infantry Tank";
		crew="101st_CloneTrooper_212th";
		armor=1300;
		armorStructural=12;
		transportSoldier=13;
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\MBT_01_body_101st_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\MBT_01_tow_101st_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\MBT_01_addons_101st_CO.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		faction="B_DBA_Republic_F";
		normalSpeedForwardCoef=0.94999999;
		slowSpeedForwardCoef=0.25;
		engineMOI=9;
		enginePower=1118.55;
		maxOmega=251.32739;
		minOmega=73.303001;
		maxSpeed=67.5;
		peakTorque=5950.5693;
		thrustDelay=0.2;
		clutchStrength=250;
		brakeIdleSpeed=7;
		latency=0.1;
		tankTurnForce=1200000;
		idleRpm=700;
		redRpm=2400;
		engineLosses=5;
		accelAidForceCoef= 4;
		accelAidForceSpd= 40;
		torqueCurve[]=
		{
			{0.36363599,0.80000001},
			{0.45454499,0.82999998},
			{0.54545498,0.94999999},
			{0.60606098,0.98000002},
			{0.66666698,1},
			{0.72727299,0.94},
			{0.84848499,0.89999998},
			{1,0.87}
		};
		epeImpulseDamageCoef=0.0099999998;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-0.15000001,
				"N",
				0,
				"D1",
				4.9000001,
				"D2",
				3.0999999,
				"D3",
				1.9,
				"D4",
				1.05
			};
			transmissionRatios[]=
			{
				"High",
				12
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		smokeLauncherGrenadeCount=20;
		smokeLauncherVelocity=20;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=360;
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
					"DBA_762_D61_x400_mag"
				};
				minElev=-16;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg="commander_gun_muzzle_pos";
						gunEnd="commander_gun_muzzle_end";
						memoryPointGun="commander_gun_muzzle";
						selectionFireAnim="commander_muzzleflash";
						minElev=-20;
						maxElev=40;
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						turretInfoType="RscOptics_MBT_01_commander_RCWS";
						weapons[]=
						{
							"DBA_127_C3HB_RCWS",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
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
							"Laserbatteries"
						};
					};
				};
			};
		};
	};
	class DBA_Armata_Testbed: O_T_MBT_04_command_F
	{
		ace_cargo_space=400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="T-14 Heavy Tank";
		crew="101st_CloneTrooper_212th";
		armor=1500;
		armorStructural=16;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		textureList[]={};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\MBT_04_exterior_1_101st_Gray_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\MBT_04_exterior_2_101st_Gray_CO.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
		};
		faction="B_DBA_Republic_F";
		normalSpeedForwardCoef=0.94999999;
		slowSpeedForwardCoef=0.25;
		engineMOI=7;
		enginePower=1342.26;
		maxOmega=251.32739;
		minOmega=73.303001;
		maxSpeed=45;
		peakTorque=5840.7554;
		thrustDelay=0.2;
		clutchStrength=250;
		brakeIdleSpeed=7;
		latency=0.1;
		tankTurnForce=1500000;
		idleRpm=700;
		redRpm=2400;
		engineLosses=5;
		accelAidForceCoef=2.5;
		accelAidForceSpd=25;
		torqueCurve[]=
		{
			{0.41666701,0.86363602},
			{0.5,0.89090902},
			{0.58333302,0.938182},
			{0.66666698,0.98181802},
			{0.75,1},
			{0.83333302,0.96363598},
			{0.91666698,0.86363602},
			{1,0.854545}
		};
		epeImpulseDamageCoef=0.0099999998;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-0.55,
				"N",
				0,
				"D1",
				7.8000002,
				"D2",
				5.5999999,
				"D3",
				4,
				"D4",
				2.9000001,
				"D5",
				2.0999999,
				"D6",
				1.5,
				"D7",
				1.1
			};
			transmissionRatios[]=
			{
				"High",
				5.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
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
					"DBA_762_DN71_x250_mag"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg="Usti hlavne2";
						gunEnd="Konec hlavne2";
						memoryPointGun="usti hlavne2";
						selectionFireAnim="zasleh2";
						minElev=-18;
						maxElev=70;
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
	class DBA_Merkava: B_MBT_01_TUSK_F
	{
		ace_cargo_space=400;
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\MBT_01_body_101st_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\MBT_01_tow_101st_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\MBT_01_addons_101st_CO.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		faction="B_DBA_Republic_F";
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
	class O_MRAP_02_F;
	class DBA_Highgrav_trasport: O_MRAP_02_F
	{
		ace_cargo_space=400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="101st High Grav Transport";
		crew="101st_CloneTrooper_212th";
		armor=400;
		hiddenSelection[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
			"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
			"\A3\Data_F\Vehicles\turret_opfor_co.paa"
		};
		faction="B_DBA_Republic_F";
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
	class O_T_MRAP_02_gmg_ghex_F;
	class DBA_Highgrav_transport_HE: O_T_MRAP_02_gmg_ghex_F
	{
		ace_cargo_space=400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="101st High GMG Grav Transport";
		crew="101st_CloneTrooper_212th";
		armor=400;
		hiddenSelection[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
		};
		faction="B_DBA_Republic_F";
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
	};
	class DBA_Highgrav_transport_HMG: O_T_MRAP_02_hmg_ghex_F
	{
		ace_cargo_space=400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="101st High HMG Grav Transport";
		crew="101st_CloneTrooper_212th";
		armor=400;
		hiddenSelection[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
		};
		faction="B_DBA_Republic_F";
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
					"DBA_Ground_HMG_Generic"
				};
				magazines[]=
				{
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag",
					"DBA_HMG_blue_x500_mag"
				};
				magazineReloadTime=4;
			};
		};
	};
	class DBA_Armata: O_T_MBT_04_command_F
	{
		ace_cargo_space=400;
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
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\MBT_04_exterior_1_101st_Gray_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\MBT\MBT_04_exterior_2_101st_Gray_CO.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
		};
		faction="B_DBA_Republic_F";
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
	class 101st_patrolcraft: optre_catfish_mg_f
	{
		ace_cargo_space=400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		armor=300;
		displayName="101st Patrol Craft";
		crew="101st_CloneTrooper_212th";
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
				weapon="101st_disposable_launcher";
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
		class Turrets: turrets
		{
			class MainTurret: mainturret
			{
				weapons[]=
				{
					"DBA_Ground_HMG_Generic"
				};
				magazines[]=
				{
					"DBA_HMG_blue_x500_mag"
				};
				magazineReloadTime=4;
			};
		};
	};
	class LT_01_base_F;
	class LT_01_cannon_base_F: LT_01_base_F
	{
		class components;
		class Turrets
		{
			class MainTurret;
		};
	};
	class I_LT_01_cannon_F: LT_01_cannon_base_F
	{
		class components;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Offroad_01_military_base_F;
	class Offroad_01_armed_base_F: Offroad_01_military_base_F
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
	class DBA_Technical: Offroad_01_armed_base_F
	{
		displayName="Technical";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		side=0;
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		faction="O_DBA_CIS_F";
		editorSubcategory="RD501_Editor_Category_IFV";
		vehicleClass="RD501_Vehicle_Class_IFV";
		class Turrets: Turrets
		{
			class Laser_Turret: M2_Turret
			{
				weapons[]=
				{
					"DBA_Ground_lmg_Generic"
				};
				magazines[]=
				{
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag"
				};
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewGunner
				{
				};
			};
		};
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
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
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class DBA_Marid: O_APC_Wheeled_02_rcws_v2_F
	{
		displayName="Marid IFV";
		textureList[]={};
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Testing\marid_co.paa",
			"",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Testing\maridturret_co.paa",
			"",
			""
		};
		forceInGarage=1;
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		faction="O_DBA_CIS_F";
		editorSubcategory="RD501_Editor_Category_IFV";
		vehicleClass="RD501_Vehicle_Class_IFV";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics=0;
				gunnerAction="Commander_APC_Wheeled_02_rcws_F_out";
				gunnerInAction="Commander_APC_Wheeled_02_rcws_F_in";
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"GMG_40mm",
					"DBA_Ground_LMG_Generic",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"DBA_LMG_orange_x500_mag",
					"DBA_LMG_orange_x500_mag",
					"DBA_LMG_orange_x500_mag",
					"DBA_LMG_orange_x500_mag",
					"SmokeLauncherMag"
				};
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				gunnerName="$STR_POSITION_COMMANDER";
				commanding=1;
				primaryGunner=1;
				primaryObserver=0;
				LODOpticsIn=0;
				viewGunnerInExternal=1;
				forceHideGunner=0;
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				startEngine=0;
				usePip=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				gunnerOutOpticsModel="";
				gunnerOpticsEffect[]={};
				stabilizedInAxes=3;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerRightHandAnimName="turret_control";
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="commanderview";
				selectionFireAnim="zasleh2";
				turretInfoType="RscOptics_crows";
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				minElev=-15;
				maxElev=30;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="otocvez";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.40000001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="otochlaven";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.2;
						radius=0.2;
						isGun=1;
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.31;
					minFov=0.034000002;
					maxFov=0.31;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
				};
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Testing\skorpionmain_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Testing\skorpionturret_co.paa",
			"",
			""
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
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F
	{
		class Components;
	};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class DBA_Viper: O_APC_Tracked_02_cannon_F
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
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Testing\vipermain_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Testing\viper2nd_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Testing\viperturret_co.paa",
			"",
			""
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
	//New CIS AA Statics
	class  DBA_ChiNoKu_SAM: B_SAM_System_02_F
	{
		displayName = "DADS-1P Chi No Ku SAM";
		side = 0;
		editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
        faction = "O_DBA_CIS_F";
		scopeCurator=2;
		armor = 400;
		armorStructural = 2;
		damageResistance = 0.004;
		damageEffect = "AirDestructionEffects";
		class AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="DBA_DADS1P_SAM";
			};
		};
		class Components
		{
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent
                {
                    class AirTarget
                    {
                        minRange = 20000;
                        maxRange = 20000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        minRange = 20000;
                        maxRange = 20000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    typeRecognitionDistance = 20000;
                    maxTrackableSpeed = 1900;
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 360;
                    animDirection = "mainGun";
                    aimDown = -0.5;
                };
				class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=20000;
							maxRange=20000;
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
						typeRecognitionDistance=20000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=1.0;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=20000;
						minSpeedThreshold=5;
						maxSpeedThreshold=1900;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
                class DataLinkSensorComponent
                {
                };
            };
        };
        class TransportCountermeasuresComponent
        {
        };
		};
		class Turrets{
        class MainTurret
        {
            minelev = -25;
            maxelev = 60;
            minturn = -180;
            maxturn = 180;
            initElev = 15;
            initTurn = 0;
            maxHorizontalRotSpeed = 1.5;
            maxVerticalRotSpeed = 4;
            soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",1.41254,1,40};
            hasGunner = 1;
            gunnerName = "Droid Network";
            primary = 1;
            primaryGunner = 1;
            startEngine = 0;
            enableManualFire = 1;
            turretinfotype = "RscOptics_APC_Tracked_01_gunner";
            forceHideGunner = 1;
            gunnerforceoptics = 1;
            gunnerOutForceOptics = 1;
            viewgunnerinExternal = 0;
            outGunnerMayFire = 1;
            inGunnerMayFire = 1;
            castGunnerShadow = 0;
            showAllTargets = 2;
            body = "MainTurret";
            gun = "MainGun";
            animationSourceBody = "MainTurret";
            animationSourceGun = "MainGun";
            uavCameraGunnerPos = "pos_gunner_view";
            uavCameraGunnerDir = "pos_gunner_view_dir";
            memoryPointGunnerOptics = "pos_gunner_view";
            selectionFireAnim = "zasleh";
            missileBeg = "pos_missile";
            missileEnd = "pos_missile_end";
            gunnerlefthandanimname = "";
            gunnerrighthandanimname = "";
            weapons[] = {"DBA_DADS1P_SAM"};
            magazines[] = {"DBA_DADS1P_mag_x8",};
            optics = 1;
            gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "W";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.466;
                    minFov = 0.466;
                    maxFov = 0.466;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
                };
                class Medium
                {
                    opticsDisplayName = "M";
                    initFov = 0.093;
                    minFov = 0.093;
                    maxFov = 0.093;
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                };
                class Narrow
                {
                    opticsDisplayName = "N";
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
                    initFov = 0.029;
                    minFov = 0.029;
                    maxFov = 0.029;
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                };
            };
            class Components
            {
                class VehicleSystemsDisplayManagerComponentLeft
                {
                    class Components
                    {
                        class EmptyDisplay
                        {
                            componentType = "EmptyDisplayComponent";
                        };
                        class MinimapDisplay
                        {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                        class UAVDisplay
                        {
                            componentType = "UAVFeedDisplayComponent";
                        };
                        class SensorDisplay
                        {
                            componentType = "SensorsDisplayComponent";
                            range[] = {20000,4000,2000,16000};
                            resource = "RscCustomInfoSensors";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    left = 1;
                    defaultDisplay = "EmptyDisplay";
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
                class VehicleSystemsDisplayManagerComponentRight
                {
                    defaultDisplay = "SensorDisplay";
                    class Components
                    {
                        class EmptyDisplay
                        {
                            componentType = "EmptyDisplayComponent";
                        };
                        class MinimapDisplay
                        {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                        class UAVDisplay
                        {
                            componentType = "UAVFeedDisplayComponent";
                        };
                        class SensorDisplay
                        {
                            componentType = "SensorsDisplayComponent";
                            range[] = {20000,4000,2000,16000};
                            resource = "RscCustomInfoSensors";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    right = 1;
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
            };
            class ViewOptics
            {
            };
            class HitPoints
            {
                class HitGun
                {
                    armor = 0.3;
                    material = -1;
                    name = "action";
                    visual = "autonomous_unhide";
                    passThrough = 0;
                    radius = 0.2;
                };
                class HitTurret
                {
                    class DestructionEffects
                    {
                        class Smoke
                        {
                            simulation = "particles";
                            type = "WeaponWreckSmoke";
                            position = "destructionEffect";
                            intensity = 1;
                            interval = 1;
                            lifeTime = 5;
                        };
                    };
                    armor = 0.3;
                    material = -1;
                    name = "action";
                    visual = "autonomous_unhide";
                    passThrough = 0;
                    radius = 0.2;
                };
            };
            memoryPointsGetInGunner = "pos_gunner";
            memoryPointsGetInGunnerDir = "pos_gunner_dir";
            gunnerReversedGetOut = 0;
            memoryPointGun = "usti hlavne";
            ejectDeadGunner = 0;
            canEject = 0;
            gunnerGetInAction = "";
            gunnerGetOutAction = "";
            animationSourceHatch = "hatchGunner";
            animationSourceCamElev = "camElev";
            proxyType = "CPGunner";
            proxyIndex = 1;
            gunnerType = "";
            primaryObserver = 0;
            soundElevation[] = {"",0.00316228,1};
            minOutElev = -4;
            maxOutElev = 20;
            initOutElev = 0;
            minOutTurn = -60;
            maxOutTurn = 60;
            initOutTurn = 0;
            minCamElev = -90;
            maxCamElev = 90;
            initCamElev = 0;
            stabilizedInAxes = 3;
            commanding = 1;
            turretCanSee = 0;
            canUseScanners = 1;
            class ViewGunner
            {
                initAngleX = 5;
                minAngleX = -75;
                maxAngleX = 85;
                initAngleY = 0;
                minAngleY = -150;
                maxAngleY = 150;
                minFov = 0.25;
                maxFov = 1.25;
                initFov = 0.75;
                minMoveX = 0;
                maxMoveX = 0;
                minMoveY = 0;
                maxMoveY = 0;
                minMoveZ = 0;
                maxMoveZ = 0;
                continuous = 0;
                speedZoomMaxSpeed = 1e+010;
                speedZoomMaxFOV = 0;
            };
            class TurretSpec
            {
                showHeadPhones = 0;
            };
            gunnerOpticsColor[] = {0,0,0,1};
            gunnerOpticsShowCursor = 0;
            gunnerOutOpticsModel = "";
            gunnerOutOpticsColor[] = {0,0,0,1};
            gunnerOpticsEffect[] = {};
            gunnerOutOpticsEffect[] = {};
            memoryPointGunnerOutOptics = "";
            gunnerOutOpticsShowCursor = 0;
            gunnerFireAlsoInInternalCamera = 1;
            gunnerOutFireAlsoInInternalCamera = 1;
            gunnerUsesPilotView = 0;
            viewGunnerShadow = 1;
            viewGunnerShadowDiff = 1;
            viewGunnerShadowAmb = 1;
            hideWeaponsGunner = 1;
            canHideGunner = -1;
            showHMD = 0;
            lockWhenDriverOut = 0;
            lockWhenVehicleSpeed = -1;
            gunnerCompartments = "Compartment1";
            LODTurnedIn = -1;
            LODTurnedOut = -1;
            memoryPointsGetInGunnerPrecise = "";
            armorLights = 0.4;
            class Reflectors
            {
            };
            aggregateReflectors[] = {};
            class GunFire
            {
                cloudletColor[] = {1,1,1,0};
                class Table
                {
                    class T0
                    {
                        color[] = {1,1,1,0};
                        maxT = 0;
                    };
                    class T1
                    {
                        color[] = {1,1,1,0};
                        maxT = 250;
                    };
                    class T2
                    {
                        color[] = {1,0.9,0.6,0};
                        maxT = 350;
                    };
                    class T3
                    {
                        color[] = {0.05,0.05,0.05,0};
                        maxT = 700;
                    };
                    class T4
                    {
                        color[] = {0,0,0,0};
                        maxT = 4200;
                    };
                    class T5
                    {
                        maxT = 1000;
                        color[] = {0.23,0.31,0.29,0};
                    };
                    class T6
                    {
                        maxT = 1500;
                        color[] = {0.21,0.29,0.27,0};
                    };
                    class T7
                    {
                        maxT = 2000;
                        color[] = {0.19,0.23,0.21,0};
                    };
                    class T8
                    {
                        maxT = 2300;
                        color[] = {0.22,0.19,0.1,0};
                    };
                    class T9
                    {
                        maxT = 2500;
                        color[] = {0.35,0.2,0.02,0};
                    };
                    class T10
                    {
                        maxT = 2600;
                        color[] = {0.62,0.29,0.03,0};
                    };
                    class T11
                    {
                        maxT = 2650;
                        color[] = {0.59,0.35,0.05,0};
                    };
                    class T12
                    {
                        maxT = 2700;
                        color[] = {0.75,0.37,0.03,0};
                    };
                    class T13
                    {
                        maxT = 2750;
                        color[] = {0.88,0.34,0.03,0};
                    };
                    class T14
                    {
                        maxT = 2800;
                        color[] = {0.91,0.5,0.17,0};
                    };
                    class T15
                    {
                        maxT = 2850;
                        color[] = {1,0.6,0.2,0};
                    };
                    class T16
                    {
                        maxT = 2900;
                        color[] = {1,0.71,0.3,0};
                    };
                    class T17
                    {
                        maxT = 2950;
                        color[] = {0.98,0.83,0.41,0};
                    };
                    class T18
                    {
                        maxT = 3000;
                        color[] = {0.98,0.91,0.54,0};
                    };
                    class T19
                    {
                        maxT = 3100;
                        color[] = {0.98,0.99,0.6,0};
                    };
                    class T20
                    {
                        maxT = 3300;
                        color[] = {0.96,0.99,0.72,0};
                    };
                    class T21
                    {
                        maxT = 3600;
                        color[] = {1,0.98,0.91,0};
                    };
                    class T22
                    {
                        maxT = 4200;
                        color[] = {1,1,1,0};
                    };
                };
                access = 0;
                cloudletDuration = 0.2;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.6;
                cloudletGrowUp = 0;
                cloudletFadeIn = 0.01;
                cloudletFadeOut = 1;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletFire";
                interval = 0.01;
                size = 3;
                sourceSize = 0.5;
                timeToLive = 5;
                initT = 0;
                deltaT = 2250;
            };
            class GunClouds
            {
                cloudletColor[] = {0.8,0.8,0.8,0};
                class Table
                {
                    class T0
                    {
                        color[] = {0.8,0.8,0.8,0};
                        maxT = 0;
                    };
                };
                access = 0;
                cloudletDuration = 1;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.1;
                cloudletGrowUp = 0.1;
                cloudletFadeIn = 0.1;
                cloudletFadeOut = 1;
                cloudletAccY = 0.05;
                cloudletMinYSpeed = 0.05;
                cloudletMaxYSpeed = 0.05;
                cloudletShape = "cloudletClouds";
                interval = 0.1;
                size = 1;
                sourceSize = 0;
                timeToLive = 1;
                initT = 0;
                deltaT = 0;
            };
            class MGunClouds
            {
                access = 0;
                cloudletColor[] = {1,1,1,0};
                class Table
                {
                    class T0
                    {
                        color[] = {1,1,1,0};
                        maxT = 0;
                    };
                };
                cloudletGrowUp = 0.05;
                cloudletFadeIn = 0;
                cloudletFadeOut = 0.1;
                cloudletDuration = 0.05;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.3;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletClouds";
                timeToLive = 0;
                interval = 0.02;
                size = 0.3;
                sourceSize = 0.02;
                initT = 0;
                deltaT = 0;
            };
            class Turrets
            {
            };
            forceNVG = 0;
            isCopilot = 0;
            gunnerLeftLegAnimName = "";
            gunnerRightLegAnimName = "";
            gunnerDoor = "";
            preciseGetInOut = 0;
            turretFollowFreeLook = 0;
            allowTabLock = 0;
            dontCreateAI = 0;
            disableSoundAttenuation = 0;
            slingLoadOperator = 0;
            playerPosition = 0;
            allowLauncherIn = 0;
            allowLauncherOut = 0;
            class TurnIn
            {
                turnOffset = 0;
            };
            class TurnOut
            {
                turnOffset = 0;
            };
            gunnerInAction = "ManActTestDriver";
            gunnerAction = "ManActTestDriver";
            gunBeg = "usti hlavne";
            gunEnd = "konec hlavne";
            showCrewAim = 0;
            ace_fcs_Enabled = 0;
            ace_fcs_MinDistance = 200;
            ace_fcs_MaxDistance = 5500;
            ace_fcs_DistanceInterval = 5;
        };
    };
	class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.25999999
				},
				
				{
					"hide_missilecover_01",
					1
				},
				
				{
					"hide_missilecover_02",
					1
				},
				
				{
					"hide_missilecover_03",
					1
				},
				
				{
					"hide_missilecover_04",
					1
				},
				
				{
					"hide_missilecover_05",
					1
				},
				
				{
					"hide_missilecover_06",
					1
				},
				
				{
					"hide_missilecover_07",
					1
				},
				
				{
					"hide_missilecover_08",
					1
				},
				
				{
					"damageturret",
					0
				},
				
				{
					"damage_hide_missilecover_01",
					0
				},
				
				{
					"damage_hide_missilecover_02",
					0
				},
				
				{
					"damage_hide_missilecover_03",
					0
				},
				
				{
					"damage_hide_missilecover_04",
					0
				},
				
				{
					"damage_hide_missilecover_05",
					0
				},
				
				{
					"damage_hide_missilecover_06",
					0
				},
				
				{
					"damage_hide_missilecover_07",
					0
				},
				
				{
					"damage_hide_missilecover_08",
					0
				},
				
				{
					"missile_move_1",
					1
				},
				
				{
					"missile_move_2",
					1
				},
				
				{
					"missile_move_3",
					1
				},
				
				{
					"missile_move_4",
					1
				},
				
				{
					"missile_move_5",
					1
				},
				
				{
					"missile_move_6",
					1
				},
				
				{
					"missile_move_7",
					1
				}
			};
			hide[]=
			{
				"zasleh",
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.972;
			verticalOffsetWorld=0.001;
			init="''";
		};
    animated = 1;
	};
	class DBA_Arbalest_SAM : B_SAM_System_01_F
	{
		displayName = "DADS-5M Arbalest SAM";
		side = 0;
		editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
        faction = "O_DBA_CIS_F";
		scopeCurator=2;
		armor = 200;
		armorStructural = 2;
		damageResistance = 0.004;
		damageEffect = "AirDestructionEffects";
		class Components
		{
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent
                {
                    class AirTarget
                    {
                        minRange = 20000;
                        maxRange = 20000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        minRange = 20000;
                        maxRange = 20000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    typeRecognitionDistance = 20000;
                    maxTrackableSpeed = 1600;
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 360;
                    animDirection = "mainGun";
                    aimDown = -0.5;
                };
				class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=20000;
							maxRange=20000;
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
						typeRecognitionDistance=20000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=1.0;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=20000;
						minSpeedThreshold=5;
						maxSpeedThreshold=1900;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
                class DataLinkSensorComponent
                {
                };
            };
        };
        class TransportCountermeasuresComponent
        {
        };
		};
		class Turrets{
        class MainTurret
        {
            minelev = -25;
            maxelev = 80;
            minturn = -180;
            maxturn = 180;
            initElev = 15;
            initTurn = 0;
            maxHorizontalRotSpeed = 1.5;
            maxVerticalRotSpeed = 4;
            soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",1.41254,1,40};
            hasGunner = 1;
            gunnerName = "Droid Network";
            primary = 1;
            primaryGunner = 1;
            startEngine = 0;
            enableManualFire = 1;
            turretinfotype = "RscOptics_APC_Tracked_01_gunner";
            forceHideGunner = 1;
            gunnerforceoptics = 1;
            gunnerOutForceOptics = 1;
            viewgunnerinExternal = 0;
            outGunnerMayFire = 1;
            inGunnerMayFire = 1;
            castGunnerShadow = 0;
            showAllTargets = 2;
            body = "MainTurret";
            gun = "MainGun";
            animationSourceBody = "MainTurret";
            animationSourceGun = "MainGun";
            uavCameraGunnerPos = "pos_gunner_view";
            uavCameraGunnerDir = "pos_gunner_view_dir";
            memoryPointGunnerOptics = "pos_gunner_view";
            selectionFireAnim = "zasleh";
            missileBeg = "pos_missile";
            missileEnd = "pos_missile_end";
            gunnerlefthandanimname = "";
            gunnerrighthandanimname = "";
            weapons[] = {"DBA_DADS5M_SAM"};
            magazines[] = {"DBA_DADS5M_mag_x21"};
            optics = 1;
            gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "W";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.466;
                    minFov = 0.466;
                    maxFov = 0.466;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
                };
                class Medium
                {
                    opticsDisplayName = "M";
                    initFov = 0.093;
                    minFov = 0.093;
                    maxFov = 0.093;
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                };
                class Narrow
                {
                    opticsDisplayName = "N";
                    gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
                    initFov = 0.029;
                    minFov = 0.029;
                    maxFov = 0.029;
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                };
            };
            class Components
            {
                class VehicleSystemsDisplayManagerComponentLeft
                {
                    class Components
                    {
                        class EmptyDisplay
                        {
                            componentType = "EmptyDisplayComponent";
                        };
                        class MinimapDisplay
                        {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                        class UAVDisplay
                        {
                            componentType = "UAVFeedDisplayComponent";
                        };
                        class SensorDisplay
                        {
                            componentType = "SensorsDisplayComponent";
                            range[] = {20000,4000,2000,16000};
                            resource = "RscCustomInfoSensors";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    left = 1;
                    defaultDisplay = "EmptyDisplay";
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
                class VehicleSystemsDisplayManagerComponentRight
                {
                    defaultDisplay = "SensorDisplay";
                    class Components
                    {
                        class EmptyDisplay
                        {
                            componentType = "EmptyDisplayComponent";
                        };
                        class MinimapDisplay
                        {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                        class UAVDisplay
                        {
                            componentType = "UAVFeedDisplayComponent";
                        };
                        class SensorDisplay
                        {
                            componentType = "SensorsDisplayComponent";
                            range[] = {20000,4000,2000,16000};
                            resource = "RscCustomInfoSensors";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    right = 1;
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
            };
            class ViewOptics
            {
            };
            class HitPoints
            {
                class HitGun
                {
                    armor = 0.3;
                    material = -1;
                    name = "action";
                    visual = "autonomous_unhide";
                    passThrough = 0;
                    radius = 0.2;
                };
                class HitTurret
                {
                    class DestructionEffects
                    {
                        class Smoke
                        {
                            simulation = "particles";
                            type = "WeaponWreckSmoke";
                            position = "destructionEffect";
                            intensity = 1;
                            interval = 1;
                            lifeTime = 5;
                        };
                    };
                    armor = 0.3;
                    material = -1;
                    name = "action";
                    visual = "autonomous_unhide";
                    passThrough = 0;
                    radius = 0.2;
                };
            };
            memoryPointsGetInGunner = "pos_gunner";
            memoryPointsGetInGunnerDir = "pos_gunner_dir";
            gunnerReversedGetOut = 0;
            memoryPointGun = "usti hlavne";
            ejectDeadGunner = 0;
            canEject = 0;
            gunnerGetInAction = "";
            gunnerGetOutAction = "";
            animationSourceHatch = "hatchGunner";
            animationSourceCamElev = "camElev";
            proxyType = "CPGunner";
            proxyIndex = 1;
            gunnerType = "";
            primaryObserver = 0;
            soundElevation[] = {"",0.00316228,1};
            minOutElev = -4;
            maxOutElev = 20;
            initOutElev = 0;
            minOutTurn = -60;
            maxOutTurn = 60;
            initOutTurn = 0;
            minCamElev = -90;
            maxCamElev = 90;
            initCamElev = 0;
            stabilizedInAxes = 3;
            commanding = 1;
            turretCanSee = 0;
            canUseScanners = 1;
            class ViewGunner
            {
                initAngleX = 5;
                minAngleX = -75;
                maxAngleX = 85;
                initAngleY = 0;
                minAngleY = -150;
                maxAngleY = 150;
                minFov = 0.25;
                maxFov = 1.25;
                initFov = 0.75;
                minMoveX = 0;
                maxMoveX = 0;
                minMoveY = 0;
                maxMoveY = 0;
                minMoveZ = 0;
                maxMoveZ = 0;
                continuous = 0;
                speedZoomMaxSpeed = 1e+010;
                speedZoomMaxFOV = 0;
            };
            class TurretSpec
            {
                showHeadPhones = 0;
            };
            gunnerOpticsColor[] = {0,0,0,1};
            gunnerOpticsShowCursor = 0;
            gunnerOutOpticsModel = "";
            gunnerOutOpticsColor[] = {0,0,0,1};
            gunnerOpticsEffect[] = {};
            gunnerOutOpticsEffect[] = {};
            memoryPointGunnerOutOptics = "";
            gunnerOutOpticsShowCursor = 0;
            gunnerFireAlsoInInternalCamera = 1;
            gunnerOutFireAlsoInInternalCamera = 1;
            gunnerUsesPilotView = 0;
            viewGunnerShadow = 1;
            viewGunnerShadowDiff = 1;
            viewGunnerShadowAmb = 1;
            hideWeaponsGunner = 1;
            canHideGunner = -1;
            showHMD = 0;
            lockWhenDriverOut = 0;
            lockWhenVehicleSpeed = -1;
            gunnerCompartments = "Compartment1";
            LODTurnedIn = -1;
            LODTurnedOut = -1;
            memoryPointsGetInGunnerPrecise = "";
            armorLights = 0.4;
            class Reflectors
            {
            };
            aggregateReflectors[] = {};
            class GunFire
            {
                cloudletColor[] = {1,1,1,0};
                class Table
                {
                    class T0
                    {
                        color[] = {1,1,1,0};
                        maxT = 0;
                    };
                    class T1
                    {
                        color[] = {1,1,1,0};
                        maxT = 250;
                    };
                    class T2
                    {
                        color[] = {1,0.9,0.6,0};
                        maxT = 350;
                    };
                    class T3
                    {
                        color[] = {0.05,0.05,0.05,0};
                        maxT = 700;
                    };
                    class T4
                    {
                        color[] = {0,0,0,0};
                        maxT = 4200;
                    };
                    class T5
                    {
                        maxT = 1000;
                        color[] = {0.23,0.31,0.29,0};
                    };
                    class T6
                    {
                        maxT = 1500;
                        color[] = {0.21,0.29,0.27,0};
                    };
                    class T7
                    {
                        maxT = 2000;
                        color[] = {0.19,0.23,0.21,0};
                    };
                    class T8
                    {
                        maxT = 2300;
                        color[] = {0.22,0.19,0.1,0};
                    };
                    class T9
                    {
                        maxT = 2500;
                        color[] = {0.35,0.2,0.02,0};
                    };
                    class T10
                    {
                        maxT = 2600;
                        color[] = {0.62,0.29,0.03,0};
                    };
                    class T11
                    {
                        maxT = 2650;
                        color[] = {0.59,0.35,0.05,0};
                    };
                    class T12
                    {
                        maxT = 2700;
                        color[] = {0.75,0.37,0.03,0};
                    };
                    class T13
                    {
                        maxT = 2750;
                        color[] = {0.88,0.34,0.03,0};
                    };
                    class T14
                    {
                        maxT = 2800;
                        color[] = {0.91,0.5,0.17,0};
                    };
                    class T15
                    {
                        maxT = 2850;
                        color[] = {1,0.6,0.2,0};
                    };
                    class T16
                    {
                        maxT = 2900;
                        color[] = {1,0.71,0.3,0};
                    };
                    class T17
                    {
                        maxT = 2950;
                        color[] = {0.98,0.83,0.41,0};
                    };
                    class T18
                    {
                        maxT = 3000;
                        color[] = {0.98,0.91,0.54,0};
                    };
                    class T19
                    {
                        maxT = 3100;
                        color[] = {0.98,0.99,0.6,0};
                    };
                    class T20
                    {
                        maxT = 3300;
                        color[] = {0.96,0.99,0.72,0};
                    };
                    class T21
                    {
                        maxT = 3600;
                        color[] = {1,0.98,0.91,0};
                    };
                    class T22
                    {
                        maxT = 4200;
                        color[] = {1,1,1,0};
                    };
                };
                access = 0;
                cloudletDuration = 0.2;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.6;
                cloudletGrowUp = 0;
                cloudletFadeIn = 0.01;
                cloudletFadeOut = 1;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletFire";
                interval = 0.01;
                size = 3;
                sourceSize = 0.5;
                timeToLive = 5;
                initT = 0;
                deltaT = 2250;
            };
            class GunClouds
            {
                cloudletColor[] = {0.8,0.8,0.8,0};
                class Table
                {
                    class T0
                    {
                        color[] = {0.8,0.8,0.8,0};
                        maxT = 0;
                    };
                };
                access = 0;
                cloudletDuration = 1;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.1;
                cloudletGrowUp = 0.1;
                cloudletFadeIn = 0.1;
                cloudletFadeOut = 1;
                cloudletAccY = 0.05;
                cloudletMinYSpeed = 0.05;
                cloudletMaxYSpeed = 0.05;
                cloudletShape = "cloudletClouds";
                interval = 0.1;
                size = 1;
                sourceSize = 0;
                timeToLive = 1;
                initT = 0;
                deltaT = 0;
            };
            class MGunClouds
            {
                access = 0;
                cloudletColor[] = {1,1,1,0};
                class Table
                {
                    class T0
                    {
                        color[] = {1,1,1,0};
                        maxT = 0;
                    };
                };
                cloudletGrowUp = 0.05;
                cloudletFadeIn = 0;
                cloudletFadeOut = 0.1;
                cloudletDuration = 0.05;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.3;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletClouds";
                timeToLive = 0;
                interval = 0.02;
                size = 0.3;
                sourceSize = 0.02;
                initT = 0;
                deltaT = 0;
            };
            class Turrets
            {
            };
            forceNVG = 0;
            isCopilot = 0;
            gunnerLeftLegAnimName = "";
            gunnerRightLegAnimName = "";
            gunnerDoor = "";
            preciseGetInOut = 0;
            turretFollowFreeLook = 0;
            allowTabLock = 0;
            dontCreateAI = 0;
            disableSoundAttenuation = 0;
            slingLoadOperator = 0;
            playerPosition = 0;
            allowLauncherIn = 0;
            allowLauncherOut = 0;
            class TurnIn
            {
                turnOffset = 0;
            };
            class TurnOut
            {
                turnOffset = 0;
            };
            gunnerInAction = "ManActTestDriver";
            gunnerAction = "ManActTestDriver";
            gunBeg = "usti hlavne";
            gunEnd = "konec hlavne";
            showCrewAim = 0;
            ace_fcs_Enabled = 0;
            ace_fcs_MinDistance = 200;
            ace_fcs_MaxDistance = 5500;
            ace_fcs_DistanceInterval = 5;
        };
    };
    animated = 1;
	class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.25999999
				},
				
				{
					"hide_missilecover_01",
					1
				},
				
				{
					"hide_missilecover_02",
					1
				},
				
				{
					"hide_missilecover_03",
					1
				},
				
				{
					"hide_missilecover_04",
					1
				},
				
				{
					"hide_missilecover_05",
					1
				},
				
				{
					"hide_missilecover_06",
					1
				},
				
				{
					"hide_missilecover_07",
					1
				},
				
				{
					"hide_missilecover_08",
					1
				},
				
				{
					"hide_missilecover_09",
					1
				},
				
				{
					"hide_missilecover_10",
					1
				},
				
				{
					"hide_missilecover_11",
					1
				},
				
				{
					"hide_missilecover_12",
					1
				},
				
				{
					"hide_missilecover_13",
					1
				},
				
				{
					"hide_missilecover_14",
					1
				},
				
				{
					"hide_missilecover_15",
					1
				},
				
				{
					"hide_missilecover_16",
					1
				},
				
				{
					"hide_missilecover_17",
					1
				},
				
				{
					"hide_missilecover_18",
					1
				},
				
				{
					"hide_missilecover_19",
					1
				},
				
				{
					"hide_missilecover_20",
					1
				},
				
				{
					"hide_missilecover_21",
					1
				},
				
				{
					"damageturret",
					0
				},
				
				{
					"damage_hide_missilecover_01",
					0
				},
				
				{
					"damage_hide_missilecover_02",
					0
				},
				
				{
					"damage_hide_missilecover_03",
					0
				},
				
				{
					"damage_hide_missilecover_04",
					0
				},
				
				{
					"damage_hide_missilecover_05",
					0
				},
				
				{
					"damage_hide_missilecover_06",
					0
				},
				
				{
					"damage_hide_missilecover_07",
					0
				},
				
				{
					"damage_hide_missilecover_08",
					0
				},
				
				{
					"damage_hide_missilecover_09",
					0
				},
				
				{
					"damage_hide_missilecover_10",
					0
				},
				
				{
					"damage_hide_missilecover_11",
					0
				},
				
				{
					"damage_hide_missilecover_12",
					0
				},
				
				{
					"damage_hide_missilecover_13",
					0
				},
				
				{
					"damage_hide_missilecover_14",
					0
				},
				
				{
					"damage_hide_missilecover_15",
					0
				},
				
				{
					"damage_hide_missilecover_16",
					0
				},
				
				{
					"damage_hide_missilecover_17",
					0
				},
				
				{
					"damage_hide_missilecover_18",
					0
				},
				
				{
					"damage_hide_missilecover_19",
					0
				},
				
				{
					"damage_hide_missilecover_20",
					0
				},
				
				{
					"damage_hide_missilecover_21",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.755;
			verticalOffsetWorld=-0.001;
			init="''";
		};
    class AnimationSources
    {
        class Missiles_revolving
        {
            source = "revolving";
            weapon = "DBA_DADS5M_SAM";
        };
    };
	};
};