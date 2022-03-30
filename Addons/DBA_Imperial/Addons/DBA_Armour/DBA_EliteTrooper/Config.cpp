class CfgPatches
{
	class DBA_Elite_Armour
	{
		author = "Seatie";
		name = "DBA Imperial Elite Trooper";
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
	class DBA_P2cloneEliteUniform : Uniform_Base
	{
		dlc = "101st_Aux_Mod";
		scope = 2;
		displayName = "[DBA] Phase 2 Elite Squad Trooper";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"DBA_Imperial\Addons\DBA_Armour\DBA_EliteTrooper\data\Elite_Chest_CO.paa",
			"DBA_Imperial\Addons\DBA_Armour\DBA_EliteTrooper\data\Elite_Legs_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_P2CloneElite_F";
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