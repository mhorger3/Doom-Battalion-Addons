class CfgVehicles
{
	class Strategic;

	class DBA_CapitalShip_Ammo_Base: Strategic
	{
		scope = 1;
		scopeCurator = 1;
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ammo";

		destrType = "DestructNo";
		mapSize = 1;
		mass = 100;
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

	class 442_acclamator_2;
	class DBA_CapitalShips_Acclamator: 442_acclamator_2
	{
		displayName = "DBA Acclamator";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Blue";
	};

	class 442_arquitens;
	class DBA_CapitalShips_Arquitens: 442_arquitens
	{
		displayName = "DBA Arquitens";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Blue";
	};

	class 442_lucrehulk;
	class DBA_CapitalShips_Lucrehulk: 442_lucrehulk
	{
		displayName = "DBA Lucrehulk";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Red";
	};

	class 442_munificent;
	class DBA_CapitalShips_Munificent: 442_munificent
	{
		displayName = "DBA Munificent";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Red";
	};

	class 442_providence_zeus;
	class DBA_CapitalShips_Providence: 442_providence_zeus
	{
		displayName = "DBA Providence";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Red";
	};

	class 442_providence_d_zeus;
	class DBA_CapitalShips_Providence_Dreadnought: 442_providence_d_zeus
	{
		displayName = "DBA Providence Dreadnought";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Red";
	};

	class 442_quasar;
	class DBA_CapitalShips_Quasar: 442_quasar
	{
		displayName = "DBA Quasar";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Blue";
	};

	class 442_recusant_zeus;
	class DBA_CapitalShips_Recusant: 442_recusant_zeus
	{
		displayName = "DBA Recusant";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Red";
	};

	class 442_recusant_zeus_d;
	class DBA_CapitalShips_Recusant_Dreadnought: 442_recusant_zeus_d
	{
		displayName = "DBA Recusant Dreadnought";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Red";
	};

	class 442_subjugator;
	class DBA_CapitalShips_Subjugator: 442_subjugator
	{
		displayName = "DBA Subjugator";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Red";
	};

	class Venator_MK2;
	class DBA_CapitalShips_Venator: Venator_MK2
	{
		displayName = "DBA Venator";
		editorCategory = "DBA_CapitalShips";
		editorSubcategory = "DBA_CapitalShips_Ships";
		simulation = "fountain";
		sound = "capital_ship_engines";
		DBA_ammo = "DBA_CapitalShip_Ammo_Blue";
	};
};
