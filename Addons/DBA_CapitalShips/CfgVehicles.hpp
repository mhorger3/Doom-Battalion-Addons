class CfgVehicles
{
	class Strategic;

	class DBA_CapitalShip_Ammo_Base: Strategic
	{
		scope = 1;
		scopeCurator = 1;
		editorCategory = "DBA_Props";
		editorSubcategory = "DBA_CapitalShips_Ammo";

		destrType = "DestructNo";
		mapSize = 1;
		mazz = 100;
	};

	class DBA_CapitalShips_Ammo_Blue: DBA_CapitalShip_Ammo_Base
	{
		displayName = "Capital Ship Ammo (Blue)";
		scope = 2;
		scopeCurator = 2;
		model = "101st_Aux_Mod\Addons\DBA_CapitalShips\ammo\CapitalShipBlasterBoltBlue.p3d";
	};

	class DBA_CapitalShips_Ammo_Green: DBA_CapitalShip_Ammo_Base
	{
		displayName = "Capital Ship Ammo (Green)";
		scope = 2;
		scopeCurator = 2;
		model = "101st_Aux_Mod\Addons\DBA_CapitalShips\ammo\CapitalShipBlasterBoltGreen.p3d";
	};

	class DBA_CapitalShips_Ammo_Red: DBA_CapitalShip_Ammo_Base
	{
		displayName = "Capital Ship Ammo (Red)";
		scope = 2;
		scopeCurator = 2;
		model = "101st_Aux_Mod\Addons\DBA_CapitalShips\ammo\CapitalShipBlasterBoltRed.p3d";
	};
};
