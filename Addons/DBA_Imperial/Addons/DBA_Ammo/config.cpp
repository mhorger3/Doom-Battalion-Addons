class CfgPatches
{
	class DBA_AmmoBase
	{
		author = "Vulgar";
		requiredAddons[] =
		{
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		ammo[] =
		{
		};
		magazines[] =
		{
		};
	};
};
class CfgAmmo
{
	class DBA_65_base;
	class DBA_HeavyWeapon_base;
	class DBA_65_Imperial : DBA_65_base
	{
		model = "DBA_Core\Addons\DBA_General\DBA_AmmoBase\BlasterBoltRed.p3d";
	};
	class DBA_HeavyWeapon_Imperial : DBA_HeavyWeapon_base
	{
		model = "DBA_Core\Addons\DBA_General\DBA_AmmoBase\BlasterBoltRed.p3d";
	};
};
class CfgMagazines
{
	class Default;
	class UGL_FlareWhite_F;
	class CA_Magazine : Default
	{
	};
	class DBA_Mag_Base : CA_Magazine
	{
		author = "Vulgar";
		scope = 1;
		displayname = "all round base";
		initspeed = 900;
		nameSound = "magazine";
		maxLeadSpeed = 25;
		mass = 8;
		reloadaction = "";
		useactiontitle = "";
		modelspecial = "";
		tracersEvery=1;
		picture = "";
		type = 256;
	};
	class DBA_E11_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA E11 Mag (30rnd)";
		ammo = "DBA_65_Imperial";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 15;
		count = 30;
		initspeed = 909;
	};
	class DBA_E11D_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA E11D Mag (25rnd)";
		ammo = "DBA_HeavyWeapon_Imperial";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 65;
		count = 25;
		initspeed = 909;
	};
	
	// Pistols

};

class CfgMagazineWells
{
};
