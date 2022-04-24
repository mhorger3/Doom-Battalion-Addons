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
		picture = "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\Blankp2Arsenal_ca.paa";
		model = "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\P2Helmet.p3d";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Trooper_Helmet_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Trooper_Helmet.rvmat"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformModel = "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\P2Helmet.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] =
			{
				"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Trooper_Helmet_CO.paa"
			};
			hiddenSelectionsMaterials[] =
			{
				"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Trooper_Helmet.rvmat"
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
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Rage_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Doom : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: DoomBot";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Doom_Guy_CO.paa"
		};
	};
	class DBA_P2Helmet_Cam : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Cam";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Cam_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Chaap : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Chaap";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Chaap_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Corvax : DBA_P2HelmetBase
	{
		author = "Morn";
		displayName = "DBA Clone trooper P2 Helmet: Corvax";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Corvax_NewHelmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Croja : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Croja";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Croja_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_NuMo : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: NuMo";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\NuMo_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Devil : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Devil";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Devil_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Dova : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Dova";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Dova_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Easton : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Easton";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Easton_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Ghost : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Ghost";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\Pilot\Zelph_Pilot_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Lance : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Lance";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Lance_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Legatorre : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Legatorre";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Legatorre_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Nassau : DBA_P2HelmetBase
	{
		author = "Morn";
		displayName = "DBA Clone trooper P2 Helmet: Nassau";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Nassau_NewHelmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Odin : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Odin";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Odin_NewHelmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Papa : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Papa";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Papa_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Renik : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Renik";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Renik_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Robo : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Robo";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Robo_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Ryker : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Ryker";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Ryker_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Scythe : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Scythe";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Scythe_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Seagull : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Seagull";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Seagull_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Shadow : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Shadow";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Shadow_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Shepherd : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Sheperd";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Shepherd_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Virgo : DBA_P2HelmetBase
	{
		author = "Vulgar";
		displayName = "DBA Clone trooper P2 Helmet: Virgo";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Virgo_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Blackwater : DBA_P2HelmetBase
	{
		author = "Dune";
		displayName = "DBA Clone trooper P2 Helmet: Blackwater";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Blackwater_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Oni : DBA_P2HelmetBase
	{
		author = "Dune";
		displayName = "DBA Phase 2 Clone Helmet: SecutorTest";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Oni_Test_Helmet_CO.paa",
		};
		hiddenSelectionsMaterials[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Oni_Helmet.rvmat",
		};
	};
	class DBA_P2Helmet_Achilles : DBA_P2HelmetBase
	{
		author = "Seatie";
		displayName = "DBA Clone trooper P2 Helmet: Achilles";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Achilles_NewHelmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Limit : DBA_P2HelmetBase
	{
		author = "Morn";
		displayName = "DBA Clone trooper P2 Helmet: Limit"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Limit_NewHelmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Bond : DBA_P2HelmetBase
	{
		author = "Morn";
		displayName = "DBA Clone trooper P2 Helmet: Bond"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Bond_NewHelmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Secutor : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Secutor"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Secutor_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Caboose : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Caboose"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Caboose_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_JohnBen : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: JohnBen"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\JohnBen_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Richter : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Richter"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Richter_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Roma : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Roma"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Roma_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Void : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Void"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Void_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Shatterstorm : DBA_P2HelmetBase
	{
		author = "Morn";
		displayName = "DBA Phase 2 Clone Helmet: Shatterstorm";
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Shatterstorm_Helmet_CO.paa",
		};
		hiddenSelectionsMaterials[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Shatterstorm_Helmet.rvmat",
		};
	};
	class DBA_P2Helmet_Panther : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Panther"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Panther_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Death : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Death"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Death_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Sandman : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Sandman"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Sandman_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Hyper : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Hyper"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Hyper_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Raven : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Raven"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Raven_Helmet_CO.paa"
		};
	};
		class DBA_P2Helmet_Vulgar : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Vulgar"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Vulgar_Helmet_CO.paa"
		};
	};
	class DBA_P2Helmet_Veron : DBA_P2HelmetBase
	{
		author = "Secutor";
		displayName = "DBA Clone trooper P2 Helmet: Veron"
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Helmet\FinalModel\data\Custom\Veron_Helmet_CO.paa"
		};
	};
};