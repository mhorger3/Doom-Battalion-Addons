class cfgPatches
{
	class DBA_Props
	{
		author = "Vulgar";
		name = "DBA Prop Set";
		requiredaddons[] = {};
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
		model = "DBA_Core\Addons\DBA_General\DBA_Props\DBA_CommandPost.p3d";
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
	class 101st_BabyYoda : House_F 
	{
		placement="vertical";
		mapSize=1;
		destrType="DestructNo";
		displayName = "Baby Yoda (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "DBA_Core\Addons\DBA_General\DBA_Props\BabyYoda.p3d";
		hiddenSelectionsTextures[]=
		{
			"DBA_Core\Addons\DBA_General\DBA_Props\greenyweeny_co.paa",
		};
		hiddenSelections[] = 
		{
			"camo1"
		};
		armor=999999;
		armorStructural=999;
		scope=2;		
		scopeCurator = 2;
	};
	
	class 101st_GunganCarbo : House_F
	{
		displayName = "Carbonite Gungan (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "DBA_Core\Addons\DBA_General\DBA_Props\GunganCarbo.p3d";
		hiddenSelectionsTextures[]=
		{
			"DBA_Core\Addons\DBA_General\DBA_Props\GunganCarbonite_co.paa",
		};
		hiddenSelections[] = 
		{
			"camo1"
		};
		armor=999999;
		armorStructural=999;
		scope=2;
		scopeCurator = 2;
	};
	class 101st_TrandoCarbo : House_F
	{
		displayName = "Carbonite Trandoshan (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "DBA_Core\Addons\DBA_General\DBA_Props\TrandoCarbo.p3d";
		hiddenSelectionsTextures[]=
		{
			"DBA_Core\Addons\DBA_General\DBA_Props\TrandoCarbonite_co.paa",
		};
		hiddenSelections[] = 
		{
			"camo1"
		};
		armor=999999;
		armorStructural=999;
		scope=2;
		scopeCurator = 2;
	};
	class 101st_Acklay : House_F
	{
		displayName = "Acklay (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "DBA_Core\Addons\DBA_General\DBA_Props\Acklay.p3d";
		hiddenSelectionsTextures[]=
		{
			"DBA_Core\Addons\DBA_General\DBA_Props\Acklay_Body_CO.paa", "DBA_Core\Addons\DBA_General\DBA_Props\Acklay_Legs_CO.paa"
		};
		hiddenSelections[] = 
		{
			"camo1", "camo2"
		};
		armor=999999;
		armorStructural=999;
		scope=2;
		scopeCurator = 2;
	};
	class 101st_Jabba : House_F
	{
		displayName = "Jabba (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "DBA_Core\Addons\DBA_General\DBA_Props\Jabba.p3d";
		hiddenSelectionsTextures[]=
		{
			"DBA_Core\Addons\DBA_General\DBA_Props\head_co.paa", "DBA_Core\Addons\DBA_General\DBA_Props\body_CO.paa"
		};
		hiddenSelections[] = 
		{
			"camo1", "camo2"
		};
		armor=999999;
		armorStructural=999;
		scope=2;
		scopeCurator = 2;
	};
	class 101st_Rancor : House_F
	{
		displayName = "Rancor (Static)";
		editorCategory="Category101stAux";
		editorSubcategory="101st_Props";
		model =  "DBA_Core\Addons\DBA_General\DBA_Props\Rancor.p3d";
		hiddenSelectionsTextures[]=
		{
			"DBA_Core\Addons\DBA_General\DBA_Props\Rancor_Body_CO.paa", "DBA_Core\Addons\DBA_General\DBA_Props\Rancor_Head_CO.paa"
		};
		hiddenSelections[] = 
		{
			"body", "head"
		};
		armor=999999;
		armorStructural=999;
		scope=2;
		scopeCurator = 2;
	};

};