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
	class DBA_P2HelmetBase : H_HelmetSpecB
	{
		author = "Vulgar";
		displayName = "[DBA] P2 Helmet Base";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\Blankp2Arsenal_CA.paa";
		//picture = "";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\P2Helmet.p3d";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Trooper_Helmet_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Trooper_Helmet.rvmat"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformModel = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\P2Helmet.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] =
			{
				"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Trooper_Helmet_CO.paa"
			};
			hiddenSelectionsMaterials[] =
			{
				"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Trooper_Helmet.rvmat"
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
	class DBA_P2Helmet_Rage : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Phase 2 Clone Helmet: Rage";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Rage_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Doom : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Phase 2 Clone Helmet: DoomBot";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Doom_Guy_CO.paa"
		};
	};
	
	
};