class cfgPatches
{
	class DBA_Phase2Helmet
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
			"DBA_P2Helmet"
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
	class DBA_P2HelmetBaseTest: H_HelmetSpecB
	{
		author = "Seatie";
		displayName = "DBA Clone trooper P2 Helmet Base TEST";
		picture = "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\DBA_P2\Blankp2Arsenal_ca.paa";
		model = "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\DBA_P2\DBA_P2Helmet.p3d";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\DBA_P2\data\Base_Helmet_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\DBA_P2\data\Base_Helmet.rvmat"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformModel = "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\DBA_P2\DBA_P2Helmet.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] =
			{
				"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\DBA_P2\data\Base_Helmet_CO.paa"
			};
			hiddenSelectionsMaterials[] =
			{
				"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\DBA_P2\data\Base_Helmet.rvmat"
			};
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