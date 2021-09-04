class cfgPatches
{
	class DBA_CommandPost
	{
		author = "Vulgar";
		name = "DBA Command Post";
		requiredaddons[] = { "101st_Aux_Mod" };
		requiredversion = 0.1;
		units[] = { "DBA_CommandPost" };
		weapons[] = {  };
	};
};

class cfgVehicles {
	class House_F;
	class DBA_CommandPost : House_F
	{
		placement = "vertical";
		mapSize = 1;
		destrType = "DestructNo";
		displayName = "DBA Command Post";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\DBA_CommandPost\DBA_CommandPost.p3d";
		hiddenSelections[] =
		{
			"Base", "Icon", "Pylons"
		};
		hiddenSelectionsTextures[] =
		{
		};
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		
	};
};