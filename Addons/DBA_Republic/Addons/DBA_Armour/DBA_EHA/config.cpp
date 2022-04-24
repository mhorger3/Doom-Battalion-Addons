
class CfgPatches
{
	class DBA_EHA
	{
		author = "DBA";
		requiredAddons[] = {
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F"
		};
		requiredVersion = 0.1;
		units[] = {};
        weapons[] = {};
    };
};

class CfgWeapons
{

	class U_I_CombatUniform;
	class UniformItem;
	class DBA_EHAUniform : U_I_CombatUniform
	{
		author = "Uwuario";
		scope = 2;
		displayName = "[DBA] Extreme Hazard Enviroment Armor";
		picture = "";
		model = "DBA_Republic\Addons\DBA_Armour\DBA_EHA\Armour\DBA_EHA.p3d";
		hiddenSelections[] = { "Camo1", "Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Armour\DBA_EHA\Armour\data\base\DBA_EHA_Chest_CO.paa",
			"DBA_Republic\Addons\DBA_Armour\DBA_EHA\Armour\data\base\DBA_EHA_Legs_CO.paa",
			"DBA_Republic\Addons\DBA_Armour\DBA_EHA\Armour\data\base\DBA_EHA_Kama_CO.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DBA_EHA_F";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};