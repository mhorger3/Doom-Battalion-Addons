class CfgPatches
{
	class DBA_CISFaction
	{
		author = "Vulgar";
		requiredaddons[] =
		{
		};
		requiredversion = 0.1;
		units[] =
		{
		};
		weapons[] =
		{
		};
	};
};

class CfgFactionClasses
{
	class O_DBA_CIS_F
	{
		displayName = "DBA CIS";
	};
};

class CfgEditorSubcategories
{
	class O_DBA_CIS_Spec_Ops
	{
		displayName = "DBA CIS Special Operations";
	};
	class O_DBA_CIS_B1_Droids
	{
		displayName = "DBA CIS Line Infantry";
	};
	class O_DBA_CIS_B1_Droids_Geonosis
	{
		displayName = "DBA CIS Line Infantry (Geonosis Camo)";
	};
	class O_DBA_CIS_B1_Droids_Jungle
	{
		displayName = "DBA CIS Line Infantry (Jungle Camo)";
	};
	class O_DBA_CIS_B1_Droids_Winter
	{
		displayName = "DBA CIS Line Infantry (Winter Camo)";
	};
	class O_DBA_CIS_B1_Droids_Training
	{
		displayName = "DBA CIS Line Infantry (Simulation)";
	};
	class O_DBA_CIS_Helicopters
	{
		displayName = "Helicopters";
	};
	class O_DBA_CIS_Tanks
	{
		displayName = "Tanks";
	};
	class O_DBA_CIS_Artillery
	{
		displayName = "Artillery";
	};
	class O_DBA_CIS_APCs
	{
		displayName = "APCs";
	};
	class O_DBA_CIS_Cars
	{
		displayName = "Cars";
	};
	class O_DBA_CIS_AAs
	{
		displayName = "AAs";
	};
	class O_DBA_CIS_Planes
	{
		displayName = "Planes";
	};
	class O_DBA_CIS_Turrets
	{
		displayName = "Turrets";
	};
};
class CfgMarkers
{
	class flag_CIS
	{
		name="Flag (CIS)";
		icon="101st_Aux_Mod\Addons\DBA_CIS\DBA_Faction\marker_flag_cis.paa";
		texture="101st_Aux_Mod\Addons\DBA_CIS\DBA_Faction\marker_flag_cis.paa";
		markerClass="Flags";
		color[]={1,1,1,1};
		size=32;
		shadow="false";
		scope=1;
	};
};