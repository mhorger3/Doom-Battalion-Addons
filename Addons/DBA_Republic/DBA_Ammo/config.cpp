class CfgPatches
{
	class DBA_AmmoBase
	{
		author = "Vulgar";
		requiredAddons[] =
		{
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		ammo[] =
		{
		};
		magazines[] =
		{
		};
	};
};

class CfgMagazines
{
	class Default;
	class CA_Magazine : Default
	{
	};
	class DBA_Mag_Base : CA_Magazine
	{
		author = "Vulgar";
		scope = 1;
		displayname = "all round base";
		initspeed = 900;
		nameSound = "magazine";
		maxLeadSpeed = 25;
		mass = 8;
		reloadaction = "";
		useactiontitle = "";
		modelspecial = "";
		tracersevery = 1;
		picture = "";
		type = 256;
	};
	class DBA_DC15A_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA DC15A Mag (30rnd)";
		ammo = "DBA_65_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 15;
		count = 30;
		initspeed = 909;
	};
	class DBA_DC15x_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA DC15x Mag (20rnd)";
		ammo = "DBA_408_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 15;
		count = 20;
		initspeed = 909;
	};
	class DBA_DC15ALE_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA DC15A-LE Mag (30rnd)";
		ammo = "DBA_338_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 15;
		count = 30;
		initspeed = 909;
	};
	class DBA_DC15AMod0_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA DC15A Mag (120rnd)";
		ammo = "DBA_65_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 10;
		count = 120;
		initspeed = 909;
	};
	class DBA_DC15C_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA DC15A Mag (30rnd)";
		ammo = "DBA_65_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 10;
		count = 30;
		initspeed = 909;
	};
	class DBA_DC15C_x45_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA DC15A Mag (45rnd)";
		ammo = "DBA_65_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 15;
		count = 45;
		initspeed = 909;
	};
	class DBA_DC15BR_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA DC15A-BR Mag (20rnd)";
		ammo = "DBA_762_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 15;
		count = 20;
		initspeed = 909;
	};
	class DBA_Z6_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Z6 Mag (300rnd)";
		ammo = "DBA_556_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 35;
		count = 300;
		initspeed = 909;
	};
	class DBA_Kathhound_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Kathhound Mag (300rnd)";
		ammo = "DBA_556_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 35;
		count = 60;
		initspeed = 780;
	};
	class DBA_Boma_Slug_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Boma Slug Mag (12rnd)";
		ammo = "DBA_762_Mag_Base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 25;
		count = 12;
		initspeed = 909;
	};
	class DBA_Boma_Scatter_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Boma Scatter Mag (12rnd)";
		ammo = "DBA_556_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 25;
		count = 12;
		initspeed = 909;
	};
	class DBA_Zakkeg_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Zakkeg Mag (70rnd)";
		ammo = "DBA_762_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 35;
		count = 70;
		initspeed = 909;
	};
	class DBA_Maalras_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Maalras Mag (45rnd)";
		ammo = "DBA_45acp_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 10;
		count = 45;
		initspeed = 909;
	};
	class DBA_Enforcer_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Enforcer Mag (100rnd)";
		ammo = "DBA_9x21_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 10;
		count = 100;
		initspeed = 909;
	};
	class DBA_Zillo_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Zillo Mag (7rnd)";
		ammo = "DBA_AntiTank_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 56;
		count = 7;
		initspeed = 909;
	};
	class DBA_Billo_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Billo Mag (2rnd)";
		ammo = "DBA_Billow_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 56;
		count = 2;
		initspeed = 909;
	};
	class DBA_ZilloEMP_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA EMP Mag (1rnd)";
		ammo = "DBA_EMP_x1_Base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 25;
		count = 1;
		initspeed = 909;
	};
	class DBA_Gundark_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Gundark Mag (10rnd)";
		ammo = "DBA_127x99_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 20;
		count = 10;
		initspeed = 909;
	};
	class DBA_GundarkOvercharge_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Gundark Overcharge Mag (5rnd)";
		ammo = "DBA_127x99_SLAP_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 25;
		count = 5;
		initspeed = 909;
	};
	class DBA_Valken_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Valken Mag (50rnd)";
		ammo = "DBA_HeavyWeapon_Base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 65;
		count = 50;
		initspeed = 909;
	};
};