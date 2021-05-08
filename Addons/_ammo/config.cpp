class CfgPatches
{
	class DBA_patch_weapons
	{
		author = "DBA";
		requiredAddons[] = {"101st_Aux_Mod"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazineWells
{
	class DBA_GL_Mags_magwell
	{
		DBA_GL_flare_magwell[] = {"DBA_40mm_white_x3_mag","DBA_40mm_CIR_x3_mag","DBA_40mm_Green_x3_mag","DBA_40mm_Red_x3_mag","DBA_40mm_Yellow_x3_mag","DBA_40mm_Blue_x3_mag","DBA_40mm_Cyan_x3_mag","DBA_40mm_Purple_x3_mag"};
		DBA_GL_AP_magwell[] = {"DBA_AT_GL_x2_mag","DBA_UGL_AP_x2_mag","101st_flash_GL_x3_mag"};
		DBA_GL_HE_magwell[] = {"DBA_HE_GL_x3_mag","DBA_UGL_EMP_x1_mag","DBA_UGL_HE_x3_mag",};
		DBA_smoke_magwell[] = {"3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
	};
	class DBA_DC17_GL_Mags_magwell
	{
		DBA_1rnd_GL_flare_magwell[] = {"DBA_40mm_white_x1_mag","DBA_40mm_CIR_x1_mag","DBA_40mm_Green_x1_mag","DBA_40mm_Red_x1_mag","DBA_40mm_Yellow_x1_mag","DBA_40mm_Blue_x1_mag","DBA_40mm_Cyan_x1_mag","DBA_40mm_Purple_x1_mag"};
		DBA_1rnd_smoke_magwell[] = {"1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
	};
	class DBA_rocket_RPS_magwell
	{
		DBA_rocket_RPS_magwell[] = {"DBA_RPS_AT_x1_mag","DBA_RPS_AA_x1_mag"};
	};
	class DBA_Test_magwell
	{
		DBA_Test_magwell[] = {"DBA_TEST556", "DBA_TEST65", "DBA_TEST762", "DBA_TEST338", "DBA_TEST408", "DBA_TEST127x99", "DBA_TEST127x99_SLAP", "DBA_TEST9x21", "DBA_TEST45acp", "DBA_TEST127x33", "DBA_TEST12gaSlug", "DBA_TEST12gaPellets" };
	};
};
class CfgMagazines
{
	class Default;	// External class reference
	class CA_Magazine : Default {};
	class HandGrenade : CA_Magazine {};
	class UGL_FlareWhite_F;

//FUCK NEW MAGAZINES

	#include NewMags.hpp

	class DBA_TEST556 : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 556 Pistol Test Magazine";
		ammo = "DBA_556_base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST65 : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 65 Pistol Test Magazine";
		ammo = "DBA_65_base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST762 : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 762 Pistol Test Magazine";
		ammo = "DBA_762_base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST338 : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 338 Pistol Test Magazine";
		ammo = "DBA_338_base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST408 : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 408 Pistol Test Magazine";
		ammo = "DBA_408_base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST127x99 : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 127x99 Pistol Test Magazine";
		ammo = "DBA_127x99_base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST127x99_SLAP : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 127x99 SLAP Pistol Test Magazine";
		ammo = "DBA_127x99_SLAP_base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST9x21 : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 9x21 Pistol Test Magazine";
		ammo = "DBA_9x21_base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST45acp : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 45acp Pistol Test Magazine";
		ammo = "DBA_45acp_base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST127x33 : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 127x33 Pistol Test Magazine";
		ammo = "DBA_127x33_base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST12gaSlug : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 12ga Slug SLAP Pistol Test Magazine";
		ammo = "DBA_12gaSlug_Base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	class DBA_TEST12gaPellets : CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-17 12ga Pellets Pistol Test Magazine";
		ammo = "DBA_12gaPellets_Base";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};

	/*class DBA_DC15s_x60_mag: CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-15S Carbine Magazine";
		ammo = "DBA_dc15s_carbine_ammo";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	}; 
	*/

>>>>>>> 0903a8f141e3b773ff1f3c1411b44f0f052a2221
//OLD MAGAZINES

	/*class DBA_westar_35_x20_mag: CA_Magazine
	{
		scope = 2; //relic of rd501 westar
		displayName = "20Rnd WESTAR-35 Magazine";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		ammo = "DBA_westar_35_ammo";
		tracersEvery = 1;
		type = 16;
		count = 20;
		descriptionShort = "20 Round WESTAR-35 Magazine";
		mass = 6;
		initSpeed = 310;
	};*/

	class 101st_imploder_x1_mag: HandGrenade
	{
		author="101st";
		scope=2;
		displayName="101st 1Rnd Thermal Imploder";
		displayNameShort="Thermal Imploder";
		count=1;
		ammo="101st_imploder_ammo";
		descriptionShort="101st Thermal Imploder";
		type = 256;
		model="\101st_Aux_Mod\Addons\_ammo\imploder.p3d";
		
	};
	class 101st_throwable_c_type_x1_mag: HandGrenade
	{
		author="101st";
		scope=2;
		displayName="101st 1Rnd Throwable C-Type";
		displayNameShort="Throwable C-Type";
		count=1;
		initSpeed=12;
		mass = 70;
		ammo="101st_throwable_c_type_ammo";
		descriptionShort="101st Throwable C-Type";
		type = 256;
		model="\101st_Aux_Mod\Addons\_ammo\ctype.p3d";
	};
	class ACE_HandFlare_Base;
	class DBA_HandFlare_Purple : ACE_HandFlare_Base {
		author = "101st";
		scope = 2;
		displayname = "Purple Flare";
		descriptionShort = "Its a flare thats purple";
		displayNameShort = "Purple Flare";
		model = "\A3\weapons_f\ammo\flare_white";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_white_ca.paa";
		ammo = "ACE_G_Handflare_Purple";
	};
	class 101st_thermaldet_x1_mag: HandGrenade
	{
		author="101st";
		scope=2;
		displayName="101st 1Rnd Thermal Detonator";
		displayNameShort="Thermal Detonator";
		count=1;
		ammo="101st_thermaldet_ammo";
		mass = 10;
		descriptionShort="101st Thermal Detonator";
		type = 256;
		model="\101st_Aux_Mod\Addons\_ammo\thermal.p3d";
		initSpeed=18;
		nameSound="handgrenade";
		maxLeadSpeed=7;
		sound[]=
		{
			"",
			0.00031622799,
			1
		};
	};	

	//DC Series
	class 7Rnd_408_Mag;
	class 101st_DC15x_Mag: 7Rnd_408_Mag 
	{
		displayName = "DC-15x 5 Round Charge Cell";
		mass = 10;
		count = 5;
		tracersEvery = 1;
		lastRoundTracer = 5;
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		ammo = "101st_DC15x_Plasma";
		initSpeed = 1734;
	};
	class DBA_DC15s_x60_mag: CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "60Rnd DC-15S Carbine Magazine";
		ammo = "DBA_dc15s_carbine_ammo";
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		mass = 10;
		initSpeed = 310;
	};
	class DBA_DC15_underwater_x40_mag: CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		displayName = "40Rnd Republic Aqua Rounds";
		ammo = "DBA_dc15_underwater_ammo";
		tracersEvery = 1;
		type = 16;
		count = 40;
		descriptionShort = "40Rnd Republic Aqua Rounds";
		mass = 7;
		initSpeed = 310;
	};
	class DBA_DC15a_Med_x30_mag: CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		displayName = "30Rnd DC-15A Mid Energy Rounds";
		ammo = "DBA_dc15a_med_ammo";
		tracersEvery = 1;
		count = 30;
		descriptionShort = "30Rnd DC15A Mid Energy";
		mass = 10;
		initSpeed = 380;
		weight = 40;
	};
	class DBA_DC15a_High_x15_mag: DBA_DC15a_Med_x30_mag
	{
		displayName = "15Rnd DC-15A High Energy Rounds";
		ammo = "DBA_dc15a_high_ammo";
		count = 15;
		descriptionShort = "15Rnd DC15A High Energy Rounds";
		mass = 15;
		initSpeed = 1200;
	};
	class DBA_DC15a_Low_x60_mag: DBA_DC15a_Med_x30_mag
	{
		displayName = "60Rnd DC-15A Low Energy Rounds";
		ammo = "DBA_dc15a_low_ammo";
		count = 60;
		descriptionShort = "60Rnd DC15A Low Energy";
		mass = 10;
	};
	class DBA_DC15a_box_mag_x240_mag: CA_Magazine
	{
		author = "DBA";
		scope = 2;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		displayName = "240Rnd Box DC-15A Low Energy Rounds";
		ammo = "DBA_dc15a_low_ammo";
		tracersEvery = 1;
		count = 240;
		descriptionShort = "240Rnd DC15A Low Energy";
		mass = 40;
		initSpeed = 300;
		ACE_isBelt = 1;
	};
	class 101st_DC15Mod0_Mag: DBA_DC15a_box_mag_x240_mag
	{
		descriptionShort = "120Rnd DC15A Mid Energy";
		displayName = "120Rnd DC-15A Mid Energy Rounds";
		mass = 27;
		count = 120;
		ammo = "DBA_dc15a_med_ammo";
		initSpeed = 380;
	};
	class 101st_DC15Mod0_HiMag: DBA_DC15a_box_mag_x240_mag
	{
		descriptionShort = "60Rnd DC15A High Energy";
		displayName = "60Rnd DC-15A High Energy Rounds";
		mass = 42;
		count = 60;
		ammo = "DBA_dc15a_high_ammo";
		initSpeed = 1200;
	};
	class DBA_DC15a_LE_x15_mag: DBA_DC15a_Med_x30_mag
	{
		author = "DBA";
		tracersEvery = 1;
		scope = 2;
		displayName = "15Rnd DC-15 LE Mag";
		ammo = "DBA_dc15_LE_ammo";
		count = 15;
		descriptionShort = "15Rnd DC-15 LE Mag";
		mass = 30;
		initSpeed = 1200;
	};

	//Pistol Mags
	class DBA_DC17_x20_mag: CA_Magazine
	{
		scope = 2;
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		displayName = "20Rnd DC17 Magazine.";
		ammo = "DBA_dc_17_ammo";
		tracersEvery = 1;
		type = 16;
		count = 20;
		descriptionShort = "20Rnd DC17 Magazine";
		mass = 6;
		initSpeed = 310;
	};
	class DBA_DC17_x40_mag: DBA_DC17_x20_mag
	{
		displayName = "40Rnd DC17 Magazine.";
		tracersEvery = 1;
		count = 40;
		descriptionShort = "40Rnd DC17 Magazine";
		mass = 13;
	};
	class DBA_DC15_Hammerhead_x9_mag: CA_Magazine
	{
		scope = 2;
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		displayName = "9Rnd Hammerhead Magazine";
		ammo = "DBA_DC15_Hammerhead_ammo";
		tracersEvery = 1;
		type = 16;
		count = 9;
		descriptionShort = "9Rnd Hammerhead Magazine";
		mass = 4;
		initSpeed = 310;
	};
	class 101st_PDW_Butcher_Mag : CA_Magazine 
	{
		scope=2;
		displayName="101st PDW Defender 22Rnd (Blue)";
		ammo="101st_PDW_Balls";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type = 256;
		count=22;
		descriptionShort="101st PDW";
		displayNameShort = "101st PDW";
		mass=10;
		initSpeed=300;
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
	};
	class 101st_PDW_Butcher_Mag_Red : 101st_PDW_Butcher_Mag
	{
		displayName="101st PDW Defender 22Rnd (Red)";
		ammo="101st_PDW_Balls_Red";
	};
	class 101st_PDW_Butcher_Mag_Green : 101st_PDW_Butcher_Mag
	{
		displayName="101st PDW Defender 22Rnd (Green)";
		ammo="101st_PDW_Balls_Green";
	};
	class 101st_Revolver_Mag : CA_Magazine {
		scope=2;
		displayName="101st Revolver 6Rnd (Blue)";
		ammo="101st_Revolver_Shells";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type = 256;
		count=6;
		descriptionShort="101st Revolver";
		displayNameShort = "101st Revolver";
		mass=5;
		initSpeed=400;
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
	};
	class 101st_Revolver_Mag_Red : 101st_Revolver_Mag
	{
		displayName="101st Revolver 6Rnd (Red)";
		ammo="101st_Revolver_Shells_Red";
	};

	class 101st_Revolver_Mag_Green : 101st_Revolver_Mag
	{
		displayName="101st Revolver 6Rnd (Green)";
		ammo="101st_Revolver_Shells_Green";
	};

	//Ion Rifle Mags
	class 101st_Ion_Mag: CA_Magazine
	{
		scope=2;
		displayName="101st Ion Rifle 45Rnd (Blue)";
		ammo="101st_Ion_Ammo";
		tracersEvery = 1;
		type=256;
		count = 45;
		descriptionShort="101st Ion RND";
		displayNameShort = "101st Ion Rifle";
		mass = 13;
		initSpeed = 310;
		picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
	};
	class 101st_Ion_Mag_Red : 101st_Ion_Mag
	{
		displayName="101st Ion Rifle 45Rnd (Red)";
		ammo="101st_Ion_Ammo_Red";
	};
	class 101st_Ion_Mag_Green : 101st_Ion_Mag
	{
		displayName="101st Ion Rifle 45Rnd (Green)";
		ammo="101st_Ion_Ammo_Green";
	};

	//Support Weapons
	class 101st_Chaingun_Mag: CA_Magazine
	{
		scope=2;
		displayName="101st Chaingun 1000Rnd";
		ammo="101st_Chaingun_Ammo";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type = "2*256";
		ACE_isBelt = 1;
		count=1000;
		descriptionShort="101st Chaingun RND";
		displayNameShort = "101st Chaingun";
		mass=100;
		initSpeed = 550;
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
		model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
	};
	class 101st_MG_Mag: CA_Magazine
	{
		scope=2;
		displayName="101st MG 75Rnd (Blue)";
		ammo="101st_MG_Ammo";
		tracersEvery = 1;
		type=256;
		count=75;
		descriptionShort="101st MG RND";
		displayNameShort = "101st MG Rifle";
		mass = 50;
		initSpeed = 807;
		picture = "\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
	};
	class 101st_MG_Mag_Red : 101st_MG_Mag
	{
		displayName="101st MG 75Rnd (Red)";
		ammo="101st_MG_Ammo_Red";
	};
	class 101st_MG_Mag_Green : 101st_MG_Mag
	{
		displayName="101st MG 75Rnd (Green)";
		ammo="101st_MG_Ammo_Green";
	};
	class 101st_Z6_Mag : CA_Magazine
	{
		scope=2;
		displayName="101st Z6 GL 100Rnd";
		ammo = "DBA_GL_HE_ammo";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type = 256;
		count=100;
		descriptionShort="101st Z6 GL";
		displayNameShort = "101st Z6 GL";
		mass=350;
		initSpeed=241;
		picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		weight = 80;
	};
	class DBA_z6_x400_mag: 101st_Z6_Mag
	{
		author = "DBA";
		picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		ammo = "DBA_z6_ammo";
		displayName = "400Rnd Z6 Rotary Blaster Magazine";
		descriptionShort = "400Rnd Z6 Magazine";
		count = 400;
		weight = 100;
		mass = 30;
		initSpeed = 500;
	};
	class 101st_Quad_Mag : CA_Magazine
	{
		scope=2;
		displayName="101st Quad 1000Rnd";
		ammo = "101st_Chaingun_Ammo";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type = 256;
		count=1000;
		descriptionShort="101st Quad Cannon";
		displayNameShort = "101st Quad Cannon";
		mass=900;
		initSpeed=241;
		picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		weight = 80;
	};

	//Marksman Mags
	class 101st_Zillo_Mag : CA_Magazine
	{
		scope=2;
		displayName="101st Zillo AT 2Rnd";
		ammo="101st_AT_Rifle_Ammo";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type=256;
		count=2;
		descriptionShort="101st Zillo AT";
		displayNameShort = "101st AT";
		mass=135;
		initSpeed = 867;
		picture = "\A3\weapons_f\data\UI\m_M24_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
	};
	class 101st_Valken_Mag : CA_Magazine
	{
		scope=2;
		displayName="101st Valken 50Rnd";
		ammo = "101st_Sniper_Ammo";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type = 256;
		count=50;
		descriptionShort="101st Valken";
		displayNameShort = "101st Valken";
		mass=40;
		initSpeed=500;
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		weight = 40;
	};
	class 101st_Gundark_Mag : CA_Magazine
	{
		scope=2;
		displayName="101st Gundark 20Rnd";
		ammo = "101st_Sniper_Ammo";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type = 256;
		count=20;
		descriptionShort="101st Gundark";
		displayNameShort = "101st Gundark";
		mass=25;
		initSpeed=1000;
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		weight = 40;
	};


	//SMG Mags
	class 101st_Westar_Shooter_Mag : CA_Magazine 
	{
			scope=2;
			displayName="101st HVY Shooter 8Rnd (Blue)";
			ammo="101st_Westar_Beans";
			tracersEvery=1;
			type=16;
			count=8;
			descriptionShort="101st HVY Westar";
			displayNameShort = "101st HVY Westar";
			mass=15;
			initSpeed=300;
			lastRoundsTracer = 28;
			picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
			model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
	};
	class 101st_Westar_Shooter_Mag_Red : 101st_Westar_Shooter_Mag
	{
		displayName="101st HVY Shooter 8Rnd (Red)";
		ammo = "101st_Westar_Beans_Red";
	};
	class 101st_Westar_Shooter_Mag_Green : 101st_Westar_Shooter_Mag
	{
		displayName="101st HVY Shooter 8Rnd (Green)";
		ammo = "101st_Westar_Beans_Green";
	};
	class 101st_PDW_Enforcer_Mag : CA_Magazine 
	{
			scope=2;
			displayName="101st PDW Enforcer 100Rnd (Blue)";
			ammo="101st_PDW_Balls";
			tracersEvery = 1;
			lastRoundsTracer = 28;
			type = 256;
			count=100;
			descriptionShort="101st PDW";
			displayNameShort = "101st PDW";
			mass=15;
			initSpeed=300;
			picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
			model = "\A3\weapons_F\ammo\mag_univ.p3d";
	};
	class 101st_PDW_Enforcer_Mag_Red : 101st_PDW_Enforcer_Mag
	{
		displayName="101st PDW Enforcer 100Rnd (Red)";
		ammo="101st_PDW_Balls_Red";
	};
	class 101st_PDW_Enforcer_Mag_Green : 101st_PDW_Enforcer_Mag
	{
		displayName="101st PDW Enforcer 100Rnd (Green)";
		ammo="101st_PDW_Balls_Green";
	};
	class 101st_Maalras_Mag : CA_Magazine {
		scope=2;
		displayName="101st Maalras 25Rnd (Blue)";
		ammo="101st_Maalras_Balls";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type = 256;
		count=25;
		descriptionShort="101st Maalras";
		displayNameShort = "101st Maalras";
		mass=8;
		initSpeed=300;
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
	};
	class 101st_Maalras_Mag_Red : 101st_Maalras_Mag
	{
		displayName="101st Maalras 25Rnd (Red)";
		ammo="101st_Maalras_Balls_Red";
	};
	class 101st_Maalras_Mag_Green : 101st_Maalras_Mag
	{
		displayName="101st Maalras 25Rnd (Green)";
		ammo="101st_Maalras_Balls_Green";
	};
	class 101st_Maalras_Ext_Mag : CA_Magazine 
	{
		scope=2;
		displayName="101st Maalras Ext 50Rnd (Blue)";
		ammo="101st_Maalras_Balls";
		tracersEvery = 1;
		lastRoundsTracer = 28;
		type = 256;
		count=50;
		descriptionShort="101st Maalras EXT";
		displayNameShort = "101st Maalras EXT";
		mass=16;
		initSpeed=300;
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
	};
	class 101st_Maalras_Ext_Mag_Red : 101st_Maalras_Ext_Mag
	{
		displayName="101st Maalras Ext 50Rnd (Red)";
		ammo="101st_PDW_Balls_Red";
	};
	class 101st_Maalras_Ext_Mag_Green : 101st_Maalras_Ext_Mag
	{
		displayName="101st Maalras Ext 50Rnd (Green)";
		ammo="101st_PDW_Balls_Green";
	};

	//Rocket Mags
	class Titan_AA;
	class CA_LauncherMagazine;
	class Titan_AT;


	class DBA_RPS_AT_x1_mag: Titan_AT
	{
		scope = 2;
		displayName = "RPS AT Rocket";
		ammo = "DBA_RPS_AT_ammo";
		type = "2 *   256";
		count = 1;
		initSpeed = 60;
		maxLeadSpeed = 60;
		mass = 70;
	};
	class DBA_RPS_AA_x1_mag: Titan_AA 
	{
		author = "Bohemia Interactive";
		scope = 2;
		displayName = "RPS AA Rocket";
		displayNameShort = "AA";
		ammo = "DBA_RPS_AA_ammo";
		type = "6 * 		256";
		picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
		initSpeed = 18;
		maxLeadSpeed = 277.778;
		descriptionShort = "Type: Anti-Air<br />Rounds: 1<br />Used in: Titan MPRL";
		mass = 100;
	};
	class RPG32_F;
	class 101st_RPS6_HEAA: RPG32_F
	{
		author="Dutch";
		ammo="101st_RPS6_HEAA_R";
		count=1;
		descriptionshort="";
		displayname="RPS6 HEAA";
		displaynameshort="HEAA";
		//model="101st_Aux_Mod\Addons\Weapons\RPS6\RPS6.p3d";
		//modelspecial="101st_Aux_Mod\Addons\Weapons\RPS6\RPS6.p3d";
		mass=50;
	};
	class 101st_RPS6_HEDP: RPG32_F
	{
		author="Dutch";
		ammo="101st_RPS6_HEDP_R";
		count=1;
		descriptionshort="";
		displayname="RPS6 HEDP";
		displaynameshort="HEDP";
		//model="101st_Aux_Mod\Addons\Weapons\RPS6\RPS6.p3d";
		//modelspecial="101st_Aux_Mod\Addons\Weapons\RPS6\RPS6.p3d";
		mass=50;
	};
	class 101st_AA_Mag : CA_LauncherMagazine{
		ammo="101st_AA_Ammo";
		descriptionShort = "Type: Anti-Air<br />Rounds: 1<br />Used in: Titan MPRL";
		displayName = "101st AA Quick-Fire Rocket";
		displayNameShort = "AA Rockets";
		initSpeed = 40;
		mass = 175;
		maxLeadSpeed = 277.778;
		type = "6 * 		256";
		picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		model = "\A3\weapons_f\launchers\nlaw\nlaw_proxy";
		count = 3;
		scope = 2;
	};
	class 101st_AT_Mag : CA_LauncherMagazine{
		ammo="101st_AT_Ammo";
		descriptionShort = "Type: Anti-Tank<br />Rounds: 1<br />Used in: Titan MPRL";
		displayName = "101st AT Quick-Fire Rocket";
		displayNameShort = "AT Rockets";
		initSpeed = 60;
		mass = 160;
		maxLeadSpeed = 277.778;
		type = "2 * 256";
		picture = "\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_rocket_ca.paa";
		model = "\A3\weapons_f\launchers\nlaw\nlaw_proxy";
		count = 3;
		scope = 2;
	};
	class 101st_AP_Mag : CA_LauncherMagazine{
		ammo="101st_AP_Ammo";
		descriptionShort = "Type: Anti-Personnel<br />Rounds: 1<br />Used in: Titan MPRL";
		displayName = "101st AP Quick-Fire Rocket";
		displayNameShort = "AP Rockets";
		initSpeed = 60;
		mass = 100;
		maxLeadSpeed = 277.778;
		type = "2 * 256";
		picture = "\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_rocket_ca.paa";
		model = "\A3\weapons_f\launchers\nlaw\nlaw_proxy";
		count = 2;
		scope = 2;
	};

	// Shotgun
	class 101st_City_Killer_Buff : CA_Magazine  {
	        scope=2;
	        author="Dutch";
	        displayName="101st CK Base 10Rnd";
			descriptionShort = "Killer Base";
			displayNameShort = "Killer Base";
	        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
			model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
	        ammo="101st_Buff_Pellets";
	        mass=10;
	        count=10;
	        initSpeed=300;
	        tracersEvery=1;
	        lastRoundsTracer=35;
	        //descriptionShort="Buffed charge cell used by the City Killer";
	};	
	class 101st_City_Killer_Slug : CA_Magazine  {
	        scope=2;
	        author="Dutch";
	        displayName="101st CK Slugs 4Rnd (Blue)";
			descriptionShort = "Slugs";
			displayNameShort = "Slugs";
	        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
			model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
	        ammo = "101st_Slug_Shots";
	        mass=18;
	        count=4;
	        initSpeed=400;
	        tracersEvery=1;
	        lastRoundsTracer=35;
	};
	class 101st_City_Killer_Slug_Red : 101st_City_Killer_Slug
	{
		ammo = "101st_Slug_Shots_Red";
		displayName="101st CK Slugs 4Rnd (Red)";
	};
	class 101st_City_Killer_Slug_Green : 101st_City_Killer_Slug
	{
		ammo = "101st_Slug_Shots_Green";
		displayName="101st CK Slugs 4Rnd (Green)";
	};

	//Stuns
	class 16Rnd_9x21_Mag;
	class 101st_Stun_Short: 16Rnd_9x21_Mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="Dutch";
		modelSpecial="";
		modelSpecialIsProxy=0;
		displayName="101st Stun 6Rnd(Short)";
		displayNameShort="101st Stun Short";
		model="\MRC\JLTS\weapons\Core\stun_mag.p3d";
		picture="\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca.paa";
		count=6;
		ammo="JLTS_bullet_stun";
		descriptionShort="101st Stun Short";
		tracersEvery=1;
		initSpeed=50;
		JLTS_stunDuration=5;
	};
	class 101st_Stun_Long: 101st_Stun_Short
	{
		displayName="101st Stun 3Rnd(Long)";
		displayNameShort="101st Stun Long";
			descriptionShort="101st Stun Long";
		count=3;
		JLTS_stunDuration=15;
	};

	class 101st_CIS_LR_Mag : CA_Magazine 
	{
		ammo = "101st_Sniper_Ammo_Red";
		count = 5000;
		initSpeed = 600;
		picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
		selectionFireAnim = "zasleh";
		type = 256;
		tracersEvery = 1;
		mass = 10;
		scope = 2;
		weight = 0;
		displayName="101st CIS LR 5000Rnd";
	};



	//UGL and Grenades
	class SmokeShell;
	class 1Rnd_HE_Grenade_shell;
	class smoke_meme_mag: SmokeShell

	{
		author = "Bohemia Interactive";
		displayNameShort = "Yeet Smoke";
		ammo = "smoke_meme";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_blue";
		descriptionShort = "Type: Smoke Grenade - Blue<br />Rounds: 1<br />Used in: Hand";
		displayName = "[]M18 Smoke Grenade (Yeet)";
	};
	class SmokeShell_Cluster: SmokeShell{
		author="Dutch";
		displayName="101st Cluster Smoke (White)";
		displayNameShort="Smokescreen";
		ammo="SmokeClusterShot";
		initSpeed = 22;
		model = "\thermalD\swsmoke";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		type = 256;
		mass=15;
	};
	class SmokeShell_Cluster_Full: SmokeShell_Cluster{
		author="Dutch";
		displayName="101st Cluster Smoke 360 (White)";
		displayNameShort="Smokescreen 360";
		ammo="SmokeClusterShot_Full";
		mass=15;
	};
	class 1Rnd_Smoke_ClusterShot_Grenade_shell: 1Rnd_HE_Grenade_shell{
		author="Dutch";
		hit = 0;
		explosive = 0;
		displayName="101st Cluster Smoke (White)";
		displayNameShort="Smokescreen";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		ammo="G_40mm_SmokeClusterShot";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_Smoke_Grenade_shell1";
		mass = 15;
	};
	class 3Rnd_Smoke_ClusterShot_Grenade_shell: 1Rnd_Smoke_ClusterShot_Grenade_shell{
		author="Dutch";
		count=3;
		displayName="101st Cluster 3Rnd Smoke (White)";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_Smoke_Grenade_shell1";
		mass=45;
	};
	class 1Rnd_Smoke_ClusterShot_Full_Grenade_shell: 1Rnd_Smoke_ClusterShot_Grenade_shell{
		author="Dutch";
		displayName="101st Cluster Smoke 360 (White)";
		displayNameShort="Smoke 360";
		ammo="G_40mm_SmokeClusterShot_Full";
		mass=15;
	};
	class 3Rnd_Smoke_ClusterShot_Full_Grenade_shell: 1Rnd_Smoke_ClusterShot_Full_Grenade_shell{
		author="Dutch";
		count=3;
		displayName="101st Cluster 3Rnd Smoke 360 (White)";
		displayNameShort="Smoke 3RD 360";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_Smoke_Grenade_shell1";
		mass=45;
	};
	class UGL_FlareWhite_Super_Cluster_F: UGL_FlareWhite_F{
		author="Dutch";
		displayName="101st Cluster Flare Round (White)";
		displayNameshort="Cluster Flare";
		ammo="F_40mm_WhiteSuper_Cluster";
		initSpeed=320;
		mass=15;
	};
	class 3Rnd_UGL_FlareWhite_Super_Cluster_F: UGL_FlareWhite_Super_Cluster_F{
		author="Dutch";
		count=3;
		displayName="101st Cluster 3Rnd Flare Round (White)";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flarewhite_f1";
		mass=45;
	};
	class DBA_40mm_white_x3_mag: UGL_FlareWhite_F
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
	class DBA_40mm_white_x1_mag: DBA_40mm_white_x3_mag
	{
		displayName = "Flare 1 Rounds (White)";
		descriptionShort = "Type: Flare 1 Rounds - White";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_CIR_x3_mag: DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (IR)";
		ammo = "DBA_40mm_cir_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_purple_CA.paa";
		descriptionShort = "Type: Flare - IR<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "IR";
	};
	class DBA_40mm_CIR_x1_mag: DBA_40mm_CIR_x3_mag
	{
		displayName = "Flare 1 Rounds (IR)";
		descriptionShort = "Type: Flare 1 Rounds - IR";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Green_x3_mag: DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Green)";
		displayNameShort = "Green Flare";
		ammo = "DBA_40mm_green_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
		descriptionShort = "Type: Flare - Green<br />Rounds: 1<br />Used in: EGLM, 3GL";
	};
	class DBA_40mm_Green_x1_mag: DBA_40mm_Green_x3_mag
	{
		displayName = "Flare 1 Rounds (Green)";
		descriptionShort = "Type: Flare 1 Rounds - Green";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Red_x3_mag: DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Red)";
		ammo = "DBA_40mm_red_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
		descriptionShort = "Type: Flare - Red<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "Red Flare";
	};
	class DBA_40mm_Red_x1_mag: DBA_40mm_Red_x3_mag
	{
		displayName = "Flare 1 Rounds (Red)";
		descriptionShort = "Type: Flare 1 Rounds - Red";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Yellow_x3_mag: DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Yellow)";
		ammo = "DBA_40mm_yellow_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort = "Type: Flare - Yellow<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "Yellow Flare";
	};
	class DBA_40mm_Yellow_x1_mag: DBA_40mm_Yellow_x3_mag
	{
		displayName = "Flare 1 Rounds (Yellow)";
		descriptionShort = "Type: Flare 1 Rounds - Yellow";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Blue_x3_mag: DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Blue)";
		ammo = "DBA_40mm_blue_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort = "Type: Flare - Blue<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "Blue Flare";
	};
	class DBA_40mm_Blue_x1_mag: DBA_40mm_Blue_x3_mag
	{
		displayName = "Flare 1 Rounds (Blue)";
		descriptionShort = "Type: Flare 1 Rounds - Blue";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Cyan_x3_mag: DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Cyan)";
		ammo = "DBA_40mm_cyan_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort = "Type: Flare - Cyan<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "Cyan Flare";
	};
	class DBA_40mm_Cyan_x1_mag: DBA_40mm_Cyan_x3_mag
	{
		displayName = "Flare 1 Rounds (Cyan)";
		descriptionShort = "Type: Flare 1 Rounds - Cyan";
		mass = 1;
		count = 1;
	};
	class DBA_40mm_Purple_x3_mag: DBA_40mm_white_x3_mag
	{
		author = "Bohemia Interactive";
		displayName = "Flare 3 Rounds (Purple)";
		ammo = "DBA_40mm_purple_ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort = "Type: Flare - Purple<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "Purple Flare";
	};
	class DBA_40mm_Purple_x1_mag: DBA_40mm_Purple_x3_mag
	{
		displayName = "Flare 1 Rounds (Purple)";
		descriptionShort = "Type: Flare 1 Rounds - Purple";
		mass = 1;
		count = 1;
	};
	class DBA_AT_GL_x2_mag: CA_Magazine
	{
		author = "DBA";
		scope = 2;
		type = 16;
		displayName = "2 Rnd LR AP DC-15A Grenades";
		displayNameShort = "2 Rnd LR AP DC-15A";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = "DBA_GL_AT_ammo";
		initSpeed = 220;
		count = 2;
		nameSound = "";
		descriptionShort = "2Rnd LR AP DC-15A Grenade";
		mass = 15;
	};
	class DBA_HE_GL_x3_mag: DBA_AT_GL_x2_mag
	{
		displayName = "3 Rnd LR HE DC-15A Grenades";
		displayNameShort = "3 RndLR HE DC-15A";
		count = 3;
		ammo = "DBA_GL_HE_ammo";
		descriptionShort = "3Rnd LR HE DC-15A Grenade";
		initSpeed = 120;
	};
	class DBA_AT_GL_x6_mag : DBA_AT_GL_x2_mag
	{
		displayName = "6 Rnd LR AP HH-4 Grenades";
		displayNameShort = "6 Rnd LR AP HH-4";
		ammo = "DBA_GL_AT_ammo";
		initSpeed = 220;
		count = 6;
		nameSound = "";
		descriptionShort = "Grenade go burr";
		mass = 15;
	};
	class DBA_HE_GL_x8_mag : DBA_AT_GL_x2_mag
	{
		displayName = "8 Rnd LR HE HH-4 Grenades";
		displayNameShort = "8 RndLR HE HH-4";
		count = 8;
		ammo = "DBA_GL_HE_ammo";
		descriptionShort = "Grenade go burr";
		initSpeed = 120;
	};


	//SWOP STUFF BELOW
	class 101st_flash_GL_x3_mag : CA_Magazine
	{
		ammo = "DBA_GL_Flash_ammo";
		author = "Dutch";
		count = 3;
		descriptionShort = "3Rnd Breach Flash DC-15A Grenade";
		displayName = "3 Rnd Breach Flash DC-15A Grenades";
		displayNameShort = "3Rnd Breach Flash DC-15A";
		initSpeed = 120;
		mass = 15.67;
		maxLeadSpeed = 25;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		model = "\z\ace\addons\grenades\models\ACE_m84_thrown.p3d";
		modelSpecial = "";
		nameSound = "";
		picture = "\thermalD\flash_x_ca.paa";
		quickReload = 0 ;
		reloadAction = "";
		scope = 2;
		selectionFireAnim = "zasleh";
		simulation = "ProxyMagazines";
		type = 16;
		useAction = 0;
		useActionTitle = "";
		value = 1;
		weaponpoolavailable = 1;
		weight = 0;
		class InventoryPlacements;
		class Library {
			libTextDesc = "";
		};
	};


	// vehicles
	class 200Rnd_127x99_mag_Tracer_Red;
	class 680Rnd_35mm_AA_shells_Tracer_Red;
	class 20Rnd_120mm_HEAT_MP;
	class 101st_TX130_mg_mag: 680Rnd_35mm_AA_shells_Tracer_Red
	{
		author="Dutch";
		ammo="101st_TX130_mg_ammo";
		descriptionShort="TX130 MG Rounds";
		displayNameshort="TX130 MG Rounds";
	};
	class 101st_TX130_cannon_mag: 20Rnd_120mm_HEAT_MP
	{
		author="Dutch";
		ammo="101st_TX130_cannon_ammo";
		descriptionShort="TX130 Cannon Rounds";
		displayNameshort="TX130 Cannon Rounds";
	};
	class 101st_Bantha_Mag: CA_Magazine
	{
		scope=2;
		displayName="101st Bantha 45Rnd (Blue)";
		ammo="101st_Bantha_Ammo";
		tracersEvery = 1;
		type=256;
		count = 45;
		descriptionShort="101st Bantha";
		displayNameShort = "101st Bantha";
		mass = 13;
		initSpeed = 310;
		picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_mag_ui_ca.paa";
		model = "\SW_ExtraWeapons\PICKUPS\bolts.p3d";
	};

	class 101st_Bantha_Mag_Red : 101st_Bantha_Mag
	{
		displayName="101st Bantha 45Rnd (Red)";
		ammo="101st_Bantha_Ammo_Red";
	};
	class 101st_Bantha_Mag_Green : 101st_Bantha_Mag
	{
		displayName="101st Bantha 45Rnd (Green)";
		ammo="101st_Bantha_Ammo_Green";
	};
};

