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
	class UGL_FlareWhite_F;
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
		tracersEvery=1;
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
		mass = 10;
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
		displayname = "DBA DC15A-LE Mag (15rnd)";
		ammo = "DBA_338_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 15;
		count = 15;
		initspeed = 909;
	};
	class DBA_DC15AMod0_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA DC15A Mag (120rnd)";
		ammo = "DBA_65_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 15;
		count = 120;
		initspeed = 909;
	};
	class DBA_DC15C_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA DC15C Mag (30rnd)";
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
		displayname = "DBA DC15C Mag (45rnd)";
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
		displayname = "DBA Kathhound Mag (60rnd)";
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
		displayname = "DBA Boma Slug Mag (10rnd)";
		ammo = "DBA_12gaSlug_Base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 18;
		count = 10;
		initspeed = 909;
	};
	class DBA_Boma_Scatter_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Boma Scatter Mag (8rnd)";
		ammo = "DBA_12gaPellets_Base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 18;
		count = 8;
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
		tracersEvery=1;
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
		ammo = "DBA_9x39_base";
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
		displayname = "DBA Billo Mag (3rnd)";
		ammo = "DBA_Billow_base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 40;
		count = 3;
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
	
	class DBA_Verpine_Mag: DBA_Mag_Base
        {
        scope=2;
        displayname="DBA Verpine Mag (15rnd)";
        ammo="DBA_762_base";
        picture="\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
        model="\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
        mass=12;
        count=15;
        initspeed=909;
        };

	// Pistols

	class DBA_DC17_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA DC17 Mag (20rnd)";
		ammo = "DBA_45acp_base";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass = 8;
		count = 20;
		initspeed = 255;
	};
	class DBA_Cannok_Slug_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Cannok Slug Mag (5rnd)";
		ammo = "DBA_12gaSlug_Base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 25;
		count = 5;
		initspeed = 909;
	};
	class DBA_Cannok_Scatter_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Cannok Scatter Mag (5rnd)";
		ammo = "DBA_12gaPellets_Base";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		mass = 25;
		count = 5;
		initspeed = 909;
	};
	class DBA_Defender_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Defender Mag (25rnd)";
		ammo = "DBA_9x39_base";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass = 6;
		count = 25;
		initspeed = 430;
	};
	class DBA_DuelDefender_Mag : DBA_Mag_Base
	{
		scope = 2;
		displayname = "DBA Duel Defender Mag (25rnd Each)";
		ammo = "DBA_9x39_base";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass = 6;
		count = 50;
		initspeed = 430;
	};
	class DBA_Mag_ORBITAL : DBA_Mag_Base
	{
		scope = 2;
		displayname = "Orbital Laser Power Cell";
		ammo = "DBA_AMMO_ORBITAL";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		mass = 12;
		count = 1;
		initspeed = 909;
	};
	class DBA_HammerHead_Mag : DBA_Mag_Base //Hammerhead
	{
		scope = 2;
		displayname = "DBA HammerHead Mag(7rnd)";
		ammo = "DBA_127x33_yellow";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass = 12;
		count = 7;
		initspeed = 470;
	};
	class DBA_DuelHammerHead_Mag : DBA_Mag_Base //Hammerhead
	{
		scope = 2;
		displayname = "DBA Duel HammerHead Mag(7rnd Each)";
		ammo = "DBA_127x33_yellow";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		mass = 12;
		count = 14;
		initspeed = 470;
	};
	class DBA_AP_GL_x2_mag : CA_Magazine
	{
		author = "Vulgar";
		scope = 2;
		type = 16;
		displayName = "2 Rnd LR AP DC-15A Grenades";
		displayNameShort = "2 Rnd LR AP DC-15A";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = "DBA_GL_AP_ammo";
		initSpeed = 220;
		count = 2;
		nameSound = "";
		descriptionShort = "2Rnd LR AP DC-15A Grenade";
		mass = 15;
	};
	class DBA_HE_GL_x3_mag : DBA_AP_GL_x2_mag
	{
		displayName = "3 Rnd LR HE DC-15A Grenades";
		displayNameShort = "3 RndLR HE DC-15A";
		count = 3;
		ammo = "DBA_GL_HE_ammo";
		descriptionShort = "3Rnd LR HE DC-15A Grenade";
		initSpeed = 80;
	};

	class DBA_40mm_white_x3_mag : UGL_FlareWhite_F
	{
		author = "DBA";
		scope = 2;
		type = 16;
		displayName = "Flare 3 Rounds (White)";
		displayNameShort = "White Flare";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		ammo = "DBA_40mm_white_ammo";
		initSpeed = 80;
		count = 3;
		nameSound = "";
		descriptionShort = "Type: Flare 3 Rounds - White <br />Rounds: 1<br />Used in: EGLM, 3GL";
		weaponPoolAvailable = 1;
		mass = 4;
	};
	class DBA_40mm_white_x1_mag : DBA_40mm_white_x3_mag
	{
		displayName = "Flare 1 Rounds (White)";
		descriptionShort = "Type: Flare 1 Rounds - White";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_CIR_x3_mag : DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (IR)";
		ammo = "DBA_40mm_cir_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_purple_CA.paa";
		descriptionShort = "Type: Flare - IR<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "IR";
	};
	class DBA_40mm_CIR_x1_mag : DBA_40mm_CIR_x3_mag
	{
		displayName = "Flare 1 Rounds (IR)";
		descriptionShort = "Type: Flare 1 Rounds - IR";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Green_x3_mag : DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Green)";
		displayNameShort = "Green Flare";
		ammo = "DBA_40mm_green_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
		descriptionShort = "Type: Flare - Green<br />Rounds: 1<br />Used in: EGLM, 3GL";
	};
	class DBA_40mm_Green_x1_mag : DBA_40mm_Green_x3_mag
	{
		displayName = "Flare 1 Rounds (Green)";
		descriptionShort = "Type: Flare 1 Rounds - Green";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Red_x3_mag : DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Red)";
		ammo = "DBA_40mm_red_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
		descriptionShort = "Type: Flare - Red<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "Red Flare";
	};
	class DBA_40mm_Red_x1_mag : DBA_40mm_Red_x3_mag
	{
		displayName = "Flare 1 Rounds (Red)";
		descriptionShort = "Type: Flare 1 Rounds - Red";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Yellow_x3_mag : DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Yellow)";
		ammo = "DBA_40mm_yellow_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort = "Type: Flare - Yellow<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "Yellow Flare";
	};
	class DBA_40mm_Yellow_x1_mag : DBA_40mm_Yellow_x3_mag
	{
		displayName = "Flare 1 Rounds (Yellow)";
		descriptionShort = "Type: Flare 1 Rounds - Yellow";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Blue_x3_mag : DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Blue)";
		ammo = "DBA_40mm_blue_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort = "Type: Flare - Blue<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "Blue Flare";
	};
	class DBA_40mm_Blue_x1_mag : DBA_40mm_Blue_x3_mag
	{
		displayName = "Flare 1 Rounds (Blue)";
		descriptionShort = "Type: Flare 1 Rounds - Blue";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Cyan_x3_mag : DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Cyan)";
		ammo = "DBA_40mm_cyan_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort = "Type: Flare - Cyan<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "Cyan Flare";
	};
	class DBA_40mm_Cyan_x1_mag : DBA_40mm_Cyan_x3_mag
	{
		displayName = "Flare 1 Rounds (Cyan)";
		descriptionShort = "Type: Flare 1 Rounds - Cyan";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Purple_x3_mag : DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Purple)";
		ammo = "DBA_40mm_purple_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort = "Type: Flare - Purple<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "Purple Flare";
	};
	class DBA_40mm_Purple_x1_mag : DBA_40mm_Purple_x3_mag
	{
		displayName = "Flare 1 Rounds (Purple)";
		descriptionShort = "Type: Flare 1 Rounds - Purple";
		mass = 1;
		count = 1;
	};
};

