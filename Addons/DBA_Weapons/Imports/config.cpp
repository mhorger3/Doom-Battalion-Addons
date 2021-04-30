class CfgPatches
{
	class Doom_Imports_Modified
	{
		author="Muttie the Modder";
		addonRootClass="DBA_Weapons";
		requiredVersion=0.1;
		units[]={
			"DBA_VH_Ramer",
			"DBA_VH_DC15C",
		};
		weapons[]=
		{
			"101st_RAMER_Refit",
			"101st_15C_Refit"
		};
	};
};
class CfgVehicles {
	class Weapon_Base_F;
	class DBA_VH_Ramer: Weapon_Base_F
	{
		author = "Dutch";
		displayName = "$STR_DBA_RAMER";
		scope = 2;
		class TransportWeapons
		{
			class 101st_RAMER_Refit
			{
				count = 1;
				weapon = "101st_RAMER_Refit";
			};
		};
	};
	class DBA_VH_DC15C: Weapon_Base_F
	{
		author = "Dutch";
		displayName = "$STR_DBA_DC15C";
		scope = 2;
		class TransportWeapons
		{
			class 101st_15C_Refit
			{
				count = 1;
				weapon = "101st_15C_Refit";
			};
		};
	};
};
class CfgWeapons
{
	class arifle_MX_Base_F;
	class JLTS_EPL2: arifle_MX_Base_F
	{
		class Single;
	};
	class 101st_RAMER_Refit: JLTS_EPL2
	{
		scope = 2;
		scopeArsenal = 2;
		baseWeapon="101st_RAMER_Refit";
		displayname="101st T21 (FM)";
		ACE_Overheating_mrbs=300000;
		magazines[]=
		{
			"RD501_50mw_x10_mag",
			"ACE_1Rnd_82mm_Mo_Smoke",
			"ACE_1Rnd_82mm_Mo_Illum"
		};
		class Single: Single
		{
			reloadTime=0.23999999;
		};
		class WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot
			{
				displayName="Optics Slot";
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Bottom";
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				compatibleItems[]=
				{
					"dba_hamr_a",
					"dba_hamr_b"
				};
			};
		};
	};
	class 101st_HH4_Grenade_Launcher : JLTS_EPL2
	{
		author = "Vulgar";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "101st_HH4_Grenade_Launcher";
		displayname = "101st HH4 Grenade Launcher";
		magazines[] =
		{
			"DBA_AT_GL_x6_mag",
			"DBA_HE_GL_x8_mag"
		};
		class Single : Single
		{
			reloadTime= 1;
			rateoffire = .5;
		};
		class WeaponSlotInfo
		{
			mass = 30;
			class CowsSlot
			{
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = { 0.5,0.34999999 };
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] =
				{
					"dba_hamr_a",
					"dba_hamr_b"
				};
			};
		};
	}
	class 3AS_DC15C_F;
	class 101st_15C_Refit : 3AS_DC15C_F
	{
		displayname = "101st DC15C";
		scope = 2;
		scopeArsenal = 2;
		magazines[]=
		{
			"DBA_DC15a_Med_x30_mag",
			"DBA_DC15a_Low_x60_mag"
		};
		class WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot
			{
				displayName="Optics Slot";
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Bottom";
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				compatibleItems[]=
				{
					"dba_hamr_a",
					"dba_hamr_b"
				};
			};
		};
	};
};
