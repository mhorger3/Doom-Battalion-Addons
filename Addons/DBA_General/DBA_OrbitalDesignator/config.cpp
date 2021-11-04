class cfgPatches
{
	class DBA_Aux_Mod_Objects
	{
		author = "Vulgar";
		name = "101st Aux Mod Objects";
		requiredaddons[] = { "101st_Aux_Mod" };
		requiredversion = 0.1;
		units[] = { "DBA_LaserTarget" };
		weapons[] = {  };
	};
};

class DefaultEventHandlers;
class CfgVehicles {
	class k_mag_thermal_det;
	class DBA_LaserTarget : k_mag_thermal_det
	{
		placement = "vertical";
		mapSize = 1;
		destrType = "DestructNo";
		displayName = "Laser Target";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RD501_Zeus\functions\fn_beam.sqf';";
		};
	};
};
class CfgFunctions
{
	class DBA_OrbitalDesignator
	{
		class functions
		{
			file = "101st_Aux_Mod\Addons\DBA_General\DBA_OrbitalDesignator\functions";

			class Fired {};
		};
	};
};