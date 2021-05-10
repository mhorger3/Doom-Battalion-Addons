	class CA_Magazine;

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
	class DBA_338_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="8.6mw Magazine(10rnd Blue)";
		ammo="DBA_338_blue";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass=14;
		count=10;
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
	class DBA_127x99_Mag_Base: DBA_Mag_Base
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
	class DBA_127x33_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="12.7pw Magazine(20rnd Blue)";
		ammo="DBA_45acp_blue";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass=12;
		count=20;
		initspeed=350;
	};

	class DBA_12gaScatter_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="12sw Scatter Magazine(8rnd Blue)";
		ammo="DBA_12gaPellets_Base";
		picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		mass=8;
		count=8;
		initspeed=400;
	};

	class DBA_12gaSlug_Mag_Base: DBA_Mag_Base
	{
		scope=2;
		displayname="12sw Scatter Magazine(8rnd Blue)";
		ammo="DBA_12gaSlug_Base";
		picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		mass=8;
		count=8;
		initspeed=400;
	};