class CfgMagazineWells
{
	class DBA_GL_Mags_magwell
	{
		DBA_GL_HE_magwell[] = { "DBA_HE_GL_x3_mag" };
		DBA_GL_AP_magwell[] = { "DBA_AP_GL_x2_mag" };
		DBA_smoke_magwell[] = { "3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203" };
		DBA_GL_flare_magwell[] = { "DBA_40mm_white_x3_mag","DBA_40mm_CIR_x3_mag","DBA_40mm_Green_x3_mag","DBA_40mm_Red_x3_mag","DBA_40mm_Yellow_x3_mag","DBA_40mm_Blue_x3_mag","DBA_40mm_Cyan_x3_mag","DBA_40mm_Purple_x3_mag" };
	};
	class DBA_DC17_GL_Mags_magwell
	{
		DBA_1rnd_GL_flare_magwell[] = { "DBA_40mm_white_x1_mag","DBA_40mm_CIR_x1_mag","DBA_40mm_Green_x1_mag","DBA_40mm_Red_x1_mag","DBA_40mm_Yellow_x1_mag","DBA_40mm_Blue_x1_mag","DBA_40mm_Cyan_x1_mag","DBA_40mm_Purple_x1_mag" };
		DBA_1rnd_smoke_magwell[] = { "1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203" };
	};
};
