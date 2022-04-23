class cfgPatches
{
	class DBA_Snowhelmet
	{
		author = "Vulgar";
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"DBA_Snowhelmet_base"
		};
	};
};

class cfgWeapons
{
	class H_HelmetSpecB;
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[]={901,605};
		type=605;
		hiddenSelections[]={};
		hitpointName="HitHead";
	};
	class DBA_Snowhelmet_base: H_HelmetSpecB
	{
		author = "Seatie";
		displayName = "DBA Snowtrooper Helmet";
		model = "DBA_Republic\Addons\DBA_Armour\DBA_Snowtrooper\Helmet\DBA_Snowhelmet.p3d";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Snowtrooper\data\base\DBA_Snowtrooper_Helmet.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Snowtrooper\data\base\DBA_Snowtrooper_Helmet.rvmat"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			model = "DBA_Republic\Addons\DBA_Armour\DBA_Snowtrooper\Helmet\DBA_Snowhelmet.p3d";
			hiddenSelections[] = {"Camo"};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitPointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};