class CfgAmmo
{
	class JLTS_bullet_carbine_blue;
	class JLTS_bullet_carbine_red;
	class JLTS_bullet_carbine_green;
	class JLTS_bullet_carbine_yellow;
	class JLTS_bullet_carbine_orange;

	class JLTS_bullet_rifle_blue;
	class JLTS_bullet_rifle_red;
	class JLTS_bullet_rifle_green;
	class JLTS_bullet_rifle_yellow;
	class JLTS_bullet_rifle_orange;

	class JLTS_bullet_pistol_blue;
	class JLTS_bullet_pistol_red;
	class JLTS_bullet_pistol_green;
	class JLTS_bullet_pistol_yellow;
	class JLTS_bullet_pistol_orange;

	class JLTS_bullet_scatter_blue;
	class JLTS_bullet_scatter_red;
	class JLTS_bullet_scatter_green;
	class JLTS_bullet_scatter_yellow;
	class JLTS_bullet_scatter_orange;

	class JLTS_bullet_sniper_blue;
	class JLTS_bullet_sniper_red;
	class JLTS_bullet_sniper_green;
	class JLTS_bullet_sniper_yellow;
	class JLTS_bullet_sniper_orange;

	class JLTS_bullet_stun;
	class JLTS_bullet_emp;

	class Default;	// External class reference
	class Grenade : Default {};
	class GrenadeHand : Grenade {};
	class M_Titan_AT;
	class R_PG32V_F;
	class R_TBG32V_F;
	class LaserAmmo_Minigun;
	class FlareBase;
	class G_40mm_HE;
	class ATMine_Range_Ammo;
	class PipeBombBase;
	class A_RocketHH15Clone_HEAT_FireForget;
	class M_Titan_AA;
	
