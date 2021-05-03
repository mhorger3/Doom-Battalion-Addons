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
			"DBA_Winter_Warrior",
			"DBA_Doom_Warrior",
			"DBA_Fennek",
			"DBA_Fennek_GL",
			"DBA_Fennek_Medic",
			"DBA_Rooikat",
			"DBA_Leopard",
			"DBA_Merkava",	
			"DBA_Armata",
			"DBA_LSV",
			"101st_Octo_Droid",
			"101st_DSD3_Droid",
			"101st_Crab_Droid"
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


//Sabers
	class DBA_TX130_Standard: 3as_saber_m1
	{
		displayName="TX-130 Saber";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		faction="Republic_101st";
		editorSubcategory="RD501_Editor_Category_tank";
		vehicleClass="RD501_Vehicle_Class_tank";
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
		editorSubcategory="RD501_Editor_Category_tank";
		vehicleClass="RD501_Vehicle_Class_tank";
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
		editorSubcategory="RD501_Editor_Category_tank";
		vehicleClass="RD501_Vehicle_Class_tank";
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
		editorSubcategory="RD501_Editor_Category_tank";
		vehicleClass="RD501_Vehicle_Class_tank";
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
	
//Tanks
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
};