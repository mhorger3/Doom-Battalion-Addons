class CfgPatches
{
	class DBA_Mandolorian_Armour
	{
		author = "Mutt / Dutch";
		name = "DBA Mandolorian Armor";
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
	class DBA_MandolorianTrooperUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[DBA] Mandolorian: Trooper";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Trooper_Chest_CO.paa",
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Trooper_Legs_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Trooper_Chest.RVMAT",
			"DBA_Independent\Addons\DBA_Independent\DBA_Armour\DBA_Mandolorian\Armour\data\Base\DBA_Trooper_Legs.RVMAT"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_DBA_Mandolorian_Trooper";
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