class CfgAmmo
{
	class ModuleOrdnanceMortar_F_ammo;

	class DBA_CapitalShip_Ammo_Base: ModuleOrdnanceMortar_F_ammo
	{
		name = "DBA Capital Ship Ammo (Base)";
	};

	class DBA_CapitalShip_Ammo_Blue: DBA_CapitalShip_Ammo_Base
	{
		name = "DBA Capital Ship Ammo (Blue)";
		effectfly = "442_plasma_blue";
		model = "101st_Aux_Mod\Addons\DBA_CapitalShips\ammo\CapitalShipBlasterBoltBlue.p3d";
	};

	class DBA_CapitalShip_Ammo_Green: DBA_CapitalShip_Ammo_Base
	{
		name = "DBA Capital Ship Ammo (Green)";
		effectfly = "442_plasma_green";
		model = "101st_Aux_Mod\Addons\DBA_CapitalShips\ammo\CapitalShipBlasterBoltGreen.p3d";
	};

	class DBA_CapitalShip_Ammo_Red: DBA_CapitalShip_Ammo_Base
	{
		name = "DBA Capital Ship Ammo (Red)";
		effectfly = "442_plasma_red";
		model = "101st_Aux_Mod\Addons\DBA_CapitalShips\ammo\CapitalShipBlasterBoltRed.p3d";
	};
};
