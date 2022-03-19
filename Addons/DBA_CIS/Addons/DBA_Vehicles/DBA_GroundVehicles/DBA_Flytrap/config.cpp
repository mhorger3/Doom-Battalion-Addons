class CfgPatches
{
	class DBA_Flytrap
	{
		requiredAddons[] = {"A3_Armor_F_Beta"};
		units[]=
		{
			"101st_Longbow_CIS", 
		};
		weapons[]={};
		magazines[]={};
		ammo[]=
		{};
	};
};
class DefaultEventhandlers;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgDestructPos
{
	scope=1;
	class DelayedDestruction;
	class DelayedDestructionAmmo: DelayedDestruction
	{
		timeBeforeHiding="21";
		hideDuration="10";
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
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
	class 101st_Longbow_CIS: O_APC_Tracked_02_AA_F
	{
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage=1;
		displayName="Flytrap AA";
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
			"DBA_CIS\Addons\DBA_Vehicles\DBA_GroundVehicles\DBA_Flytrap\CIS_flytrap_ext1_co.paa",
			"DBA_CIS\Addons\DBA_Vehicles\DBA_GroundVehicles\DBA_Flytrap\CIS_flytrap_ext2_co.paa",
			"DBA_CIS\Addons\DBA_Vehicles\DBA_GroundVehicles\DBA_Flytrap\CIS_flytrap_tower_co.paa",
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
};
