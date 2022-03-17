class CfgAmmo
{
	class ModuleOrdnanceMortar_F_ammo;

	class DBA_CapitalShips_Ammo_Base: ModuleOrdnanceMortar_F_ammo
	{
		name = "DBA Capital Ship Ammo (Base)";
	};

	class DBA_CapitalShips_Ammo_Blue: DBA_CapitalShips_Ammo_Base
	{
		name = "DBA Capital Ship Ammo (Blue)";
		effectfly = "442_plasma_blue";
		model = "DBA_Core\Addons\DBA_General\DBA_CapitalShips\ammo\CapitalShipBlasterBoltBlue.p3d";
	};

	class DBA_CapitalShips_Ammo_Green: DBA_CapitalShips_Ammo_Base
	{
		name = "DBA Capital Ship Ammo (Green)";
		effectfly = "442_plasma_green";
		model = "DBA_Core\Addons\DBA_General\DBA_CapitalShips\ammo\CapitalShipBlasterBoltGreen.p3d";
	};

	class DBA_CapitalShips_Ammo_Red: DBA_CapitalShips_Ammo_Base
	{
		name = "DBA Capital Ship Ammo (Red)";
		effectfly = "442_plasma_red";
		model = "DBA_Core\Addons\DBA_General\DBA_CapitalShips\ammo\CapitalShipBlasterBoltRed.p3d";
	};
};
