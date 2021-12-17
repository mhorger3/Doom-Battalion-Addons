class CfgPatches 
{
	class DBA_Cannons
	{
		requiredAddons[] = {"A3_Armor_F_Beta"};
		units[] = {"O_DBA_CIS_MTT_F",
			"O_DBA_CIS_Squad_Assault_Craft_F", "O_DBA_CIS_Argon_Ammo_F", "O_DBA_CIS_Argon_Device_F", "O_DBA_CIS_Argon_Fuel_F", "O_DBA_CIS_Argon_Medical_F",
			"O_DBA_CIS_Argon_Repair_F", "O_DBA_CIS_Argon_Transport_F", "O_DBA_CIS_Argon_Transport_Covered_F"};
		weapons[] = {};
	};
};
class Mode_SemiAuto;
class CfgVehicles
{

	class 3as_MTT;
	class 3as_SAC_Trade;
	class 442_argon_ammo_cis;
	class 442_argon_device_cis;
	class 442_argon_fuel_cis;
	class 442_argon_medical_cis;
	class 442_argon_repair_cis;
	class 442_argon_transport_cis;
	class 442_argon_covered_cis;
	
	class O_DBA_CIS_MTT_F: 3as_MTT
	{
		scope=2;
		scopeCurator=2;
		displayName="MTT";
		editorSubcategory="O_DBA_CIS_APCs";
		vehicleClass="O_DBA_CIS_APCs";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_MTT_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
	class O_DBA_CIS_Squad_Assault_Craft_F: 3as_SAC_Trade
	{
		scope=2;
		scopeCurator=2;
		displayName="Squad Assault Craft";
		editorSubcategory="O_DBA_CIS_Cars";
		vehicleClass="O_DBA_CIS_Cars";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Squad_Assault_Craft_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
	class O_DBA_CIS_Argon_Ammo_F: 442_argon_ammo_cis
	{
		scope=2;
		scopeCurator=2;
		displayName="Argon Ammo Truck";
		editorSubcategory="O_DBA_CIS_Cars";
		vehicleClass="O_DBA_CIS_Cars";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Ammo_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
	class O_DBA_CIS_Argon_Device_F: 442_argon_device_cis
	{
		scope=2;
		scopeCurator=2;
		displayName="Argon Device Carrier";
		editorSubcategory="O_DBA_CIS_Cars";
		vehicleClass="O_DBA_CIS_Cars";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Device_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
	class O_DBA_CIS_Argon_Fuel_F: 442_argon_fuel_cis
	{
		scope=2;
		scopeCurator=2;
		displayName="Argon Fuel Truck";
		editorSubcategory="O_DBA_CIS_Cars";
		vehicleClass="O_DBA_CIS_Cars";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Fuel_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
	class O_DBA_CIS_Argon_Medical_F: 442_argon_medical_cis
	{
		scope=2;
		scopeCurator=2;
		displayName="Argon Medical Truck";
		editorSubcategory="O_DBA_CIS_Cars";
		vehicleClass="O_DBA_CIS_Cars";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Medical_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
	class O_DBA_CIS_Argon_Repair_F: 442_argon_repair_cis
	{
		scope=2;
		scopeCurator=2;
		displayName="Argon Repair Truck";
		editorSubcategory="O_DBA_CIS_Cars";
		vehicleClass="O_DBA_CIS_Cars";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Repair_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
	class O_DBA_CIS_Argon_Transport_F: 442_argon_transport_cis
	{
		scope=2;
		scopeCurator=2;
		displayName="Argon Transport Truck";
		editorSubcategory="O_DBA_CIS_Cars";
		vehicleClass="O_DBA_CIS_Cars";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Transport_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
	class O_DBA_CIS_Argon_Transport_Covered_F: 442_argon_covered_cis
	{
		scope=2;
		scopeCurator=2;
		displayName="Argon Transport Truck (Covered)";
		editorSubcategory="O_DBA_CIS_Cars";
		vehicleClass="O_DBA_CIS_Cars";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Argon_Transport_Covered_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
};