class CfgPatches
{
	class 101st_Vulture
	{
		units[]=
		{
			"O_DBA_CIS_Vulture_Droid_F"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Tank_Loadorder"
		};
	};
};
class CfgVehicles
{
	class 3as_Vulture_dynamicLoadout_AA;
	class O_DBA_CIS_Vulture_Droid_F: 3as_Vulture_dynamicLoadout_AA
	{
		scope=2;
		scopeCurator=2;
		displayName="Vulture-Class Droid Fighter";
		editorSubcategory="O_DBA_CIS_Planes";
		vehicleClass="O_DBA_CIS_Planes";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Vulture_Droid_3as_F.jpg";
		crew="O_DBA_CIS_OOM_Pilot_Droid_F";
	};
};
