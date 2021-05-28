	class CA_Magazine;
	class OPTRE_4Rnd_145x114_HVAP_Mag;

	class DBA_Mag_Base:CA_Magazine
	{
		author="Trip";
		scope=1;
		displayname="all round base";
		initspeed=900;
		nameSound="magazine";
		maxLeadSpeed=25;
		mass=8;
		reloadaction="";
		useactiontitle="";
		modelspecial="";
		tracersevery=1;
		picture="";
		type=256;
	};
	class  DBA_556_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="5.56mw Magazine(30rnd Blue)";
		ammo="DBA_556_blue";
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		mass=8;
		count=30;
		initspeed=909;
	};
	class  DBA_556_Mag_x60_Green: DBA_Mag_Base
	{
		scope=2;
		displayname="5.56mw Magazine(60rnd Green)";
		ammo="DBA_556_green";
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		mass=8;
		count=60;
		initspeed=909;
	};
	class  DBA_556_Mag_x300 : DBA_Mag_Base
	{
		scope = 2;
		displayname = "5.56mw Magazine(300rnd Blue)";
		ammo = "DBA_556_blue";
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		mass = 30;
		count = 300;
		initspeed = 909;
	};
	class DBA_65_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="6.5mw Magazine(30rnd Blue)";
		ammo="DBA_65_blue";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass=10;
		count=30;
		initspeed=909;
	};
	class DBA_65_Mag_x30_Red: DBA_Mag_Base
	{
		scope=2;
		displayname="6.5mw Magazine(30rnd Red)";
		ammo="DBA_65_red";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass=10;
		count=30;
		initspeed=909;
	};
	class DBA_65_Mag_x30_yellow: DBA_Mag_Base
	{
		scope=2;
		displayname="6.5mw Magazine(30rnd Yellow)";
		ammo="DBA_65_yellow";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass=10;
		count=30;
		initspeed=909;
	};
	class DBA_65_Mag_x120_yellow: DBA_65_Mag_x30_yellow
	{
		scope = 2;
		mass=40; 
		displayname = "6.5mw Magazine(120rnd Yellow)";
		count = 120;
	};
	class DBA_65_Mag_x120 : DBA_65_Mag_Base
	{
		scope = 2;
		mass=40; 
		displayname = "6.5mw Magazine(120rnd Blue)";
		count = 120;
	};
	class DBA_65_Mag_x20 : DBA_65_Mag_Base
	{
		scope = 2;
		mass = 40;
		displayname = "6.5mw Magazine(20rnd Blue)";
		count = 20;
	};
	class DBA_762_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="7.62mw Magazine(30rnd Blue)";
		ammo="DBA_762_blue";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass=12;
		count=30;
		initspeed=909;
	}; 
	class DBA_762_x75_Green : DBA_Mag_Base
	{
		scope = 2;
		displayname = "7.62mw Magazine(70rnd Green)";
		ammo = "DBA_762_green";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 35;
		count = 70;
		initspeed = 909;
	};
	class DBA_762_Mag_x50 : DBA_Mag_Base
	{
		scope = 2;
		displayname = "Valken Magazine (50rnd Blue)";
		ammo = "DBA_Vulken";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 55;
		count = 50;
		initspeed = 909;
	};
	class DBA_762_Mag_x15 : DBA_Mag_Base
	{
		scope = 2;
		displayname = "7.62mw Magazine (15rnd Blue)";
		ammo = "DBA_762_blue";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 6;
		count = 15;
		initspeed = 909;
	};
	class DBA_338_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="8.6mw Magazine(15rnd Blue)";
		ammo="DBA_338_blue";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass=15;
		count=15;
		initspeed=880;
	};
	class DBA_408_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="10.4mw Magazine(10rnd Blue)";
		ammo="DBA_408_blue";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass=14;
		count=10;
		initspeed=880;
	};
	class DBA_127x99_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="12.7mw Magazine(10rnd Blue)";
		ammo="DBA_127x99_blue";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass=20;
		count=10;
		initspeed=910;
	};
	class DBA_127x99Overcharge_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="12.7mw Overcharged Magazine(5rnd Blue)";
		ammo="DBA_127x99_SLAP_blue";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass=20;
		count=5;
		initspeed=1400;
	};

	class DBA_9mm_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="9.0pw Magazine(20rnd Blue)";
		ammo="DBA_9x21_blue";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass=5;
		count=20;
		initspeed=430;
	};
	class DBA_9mm_Mag_x25 : DBA_Mag_Base
	{
		scope = 2;
		displayname = "9.0pw Magazine(25rnd Blue)";
		ammo = "DBA_9x21_blue";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass = 6;
		count = 25;
		initspeed = 430;
	};
	class DBA_9mm_Mag_x100 : DBA_Mag_Base
	{
		scope = 2;
		displayname = "9.0pw Magazine(100rnd Green)";
		ammo = "DBA_9x21_green";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass = 25;
		count = 100;
		initspeed = 430;
	};
	class DBA_45acp_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="11.43pw Magazine(20rnd Blue)";
		ammo="DBA_45acp_blue";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass=8;
		count=20;
		initspeed=254;
	};
	class DBA_45acp_Mag_x45_Green : DBA_Mag_Base
	{
		scope = 2;
		displayname = "11.43pw Magazine(45rnd Green)";
		ammo = "DBA_45acp_green";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass = 18;
		count = 45;
		initspeed = 254;
	};
	class DBA_127x33_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="12.7pw Magazine(20rnd Blue)";
		ammo="DBA_127x33_blue";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass=12;
		count=20;
		initspeed=350;
	}
	class DBA_127x33_x7_Yellow : DBA_Mag_Base //Hammerhead
	{
		scope = 2;
		displayname = "12.7pw Magazine(7rnd Yellow)";
		ammo = "DBA_127x33_yellow";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass = 12;
		count = 7;
		initspeed = 350;
	};

	class DBA_12gaScatter_Mag_Base: DBA_Mag_Base //Boma
	{
		scope=2;
		displayname="12sw Scatter Magazine(8rnd Green)";
		ammo="DBA_12gaPellets_Base";
		picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		mass=8;
		count=8;
		initspeed=400;
	};

	class DBA_12gaScatter_x5_Blue : DBA_Mag_Base //Cannok
	{
		scope = 2;
		displayname = "12sw Scatter Magazine(5rnd Green)";
		ammo = "DBA_12gaPellets_Base";
		picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		mass = 5;
		count = 5;
		initspeed = 400;
	};

	class DBA_12gaSlug_Mag_Base: DBA_Mag_Base //Boma
	{
		scope=2;
		displayname="12sw Slug Magazine(8rnd Green)";
		ammo="DBA_12gaSlug_green";
		picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		mass=8;
		count=8;
		initspeed=400;
	};
	class DBA_12gaSlug_x5_Blue: DBA_Mag_Base //Cannok
	{
		scope=2;
		displayname="12sw Slug Magazine(5rnd Green)";
		ammo="DBA_12gaSlug_green";
		picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		mass=5;
		count=5;
		initspeed=400;
	};

	class DBA_AntiTankRound_Base : OPTRE_4Rnd_145x114_HVAP_Mag
	{
		scope = 2;
		displayname = "Anti Tank Round";
		picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		mass = 8;
		count = 2;
		initspeed = 400;
		ammo = "DBA_AntiTank_base";
	};

	// Imperial stuff


	class DBA_E11D_Magazine : DBA_Mag_Base
	{
		scope = 2;
		displayname = "E11D Magazine (25rnd Blue)";
		ammo = "E11D_Base_Ammo";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 55;
		count = 25;
		initspeed = 909;
	};