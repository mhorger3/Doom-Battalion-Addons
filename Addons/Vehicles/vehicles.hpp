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

	// custom vehicles
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
		class CommanderOptics;
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
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
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
	class 101st_Winter_Warrior : I_APC_tracked_03_cannon_F
	{
		displayName = "101st Winter Warrior APC";
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
					"212th_autocannon_Z20_HBB",
					"missiles_DAGR",
					"missiles_titan"
				};
				magazines[]=
				{
					"212th_500Rnd_Z20_HBB",
					"212th_500Rnd_Z20_HBB",
					"212th_500Rnd_Z20_HBB",
					"212th_500Rnd_Z20_HBB",
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
		class TransportMagazines
		{
			class _xx_RD501_DC15s_x60_mag
			{
				magazine="RD501_DC15s_x60_mag";
				count=10;
			};
			class _xx_RD501_DC15a_LE_x15_mag
			{
				magazine="RD501_DC15a_LE_x15_mag";
				count=10;
			};
			class _xx_RD501_z6_x400_mag
			{
				magazine="RD501_z6_x400_mag";
				count=4;
			};
			class _xx_RD501_RPS_AT_x1_mag
			{
				magazine="RD501_RPS_AT_x1_mag";
				count=4;
			};
			class _xx_RD501_DC15a_Med_x30_mag
			{
				magazine="RD501_DC15a_Med_x30_mag";
				count=40;
			};
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
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '101st_Aux_Mod\Addons\Vehicles\Resupply\autocrate.sqf';";
		};
		class TransportWeapons
		{
			class _xx_101st_DC_15s_shield
			{
				weapon="101st_DC_15s_shield";
				count=2;
			};
			class _xx_101st_DC_15a_base
			{
				weapon="101st_DC_15a_base";
				count=2;
			};
		};	
	};
	class 101st_Doom_Warrior : I_APC_tracked_03_cannon_F
	{
		ace_cargo_space = 400;
		displayName = "101st Doom Warrior APC";
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
					"212th_autocannon_Z20_HBB",
					"missiles_DAGR",
					"missiles_titan"
				};
				magazines[]=
				{
					"212th_500Rnd_Z20_HBB",
					"212th_500Rnd_Z20_HBB",
					"212th_500Rnd_Z20_HBB",
					"212th_500Rnd_Z20_HBB",
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
		
		class TransportMagazines
		{
			class _xx_RD501_DC15s_x60_mag
			{
				magazine="RD501_DC15s_x60_mag";
				count=10;
			};
			class _xx_RD501_DC15a_LE_x15_mag
			{
				magazine="RD501_DC15a_LE_x15_mag";
				count=10;
			};
			class _xx_RD501_z6_x400_mag
			{
				magazine="RD501_z6_x400_mag";
				count=4;
			};
			class _xx_RD501_RPS_AT_x1_mag
			{
				magazine="RD501_RPS_AT_x1_mag";
				count=4;
			};
			class _xx_RD501_DC15a_Med_x30_mag
			{
				magazine="RD501_DC15a_Med_x30_mag";
				count=40;
			};
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
			class _xx_SWOP_termDet_G
			{
				name="SWOP_termDet_G";
				count=10;
			};
		};
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '101st_Aux_Mod\Addons\Vehicles\Resupply\autocrate.sqf';";
		};
		class TransportWeapons
		{
			class _xx_101st_DC_15s_shield
			{
				weapon="101st_DC_15s_shield";
				count=2;
			};
			class _xx_101st_DC_15a_base
			{
				weapon="101st_DC_15a_base";
				count=2;
			};
		};	
	};

	class 212th_B_APC_Wheeled_01_cannon_F;
	class 101st_Doom_Bantha : 212th_B_APC_Wheeled_01_cannon_F
	{
		ace_cargo_space = 400;
		scope=2;
		scopeCurator=2;
		side=1;
		editorSubcategory = "EdSubcat_APCs";
		faction="Republic_101st";
		armor=700;
		maxSpeed=100;
		enginePower=5000;
		peakTorque=7000;
		displayName="101st Bantha APC";
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
	class 101st_Fennek : I_MRAP_03_hmg_F
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
		displayName="101st Fennek MG";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"212th_autocannon_Z20_HBB"
				};
				magazines[]=
				{
					"212th_500Rnd_Z20_HBB", 
					"212th_500Rnd_Z20_HBB"
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
		class TransportMagazines
		{
			class _xx_RD501_DC15s_x60_mag
			{
				magazine="RD501_DC15s_x60_mag";
				count=10;
			};
			class _xx_RD501_DC15a_LE_x15_mag
			{
				magazine="RD501_DC15a_LE_x15_mag";
				count=10;
			};
			class _xx_RD501_z6_x400_mag
			{
				magazine="RD501_z6_x400_mag";
				count=4;
			};
			class _xx_RD501_RPS_AT_x1_mag
			{
				magazine="RD501_RPS_AT_x1_mag";
				count=4;
			};
			class _xx_RD501_DC15a_Med_x30_mag
			{
				magazine="RD501_DC15a_Med_x30_mag";
				count=40;
			};
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
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=20;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=20;
			};
			class _xx_SWOP_termDet_G
			{
				name="SWOP_termDet_G";
				count=10;
			};
		};	
	};	
	class I_MRAP_03_gmg_F;
	class 101st_Fennek_GL : I_MRAP_03_gmg_F
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
		displayName="101st Fennek GL";
	};
	class 101st_Fennek_Medic : I_MRAP_03_hmg_F
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
		displayName="101st Fennek Medical";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"212th_autocannon_Z20_HBB"
				};
				magazines[]=
				{
					"212th_500Rnd_Z20_HBB", 
					"212th_500Rnd_Z20_HBB"
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
	class 101st_Rooikat: B_AFV_Wheeled_01_cannon_F
	{
		author="Mutt";
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="101st Rooikat";
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
					"RD501_atte_mbt",
					"212th_arifle_VALKEN38A_F"
				};
				magazines[]=
				{
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle",
							"weapon_VLS_01"
						};
						magazines[]=
						{
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries",
							"magazine_Missiles_Cruise_01_x18"
						};
					};
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
	class 101st_Leopard : I_MBT_03_cannon_F
	{
		ace_cargo_space = 400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="101st Leopard MBT";
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
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons
		{
			class _xx_101st_DC_15s_shield
			{
				weapon="101st_DC_15s_shield";
				count=2;
			};
			class _xx_101st_DC_15a_base
			{
				weapon="101st_DC_15a_base";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_RD501_DC15s_x60_mag
			{
				magazine="RD501_DC15s_x60_mag";
				count=10;
			};
			class _xx_RD501_DC15a_LE_x15_mag
			{
				magazine="RD501_DC15a_LE_x15_mag";
				count=10;
			};
			class _xx_RD501_z6_x400_mag
			{
				magazine="RD501_z6_x400_mag";
				count=4;
			};
			class _xx_RD501_RPS_AT_x1_mag
			{
				magazine="RD501_RPS_AT_x1_mag";
				count=4;
			};
			class _xx_RD501_DC15a_Med_x30_mag
			{
				magazine="RD501_DC15a_Med_x30_mag";
				count=40;
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
					"RD501_atte_mbt",
					"212th_arifle_VALKEN38A_F"
				};
				magazines[]=
				{
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"212th_autocannon_Z20_HBB",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"212th_500Rnd_Z20_HBB",
							"212th_500Rnd_Z20_HBB",
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
	class 101st_Merkava : B_MBT_01_TUSK_F
	{
		ace_cargo_space = 400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="101st Merkava MBT";
		crew="101st_CloneTrooper_212th";
		armor=700;
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
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons
		{
			class _xx_101st_DC_15s_shield
			{
				weapon="101st_DC_15s_shield";
				count=2;
			};
			class _xx_101st_DC_15a_base
			{
				weapon="101st_DC_15a_base";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_RD501_DC15s_x60_mag
			{
				magazine="RD501_DC15s_x60_mag";
				count=10;
			};
			class _xx_RD501_DC15a_LE_x15_mag
			{
				magazine="RD501_DC15a_LE_x15_mag";
				count=10;
			};
			class _xx_RD501_z6_x400_mag
			{
				magazine="RD501_z6_x400_mag";
				count=4;
			};
			class _xx_RD501_RPS_AT_x1_mag
			{
				magazine="RD501_RPS_AT_x1_mag";
				count=4;
			};
			class _xx_RD501_DC15a_Med_x30_mag
			{
				magazine="RD501_DC15a_Med_x30_mag";
				count=40;
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
					"RD501_atte_mbt",
					"212th_arifle_VALKEN38A_F"
				};
				magazines[]=
				{
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"212th_autocannon_Z20_HBB",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle",
							"mortar_82mm"
						};
						magazines[]=
						{
							"212th_500Rnd_Z20_HBB",
							"212th_500Rnd_Z20_HBB",
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries",
							"8Rnd_82mm_Mo_shells",
							"8Rnd_82mm_Mo_Smoke_white",
							"8Rnd_82mm_Mo_Smoke_white"
						};
					};
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
				class Turrets;
				
			};
		};
	};
	class 101st_Armata : O_T_MBT_04_command_F
	{
		ace_cargo_space = 400;
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="101st Armata MBT";
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
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons
		{
			class _xx_101st_DC_15s_shield
			{
				weapon="101st_DC_15s_shield";
				count=2;
			};
			class _xx_101st_DC_15a_base
			{
				weapon="101st_DC_15a_base";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_RD501_DC15s_x60_mag
			{
				magazine="RD501_DC15s_x60_mag";
				count=10;
			};
			class _xx_RD501_DC15a_LE_x15_mag
			{
				magazine="RD501_DC15a_LE_x15_mag";
				count=10;
			};
			class _xx_RD501_z6_x400_mag
			{
				magazine="RD501_z6_x400_mag";
				count=4;
			};
			class _xx_RD501_RPS_AT_x1_mag
			{
				magazine="RD501_RPS_AT_x1_mag";
				count=4;
			};
			class _xx_RD501_DC15a_Med_x30_mag
			{
				magazine="RD501_DC15a_Med_x30_mag";
				count=40;
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
					"RD501_atte_mbt",
					"212th_arifle_VALKEN38A_F"
				};
				magazines[]=
				{
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"RD501_atte_mbt_x10_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
					"212th_200Rnd_VALKEN38SAW_mag",
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"212th_autocannon_Z20_HBB",
							"CMFlareLauncher",
							"SmokeLauncher",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"212th_500Rnd_Z20_HBB",
							"212th_500Rnd_Z20_HBB",
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
	
	
	
	// dragonfly
	
	/*class Plane;
	class Plane_Base_F: Plane
	{
		class HitPoints;
		};
	class VTOL_Base_F: Plane_Base_F
		{
			class AnimationSources;
			class EventHandlers;
			class NewTurret;
			class CargoTurret;
			class Components;
			class HitPoints: HitPoints
			{
				class HitHull;
			};
			class ViewPilot;
		};

	class SW_VTOL_02_base_F: VTOL_Base_F
	{
			author="$STR_A3_Bohemia_Interactive";
			_generalMacro="VTOL_02_base_F";
			scope=0;
			scopeCurator=0;
			displayName="$STR_A3_CfgVehicles_VTOL_02_base_F0";
			model="\A3\Air_F_Exp\VTOL_02\VTOL_02_vehicle_F.p3d";
			DLC="Expansion";
			icon="\A3\Air_F_Exp\VTOL_02\Data\UI\Map_VTOL_02_vehicle_CA.paa";
			picture="\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_vehicle_CA.paa";
			overviewPicture="\A3\Data_F_Exp\Images\VehicleXian_ca.paa";
			vehicleClass="Air";
			editorSubcategory="EdSubcat_Planes";
			destrType="DestructWreck";
			driverAction="pilot_VTOL_02";
			getInAction="GetInHigh";
			getOutAction="GetOutHigh";
			driverCompartments="Compartment1";
			driverCanEject=1;
			driverLeftHandAnimName="";
			driverRightHandAnimName="Stick_control_1";
			driverLeftLegAnimName="Pedals_1_left_2";
			driverRightLegAnimName="Pedals_1_right_2";
			memoryPointTaskMarker="TaskMarker_1_pos";
			memoryPointsGetInDriver="GetIn_pilot_pos";
			memoryPointsGetInDriverDir="GetIn_pilot_dir";
			memoryPointsGetInCargo="GetIn_cargo_pos";
			memoryPointsGetInCargoDir="GetIn_cargo_dir";
			memoryPointLRocket="Rocket_1_pos";
			memoryPointRRocket="Rocket_2_pos";
			memoryPointCM[]=
			{
				"Flare_launcher_1_pos",
				"Flare_launcher_2_pos"
			};
			memoryPointCMDir[]=
			{
				"Flare_launcher_1_dir",
				"Flare_launcher_2_dir"
			};
			extCameraPosition[]={0,1,-25};
			class ViewPilot: ViewPilot
			{
				initAngleX=9;
			};
			cargoAction[]=
			{
				"passenger_generic01_foldhands"
			};
			cargoGetInAction[]=
			{
				"GetInHigh"
			};
			cargoGetOutAction[]=
			{
				"GetOutHigh"
			};
			cargoCompartments[]=
			{
				"Compartment3"
			};
			cargoCanEject=1;
			cargoIsCoDriver[]={0};
			transportSoldier=0;
			accuracy=0.5;
			armor=100;
			armorStructural=2;
			explosionShielding=1;
			epeImpulseDamageCoef=50;
			waterLeakiness=8;
			waterResistanceCoef=0.029999999;
			ejectSpeed[]={0,-2,0};
			damageResistance=0.00039999999;
			laserScanner=1;
			showAllTargets=4;
			showCrewAim=0;
			radarTargetSize=1.4;
			visualTargetSize=1.2;
			irTargetSize=1.4;
			lockDetectionSystem="8 + 4";
			incomingMissileDetectionSystem="8 + 16";
			maximumLoad=3000;
			supplyRadius=5;
			getInRadius=3;
			selectionRotorStill="Rotors_static";
			selectionRotorMove="Rotors_blur";
			cabinOpening=0;
			gearRetracting=1;
			driveOnComponent[]=
			{
				"Wheel_1",
				"Wheel_2",
				"Wheel_3"
			};
			weapons[]=
			{
				"CMFlareLauncher"
			};
			magazines[]=
			{
				"168Rnd_CMFlare_Chaff_Magazine"
			};
			maxSpeed=700;
			landingAoa="10*3.1415/180";
			landingSpeed=0;
			stallSpeed=210;
			stallWarningTreshold=0.2;
			wheelSteeringSensitivity=0.69999999;
			airBrake=1;
			flaps=1;
			flapsFrictionCoef=0;
			angleOfIndicence="1*3.1415/180";
			envelope[]={0,0.0099999998,0.2,4,6,7.5999999,8.3999996,9.1999998,9.3999996,9.6000004,9.6999998,9.8000002,8,1};
			altNoForce=11000;
			altFullForce=2500;
			throttleToThrustLogFactor=2;
			thrustCoef[]={1.42,1.17,1.15,1.14,1.13,1.12,1.1,1.0700001,0.99000001,0.2,0,0,0};
			aileronSensitivity=0.5;
			aileronCoef[]={0.60000002,0.80000001,1,1.1,1.2,1.2,0.40000001};
			elevatorSensitivity=0.89999998;
			elevatorCoef[]={0.2,0.38999999,0.50999999,0.60000002,0.68000001,0.75,0.80000001,0.85000002,0.89999998,0.74000001,0.30000001};
			rudderInfluence=0.866;
			rudderCoef[]={0.2,0.5,1,1.5,1.8,2.0999999,2.4000001,2.5,2.5999999,2.7,2.7,0.80000001,0.40000001};
			aileronControlsSensitivityCoef=2;
			elevatorControlsSensitivityCoef=4;
			rudderControlsSensitivityCoef=2;
			draconicForceXCoef=14;
			draconicForceYCoef=1;
			draconicForceZCoef=1;
			draconicTorqueXCoef[]={14,12,11.2,10.6,9.8999996,9.6000004,9.6999998,10.5,11,11.5,12};
			draconicTorqueYCoef[]={0.5,1,2,2.3,3,2.5999999,2.4000001,2.2,2,1.9,1.8};
			vtol=4;
			VTOLYawInfluence=6;
			VTOLPitchInfluence=2;
			VTOLRollInfluence=8;
			maxOmega=2000;
			class Wheels
			{
				class Wheel_1
				{
					boneName="Wheel_1";
					steering=0;
					side="left";
					center="Wheel_1_center";
					boundary="Wheel_1_rim";
					width=0.28;
					mass=150;
					MOI=3;
					dampingRate=0.1;
					dampingRateDamaged=1;
					dampingRateDestroyed=1000;
					maxBrakeTorque=4000;
					maxHandBrakeTorque=0;
					suspTravelDirection[]={0,-1,0};
					suspForceAppPointOffset="Wheel_1_center";
					tireForceAppPointOffset="Wheel_1_center";
					maxCompression=0.15000001;
					maxDroop=0.15000001;
					sprungMass=439;
					springStrength=173830;
					springDamperRate=52150.602;
					longitudinalStiffnessPerUnitGravity=5000;
					latStiffX=1;
					latStiffY=18;
					frictionVsSlipGraph[]=
					{
						{0,1},
						{0.5,1},
						{1,1}
					};
				};
				class Wheel_2: Wheel_1
				{
					width=0.28;
					maxBrakeTorque=8000;
					boneName="Wheel_2";
					center="Wheel_2_center";
					boundary="Wheel_2_rim";
					maxCompression=0.050000001;
					maxDroop=0.050000001;
					sprungMass=1818;
					springStrength=127288;
					springDamperRate=415860.59;
					suspForceAppPointOffset="Wheel_2_center";
					tireForceAppPointOffset="Wheel_2_center";
				};
				class Wheel_3: Wheel_2
				{
					boneName="Wheel_3";
					side="right";
					center="Wheel_3_center";
					boundary="Wheel_3_rim";
					suspForceAppPointOffset="Wheel_3_center";
					tireForceAppPointOffset="Wheel_3_center";
				};
			};
			defaultUserMFDvalues[]={0.15000001,1,0.15000001,1};
			class MFD
			{
				class AirplaneHUD
				{
					topLeft="HUD_top_left";
					topRight="HUD_top_right";
					bottomLeft="HUD_bottom_left";
					borderLeft=0;
					borderRight=0;
					borderTop=0;
					borderBottom=0;
					color[]={0.15000001,1,0.15000001,1};
					helmetMountedDisplay=1;
					helmetPosition[]={-0.037500001,0.037500001,0.1};
					helmetRight[]={0.075000003,0,0};
					helmetDown[]={0,-0.075000003,0};
					font="LucidaConsoleB";
					turret[]={-2};
					class Bones
					{
						class HUDCenter
						{
							type="fixed";
							pos[]={0.5,0.5};
						};
						class HorizonBankSource
						{
							type="rotational";
							source="HorizonBank";
							center[]={0.5,0.5};
							min=-6.2831001;
							max=6.2831001;
							minAngle=-360;
							maxAngle=360;
						};
						class HorizonDiveSource
						{
							source="horizonDive";
							type="linear";
							min=-1;
							max=1;
							minPos[]={0.5,2.5};
							maxPos[]={0.5,-1.5};
						};
						class VelocityVector
						{
							type="vector";
							source="velocityToView";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class ForwardVector
						{
							type="vector";
							source="forward";
							pos0[]={0,0};
							pos10[]={0.234,0.23};
						};
						class GunnerAim
						{
							type="vector";
							source="turret";
							pos0[]={0,-0.5};
							pos10[]={0.0068000001,-0.012};
							projection=0;
						};
						class WeaponAim
						{
							type="vector";
							source="weaponToView";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class TargetingPodDir
						{
							source="pilotcameratoview";
							type="vector";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class TargetingPodTarget
						{
							source="pilotcameratargettoview";
							type="vector";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class SliderDiveSource
						{
							type="linear";
							source="horizonDive";
							min="RAD(-10)";
							max="RAD(10)";
							minPos[]={0.105,0.38};
							maxPos[]={0.105,0.54000002};
						};
						class SliderDiveSource30: SliderDiveSource
						{
							min="RAD(10)";
							max="RAD(30)";
							minPos[]={0,-0.039999999};
							maxPos[]=
							{
								0,
								"0)"
							};
						};
						class SliderDiveSource90: SliderDiveSource30
						{
							min="RAD(30)";
							max="RAD(90)";
							minPos[]={0,-0.039999999};
						};
						class SliderDiveSource30m: SliderDiveSource
						{
							min="RAD(-30)";
							max="RAD(-10)";
							minPos[]={0,0};
							maxPos[]={0,0.039999999};
						};
						class SliderDiveSource90m: SliderDiveSource30m
						{
							min="RAD(-90)";
							max="RAD(-30)";
							maxPos[]={0,0.039999999};
						};
						class SliderAltitudeSource
						{
							type="linear";
							source="altitudeAGL";
							sourceOffset=-3;
							min=0;
							max=1000;
							minPos[]={0.88499999,0.2};
							maxPos[]={0.88499999,0.375};
						};
						class GForceSource
						{
							type="linear";
							source="gmeter";
							sourceScale=0.15000001;
							min=-1;
							max=3;
							minPos[]={0.105,0.69999999};
							maxPos[]={0.105,0.86000001};
						};
						class SliderVSpeedSource
						{
							type="linear";
							source="vspeed";
							min=-15;
							max=15;
							minPos[]={0.79500002,0.60000002};
							maxPos[]={0.79500002,0.83999997};
						};
						class ImpactPoint
						{
							type="vector";
							source="ImpactPointToView";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class ImpactPointRockets
						{
							type="vector";
							source="ImpactPointToView";
							pos0[]={0.5,0.565};
							pos10[]={0.73400003,0.79500002};
						};
						class WPPoint
						{
							type="vector";
							source="WPPointToView";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class rtdRPM1
						{
							type="linear";
							source="rpm";
							min=0.1;
							max=1;
							minPos[]={0,-0.075000003};
							maxPos[]={0,0};
						};
						class rtdRPM2: rtdRPM1
						{
							source="rpm";
						};
						class Limit0109
						{
							type="limit";
							limits[]={0.1,0.1,0.89999998,0.89999998};
						};
						class Target
						{
							source="targettoview";
							type="vector";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class ThrustVectoringRotation
						{
							type="rotational";
							source="vtolvectoring";
							sourceScale=100;
							center[]={0.059999999,0.145};
							min=0;
							max=100;
							minAngle=0;
							maxAngle=-90;
							aspectRatio=0.98290598;
						};
						class MissileFlightTimeRot1
						{
							type="rotational";
							source="MissileFlightTime";
							sourceScale=0.46000001;
							center[]={0,0};
							min=0;
							max=0.5;
							minAngle=0;
							maxAngle=18;
							aspectRatio=0.98290598;
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
						class HorizonBankRotFull
						{
							type="rotational";
							source="horizonBank";
							center[]={0,0};
							min=-3.1415999;
							max=3.1415999;
							minAngle=-180;
							maxAngle=180;
							aspectRatio=1;
						};
						class Airport1
						{
							type="vector";
							source="airportCorner1toview";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class Airport2: Airport1
						{
							source="airportCorner2toview";
						};
						class Airport3: Airport1
						{
							source="airportCorner3toview";
						};
						class Airport4: Airport1
						{
							source="airportCorner4toview";
						};
						class ILS_H
						{
							type="ils";
							pos0[]={0.5,0.5};
							pos3[]={0.57020003,0.5};
						};
						class ILS_W: ILS_H
						{
							pos3[]={0.5,0.56900001};
						};
					};
					class Draw
					{
						alpha="user3";
						color[]=
						{
							"user0",
							"user1",
							"user2"
						};
						condition="(1 - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37))*on";
						class VelocityLine
						{
							type="line";
							width=2;
							points[]=
							{
								
								{
									"HUDCenter",
									1
								},
								
								{
									"VelocityVector",
									1
								},
								{},
								
								{
									"VelocityVector",
									{0,-0.0049145301},
									1
								},
								
								{
									"VelocityVector",
									{0.0024999999,-0.0042559798},
									1
								},
								
								{
									"VelocityVector",
									{0.0043299999,-0.0024572599},
									1
								},
								
								{
									"VelocityVector",
									{0.0049999999,0},
									1
								},
								
								{
									"VelocityVector",
									{0.0043299999,0.0024572599},
									1
								},
								
								{
									"VelocityVector",
									{0.0024999999,0.0042559798},
									1
								},
								
								{
									"VelocityVector",
									{0,0.0049145301},
									1
								},
								
								{
									"VelocityVector",
									{-0.0024999999,0.0042559798},
									1
								},
								
								{
									"VelocityVector",
									{-0.0043299999,0.0024572599},
									1
								},
								
								{
									"VelocityVector",
									{-0.0049999999,0},
									1
								},
								
								{
									"VelocityVector",
									{-0.0043299999,-0.0024572599},
									1
								},
								
								{
									"VelocityVector",
									{-0.0024999999,-0.0042559798},
									1
								},
								
								{
									"VelocityVector",
									{0,-0.0049145301},
									1
								},
								{}
							};
						};
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.015,0.0099999998},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0,0},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.015,-0.0099999998},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.015,0.0099999998},
									1
								},
								{},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.029999999,0.015},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.088,0.015},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.088,-0.015},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.029999999,-0.015},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.029999999,0.015},
									1
								},
								{},
								
								{
									{0.1,0.30000001},
									1
								},
								
								{
									{0.1,0.62},
									1
								},
								{},
								
								{
									{0.1,0.30000001},
									1
								},
								
								{
									{0.079999998,0.30000001},
									1
								},
								{},
								
								{
									{0.1,0.34},
									1
								},
								
								{
									{0.079999998,0.34},
									1
								},
								{},
								
								{
									{0.1,0.38},
									1
								},
								
								{
									{0.079999998,0.38},
									1
								},
								{},
								
								{
									{0.1,0.46000001},
									1
								},
								
								{
									{0.079999998,0.46000001},
									1
								},
								{},
								
								{
									{0.1,0.54000002},
									1
								},
								
								{
									{0.079999998,0.54000002},
									1
								},
								{},
								
								{
									{0.1,0.57999998},
									1
								},
								
								{
									{0.079999998,0.57999998},
									1
								},
								{},
								
								{
									{0.1,0.62},
									1
								},
								
								{
									{0.079999998,0.62},
									1
								},
								{},
								
								{
									"GForceSource",
									{0.015,0.0099999998},
									1
								},
								
								{
									"GForceSource",
									{0,0},
									1
								},
								
								{
									"GForceSource",
									{0.015,-0.0099999998},
									1
								},
								
								{
									"GForceSource",
									{0.015,0.0099999998},
									1
								},
								{},
								
								{
									{0.1,0.68800002},
									1
								},
								
								{
									{0.1,0.81999999},
									1
								},
								{},
								
								{
									{0.1,0.69999999},
									1
								},
								
								{
									{0.079999998,0.69999999},
									1
								},
								{},
								
								{
									{0.1,0.74000001},
									1
								},
								
								{
									{0.079999998,0.74000001},
									1
								},
								{},
								
								{
									{0.1,0.77999997},
									1
								},
								
								{
									{0.079999998,0.77999997},
									1
								},
								{},
								
								{
									{0.1,0.81999999},
									1
								},
								
								{
									{0.079999998,0.81999999},
									1
								},
								{},
								
								{
									{0.40000001,0.86000001},
									1
								},
								
								{
									{0.40000001,0.94},
									1
								},
								
								{
									{0.60000002,0.94},
									1
								},
								
								{
									{0.60000002,0.86000001},
									1
								},
								
								{
									{0.40000001,0.86000001},
									1
								},
								{},
								
								{
									{0.40000001,0.89200002},
									1
								},
								
								{
									{0.40799999,0.89200002},
									1
								},
								{},
								
								{
									{0.60000002,0.89200002},
									1
								},
								
								{
									{0.59200001,0.89200002},
									1
								},
								{},
								
								{
									{0.5,0.86000001},
									1
								},
								
								{
									{0.5,0.86799997},
									1
								},
								{},
								
								{
									{0.5,0.94},
									1
								},
								
								{
									{0.5,0.93199998},
									1
								},
								{},
								
								{
									{0.46000001,0.07},
									1
								},
								
								{
									{0.54000002,0.07},
									1
								},
								
								{
									{0.54000002,0.035},
									1
								},
								
								{
									{0.46000001,0.035},
									1
								},
								
								{
									{0.46000001,0.07},
									1
								},
								{},
								
								{
									{0.15000001,0.115},
									1
								},
								
								{
									{0.85000002,0.115},
									1
								},
								{},
								
								{
									{0,0.95999998},
									1
								},
								
								{
									{1.1,0.95999998},
									1
								},
								{},
								
								{
									{0.47999999,0.5},
									1
								},
								
								{
									{0.49000001,0.5},
									1
								},
								{},
								
								{
									{0.50999999,0.5},
									1
								},
								
								{
									{0.51999998,0.5},
									1
								},
								{},
								
								{
									{0.5,0.49000001},
									1
								},
								
								{
									{0.5,0.47999999},
									1
								},
								{},
								
								{
									{0.5,0.50999999},
									1
								},
								
								{
									{0.5,0.51999998},
									1
								},
								{},
								
								{
									"WeaponAim",
									1,
									{-0.02,0},
									1
								},
								
								{
									"WeaponAim",
									1,
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									1,
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									1,
									{0.02,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									1,
									{0,-0.0099999998},
									1
								},
								
								{
									"WeaponAim",
									1,
									{0,-0.02},
									1
								},
								{},
								
								{
									"WeaponAim",
									1,
									{0,0.0099999998},
									1
								},
								
								{
									"WeaponAim",
									1,
									{0,0.02},
									1
								},
								{},
								
								{
									"HUDCenter",
									{-0.16500001,7.0890902e-009},
									1
								},
								
								{
									"HUDCenter",
									{-0.22,9.45212e-009},
									1
								},
								{},
								
								{
									"HUDCenter",
									{0.16500001,-1.9339701e-009},
									1
								},
								
								{
									"HUDCenter",
									{0.22,-2.57863e-009},
									1
								},
								{},
								
								{
									"HUDCenter",
									{-0.082500003,0.140452},
									1
								},
								
								{
									"HUDCenter",
									{-0.096249998,0.16385999},
									1
								},
								{},
								
								{
									"HUDCenter",
									{0.082500003,0.140452},
									1
								},
								
								{
									"HUDCenter",
									{0.096249998,0.16385999},
									1
								},
								{},
								
								{
									"HUDCenter",
									{-0.142894,0.081089698},
									1
								},
								
								{
									"HUDCenter",
									{-0.16671,0.094604701},
									1
								},
								{},
								
								{
									"HUDCenter",
									{0.142894,0.081089698},
									1
								},
								
								{
									"HUDCenter",
									{0.16671,0.094604701},
									1
								},
								{},
								
								{
									"HUDCenter",
									{-0.116673,0.114678},
									1
								},
								
								{
									"HUDCenter",
									{-0.155564,0.152904},
									1
								},
								{},
								
								{
									"HUDCenter",
									{0.116673,0.114678},
									1
								},
								
								{
									"HUDCenter",
									{0.155563,0.152904},
									1
								},
								{},
								
								{
									{0.033333302,0.14866699},
									1
								},
								
								{
									{0.054000001,0.162},
									1
								},
								
								{
									{0.13500001,0.162},
									1
								},
								
								{
									{0.13500001,0.14866699},
									1
								},
								
								{
									{0.126333,0.139667},
									1
								},
								
								{
									{0.118,0.139667},
									1
								},
								
								{
									{0.093333296,0.129333},
									1
								},
								
								{
									{0.033333302,0.129333},
									1
								},
								
								{
									{0.015666701,0.111},
									1
								},
								
								{
									{0.0086666699,0.115333},
									1
								},
								
								{
									{0.0116667,0.13600001},
									1
								},
								{}
							};
						};
						class Gunner
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"GunnerAim",
									{0.48500001,0.89200002},
									1
								},
								
								{
									"GunnerAim",
									{0.48500001,0.90799999},
									1
								},
								
								{
									"GunnerAim",
									{0.51499999,0.90799999},
									1
								},
								
								{
									"GunnerAim",
									{0.51499999,0.89200002},
									1
								},
								
								{
									"GunnerAim",
									{0.48500001,0.89200002},
									1
								}
							};
						};
						class DiveNumber
						{
							type="text";
							source="horizondive";
							sourceScale=57.29578;
							sourceOffset=0;
							align="left";
							scale=1;
							pos[]=
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								
								{
									0.085000001,
									"0.00-0.011"
								},
								1
							};
							right[]=
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								"SliderDiveSource90m",
								1,
								
								{
									0.12,
									"0.00-0.011"
								},
								1
							};
							down[]=
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								
								{
									0.085000001,
									"0.03-0.011"
								},
								1
							};
						};
						class VSpeedGroup
						{
							condition="on";
							class VSpeedNumber
							{
								type="text";
								source="vspeed";
								sourceScale=1;
								align="center";
								scale=1;
								pos[]=
								{
									
									{
										"0.82+0.07",
										0.72799999
									},
									1
								};
								right[]=
								{
									
									{
										"0.86+0.07",
										0.72799999
									},
									1
								};
								down[]=
								{
									
									{
										"0.82+0.07",
										0.76300001
									},
									1
								};
							};
							class Static
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										{0.84899998,0.75999999},
										1
									},
									
									{
										{0.92900002,0.75999999},
										1
									},
									
									{
										{0.92900002,0.72500002},
										1
									},
									
									{
										{0.84899998,0.72500002},
										1
									},
									
									{
										{0.84899998,0.75999999},
										1
									},
									{}
								};
							};
						};
						class VSpeedGroupUp
						{
							condition="vspeed";
							class Static
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										{0.86900002,0.71499997},
										1
									},
									
									{
										{0.90899998,0.71499997},
										1
									},
									
									{
										{0.889,0.69499999},
										1
									},
									
									{
										{0.86900002,0.71499997},
										1
									},
									{}
								};
							};
						};
						class VSpeedGroupDown
						{
							condition="-vspeed";
							class Static
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										{0.86900002,0.76999998},
										1
									},
									
									{
										{0.90899998,0.76999998},
										1
									},
									
									{
										{0.889,0.79000002},
										1
									},
									
									{
										{0.86900002,0.76999998},
										1
									},
									{}
								};
							};
						};
						class AltGroup
						{
							condition="1000 - altitudeAGL";
							class Static
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"SliderAltitudeSource",
										{0.024,0.0099999998},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.0089999996,0},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.024,-0.0099999998},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.024,0.0099999998},
										1
									},
									{},
									
									{
										"SliderAltitudeSource",
										{0.035,0.015},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.093000002,0.015},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.093000002,-0.015},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.035,-0.015},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.035,0.015},
										1
									},
									{},
									
									{
										{0.889,0.2},
										1
									},
									
									{
										{0.889,0.375},
										1
									},
									{},
									
									{
										{0.87900001,0.2},
										1
									},
									
									{
										{0.89899999,0.2},
										1
									},
									{},
									
									{
										{0.87900001,0.375},
										1
									},
									
									{
										{0.89899999,0.375},
										1
									},
									{}
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-3;
								align="left";
								scale=1;
								pos[]=
								{
									"SliderAltitudeSource",
									
									{
										0.085000001,
										"0.00-0.011"
									},
									1
								};
								right[]=
								{
									"SliderAltitudeSource",
									
									{
										0.11,
										"0.00-0.011"
									},
									1
								};
								down[]=
								{
									"SliderAltitudeSource",
									
									{
										0.085000001,
										"0.03-0.011"
									},
									1
								};
							};
							class AltStatic50
							{
								type="text";
								source="static";
								text="1000";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.88499999,0.171},
									1
								};
								right[]=
								{
									{0.92500001,0.171},
									1
								};
								down[]=
								{
									{0.88499999,0.20100001},
									1
								};
							};
						};
						class SpeedNumber
						{
							type="text";
							source="speed";
							sourceScale=3.5999999;
							sourceLength=3;
							align="left";
							scale=1;
							pos[]=
							{
								{0.13,0.22},
								1
							};
							down[]=
							{
								{0.13,0.25999999},
								1
							};
							right[]=
							{
								{0.2,0.22},
								1
							};
						};
						class Angle_90
						{
							type="text";
							source="static";
							text="90";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.285},
								1
							};
							right[]=
							{
								{0.11,0.285},
								1
							};
							down[]=
							{
								{0.07,0.315},
								1
							};
						};
						class Angle_30
						{
							type="text";
							source="static";
							text="30";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.32499999},
								1
							};
							right[]=
							{
								{0.11,0.32499999},
								1
							};
							down[]=
							{
								{0.07,0.35499999},
								1
							};
						};
						class Angle_10
						{
							type="text";
							source="static";
							text="10";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.36500001},
								1
							};
							right[]=
							{
								{0.11,0.36500001},
								1
							};
							down[]=
							{
								{0.07,0.39500001},
								1
							};
						};
						class Angle_0
						{
							type="text";
							source="static";
							text="0";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.44499999},
								1
							};
							right[]=
							{
								{0.11,0.44499999},
								1
							};
							down[]=
							{
								{0.07,0.47499999},
								1
							};
						};
						class Angle_10m
						{
							type="text";
							source="static";
							text="-10";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.52499998},
								1
							};
							right[]=
							{
								{0.11,0.52499998},
								1
							};
							down[]=
							{
								{0.07,0.55500001},
								1
							};
						};
						class Angle_30m
						{
							type="text";
							source="static";
							text="-30";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.565},
								1
							};
							right[]=
							{
								{0.11,0.565},
								1
							};
							down[]=
							{
								{0.07,0.59500003},
								1
							};
						};
						class Angle_90m
						{
							type="text";
							source="static";
							text="-90";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.60500002},
								1
							};
							right[]=
							{
								{0.11,0.60500002},
								1
							};
							down[]=
							{
								{0.07,0.63499999},
								1
							};
						};
						class GMeterStatic3
						{
							type="text";
							source="static";
							text="3";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.68300003},
								1
							};
							right[]=
							{
								{0.11,0.68300003},
								1
							};
							down[]=
							{
								{0.07,0.713},
								1
							};
						};
						class GMeterStatic2
						{
							type="text";
							source="static";
							text="2";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.72299999},
								1
							};
							right[]=
							{
								{0.11,0.72299999},
								1
							};
							down[]=
							{
								{0.07,0.75300002},
								1
							};
						};
						class GMeterStatic1
						{
							type="text";
							source="static";
							text="1";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.76300001},
								1
							};
							right[]=
							{
								{0.11,0.76300001},
								1
							};
							down[]=
							{
								{0.07,0.79299998},
								1
							};
						};
						class GMeterStatic0
						{
							type="text";
							source="static";
							text="0";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.80299997},
								1
							};
							right[]=
							{
								{0.11,0.80299997},
								1
							};
							down[]=
							{
								{0.07,0.833},
								1
							};
						};
						class CollectiveNumber
						{
							type="text";
							source="throttle";
							sourceScale=100;
							align="left";
							scale=1;
							pos[]=
							{
								{0.889,0.46000001},
								1
							};
							right[]=
							{
								{0.93900001,0.46000001},
								1
							};
							down[]=
							{
								{0.889,0.495},
								1
							};
						};
						class CollectiveText
						{
							type="text";
							source="static";
							text="%";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.89899999,0.46000001},
								1
							};
							right[]=
							{
								{0.949,0.46000001},
								1
							};
							down[]=
							{
								{0.89899999,0.495},
								1
							};
						};
						class ThrustVectoring
						{
							condition="1+vtolvectoring";
							class VectorigNumber
							{
								type="text";
								source="vtolvectoring";
								sourceScale=90;
								align="left";
								scale=1;
								pos[]=
								{
									{0.102,0.14},
									1
								};
								right[]=
								{
									{0.127,0.14},
									1
								};
								down[]=
								{
									{0.102,0.155},
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
							class VectorigNumber
							{
								type="text";
								source="static";
								sourceScale=1;
								text="AUTO";
								align="left";
								scale=1;
								pos[]=
								{
									{0.103,0.14},
									1
								};
								right[]=
								{
									{0.123,0.14},
									1
								};
								down[]=
								{
									{0.103,0.155},
									1
								};
							};
						};
						class EngineRPM
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.88999999,0.5},
									1
								},
								
								{
									{0.88999999,0.66000003},
									1
								},
								{},
								
								{
									{0.92000002,0.5},
									1
								},
								
								{
									{0.86000001,0.5},
									1
								},
								{},
								
								{
									{0.92000002,0.66000003},
									1
								},
								
								{
									{0.86000001,0.66000003},
									1
								},
								{},
								
								{
									{0.91000003,0.54000002},
									1
								},
								
								{
									{0.87,0.54000002},
									1
								},
								{},
								
								{
									{0.91000003,0.57999998},
									1
								},
								
								{
									{0.87,0.57999998},
									1
								},
								{},
								
								{
									{0.91000003,0.62},
									1
								},
								
								{
									{0.87,0.62},
									1
								},
								{}
							};
						};
						class EngineRPMLines
						{
							type="line";
							width=5;
							points[]=
							{
								
								{
									
									{
										"0.90+0.01",
										0.66000003
									},
									1
								},
								
								{
									"rtdrpm1",
									
									{
										"0.90+0.01",
										0.66000003
									},
									1
								},
								{},
								
								{
									
									{
										"0.86+0.01",
										0.66000003
									},
									1
								},
								
								{
									"rtdrpm2",
									
									{
										"0.86+0.01",
										0.66000003
									},
									1
								},
								{},
								{}
							};
						};
						class RPM60Text
						{
							type="text";
							source="static";
							text="60";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.92500001,0.64499998},
								1
							};
							right[]=
							{
								{0.95499998,0.64499998},
								1
							};
							down[]=
							{
								{0.92500001,0.67000002},
								1
							};
						};
						class RPM80Text
						{
							type="text";
							source="static";
							text="80";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.92500001,0.60500002},
								1
							};
							right[]=
							{
								{0.95499998,0.60500002},
								1
							};
							down[]=
							{
								{0.92500001,0.63},
								1
							};
						};
						class RPM100Text
						{
							type="text";
							source="static";
							text="100";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.92500001,0.565},
								1
							};
							right[]=
							{
								{0.95499998,0.565},
								1
							};
							down[]=
							{
								{0.92500001,0.58999997},
								1
							};
						};
						class RPM120Text
						{
							type="text";
							source="static";
							text="120";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.92500001,0.52499998},
								1
							};
							right[]=
							{
								{0.95499998,0.52499998},
								1
							};
							down[]=
							{
								{0.92500001,0.55000001},
								1
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
								
								{
									"0.80-0.302",
									"0.082-0.043"
								},
								1
							};
							right[]=
							{
								
								{
									"0.84-0.302",
									"0.082-0.043"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.117-0.043"
								},
								1
							};
						};
						class HeadingRotationArrow
						{
							condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
							class HeadingArrow
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										{0.51999998,0.079999998},
										1
									},
									
									{
										{0.5,0.11},
										1
									},
									
									{
										{0.47999999,0.079999998},
										1
									},
									
									{
										{0.51999998,0.079999998},
										1
									},
									{}
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
										"0.082+0.001"
									},
									1
								};
								right[]=
								{
									
									{
										"0.83-0.302",
										"0.082+0.001"
									},
									1
								};
								down[]=
								{
									
									{
										"0.80-0.302",
										"0.113+0.001"
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
										{0.47799999,0.075000003},
										1
									},
									
									{
										{0.52200001,0.075000003},
										1
									},
									
									{
										{0.55199999,0.094999999},
										1
									},
									
									{
										{0.52200001,0.115},
										1
									},
									
									{
										{0.47799999,0.115},
										1
									},
									
									{
										{0.44800001,0.094999999},
										1
									},
									
									{
										{0.47799999,0.075000003},
										1
									},
									{}
								};
							};
						};
						class HeadingScale
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=0.1;
							sourceoffset=0;
							width=3;
							NeverEatSeaWeed=1;
							top=0.15000001;
							center=0.5;
							bottom=0.85000002;
							lineXleft=0.114;
							lineYright=0.12;
							lineXleftMajor=0.114;
							lineYrightMajor=0.13;
							majorLineEach=2;
							numberEach=6;
							step=0.5;
							stepSize=0.034482799;
							align="center";
							scale=1;
							pos[]={0.15000001,0.13};
							right[]={0.20999999,0.13};
							down[]={0.15000001,0.17};
						};
						class HorizonBanking
						{
							type="line";
							width=3;
							clipTL[]={0,0.1};
							clipBR[]={1,0.89999998};
							points[]=
							{
								
								{
									"HorizonBankSource",
									{0.16,0},
									1
								},
								
								{
									"HorizonBankSource",
									{0.1,0},
									1
								},
								
								{
									"HorizonBankSource",
									{0.085000001,-0.015},
									1
								},
								
								{
									"HorizonBankSource",
									{0.07,0},
									1
								},
								
								{
									"HorizonBankSource",
									{0.050000001,0},
									1
								},
								{},
								
								{
									"HorizonBankSource",
									{-0.16,0},
									1
								},
								
								{
									"HorizonBankSource",
									{-0.1,0},
									1
								},
								
								{
									"HorizonBankSource",
									{-0.085000001,-0.015},
									1
								},
								
								{
									"HorizonBankSource",
									{-0.07,0},
									1
								},
								
								{
									"HorizonBankSource",
									{-0.050000001,0},
									1
								},
								{}
							};
						};
						class CoordXNumber
						{
							type="text";
							source="coordinateX";
							sourceScale=0.0099999998;
							sourceLength=3;
							sourceOffset=-0.5;
							align="right";
							scale=1;
							pos[]=
							{
								{0.80900002,0.96100003},
								1
							};
							right[]=
							{
								{0.85900003,0.96100003},
								1
							};
							down[]=
							{
								{0.80900002,0.99599999},
								1
							};
						};
						class CoordYNumber: CoordXNumber
						{
							source="coordinateY";
							pos[]=
							{
								{0.89899999,0.96100003},
								1
							};
							right[]=
							{
								{0.949,0.96100003},
								1
							};
							down[]=
							{
								{0.89899999,0.99599999},
								1
							};
						};
						class Time: CoordXNumber
						{
							source="time";
							text="%X";
							align="left";
							pos[]=
							{
								{0.60500002,0.96100003},
								1
							};
							right[]=
							{
								{0.65499997,0.96100003},
								1
							};
							down[]=
							{
								{0.60500002,0.99599999},
								1
							};
						};
						class CurrentWeapon
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.97899997,0.889},
								1
							};
							right[]=
							{
								{1.029,0.889},
								1
							};
							down[]=
							{
								{0.97899997,0.92400002},
								1
							};
						};
						class CurrentAmmo: CurrentWeapon
						{
							source="ammo";
							align="left";
							pos[]=
							{
								{0.97899997,0.921},
								1
							};
							right[]=
							{
								{1.029,0.921},
								1
							};
							down[]=
							{
								{0.97899997,0.95599997},
								1
							};
						};
						class CoordXText
						{
							type="text";
							source="static";
							text="GRID:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.65499997,0.96100003},
								1
							};
							right[]=
							{
								{0.70499998,0.96100003},
								1
							};
							down[]=
							{
								{0.65499997,0.99599999},
								1
							};
						};
						class CoordYText
						{
							type="text";
							source="static";
							text="";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.875,0.96100003},
								1
							};
							right[]=
							{
								{0.92500001,0.96100003},
								1
							};
							down[]=
							{
								{0.875,0.99599999},
								1
							};
						};
						class LightsGroup
						{
							condition="lights";
							class LightsText
							{
								type="text";
								source="static";
								text="LIGHT";
								align="left";
								scale=1;
								pos[]=
								{
									{0.149,0.96100003},
									1
								};
								right[]=
								{
									{0.199,0.96100003},
									1
								};
								down[]=
								{
									{0.149,0.99599999},
									1
								};
							};
						};
						class CollisionLights
						{
							condition="collisionlights";
							class CollisionLightsText
							{
								type="text";
								source="static";
								text="COLL";
								align="left";
								scale=1;
								pos[]=
								{
									{0.30899999,0.96100003},
									1
								};
								right[]=
								{
									{0.359,0.96100003},
									1
								};
								down[]=
								{
									{0.30899999,0.99599999},
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
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"TargetingPodDir",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"TargetingPodDir",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.0212132,-0.020850601},
										1
									},
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
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class WeaponsLocking
						{
							condition="missilelocking";
							blinkingPattern[]={0.2,0.2};
							blinkingStartsOn=1;
							class Text
							{
								type="text";
								source="static";
								text="LOCKING";
								align="center";
								scale=1;
								pos[]=
								{
									{0.215,0.87970102},
									1
								};
								right[]=
								{
									{0.27500001,0.87970102},
									1
								};
								down[]=
								{
									{0.215,0.928846},
									1
								};
							};
						};
						class TargetInfo
						{
							condition="missilelocked";
							class TargetLockedText
							{
								type="text";
								source="static";
								text="TARGET ACQUIRED";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.19499999,0.85900003},
									1
								};
								right[]=
								{
									{0.235,0.85900003},
									1
								};
								down[]=
								{
									{0.19499999,0.88999999},
									1
								};
							};
							class TimeOfFlightText
							{
								type="text";
								source="static";
								text="TOF:";
								scale=1;
								sourceScale=1;
								align="left";
								pos[]=
								{
									
									{
										"0.127+0.13",
										0.889
									},
									1
								};
								right[]=
								{
									{0.30199999,0.889},
									1
								};
								down[]=
								{
									
									{
										"0.127+0.13",
										0.92400002
									},
									1
								};
							};
							class DistanceText
							{
								type="text";
								source="static";
								text="DISTANCE:";
								scale=1;
								sourceScale=1;
								align="left";
								pos[]=
								{
									
									{
										"0.125+0.13",
										0.921
									},
									1
								};
								right[]=
								{
									{0.30000001,0.921},
									1
								};
								down[]=
								{
									
									{
										"0.125+0.13",
										0.95599997
									},
									1
								};
							};
							class TOF_source: CurrentWeapon
							{
								source="missileflighttime";
								align="right";
								pos[]=
								{
									{0.26899999,0.889},
									1
								};
								right[]=
								{
									{0.31900001,0.889},
									1
								};
								down[]=
								{
									{0.26899999,0.92400002},
									1
								};
							};
							class TargetDistance: CurrentWeapon
							{
								source="targetDist";
								sourceLength=0;
								sourcePrecision=1;
								sourceScale=0.001;
								align="right";
								pos[]=
								{
									{0.26899999,0.921},
									1
								};
								right[]=
								{
									{0.31900001,0.921},
									1
								};
								down[]=
								{
									{0.26899999,0.95599997},
									1
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
									{0.48500001,0.21623901},
									1
								};
								right[]=
								{
									{0.54500002,0.21623901},
									1
								};
								down[]=
								{
									{0.48500001,0.265385},
									1
								};
							};
						};
						class GearGroup
						{
							type="group";
							condition="ils";
							class GearText
							{
								type="text";
								source="static";
								text="GEAR";
								align="center";
								scale=1;
								pos[]=
								{
									{0.5,0.82564098},
									1
								};
								right[]=
								{
									{0.54000002,0.82564098},
									1
								};
								down[]=
								{
									{0.5,0.85512799},
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
								class ILS
								{
									type="line";
									points[]=
									{
										
										{
											"ILS_W",
											{-0.23999999,0},
											1
										},
										
										{
											"ILS_W",
											{0.23999999,0},
											1
										},
										{},
										
										{
											"ILS_W",
											{-0.23999999,-0.0235897},
											1
										},
										
										{
											"ILS_W",
											{-0.23999999,0.0235897},
											1
										},
										{},
										
										{
											"ILS_W",
											{-0.12,-0.0176923},
											1
										},
										
										{
											"ILS_W",
											{-0.12,0.0176923},
											1
										},
										{},
										
										{
											"ILS_W",
											{0,-0.0235897},
											1
										},
										
										{
											"ILS_W",
											{0,0.0235897},
											1
										},
										{},
										
										{
											"ILS_W",
											{0.12,-0.0176923},
											1
										},
										
										{
											"ILS_W",
											{0.12,0.0176923},
											1
										},
										{},
										
										{
											"ILS_W",
											{0.23999999,-0.0235897},
											1
										},
										
										{
											"ILS_W",
											{0.23999999,0.0235897},
											1
										},
										{},
										
										{
											"ILS_H",
											{0,-0.235897},
											1
										},
										
										{
											"ILS_H",
											{0,0.235897},
											1
										},
										{},
										
										{
											"ILS_H",
											{-0.024,-0.235897},
											1
										},
										
										{
											"ILS_H",
											{0.024,-0.235897},
											1
										},
										{},
										
										{
											"ILS_H",
											{-0.017999999,-0.117949},
											1
										},
										
										{
											"ILS_H",
											{0.017999999,-0.117949},
											1
										},
										{},
										
										{
											"ILS_H",
											{-0.024,0},
											1
										},
										
										{
											"ILS_H",
											{0.024,0},
											1
										},
										{},
										
										{
											"ILS_H",
											{-0.017999999,0.117949},
											1
										},
										
										{
											"ILS_H",
											{0.017999999,0.117949},
											1
										},
										{},
										
										{
											"ILS_H",
											{-0.024,0.235897},
											1
										},
										
										{
											"ILS_H",
											{0.024,0.235897},
											1
										}
									};
								};
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
						class MGun
						{
							condition="-2+mgun*ImpactDistance";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"ImpactPoint",
										{0,-0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0393162},
										1
									},
									{},
									
									{
										"ImpactPoint",
										{0.02,-0.024},
										1
									},
									
									{
										"ImpactPoint",
										{0.025,-0.030999999},
										1
									},
									{},
									
									{
										"ImpactPoint",
										{0,-0.0020000001},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0020000001},
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
							class Circle
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"ImpactPoint",
										{0,-0.0275214},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0344017},
										1
									},
									
									{
										"MissileFlightTimeRot1",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot2",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot3",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot4",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot5",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot6",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot7",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot8",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot9",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot10",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot11",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot12",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot13",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot14",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot15",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot16",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot17",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot18",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot19",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot20",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot20",
										{0,0.028000001},
										1,
										"ImpactPoint",
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
										"ImpactPoint",
										{0,-0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{0.0052080001,-0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0.01026,-0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{0.015,-0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{0.019284001,-0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{0.022980001,-0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{0.025979999,-0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{0.028191,-0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{0.029544,-0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{0.029999999,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.029544,0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{0.028191,0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{0.025979999,0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{0.022980001,0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{0.019284001,0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{0.015,0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{0.01026,0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{0.0052080001,0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0052080001,0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01026,0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{-0.015,0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{-0.019284001,0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{-0.022980001,0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{-0.025979999,0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{-0.028191,0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029544,0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029999999,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029544,-0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.028191,-0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{-0.025979999,-0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{-0.022980001,-0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{-0.019284001,-0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{-0.015,-0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01026,-0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0052080001,-0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0294872},
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
									{-0.0020000001,-0.079999998},
									1
								};
								right[]=
								{
									"ImpactPoint",
									{0.045000002,-0.079999998},
									1
								};
								down[]=
								{
									"ImpactPoint",
									{-0.0020000001,-0.039999999},
									1
								};
							};
						};
						class Rockets
						{
							condition="-2+rocket*ImpactDistance";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"ImpactPoint",
										{0,-0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0393162},
										1
									},
									{},
									
									{
										"ImpactPoint",
										{0.02,-0.024},
										1
									},
									
									{
										"ImpactPoint",
										{0.025,-0.030999999},
										1
									},
									{},
									
									{
										"ImpactPoint",
										{0,-0.0020000001},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0020000001},
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
							class Circle
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"ImpactPoint",
										{0,-0.0275214},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0344017},
										1
									},
									
									{
										"MissileFlightTimeRot1",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot2",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot3",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot4",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot5",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot6",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot7",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot8",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot9",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot10",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot11",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot12",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot13",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot14",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot15",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot16",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot17",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot18",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot19",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot20",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot20",
										{0,0.028000001},
										1,
										"ImpactPoint",
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
										"ImpactPoint",
										{0,-0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{0.0052080001,-0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0.01026,-0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{0.015,-0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{0.019284001,-0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{0.022980001,-0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{0.025979999,-0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{0.028191,-0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{0.029544,-0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{0.029999999,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.029544,0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{0.028191,0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{0.025979999,0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{0.022980001,0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{0.019284001,0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{0.015,0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{0.01026,0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{0.0052080001,0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0052080001,0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01026,0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{-0.015,0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{-0.019284001,0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{-0.022980001,0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{-0.025979999,0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{-0.028191,0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029544,0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029999999,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029544,-0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.028191,-0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{-0.025979999,-0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{-0.022980001,-0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{-0.019284001,-0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{-0.015,-0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01026,-0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0052080001,-0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0294872},
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
									{-0.0020000001,-0.079999998},
									1
								};
								right[]=
								{
									"ImpactPoint",
									{0.045000002,-0.079999998},
									1
								};
								down[]=
								{
									"ImpactPoint",
									{-0.0020000001,-0.039999999},
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
								type="line";
								width=4;
								points[]=
								{
									
									{
										"ImpactPoint",
										{0,-0.0982906},
										1
									},
									
									{
										"ImpactPoint",
										{0.01736,-0.096796602},
										1
									},
									
									{
										"ImpactPoint",
										{0.034200002,-0.0923637},
										1
									},
									
									{
										"ImpactPoint",
										{0.050000001,-0.085119702},
										1
									},
									
									{
										"ImpactPoint",
										{0.064280003,-0.075290598},
										1
									},
									
									{
										"ImpactPoint",
										{0.0766,-0.063181199},
										1
									},
									
									{
										"ImpactPoint",
										{0.086599998,-0.0491453},
										1
									},
									
									{
										"ImpactPoint",
										{0.093970001,-0.033615399},
										1
									},
									
									{
										"ImpactPoint",
										{0.098480001,-0.0170632},
										1
									},
									
									{
										"ImpactPoint",
										{0.1,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.098480001,0.0170632},
										1
									},
									
									{
										"ImpactPoint",
										{0.093970001,0.033615399},
										1
									},
									
									{
										"ImpactPoint",
										{0.086599998,0.0491453},
										1
									},
									
									{
										"ImpactPoint",
										{0.0766,0.063181199},
										1
									},
									
									{
										"ImpactPoint",
										{0.064280003,0.075290598},
										1
									},
									
									{
										"ImpactPoint",
										{0.050000001,0.085119702},
										1
									},
									
									{
										"ImpactPoint",
										{0.034200002,0.0923637},
										1
									},
									
									{
										"ImpactPoint",
										{0.01736,0.096796602},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0982906},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01736,0.096796602},
										1
									},
									
									{
										"ImpactPoint",
										{-0.034200002,0.0923637},
										1
									},
									
									{
										"ImpactPoint",
										{-0.050000001,0.085119702},
										1
									},
									
									{
										"ImpactPoint",
										{-0.064280003,0.075290598},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0766,0.063181199},
										1
									},
									
									{
										"ImpactPoint",
										{-0.086599998,0.0491453},
										1
									},
									
									{
										"ImpactPoint",
										{-0.093970001,0.033615399},
										1
									},
									
									{
										"ImpactPoint",
										{-0.098480001,0.0170632},
										1
									},
									
									{
										"ImpactPoint",
										{-0.1,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.098480001,-0.0170632},
										1
									},
									
									{
										"ImpactPoint",
										{-0.093970001,-0.033615399},
										1
									},
									
									{
										"ImpactPoint",
										{-0.086599998,-0.0491453},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0766,-0.063181199},
										1
									},
									
									{
										"ImpactPoint",
										{-0.064280003,-0.075290598},
										1
									},
									
									{
										"ImpactPoint",
										{-0.050000001,-0.085119702},
										1
									},
									
									{
										"ImpactPoint",
										{-0.034200002,-0.0923637},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01736,-0.096796602},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0982906},
										1
									},
									{},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0,-0.0196581},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0.014,-0.0137607},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										
										{
											"+ 0.02",
											0
										},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0.014,0.0137607},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0,0.0196581},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{-0.014,0.0137607},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										
										{
											"- 0.02",
											0
										},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{-0.014,-0.0137607},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0,-0.0196581},
										1
									},
									{},
									
									{
										"VelocityVector",
										0.001,
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0,0},
										1
									},
									
									{
										"VelocityVector",
										1,
										"Limit0109",
										1,
										{0,0},
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
						class WP
						{
							condition="wpvalid";
							class WPdist
							{
								type="text";
								source="wpdist";
								sourceScale=0.001;
								sourcePrecision=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.935,0.79713702},
									1
								};
								right[]=
								{
									{0.97500002,0.79713702},
									1
								};
								down[]=
								{
									{0.935,0.83448702},
									1
								};
							};
							class WPstatic
							{
								type="text";
								source="static";
								text=">";
								align="center";
								scale=2;
								pos[]=
								{
									{0.94999999,0.79713702},
									1
								};
								right[]=
								{
									{0.97000003,0.79713702},
									1
								};
								down[]=
								{
									{0.94999999,0.83448702},
									1
								};
							};
							class WPIndex
							{
								type="text";
								source="wpIndex";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.95999998,0.79713702},
									1
								};
								right[]=
								{
									{1,0.79713702},
									1
								};
								down[]=
								{
									{0.95999998,0.83448702},
									1
								};
							};
							class WP
							{
								width=1;
								type="line";
								points[]=
								{
									
									{
										"wppoint",
										1,
										
										{
											"HorizonBankRotFull",
											0.015,
											-0.035
										},
										1
									},
									
									{
										"wppoint",
										1,
										
										{
											"HorizonBankRotFull",
											0,
											0
										},
										1
									},
									
									{
										"wppoint",
										1,
										
										{
											"HorizonBankRotFull",
											-0.015,
											-0.035
										},
										1
									}
								};
							};
						};
						class RadarBoxes
						{
							type="radartoview";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
							width=2;
							points[]=
							{
								
								{
									{-0.0020000001,-0.0019658101},
									1
								},
								
								{
									{0.0020000001,-0.0019658101},
									1
								},
								
								{
									{0.0020000001,0.0019658101},
									1
								},
								
								{
									{-0.0020000001,0.0019658101},
									1
								},
								
								{
									{-0.0020000001,-0.0019658101},
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
										{0.02,0.0196581},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{-0.02,0.0196581},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{-0.02,-0.0196581},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{0.02,-0.0196581},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{0.02,0.0196581},
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
										{0,-0.0294872},
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
										{0,0.0294872},
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
										{0,-0.0294872},
										1
									}
								};
							};
						};
					};
				};
				class HMD_CMPilot: AirplaneHUD
				{
					turret[]={-1};
					class Draw
					{
						alpha="user3";
						color[]=
						{
							"user0",
							"user1",
							"user2"
						};
						condition="on - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37)";
						class CMName
						{
							type="text";
							source="cmweapon";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.86900002,0.84899998},
								1
							};
							right[]=
							{
								{0.91900003,0.84899998},
								1
							};
							down[]=
							{
								{0.86900002,0.884},
								1
							};
						};
						class CMCount
						{
							type="text";
							source="cmammo";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.97899997,0.84899998},
								1
							};
							right[]=
							{
								{1.029,0.84899998},
								1
							};
							down[]=
							{
								{0.97899997,0.884},
								1
							};
						};
					};
				};
			};
			class RenderTargets
			{
				class Gunner01_pip
				{
					renderTarget="rendertarget0";
					class CameraView1
					{
						pointPosition="Cannon_pip_pos";
						pointDirection="Cannon_pip_dir";
						renderVisionMode=2;
						renderQuality=2;
						fov=0.40000001;
					};
				};
			};
			class Damage
			{
				tex[]={};
				mat[]=
				{
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_damage.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_destruct.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_damage.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_destruct.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_damage.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_destruct.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cargo01.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cargo01.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_destruct.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cargo02.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cargo02.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_destruct.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cockpit01.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cockpit01.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_destruct.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cockpit02.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cockpit02.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_destruct.rvmat",
					"a3\data_f\glass_veh.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass_damage.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass_damage.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass_damage.rvmat",
					"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass_damage.rvmat"
				};
			};
			hiddenSelections[]=
			{
				"Camo_1",
				"Camo_2",
				"Camo_3",
				"Camo_4"
			};
			class TextureSources
			{
				class Hex
				{
					displayName="$STR_A3_TEXTURESOURCES_HEX0";
					author="$STR_A3_BOHEMIA_INTERACTIVE";
					factions[]=
					{
						"OPF_F",
						"OPF_T_F"
					};
					textures[]=
					{
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa",
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa",
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa",
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa"
					};
				};
				class GreenHex
				{
					displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
					author="$STR_A3_BOHEMIA_INTERACTIVE";
					factions[]=
					{
						"OPF_F",
						"OPF_T_F"
					};
					textures[]=
					{
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_ghex_CO.paa",
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_ghex_CO.paa",
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_ghex_CO.paa",
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_ghex_CO.paa"
					};
				};
				class Grey
				{
					displayName="$STR_A3_TEXTURESOURCES_GREY0";
					author="$STR_A3_BOHEMIA_INTERACTIVE";
					factions[]=
					{
						"OPF_F",
						"OPF_T_F"
					};
					textures[]=
					{
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa",
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa",
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa",
						"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"
					};
				};
				class Doom
				{
					displayName="Doom Company";
					author="Dutch";
					factions[]=
					{
						"OPF_F",
						"OPF_T_F"
					};
					textures[]=
					{
						"101st_Aux_Mod\Addons\textures\VTOL\Vtol_Ext01_CO.paa",
						"101st_Aux_Mod\Addons\textures\VTOL\Vtol_Ext02_CO.paa",
						"101st_Aux_Mod\Addons\textures\VTOL\Vtol_Ext03L_CO.paa",
						"101st_Aux_Mod\Addons\textures\VTOL\Vtol_Ext03R_CO.paa"
					};
				};
			};
			textureList[]=
			{
				"Hex",
				1,
				"GreenHex",
				1,
				"Grey",
				1,
				"Doom",
				1
			};
			class EventHandlers: EventHandlers
			{
				init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
			};
			class HitPoints: HitPoints
			{
				class HitHull: HitHull
				{
					armor=3;
					explosionShielding=1;
					name="HitHull";
					passThrough=0.5;
					visual="Hit_Hull";
					radius=0.30000001;
					minimalHit=0.02;
					depends="Total";
					material=-1;
				};
				class HitLAileron: HitHull
				{
					armor=2.5;
					explosionShielding=3;
					name="HitRotor1";
					passThrough=0.1;
					visual="Hit_RotorL";
					radius=0.44999999;
					minimalHit=0.0099999998;
					depends="0";
				};
				class HitRAileron: HitHull
				{
					armor=2.5;
					explosionShielding=3;
					name="HitRotor2";
					passThrough=0.1;
					visual="Hit_RotorR";
					radius=0.44999999;
					minimalHit=0.0099999998;
					depends="0";
				};
				class HitLCRudder: HitLAileron
				{
				};
				class HitRRudder: HitRAileron
				{
				};
				class HitLCElevator: HitLAileron
				{
				};
				class HitRElevator: HitRAileron
				{
				};
				class HitEngine: HitHull
				{
					armor=3.25;
					explosionShielding=0.5;
					name="HitEngine";
					passThrough=0.1;
					visual="Hit_Engine";
					radius=0.2;
					minimalHit=0.0099999998;
					depends="HitLAileron*0.33";
				};
				class HitEngine2: HitHull
				{
					armor=3.25;
					explosionShielding=0.5;
					name="HitEngine2";
					passThrough=0.1;
					visual="Hit_Engine2";
					radius=0.2;
					minimalHit=0.0099999998;
					depends="HitRAileron*0.33";
				};
				class HitAvionics: HitHull
				{
					armor=2;
					explosionShielding=1;
					name="HitAvionics";
					passThrough=0.2;
					visual="Hit_Avionics";
					radius=0.2;
					depends="0";
				};
				class HitFuel: HitHull
				{
					armor=2.75;
					explosionShielding=0.5;
					name="HitFuel";
					passThrough=0.5;
					visual="Hit_Fuel";
					radius=0.2;
					minimalHit=0.0099999998;
					depends="0";
				};
				class HitGlass1: HitHull
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass1";
					passThrough=0;
					visual="glass_1";
					radius=0.25;
					minimalHit=0.0099999998;
					depends="0";
				};
				class HitGlass2: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass2";
					passThrough=0;
					visual="glass_2";
					radius=0.2;
					minimalHit=0.0099999998;
				};
				class HitGlass3: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass3";
					passThrough=0;
					visual="glass_3";
					radius=0.25;
					minimalHit=0.0099999998;
				};
				class HitGlass4: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass4";
					passThrough=0;
					visual="glass_4";
					radius=0.25;
					minimalHit=0.0099999998;
				};
				class HitGlass5: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass5";
					passThrough=0;
					visual="glass_5";
					radius=0.25;
					minimalHit=0.0099999998;
				};
				class HitGlass6: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass6";
					passThrough=0;
					visual="glass_6";
					radius=0.25;
					minimalHit=0.0099999998;
				};
				class HitGlass7: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass7";
					passThrough=0;
					visual="glass_7";
					radius=0.25;
					minimalHit=0.0099999998;
				};
				class HitGlass8: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass8";
					passThrough=0;
					visual="glass_8";
					radius=0.25;
					minimalHit=0.0099999998;
				};
				class HitGlass9: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass9";
					passThrough=0;
					visual="glass_9";
					radius=0.25;
					minimalHit=0.0099999998;
				};
				class HitGlass10: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass10";
					passThrough=0;
					visual="glass_10";
					radius=0.25;
					minimalHit=0.0099999998;
				};
				class HitGlass11: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass11";
					passThrough=0;
					visual="glass_11";
					radius=0.25;
					minimalHit=0.0099999998;
				};
				class HitGlass12: HitGlass1
				{
					armor=3.25;
					explosionShielding=1;
					name="Glass12";
					passThrough=0;
					visual="glass_12";
					radius=0.25;
					minimalHit=0.0099999998;
				};
				class HitGlass13: HitGlass1
				{
					armor=1.62;
					explosionShielding=2;
					name="Glass13";
					passThrough=0;
					visual="glass_13";
					radius=0.25;
					minimalHit=0.1;
				};
				class HitGlass14: HitGlass1
				{
					armor=1.62;
					explosionShielding=2;
					name="Glass14";
					passThrough=0;
					visual="glass_14";
					radius=0.25;
					minimalHit=0.1;
				};
				class HitGlass15: HitGlass1
				{
					armor=1.62;
					explosionShielding=2;
					name="Glass15";
					passThrough=0;
					visual="glass_15";
					radius=0.25;
					minimalHit=0.1;
				};
				class HitGlass16: HitGlass1
				{
					armor=1.62;
					explosionShielding=2;
					name="Glass16";
					passThrough=0;
					visual="glass_16";
					radius=0.25;
					minimalHit=0.1;
				};
				class HitGlass17: HitGlass1
				{
					armor=1.62;
					explosionShielding=2;
					name="Glass17";
					passThrough=0;
					visual="glass_17";
					radius=0.25;
					minimalHit=0.1;
				};
				class HitGlass18: HitGlass1
				{
					armor=1.62;
					explosionShielding=2;
					name="Glass18";
					passThrough=0;
					visual="glass_18";
					radius=0.25;
					minimalHit=0.1;
				};
				class HitGlass19: HitGlass1
				{
					armor=1.62;
					explosionShielding=2;
					name="Glass19";
					passThrough=0;
					visual="glass_19";
					radius=0.25;
					minimalHit=0.1;
				};
				class HitGlass20: HitGlass1
				{
					armor=1.62;
					explosionShielding=2;
					name="Glass20";
					passThrough=0;
					visual="glass_20";
					radius=0.25;
					minimalHit=0.1;
				};
			};
			class AnimationSources: AnimationSources
			{
				class Door_1_source
				{
					source="door";
					initPhase=0;
					animPeriod=1;
					sound="ServoRampSound";
				};
				class Hide_Cargoseats_source
				{
					source="user";
					initPhase=0;
					animPeriod=0.001;
				};
				class Rockets_revolving_source
				{
					source="revolving";
					weapon="rockets_Skyfire";
				};
				class Missiles_revolving_source
				{
					source="revolving";
					weapon="missiles_SCALPEL";
				};
				class Cannon_revolving_source
				{
					source="revolving";
					weapon="gatling_30mm_VTOL_02";
				};
				class Cannon_muzzleflash_source
				{
					source="reload";
					weapon="gatling_30mm_VTOL_02";
				};
				class Wheel_1_source
				{
					source="wheel";
					wheel="Wheel_1";
				};
				class Wheel_2_source
				{
					source="wheel";
					wheel="Wheel_2";
				};
				class Wheel_3_source
				{
					source="wheel";
					wheel="Wheel_3";
				};
				class Damper_1_source
				{
					source="damper";
					wheel="Wheel_1";
				};
				class Damper_2_source
				{
					source="damper";
					wheel="Wheel_2";
				};
				class Damper_3_source
				{
					source="damper";
					wheel="Wheel_3";
				};
				class HitLAileron
				{
					source="Hit";
					hitpoint="HitLAileron";
					raw=1;
				};
				class HitRAileron
				{
					source="Hit";
					hitpoint="HitRAileron";
					raw=1;
				};
				class HitAvionics
				{
					source="Hit";
					hitpoint="HitAvionics";
					raw=1;
				};
				class HitGlass1
				{
					source="Hit";
					hitpoint="HitGlass1";
					raw=1;
				};
				class HitGlass2: HitGlass1
				{
					hitpoint="HitGlass2";
				};
				class HitGlass3: HitGlass1
				{
					hitpoint="HitGlass3";
				};
				class HitGlass4: HitGlass1
				{
					hitpoint="HitGlass4";
				};
				class HitGlass5: HitGlass1
				{
					hitpoint="HitGlass5";
				};
				class HitGlass6: HitGlass1
				{
					hitpoint="HitGlass6";
				};
				class HitGlass7: HitGlass1
				{
					hitpoint="HitGlass7";
				};
				class HitGlass8: HitGlass1
				{
					hitpoint="HitGlass8";
				};
				class HitGlass9: HitGlass1
				{
					hitpoint="HitGlass9";
				};
				class HitGlass10: HitGlass1
				{
					hitpoint="HitGlass10";
				};
				class HitGlass11: HitGlass1
				{
					hitpoint="HitGlass11";
				};
				class HitGlass12: HitGlass1
				{
					hitpoint="HitGlass12";
				};
				class HitGlass13: HitGlass1
				{
					hitpoint="HitGlass13";
				};
				class HitGlass14: HitGlass1
				{
					hitpoint="HitGlass14";
				};
				class HitGlass15: HitGlass1
				{
					hitpoint="HitGlass15";
				};
				class HitGlass16: HitGlass1
				{
					hitpoint="HitGlass16";
				};
				class HitGlass17: HitGlass1
				{
					hitpoint="HitGlass17";
				};
				class HitGlass18: HitGlass1
				{
					hitpoint="HitGlass18";
				};
				class HitGlass19: HitGlass1
				{
					hitpoint="HitGlass19";
				};
				class HitGlass20: HitGlass1
				{
					hitpoint="HitGlass20";
				};
				class HideWeapons
				{
					source="user";
					animPeriod=1e-006;
					initPhase=0;
				};
			};
			lightOnGear=1;
			aggregateReflectors[]=
			{
				
				{
					"Light_1",
					"Light_2",
					"Light_3"
				}
			};
			class Reflectors
			{
				class Light_1
				{
					color[]={7000,7500,10000};
					ambient[]={70,75,100};
					intensity=50;
					size=1;
					innerAngle=5;
					outerAngle=65;
					coneFadeCoef=10;
					position="Light_1_pos";
					direction="Light_1_dir";
					hitpoint="Light_1_hit";
					selection="Light_1_hide";
					useFlare=1;
					flareSize=10;
					flareMaxDistance=250;
					dayLight=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=1;
						hardLimitStart=100;
						hardLimitEnd=200;
					};
				};
				class Light_2: Light_1
				{
					position="Light_2_pos";
					direction="Light_2_dir";
					hitpoint="Light_2_hit";
					selection="Light_2_hide";
				};
				class Light_3: Light_1
				{
					position="Light_3_pos";
					direction="Light_3_dir";
					hitpoint="Light_3_hit";
					selection="Light_3_hide";
				};
			};
			memoryPointRDust="WheelDust_right_pos";
			memoryPointLDust="WheelDust_left_pos";
			dustEffect="VTOLDust";
			waterEffect="VTOLWater";
			class WingVortices
			{
				class BodyLeft
				{
					effectName="BodyVortices";
					position="Vapour_body_left_pos";
				};
				class BodyRight
				{
					effectName="BodyVortices";
					position="Vapour_body_right_pos";
				};
				class WingTipLeft
				{
					effectName="WingVortices";
					position="Vapour_wintip_left_pos";
				};
				class WingTipRight
				{
					effectName="WingVortices";
					position="Vapour_wintip_right_pos";
				};
			};
			class Exhausts
			{
				class Exhaust1
				{
					position="Exhaust_1_pos";
					direction="Exhaust_1_dir";
					effect="ExhaustsEffectVTOL1HP";
					engineIndex=0;
				};
				class Exhaust2
				{
					position="Exhaust_2_pos";
					direction="Exhaust_2_dir";
					effect="ExhaustsEffectVTOL1HP";
					engineIndex=1;
				};
			};
			reportOwnPosition=1;
			reportRemoteTargets=1;
			receiveRemoteTargets=1;
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
								minRange=500;
								maxRange=4000;
								objectDistanceLimitCoef=-1;
								viewDistanceLimitCoef=1;
							};
							class GroundTarget
							{
								minRange=500;
								maxRange=3000;
								objectDistanceLimitCoef=1;
								viewDistanceLimitCoef=1;
							};
							angleRangeHorizontal=26;
							angleRangeVertical=26;
							maxTrackableSpeed=75;
							animDirection="Cannon_rot";
						};
						class VisualSensorComponent: SensorTemplateVisual
						{
							class AirTarget
							{
								minRange=500;
								maxRange=4000;
								objectDistanceLimitCoef=-1;
								viewDistanceLimitCoef=1;
							};
							class GroundTarget
							{
								minRange=500;
								maxRange=3000;
								objectDistanceLimitCoef=1;
								viewDistanceLimitCoef=1;
							};
							angleRangeHorizontal=26;
							angleRangeVertical=26;
							maxTrackableSpeed=75;
							animDirection="Cannon_rot";
						};
						class ActiveRadarSensorComponent: SensorTemplateActiveRadar
						{
							class AirTarget
							{
								minRange=100;
								maxRange=15000;
								objectDistanceLimitCoef=-1;
								viewDistanceLimitCoef=-1;
							};
							class GroundTarget
							{
								minRange=100;
								maxRange=15000;
								objectDistanceLimitCoef=-1;
								viewDistanceLimitCoef=-1;
							};
							angleRangeHorizontal=350;
							angleRangeVertical=80;
							groundNoiseDistanceCoef=-1;
							maxGroundNoiseDistance=-1;
							minSpeedThreshold=0;
							maxSpeedThreshold=0;
							aimDown=40;
						};
						class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
						{
						};
						class LaserSensorComponent: SensorTemplateLaser
						{
						};
						class NVSensorComponent: SensorTemplateNV
						{
						};
					};
				};
				class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
				{
					class Components
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
							range[]={4000,2000,16000,8000};
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
							range[]={4000,2000,16000,8000};
							resource="RscCustomInfoSensors";
						};
					};
				};
			};
			class Turrets
			{
				class GunnerTurret: NewTurret
				{
					animationSourceBody="Gunner_rotH_source";
					animationSourceGun="Gunner_rotV_source";
					body="Cannon_turret_rot";
					castGunnerShadow=1;
					commanding=-1;
					discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
					discreteDistanceInitIndex=5;
					enableManualFire=0;
					gun="Cannon_rot";
					gunBeg="Cannon_barrel_end";
					gunEnd="Cannon_barrel_beg";
					gunnerAction="gunner_01_VTOL_02";
					gunnerCompartments="Compartment2";
					gunnerForceOptics=0;
					gunnerGetInAction="GetInHigh";
					gunnerGetOutAction="GetOutHigh";
					gunnerInAction="gunner_01_VTOL_02";
					gunnerLeftHandAnimName="";
					gunnerRightHandAnimName="";
					gunnerLeftLegAnimName="Pedals_2_left_2";
					gunnerRightLegAnimName="Pedals_2_right_2";
					gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
					gunnerUsesPilotView=0;
					isCopilot=1;
					maxHorizontalRotSpeed=1.8;
					maxVerticalRotSpeed=1.5;
					memoryPointGunnerOptics="Cannon_pip_pos";
					memoryPointsGetInGunner="GetIn_gunner_pos";
					memoryPointsGetInGunnerDir="GetIn_gunner_dir";
					minElev=-30;
					maxElev=20;
					initElev=5;
					minTurn=-120;
					maxTurn=120;
					initTurn=0;
					outGunnerMayFire=1;
					particlesDir="Cannon_barrel_end";
					particlesPos="Cannon_barrel_beg";
					primaryGunner=1;
					proxyIndex=1;
					selectionFireAnim="Cannon_muzzleflash";
					showAllTargets=4;
					stabilizedInAxes=3;
					startEngine=0;
					turretInfoType="RscOptics_VTOL_02_gunner";
					magazines[]={"RD501_voltic_x200_mag","RD501_voltic_x200_mag","RD501_atte_mbt_x10_mag"};
					weapons[]={"RD501_voltic_y_wing","RD501_atte_mbt"};  
					class OpticsIn
					{
						class Wide
						{
							initAngleX=10;
							minAngleX=-45;
							maxAngleX=25;
							initAngleY=0;
							minAngleY=-90;
							maxAngleY=90;
							initFov=0.46599999;
							minFov=0.46599999;
							maxFov=0.46599999;
							gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_wide_F";
							opticsDisplayName="W";
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={0,1};
						};
						class Medium: Wide
						{
							initFov=0.093000002;
							minFov=0.093000002;
							maxFov=0.093000002;
							gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
							opticsDisplayName="M";
						};
						class Narrow: Wide
						{
							initFov=0.028999999;
							minFov=0.028999999;
							maxFov=0.028999999;
							gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_narrow_F";
							opticsDisplayName="N";
						};
					};
					class OpticsOut
					{
						class Monocular
						{
							initAngleX=10;
							minAngleX=-45;
							maxAngleX=25;
							initAngleY=0;
							minAngleY=-90;
							maxAngleY=90;
							minFov=0.25;
							maxFov=1.25;
							initFov=0.75;
							gunnerOpticsModel="";
							gunnerOpticsEffect[]={};
							visionMode[]=
							{
								"Normal",
								"NVG"
							};
						};
					};
					class Components
					{
						class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
						{
							class Components
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
									range[]={4000,2000,16000,8000};
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
									range[]={4000,2000,16000,8000};
									resource="RscCustomInfoSensors";
								};
							};
						};
					};
				};
			};
			memoryPointDriverOptics="PilotCamera_pos";
			unitInfoType="RscOptics_CAS_Pilot";
			driverWeaponsInfoType="RscOptics_CAS_01_TGP";
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
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="MFOV";
						initFov="(6 / 120)";
						minFov="(6 / 120)";
						maxFov="(6 / 120)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(2 / 120)";
						minFov="(2 / 120)";
						maxFov="(2 / 120)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
				};
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				minElev=-5;
				maxElev=90;
				initElev=5;
				maxXRotSpeed=1;
				maxYRotSpeed=1;
				maxMouseXRotSpeed=0.5;
				maxMouseYRotSpeed=0.5;
				pilotOpticsShowCursor=1;
				controllable=1;
			};
			class TransportBackpacks
			{
				class _xx_B_Parachute
				{
					backpack="B_Parachute";
					count=2;
				};
			};

			attenuationEffectType="PlaneAttenuation";
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
				3.1622777,
				1,
				900
			};
			soundEngineOnInt[]=
			{
				"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_start_int",
				0.79432821,
				1
			};
			soundEngineOnExt[]=
			{
				"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_start_ext",
				1,
				1,
				500
			};
			soundEngineOffInt[]=
			{
				"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_stop_int",
				0.79432821,
				1
			};
			soundEngineOffExt[]=
			{
				"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_stop_ext",
				1,
				1,
				500
			};
			soundLocked[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_1",
				0.31622776,
				1
			};
			soundIncommingMissile[]=
			{
				"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4",
				0.39810717,
				1
			};
			soundGearUp[]=
			{
				"A3\Sounds_F_Exp\vehicles\air\VTOL_02\gear_up",
				0.79432821,
				1,
				150
			};
			soundGearDown[]=
			{
				"A3\Sounds_F_Exp\vehicles\air\VTOL_02\gear_down",
				0.79432821,
				1,
				150
			};
			soundFlapsUp[]=
			{
				"A3\Sounds_F_Exp\vehicles\air\VTOL_02\Flaps_Up",
				0.63095737,
				1,
				100
			};
			soundFlapsDown[]=
			{
				"A3\Sounds_F_Exp\vehicles\air\VTOL_02\Flaps_Down",
				0.63095737,
				1,
				100
			};
			emptySound[]=
			{
				"",
				0,
				1
			};
			soundGeneralCollision1[]=
			{
				"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
				1,
				1,
				100
			};
			soundGeneralCollision2[]=
			{
				"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
				1,
				1,
				100
			};
			soundGeneralCollision3[]=
			{
				"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
				1,
				1,
				100
			};
			soundBushCollision1[]=
			{
				"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
				1,
				1,
				100
			};
			soundBushCollision2[]=
			{
				"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
				1,
				1,
				100
			};
			soundBushCollision3[]=
			{
				"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
				1,
				1,
				100
			};
			soundBushCrash[]=
			{
				"soundBushCollision1",
				0.33000001,
				"soundBushCollision2",
				0.33000001,
				"soundBushCollision3",
				0.33000001
			};
			soundWaterCollision1[]=
			{
				"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",
				1.4125376,
				1,
				500
			};
			soundWaterCollision2[]=
			{
				"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",
				1.4125376,
				1,
				500
			};
			soundWaterCrashes[]=
			{
				"soundWaterCollision1",
				0.5,
				"soundWaterCollision2",
				0.5
			};
			rotorDamageInt[]=
			{
				"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",
				1,
				1
			};
			rotorDamageOut[]=
			{
				"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
				2.5118864,
				1,
				150
			};
			rotorDamage[]=
			{
				"rotorDamageInt",
				"rotorDamageOut"
			};
			tailDamageInt[]=
			{
				"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
				1,
				1
			};
			tailDamageOut[]=
			{
				"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
				1,
				1,
				300
			};
			tailDamage[]=
			{
				"tailDamageInt",
				"tailDamageOut"
			};
			landingSoundInt0[]=
			{
				"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
				1.7782794,
				1,
				200
			};
			landingSoundInt1[]=
			{
				"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
				1.7782794,
				1,
				200
			};
			landingSoundInt[]=
			{
				"landingSoundInt0",
				0.5,
				"landingSoundInt1",
				0.5
			};
			landingSoundOut0[]=
			{
				"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
				1.7782794,
				1,
				200
			};
			landingSoundOut1[]=
			{
				"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
				1.7782794,
				1,
				200
			};
			landingSoundOut[]=
			{
				"landingSoundOut0",
				0.5,
				"landingSoundOut1",
				0.5
			};
			buildCrash0[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
				3.1622777,
				1,
				900
			};
			buildCrash1[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
				3.1622777,
				1,
				900
			};
			buildCrash2[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
				3.1622777,
				1,
				900
			};
			buildCrash3[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
				3.1622777,
				1,
				900
			};
			soundBuildingCrash[]=
			{
				"buildCrash0",
				0.25,
				"buildCrash1",
				0.25,
				"buildCrash2",
				0.25,
				"buildCrash3",
				0.25
			};
			WoodCrash0[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
				3.1622777,
				1,
				900
			};
			WoodCrash1[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",
				3.1622777,
				1,
				900
			};
			WoodCrash2[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",
				3.1622777,
				1,
				900
			};
			WoodCrash3[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",
				3.1622777,
				1,
				900
			};
			soundWoodCrash[]=
			{
				"woodCrash0",
				0.25,
				"woodCrash1",
				0.25,
				"woodCrash2",
				0.25,
				"woodCrash3",
				0.25
			};
			armorCrash0[]=
			{
				"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_ext_1",
				3.1622777,
				1,
				900
			};
			armorCrash1[]=
			{
				"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_ext_2",
				3.1622777,
				1,
				900
			};
			armorCrash2[]=
			{
				"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_ext_3",
				3.1622777,
				1,
				900
			};
			soundArmorCrash[]=
			{
				"ArmorCrash0",
				0.33000001,
				"ArmorCrash1",
				0.33000001,
				"ArmorCrash2",
				0.34
			};
			Crash0[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
				3.1622777,
				1,
				900
			};
			Crash1[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
				3.1622777,
				1,
				900
			};
			Crash2[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
				3.1622777,
				1,
				900
			};
			Crash3[]=
			{
				"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
				3.1622777,
				1,
				900
			};
			soundCrashes[]=
			{
				"Crash0",
				0.25,
				"Crash1",
				0.25,
				"Crash2",
				0.25,
				"Crash3",
				0.25
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
				volume="(scrubLand factor[0.01, 0.20])";
			};
			class Sounds
			{
				class EngineLowOut
				{
					sound[]=
					{
						"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_idle_ext",
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
						"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_max_ext",
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
						1.4125376,
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
						"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_ext",
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
						"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_ext",
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
						0.56234133,
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
						"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_idle_int",
						0.63095737,
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
						"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_max_int",
						0.63095737,
						1.2,
						2500
					};
					frequency=1;
					volume="(1-camPos)*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
				};
				class ForsageInt
				{
					sound[]=
					{
						"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_forsage_int",
						0.79432821,
						1.2,
						2800
					};
					frequency="1";
					volume="engineOn*(1-camPos)*(thrust factor[0.4, 1.0])";
					cone[]={3.1400001,3.9200001,2,0.5};
				};
				class TurbineInt
				{
					sound[]=
					{
						"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_int",
						0.63095737,
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
						"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_int",
						0.63095737,
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
						1.7782794,
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
						0.56234133,
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
						1.9952624,
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
						0.50118721,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[60,80])";
				};
			};
	};

	class SW_VTOL_02_infantry_base_F: SW_VTOL_02_base_F
		{
			author="$STR_A3_Bohemia_Interactive";
			_generalMacro="VTOL_02_infantry_base_F";
			displayName="$STR_A3_CfgVehicles_VTOL_02_infantry_base_F0";
			scope=0;
			scopeCurator=0;
			DLC="Expansion";
			class Library
			{
				libTextDesc="$STR_A3_CfgVehicles_VTOL_02_infantry_base_F_Library0";
			};
			transportSoldier=14;
			getInProxyOrder[]={8,9,1,16,2,15,3,14,4,13,5,12,6,11,7,10};
			cargoProxyIndexes[]={1,2,3,4,5,6,7,10,11,12,13,14,15,16};
			class Turrets: Turrets
			{
				class GunnerTurret: GunnerTurret
				{
				};
				class CargoTurret_01: CargoTurret
				{
					gunnerAction="passenger_inside_2";
					gunnerCompartments="Compartment3";
					memoryPointsGetInGunner="GetIn_cargo_ffv_left_pos";
					memoryPointsGetInGunnerDir="GetIn_cargo_ffv_left_dir";
					gunnerName="$STR_A3_TURRETS_CARGOTURRET_L";
					proxyIndex=9;
					isPersonTurret=1;
					enabledByAnimationSource="Door_1_source";
					soundAttenuationTurret="HeliAttenuationRamp";
					LODTurnedIn=1200;
					LODTurnedOut=1200;
					LODOpticsIn=1200;
					LODOpticsOut=1200;
					disableSoundAttenuation=0;
					class TurnOut
					{
						limitsArrayTop[]=
						{
							{10.6151,-94.829498},
							{9.1303997,-73.657501},
							{-11.9946,-56.091999}
						};
						limitsArrayBottom[]=
						{
							{-30.122,-94.872704},
							{-26.914801,-75.683701},
							{-26.892099,-56.0434}
						};
					};
					class TurnIn: TurnOut
					{
					};
				};
				class CargoTurret_02: CargoTurret_01
				{
					memoryPointsGetInGunner="GetIn_cargo_ffv_right_pos";
					memoryPointsGetInGunnerDir="GetIn_cargo_ffv_right_dir";
					gunnerName="$STR_A3_TURRETS_CARGOTURRET_R";
					proxyIndex=8;
					class TurnOut
					{
						limitsArrayTop[]=
						{
							{-2.0250001,25.570801},
							{15.6257,39.387901},
							{18.1105,67.724899}
						};
						limitsArrayBottom[]=
						{
							{-19.7491,25.185699},
							{-19.2213,45.121601},
							{-20.604,66.847702}
						};
					};
					class TurnIn: TurnOut
					{
					};
				};
			};
			class UserActions
			{
				class Ramp_Open
				{
					userActionID=60;
					displayName="$STR_ACTION_RAMP_OPEN0";
					textToolTip="$STR_ACTION_RAMP_OPEN0";
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					position="";
					condition="this doorPhase 'Door_1_source' < 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2]])} && {((this getVariable ['bis_disabled_Ramp',0]) != 1)}";
					statement="this animateDoor ['Door_1_source', 1]";
					priority=1.5;
					radius=1.5;
					radiusView=0.2;
					showIn3D=17;
					available=0;
					showWindow=0;
					onlyForPlayer=1;
					shortcut="";
				};
				class Ramp_Close: Ramp_Open
				{
					userActionID=61;
					displayName="$STR_ACTION_RAMP_CLOSE0";
					textToolTip="$STR_ACTION_RAMP_CLOSE0";
					condition="this doorPhase 'Door_1_source' > 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2]])} && {((this getVariable ['bis_disabled_Ramp',0]) != 1)}";
					statement="this animateDoor ['Door_1_source', 0]";
				};
			};
			class TransportBackpacks
			{
				class _xx_B_Parachute
				{
					backpack="B_Parachute";
					count=18;
				};
			};
		};
	class SW_VTOL_02_infantry_dynamicLoadout_base_F: SW_VTOL_02_infantry_base_F
		{
			author="$STR_A3_Bohemia_Interactive";
			_generalMacro="VTOL_02_infantry_dynamicLoadout_base_F";
			class AnimationSources: AnimationSources
			{
				class HideWeapons
				{
					source="user";
					animPeriod=1e-006;
					initPhase=1;
				};
			};
			class Components: Components
			{
				class TransportPylonsComponent
				{
					uiPicture="\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
					class Pylons
					{
						class PylonRight1
						{
							attachment="6Rnd_LG_scalpel";
							priority=5;
							hardpoints[]=
							{
								"O_MISSILE_PYLON",
								"O_BOMB_PYLON",
								"UNI_SCALPEL"
							};
							turret[]={-1};
							UIposition[]={0.34999999,0.16};
						};
						class PylonRight2: PylonRight1
						{
							attachment="RD501_voltic_y_wing";
							priority=4;
							hardpoints[]=
							{
								"O_MISSILE_PYLON",
								"O_BOMB_PYLON",
								"UNI_SCALPEL"
							};
							UIposition[]={0.33000001,0.20999999};
						};
						class PylonLeft2: PylonRight2
						{
							mirroredMissilePos=2;
							UIposition[]={0.33000001,0.34};
						};
						class PylonLeft1: PylonRight1
						{
							mirroredMissilePos=1;
							UIposition[]={0.34999999,0.38999999};
						};
					};
					class presets
					{
						class Empty
						{
							displayName="$STR_empty";
							attachment[]={};
						};
						class Default
						{
							displayName="$STR_vehicle_default";
							attachment[]=
							{
								"6Rnd_LG_scalpel",
								"PylonRack_19Rnd_Rocket_Skyfire",
								"PylonRack_19Rnd_Rocket_Skyfire",
								"PylonRack_4Rnd_LG_scalpel"
							};
						};
					};
				};
			};
			class Turrets: Turrets
			{
				class GunnerTurret: GunnerTurret
				{
				};
				class CargoTurret_01: CargoTurret_01
				{
				};
				class CargoTurret_02: CargoTurret_02
				{
				};
			};
			class MFD
			{
				class AirplaneHUD
				{
					topLeft="HUD_top_left";
					topRight="HUD_top_right";
					bottomLeft="HUD_bottom_left";
					borderLeft=0;
					borderRight=0;
					borderTop=0;
					borderBottom=0;
					color[]={0.15000001,1,0.15000001,1};
					helmetMountedDisplay=1;
					helmetPosition[]={-0.037500001,0.037500001,0.1};
					helmetRight[]={0.075000003,0,0};
					helmetDown[]={0,-0.075000003,0};
					font="LucidaConsoleB";
					turret[]={-2};
					class Bones
					{
						class HUDCenter
						{
							type="fixed";
							pos[]={0.5,0.5};
						};
						class HorizonBankSource
						{
							type="rotational";
							source="HorizonBank";
							center[]={0.5,0.5};
							min=-6.2831001;
							max=6.2831001;
							minAngle=-360;
							maxAngle=360;
						};
						class HorizonDiveSource
						{
							source="horizonDive";
							type="linear";
							min=-1;
							max=1;
							minPos[]={0.5,2.5};
							maxPos[]={0.5,-1.5};
						};
						class VelocityVector
						{
							type="vector";
							source="velocityToView";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class ForwardVector
						{
							type="vector";
							source="forward";
							pos0[]={0,0};
							pos10[]={0.234,0.23};
						};
						class GunnerAim
						{
							type="vector";
							source="turret";
							pos0[]={0,-0.5};
							pos10[]={0.0068000001,-0.012};
							projection=0;
						};
						class WeaponAim
						{
							type="vector";
							source="weaponToView";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class TargetingPodDir
						{
							source="pilotcameratoview";
							type="vector";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class TargetingPodTarget
						{
							source="pilotcameratargettoview";
							type="vector";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class SliderDiveSource
						{
							type="linear";
							source="horizonDive";
							min="RAD(-10)";
							max="RAD(10)";
							minPos[]={0.105,0.38};
							maxPos[]={0.105,0.54000002};
						};
						class SliderDiveSource30: SliderDiveSource
						{
							min="RAD(10)";
							max="RAD(30)";
							minPos[]={0,-0.039999999};
							maxPos[]=
							{
								0,
								"0)"
							};
						};
						class SliderDiveSource90: SliderDiveSource30
						{
							min="RAD(30)";
							max="RAD(90)";
							minPos[]={0,-0.039999999};
						};
						class SliderDiveSource30m: SliderDiveSource
						{
							min="RAD(-30)";
							max="RAD(-10)";
							minPos[]={0,0};
							maxPos[]={0,0.039999999};
						};
						class SliderDiveSource90m: SliderDiveSource30m
						{
							min="RAD(-90)";
							max="RAD(-30)";
							maxPos[]={0,0.039999999};
						};
						class SliderAltitudeSource
						{
							type="linear";
							source="altitudeAGL";
							sourceOffset=-3;
							min=0;
							max=1000;
							minPos[]={0.88499999,0.2};
							maxPos[]={0.88499999,0.375};
						};
						class GForceSource
						{
							type="linear";
							source="gmeter";
							sourceScale=0.15000001;
							min=-1;
							max=3;
							minPos[]={0.105,0.69999999};
							maxPos[]={0.105,0.86000001};
						};
						class SliderVSpeedSource
						{
							type="linear";
							source="vspeed";
							min=-15;
							max=15;
							minPos[]={0.79500002,0.60000002};
							maxPos[]={0.79500002,0.83999997};
						};
						class ImpactPoint
						{
							type="vector";
							source="ImpactPointToView";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class ImpactPointRockets
						{
							type="vector";
							source="ImpactPointToView";
							pos0[]={0.5,0.565};
							pos10[]={0.73400003,0.79500002};
						};
						class WPPoint
						{
							type="vector";
							source="WPPointToView";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class rtdRPM1
						{
							type="linear";
							source="rpm";
							min=0.1;
							max=1;
							minPos[]={0,-0.075000003};
							maxPos[]={0,0};
						};
						class rtdRPM2: rtdRPM1
						{
							source="rpm";
						};
						class Limit0109
						{
							type="limit";
							limits[]={0.1,0.1,0.89999998,0.89999998};
						};
						class Target
						{
							source="targettoview";
							type="vector";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class ThrustVectoringRotation
						{
							type="rotational";
							source="vtolvectoring";
							sourceScale=100;
							center[]={0.059999999,0.145};
							min=0;
							max=100;
							minAngle=0;
							maxAngle=-90;
							aspectRatio=0.98290598;
						};
						class MissileFlightTimeRot1
						{
							type="rotational";
							source="MissileFlightTime";
							sourceScale=0.46000001;
							center[]={0,0};
							min=0;
							max=0.5;
							minAngle=0;
							maxAngle=18;
							aspectRatio=0.98290598;
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
						class HorizonBankRotFull
						{
							type="rotational";
							source="horizonBank";
							center[]={0,0};
							min=-3.1415999;
							max=3.1415999;
							minAngle=-180;
							maxAngle=180;
							aspectRatio=1;
						};
						class Airport1
						{
							type="vector";
							source="airportCorner1toview";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
						};
						class Airport2: Airport1
						{
							source="airportCorner2toview";
						};
						class Airport3: Airport1
						{
							source="airportCorner3toview";
						};
						class Airport4: Airport1
						{
							source="airportCorner4toview";
						};
						class ILS_H
						{
							type="ils";
							pos0[]={0.5,0.5};
							pos3[]={0.57020003,0.5};
						};
						class ILS_W: ILS_H
						{
							pos3[]={0.5,0.56900001};
						};
					};
					class Draw
					{
						alpha="user3";
						color[]=
						{
							"user0",
							"user1",
							"user2"
						};
						condition="(1 - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37))*on";
						class VelocityLine
						{
							type="line";
							width=2;
							points[]=
							{
								
								{
									"HUDCenter",
									1
								},
								
								{
									"VelocityVector",
									1
								},
								{},
								
								{
									"VelocityVector",
									{0,-0.0049145301},
									1
								},
								
								{
									"VelocityVector",
									{0.0024999999,-0.0042559798},
									1
								},
								
								{
									"VelocityVector",
									{0.0043299999,-0.0024572599},
									1
								},
								
								{
									"VelocityVector",
									{0.0049999999,0},
									1
								},
								
								{
									"VelocityVector",
									{0.0043299999,0.0024572599},
									1
								},
								
								{
									"VelocityVector",
									{0.0024999999,0.0042559798},
									1
								},
								
								{
									"VelocityVector",
									{0,0.0049145301},
									1
								},
								
								{
									"VelocityVector",
									{-0.0024999999,0.0042559798},
									1
								},
								
								{
									"VelocityVector",
									{-0.0043299999,0.0024572599},
									1
								},
								
								{
									"VelocityVector",
									{-0.0049999999,0},
									1
								},
								
								{
									"VelocityVector",
									{-0.0043299999,-0.0024572599},
									1
								},
								
								{
									"VelocityVector",
									{-0.0024999999,-0.0042559798},
									1
								},
								
								{
									"VelocityVector",
									{0,-0.0049145301},
									1
								},
								{}
							};
						};
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.015,0.0099999998},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0,0},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.015,-0.0099999998},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.015,0.0099999998},
									1
								},
								{},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.029999999,0.015},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.088,0.015},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.088,-0.015},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.029999999,-0.015},
									1
								},
								
								{
									"SliderDiveSource90",
									1,
									"SliderDiveSource30",
									1,
									"SliderDiveSource",
									1,
									"SliderDiveSource30m",
									1,
									"SliderDiveSource90m",
									1,
									{0.029999999,0.015},
									1
								},
								{},
								
								{
									{0.1,0.30000001},
									1
								},
								
								{
									{0.1,0.62},
									1
								},
								{},
								
								{
									{0.1,0.30000001},
									1
								},
								
								{
									{0.079999998,0.30000001},
									1
								},
								{},
								
								{
									{0.1,0.34},
									1
								},
								
								{
									{0.079999998,0.34},
									1
								},
								{},
								
								{
									{0.1,0.38},
									1
								},
								
								{
									{0.079999998,0.38},
									1
								},
								{},
								
								{
									{0.1,0.46000001},
									1
								},
								
								{
									{0.079999998,0.46000001},
									1
								},
								{},
								
								{
									{0.1,0.54000002},
									1
								},
								
								{
									{0.079999998,0.54000002},
									1
								},
								{},
								
								{
									{0.1,0.57999998},
									1
								},
								
								{
									{0.079999998,0.57999998},
									1
								},
								{},
								
								{
									{0.1,0.62},
									1
								},
								
								{
									{0.079999998,0.62},
									1
								},
								{},
								
								{
									"GForceSource",
									{0.015,0.0099999998},
									1
								},
								
								{
									"GForceSource",
									{0,0},
									1
								},
								
								{
									"GForceSource",
									{0.015,-0.0099999998},
									1
								},
								
								{
									"GForceSource",
									{0.015,0.0099999998},
									1
								},
								{},
								
								{
									{0.1,0.68800002},
									1
								},
								
								{
									{0.1,0.81999999},
									1
								},
								{},
								
								{
									{0.1,0.69999999},
									1
								},
								
								{
									{0.079999998,0.69999999},
									1
								},
								{},
								
								{
									{0.1,0.74000001},
									1
								},
								
								{
									{0.079999998,0.74000001},
									1
								},
								{},
								
								{
									{0.1,0.77999997},
									1
								},
								
								{
									{0.079999998,0.77999997},
									1
								},
								{},
								
								{
									{0.1,0.81999999},
									1
								},
								
								{
									{0.079999998,0.81999999},
									1
								},
								{},
								
								{
									{0.40000001,0.86000001},
									1
								},
								
								{
									{0.40000001,0.94},
									1
								},
								
								{
									{0.60000002,0.94},
									1
								},
								
								{
									{0.60000002,0.86000001},
									1
								},
								
								{
									{0.40000001,0.86000001},
									1
								},
								{},
								
								{
									{0.40000001,0.89200002},
									1
								},
								
								{
									{0.40799999,0.89200002},
									1
								},
								{},
								
								{
									{0.60000002,0.89200002},
									1
								},
								
								{
									{0.59200001,0.89200002},
									1
								},
								{},
								
								{
									{0.5,0.86000001},
									1
								},
								
								{
									{0.5,0.86799997},
									1
								},
								{},
								
								{
									{0.5,0.94},
									1
								},
								
								{
									{0.5,0.93199998},
									1
								},
								{},
								
								{
									{0.46000001,0.07},
									1
								},
								
								{
									{0.54000002,0.07},
									1
								},
								
								{
									{0.54000002,0.035},
									1
								},
								
								{
									{0.46000001,0.035},
									1
								},
								
								{
									{0.46000001,0.07},
									1
								},
								{},
								
								{
									{0.15000001,0.115},
									1
								},
								
								{
									{0.85000002,0.115},
									1
								},
								{},
								
								{
									{0,0.95999998},
									1
								},
								
								{
									{1.1,0.95999998},
									1
								},
								{},
								
								{
									{0.47999999,0.5},
									1
								},
								
								{
									{0.49000001,0.5},
									1
								},
								{},
								
								{
									{0.50999999,0.5},
									1
								},
								
								{
									{0.51999998,0.5},
									1
								},
								{},
								
								{
									{0.5,0.49000001},
									1
								},
								
								{
									{0.5,0.47999999},
									1
								},
								{},
								
								{
									{0.5,0.50999999},
									1
								},
								
								{
									{0.5,0.51999998},
									1
								},
								{},
								
								{
									"WeaponAim",
									1,
									{-0.02,0},
									1
								},
								
								{
									"WeaponAim",
									1,
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									1,
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									1,
									{0.02,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									1,
									{0,-0.0099999998},
									1
								},
								
								{
									"WeaponAim",
									1,
									{0,-0.02},
									1
								},
								{},
								
								{
									"WeaponAim",
									1,
									{0,0.0099999998},
									1
								},
								
								{
									"WeaponAim",
									1,
									{0,0.02},
									1
								},
								{},
								
								{
									"HUDCenter",
									{-0.16500001,7.0890902e-009},
									1
								},
								
								{
									"HUDCenter",
									{-0.22,9.45212e-009},
									1
								},
								{},
								
								{
									"HUDCenter",
									{0.16500001,-1.9339701e-009},
									1
								},
								
								{
									"HUDCenter",
									{0.22,-2.57863e-009},
									1
								},
								{},
								
								{
									"HUDCenter",
									{-0.082500003,0.140452},
									1
								},
								
								{
									"HUDCenter",
									{-0.096249998,0.16385999},
									1
								},
								{},
								
								{
									"HUDCenter",
									{0.082500003,0.140452},
									1
								},
								
								{
									"HUDCenter",
									{0.096249998,0.16385999},
									1
								},
								{},
								
								{
									"HUDCenter",
									{-0.142894,0.081089698},
									1
								},
								
								{
									"HUDCenter",
									{-0.16671,0.094604701},
									1
								},
								{},
								
								{
									"HUDCenter",
									{0.142894,0.081089698},
									1
								},
								
								{
									"HUDCenter",
									{0.16671,0.094604701},
									1
								},
								{},
								
								{
									"HUDCenter",
									{-0.116673,0.114678},
									1
								},
								
								{
									"HUDCenter",
									{-0.155564,0.152904},
									1
								},
								{},
								
								{
									"HUDCenter",
									{0.116673,0.114678},
									1
								},
								
								{
									"HUDCenter",
									{0.155563,0.152904},
									1
								},
								{},
								
								{
									{0.033333302,0.14866699},
									1
								},
								
								{
									{0.054000001,0.162},
									1
								},
								
								{
									{0.13500001,0.162},
									1
								},
								
								{
									{0.13500001,0.14866699},
									1
								},
								
								{
									{0.126333,0.139667},
									1
								},
								
								{
									{0.118,0.139667},
									1
								},
								
								{
									{0.093333296,0.129333},
									1
								},
								
								{
									{0.033333302,0.129333},
									1
								},
								
								{
									{0.015666701,0.111},
									1
								},
								
								{
									{0.0086666699,0.115333},
									1
								},
								
								{
									{0.0116667,0.13600001},
									1
								},
								{}
							};
						};
						class Gunner
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"GunnerAim",
									{0.48500001,0.89200002},
									1
								},
								
								{
									"GunnerAim",
									{0.48500001,0.90799999},
									1
								},
								
								{
									"GunnerAim",
									{0.51499999,0.90799999},
									1
								},
								
								{
									"GunnerAim",
									{0.51499999,0.89200002},
									1
								},
								
								{
									"GunnerAim",
									{0.48500001,0.89200002},
									1
								}
							};
						};
						class DiveNumber
						{
							type="text";
							source="horizondive";
							sourceScale=57.29578;
							sourceOffset=0;
							align="left";
							scale=1;
							pos[]=
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								
								{
									0.085000001,
									"0.00-0.011"
								},
								1
							};
							right[]=
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								
								{
									0.12,
									"0.00-0.011"
								},
								1
							};
							down[]=
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								
								{
									0.085000001,
									"0.03-0.011"
								},
								1
							};
						};
						class VSpeedGroup
						{
							condition="on";
							class VSpeedNumber
							{
								type="text";
								source="vspeed";
								sourceScale=1;
								align="center";
								scale=1;
								pos[]=
								{
									
									{
										"0.82+0.07",
										0.72799999
									},
									1
								};
								right[]=
								{
									
									{
										"0.86+0.07",
										0.72799999
									},
									1
								};
								down[]=
								{
									
									{
										"0.82+0.07",
										0.76300001
									},
									1
								};
							};
							class Static
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										{0.84899998,0.75999999},
										1
									},
									
									{
										{0.92900002,0.75999999},
										1
									},
									
									{
										{0.92900002,0.72500002},
										1
									},
									
									{
										{0.84899998,0.72500002},
										1
									},
									
									{
										{0.84899998,0.75999999},
										1
									},
									{}
								};
							};
						};
						class VSpeedGroupUp
						{
							condition="vspeed";
							class Static
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										{0.86900002,0.71499997},
										1
									},
									
									{
										{0.90899998,0.71499997},
										1
									},
									
									{
										{0.889,0.69499999},
										1
									},
									
									{
										{0.86900002,0.71499997},
										1
									},
									{}
								};
							};
						};
						class VSpeedGroupDown
						{
							condition="-vspeed";
							class Static
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										{0.86900002,0.76999998},
										1
									},
									
									{
										{0.90899998,0.76999998},
										1
									},
									
									{
										{0.889,0.79000002},
										1
									},
									
									{
										{0.86900002,0.76999998},
										1
									},
									{}
								};
							};
						};
						class AltGroup
						{
							condition="1000 - altitudeAGL";
							class Static
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"SliderAltitudeSource",
										{0.024,0.0099999998},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.0089999996,0},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.024,-0.0099999998},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.024,0.0099999998},
										1
									},
									{},
									
									{
										"SliderAltitudeSource",
										{0.035,0.015},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.093000002,0.015},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.093000002,-0.015},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.035,-0.015},
										1
									},
									
									{
										"SliderAltitudeSource",
										{0.035,0.015},
										1
									},
									{},
									
									{
										{0.889,0.2},
										1
									},
									
									{
										{0.889,0.375},
										1
									},
									{},
									
									{
										{0.87900001,0.2},
										1
									},
									
									{
										{0.89899999,0.2},
										1
									},
									{},
									
									{
										{0.87900001,0.375},
										1
									},
									
									{
										{0.89899999,0.375},
										1
									},
									{}
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-3;
								align="left";
								scale=1;
								pos[]=
								{
									"SliderAltitudeSource",
									
									{
										0.085000001,
										"0.00-0.011"
									},
									1
								};
								right[]=
								{
									"SliderAltitudeSource",
									
									{
										0.11,
										"0.00-0.011"
									},
									1
								};
								down[]=
								{
									"SliderAltitudeSource",
									
									{
										0.085000001,
										"0.03-0.011"
									},
									1
								};
							};
							class AltStatic50
							{
								type="text";
								source="static";
								text="1000";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.88499999,0.171},
									1
								};
								right[]=
								{
									{0.92500001,0.171},
									1
								};
								down[]=
								{
									{0.88499999,0.20100001},
									1
								};
							};
						};
						class SpeedNumber
						{
							type="text";
							source="speed";
							sourceScale=3.5999999;
							sourceLength=3;
							align="left";
							scale=1;
							pos[]=
							{
								{0.13,0.22},
								1
							};
							down[]=
							{
								{0.13,0.25999999},
								1
							};
							right[]=
							{
								{0.2,0.22},
								1
							};
						};
						class Angle_90
						{
							type="text";
							source="static";
							text="90";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.285},
								1
							};
							right[]=
							{
								{0.11,0.285},
								1
							};
							down[]=
							{
								{0.07,0.315},
								1
							};
						};
						class Angle_30
						{
							type="text";
							source="static";
							text="30";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.32499999},
								1
							};
							right[]=
							{
								{0.11,0.32499999},
								1
							};
							down[]=
							{
								{0.07,0.35499999},
								1
							};
						};
						class Angle_10
						{
							type="text";
							source="static";
							text="10";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.36500001},
								1
							};
							right[]=
							{
								{0.11,0.36500001},
								1
							};
							down[]=
							{
								{0.07,0.39500001},
								1
							};
						};
						class Angle_0
						{
							type="text";
							source="static";
							text="0";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.44499999},
								1
							};
							right[]=
							{
								{0.11,0.44499999},
								1
							};
							down[]=
							{
								{0.07,0.47499999},
								1
							};
						};
						class Angle_10m
						{
							type="text";
							source="static";
							text="-10";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.52499998},
								1
							};
							right[]=
							{
								{0.11,0.52499998},
								1
							};
							down[]=
							{
								{0.07,0.55500001},
								1
							};
						};
						class Angle_30m
						{
							type="text";
							source="static";
							text="-30";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.565},
								1
							};
							right[]=
							{
								{0.11,0.565},
								1
							};
							down[]=
							{
								{0.07,0.59500003},
								1
							};
						};
						class Angle_90m
						{
							type="text";
							source="static";
							text="-90";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.60500002},
								1
							};
							right[]=
							{
								{0.11,0.60500002},
								1
							};
							down[]=
							{
								{0.07,0.63499999},
								1
							};
						};
						class GMeterStatic3
						{
							type="text";
							source="static";
							text="3";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.68300003},
								1
							};
							right[]=
							{
								{0.11,0.68300003},
								1
							};
							down[]=
							{
								{0.07,0.713},
								1
							};
						};
						class GMeterStatic2
						{
							type="text";
							source="static";
							text="2";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.72299999},
								1
							};
							right[]=
							{
								{0.11,0.72299999},
								1
							};
							down[]=
							{
								{0.07,0.75300002},
								1
							};
						};
						class GMeterStatic1
						{
							type="text";
							source="static";
							text="1";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.76300001},
								1
							};
							right[]=
							{
								{0.11,0.76300001},
								1
							};
							down[]=
							{
								{0.07,0.79299998},
								1
							};
						};
						class GMeterStatic0
						{
							type="text";
							source="static";
							text="0";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.07,0.80299997},
								1
							};
							right[]=
							{
								{0.11,0.80299997},
								1
							};
							down[]=
							{
								{0.07,0.833},
								1
							};
						};
						class CollectiveNumber
						{
							type="text";
							source="throttle";
							sourceScale=100;
							align="left";
							scale=1;
							pos[]=
							{
								{0.889,0.46000001},
								1
							};
							right[]=
							{
								{0.93900001,0.46000001},
								1
							};
							down[]=
							{
								{0.889,0.495},
								1
							};
						};
						class CollectiveText
						{
							type="text";
							source="static";
							text="%";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.89899999,0.46000001},
								1
							};
							right[]=
							{
								{0.949,0.46000001},
								1
							};
							down[]=
							{
								{0.89899999,0.495},
								1
							};
						};
						class ThrustVectoring
						{
							condition="1+vtolvectoring";
							class VectorigNumber
							{
								type="text";
								source="vtolvectoring";
								sourceScale=90;
								align="left";
								scale=1;
								pos[]=
								{
									{0.102,0.14},
									1
								};
								right[]=
								{
									{0.127,0.14},
									1
								};
								down[]=
								{
									{0.102,0.155},
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
							class VectorigNumber
							{
								type="text";
								source="static";
								sourceScale=1;
								text="AUTO";
								align="left";
								scale=1;
								pos[]=
								{
									{0.103,0.14},
									1
								};
								right[]=
								{
									{0.123,0.14},
									1
								};
								down[]=
								{
									{0.103,0.155},
									1
								};
							};
						};
						class EngineRPM
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.88999999,0.5},
									1
								},
								
								{
									{0.88999999,0.66000003},
									1
								},
								{},
								
								{
									{0.92000002,0.5},
									1
								},
								
								{
									{0.86000001,0.5},
									1
								},
								{},
								
								{
									{0.92000002,0.66000003},
									1
								},
								
								{
									{0.86000001,0.66000003},
									1
								},
								{},
								
								{
									{0.91000003,0.54000002},
									1
								},
								
								{
									{0.87,0.54000002},
									1
								},
								{},
								
								{
									{0.91000003,0.57999998},
									1
								},
								
								{
									{0.87,0.57999998},
									1
								},
								{},
								
								{
									{0.91000003,0.62},
									1
								},
								
								{
									{0.87,0.62},
									1
								},
								{}
							};
						};
						class EngineRPMLines
						{
							type="line";
							width=5;
							points[]=
							{
								
								{
									
									{
										"0.90+0.01",
										0.66000003
									},
									1
								},
								
								{
									"rtdrpm1",
									
									{
										"0.90+0.01",
										0.66000003
									},
									1
								},
								{},
								
								{
									
									{
										"0.86+0.01",
										0.66000003
									},
									1
								},
								
								{
									"rtdrpm2",
									
									{
										"0.86+0.01",
										0.66000003
									},
									1
								},
								{},
								{}
							};
						};
						class RPM60Text
						{
							type="text";
							source="static";
							text="60";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.92500001,0.64499998},
								1
							};
							right[]=
							{
								{0.95499998,0.64499998},
								1
							};
							down[]=
							{
								{0.92500001,0.67000002},
								1
							};
						};
						class RPM80Text
						{
							type="text";
							source="static";
							text="80";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.92500001,0.60500002},
								1
							};
							right[]=
							{
								{0.95499998,0.60500002},
								1
							};
							down[]=
							{
								{0.92500001,0.63},
								1
							};
						};
						class RPM100Text
						{
							type="text";
							source="static";
							text="100";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.92500001,0.565},
								1
							};
							right[]=
							{
								{0.95499998,0.565},
								1
							};
							down[]=
							{
								{0.92500001,0.58999997},
								1
							};
						};
						class RPM120Text
						{
							type="text";
							source="static";
							text="120";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.92500001,0.52499998},
								1
							};
							right[]=
							{
								{0.95499998,0.52499998},
								1
							};
							down[]=
							{
								{0.92500001,0.55000001},
								1
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
								
								{
									"0.80-0.302",
									"0.082-0.043"
								},
								1
							};
							right[]=
							{
								
								{
									"0.84-0.302",
									"0.082-0.043"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.117-0.043"
								},
								1
							};
						};
						class HeadingRotationArrow
						{
							condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
							class HeadingArrow
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										{0.51999998,0.079999998},
										1
									},
									
									{
										{0.5,0.11},
										1
									},
									
									{
										{0.47999999,0.079999998},
										1
									},
									
									{
										{0.51999998,0.079999998},
										1
									},
									{}
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
										"0.082+0.001"
									},
									1
								};
								right[]=
								{
									
									{
										"0.83-0.302",
										"0.082+0.001"
									},
									1
								};
								down[]=
								{
									
									{
										"0.80-0.302",
										"0.113+0.001"
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
										{0.47799999,0.075000003},
										1
									},
									
									{
										{0.52200001,0.075000003},
										1
									},
									
									{
										{0.55199999,0.094999999},
										1
									},
									
									{
										{0.52200001,0.115},
										1
									},
									
									{
										{0.47799999,0.115},
										1
									},
									
									{
										{0.44800001,0.094999999},
										1
									},
									
									{
										{0.47799999,0.075000003},
										1
									},
									{}
								};
							};
						};
						class HeadingScale
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=0.1;
							sourceoffset=0;
							width=3;
							NeverEatSeaWeed=1;
							top=0.15000001;
							center=0.5;
							bottom=0.85000002;
							lineXleft=0.114;
							lineYright=0.12;
							lineXleftMajor=0.114;
							lineYrightMajor=0.13;
							majorLineEach=2;
							numberEach=6;
							step=0.5;
							stepSize=0.034482799;
							align="center";
							scale=1;
							pos[]={0.15000001,0.13};
							right[]={0.20999999,0.13};
							down[]={0.15000001,0.17};
						};
						class HorizonBanking
						{
							type="line";
							width=3;
							clipTL[]={0,0.1};
							clipBR[]={1,0.89999998};
							points[]=
							{
								
								{
									"HorizonBankSource",
									{0.16,0},
									1
								},
								
								{
									"HorizonBankSource",
									{0.1,0},
									1
								},
								
								{
									"HorizonBankSource",
									{0.085000001,-0.015},
									1
								},
								
								{
									"HorizonBankSource",
									{0.07,0},
									1
								},
								
								{
									"HorizonBankSource",
									{0.050000001,0},
									1
								},
								{},
								
								{
									"HorizonBankSource",
									{-0.16,0},
									1
								},
								
								{
									"HorizonBankSource",
									{-0.1,0},
									1
								},
								
								{
									"HorizonBankSource",
									{-0.085000001,-0.015},
									1
								},
								
								{
									"HorizonBankSource",
									{-0.07,0},
									1
								},
								
								{
									"HorizonBankSource",
									{-0.050000001,0},
									1
								},
								{}
							};
						};
						class CoordXNumber
						{
							type="text";
							source="coordinateX";
							sourceScale=0.0099999998;
							sourceLength=3;
							sourceOffset=-0.5;
							align="right";
							scale=1;
							pos[]=
							{
								{0.80900002,0.96100003},
								1
							};
							right[]=
							{
								{0.85900003,0.96100003},
								1
							};
							down[]=
							{
								{0.80900002,0.99599999},
								1
							};
						};
						class CoordYNumber: CoordXNumber
						{
							source="coordinateY";
							pos[]=
							{
								{0.89899999,0.96100003},
								1
							};
							right[]=
							{
								{0.949,0.96100003},
								1
							};
							down[]=
							{
								{0.89899999,0.99599999},
								1
							};
						};
						class Time: CoordXNumber
						{
							source="time";
							text="%X";
							align="left";
							pos[]=
							{
								{0.60500002,0.96100003},
								1
							};
							right[]=
							{
								{0.65499997,0.96100003},
								1
							};
							down[]=
							{
								{0.60500002,0.99599999},
								1
							};
						};
						class CurrentWeapon
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.97899997,0.889},
								1
							};
							right[]=
							{
								{1.029,0.889},
								1
							};
							down[]=
							{
								{0.97899997,0.92400002},
								1
							};
						};
						class CurrentAmmo: CurrentWeapon
						{
							source="ammo";
							align="left";
							pos[]=
							{
								{0.97899997,0.921},
								1
							};
							right[]=
							{
								{1.029,0.921},
								1
							};
							down[]=
							{
								{0.97899997,0.95599997},
								1
							};
						};
						class CoordXText
						{
							type="text";
							source="static";
							text="GRID:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.65499997,0.96100003},
								1
							};
							right[]=
							{
								{0.70499998,0.96100003},
								1
							};
							down[]=
							{
								{0.65499997,0.99599999},
								1
							};
						};
						class CoordYText
						{
							type="text";
							source="static";
							text="";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.875,0.96100003},
								1
							};
							right[]=
							{
								{0.92500001,0.96100003},
								1
							};
							down[]=
							{
								{0.875,0.99599999},
								1
							};
						};
						class LightsGroup
						{
							condition="lights";
							class LightsText
							{
								type="text";
								source="static";
								text="LIGHT";
								align="left";
								scale=1;
								pos[]=
								{
									{0.149,0.96100003},
									1
								};
								right[]=
								{
									{0.199,0.96100003},
									1
								};
								down[]=
								{
									{0.149,0.99599999},
									1
								};
							};
						};
						class CollisionLights
						{
							condition="collisionlights";
							class CollisionLightsText
							{
								type="text";
								source="static";
								text="COLL";
								align="left";
								scale=1;
								pos[]=
								{
									{0.30899999,0.96100003},
									1
								};
								right[]=
								{
									{0.359,0.96100003},
									1
								};
								down[]=
								{
									{0.30899999,0.99599999},
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
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"TargetingPodDir",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"TargetingPodDir",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.0212132,-0.020850601},
										1
									},
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
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										1,
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class WeaponsLocking
						{
							condition="missilelocking";
							blinkingPattern[]={0.2,0.2};
							blinkingStartsOn=1;
							class Text
							{
								type="text";
								source="static";
								text="LOCKING";
								align="center";
								scale=1;
								pos[]=
								{
									{0.215,0.87970102},
									1
								};
								right[]=
								{
									{0.27500001,0.87970102},
									1
								};
								down[]=
								{
									{0.215,0.928846},
									1
								};
							};
						};
						class TargetInfo
						{
							condition="missilelocked";
							class TargetLockedText
							{
								type="text";
								source="static";
								text="TARGET ACQUIRED";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.19499999,0.85900003},
									1
								};
								right[]=
								{
									{0.235,0.85900003},
									1
								};
								down[]=
								{
									{0.19499999,0.88999999},
									1
								};
							};
							class TimeOfFlightText
							{
								type="text";
								source="static";
								text="TOF:";
								scale=1;
								sourceScale=1;
								align="left";
								pos[]=
								{
									
									{
										"0.127+0.13",
										0.889
									},
									1
								};
								right[]=
								{
									{0.30199999,0.889},
									1
								};
								down[]=
								{
									
									{
										"0.127+0.13",
										0.92400002
									},
									1
								};
							};
							class DistanceText
							{
								type="text";
								source="static";
								text="DISTANCE:";
								scale=1;
								sourceScale=1;
								align="left";
								pos[]=
								{
									
									{
										"0.125+0.13",
										0.921
									},
									1
								};
								right[]=
								{
									{0.30000001,0.921},
									1
								};
								down[]=
								{
									
									{
										"0.125+0.13",
										0.95599997
									},
									1
								};
							};
							class TOF_source: CurrentWeapon
							{
								source="missileflighttime";
								align="right";
								pos[]=
								{
									{0.26899999,0.889},
									1
								};
								right[]=
								{
									{0.31900001,0.889},
									1
								};
								down[]=
								{
									{0.26899999,0.92400002},
									1
								};
							};
							class TargetDistance: CurrentWeapon
							{
								source="targetDist";
								sourceLength=0;
								sourcePrecision=1;
								sourceScale=0.001;
								align="right";
								pos[]=
								{
									{0.26899999,0.921},
									1
								};
								right[]=
								{
									{0.31900001,0.921},
									1
								};
								down[]=
								{
									{0.26899999,0.95599997},
									1
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
									{0.48500001,0.21623901},
									1
								};
								right[]=
								{
									{0.54500002,0.21623901},
									1
								};
								down[]=
								{
									{0.48500001,0.265385},
									1
								};
							};
						};
						class GearGroup
						{
							type="group";
							condition="ils";
							class GearText
							{
								type="text";
								source="static";
								text="GEAR";
								align="center";
								scale=1;
								pos[]=
								{
									{0.5,0.82564098},
									1
								};
								right[]=
								{
									{0.54000002,0.82564098},
									1
								};
								down[]=
								{
									{0.5,0.85512799},
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
								class ILS
								{
									type="line";
									points[]=
									{
										
										{
											"ILS_W",
											{-0.23999999,0},
											1
										},
										
										{
											"ILS_W",
											{0.23999999,0},
											1
										},
										{},
										
										{
											"ILS_W",
											{-0.23999999,-0.0235897},
											1
										},
										
										{
											"ILS_W",
											{-0.23999999,0.0235897},
											1
										},
										{},
										
										{
											"ILS_W",
											{-0.12,-0.0176923},
											1
										},
										
										{
											"ILS_W",
											{-0.12,0.0176923},
											1
										},
										{},
										
										{
											"ILS_W",
											{0,-0.0235897},
											1
										},
										
										{
											"ILS_W",
											{0,0.0235897},
											1
										},
										{},
										
										{
											"ILS_W",
											{0.12,-0.0176923},
											1
										},
										
										{
											"ILS_W",
											{0.12,0.0176923},
											1
										},
										{},
										
										{
											"ILS_W",
											{0.23999999,-0.0235897},
											1
										},
										
										{
											"ILS_W",
											{0.23999999,0.0235897},
											1
										},
										{},
										
										{
											"ILS_H",
											{0,-0.235897},
											1
										},
										
										{
											"ILS_H",
											{0,0.235897},
											1
										},
										{},
										
										{
											"ILS_H",
											{-0.024,-0.235897},
											1
										},
										
										{
											"ILS_H",
											{0.024,-0.235897},
											1
										},
										{},
										
										{
											"ILS_H",
											{-0.017999999,-0.117949},
											1
										},
										
										{
											"ILS_H",
											{0.017999999,-0.117949},
											1
										},
										{},
										
										{
											"ILS_H",
											{-0.024,0},
											1
										},
										
										{
											"ILS_H",
											{0.024,0},
											1
										},
										{},
										
										{
											"ILS_H",
											{-0.017999999,0.117949},
											1
										},
										
										{
											"ILS_H",
											{0.017999999,0.117949},
											1
										},
										{},
										
										{
											"ILS_H",
											{-0.024,0.235897},
											1
										},
										
										{
											"ILS_H",
											{0.024,0.235897},
											1
										}
									};
								};
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
						class MGun
						{
							condition="-2+mgun*ImpactDistance";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"ImpactPoint",
										{0,-0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0393162},
										1
									},
									{},
									
									{
										"ImpactPoint",
										{0.02,-0.024},
										1
									},
									
									{
										"ImpactPoint",
										{0.025,-0.030999999},
										1
									},
									{},
									
									{
										"ImpactPoint",
										{0,-0.0020000001},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0020000001},
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
							class Circle
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"ImpactPoint",
										{0,-0.0275214},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0344017},
										1
									},
									
									{
										"MissileFlightTimeRot1",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot2",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot3",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot4",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot5",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot6",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot7",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot8",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot9",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot10",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot11",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot12",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot13",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot14",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot15",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot16",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot17",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot18",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot19",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot20",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot20",
										{0,0.028000001},
										1,
										"ImpactPoint",
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
										"ImpactPoint",
										{0,-0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{0.0052080001,-0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0.01026,-0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{0.015,-0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{0.019284001,-0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{0.022980001,-0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{0.025979999,-0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{0.028191,-0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{0.029544,-0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{0.029999999,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.029544,0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{0.028191,0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{0.025979999,0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{0.022980001,0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{0.019284001,0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{0.015,0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{0.01026,0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{0.0052080001,0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0052080001,0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01026,0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{-0.015,0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{-0.019284001,0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{-0.022980001,0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{-0.025979999,0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{-0.028191,0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029544,0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029999999,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029544,-0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.028191,-0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{-0.025979999,-0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{-0.022980001,-0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{-0.019284001,-0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{-0.015,-0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01026,-0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0052080001,-0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0294872},
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
									{-0.0020000001,-0.079999998},
									1
								};
								right[]=
								{
									"ImpactPoint",
									{0.045000002,-0.079999998},
									1
								};
								down[]=
								{
									"ImpactPoint",
									{-0.0020000001,-0.039999999},
									1
								};
							};
						};
						class Rockets
						{
							condition="-2+rocket*ImpactDistance";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"ImpactPoint",
										{0,-0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0393162},
										1
									},
									{},
									
									{
										"ImpactPoint",
										{0.02,-0.024},
										1
									},
									
									{
										"ImpactPoint",
										{0.025,-0.030999999},
										1
									},
									{},
									
									{
										"ImpactPoint",
										{0,-0.0020000001},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0020000001},
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
							class Circle
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"ImpactPoint",
										{0,-0.0275214},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0344017},
										1
									},
									
									{
										"MissileFlightTimeRot1",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot2",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot3",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot4",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot5",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot6",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot7",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot8",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot9",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot10",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot11",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot12",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot13",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot14",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot15",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot16",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot17",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot18",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot19",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot20",
										{0,0.035},
										1,
										"ImpactPoint",
										1
									},
									
									{
										"MissileFlightTimeRot20",
										{0,0.028000001},
										1,
										"ImpactPoint",
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
										"ImpactPoint",
										{0,-0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{0.0052080001,-0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0.01026,-0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{0.015,-0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{0.019284001,-0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{0.022980001,-0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{0.025979999,-0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{0.028191,-0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{0.029544,-0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{0.029999999,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.029544,0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{0.028191,0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{0.025979999,0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{0.022980001,0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{0.019284001,0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{0.015,0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{0.01026,0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{0.0052080001,0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0294872},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0052080001,0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01026,0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{-0.015,0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{-0.019284001,0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{-0.022980001,0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{-0.025979999,0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{-0.028191,0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029544,0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029999999,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.029544,-0.0051189698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.028191,-0.0100846},
										1
									},
									
									{
										"ImpactPoint",
										{-0.025979999,-0.0147436},
										1
									},
									
									{
										"ImpactPoint",
										{-0.022980001,-0.0189544},
										1
									},
									
									{
										"ImpactPoint",
										{-0.019284001,-0.022587201},
										1
									},
									
									{
										"ImpactPoint",
										{-0.015,-0.0255359},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01026,-0.0277091},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0052080001,-0.029038999},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0294872},
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
									{-0.0020000001,-0.079999998},
									1
								};
								right[]=
								{
									"ImpactPoint",
									{0.045000002,-0.079999998},
									1
								};
								down[]=
								{
									"ImpactPoint",
									{-0.0020000001,-0.039999999},
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
								type="line";
								width=4;
								points[]=
								{
									
									{
										"ImpactPoint",
										{0,-0.0982906},
										1
									},
									
									{
										"ImpactPoint",
										{0.01736,-0.096796602},
										1
									},
									
									{
										"ImpactPoint",
										{0.034200002,-0.0923637},
										1
									},
									
									{
										"ImpactPoint",
										{0.050000001,-0.085119702},
										1
									},
									
									{
										"ImpactPoint",
										{0.064280003,-0.075290598},
										1
									},
									
									{
										"ImpactPoint",
										{0.0766,-0.063181199},
										1
									},
									
									{
										"ImpactPoint",
										{0.086599998,-0.0491453},
										1
									},
									
									{
										"ImpactPoint",
										{0.093970001,-0.033615399},
										1
									},
									
									{
										"ImpactPoint",
										{0.098480001,-0.0170632},
										1
									},
									
									{
										"ImpactPoint",
										{0.1,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.098480001,0.0170632},
										1
									},
									
									{
										"ImpactPoint",
										{0.093970001,0.033615399},
										1
									},
									
									{
										"ImpactPoint",
										{0.086599998,0.0491453},
										1
									},
									
									{
										"ImpactPoint",
										{0.0766,0.063181199},
										1
									},
									
									{
										"ImpactPoint",
										{0.064280003,0.075290598},
										1
									},
									
									{
										"ImpactPoint",
										{0.050000001,0.085119702},
										1
									},
									
									{
										"ImpactPoint",
										{0.034200002,0.0923637},
										1
									},
									
									{
										"ImpactPoint",
										{0.01736,0.096796602},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0982906},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01736,0.096796602},
										1
									},
									
									{
										"ImpactPoint",
										{-0.034200002,0.0923637},
										1
									},
									
									{
										"ImpactPoint",
										{-0.050000001,0.085119702},
										1
									},
									
									{
										"ImpactPoint",
										{-0.064280003,0.075290598},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0766,0.063181199},
										1
									},
									
									{
										"ImpactPoint",
										{-0.086599998,0.0491453},
										1
									},
									
									{
										"ImpactPoint",
										{-0.093970001,0.033615399},
										1
									},
									
									{
										"ImpactPoint",
										{-0.098480001,0.0170632},
										1
									},
									
									{
										"ImpactPoint",
										{-0.1,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.098480001,-0.0170632},
										1
									},
									
									{
										"ImpactPoint",
										{-0.093970001,-0.033615399},
										1
									},
									
									{
										"ImpactPoint",
										{-0.086599998,-0.0491453},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0766,-0.063181199},
										1
									},
									
									{
										"ImpactPoint",
										{-0.064280003,-0.075290598},
										1
									},
									
									{
										"ImpactPoint",
										{-0.050000001,-0.085119702},
										1
									},
									
									{
										"ImpactPoint",
										{-0.034200002,-0.0923637},
										1
									},
									
									{
										"ImpactPoint",
										{-0.01736,-0.096796602},
										1
									},
									
									{
										"ImpactPoint",
										{0,-0.0982906},
										1
									},
									{},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0,-0.0196581},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0.014,-0.0137607},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										
										{
											"+ 0.02",
											0
										},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0.014,0.0137607},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0,0.0196581},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{-0.014,0.0137607},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										
										{
											"- 0.02",
											0
										},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{-0.014,-0.0137607},
										1
									},
									
									{
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0,-0.0196581},
										1
									},
									{},
									
									{
										"VelocityVector",
										0.001,
										"ImpactPoint",
										1,
										"Limit0109",
										1,
										{0,0},
										1
									},
									
									{
										"VelocityVector",
										1,
										"Limit0109",
										1,
										{0,0},
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
						class WP
						{
							condition="wpvalid";
							class WPdist
							{
								type="text";
								source="wpdist";
								sourceScale=0.001;
								sourcePrecision=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.935,0.79713702},
									1
								};
								right[]=
								{
									{0.97500002,0.79713702},
									1
								};
								down[]=
								{
									{0.935,0.83448702},
									1
								};
							};
							class WPstatic
							{
								type="text";
								source="static";
								text=">";
								align="center";
								scale=2;
								pos[]=
								{
									{0.94999999,0.79713702},
									1
								};
								right[]=
								{
									{0.97000003,0.79713702},
									1
								};
								down[]=
								{
									{0.94999999,0.83448702},
									1
								};
							};
							class WPIndex
							{
								type="text";
								source="wpIndex";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.95999998,0.79713702},
									1
								};
								right[]=
								{
									{1,0.79713702},
									1
								};
								down[]=
								{
									{0.95999998,0.83448702},
									1
								};
							};
							class WP
							{
								width=1;
								type="line";
								points[]=
								{
									
									{
										"wppoint",
										1,
										
										{
											"HorizonBankRotFull",
											0.015,
											-0.035
										},
										1
									},
									
									{
										"wppoint",
										1,
										
										{
											"HorizonBankRotFull",
											0,
											0
										},
										1
									},
									
									{
										"wppoint",
										1,
										
										{
											"HorizonBankRotFull",
											-0.015,
											-0.035
										},
										1
									}
								};
							};
						};
						class RadarBoxes
						{
							type="radartoview";
							pos0[]={0.5,0.5};
							pos10[]={0.73400003,0.73000002};
							width=2;
							points[]=
							{
								
								{
									{-0.0020000001,-0.0019658101},
									1
								},
								
								{
									{0.0020000001,-0.0019658101},
									1
								},
								
								{
									{0.0020000001,0.0019658101},
									1
								},
								
								{
									{-0.0020000001,0.0019658101},
									1
								},
								
								{
									{-0.0020000001,-0.0019658101},
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
										{0.02,0.0196581},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{-0.02,0.0196581},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{-0.02,-0.0196581},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{0.02,-0.0196581},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{0.02,0.0196581},
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
										{0,-0.0294872},
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
										{0,0.0294872},
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
										{0,-0.0294872},
										1
									}
								};
							};
						};
					};
				};
				class HMD_CMPilot: AirplaneHUD
				{
					turret[]={-1};
					class Draw
					{
						alpha="user3";
						color[]=
						{
							"user0",
							"user1",
							"user2"
						};
						condition="(1 - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37))*on";
						class CMName
						{
							type="text";
							source="cmweapon";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.86900002,0.84899998},
								1
							};
							right[]=
							{
								{0.91900003,0.84899998},
								1
							};
							down[]=
							{
								{0.86900002,0.884},
								1
							};
						};
						class CMCount
						{
							type="text";
							source="cmammo";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.97899997,0.84899998},
								1
							};
							right[]=
							{
								{1.029,0.84899998},
								1
							};
							down[]=
							{
								{0.97899997,0.884},
								1
							};
						};
					};
				};
				class MFD_2
				{
					topLeft="MFD_2_TL";
					topRight="MFD_2_TR";
					bottomLeft="MFD_2_BL";
					borderLeft=0;
					borderRight=0;
					borderTop=0.1;
					borderBottom=0;
					color[]={0.15000001,1,0.15000001,1};
					enableParallax=0;
					font="LucidaConsoleB";
					class Bones
					{
						class Center
						{
							type="fixed";
							pos[]={0.28,0.64999998};
						};
					};
					class Draw
					{
						alpha=1;
						color[]={0.15000001,1,0.15000001,1};
						condition="on";
						class Pylon1
						{
							type="pylonicon";
							pos[]=
							{
								"Center",
								{0.11,0},
								1
							};
							pylon=1;
							name="VTOL_02";
						};
						class Pylon2: Pylon1
						{
							pos[]=
							{
								"Center",
								{0.046,0},
								1
							};
							pylon=2;
						};
						class Pylon3: Pylon1
						{
							pos[]=
							{
								"Center",
								{-0.046,0},
								1
							};
							pylon=3;
						};
						class Pylon4: Pylon1
						{
							pos[]=
							{
								"Center",
								{-0.11,0},
								1
							};
							pylon=4;
						};
						class Gatling_Ammo
						{
							type="text";
							source="ammo";
							sourceIndex=0;
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.28,0.57999998},
								1
							};
							right[]=
							{
								{0.30700001,0.57999998},
								1
							};
							down[]=
							{
								{0.28,0.60799998},
								1
							};
						};
					};
				};
				class MFD_5
				{
					topLeft="MFD_5_TL";
					topRight="MFD_5_TR";
					bottomLeft="MFD_5_BL";
					borderLeft=0;
					borderRight=0;
					borderTop=0.1;
					borderBottom=0;
					color[]={0.15000001,1,0.15000001,1};
					enableParallax=0;
					font="LucidaConsoleB";
					class Bones
					{
						class Center
						{
							type="fixed";
							pos[]={0.28,0.64999998};
						};
					};
					class Draw
					{
						alpha=1;
						color[]={0.15000001,1,0.15000001,1};
						condition="on";
						class Pylon1
						{
							type="pylonicon";
							pos[]=
							{
								"Center",
								{0.11,0},
								1
							};
							pylon=1;
							name="VTOL_02";
						};
						class Pylon2: Pylon1
						{
							pos[]=
							{
								"Center",
								{0.046,0},
								1
							};
							pylon=2;
						};
						class Pylon3: Pylon1
						{
							pos[]=
							{
								"Center",
								{-0.046,0},
								1
							};
							pylon=3;
						};
						class Pylon4: Pylon1
						{
							pos[]=
							{
								"Center",
								{-0.11,0},
								1
							};
							pylon=4;
						};
						class Gatling_Ammo
						{
							type="text";
							source="ammo";
							sourceIndex=0;
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.28,0.57999998},
								1
							};
							right[]=
							{
								{0.30700001,0.57999998},
								1
							};
							down[]=
							{
								{0.28,0.60799998},
								1
							};
						};
					};
				};
			};
		};
	class SW_Project_Dragon: SW_VTOL_02_infantry_dynamicLoadout_base_F
		{
		author="Mutt";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damage_hide",
					0
				},
				
				{
					"glass_1",
					0
				},
				
				{
					"glass_2",
					0
				},
				
				{
					"glass_3",
					0
				},
				
				{
					"glass_4",
					0
				},
				
				{
					"glass_5",
					0
				},
				
				{
					"glass_6",
					0
				},
				
				{
					"glass_7",
					0
				},
				
				{
					"glass_8",
					0
				},
				
				{
					"glass_9",
					0
				},
				
				{
					"glass_10",
					0
				},
				
				{
					"glass_11",
					0
				},
				
				{
					"glass_12",
					0
				},
				
				{
					"glass_13",
					0
				},
				
				{
					"glass_14",
					0
				},
				
				{
					"glass_15",
					0
				},
				
				{
					"glass_16",
					0
				},
				
				{
					"glass_17",
					0
				},
				
				{
					"glass_18",
					0
				},
				
				{
					"glass_19",
					0
				},
				
				{
					"glass_20",
					0
				},
				
				{
					"cannon_barrel_hide",
					0
				},
				
				{
					"rotor_1_blur_hide",
					0
				},
				
				{
					"rotor_1_static_hide",
					0
				},
				
				{
					"rotor_2_blur_hide",
					0
				},
				
				{
					"rotor_2_static_hide",
					0
				},
				
				{
					"engine_1_1_rot",
					1
				},
				
				{
					"engine_1_2_rot",
					1
				},
				
				{
					"engine_2_1_rot",
					1
				},
				
				{
					"engine_2_2_rot",
					1
				},
				
				{
					"stator_1_rudder_rot",
					0
				},
				
				{
					"stator_1_elevator_rot",
					0
				},
				
				{
					"rotor_1_rot",
					0
				},
				
				{
					"stator_2_rudder_rot",
					0
				},
				
				{
					"stator_2_elevator_rot",
					0
				},
				
				{
					"rotor_2_rot",
					0
				},
				
				{
					"gear_1_rot",
					0
				},
				
				{
					"gear_2_move",
					0
				},
				
				{
					"gear_3_move",
					0
				},
				
				{
					"gear_1_hatch_1_rot",
					0
				},
				
				{
					"gear_1_hatch_2_rot",
					0
				},
				
				{
					"gear_1_hatch_3_rot",
					0
				},
				
				{
					"gear_2_hatch_1_rot",
					0
				},
				
				{
					"gear_2_hatch_2_rot",
					0
				},
				
				{
					"gear_3_hatch_1_rot",
					0
				},
				
				{
					"gear_3_hatch_2_rot",
					0
				},
				
				{
					"wheel_1_rot",
					0
				},
				
				{
					"wheel_2_rot",
					0
				},
				
				{
					"wheel_3_rot",
					0
				},
				
				{
					"gear_1_damper_move",
					0.54000002
				},
				
				{
					"gear_1_damper_rotate",
					0.54000002
				},
				
				{
					"gear_1_link_1_rotate",
					0.54000002
				},
				
				{
					"gear_1_link_2_rotate",
					0.54000002
				},
				
				{
					"gear_2_damper_move",
					1
				},
				
				{
					"gear_3_damper_move",
					0.99000001
				},
				
				{
					"door_1_rot",
					0
				},
				
				{
					"cargoseats_hide",
					0
				},
				
				{
					"display_off_hide",
					0
				},
				
				{
					"positionlights_hide",
					0
				},
				
				{
					"cannon_turret_rot",
					0
				},
				
				{
					"cannon_rot",
					0.090000004
				},
				
				{
					"cannon_muzzleflash_hide",
					0
				},
				
				{
					"cannon_barrel_move",
					1
				},
				
				{
					"rotor_1_hide",
					0
				},
				
				{
					"rotor_1_unhide",
					0
				},
				
				{
					"rotor_2_hide",
					0
				},
				
				{
					"rotor_2_unhide",
					0
				},
				
				{
					"avionics_damage",
					0
				},
				
				{
					"stick_control_1_pitch_rot",
					0
				},
				
				{
					"stick_control_2_pitch_rot",
					0
				},
				
				{
					"stick_control_1_roll_rot",
					0
				},
				
				{
					"stick_control_2_roll_rot",
					0
				},
				
				{
					"pedals_1_left_1_move",
					0
				},
				
				{
					"pedals_1_right_1_move",
					0
				},
				
				{
					"pedals_1_left_2_rot",
					0
				},
				
				{
					"pedals_1_right_2_rot",
					0
				},
				
				{
					"pedals_2_left_1_move",
					0
				},
				
				{
					"pedals_2_right_1_move",
					0
				},
				
				{
					"pedals_2_left_2_rot",
					0
				},
				
				{
					"pedals_2_right_2_rot",
					0
				},
				
				{
					"display_1_alt_ladder_rot",
					8.1599998
				},
				
				{
					"display_1_alt_1_rot",
					8.1599998
				},
				
				{
					"display_1_alt_10_rot",
					8.1599998
				},
				
				{
					"display_1_alt_100_rot",
					8.1599998
				},
				
				{
					"display_1_alt_1000_rot",
					8.1599998
				},
				
				{
					"display_1_compass_rot",
					0
				},
				
				{
					"display_1_fuel_move",
					1
				},
				
				{
					"display_1_gear_down_move",
					0
				},
				
				{
					"display_1_gear_up_move",
					0
				},
				
				{
					"display_1_horizon_bank_rot",
					0
				},
				
				{
					"display_1_horizon_move",
					0
				},
				
				{
					"display_1_hydraulics_1_rot",
					0
				},
				
				{
					"display_1_hydraulics_2_rot",
					0
				},
				
				{
					"display_1_oil_1_rot",
					1
				},
				
				{
					"display_1_oil_2_rot",
					1
				},
				
				{
					"display_1_oil_3_rot",
					1
				},
				
				{
					"display_1_oil_4_rot",
					1
				},
				
				{
					"display_1_oil_5_rot",
					1
				},
				
				{
					"display_1_oil_6_rot",
					1
				},
				
				{
					"display_1_pitch_rot",
					0
				},
				
				{
					"display_1_roll_rot",
					0
				},
				
				{
					"display_1_yaw_rot",
					0
				},
				
				{
					"display_1_rpm_1_rot",
					0
				},
				
				{
					"display_1_rpm_2_rot",
					0
				},
				
				{
					"display_1_speed_ladder_rot",
					0
				},
				
				{
					"display_1_speed_1_rot",
					0
				},
				
				{
					"display_1_speed_10_rot",
					0
				},
				
				{
					"display_1_speed_100_rot",
					0
				},
				
				{
					"display_1_vert_speed_rot",
					0
				},
				
				{
					"display_1_voltage_1_rot",
					0
				},
				
				{
					"display_1_voltage_2_rot",
					0
				},
				
				{
					"display_1_vtol_1_rot",
					1
				},
				
				{
					"display_1_vtol_2_rot",
					1
				},
				
				{
					"display_2_alt_ladder_rot",
					8.1599998
				},
				
				{
					"display_2_alt_1_rot",
					8.1599998
				},
				
				{
					"display_2_alt_10_rot",
					8.1599998
				},
				
				{
					"display_2_alt_100_rot",
					8.1599998
				},
				
				{
					"display_2_alt_1000_rot",
					8.1599998
				},
				
				{
					"display_2_compass_rot",
					0
				},
				
				{
					"display_2_fuel_move",
					1
				},
				
				{
					"display_2_horizon_bank_rot",
					0
				},
				
				{
					"display_2_horizon_move",
					0
				},
				
				{
					"display_2_oil_1_rot",
					1
				},
				
				{
					"display_2_oil_2_rot",
					1
				},
				
				{
					"display_2_speed_ladder_rot",
					0
				},
				
				{
					"display_2_speed_1_rot",
					0
				},
				
				{
					"display_2_speed_10_rot",
					0
				},
				
				{
					"display_2_speed_100_rot",
					0
				},
				
				{
					"display_2_vert_speed_rot",
					0
				},
				
				{
					"display_2_vtol_1_rot",
					1
				},
				
				{
					"display_2_vtol_2_rot",
					1
				},
				
				{
					"display_at_1_hide",
					1
				},
				
				{
					"display_at_2_hide",
					1
				},
				
				{
					"display_at_3_hide",
					1
				},
				
				{
					"display_at_4_hide",
					1
				},
				
				{
					"display_at_5_hide",
					1
				},
				
				{
					"display_at_6_hide",
					1
				},
				
				{
					"display_at_7_hide",
					1
				},
				
				{
					"display_at_8_hide",
					1
				},
				
				{
					"display_mg_ammo_1_hide",
					1
				},
				
				{
					"display_mg_ammo_2_hide",
					1
				},
				
				{
					"display_mg_ammo_3_hide",
					1
				},
				
				{
					"display_mg_ammo_4_hide",
					1
				},
				
				{
					"display_mg_ammo_5_hide",
					1
				},
				
				{
					"display_mg_ammo_6_hide",
					1
				},
				
				{
					"display_mg_ammo_7_hide",
					1
				},
				
				{
					"display_mg_ammo_8_hide",
					1
				},
				
				{
					"display_mg_ammo_9_hide",
					1
				},
				
				{
					"display_mg_ammo_10_hide",
					1
				},
				
				{
					"display_rocketspod_1_empty_hide",
					1
				},
				
				{
					"display_rocketspod_2_empty_hide",
					1
				},
				
				{
					"rocketb19_hide",
					1
				},
				
				{
					"rocketa19_hide",
					1
				},
				
				{
					"rocketb18_hide",
					1
				},
				
				{
					"rocketa18_hide",
					1
				},
				
				{
					"rocketb17_hide",
					1
				},
				
				{
					"rocketa17_hide",
					1
				},
				
				{
					"rocketb16_hide",
					1
				},
				
				{
					"rocketa16_hide",
					1
				},
				
				{
					"rocketb15_hide",
					1
				},
				
				{
					"rocketa15_hide",
					1
				},
				
				{
					"rocketb14_hide",
					1
				},
				
				{
					"rocketa14_hide",
					1
				},
				
				{
					"rocketb13_hide",
					1
				},
				
				{
					"rocketa13_hide",
					1
				},
				
				{
					"rocketb12_hide",
					1
				},
				
				{
					"rocketa12_hide",
					1
				},
				
				{
					"rocketb11_hide",
					1
				},
				
				{
					"rocketa11_hide",
					1
				},
				
				{
					"rocketb10_hide",
					1
				},
				
				{
					"rocketa10_hide",
					1
				},
				
				{
					"rocketb9_hide",
					1
				},
				
				{
					"rocketa9_hide",
					1
				},
				
				{
					"rocketb8_hide",
					1
				},
				
				{
					"rocketa8_hide",
					1
				},
				
				{
					"rocketb6_hide",
					1
				},
				
				{
					"rocketa6_hide",
					1
				},
				
				{
					"rocketb5_hide",
					1
				},
				
				{
					"rocketa5_hide",
					1
				},
				
				{
					"rocketb4_hide",
					1
				},
				
				{
					"rocketa4_hide",
					1
				},
				
				{
					"rocketb3_hide",
					1
				},
				
				{
					"rocketa3_hide",
					1
				},
				
				{
					"rocketb2_hide",
					1
				},
				
				{
					"rocketa2_hide",
					1
				},
				
				{
					"rocketb7_hide",
					1
				},
				
				{
					"rocketa7_hide",
					1
				},
				
				{
					"rocketb1_hide",
					1
				},
				
				{
					"rocketa1_hide",
					1
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"cannon_muzzleflash",
				"light_1_hide",
				"light_2_hide",
				"light_3_hide",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=3.1600001;
			verticalOffsetWorld=-0.035;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		armor = 500;
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_VTOL_02_infantry_dynamicLoadout_F.jpg";
		_generalMacro="O_T_VTOL_02_infantry_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		displayName="Experimental Dragonfly VTOL";
		side=1;
		faction="Republic_101st";
		crew="101st_Pilot_212th";
		ace_cargo_space = 400;
		ace_cargo_hasCargo = 1;
		airBrakeFrictionCoef =			40;
		crewCrashProtection =			0.001;
		maxSpeed = 						1800;
		draconicForceZCoef=				.001;
		altFullForce=					3000;
		altNoForce=						15000;
		lightOnGear=					1;
		textureList[]={"Doom", 1};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\textures\VTOL\Vtol_Ext01_CO.paa",
			"101st_Aux_Mod\Addons\textures\VTOL\Vtol_Ext02_CO.paa",
			"101st_Aux_Mod\Addons\textures\VTOL\Vtol_Ext03L_CO.paa",
			"101st_Aux_Mod\Addons\textures\VTOL\Vtol_Ext03R_CO.paa"
		};
		weapons[]={
			"RD501_voltic_y_wing",
			"RD501_wynd_ugm",
			"RD501_backflip_aa",
			"CMFlareLauncher"
		};
		magazines[]={
			"RD501_voltic_x200_mag",
			"RD501_voltic_x200_mag",
			"RD501_voltic_x200_mag",
			"RD501_voltic_x200_mag",
			"RD501_ugm_x10_mag",
			"RD501_ugm_x10_mag",
			"RD501_ugm_x10_mag",
			"RD501_ugm_x10_mag",
			"RD501_backflip_x8_mag",
			"300Rnd_CMFlare_CHaff_Magazine"
		};
		soundEngineOffExt[] = {"UWING\UWING_ENGOFF.ogg",1,1,500};
		soundEngineOffInt[] = {"UWING\UWING_ENGOFF.ogg",0.5,1};
		soundEngineOnExt[] = {"\UWING\UWING_ENGON.ogg",1,1,500};
		soundEngineOnInt[] = {"\UWING\UWING_ENGON.ogg",0.5,1};
		availableForSupportTypes[] = {"Drop","Transport","CAS_Heli"};
		class Sounds
		{
			class EngineHighInt
			{
				frequency = 1;
				sound[] = {"Uwing\UWING_ENG.ogg",1,1.2};
				volume = "(1-camPos)*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class EngineHighOut
			{
				frequency = 1;
				sound[] = {"Uwing\UWING_ENG.ogg",1,1.2};
				volume = "camPos*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class EngineLowInt 
			{
				frequency = "1.0 min (rpm + 0.5)";
				sound[] = {"Uwing\UWING_ENG.ogg",1,1};
				volume = "(1-camPos)*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineLowOut
			{
				frequency = "1.0 min (rpm + 0.5)";
				sound[] = {"Uwing\UWING_ENG.ogg",1,1};
				volume = "camPos*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class ForsageInt
			{
				cone[] = {3.14,3.92,2,0.5};
				frequency = "rotorSpeed * 0.5";
				sound[] = {"Uwing\uwing_forsagenew.ogg",0.5,0.5};
				volume = "engineOn*(1-camPos)*(thrust factor[0.4, 1.0])";
			};
			class ForsageOut
			{
				cone[] = {3.14,3.92,2,0.5};
				frequency = "rotorSpeed * 0.5";
				sound[] = {"Uwing\uwing_forsagenew.ogg",0.5,0.5};
				volume = "engineOn*camPos*(thrust factor[0.4, 1.0])";
			};
			class RainExt 
			{
				frequency = 1;
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.77828,1,100};
				volume = "camPos * rain * (speed factor[50, 0])";
			};
			class RainInt 
			{
				frequency = 1;
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				volume = "(1-camPos) * rain * (speed factor[50, 0])";
			};
			class TurbineHighInt 
			{
				frequency = "1.7 * (rpm factor[-5,1])";
				sound[] = {"Uwing\UWING_ENG.ogg",2,1.2,3000};
				volume = "0.2 * (1-camPos) * (rpm factor[-1,1]) * (rpm factor[0, 0.4])";
			};
			class TurbineHighOut 
			{
				volume = "(1-camPos) * 2 * rpm * thrust * (rpm factor[0, 0.4])";
				sound[] = {"Uwing\UWING_ENG.ogg",1.5,1,2500};
				volume = "0.2 * camPos * (rpm factor[-1,1]) * (rpm factor[0, 0.4])";
			};
			class TurbineInt
			{
				sound[] = {"Uwing\uwing_forsagenew.ogg",1,1,3000};
				volume = "(1-camPos)  * rpm * thrust * (rpm factor[0, 0.4])";
			};
			class TurbineOut
			{
				frequency = "rpm * (thrust/4 + 0.5)";
				sound[] = {"Uwing\uwing_forsagenew.ogg",1,1,3000};
				volume = "camPos * rpm * thrust * (rpm factor[0, 0.4])";
			};
			class WindInt
			{
				frequency = 1;
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.562341,1,50};
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class WindNoiseOut 
			{
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				sound[] = {"Uwing\uwing_windext.ogg",1,1,1500};
				volume = "camPos*(speed factor[1, 150])";
			};
		};	
		class TransportMagazines
		{
			class _xx_RD501_DC15s_x60_mag
			{
				magazine="RD501_DC15s_x60_mag";
				count=10;
			};
			class _xx_RD501_DC15a_LE_x15_mag
			{
				magazine="RD501_DC15a_LE_x15_mag";
				count=10;
			};
			class _xx_RD501_z6_x400_mag
			{
				magazine="RD501_z6_x400_mag";
				count=4;
			};
			class _xx_RD501_RPS_AT_x1_mag
			{
				magazine="RD501_RPS_AT_x1_mag";
				count=4;
			};
			class _xx_RD501_DC15a_Med_x30_mag
			{
				magazine="RD501_DC15a_Med_x30_mag";
				count=40;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};
	class 101st_Mandalorian_Ship : SW_Project_Dragon
	{
		displayName="Experimental Mandalorian VTOL";
		model="101st_Aux_Mod\Addons\Vehicles\Mandalorian\Mandalorian.p3d";
	};*/
	
	/*class 101st_NR99_Droid_Tank: Tank_F
	{
		ace_cargo_space = 400;
		author="Dutch";
		side=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		displayName="101st NR-N99 Snail Tank";
		model="101st_Aux_Mod\Addons\Vehicles\NRN99\NRN99.p3d";
		picture="\A3\armor_f_gamma\MBT_02\Data\UI\MBT_02_Base_ca.paa";
		icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		dlc = "101st_Aux_Mod";
		faction="Republic_101st";
		editorSubcategory = "EdSubcat_Tanks";
		driver="B_UAV_AI";
		crew="B_UAV_AI";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\Vehicles\NRN99\data\SnailTank_CO.paa"
		};
		canFloat=1;
		destrType = "DestructDefault";
		waterPPInVehicle=0;
		waterResistanceCoef=0.07;
		waterLeakiness=2.5;
		waterSpeedFactor=0.5;
		waterAngularDampingCoef=5;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=0.5;
		maxFordingDepth=0.5;
		waterResistance=1;
		simulation="tankX";
		enginePower=500;
		maxOmega=276;
		peakTorque=4832;
		maxspeed=58;
		torqueCurve[]=
		{
			{0,0},
			
			{
				"(1600/2640)",
				"(2650/2850)"
			},
			
			{
				"(1800/2640)",
				"(2800/2850)"
			},
			
			{
				"(1900/2640)",
				"(2850/2850)"
			},
			
			{
				"(2000/2640)",
				"(2800/2850)"
			},
			
			{
				"(2200/2640)",
				"(2750/2850)"
			},
			
			{
				"(2400/2640)",
				"(2600/2850)"
			},
			
			{
				"(2640/2640)",
				"(2350/2850)"
			}
		};
		thrustDelay=0.1;
		clutchStrength=180;
		fuelCapacity=1885;
		brakeIdleSpeed=1.78;
		latency=0.1;
		tankTurnForce=600000;
		idleRpm=700;
		redRpm=2640;
		engineLosses=25;
		transmissionLosses=15;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R2",
				-3.9000001,
				"N",
				0,
				"D1",
				4.6999998,
				"D2",
				3.5,
				"D3",
				2.5999999,
				"D4",
				2,
				"D5",
				1.5,
				"D6",
				1.125,
				"D7",
				0.85000002
			};
			TransmissionRatios[]=
			{
				"High",
				15
			};
			gearBoxMode="full-auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				damping=75;
				steering=0;
				side="left";
				weight=150;
				mass=150;
				MOI=25;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=40000;
				sprungMass=4000;
				springStrength=324000;
				springDamperRate=36000;
				dampingRate=1;
				dampingRateInAir=8830;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
		};
		cost=1500000;
		damageResistance=0.02;
		crewVulnerable=1;
		armor=2500;
		armorStructural=6;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.80000001;
				material=-1;
				name="hitpoint_hull";
				visual="_hull";
				passThrough=1;
				minimalHit=0.14;
				explosionShielding=2;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=1;
				material=-1;
				name="hitpoint_engine";
				passThrough=0.80000001;
				minimalHit=0.23999999;
				explosionShielding=1;
				radius=0.33000001;
			};
			class HitFuel: HitFuel
			{
				armor=1;
				material=-1;
				name="hitpoints_fuel";
				passThrough=0.80000001;
				minimalHit=0.23999999;
				explosionShielding=1;
				radius=0.33000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				name="hitpoint_track_l";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				name="hitpoint_track_r";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"RD501_aat_cannon_mbt","Cannon_ITTLaser"};
				memoryPointGun[]=
				{
					"usti hlavne 1",
					"usti hlavne 2"
				};
				magazines[] = {"RD501_aat_mbt_x50_mag","RD501_aat_mbt_x50_mag","RD501_aat_mbt_x50_mag","RD501_aat_mbt_x50_mag","10000Rnd_ITTLaser_Cannon_Minigun"};
				turretInfoType = "RscOptics_crows";
				animationSourceBody = "Mainturret";
				Body = "Mainturret";
				animationSourceGun = "Maingun";
				Gun = "Maingun";
				optics = 0;
				minElev = -5;
				maxElev = 35;
				minTurn = -360;
				maxTurn = +360;
				selectionFireAnim = "zasleh";
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				memoryPointGunnerOptics = "gunnerview";
				//gunnerLeftHandAnimName = "Heavygun";
				//gunnerRightHandAnimName = "Heavygun";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnerForceOptics = 1;
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class HitPoints
				{
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "gun";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun
					{
						armor = 1;
						name = "turret";
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
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				memoryPointGunnerOutOptics="commanderview";
				memoryPointGunnerOptics="commanderview";
				minElev=-10;
				maxElev=30;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minCamElev=-90;
				maxCamElev=90;
				weapons[]=
				{
					"SmokeLauncher"
				};
				magazines[]=
				{
					"SmokeLauncherMag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				gunnerAction="Commander_APC_tracked_01_crv_out";
				gunnerInAction="Commander_APC_tracked_01_crv_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				turretInfoType="RscWeaponRangeFinder";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerforceoptics=0;
				usePip=1;
				animationSourceStickX="com_turret_control_x";
				animationSourceStickY="com_turret_control_y";
				gunnerLeftHandAnimName="com_turret_control";
				turretFollowFreeLook=2;
				LODOpticsIn=0;
				LODTurnedIn=1100;
				LODTurnedOut=1;
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				gunnerOutOpticsModel="";
				gunnerOpticsEffect[]={};
				class ViewGunner: ViewCargo
				{
					initAngleX=-6;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class ViewOptics: ViewOptics
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
					thermalMode[]={2,3};
				};
				startEngine=0;
				stabilizedInAxes=3;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				viewGunnerInExternal=1;
				showCrewAim=1;
				gunAxis="turret_left_axis";
				class HitPoints
				{
					class HitComTurret
					{
						armor=0.1;
						material=-1;
						armorComponent="hit_com_turret";
						name="hit_com_turret_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=1;
						radius=0.15000001;
						isTurret=1;
					};
					class HitComGun
					{
						armor=0.1;
						material=-1;
						armorComponent="hit_com_gun";
						name="hit_com_gun_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=1;
						radius=0.15000001;
						isGun=1;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
					{
					};
				};
			};
		};
		class RenderTargets
		{
			class gunner_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="pip1_pos";
					pointDirection="pip1_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
			};
			class driver_display
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="pip2_pos";
					pointDirection="pip2_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[]={-1};
				};
			};
		};
		soundGetIn[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1,
			20
		};
		soundTurnIn[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			0.8,
			1,
			20
		};
		soundTurnOut[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			0.8,
			1,
			20
		};
		soundTurnInInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			0.8,
			1,
			20
		};
		soundTurnOutInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			0.8,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Int_Start",
			0.79432797,
			1
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Int_Stop",
			0.79432797,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Ext_Start",
			0.8,
			1,
			100
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Ext_Stop",
			0.8,
			1,
			100
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
			0.63095701,
			1,
			100
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
			0.63095701,
			1,
			100
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
			0.63095701,
			1,
			100
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.33000001,
			"BushCrash2",
			0.33000001,
			"BushCrash3",
			0.33000001
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.16599999,
			"buildCrash1",
			0.16599999,
			"buildCrash2",
			0.16599999,
			"buildCrash3",
			0.16599999,
			"buildCrash4",
			0.16599999,
			"buildCrash5",
			0.16599999
		};
		woodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		woodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		woodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		woodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		woodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		woodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		ArmorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		ArmorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.16599999,
			"ArmorCrash1",
			0.16599999,
			"ArmorCrash2",
			0.16599999,
			"ArmorCrash3",
			0.16599999,
			"ArmorCrash4",
			0.16599999,
			"ArmorCrash5",
			0.16599999
		};
		class Sounds
		{
			soundSetsInt[]=
			{
				"APC_Tracked_03_Engine_RPM0_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM1_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM2_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM3_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM4_INT_SoundSet",
				"APC_Tracked_03_Engine_INT_Burst_SoundSet",
				"APC_Tracked_03_Tracks_01_INT_SoundSet",
				"APC_Tracked_03_Tracks_02_INT_SoundSet",
				"APC_Tracked_03_Tracks_03_INT_SoundSet",
				"APC_Tracked_03_Tracks_04_INT_SoundSet",
				"APC_Tracked_03_Tracks_05_INT_SoundSet",
				"APC_Tracked_03_Tracks_06_INT_SoundSet",
				"APC_Tracked_03_Interior_Tone_Engine_Off_SoundSet",
				"APC_Tracked_03_Interior_Tone_Engine_On_SoundSet",
				"APC_Tracked_03_Rattling_INT_SoundSet",
				"APC_Tracked_03_Stress_INT_SoundSet",
				"APC_Tracked_03_Rain_INT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Hard_INT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Soft_INT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Hard_INT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Soft_INT_SoundSet",
				"APC_Tracked_03_Drive_Water_INT_SoundSet",
				"APC_Tracked_03_Drive_Dirt_INT_SoundSet",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Hard_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet"
			};
			soundSetsExt[]=
			{
				"APC_Tracked_03_Engine_RPM0_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM1_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM2_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM3_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM4_EXT_SoundSet",
				"APC_Tracked_03_Engine_EXT_Burst_SoundSet",
				"APC_Tracked_03_Tracks_01_EXT_SoundSet",
				"APC_Tracked_03_Tracks_02_EXT_SoundSet",
				"APC_Tracked_03_Tracks_03_EXT_SoundSet",
				"APC_Tracked_03_Tracks_04_EXT_SoundSet",
				"APC_Tracked_03_Tracks_05_EXT_SoundSet",
				"APC_Tracked_03_Tracks_06_EXT_SoundSet",
				"APC_Tracked_03_Rattling_EXT_SoundSet",
				"APC_Tracked_03_Rain_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Hard_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Soft_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Hard_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Soft_EXT_SoundSet",
				"APC_Tracked_03_Drive_Water_EXT_SoundSet",
				"APC_Tracked_03_Drive_Dirt_EXT_SoundSet",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Hard_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet"
			};
		};
		driverAction="driver_offroad01";
		driverInAction="driver_offroad01";
		viewDriverInExternal=1;
		proxytype="CPDriver";
		proxyIndex=1;
		forcehideDriver=1;
		DriverForceOptics=0;
		memoryPointTrack1L="Track LL";
		memoryPointTrack1R="Track LR";
		memoryPointTrack2L="Track RL";
		memoryPointTrack2R="Track RR";
		dustFrontLeftPos="dustFrontLeft";
		dustFrontRightPos="dustFrontRight";
		dustBackLeftPos="dustBackLeft";
		dustBackRightPos="dustBackRight";
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust_1_pos";
				direction="Exhaust_1_dir";
				effect="ExhaustEffectTankSide";
			};
			class Exhaust_2
			{
				position="Exhaust_2_pos";
				direction="Exhaust_2_dir";
				effect="ExhaustEffectTankSide";
			};
		};
		typicalCargo[]=
		{
			"RD501_opfor_unit_B1_low_poly_heavy"
		};
		class AnimationSources: AnimationSources
		{
			class maxholdstervalue
			{
				source="maxholdstervalue";
				weapon="missiles_titan";
				animPeriod=2;
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_titan";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class recoil_cannon_source
			{
				source="reload";
				weapon="101st_TX130_cannon";
			};
			class recoil_mg_source
			{
				source="reload";
				weapon="101st_TX130_mg";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=0.1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
		};
	};*/

	class 101st_tanks_tx130_base: Tank_F
	{
		ace_cargo_space = 400;
		author="Dutch";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="101st TX-130 Hover Tank";
		model="101st_Aux_Mod\Addons\Vehicles\TX130\tx130.p3d";
		picture="\A3\armor_f_gamma\MBT_02\Data\UI\MBT_02_Base_ca.paa";
		icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		faction="Republic_101st";
		editorSubcategory = "EdSubcat_Tanks";
		driver="101st_CloneTrooper_212th";
		crew="101st_CloneTrooper_212th";
		
		hiddenSelections[]=
		{
			"_hull",
			"_rockets",
			"_tracks",
			"_turrets"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\Vehicles\TX130\data\tx130_hull_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\TX130\data\tx130_rocket_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\TX130\data\tx130_tracks_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\TX130\data\tx130_turrets_co.paa"
		};
		class TransportMagazines
		{
			class _xx_RD501_DC15s_x60_mag
			{
				magazine="RD501_DC15s_x60_mag";
				count=10;
			};
			class _xx_RD501_DC15a_LE_x15_mag
			{
				magazine="RD501_DC15a_LE_x15_mag";
				count=10;
			};
			class _xx_RD501_z6_x400_mag
			{
				magazine="RD501_z6_x400_mag";
				count=4;
			};
			class _xx_RD501_RPS_AT_x1_mag
			{
				magazine="RD501_RPS_AT_x1_mag";
				count=4;
			};
			class _xx_RD501_DC15a_Med_x30_mag
			{
				magazine="RD501_DC15a_Med_x30_mag";
				count=40;
			};
		};
		canFloat=1;
		destrType = "DestructDefault";
		waterPPInVehicle=0;
		waterResistanceCoef=0.07;
		waterLeakiness=2.5;
		waterSpeedFactor=0.5;
		waterAngularDampingCoef=5;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=0.5;
		maxFordingDepth=0.5;
		waterResistance=1;
		simulation="tankX";
		enginePower=500;
		maxOmega=276;
		peakTorque=4832;
		maxspeed=58;
		torqueCurve[]=
		{
			{0,0},
			
			{
				"(1600/2640)",
				"(2650/2850)"
			},
			
			{
				"(1800/2640)",
				"(2800/2850)"
			},
			
			{
				"(1900/2640)",
				"(2850/2850)"
			},
			
			{
				"(2000/2640)",
				"(2800/2850)"
			},
			
			{
				"(2200/2640)",
				"(2750/2850)"
			},
			
			{
				"(2400/2640)",
				"(2600/2850)"
			},
			
			{
				"(2640/2640)",
				"(2350/2850)"
			}
		};
		thrustDelay=0.1;
		clutchStrength=180;
		fuelCapacity=1885;
		brakeIdleSpeed=1.78;
		latency=0.1;
		tankTurnForce=600000;
		idleRpm=700;
		redRpm=2640;
		engineLosses=25;
		transmissionLosses=15;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R2",
				-3.9000001,
				"N",
				0,
				"D1",
				4.6999998,
				"D2",
				3.5,
				"D3",
				2.5999999,
				"D4",
				2,
				"D5",
				1.5,
				"D6",
				1.125,
				"D7",
				0.85000002
			};
			TransmissionRatios[]=
			{
				"High",
				15
			};
			gearBoxMode="full-auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				damping=75;
				steering=0;
				side="left";
				weight=150;
				mass=150;
				MOI=25;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=40000;
				sprungMass=4000;
				springStrength=324000;
				springDamperRate=36000;
				dampingRate=1;
				dampingRateInAir=8830;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
		};
		cost=1500000;
		damageResistance=0.02;
		crewVulnerable=1;
		armor=700;
		armorStructural=6;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.80000001;
				material=-1;
				name="hitpoint_hull";
				visual="_hull";
				passThrough=1;
				minimalHit=0.14;
				explosionShielding=2;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=1;
				material=-1;
				name="hitpoint_engine";
				passThrough=0.80000001;
				minimalHit=0.23999999;
				explosionShielding=1;
				radius=0.33000001;
			};
			class HitFuel: HitFuel
			{
				armor=1;
				material=-1;
				name="hitpoints_fuel";
				passThrough=0.80000001;
				minimalHit=0.23999999;
				explosionShielding=1;
				radius=0.33000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				name="hitpoint_track_l";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				name="hitpoint_track_r";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret1: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo1";
				memoryPointsGetInGunnerDir="pos cargo1 dir";
				gunnerName="Passenger Gunner 1";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=60;
				minTurn=-60;
				isPersonTurret=2;
				ejectDeadGunner=1;
				gunnerInAction="passenger_inside_3";
				startEngine=0;
				allowLauncherIn=1;
				allowLauncherOut=1;
				LODTurnedIn=1200;
				forceHideGunner=1;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo2";
				memoryPointsGetInGunnerDir="pos cargo2 dir";
				gunnerName="Passenger Gunner 2";
				proxyIndex=2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex=3;
				gunnerName="Passenger Gunner 3";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo3";
				memoryPointsGetInGunnerDir="pos cargo3 dir";
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex=4;
				gunnerName="Passenger Gunner 4";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo4";
				memoryPointsGetInGunnerDir="pos cargo4 dir";
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex=5;
				gunnerName="Passenger Gunner 5";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo5";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex=6;
				gunnerName="Passenger Gunner 6";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex=7;
				gunnerName="Passenger Gunner 7";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret8: CargoTurret1
			{
				proxyIndex=8;
				gunnerName="Passenger Gunner 8";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret9: CargoTurret1
			{
				proxyIndex=9;
				gunnerName="Passenger Gunner 9";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret10: CargoTurret1
			{
				proxyIndex=10;
				gunnerName="Passenger Gunner 10";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret11: CargoTurret1
			{
				proxyIndex=11;
				gunnerName="Passenger Gunner 11";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo11";
				memoryPointsGetInGunnerDir="pos cargo11 dir";
			};
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"101st_TX130_mg",
					"101st_TX130_cannon",
					"missiles_titan"
				};
				memoryPointGun[]=
				{
					"usti hlavne 1",
					"usti hlavne 2"
				};
				magazines[]=
				{
					"101st_TX130_mg_mag",
					"101st_TX130_mg_mag",
					"101st_TX130_mg_mag",
					"101st_TX130_mg_mag",
					"101st_TX130_mg_mag",
					"101st_TX130_mg_mag",
					"101st_TX130_mg_mag",
					"101st_TX130_mg_mag",
					"101st_TX130_mg_mag",
					"101st_TX130_mg_mag",
					"101st_TX130_cannon_mag",
					"101st_TX130_cannon_mag",
					"101st_TX130_cannon_mag",
					"101st_TX130_cannon_mag",
					"4Rnd_Titan_long_missiles",
					"4Rnd_Titan_long_missiles",
					"4Rnd_Titan_long_missiles",
					"4Rnd_Titan_long_missiles"
				};
				turretInfoType = "RscOptics_crows";
				animationSourceBody = "Mainturret";
				Body = "Mainturret";
				animationSourceGun = "Maingun";
				Gun = "Maingun";
				optics = 0;
				minElev = -5;
				maxElev = 35;
				minTurn = -360;
				maxTurn = +360;
				selectionFireAnim = "zasleh";
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				memoryPointGunnerOptics = "gunnerview";
				//gunnerLeftHandAnimName = "Heavygun";
				//gunnerRightHandAnimName = "Heavygun";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnerForceOptics = 1;
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class HitPoints
				{
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "gun";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun
					{
						armor = 1;
						name = "turret";
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
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				memoryPointGunnerOutOptics="commanderview";
				memoryPointGunnerOptics="commanderview";
				minElev=-10;
				maxElev=30;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minCamElev=-90;
				maxCamElev=90;
				weapons[]=
				{
					"SmokeLauncher"
				};
				magazines[]=
				{
					"SmokeLauncherMag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				gunnerAction="Commander_APC_tracked_01_crv_out";
				gunnerInAction="Commander_APC_tracked_01_crv_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				turretInfoType="RscWeaponRangeFinder";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerforceoptics=0;
				usePip=1;
				animationSourceStickX="com_turret_control_x";
				animationSourceStickY="com_turret_control_y";
				gunnerLeftHandAnimName="com_turret_control";
				turretFollowFreeLook=2;
				LODOpticsIn=0;
				LODTurnedIn=1100;
				LODTurnedOut=1;
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				gunnerOutOpticsModel="";
				gunnerOpticsEffect[]={};
				class ViewGunner: ViewCargo
				{
					initAngleX=-6;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class ViewOptics: ViewOptics
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
					thermalMode[]={2,3};
				};
				startEngine=0;
				stabilizedInAxes=3;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				viewGunnerInExternal=1;
				showCrewAim=1;
				class HitPoints
				{
					class HitComTurret
					{
						armor=0.1;
						material=-1;
						armorComponent="hit_com_turret";
						name="hit_com_turret_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=1;
						radius=0.15000001;
						isTurret=1;
					};
					class HitComGun
					{
						armor=0.1;
						material=-1;
						armorComponent="hit_com_gun";
						name="hit_com_gun_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=1;
						radius=0.15000001;
						isGun=1;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
					{
					};
				};
			};
		};
		class RenderTargets
		{
			class gunner_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="pip1_pos";
					pointDirection="pip1_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
			};
			class driver_display
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="pip2_pos";
					pointDirection="pip2_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[]={-1};
				};
			};
		};
		soundGetIn[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1,
			20
		};
		soundTurnIn[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			0.8,
			1,
			20
		};
		soundTurnOut[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			0.8,
			1,
			20
		};
		soundTurnInInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			0.8,
			1,
			20
		};
		soundTurnOutInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			0.8,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Int_Start",
			0.79432797,
			1
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Int_Stop",
			0.79432797,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Ext_Start",
			0.8,
			1,
			100
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Ext_Stop",
			0.8,
			1,
			100
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
			0.63095701,
			1,
			100
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
			0.63095701,
			1,
			100
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
			0.63095701,
			1,
			100
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.33000001,
			"BushCrash2",
			0.33000001,
			"BushCrash3",
			0.33000001
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.16599999,
			"buildCrash1",
			0.16599999,
			"buildCrash2",
			0.16599999,
			"buildCrash3",
			0.16599999,
			"buildCrash4",
			0.16599999,
			"buildCrash5",
			0.16599999
		};
		woodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		woodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		woodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		woodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		woodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		woodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		ArmorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		ArmorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.16599999,
			"ArmorCrash1",
			0.16599999,
			"ArmorCrash2",
			0.16599999,
			"ArmorCrash3",
			0.16599999,
			"ArmorCrash4",
			0.16599999,
			"ArmorCrash5",
			0.16599999
		};
		class Sounds
		{
			soundSetsInt[]=
			{
				"APC_Tracked_03_Engine_RPM0_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM1_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM2_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM3_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM4_INT_SoundSet",
				"APC_Tracked_03_Engine_INT_Burst_SoundSet",
				"APC_Tracked_03_Tracks_01_INT_SoundSet",
				"APC_Tracked_03_Tracks_02_INT_SoundSet",
				"APC_Tracked_03_Tracks_03_INT_SoundSet",
				"APC_Tracked_03_Tracks_04_INT_SoundSet",
				"APC_Tracked_03_Tracks_05_INT_SoundSet",
				"APC_Tracked_03_Tracks_06_INT_SoundSet",
				"APC_Tracked_03_Interior_Tone_Engine_Off_SoundSet",
				"APC_Tracked_03_Interior_Tone_Engine_On_SoundSet",
				"APC_Tracked_03_Rattling_INT_SoundSet",
				"APC_Tracked_03_Stress_INT_SoundSet",
				"APC_Tracked_03_Rain_INT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Hard_INT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Soft_INT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Hard_INT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Soft_INT_SoundSet",
				"APC_Tracked_03_Drive_Water_INT_SoundSet",
				"APC_Tracked_03_Drive_Dirt_INT_SoundSet",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Hard_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet"
			};
			soundSetsExt[]=
			{
				"APC_Tracked_03_Engine_RPM0_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM1_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM2_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM3_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM4_EXT_SoundSet",
				"APC_Tracked_03_Engine_EXT_Burst_SoundSet",
				"APC_Tracked_03_Tracks_01_EXT_SoundSet",
				"APC_Tracked_03_Tracks_02_EXT_SoundSet",
				"APC_Tracked_03_Tracks_03_EXT_SoundSet",
				"APC_Tracked_03_Tracks_04_EXT_SoundSet",
				"APC_Tracked_03_Tracks_05_EXT_SoundSet",
				"APC_Tracked_03_Tracks_06_EXT_SoundSet",
				"APC_Tracked_03_Rattling_EXT_SoundSet",
				"APC_Tracked_03_Rain_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Hard_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Soft_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Hard_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Soft_EXT_SoundSet",
				"APC_Tracked_03_Drive_Water_EXT_SoundSet",
				"APC_Tracked_03_Drive_Dirt_EXT_SoundSet",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Hard_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet"
			};
		};
		driverAction="driver_offroad01";
		driverInAction="driver_offroad01";
		viewDriverInExternal=1;
		proxytype="CPDriver";
		proxyIndex=1;
		forcehideDriver=1;
		DriverForceOptics=0;
		memoryPointTrack1L="Track LL";
		memoryPointTrack1R="Track LR";
		memoryPointTrack2L="Track RL";
		memoryPointTrack2R="Track RR";
		dustFrontLeftPos="dustFrontLeft";
		dustFrontRightPos="dustFrontRight";
		dustBackLeftPos="dustBackLeft";
		dustBackRightPos="dustBackRight";
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust_1_pos";
				direction="Exhaust_1_dir";
				effect="ExhaustEffectTankSide";
			};
			class Exhaust_2
			{
				position="Exhaust_2_pos";
				direction="Exhaust_2_dir";
				effect="ExhaustEffectTankSide";
			};
		};
		typicalCargo[]=
		{
			"101st_CloneTrooper_212th"
		};
		class AnimationSources: AnimationSources
		{
			class maxholdstervalue
			{
				source="maxholdstervalue";
				weapon="missiles_titan";
				animPeriod=2;
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_titan";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class recoil_cannon_source
			{
				source="reload";
				weapon="101st_TX130_cannon";
			};
			class recoil_mg_source
			{
				source="reload";
				weapon="101st_TX130_mg";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=0.1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
		};
	};
	class 101st_tanks_tx130: 101st_tanks_tx130_base
	{
		ace_cargo_space = 400;
		author="Dutch";
		side=1;
		scope=2;
		scopeCurator=2;
		weapons[] = {"101st_TX130_mg","101st_TX130_cannon","missiles_titan"};
		magazines[] = {"101st_TX130_mg_mag","101st_TX130_mg_mag","101st_TX130_mg_mag","101st_TX130_mg_mag","101st_TX130_mg_mag","101st_TX130_mg_mag","101st_TX130_mg_mag","101st_TX130_mg_mag","101st_TX130_mg_mag","101st_TX130_mg_mag","101st_TX130_cannon_mag","101st_TX130_cannon_mag","101st_TX130_cannon_mag","101st_TX130_cannon_mag","4Rnd_Titan_long_missiles","4Rnd_Titan_long_missiles","4Rnd_Titan_long_missiles","4Rnd_Titan_long_missiles"};
	};
	
	
/*	class B_SDV_01_F;
	class 101st_White_Sub : B_SDV_01_F
	{
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\Vehicles\Submarine\white_sub_co.paa"};
		model = "\A3\boat_f_beta\SDV_01\SDV_01_F.p3d";
		displayName = "Republic SDV";
		faction="Republic_101st";
		scope = 2;
	};
	
	class 101st_Marked_Sub : B_SDV_01_F
	{
		hiddenSelectionsTextures[] = {"\101st_Aux_Mod\Addons\Vehicles\Submarine\label_sub_co.paa"};
		displayName = "Republic Marked SDV";
		faction="Republic_101st";		
	};*/

	
	class Land_Pod_Heli_Transport_04_covered_F;
	class 101st_Landing_Pod : Land_Pod_Heli_Transport_04_covered_F
	{
		side = 1;
		dlc="101st_Aux_Mod";
		faction="Republic_101st";
		displayName="101st Landing Pod";
		author="Dutch";
		editorSubcategory="101st_Transport";
		vehicleClass="RD501_Air_Vehicle_Class_Republic";
		class Eventhandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
			init="[_this select 0] execVM '101st_Aux_Mod\Addons\vehicles\Pod\pod.sqf'";
		};
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class turrets: turrets
		{
			class MainTurret;
		};
	};
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F
	{
		class turrets: turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;
			};
		};
	};
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
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
	class 101st_Longbow_Republic: O_APC_Tracked_02_AA_F
	{
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage=1;
		displayName="101st Flytrap AA";
		crew="SoldierWCrew";
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
			"101st_Aux_Mod\Addons\Vehicles\Flytrap\flytrap_ext1_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\Flytrap\flytrap_ext2_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\Flytrap\flytrap_tower_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
			"RD501_Vehicles\FE_Vehicles\textures\grey.paa"
		};
		dlc="101st_Aux_Mod";
		faction = "O_DBA_CIS_F";
		 editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons;
		class TransportMagazines;
		class EventHandlers: DefaultEventhandlers
		{
		};
		class Turrets: turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RD501_aa_gun_aa_gun_base",
					"missiles_titan_AA"
				};
				magazines[]=
				{
					"RD501_AA_Gun_Base_x1000_mag",
					"RD501_AA_Gun_Base_x1000_mag",
					"RD501_AA_Gun_Base_x1000_mag",
					"RD501_AA_Gun_Base_x1000_mag",
					"4Rnd_Titan_long_missiles_O",
					"4Rnd_Titan_long_missiles_O"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"CMFlareLauncher",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag"
						};
					};
				};
			};
		};
	}; 
	class 101st_Longbow_CIS: O_APC_Tracked_02_AA_F
	{
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage=1;
		displayName="101st CIS Flytrap AA";
		crew="101st_AT_Droid";
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
			"101st_Aux_Mod\Addons\Vehicles\Flytrap\CIS_flytrap_ext1_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\Flytrap\CIS_flytrap_ext2_co.paa",
			"101st_Aux_Mod\Addons\Vehicles\Flytrap\CIS_flytrap_tower_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
			"RD501_Vehicles\FE_Vehicles\textures\grey.paa"
		};
		dlc="101st_Aux_Mod";
			faction = "O_DBA_CIS_F";
		 editorSubcategory = "O_DBA_CIS_AAs";
        vehicleClass = "O_DBA_CIS_AAs";
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons;
		class TransportMagazines;
		class EventHandlers: DefaultEventhandlers
		{
		};
		class Turrets: turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RD501_aa_gun_aa_gun_base",
					"missiles_titan_AA"
				};
				magazines[]=
				{
					"RD501_AA_Gun_Base_x1000_mag",
					"RD501_AA_Gun_Base_x1000_mag",
					"RD501_AA_Gun_Base_x1000_mag",
					"RD501_AA_Gun_Base_x1000_mag",
					"4Rnd_Titan_long_missiles_O",
					"4Rnd_Titan_long_missiles_O"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"CMFlareLauncher",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"300Rnd_CMFlare_Chaff_Magazine",
							"SmokeLauncherMag"
						};
					};
				};
			};
		};
	}; 
	class Speeder_Base: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class 101st_Speeder_Base: Speeder_Base
	{
		class Turrets: Turrets
		{
			class CargoTurret;
			class MainTurret: MainTurret
			{
			};
		};
	};
	class 101st_Naboo_Short: 101st_Speeder_Base
	{
		scope=2;
		model="101st_Aux_Mod\Addons\Vehicles\Speeder\Speeder.p3d";
		displayName="Seraph-Class Naboo Speeder";
		author="Dutch";
		hasdriver=-1;
		crew="101st_CloneTrooper_212th";
		side=1;
		faction="Republic_101st";
		editorSubcategory="EdSubcat_Cars";
		vehicleClass="car";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\Vehicles\Speeder\data\shortyboi_co.paa"
		};
		thrustDelay=0.2;
		brakeIdleSpeed=1.78;
		maxSpeed=110;
		fuelCapacity=45;
		wheelCircumference=2.277;
		antiRollbarForceCoef=0.5;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=80;
		idleRpm=900;
		redRpm=6900;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.2309999,
				"N",
				0,
				"D1",
				2.4619999,
				"D2",
				1.87,
				"D3",
				1.2410001,
				"D4",
				0.97000003,
				"D5",
				0.71100003
			};
			TransmissionRatios[]=
			{
				"High",
				4.1110001
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=0.050000001;
		differentialType="front_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=19;
		enginePower=120;
		maxOmega=760;
		peakTorque=450;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=0.34999999;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.178,0.80000001},
			{0.25,1},
			{0.461,0.89999998},
			{0.89999998,0.80000001},
			{1,0.30000001}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.31;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				mass=18;
				MOI=5.3000002;
				dampingRate=0.25;
				maxBrakeTorque=1500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1;
				maxDroop=0.15000001;
				sprungMass=350;
				springStrength=22600;
				springDamperRate=8680;
				longitudinalStiffnessPerUnitGravity=100000;
				latStiffX=25;
				latStiffY=18000;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=3000;
				latStiffY=180;
				sprungMass=190;
				springStrength=4750;
				springDamperRate=1760;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=0;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=3000;
				latStiffY=180;
				sprungMass=190;
				springStrength=4750;
				springDamperRate=1760;
			};
		};
		attenuationEffectType="OpenCarAttenuation";
		soundGetIn[]=
		{
			"",
			0.056234132,
			1
		};
		soundGetOut[]=
		{
			"",
			0.056234132,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_startup.ogg",
			0.56234133,
			1
		};
		soundEngineOnExt[]=
		{
			"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_startup.ogg",
			0.56234133,
			1
		};
		soundEngineOffInt[]=
		{
			"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_shutdown.ogg",
			0.56234133,
			1,
			200
		};
		soundEngineOffExt[]=
		{
			"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_shutdown.ogg",
			0.56234133,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_2",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_3",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_4",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_1",
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_low.ogg",
					0.31622776,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_low.ogg",
					0.35481337,
					1,
					200
				};
				frequency="0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"",
					0.39810717,
					1,
					200
				};
				frequency="0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"",
					0.44668359,
					1,
					250
				};
				frequency="0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					250
				};
				frequency="0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"",
					0.56234133,
					1,
					300
				};
				frequency="0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
				volume="engineOn*camPos*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_mid.ogg",
					0.56234133,
					1,
					150
				};
				frequency=1;
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"",
					0.63095737,
					1,
					200
				};
				frequency="0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_hi.ogg",
					0.70794576,
					1,
					250
				};
				frequency="0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_hi.ogg",
					0.79432821,
					1,
					300
				};
				frequency="0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_hi.ogg",
					0.89125091,
					1,
					350
				};
				frequency="0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_hi.ogg",
					1,
					1,
					400
				};
				frequency="0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_low.ogg",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_low.ogg",
					0.2818383,
					1
				};
				frequency="0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"",
					0.31622776,
					1
				};
				frequency="0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"",
					0.35481337,
					1
				};
				frequency="0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"",
					0.39810717,
					1
				};
				frequency="0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"",
					0.44668359,
					1
				};
				frequency="0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
				volume="engineOn*(1-camPos)*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class IdleThrust_Int
			{
				sound[]=
				{
					"",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class EngineThrust_Int
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_mid.ogg",
					0.63095737,
					1
				};
				frequency="0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_mid.ogg",
					0.70794576,
					1
				};
				frequency="0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_mid.ogg",
					0.79432821,
					1
				};
				frequency="0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_mid.ogg",
					0.89125091,
					1
				};
				frequency="0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_mid.ogg",
					1,
					1
				};
				frequency="0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					60
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=40;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret1: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo1";
				memoryPointsGetInGunnerDir="pos cargo1 dir";
				gunnerName="Passenger Gunner 1";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=60;
				minTurn=-60;
				isPersonTurret=2;
				ejectDeadGunner=1;
				gunnerInAction="passenger_inside_3";
				startEngine=0;
				allowLauncherIn=1;
				allowLauncherOut=1;
				LODTurnedIn=1200;
				forceHideGunner=1;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo2";
				memoryPointsGetInGunnerDir="pos cargo2 dir";
				gunnerName="Passenger Gunner 2";
				proxyIndex=2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex=3;
				gunnerName="Passenger Gunner 3";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo3";
				memoryPointsGetInGunnerDir="pos cargo3 dir";
			};
			class MainTurret: NewTurret
			{
				stabilizedInAxes=4;
				body="MainTurret";
				gun="MainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				viewGunnerInExternal=1;
				gunnerAction="gunner_Mrap_01";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				ejectDeadGunner=1;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				weapons[]=
				{
					"BARC_Repeater"
				};
				magazines[]=
				{
					"BARC_Mag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",
					1.4125376,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",
					1.4125376,
					1,
					30
				};
				discreteDistance[]={100,200,300,400,600,800,1000,1200};
				discreteDistanceInitIndex=2;
				gunnerName="Driver";
				turretFollowFreeLook=1;
				memoryPointGunnerOptics="commanderview";
				gunnerOpticsModel="";
				turretInfoType="RscOptics_crows";
				gunnerForceOptics=0;
				startEngine=1;
				commanding=2;
				primaryGunner=1;
				primaryObserver=0;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				usePip=1;
				minTurn=-70;
				maxTurn=70;
				initTurn=0;
				minElev=-5;
				maxElev=10;
				initElev=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.30000001;
					minFov=0.07;
					maxFov=0.34999999;
				};
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01"
			},
			{}
		};
	};
	class 101st_Naboo_Long: 101st_Naboo_Short
	{
		scope=2;
		model="101st_Aux_Mod\Addons\Vehicles\BiggerSpeeder\BigSpeeder.p3d";
		displayName="Seraphin-Class Naboo Speeder";
		author="Dutch";
		hasdriver=-1;
		crew="101st_CloneTrooper_212th";
		side=1;
		faction="Republic_101st";
		editorSubcategory="EdSubcat_Cars";
		vehicleClass="car";
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\Vehicles\BiggerSpeeder\data\body_co.paa", "101st_Aux_Mod\Addons\Vehicles\BiggerSpeeder\data\engines_co.paa", "101st_Aux_Mod\Addons\Vehicles\BiggerSpeeder\data\gun_co.paa"
		};
		hiddenSelections[] =
		{
			"camo1", "camo2", "camo3"
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
	class 101st_Crab_Droid: StaticMGWeapon
	 {
		author="Dutch";
		displayName="LM-432 Crab Droid (Prototype) ";
		armor=200;
		explosionshielding=100;
		model = "101st_Aux_Mod\Addons\Vehicles\Crab\Crab.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\Vehicles\Crab\data\Body_co.paa", "101st_Aux_Mod\Addons\Vehicles\Crab\data\Legs_co.paa"};
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
		crew = "B_UAV_AI";
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Crab_Droid_F.jpg";
		scope=2;
		forceInGarage=1;
		scopeCurator=2;
		class Armory
		{
			description="";
		};
		threat[]={1,0.30000001,0.30000001};
		cost=150000;
		getInAction="";
		getOutAction="";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_F_Gamma\data\StaticTurret_01.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscOptics_crows";
				animationSourceBody = "Mainturret";
				Body = "Mainturret";
				animationSourceGun = "Maingun";
				Gun = "Maingun";
				optics = 0;
				minElev = -5;
				maxElev = 35;
				minTurn = -360;
				maxTurn = +360;
				selectionFireAnim = "zasleh";
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				weapons[]=
				{
					"101st_CIS_Mech"
				};
				magazines[]=
				{
					"101st_CIS_LR_Mag", "101st_CIS_LR_Mag"
				};
				memoryPointGunnerOptics = "gunnerview";
				//gunnerLeftHandAnimName = "Heavygun";
				//gunnerRightHandAnimName = "Heavygun";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnerForceOptics = 1;
				memoryPointGun[] = {"usti hlavne"};
				//gunBeg[]={"Usti hlavne L","Usti hlavne R"}; 
				//Gunend[]={"Konec hlavne L","Konec hlavne R"};
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class HitPoints
				{
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "gun";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun
					{
						armor = 1;
						name = "turret";
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
					};
				};
			};
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.001,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			5
		};
	};

	class 101st_DSD3_Droid: StaticMGWeapon
	{
		displayName="DSD3 Spider Droid (Prototype)";
		armor=450;
		explosionshielding=100;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		crew = "B_UAV_AI";
		model = "101st_Aux_Mod\Addons\Vehicles\DSD3\DSD3.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\Vehicles\DSD3\data\yeet_co.paa"};
		scope=2;
		forceInGarage=1;
		scopeCurator=2;
		class Armory
		{
			description="";
		};
		threat[]={1,0.30000001,0.30000001};
		cost=150000;
		getInAction="";
		getOutAction="";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_F_Gamma\data\StaticTurret_01.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscOptics_crows";
				animationSourceBody = "Mainturret";
				Body = "Mainturret";
				animationSourceGun = "Maingun";
				Gun = "Maingun";
				optics = 0;
				minElev = -5;
				maxElev = 35;
				minTurn = -360;
				maxTurn = +360;
				selectionFireAnim = "zasleh";
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				weapons[]=
				{
					"101st_CIS_Mech"
				};
				magazines[]=
				{
					"101st_CIS_LR_Mag", "101st_CIS_LR_Mag"
				};
				memoryPointGunnerOptics = "gunnerview";
				//gunnerLeftHandAnimName = "Heavygun";
				//gunnerRightHandAnimName = "Heavygun";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnerForceOptics = 1;
				memoryPointGun[] = {"usti hlavne"};
				//gunBeg[]={"Usti hlavne L","Usti hlavne R"}; 
				//Gunend[]={"Konec hlavne L","Konec hlavne R"};
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class HitPoints
				{
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "gun";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun
					{
						armor = 1;
						name = "turret";
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
					};
				};
			};
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.001,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			5
		};
	};
	class 101st_DSD_Droid: StaticMGWeapon
	{
		displayName="CIS Dwarf Spider Droid";
		armor=450;
		explosionshielding=100;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		crew = "B_UAV_AI";
		model = "101st_Aux_Mod\Addons\Vehicles\DSD1\DSD.p3d";
		hiddenSelections[] = {"body", "lights"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\Vehicles\DSD1\DSD_Main_CO.paa","101st_Aux_Mod\Addons\Vehicles\DSD1\DSD_Lights_CO.paa"};
		scope=2;
		forceInGarage=1;
		scopeCurator=2;
		class Armory
		{
			description="";
		};
		threat[]={1,0.30000001,0.30000001};
		cost=150000;
		getInAction="";
		getOutAction="";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_F_Gamma\data\StaticTurret_01.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscOptics_crows";
				animationSourceBody = "Mainturret";
				Body = "Mainturret";
				animationSourceGun = "Maingun";
				Gun = "Maingun";
				optics = 0;
				minElev = -5;
				maxElev = 35;
				minTurn = -360;
				maxTurn = +360;
				selectionFireAnim = "zasleh";
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				weapons[]=
				{
					"101st_CIS_Mech"
				};
				magazines[]=
				{
					"101st_CIS_LR_Mag", "101st_CIS_LR_Mag"
				};
				memoryPointGunnerOptics = "gunnerview";
				//gunnerLeftHandAnimName = "Heavygun";
				//gunnerRightHandAnimName = "Heavygun";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnerForceOptics = 1;
				memoryPointGun[] = {"usti hlavne"};
				//gunBeg[]={"Usti hlavne L","Usti hlavne R"}; 
				//Gunend[]={"Konec hlavne L","Konec hlavne R"};
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class HitPoints
				{
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "gun";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun
					{
						armor = 1;
						name = "turret";
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
					};
				};
			};
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.001,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			5
		};
	};
	class 101st_Octo_Droid: StaticMGWeapon
	{
		displayName="Octuptarra Tri-Droid (Prototype)";
		armor=700;
		explosionshielding=100;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		crew="B_UAV_AI";
		model = "101st_Aux_Mod\Addons\Vehicles\Octo\Octo.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\Vehicles\Octo\data\crab_co.paa"};
		scope=2;
		forceInGarage=1;
		scopeCurator=2;
		class Armory
		{
			description="";
		};
		threat[]={1,0.30000001,0.30000001};
		cost=150000;
		getInAction="";
		getOutAction="";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_F_Gamma\data\StaticTurret_01.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscOptics_crows";
				animationSourceBody = "Mainturret";
				Body = "Mainturret";
				animationSourceGun = "Maingun";
				Gun = "Maingun";
				optics = 0;
				minElev = -5;
				maxElev = 35;
				minTurn = -360;
				maxTurn = +360;
				selectionFireAnim = "zasleh";
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				weapons[]=
				{
					"101st_CIS_Mech"
				};
				magazines[]=
				{
					"101st_CIS_LR_Mag", "101st_CIS_LR_Mag"
				};
				memoryPointGunnerOptics = "gunnerview";
				//gunnerLeftHandAnimName = "Heavygun";
				//gunnerRightHandAnimName = "Heavygun";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnerForceOptics = 1;
				memoryPointGun[] = {"usti hlavne"};
				//gunBeg[]={"Usti hlavne L","Usti hlavne R"}; 
				//Gunend[]={"Konec hlavne L","Konec hlavne R"};
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class HitPoints
				{
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "gun";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun
					{
						armor = 1;
						name = "turret";
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
					};
				};
			};
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.001,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			5
		};
	};