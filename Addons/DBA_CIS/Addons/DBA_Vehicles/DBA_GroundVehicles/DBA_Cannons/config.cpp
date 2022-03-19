class CfgPatches 
{
	class DBA_Cannons
	{
		requiredAddons[] = {"A3_Armor_F_Beta"};
		units[] = {"O_DBA_CIS_Particle_Cannon_F",
			"O_DBA_CIS_Proton_Cannon_F",};
		weapons[] = {};
	};
};
class Mode_SemiAuto;
class CfgVehicles
{
	class 3as_ParticleCannon;
	class 3AS_FieldCannon;
	class 3as_CIS_Mortar;
	class O_DBA_CIS_Particle_Cannon_F: 3as_ParticleCannon
	{
		scope=2;
		scopeCurator=2;
		displayName="Particle Cannon";
		editorSubcategory="O_DBA_CIS_Turrets";
		vehicleClass="O_DBA_CIS_Turrets";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_Particle_Cannon_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
	class O_DBA_CIS_Proton_Cannon_F: 3AS_FieldCannon
	{
		scope=2;
		scopeCurator=2;
		displayName="Proton Cannon";
		editorSubcategory="O_DBA_CIS_Turrets";
		vehicleClass="O_DBA_CIS_Turrets";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_Proton_Cannon_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
	class O_DBA_CIS_Plasma_Mortar_F: 3as_CIS_Mortar
	{
		scope=2;
		scopeCurator=2;
		displayName="Plasma Mortar";
		editorSubcategory="O_DBA_CIS_Turrets";
		vehicleClass="O_DBA_CIS_Turrets";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="DBA_CIS\Addons\EditorPreviews_F\Data\O_DBA_CIS_Plasma_Mortar_F.jpg";
		crew="O_DBA_CIS_B1_Crew_Droid_F";
	};
};