class CfgPatches
{
	class DBA_Tuskan_Armour
	{
		author = "Mutt / Dutch";
		name = "DBA Tuskan Armor";
		requiredaddons[] =
		{
			"A3_Characters_F"
		};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class DBA_TuskanTrooperUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[DBA] Tuskan: Trooper";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model = "DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Tuskan\Armour\data\Base\Tuskan.p3d";
		hiddenSelections[] = { "head", "body" };
		hiddenSelectionsTextures[] =
		{
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Tuskan\Armour\data\Base\DBA_Trooper_Chest_CO.paa",
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Tuskan\Armour\data\Base\DBA_Trooper_Legs_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Tuskan\Armour\data\Base\DBA_Trooper_Chest.RVMAT",
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Tuskan\Armour\data\Base\DBA_Trooper_Legs.RVMAT"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_DBA_Tuskan_Trooper";
			containerClass = "supply150";
			uniformType = "Neopren";
			hiddenSelections[] =
			{
				"camo",
				"camo1"
			};
			mass = 40;
		};
	};
};