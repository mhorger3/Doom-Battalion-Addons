class CfgPatches
{
	class Doom_Imports_Modified
	{
		author="Muttie the Modder";
		addonRootClass="DBA_Weapons";
		requiredAddons[]=
		{
			"DBA_Weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"101st_RAMER_Refit",
			"101st_DC15C"
		};
	};
};
class cfgWeapons
{
	class arifle_MX_Base_F;
	class JLTS_EPL2: arifle_MX_Base_F
	{
		class Single;
	};
	class 101st_RAMER_Refit: JLTS_EPL2
	{
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
	class 3AS_DC15C_F;
	class 101st_15C : 3AS_DC15C_F
	{
		displayname = "101st DC15C";
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
