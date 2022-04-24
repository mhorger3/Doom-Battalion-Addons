class cfgPatches
{
	class DBA_EHA_Helmet
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
			"DBA_EHH"
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
	class DBA_EHA_Helmet_base: H_HelmetSpecB
	{
		author = "Veerio";
		displayName = "[DBA]Extreme Hazard Helmet";
		model = "DBA_Republic\Addons\DBA_Armour\DBA_EHA\Helmet\DBA_EHA_Helmet.p3d";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_EHA\data\base\DBA_EHA_Helmet.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_EHA\data\base\DBA_EHA_Helmet.rvmat"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			model = "DBA_Republic\Addons\DBA_Armour\DBA_EHA\Helmet\DBA_EHA_Helmet.p3d";
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