	class BulletBase;
	class ShotgunBase;


#include NewAmmo.hpp

//AMMO REDO VOLUME 2

		class DBA_ammo_base:BulletBase
		{
			hit=8; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=0.86956501; //Acts as penetration multiplier for the projectile.
			typicalspeed=920; //What speed does this need to be going to inflict full damage

			//Penetration depth in mm: velocity[m/s] * caliber * penetrability / 1000. Penetrability is a material property (for RHA steel it is 15, for concrete 80, for meat 250).

			nvgonly=0;

			airlock=1;
			irtarget=1;

			dangerRadiusBulletClose=8; //AI Stuff
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionradiushit=8;

			aiAmmoUsageFlags="32 + 64 + 128 + 256 + 512"; //What AI will shoot at 

			//32 	Underwater 			used in underwater environment
			//64 	OffensiveInf 		against infantry
			//128 	OffensiveVeh 		against vehicles
			//256 	OffensiveAir 		against air
			//512 	OffensiveArmour 	against armored vehicles 

			audiblefire=35;

			brightness=1000; // How Bright/color
			effectfly="442_plasma_blue";
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			lightcolor[]={.5,.5,.5}; //Color of light in {R,G,B}
			flaresize=5; //how big the flash is

			tracerscale=0.5; //how big the model is that comes out of the barrel
			effectflare="FlareShell";
			tracerstarttime=0.050000001;
			tracerendtime=10;
			
