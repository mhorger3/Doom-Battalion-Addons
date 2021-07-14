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
class CBA_DisposableLaunchers {
	101st_disposable_launcher[] = { "101st_disposable_launcher_Loaded", "101st_disposable_launcher_Used" };
};
class CfgWeapons
{
	class arifle_MX_Base_F;
	class JLTS_EPL2: arifle_MX_Base_F
	{
		class Single;
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
		magazineWell[] = 
		{
			"DBA_HH4_GL_magwell"
		};
		class Single : Single
		{
			reloadTime = 1;
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
	};
	class 3AS_RPS6_Base;
	class 101st_disposable_launcher : 3AS_RPS6_Base
	{
		author = "Vulgar";
		scope = 1;
		scopeArsenal = 1;
		displayname = "[101st] RPS6 Disposible Launcher";
		baseweapon = "101st_disposable_launcher_Loaded";
		magazines[] = { "101st_RPS6_HEAA" };
		magazineReloadTime = 0.1;
		reloadMagazineSound[] = { "",1,1 };
		class EventHandler {
			fired = "_this call CBA_fnc_firedDisposable";
		};
	};
	class 101st_disposable_launcher_Loaded : 101st_disposable_launcher
	{
		displayname = "[101st] RPS6 Disposible Launcher";
		baseweapon = "101st_disposable_launcher_loaded";
		magazines[] = { "CBA_FakeLauncherMagazine" };
		scope = 2;
		scopeArsenal = 2;
	};
	class 101st_disposable_launcher_Used : 101st_disposable_launcher
	{
		displayname = "[101st] Used RPS6 Disposible Launcher";
		baseweapon = "101st_disposable_launcher_Used";
		magazines[] = { "CBA_FakeLauncherMagazine" };
		scope = 2;
		scopeArsenal = 0;
	};
	
};