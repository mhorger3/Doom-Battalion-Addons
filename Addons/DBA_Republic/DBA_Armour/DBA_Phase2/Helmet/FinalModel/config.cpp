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
		displayName = "DBA Clone trooper P2 Helmet Base";
		picture = "\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\Blankp2Arsenal_ca.paa";
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
		displayName = "DBA Clone trooper P2 Helmet: Rage";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Rage_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Doom : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: DoomBot";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Doom_Guy_CO.paa"
		};
	};
	class DBA_P2Helmet_Cam : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Cam";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Cam_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Chaap : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Chaap";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Chaap_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Corvax : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Corvax";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Corvax_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Croja : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Croja";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Croja_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_NuMo : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: NuMo";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\NuMo_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Devil : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Devil";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Devil_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Dova : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Dova";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Dova_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Easton : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Easton";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Easton_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Ghost : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Ghost";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Ghost_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Lance : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Lance";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Lance_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Legatorre : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Legatorre";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Legatorre_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Nassau : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Nassau";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Nassau_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Odin : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Odin";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Odin_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Papa : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Papa";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Papa_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Renik : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Renik";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Renik_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Robo : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Robo";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Robo_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Ryker : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Ryker";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Ryker_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Scythe : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Scythe";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Scythe_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Seagull : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Seagull";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Seagull_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Shadow : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Shadow";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Shadow_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Shepherd : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Sheperd";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Shepherd_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Virgo : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Virgo";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Virgo_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Blackwater : DBA_P2HelmetBase
	{
		author = "Dune";
		displayName = "DBA Clone trooper P2 Helmet: Blackwater";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Blackwater_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Oni : DBA_P2HelmetBase
	{
		author = "Dune";
		displayName = "DBA Phase 2 Clone Helmet: SecutorTest";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Oni_Test_Helmet_CO.paa",
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Oni_Helmet.rvmat",
		};
	};
	class DBA_P2Helmet_Achilles : DBA_P2HelmetBase
	{
		author = "Seatie";
		displayName = "DBA Clone trooper P2 Helmet: Achilles";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Achilles_NewHelmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Limit : DBA_P2HelmetBase
	{
		author = "Morn";
		displayName = "DBA Clone trooper P2 Helmet: Limit"
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Limit_NewHelmet_CO.paa"
		};
		};
	class DBA_P2Helmet_Bond : DBA_P2Helmet
	{
		author = "Morn";
		displayName = "DBA Clone trooper P2 Helmet: Bond"
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Bond_NewHelmet_CO.paa"
		};
};
};