			waterFriction=0;

			cartridge=""; //no cartrige pls

			cost=1;
			muzzleeffect="";
			deflecting=0;
			inittime=0;

			timetolive=6; // How long the ammo flys in seconds

			coefgravity=0; //Makes them fly like lasers
			airfriction=0;

			supersoniccracknear[]={};
			supersoniccrackfar[]={};
			class SuperSonicCrack
			{
			};
			bulletFly[]=
			{
				"bulletFly1",
				0.082999997,
				"bulletFly2",
				0.082999997,
				"bulletFly3",
				0.082999997,
				"bulletFly4",
				0.082999997,
				"bulletFly5",
				0.082999997,
				"bulletFly6",
				0.082999997,
				"bulletFly7",
				0.082999997,
				"bulletFly8",
				0.082999997,
				"bulletFly9",
				0.082999997,
				"bulletFly10",
				0.082999997,
				"bulletFly11",
				0.082999997,
				"bulletFly12",
				0.082999997
			};
			bulletFly1[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly10[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly11[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly12[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly2[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly3[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.58,
				1,
				30
			};
			bulletFly4[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			bulletFly5[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			bulletFly6[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			bulletFly7[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			bulletFly8[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			bulletFly9[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				2.2387199,
				1,
				100
			};
			soundHit1[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			soundHit2[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			soundHit3[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			soundHit4[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			soundHit5[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			soundHit6[]=
			{
				"kobra\kobra_core\sounds\blaster_fire1.wss",
				1.9952624,
				1,
				120
			};
			multiSoundHit[]=
			{
				"soundHit1",
				0.2,
				"soundHit2",
				0.2,
				"soundHit3",
				0.2,
				"soundHit4",
				0.1,
				"soundHit5",
				0.15000001,
				"soundHit6",
				0.15000001
			};
			class HitEffects
			{
				default_mat="442_plasma_impact";
				Hit_Foliage_Banana="442_plasma_impact";
				Hit_Foliage_Dead="442_plasma_impact";
				Hit_Foliage_green="442_plasma_impact";
				Hit_Foliage_Green_big="442_plasma_impact";
				Hit_Foliage_Palm="442_plasma_impact";
				Hit_Foliage_Pine="442_plasma_impact";
				hitBuilding="442_plasma_impact";
				hitConcrete="442_plasma_impact";
				hitFoliage="442_plasma_impact";
				hitGlass="442_plasma_impact";
				hitGlassArmored="442_plasma_impact";
				hitGroundHard="442_plasma_impact";
				hitGroundRed="442_plasma_impact";
				hitGroundSoft="442_plasma_impact";
				hitHay="442_plasma_impact";
				hitMan="442_plasma_impact";
				hitMetal="442_plasma_impact";
				hitMetalPlate="442_plasma_impact";
				hitPlastic="442_plasma_impact";
				hitRubber="442_plasma_impact";
				hitTyre="442_plasma_impact";
				hitVirtual="442_plasma_impact";
				hitWater="442_plasma_impact";
				hitWood="442_plasma_impact";
			};
		};

		class DBA_shotgun_base: ShotgunBase
		{
			effectfly="442_plasma_blue";
			simulation="shotSpread"; //This makes it spread
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			lightcolor[]={.5,.5,.5};
			flaresize=5;
			tracerscale=1.1;
			effectflare="FlareShell";
			tracerstarttime=0;
			tracerendtime=10;
			class HitEffects
			{
				default_mat="442_plasma_impact";
				Hit_Foliage_Banana="442_plasma_impact";
				Hit_Foliage_Dead="442_plasma_impact";
				Hit_Foliage_green="442_plasma_impact";
				Hit_Foliage_Green_big="442_plasma_impact";
				Hit_Foliage_Palm="442_plasma_impact";
				Hit_Foliage_Pine="442_plasma_impact";
				hitBuilding="442_plasma_impact";
				hitConcrete="442_plasma_impact";
				hitFoliage="442_plasma_impact";
				hitGlass="442_plasma_impact";
				hitGlassArmored="442_plasma_impact";
				hitGroundHard="442_plasma_impact";
				hitGroundRed="442_plasma_impact";
				hitGroundSoft="442_plasma_impact";
				hitHay="442_plasma_impact";
				hitMan="442_plasma_impact";
				hitMetal="442_plasma_impact";
				hitMetalPlate="442_plasma_impact";
				hitPlastic="442_plasma_impact";
				hitRubber="442_plasma_impact";
				hitTyre="442_plasma_impact";
				hitVirtual="442_plasma_impact";
				hitWater="442_plasma_impact";
				hitWood="442_plasma_impact";
			};
		};
		
	//Rifle Calibers

		class DBA_556_base:DBA_ammo_base //556 NATO
		{
			hit=9; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=0.86956501; //Acts as penetration multiplier for the projectile.
			typicalspeed=920; //What speed does this need to be going to inflict full damage

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=2.2360699;
				duration=0.40000001;
				frequency=20;
				distance=6.7082;
			};
			class CamShakeHit
			{
				power=5;
				duration=0.2;
				frequency=20;
				distance=1;
			};
		};
		class DBA_65_base:DBA_ammo_base //65 MX
		{
			hit=10; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1; //Acts as penetration multiplier for the projectile.
			typicalspeed=820; //What speed does this need to be going to inflict full damage

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=2.4494901;
				duration=0.40000001;
				frequency=20;
				distance=7.3484702;
			};
			class CamShakeHit
			{
				power=6;
				duration=0.40000001;
				frequency=20;
				distance=1;
			};
		};
		class DBA_762_base:DBA_ammo_base //762 Nato
		{
			hit=11.6; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1.6; //Acts as penetration multiplier for the projectile.
			typicalspeed=800; //What speed does this need to be going to inflict full damage

			audibleFire=45; //Alerts AI from further away

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=2.8284299;
				duration=0.60000002;
				frequency=20;
				distance=8.48528;
			};
			class CamShakeHit
			{
				power=5;
				duration=0.2;
				frequency=20;
				distance=1;
			};
		};
		class DBA_338_base:DBA_ammo_base //.338 Win Mag
		{
			hit=16; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=2; //Acts as penetration multiplier for the projectile.
			typicalSpeed=890; //What speed does this need to be going to inflict full damage

			audibleFire=80; //Alerts AI from further away

			dangerRadiusBulletClose=10;
			dangerRadiusHit=14;
			suppressionRadiusBulletClose=8;
			suppressionRadiusHit=10;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=2.8284299;
				duration=0.60000002;
				frequency=20;
				distance=8.48528;
			};
			class CamShakeHit
			{
				power=5;
				duration=0.2;
				frequency=20;
				distance=1;
			};
		};
		class DBA_408_base:DBA_ammo_base //408 Cheytac
		{
			hit=24; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1.6; //Acts as penetration multiplier for the projectile.
			typicalspeed=800; //What speed does this need to be going to inflict full damage

			visibleFire=5;
			audibleFire=120;
			visibleFireTime=3; //Alerts AI from further away

			tracerScale=1.2;

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=3.1622801;
				duration=0.60000002;
				frequency=20;
				distance=9.4868298;
			};
			class CamShakeHit
			{
				power=10;
				duration=0.40000001;
				frequency=20;
				distance=1;
			};
		};
		class DBA_127x99_base:DBA_ammo_base //50 BMG
		{
			hit=30; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=2.5999999; //Acts as penetration multiplier for the projectile.
			typicalSpeed=880; //What speed does this need to be going to inflict full damage

			visibleFire=8;
			audibleFire=120;
			visibleFireTime=3; //Alerts AI from further away

			tracerScale=1.2;

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=3.6055501;
				duration=0.80000001;
				frequency=20;
				distance=10.8167;
			};
			class CamShakeHit
			{
				power=13;
				duration=0.40000001;
				frequency=20;
				distance=1;
			};
		};
		class DBA_127x99_SLAP_base:DBA_ammo_base //50 SLAP - Use for Snipers
		{
			hit=50;//How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=3.4000001; //Acts as penetration multiplier for the projectile.
			typicalSpeed=880; //What speed does this need to be going to inflict full damage

			visibleFire=8;
			audibleFire=120;
			visibleFireTime=3; //Alerts AI from further away

			tracerScale=1.2;

			dangerRadiusBulletClose=8;
			dangerRadiusHit=12;
			suppressionRadiusBulletClose=6;
			suppressionRadiusHit=8;
			aiAmmoUsageFlags=64;
			class CamShakeExplode
			{
				power=4.4721398;
				duration=0.80000001;
				frequency=20;
				distance=13.4164;
			};
			class CamShakeHit
			{
				power=20;
				duration=0.40000001;
				frequency=20;
				distance=1;
			};
		};

	//Pistol Calibers

		class DBA_9x21_base:DBA_ammo_base //9mm Luger
		{
			hit=5; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1.2; //Acts as penetration multiplier for the projectile.
			typicalSpeed=380; //What speed does this need to be going to inflict full damage

			audibleFire=30;

			aiAmmoUsageFlags=64;
			dangerRadiusBulletClose=4;
			dangerRadiusHit=8;
			suppressionRadiusBulletClose=2;
			suppressionRadiusHit=4;
		};
		class DBA_45acp_base:DBA_ammo_base //45ACP
		{
			hit=5; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1.2; //Acts as penetration multiplier for the projectile.
			typicalSpeed=280; //What speed does this need to be going to inflict full damage

			audibleFire=50;

			aiAmmoUsageFlags=64;
			dangerRadiusBulletClose=4;
			dangerRadiusHit=8;
			suppressionRadiusBulletClose=2;
			suppressionRadiusHit=4;
		};
		class DBA_127x33_base:DBA_ammo_base //.50 Action Express
		{
			hit=7.5; //How much damage when it hits
			indirecthit=0; //Splash Damage
			indirecthitrange=0; //Splash Damage Range in meters
			caliber=1; //Acts as penetration multiplier for the projectile.
			typicalSpeed=420; //What speed does this need to be going to inflict full damage

			audibleFire=50;

			aiAmmoUsageFlags=64;
			dangerRadiusBulletClose=4;
			dangerRadiusHit=8;
			suppressionRadiusBulletClose=2;
			suppressionRadiusHit=4;
		};
	
	//Shotgun Calibers

		class DBA_12gaSlug_Base:DBA_ammo_base //12GA
		{
			hit=42;
			indirectHit=0;
			indirectHitRange=0;
			cost=5;
			typicalSpeed=600;
			airFriction=-0.0080000004;
			caliber=3;
			deflecting=30;
		};
		class DBA_12gaPellets_Base:DBA_shotgun_base //12GA
		{
			hit=2;
			indirectHit=2;
			indirectHitRange=0.40000001;
			cost=5;
			typicalSpeed=400;
			airFriction=-0.0080000004;
			caliber=1;
			deflecting=30;
			class CamShakeFire
			{
				power=3;
				duration=0.5;
				frequency=20;
				distance=10;
			};
			class CamShakePlayerFire
			{
				power=1;
				duration=0.1;
				frequency=20;
			};
			class CamShakeHit
			{
				power=10;
				duration=1;
				frequency=20;
			};
		};

	//556 Color Variants

		class DBA_556_blue: DBA_556_base
		{
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_556_green: DBA_556_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_556_orange: DBA_556_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_556_red: DBA_556_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_556_pink: DBA_556_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_556_purple: DBA_556_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_556_black: DBA_556_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_556_yellow: DBA_556_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};

	//6.5 Color Variants

		class DBA_65_blue: DBA_65_base
		{
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_65_green: DBA_65_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_65_orange: DBA_65_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_65_red: DBA_65_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_65_pink: DBA_65_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_65_purple: DBA_65_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_65_black: DBA_65_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_65_yellow: DBA_65_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};

	//7.62 Color Variants

		class DBA_762_blue: DBA_762_base
		{
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_762_green: DBA_762_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_762_orange: DBA_762_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_762_red: DBA_762_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_762_pink: DBA_762_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_762_purple: DBA_762_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_762_black: DBA_762_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_762_yellow: DBA_762_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};

	//.338 Color Variants

		class DBA_338_blue: DBA_338_base
		{
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_338_green: DBA_338_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_338_orange: DBA_338_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_338_red: DBA_338_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_338_pink: DBA_338_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_338_purple: DBA_338_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_338_black: DBA_338_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_338_yellow: DBA_338_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};

	//.408 Color Variants

		class DBA_408_blue: DBA_408_base
		{
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_408_green: DBA_408_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_408_orange: DBA_408_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_408_red: DBA_408_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_408_pink: DBA_408_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_408_purple: DBA_408_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_408_black: DBA_408_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_408_yellow: DBA_408_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};

	//.50 BMG Color Variants

		class DBA_127x99_blue: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_127x99_green: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_127x99_orange: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_127x99_red: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_127x99_pink: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_127x99_purple: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_127x99_black: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_127x99_yellow: DBA_127x99_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};
	
	//.50 SLAP Color Variants

		class DBA_127x99_SLAP_blue: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_127x99_SLAP_green: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_127x99_SLAP_orange: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_127x99_SLAP_red: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_127x99_SLAP_pink: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_127x99_SLAP_purple: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_127x99_SLAP_black: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_127x99_SLAP_yellow: DBA_127x99_SLAP_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};
		
	//9mm Color Variants

		class DBA_9x21_blue: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_9x21_green: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_9x21_orange: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_9x21_red: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_9x21_pink: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_9x21_purple: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_9x21_black: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_9x21_yellow: DBA_9x21_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};	

	//.45 Color Variants

		class DBA_45acp_blue: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_45acp_green: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_45acp_orange: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_45acp_red: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_45acp_pink: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_45acp_purple: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_45acp_black: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_45acp_yellow: DBA_45acp_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};		

	//.50 Action Color Variants

		class DBA_127x33_blue: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\blue_tracer.p3d";
			effectfly="442_plasma_blue";
		};
		class DBA_127x33_green: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\green_tracer.p3d";
			effectfly="442_plasma_green";
		};
		class DBA_127x33_orange: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\orange_tracer.p3d";
			effectfly="442_plasma_orange";
		};
		class DBA_127x33_red: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\red_tracer.p3d";
			effectfly="442_plasma_red";
		};
		class DBA_127x33_pink: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\pink_tracer.p3d";
			effectfly="442_plasma_pink";
		};
		class DBA_127x33_purple: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\purple_tracer.p3d";
			effectfly="442_plasma_purple";
		};
		class DBA_127x33_black: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\black_tracer.p3d";
			effectfly="442_plasma_black";
		};
		class DBA_127x33_yellow: DBA_127x33_base
		{
			model="kobra\442_weapons\ammo\yellow_tracer.p3d";
			effectfly="442_plasma_yellow";
		};			
