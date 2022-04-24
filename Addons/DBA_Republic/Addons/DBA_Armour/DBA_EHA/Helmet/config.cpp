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
	class JLTS_CloneHelmetP2;
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[]={901,605};
		type=605;
		hiddenSelections[]={};
		hitpointName="HitHead";
	};
	//class DBA_EHA_Helmet_base: H_HelmetSpecB
	class DBA_EHA_Helmet_base : H_HelmetSpecB
	{
		author="Seatie";
		scope=2;
		scopeArsenal=2;
		dlc = "101st_Aux_Mod";
		displayName = "[DBA]Extreme Hazard Helmet";
		model="DBA_Republic\Addons\DBA_Armour\DBA_EHA\Helmet\DBA_EHA_Helmet.p3d"
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_EHA\Helmet\data\base\DBA_EHA_Helmet_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="DBA_Republic\Addons\DBA_Armour\DBA_EHA\Helmet\DBA_EHA_Helmet.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
};