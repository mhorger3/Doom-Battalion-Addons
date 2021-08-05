class CfgAmmo
{
	class ModuleOrdnanceMortar_F_ammo;

	class DBA_CapitalShip_Ammo_Base: ModuleOrdnanceMortar_F_ammo
	{
		name = "DBA Capital Ship Ammo (Base)";
		brightness = 100000;
		tracerScale = 10;
		tracerStartTime = 0;
		tracerEndTime = 10;
	};

	class DBA_CapitalShip_Ammo_Blue: DBA_CapitalShip_Ammo_Base
	{
		name = "DBA Capital Ship Ammo (Blue)";
		effectfly = "442_plasma_blue";
		model = "kobra\442_weapons\ammo\blue_tracer.p3d";
		tracerColor[]=
		{
			"Blue"
		};
	};

	class DBA_CapitalShip_Ammo_Red: DBA_CapitalShip_Ammo_Base
	{
		name = "DBA Capital Ship Ammo (Red)";
		effectfly = "442_plasma_red";
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		tracerColor[]=
		{
			"Red"
		};
	};
};