>>>>>>> 0903a8f141e3b773ff1f3c1411b44f0f052a2221

		
//OLD AMMO
	//Other Clone Weapons
	class DBA_westar_35_ammo: JLTS_bullet_carbine_blue
	{
		hit = 15;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		caliber = 5;
	};
	class DBA_z6_ammo: JLTS_bullet_pistol_blue
	{
		hit = 16;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		caliber = 4;
		ACE_caliber = 0;
	};

	//DC Series
	class DBA_dc_17_ammo: JLTS_bullet_pistol_blue
	{
		hit = 10;
		waterFriction = -0.001;
		caliber = 2.8;
	};
	class DBA_DC15x_ammo: JLTS_bullet_sniper_blue
	{
		hit = 55;
		caliber = 6;
		waterFriction = -0.001;
		timeToLive = 5;
	};
	class DBA_dc15s_carbine_ammo: JLTS_bullet_carbine_blue
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		caliber = 5;
		hit = 10;
	};
	class DBA_dc15_underwater_ammo: DBA_dc15s_carbine_ammo
	{
		waterFriction = -0.001;
		effectFly = "AmmoUnderwater";
		nvgOnly = 1;
		aiAmmoUsageFlags = "64 + 32";
		deflecting = 0;
		deflectionSlowDown = 0.8;
		caliber = 5;
		hit = 10;
	};
	class DBA_dc15a_med_ammo: JLTS_bullet_rifle_blue
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		caliber = 5;
		hit = 12;
	};
	class DBA_dc15a_high_ammo: JLTS_bullet_rifle_blue
	{
		hit = 25;
		waterFriction = -0.001;
		caliber = 5;
		timeToLive = 4;
	};
	class DBA_dc15a_low_ammo: JLTS_bullet_rifle_blue
	{
		hit = 6;
		waterFriction = -0.001;
		caliber = 5;
		timeToLive = 4;
	};
	class DBA_dc15_LE_ammo: JLTS_bullet_sniper_blue
	{
		hit = 33;
		waterFriction = -0.001;
		caliber = 5;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
	};
	class DBA_DC15_Hammerhead_ammo:JLTS_bullet_pistol_yellow
	{
		hit = 50;
		caliber = 5;
	};
	class 101st_DC15x_Plasma: JLTS_bullet_sniper_blue 
	{
		timeToLive=10;
		tracerScale = 1.5;
		thrust = 410;
		thrustTime = 3.0;
		typicalSpeed = 1810;
		caliber = 65;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		hit = 150;
	};
	
	class SmokeShell;
	class smoke_meme: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_blue_throw";
		smokeColor[] = {0.1183,0.1867,1,1};
		effectsSmoke = "smoke_yeet";
	};

	//Shotgun
	class 101st_Buff_Pellets : JLTS_bullet_scatter_blue
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		dangerRadiusHit = 40;
		dangerRadiusBulletClose = 16;
		explosive = 0;
		hit = 55;
		cartridge = "";
		caliber = 3;
		fireSpreadAngle = 30;
	};
	class 101st_Slug_Shots : JLTS_bullet_sniper_blue
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		simulation = "shotBullet";
		cartridge = "";
		caliber = 20;
		dangerRadiusHit = 40;
		dangerRadiusBulletClose = 16;
		hit = 80;
	};
	class 101st_Slug_Shots_Red : 101st_Slug_Shots
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		lightcolor[] = {0.5,0.25,0.25};
		effectfly = "JLTS_plasma_red";
	};
	class 101st_Slug_Shots_Green : 101st_Slug_Shots
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		lightcolor[] = {0.25,0.5,0.25};
		effectfly = "JLTS_plasma_green";
	};
	class 101st_Westar_Beans : JLTS_bullet_pistol_blue
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		hit = 35;
		explosive = 0;
		caliber = 20;
	};
	class 101st_Westar_Beans_Red : 101st_Westar_Beans
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		lightcolor[] = {0.25,0.5,0.25};
		effectfly = "JLTS_plasma_green";
	};
	class 101st_Westar_Beans_Green : 101st_Westar_Beans
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		lightcolor[] = {0.5,0.25,0.25};
		effectfly = "JLTS_plasma_red";
	};
	class 101st_PDW_Balls : JLTS_bullet_carbine_blue
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		hit = 18;
		caliber = 15;	
	};
	class 101st_PDW_Balls_Red : 101st_PDW_Balls
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		lightcolor[] = {0.5,0.25,0.25};
		effectfly = "JLTS_plasma_red";
	};
	class 101st_PDW_Balls_Green : 101st_PDW_Balls
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		lightcolor[] = {0.25,0.5,0.25};
		effectfly = "JLTS_plasma_green";
	};
	class 101st_Maalras_Balls : JLTS_bullet_carbine_blue
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		hit = 16;
		caliber = 15;
	};
	class 101st_Maalras_Balls_Red : 101st_Maalras_Balls
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		lightcolor[] = {0.5,0.25,0.25};
		effectfly = "JLTS_plasma_red";
	};
	class 101st_Maalras_Balls_Green : 101st_Maalras_Balls
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		lightcolor[] = {0.25,0.5,0.25};
		effectfly = "JLTS_plasma_green";
	};
	class 101st_Sniper_Ammo : JLTS_bullet_sniper_blue
	{
		caliber = 6;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		hit = 55;
		simulationStep = 0.05;
		thrust = 210;
		thrustTime = 1.5;
		timeToLive = 5;
		typicalSpeed = 900;
		waterFriction = -0.001;
	};

	class 101st_Sniper_Ammo_Red : 101st_Sniper_Ammo
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		lightcolor[] = {0.5,0.25,0.25};
		effectfly = "JLTS_plasma_red";
	};

	class 101st_AT_Rifle_Ammo : JLTS_bullet_sniper_orange
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		audibleFire = 32;
		caliber = 100;
		cost = 200;
		CraterEffects = "ATMissileCrater";
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		effectFlare = "FlareShell";
		effectsFire = "CannonFire";
		explosionDir = "explosionDir";
		explosionEffects = "ATMissileExplosion";
		explosionEffectsDir = "explosionDir";
		explosionPos = "explosionPos";
		explosionType = "explosive";
		explosive = 1;
		fuseDistance = 0;
		hit = 1000;
		htMax = 1800;
		htMin = 60;
		maxSpeed = 320;
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		initTime = 0;
		indirectHit = 20;
		effectsMissileInit = "MissileDAR1";
		indirectHitRange = 2;
		minDamageForCamShakeHit = 0.55;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan",0.630957,1.5,300};
		soundHit[] = {"",100,1};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.51189,1,2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.51189,1,2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.51189,1,2000};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet","RocketsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",0.316228,1,50};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",0.398107,1,20};
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 30;
		thrust = 210;
		thrustTime = 1.5;
		tracerStartTime = 0.075;
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
		visibleFire = 32;
		typicalSpeed = 910;
		simulation = "shotBullet";
		bulletFly[] = {"bulletFly1",0.083,"bulletFly2",0.083,"bulletFly3",0.083,"bulletFly4",0.083,"bulletFly5",0.083,"bulletFly6",0.083,"bulletFly7",0.083,"bulletFly8",0.083,"bulletFly9",0.083,"bulletFly10",0.083,"bulletFly11",0.083,"bulletFly12",0.083};
		bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01",2.23872,1,75};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",2.23872,1,75};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",2.23872,1,75};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",2.23872,1,75};
		bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02",2.23872,1,75};
		bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03",2.23872,1,75};
		bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04",2.23872,1,75};
		bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05",2.23872,1,75};
		bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",2.23872,1,75};
		bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",2.23872,1,75};
		bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",2.23872,1,75};
		bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",2.23872,1,75};
	};

	class M_NLAW_AT_F;
	class 101st_Chaingun_Ammo : M_NLAW_AT_F
	{
		hit=28;
		indirectHit=20;
		indirectHitRange=0.1;
		explosive=0;
		caliber=2;
		ACE_caliber=0;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		cost=500;
		airFriction=0;
		sideairFriction=0;
		coefGravity=0;
		maxSpeed=1050;
		typicalSpeed=1050;
		initTime=0;
		thrustTime=3.4000001;
		thrust=500;
		fuseDistance=0;
		simulationStep=0.02;
		timeToLive=4;
		whistleDist=20;
		triggerOnImpact = 1;
		triggerDistance = 2.5;
		directionalExplosion = 0;
		dangerRadiusBulletClose = -1;
		dangerRadiusHit = -1;
		flightProfiles[] = {"Direct"};
		deleteParentWhenTriggered = 0;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		submunitionAmmo="DBA_chaingun_z6x_penetrator_ammo";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		minTimeToLive = 0;
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
		simulation = "shotMissile";
		proximityExplosionDistance = 5;
		CraterEffects = "ExploAmmoCrater";
		effectFlare = "FlareShell";
		effectFly = "AmmoClassic";
		effectsFire = "CannonFire";
		effectsMissile = "EmptyEffect";
		effectsMissileInit = "";
		effectsSmoke = "SmokeShellWhite";
		explosionAngle = 60;
		explosionEffects = "3AS_ImpactPlasma";
		explosionEffectsDir = "explosionDir";
		
		explosionSoundEffect="";
		muzzleEffect="";
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			150
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			200
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			200
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			2000
		};
		soundFly[]=
		{
			"",
			1,
			1,
			50
		};
		SoundSetExplosion[]=
		{
			""
		};
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactMetalSabotSmall";
			hitGlassArmored="ImpactMetalSabotSmall";
			hitWood="ImpactMetalSabotSmall";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="ImpactMetalSabotSmall";
			hitPlastic="ImpactMetalSabotSmall";
			hitRubber="ImpactMetalSabotSmall";
			hitTyre="ImpactMetalSabotSmall";
			hitConcrete="ImpactMetalSabotSmall";
			hitMan="ImpactMetalSabotSmall";
			hitGroundSoft="ImpactMetalSabotSmall";
			hitGroundRed="ImpactMetalSabotSmall";
			hitGroundHard="ImpactMetalSabotSmall";
			hitWater="ImpactEffectsWater";
			default_mat="ImpactMetalSabotSmall";
		};
		class Direct
		{
		};
		class CamShakeExplode
		{
			power=1;
			duration=1.4;
			frequency=20;
			distance=1;
		};
		class CamShakeHit
		{
			power=1;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=1;
			duration=1.2;
			frequency=20;
			distance=1;
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};

	class 101st_Ion_Ammo : JLTS_bullet_carbine_blue
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		caliber = 15;
		hit = 10;
	};
	class 101st_Ion_Ammo_Red : 101st_Ion_Ammo
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		lightcolor[] = {0.5,0.25,0.25};
		effectfly = "JLTS_plasma_red";
	};
	class 101st_Ion_Ammo_Green : 101st_Ion_Ammo
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		lightcolor[] = {0.25,0.5,0.25};
		effectfly = "JLTS_plasma_green";
	};
	class 101st_MG_Ammo : JLTS_bullet_rifle_blue
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		caliber = 30;
		hit = 25;
	};
	class 101st_MG_Ammo_Red : 101st_MG_Ammo
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		lightcolor[] = {0.5,0.25,0.25};
		effectfly = "JLTS_plasma_red";
	};
	class 101st_MG_Ammo_Green : 101st_MG_Ammo
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		lightcolor[] = {0.25,0.5,0.25};
		effectfly = "JLTS_plasma_green";
	};

	class 101st_Revolver_Shells : JLTS_bullet_pistol_blue
	{
		deflecting = 0;
		deflectionSlowDown = 0.8;
		hit = 35;
		caliber = 20;
	};
	class 101st_Revolver_Shells_Red : 101st_Revolver_Shells
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		lightcolor[] = {0.5,0.25,0.25};
		effectfly = "JLTS_plasma_red";
	};
	class 101st_Revolver_Shells_Green : 101st_Revolver_Shells
	{
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		lightcolor[] = {0.25,0.5,0.25};
		effectfly = "JLTS_plasma_green";
	};
	
	//Vehicle Ammo
	class B_35mm_AA_Tracer_Red;
	class Sh_120mm_HEAT_MP;
	class B_762x39_Ball_Green_F;
	class 101st_Bantha_Ammo : JLTS_bullet_rifle_blue
	{
		deflecting = 0; //swop based
		deflectionSlowDown = 0.8;
		caliber = 18;
		hit = 12;
		simulation = "shotBullet";
		lightColor[] = {0,0,1,1};
		thrust = 210;
		suppressionRadiusBulletClose = 10;
		tracerColor[] = {0,0,1,1};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
		tracerEndTime = 2;
		tracerScale = 1.1;
		tracerStartTime = 0;
		thrustTime = 1.5;
		timeToLive = 3;
		typicalSpeed = 60;
		indirectHit = 0.1;
		indirectHitRange = 0.2;
	};
	class 101st_Bantha_Ammo_Red : 101st_Bantha_Ammo
	{
		model = "\SWOP_Main\Effects\Tracer\LaserRed";
		effectFly = "SWOP_RedLaserEffect";
		explosionEffects = "SWOP_LaserExploSmall";
	};
	class 101st_Bantha_Ammo_Green : 101st_Bantha_Ammo
	{
		model = "\SWOP_Main\Effects\Tracer\Lasergreen";
		effectFly = "SWOP_greenLaserEffect";
		explosionEffects = "SWOP_LaserExploSmall";
	};
	class 101st_TX130_cannon_ammo: Sh_120mm_HEAT_MP
	{
		author="Dutch"; //swop based
		model = "SW_AV7\ion.p3d";
		explosionEffects = "IEDMineSmallExplosion";
		effectFly = "SWOP_blueLaserEffect";
		flaresize=5;
		tracerscale=5;
	};
	class 101st_TX130_mg_ammo: B_35mm_AA_Tracer_Red
	{ 
		author="Dutch"; //swop based
		model = "\SWOP_Main\Effects\Tracer\laserblue";
		explosionEffects = "SWOP_LaserExploSmallblue2";
		effectFly = "SWOP_blueLaserEffect";
		flaresize=3;
		tracerscale=3;
	};

	//UGL and Grenades Ammo
 	class DBA_40mm_white_ammo: FlareBase
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {1,1,1,1};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1,1,1,1};
		brightness = 1200;
		size = 3;
		triggerTime = 3;
		triggerSpeedCoef = 1;
		audibleFire = 20;
		intensity = 1000000;
		flareSize = 3;
		timeToLive = 120;
		flareMaxDistance = 300;
	};
	class DBA_40mm_green_ammo : DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = { 0,1,0,0 };
	};
	class DBA_40mm_red_ammo: DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {1,0,0,0};
	};
	class DBA_40mm_yellow_ammo: DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {1,1,0,0};
	};
	class DBA_40mm_CIR_ammo: DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.5,0.25,0};
	};
	class DBA_40mm_blue_ammo: DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0,0,1,0};
	};
	class DBA_40mm_cyan_ammo: DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0,1,1,0};
	};
	class DBA_40mm_purple_ammo: DBA_40mm_white_ammo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.7,0,1,0};
	};

	class OPTRE_G_M8_Flare;
	class ACE_G_Handflare_Purple : OPTRE_G_M8_Flare {
		LightColor[] = { 1,0,1,0.5 };
		model = "\A3\weapons_f\ammo\flare_yellow";
	};
	
	class 101st_imploder_ammo: Grenade
	{
		displayName = "101st Thermal Imploder";
		ace_advanced_throwing_torqueDirection[] = {1,1,0};
		ace_advanced_throwing_torqueMagnitude = "(50 + random 100) * selectRandom [1, -1]";
		hit=75;
		indirectHit=45;
		indirectHitRange=2;
		simulation = "shotGrenade";
		soundFly[] = {"\101st_Aux_Mod\Addons\_ammo\thermalimploderFly.ogg",1.5,1,90};
		multiSoundHit[] = {"soundHit1",0.33,"soundHit2",0.33,"soundHit3",0.33};
		soundHit1[] = {"\101st_Aux_Mod\Addons\_ammo\imploderExplode1.ogg",2,1,2000};
		soundHit2[] = {"\101st_Aux_Mod\Addons\_ammo\imploderExplode2.ogg",2,1,2000};
		soundHit3[] = {"\101st_Aux_Mod\Addons\_ammo\imploderExplode3.ogg",2,1,2000};
		ace_frag_enabled=1;
		ace_frag_skip=0;
		ace_frag_force=1;
		ace_frag_classes[]=
		{
			"ace_frag_tiny_HD"
		};
		ace_frag_metal=210;
		ace_frag_charge=185;
		ace_frag_gurney_c=2843;
		ace_frag_gurney_k="3/5";
		class NVGMarkers
		{
			class Blinking1
			{
				name="blinkpos1";
				color[]={0.0099999998,0.0099999998,0.0099999998,1};
				ambient[]={0.0049999999,0.0049999999,0.0049999999,1};
				blinking=1;
				brightness=0.0020000001;
				onlyInNvg=1;
			};
			class Blinking2
			{
				color[]={0.89999998,0.1,0.1};
				ambient[]={0.1,0.1,0.1};
				name="blinkpos2";
				blinking=1;
				blinkingStartsOn=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=1;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.050000001;
				brightness=0.0020000001;
				dayLight=1;
				onlyInNvg=0;
				intensity=75;
				drawLight=1;
				activeLight=0;
				useFlare=0;
			};
		};
		typicalspeed=18;
		model="\101st_Aux_Mod\Addons\_ammo\imploder.p3d";
		hiddenselections[]=
		{
			"camo1",
		};
		hiddenselectionstextures[]=
		{
			"\101st_Aux_Mod\Addons\_ammo\ThermalImploder_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\_ammo\imploder.rvmat"};
	};

	class 101st_throwable_c_type_ammo: Grenade
	{
		displayName = "101st Throwable C-Type Explosive";
		simulation = "shotGrenade";
		thrust = 210;
		airFriction = -0.0005;
		hit=3000;
		indirectHit=2000;
		indirectHitRange=10;
		typicalspeed = 15;
		explosionTime=15;
		timeToLive=20;
		model="\101st_Aux_Mod\Addons\_ammo\ctype.p3d";
		hiddenselections[]=
		{
			"camo1",
		};
		hiddenselectionstextures[]=
		{
			"\101st_Aux_Mod\Addons\_ammo\TypeC_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\_ammo\ctype.rvmat"};
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
		soundFly[] = {"\101st_Aux_Mod\Addons\_ammo\ctypeFly.ogg",1,1,90};
		ace_frag_enabled=1;
		ace_frag_skip=0;
		ace_frag_force=1;
		ace_frag_classes[]=
		{
			"ace_frag_tiny_HD"
		};
		ace_frag_metal=210;
		ace_frag_charge=185;
		ace_frag_gurney_c=2843;
		ace_frag_gurney_k="3/5";
		class NVGMarkers
		{
			class Blinking1
			{
				name="blinkpos1";
				color[]={0.0099999998,0.0099999998,0.0099999998,1};
				ambient[]={0.0049999999,0.0049999999,0.0049999999,1};
				blinking=1;
				brightness=0.0020000001;
				onlyInNvg=1;
			};
			class Blinking2
			{
				color[]={0.89999998,0.1,0.1};
				ambient[]={0.1,0.1,0.1};
				name="blinkpos2";
				blinking=1;
				blinkingStartsOn=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=1;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.050000001;
				brightness=0.0020000001;
				dayLight=1;
				onlyInNvg=0;
				intensity=75;
				drawLight=1;
				activeLight=0;
				useFlare=0;
			};
		};
		typicalspeed=18;
	};
	class 101st_thermaldet_ammo: Grenade
	{
		displayName = "101st Thermal Detonator";
		ace_advanced_throwing_torqueDirection[] = {1,1,0};
		ace_advanced_throwing_torqueMagnitude = "(50 + random 100) * selectRandom [1, -1]";
		hit=35;
		indirectHit=14;
		indirectHitRange=8;
		soundFly[] = {"\101st_Aux_Mod\Addons\_ammo\thermalDetFly.ogg",1.5,1,90};
		simulation = "shotGrenade";
		ace_frag_enabled=1;
		ace_frag_skip=0;
		ace_frag_force=1;
		ace_frag_classes[]=
		{
			"ace_frag_tiny_HD"
		};
		ace_frag_metal=210;
		ace_frag_charge=185;
		ace_frag_gurney_c=2843;
		ace_frag_gurney_k="3/5";
		class NVGMarkers
		{
			class Blinking1
			{
				name="blinkpos1";
				color[]={0.0099999998,0.0099999998,0.0099999998,1};
				ambient[]={0.0049999999,0.0049999999,0.0049999999,1};
				blinking=1;
				brightness=0.0020000001;
				onlyInNvg=1;
			};
			class Blinking2
			{
				color[]={0.89999998,0.1,0.1};
				ambient[]={0.1,0.1,0.1};
				name="blinkpos2";
				blinking=1;
				blinkingStartsOn=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=1;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.050000001;
				brightness=0.0020000001;
				dayLight=1;
				onlyInNvg=0;
				intensity=75;
				drawLight=1;
				activeLight=0;
				useFlare=0;
			};
		};
		typicalspeed=18;
		model="\101st_Aux_Mod\Addons\_ammo\thermal.p3d";
		hiddenselections[]=
		{
			"camo1",
		};
		hiddenselectionstextures[]=
		{
			"\101st_Aux_Mod\Addons\_ammo\ThermalDetonator_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\101st_Aux_Mod\Addons\_ammo\thermal.rvmat"};
		fuseDistance=0;
	};
	class DBA_GL_AT_ammo: G_40mm_HE
	{
		hit = 150;
		indirectHit = 1;
		indirectHitRange = 0.1;
		timeToLive = 30;
		model = "\MRC\JLTS\weapons\Core\effects\laser_orange.p3d";
		lightcolor[] = {1,0.37,0};
		effectfly = "JLTS_plasma_orange";
		fuseDistance = 3;
		explosive = 0.0001;
		deflecting = 5;
		caliber = 5;
		ace_frag_enabled = 0;
		ace_frag_force = 0;
		ace_frag_classes[] = {""};
		ace_frag_metal = 0;
		ace_frag_charge = 0;
		ace_frag_gurney_c = 0;
		ace_frag_gurney_k = "0";
		ace_rearm_caliber = 0;
	};
	class DBA_GL_HE_ammo: G_40mm_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 5;
		timeToLive = 30;
		model = "\MRC\JLTS\weapons\Core\effects\laser_orange.p3d";
		lightcolor[] = {1,0.37,0};
		effectfly = "JLTS_plasma_orange";
		fuseDistance = 3;
	};
	class DBA_GL_Flash_ammo: G_40mm_HE
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0.2;
		timeToLive = 6;
		model = "\z\ace\addons\grenades\models\ACE_m84_thrown.p3d";
		effectsSmoke = "ACE_M84FlashbangEffect";
		fuseDistance = 0;
		explosive = "1E-7";
	};
	class SmokeClusterShot: GrenadeHand
	{
		ace_frag_skip = 1;
		model="\A3\Weapons_f\ammo\smokegrenade_white_throw";
		submunitionAmmo[]=
		{
			"SmokeShellArty"
		};
		submunitionInitSpeed=24;
		submunitionConeAngle[]={10};
		submunitionConeAngleHorizontal=120;
		submunitionConeType[]=
		{
			"randomupcone",
			9
		};
		deleteParentWhenTriggered = 1;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,0};
		submunitionAutoleveling=1;
		submunitionDirectionType="submunitionAutoleveling";
		directionalExplosion=1;
		triggerOnImpact=1;
		triggerDistance=0;
		explosionTime=-1;
		timeToLive=10;
		deflectionslowdown=0;
		deflecting=0;
		hit = 0;
	};
	class SmokeClusterShot_Full: SmokeClusterShot
	{
		submunitionInitSpeed=20;
		submunitionConeAngleHorizontal=360;
		submunitionConeType[]=
		{
			"randomupcone",
			18
		};
	};
	class G_40mm_SmokeClusterShot: SmokeClusterShot
	{
		model="\A3\weapons_f\Ammo\UGL_slug";
		timeToLive=30;
		deflectionslowdown=0;
		hit = 0;
		explosive = 0;
	};
	class G_40mm_SmokeClusterShot_Full: SmokeClusterShot_Full
	{
		model="\A3\weapons_f\Ammo\UGL_slug";
		hit = 0;
		explosive = 0;
		timeToLive=30;
		deflectionslowdown=0;
	};
	class F_40mm_White;
	class F_40mm_WhiteSuper: F_40mm_White
	{
		audibleFire=0;
		timeToLive=300;
		effectFlare="CounterMeasureFlare";
		lightColor[]={0.94999999,0.94999999,1,0.5};
		smokeColor[]={1,1,1,0.5};
		intensity=10000000;
		size=1;
	};
	class F_40mm_WhiteSuper_Cluster: G_40mm_HE
	{
		submunitionAmmo[]=
		{
			"F_40mm_WhiteSuper"
		};
		submunitionInitSpeed=100;
		submunitionConeAngle[]={10};
		submunitionConeAngleHorizontal=360;
		submunitionConeType[]=
		{
			"randomupcone",
			6
		};
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,0};
		submunitionAutoleveling=1;
		submunitionDirectionType="submunitionAutoleveling";
		directionalExplosion=1;
		triggerOnImpact=1;
		triggerDistance=0;
		explosionTime=3;
	};

	//Rockets
	class SCI_PLX1_R: M_Titan_AT
	{
		hit = 95;
		indirectHit = 20;
		indirectHitRange = 2;
	};
	class SCI_RPS6_HEAA_R: R_PG32V_F
	{
		hit = 800;
		indirectHit = 400;
		indirectHitRange = 1;
	};
	class SCI_RPS6_HEDP_R: R_TBG32V_F
	{
		hit = 50;
		indirectHit = 60;
		indirectHitRange = 8;
	};
	class 101st_RPS6_HEAA_R: R_PG32V_F
	{
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		hit=350; //vanilla rocket does 150
		indirectHit=3;
		allowAgainstInfantry=0;
	};
	class 101st_RPS6_HEDP_R: R_TBG32V_F
	{
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		hit=200;
		indirectHit=150;
		allowAgainstInfantry=1;
	};
	class 101st_AT_Ammo : M_Titan_AT
	{
		hit = 10;
		airLock = 1;
		missileKeepLockedCone = 160;
		missileLockCone = 4.5;
		missileLockMaxDistance = 2000;
		missileLockMaxSpeed = 35;
		missileLockMinDistance = 50;
		missileManualControlCone = 45;
		irLock = 0;
		laserLock = 0;
		lockType = 0;
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		simulation = "shotMissile";
	};
	class M_Titan_AP;
	class 101st_AP_Ammo : M_Titan_AP
	{
		hit = 05;
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		simulation = "shotMissile";
		indirectHitRange = 35;
		indirectHit = 05;
	};
	class 101st_AA_Ammo : M_Titan_AA
	{
		hit = 800;
		airLock = 2;
		missileKeepLockedCone = 75;
		missileLockCone = 10;
		missileLockMaxDistance = 3500;
		missileLockMaxSpeed = 1200;
		missileLockMinDistance = 100;
		nvLock = 0;
		irLock = 1;
		lockType = 0;
		laserLock = 0;
		lockSeekRadius = 100;
		autoSeekTarget = 0;
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		simulation = "shotMissile";
	};

};

