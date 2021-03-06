class cfgPatches
{
	class DBA_Aux_Mod_Objects
	{
		author = "Vulgar";
		name = "101st Aux Mod Objects";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = { "DBA_LaserTarget" };
		weapons[] = {  };
	};
};

class DefaultEventHandlers;
class CfgVehicles {
	class Headgear_H_Bandanna_gry;
	class DBA_LaserTarget : Headgear_H_Bandanna_gry
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
			file = "DBA_Core\Addons\DBA_OrbitalDesignator\functions";

			class Fired {};
			class ResupplyAmmoDrop {};
			class ResupplyExplosiveDrop {};
			class ResupplyLauncherAmmoDrop {};
			class ResupplyMedicalDrop {};
			class ResupplyRepairDrop {};
			class ResupplySecondaryAmmoDrop {};
		};
	};
};