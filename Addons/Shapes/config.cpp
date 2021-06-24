class cfgPatches
{
	class DBA_Aux_Mod_Objects
	{
		author = "Vulgar";
		name = "101st Aux Mod Objects";
		requiredaddons[] = { "101st_Aux_Mod" };
		requiredversion = 0.1;
		units[] = { "DBA_Triangle_Steel" };
		weapons[] = {  };
	};
};
class CfgVehicles {
	class House_F;
	class DBA_Triangle_Steel : House_F
	{
		placement = "vertical";
		mapSize = 1;
		destrType = "DestructNo";
		displayName = "Triangle (Static)";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\Shapes\Triangle\triangle.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\Shapes\Triangle\SteelSmooth\Triangle_CO.paa",
		};
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
	};
	class DBA_Triangle_SteelBlack : House_F
	{
		placement = "vertical";
		mapSize = 1;
		destrType = "DestructNo";
		displayName = "Triangle Black (Static)";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\Shapes\Triangle\triangle.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\Shapes\Triangle\SteelBlackSmooth\Triangle_CO.paa",
		};
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
	};
	class DBA_Triangle_SteelDamage : House_F
	{
		placement = "vertical";
		mapSize = 1;
		destrType = "DestructNo";
		displayName = "Triangle Damaged(Static)";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\Shapes\Triangle\triangle.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\Shapes\Triangle\SteelDamage\Triangle_CO.paa",
		};
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
	};
	class DBA_Triangle_SteelBlackDamage : House_F
	{
		placement = "vertical";
		mapSize = 1;
		destrType = "DestructNo";
		displayName = "Triangle Black Damaged (Static)";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\Shapes\Triangle\triangle.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\Shapes\Triangle\SteelBlackDamage\Triangle_CO.paa",
		};
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
	};
};