class smoke_yeet
{
	class SmokeShell
	{
		simulation = "particles";
		type = "SMOKEEFFECT_MEME";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2
	{
		simulation = "particles";
		type = "SmokeShellWhite2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SmokeShellWhiteUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SmokeShellWhite2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class CfgCloudlets
{
	class Default;
	class SMOKEEFFECT_MEME: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.2777;
		volume = 1;
		rubbing = 0.05;
		size[] = {6,16};
		color[] = {{0.6,0.6,0.6,0.2},{0.6,0.6,0.6,0.05},{0.6,0.6,0.6,0}};
		animationSpeed[] = {1.5,0.5};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.6;
		lifeTimeVar = 2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class DBA_westar_pistol_recoil: recoil_default
	{
		muzzleOuter[] = {"0.05",".5","0.1","0.2"};
		kickBack[] = {"0.04","0.08"};
		temporary = "0.06";
	};
	class DBA_dc15_rb_recoil: Default
	{
		muzzleOuter[] = {"0.3*0.2","6","0.3*1",".6"};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {"0.03*2","0.06*2.5"};
		permanent = "0.1*1.8";
		temporary = "0.01*1.2";
	};
	class Valken_Super_auto_recoil: Default
	{
		muzzleOuter[] = {".08*0.25",".08*0.25","0.3*0.25",".1*0.25"};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {"0.03*0.25","0.03*0.25"};
		permanent = "0.1*0.25";
		temporary = "0.01*0.25";
	};
};
	
class CfgWeapons
{
	class GrenadeLauncher;
	class Default;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"101st_Imploder",
			"101st_Detonator",
			"101st_Ctype",
			"DBA_PurpleSmoke"
		};
		class ThrowMuzzle;
		class 101st_Ctype: ThrowMuzzle
		{
			model="\101st_Aux_Mod\Addons\_ammo\ctype.p3d";
			magazines[]=
			{
				"101st_throwable_c_type_x1_mag"
			};
		};
		class 101st_Imploder: ThrowMuzzle
		{
			model="\101st_Aux_Mod\Addons\_ammo\imploder.p3d";
			magazines[]=
			{
				"101st_imploder_x1_mag"
			};
		};
		class 101st_Detonator: ThrowMuzzle
		{
			model="\101st_Aux_Mod\Addons\_ammo\thermal.p3d";
			magazines[]=
			{
				"101st_thermaldet_x1_mag"
			};
		};
		class DBA_PurpleSmoke : ThrowMuzzle
		{
			model = "\101st_Aux_Mod\Addons\_ammo\thermal.p3d";
			magazines[] =
			{
				"DBA_HandFlare_Purple"
			};
		};
	}
}