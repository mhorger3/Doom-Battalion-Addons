
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class SensorTemplateIR;
class cfgWeapons
{
	class 3AS_GATRepeater;
	class CannonCore;
	class cannon_120mm : CannonCore
	{
		class player;
	};
	class MGun;
	class DBA_G13_Coaxial : MGun
	{
		displayName = "[DBA] G-13 Repeater";
		magazineReloadTime = 5;
		ballisticsComputer = 2;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		scope = 1;
		class GunParticles
		{
			class effect1
			{
				positionName = "z_gunl_chamber";
				directionName = "z_gunl_muzzle";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "z_gunr_chamber";
				directionName = "z_gunr_muzzle";
				effectName = "MachineGunCloud";
			};
		};
		class manual : MGun
		{
			displayName = "G-13 Repeaters";
			sounds[] = { "StandardSound" };
			magazineReloadTime = 3.75;
			ballisticsComputer = 2;
			scope = 1;
			class BaseSoundModeType
			{
				closure1[] = { "A3\sounds_f\weapons\gatling\gatling_rotation_short_2", 0.316228, 1, 20 };
				closure2[] = { "A3\sounds_f\weapons\gatling\gatling_rotation_short_3", 0.316228, 1, 20 };
				soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1", 0.95, 1, 2000 };
				begin2[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1", 0.95, 1, 2000 };
				begin3[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1", 0.95, 1, 2000 };
				begin4[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1", 0.95, 1, 2000 };
				begin5[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1", 0.95, 1, 2000 };
				begin6[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1", 0.95, 1, 2000 };
				begin7[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1", 0.95, 1, 2000 };
				begin8[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1", 0.95, 1, 2000 };
				begin9[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1", 0.95, 1, 2000 };
				begin10[] = { "3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1", 0.95, 1, 2000 };
				soundBegin[] = { "begin1", 0.1, "begin2", 0.1, "begin3", 0.1, "begin4", 0.1, "begin5", 0.1, "begin6", 0.1, "begin7", 0.1, "begin8", 0.1, "begin9", 0.1, "begin10", 0.1 };
			};
			reloadTime = 0.1;
			dispersion = 0.00875;
		};
		drySound[] = { "A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_dry.wss", 1, 1, 10 };

		magazines[] =
		{
			"DBA_792_M5A_x400_mag"
		};
	};
	class DBA_UKAS_MG : MGun
	{
		displayName = "[DBA] UKAS 7.62mw Repeater";
		displayNameShort = "UKAS";
		author = "ISU";
		class GunParticles
		{
			class effect1
			{
				positionName = "z_gunl_chamber";
				directionName = "z_gunl_muzzle";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "z_gunr_chamber";
				directionName = "z_gunr_muzzle";
				effectName = "MachineGunCloud";
			};
		};
		magazines[] =
		{
			"DBA_762_REC_x2600_mag"
		};
		modes[] =
		{
			"manual",
			"short",
			"medium",
			"far"
		};
		magazineReloadTime = 12;
		class manual
		{
			displayName = "UKAS";
			textureType = "fullAuto";
			sounds[] =
			{
				"StandardSound"
			};
			reloadTime = 0.02;
			class StandardSound
			{
				begin1[] =
				{
					"\101st_Aux_Mod\Addons\Weapons\cannon.ogg",
					0.5,
					0.85,
					2100
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			autoFire = 1;
			soundContinuous = 0;
			burst = 4;
			soundBurst = 0;
			multiplier = 1;
			dispersion = 0.0045;
			aiRateOfFire = 1;
			showToPlayer = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.0099999998;
			midRange = 1;
			midRangeProbab = 0.0099999998;
			maxRange = 2;
			maxRangeProbab = 0.0099999998;
		};
		class close : manual
		{
			soundBurst = 0;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 50;
			burstRangeMax = 100;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.69999999;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class short : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 50;
			burstRangeMax = 100;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.75;
			midRange = 300;
			midRangeProbab = 0.75;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 50;
			burstRangeMax = 100;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.75;
			midRange = 600;
			midRangeProbab = 0.64999998;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 50;
			burstRangeMax = 100;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.64999998;
			midRange = 1000;
			midRangeProbab = 0.30000001;
			maxRange = 1500;
			maxRangeProbab = 0.050000001;
		};
	};
	class DBA_57mw_Cannon : cannon_120mm
	{
		displayName = "[DBA] 57mw AZP Autocannon";
		scope = 2;
		magazines[] =
		{
			"DBA_57mm_hef_x6_mag",
			"DBA_57mm_ap_x6_mag"
		};
		magazineReloadTime = 2.5;
		modes[] =
		{
			"player",
			"short",
			"medium",
			"far"
		};
		class player : Mode_FullAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"kobra\442_g_vehicle\aat\sounds\aat_main_gun.wss",
					3.1622777,
					1,
					1500
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			reloadTime = 0.5714286;
			aiBurstTerminable = 1;
			soundContinuous = 0;
			autoReload = 1;
			autoFire = 1;
			dispersion = 0.002;
			aiRateOfFire = 0.5714286;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.85;
			midRange = 500;
			midRangeProbab = 0.725;
			maxRange = 800;
			maxRangeProbab = 0.45;
		};
		class close : player
		{
			soundBurst = 0;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 6;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.69999999;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class short : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 2;
			burstRangeMax = 6;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.75;
			midRange = 300;
			midRangeProbab = 0.75;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 6;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.75;
			midRange = 600;
			midRangeProbab = 0.64999998;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 6;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.64999998;
			midRange = 1000;
			midRangeProbab = 0.30000001;
			maxRange = 1500;
			maxRangeProbab = 0.050000001;
		};
	};
	class DBA_130mw_HH30_Cannon : cannon_120mm {
		displayName = "[DBA] 130mw HH-30 Mass Driver";
		scope = 2;
		magazines[] =
		{
			"DBA_130mm_R13_AP_x15_mag",
			"DBA_130mm_UR11_HE_x20_mag"
		};
		magazineReloadTime = 6.7;
		class player : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"kobra\442_g_vehicle\aat\sounds\aat_main_gun.wss",
					8.1622777,
					0.875,
					1500
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			reloadTime = 6.7;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00006999997;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.64999998;
			midRange = 1250;
			midRangeProbab = 0.80000001;
			maxRange = 1750;
			maxRangeProbab = 0.5;
		};
	};
	class DBA_115mw_B5TC_Cannon : cannon_120mm {
		displayName = "[DBA] 115mw B-5TC";
		scope = 2;
		magazines[] =
		{
			"DBA_115mm_B3M_AP_x8_mag",
			"DBA_115mm_KB4_HEAT_x10_mag",
			"DBA_115mm_UB11_HEF_x20_mag"
		};
		magazineReloadTime = 8;
		autoReload = 1;
		class player : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"kobra\442_g_vehicle\aat\sounds\aat_main_gun.wss",
					9.1622777,
					0.9,
					2500
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			reloadTime = 8;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00006999997;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.64999998;
			midRange = 1250;
			midRangeProbab = 0.80000001;
			maxRange = 1750;
			maxRangeProbab = 0.5;
		};
	};
	class DBA_90mw_HFAH1_Cannon : CannonCore
	{
		scope = 2;
		displayName = "[DBA] 90mw HFA-B1 Cannon";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		showAimCursorInternal = 0;
		nameSound = "cannon";
		reloadSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			1,
			10
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			1,
			10
		};
		magazines[] =
		{ 
			"DBA_90mm_UR62M_HEAT_x24_mag" 
		};
		reloadTime = 2;
		magazineReloadTime = 15;
		autoReload = 1;
		canLock = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 0.5;
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
		autoFire = 0;
		modes[] = {"manual", "close", "short", "medium", "far"};
		class GunParticles
		{};
		class manual : Mode_SemiAuto
		{
			displayName = "[DBA] HFA-B1 Cannon";
			sounds[] = { "StandardSound" };
			class StandardSound
			{
				begin1[] =
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					1,
					1,
					6000
				};
				begin2[] =
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					1,
					1,
					6000
				};
				soundBegin[] =
				{
					"begin1",
					0.1,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest", 1, 1, 2200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses", 1, 1, 2200 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior", 1.99526, 1, 2200 };
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows", 1, 1, 2200 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees", 1, 1, 2200 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			recoil = "Empty";
			reloadTime = 2;
			soundBurst = 0;
			dispersion = 0.0008500001;
			showToPlayer = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 450;
			maxRangeProbab = 0.30000001;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 150;
		};
		class close : manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			soundContinuous = 0;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class short : close
		{
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
		};
		class medium : close
		{
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 3;
		};
		class far : close
		{
			minRange = 500;
			minRangeProbab = 0.2;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 2100;
			maxRangeProbab = 0.3;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 3;
		};
	};
	class DBA_165mw_B9M_ORD_Mortar : CannonCore
	{
		scope = 2;
		displayName = "[DBA] 165mw B-9M ORD Demolitian Mortar";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		showAimCursorInternal = 0;
		nameSound = "cannon";
		reloadSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			0.85,
			10
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			0.85,
			10
		};
		magazines[] = {"DBA_165mm_C33_BESH_x30_mag"};
		reloadTime = 13.75;
		magazineReloadTime = 13.75;
		autoReload = 1;
		canLock = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 25;
		FCSZeroingDelay = 1;
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
		autoFire = 0;
		modes[] =
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{};
		class manual : Mode_SemiAuto
		{
			displayName = "[DBA] 165mw B-9M Ordnance Demolitian Mortar";
			sounds[] = { "StandardSound" };
			class StandardSound
			{
				begin1[] =
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					10,
					0.70,
					6000
				};
				begin2[] =
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					10,
					0.658,
					6000
				};
				soundBegin[] =
				{
					"begin1",
					0.1,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest", 1, 1, 2200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses", 1, 1, 2200 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior", 1.99526, 1, 2200 };
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows", 1, 1, 2200 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees", 1, 1, 2200 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			recoil = "Empty";
			reloadTime = 13.75;
			soundBurst = 0;
			dispersion = 0.000085;
			showToPlayer = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 150;
		};
		class close : manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			soundContinuous = 0;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.9;
		};
		class short : close
		{
			minRange = 150;
			minRangeProbab = 0.65;
			midRange = 500;
			midRangeProbab = 0.9;
			maxRange = 1500;
			maxRangeProbab = 0.7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 0.1;
		};
		class medium : close
		{
			minRange = 250;
			minRangeProbab = 0.65;
			midRange = 750;
			midRangeProbab = 0.86;
			maxRange = 1000;
			maxRangeProbab = 0.8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 0.1;
		};
		class far : close
		{
			minRange = 500;
			minRangeProbab = 0.9;
			midRange = 1200;
			midRangeProbab = 0.86;
			maxRange = 2100;
			maxRangeProbab = 0.75;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 0.1;
		};
	};
	class 101st_CIS_Mech: 3AS_GATRepeater
	{
		displayName="CIS Long Range Cannon";
		displayNameShort="CIS LR Cannon";
		author="Dutch";
		magazines[]=
		{
			"101st_CIS_LR_Mag"
		};
		modes[]=
		{
			"manual",
			"short",
			"medium",
			"far"
		};
		class manual
		{
			displayName="Heavy Repeater";
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.375;
			class StandardSound
			{
				begin1[]=
				{
					"\101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
					0.75,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			soundBurst=0;
			multiplier=1;
			dispersion=0.0115;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=42;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.75;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=36;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.75;
			midRange=300;
			midRangeProbab=0.75;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=30;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
			minRange=300;
			minRangeProbab=0.75;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.64999998;
			midRange=1000;
			midRangeProbab=0.30000001;
			maxRange=1500;
			maxRangeProbab=0.050000001;
		};
	};
	class DBA_88mw_B18S_Cannon : CannonCore{
		scope=2;
		displayName="[DBA] 88mw B-18S Canister Cannon";
		cursor="EmptyCursor";
		shotFromTurret=0;
		cursorAim="cannon";
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			0.85,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			0.85,
			10
		};
		magazines[]=
		{
			"DBA_88mm_CR13_x20_mag",
		};
		reloadTime=2;
		magazineReloadTime=2;
		autoReload=1;
		autoFire=0;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
		};
		class manual: Mode_SemiAuto
		{
			displayName="88mw B-13 Canister Cannon";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					10,
					0.70,
					6000
				};
				begin2[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					10,
					0.658,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",
							1.99526,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			recoil="Empty";
			reloadTime=2;
			soundBurst=0;
			dispersion=0.000085;
			showToPlayer=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=75;
		};
		class close: manual
		{
			showToPlayer=0;
			soundBurst=0;
			soundContinuous=0;
			aiRateOfFire=1;
			aiRateOfFireDistance=150;
			aiRateOfFireDispersion=0.1;
			minRange=0;
			minRangeProbab=0.950000001;
			midRange=50;
			midRangeProbab=0.97999998;
			maxRange=100;
			maxRangeProbab=0.90000001;
		};
		class short: close
		{
			minRange=100;
			minRangeProbab=0.95;
			midRange=250;
			midRangeProbab=0.99999999;
			maxRange=500;
			maxRangeProbab=0.70000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=0.1;
		};
		class medium: close
		{
			minRange=500;
			minRangeProbab=0.95;
			midRange=650;
			midRangeProbab=0.95999999;
			maxRange=800;
			maxRangeProbab=0.9000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=0.1;
		};
		class far: close
		{
			minRange=800;
			minRangeProbab=0.9;
			midRange=900;
			midRangeProbab=0.95999999;
			maxRange=1000;
			maxRangeProbab=0.950000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=0.1;
		};
	};
};

class CfgMagazines
{
	class VehicleMagazine;
	class CA_Magazine;
	class 101st_CIS_LR_Mag: Vehicle_Magazine
	{
		ammo="DBA_792_M5A";
		count=5000;
		mass=10;
		scope=2;
		weight=0;
		displayName="101st CIS LR 5000Rnd";
	};
	class DBA_792_M5A_x400_mag : VehicleMagazine {
		scope = 2;
		displayname = "7.92mw M-5a";
		ammo = "DBA_792_M5A";
		mass = 0;
		displaynamemagazine = "7.92mw M-5a";
		shortnamemagazine = "7.92mw";
		displayNameMFDFormat = "7.92mw";
		displayNameShort = "7.92mw M-5a";
		count = 400;
		initspeed = 890;
		maxLeadSpeed = 100;
		tracersevery = 1;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
	};
	class DBA_762_REC_x2600_mag : VehicleMagazine
	{
		scope = 2;
		displayname = "7.62mw REC";
		ammo = "DBA_762_54_REC";
		mass = 0;
		displaynamemagazine = "7.62mw REC";
		shortnamemagazine = "7.62mw";
		displayNameMFDFormat = "7.62mw";
		displayNameShort = "7.62mw REC";
		count = 2600;
		initspeed = 820;
		maxLeadSpeed = 100;
		tracersevery = 1;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
	};
	class DBA_57mm_ap_x6_mag : VehicleMagazine
	{
		scope = 2;
		displayname = "B-81 AP-T";
		ammo = "DBA_57mm_ap";
		mass = 0;
		displaynamemagazine = "57mw B-81 AP-T";
		shortnamemagazine = "B-81 AP-T";
		displayNameMFDFormat = "AP-T";
		displayNameShort = "B-81 AP-T";
		count = 6;
		initspeed = 1000;
		maxLeadSpeed = 500;
		tracersevery = 1;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
	};
	class DBA_57mm_hef_x6_mag : VehicleMagazine
	{
		scope = 2;
		mass = 0;
		count = 6;
		initspeed = 1000;
		maxLeadSpeed = 500;
		tracersevery = 1;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displayname = "UB-81 HE-Frag";
		ammo = "DBA_57mm_hef";
		displaynamemagazine = "57mw UB-81 HE-F";
		shortnamemagazine = "UB-81 HE-F";
		displayNameMFDFormat = "HE-F";
		displayNameShort = "UB-81 HE-F";
	};
	class DBA_130mm_R13_AP_x15_mag : VehicleMagazine
	{
		scope = 2;
		mass = 0;
		count = 15;
		initspeed = 1800;
		maxLeadSpeed = 500;
		tracersevery = 1;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displayname = "130mw R-13 Kinetic Energy Penetrator";
		ammo = "DBA_130mm_R13_AP";
		displaynamemagazine = "130mw R-13 KEP";
		shortnamemagazine = "R-13 KEP";
		displayNameMFDFormat = "KEP";
		displayNameShort = "R-13 KEP";
	};
	class DBA_130mm_UR11_HE_x20_mag : VehicleMagazine
	{
		scope = 2;
		mass = 0;
		count = 20;
		initspeed = 980;
		maxLeadSpeed = 500;
		tracersevery = 1;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displayname = "130mw UR-11 High Explosve";
		ammo = "DBA_130mm_UR11_HE";
		displaynamemagazine = "130mw UR-11 HE";
		shortnamemagazine = "UR-11 HE";
		displayNameMFDFormat = "HE";
		displayNameShort = "UR-11 HE";
	};
	class DBA_115mm_B3M_AP_x8_mag : VehicleMagazine
	{
		scope = 2;
		mass = 0;
		maxLeadSpeed = 500;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displayname = "115mw B-3M Kinetic Energy Penetrator";
		ammo = "DBA_115mm_B3M_AP";
		displaynamemagazine = "115mm B-3M KEP";
		shortnamemagazine = "B-3M KEP";
		displayNameMFDFormat = "KEP";
		displayNameShort = "B-3M KEP";
		count = 8;
		initspeed = 1610;
		tracersevery = 1;
	};
	class DBA_115mm_KB4_HEAT_x10_mag : VehicleMagazine
	{
		scope = 2;
		mass = 0;
		maxLeadSpeed = 500;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displayname = "115mw KB-4 High Explosive Anti-Tank";
		ammo = "DBA_115mm_KB4_HEAT";
		displaynamemagazine = "115mm KB-4 HEAT";
		shortnamemagazine = "KB-4 HEAT";
		displayNameMFDFormat = "HEAT";
		displayNameShort = "KB-4 HEAT";
		count = 10;
		initspeed = 950;
		tracersevery = 1;
	};
	class DBA_115mm_UB11_HEF_x20_mag : VehicleMagazine
	{
		scope = 2;
		mass = 0;
		maxLeadSpeed = 500;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displayname = "115mw UB-11 High Explosive Fragmentation";
		ammo = "DBA_115mm_UB11_HEF";
		displaynamemagazine = "115mw UB-11 HE-F";
		shortnamemagazine = "UB-11 HE-F";
		displayNameMFDFormat = "HE-F";
		displayNameShort = "UB-11 HE-F";
		count = 20;
		initspeed = 905;
		tracersevery = 1;
	};
	class DBA_90mm_UR62M_HEAT_x24_mag : VehicleMagazine
	{
		scope = 2;
		mass = 0;
		maxLeadSpeed = 500;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displayname = "90mw UR-26M High Explosve Anti Tank Multi-Purpose";
		ammo = "DBA_90mm_UR62M_HEAT";
		displaynamemagazine = "90mw UR-26M HEAT-MP";
		shortnamemagazine = "UR-26M HEAT-MP";
		displayNameMFDFormat = "HEAT-MP";
		displayNameShort = "HEAT-MP";
		count = 24;
		initspeed = 750;
		tracersevery = 1;
	};
	class DBA_165mm_C33_BESH_x30_mag : VehicleMagazine
	{
		scope = 2;
		mass = 0;
		maxLeadSpeed = 500;
		namesound = "mgun";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displayname = "165mw C-33 BESH";
		ammo = "DBA_165mm_C33_BESH";
		displaynamemagazine = "165mw C-33 BESH";
		shortnamemagazine = "C-33 BESH";
		displayNameMFDFormat = "BESH";
		displayNameShort = "BESH";
		count = 30;
		initspeed = 259;
		tracersevery = 1;
	};
	class DBA_88mm_CR13_x20_mag : VehicleMagazine{
		displayname="CR-13 88mw Canister";
		ammo="DBA_88mm_CR13_CAN";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displaynamemagazine="CR-13 88mw Canister";
		shortnamemagazine="CR-13 Canister";
		displayNameMFDFormat="Canister";
		displayNameShort="Canister";
		count=20;
		initspeed=343;
		tracersevery=1;
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgAmmo
{
	class Sh_120mm_APFSDS;
	class B_35mm_AA_Tracer_Red;
	class B_762x54_Ball;
	class DBA_792_M5A : B_762x54_Ball
	{
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cmImmunity = 1;
		trackLead = 1000;
		trackOversteer = 1000;
		soundSetBulletFly[] =
		{
			"-"
		};
		soundSetSonicCrack[] =
		{
			"-"
		};
		hit = 32;
		indirectHit = 8;
		indirectHitRange = 0.5;
		displayname = "7.92 M-5a";
		warheadName = "M-5a";
		caliber = 1;
		cost = 1;
		explosive = 0;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 128";
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		tracerScale = 1.25;
		tracerStartTime = 0;
		tracerEndTime = 20;
		tracerColor[] =
		{
			"Red"
		};
		nvgOnly = 0;
		brightness = 100000;
		muzzleEffect = "";
		caliber = 0.5243445693;
		typicalSpeed = 750;
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		allowAgainstInfantry = 1;
		tracerStartTime = 0;
		tracerEndTime = 10;
		timeToLive = 20;
		coefGravity = 0;
		airfriction = -0;
		waterFriction = 0;
		typicalSpeed = 125;
		coefGravity = 0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		craterEffects = "";
		craterShape = "";
		airFriction = 0;
		muzzleEffect = "";
		deflecting = 0;
		initTime = 0;
		weaponLockSystem = 0;
		gravityFactor = 0;
		ACE_caliber = 1;
		class Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class NVSensorComponent : SensorTemplateNV
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ManSensorComponent : SensorTemplateMan
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent : SensorTemplateDataLink
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class DBA_762_54_REC : DBA_792_M5A
	{
		hit = 40;
		indirectHit = 6;
		indirectHitRange = 0.66;
		displayname = "7.62mw REC";
		warheadName = "7.62mw REC";
		explosive = 0;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 128";
		cost = 5;
		initSpeed = 820;
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		tracerScale = 1.25;
		tracerStartTime = 0;
		tracerEndTime = 20;
		brightness = 100000;
		muzzleEffect = "";
		caliber = 0.8130081301;
		typicalSpeed = 750;
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		allowAgainstInfantry = 1;
		timeToLive = 20;
		coefGravity = 0;
		airfriction = -0;
		waterFriction = 0;
	};
	class DBA_57mm_ap : B_35mm_AA_Tracer_Red
	{
		displayName = "57mw R-81 Armor Piercing";
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 42;
		audibleFire = 42;
		initSpeed = 1000;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0;
		cost = 200;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime = 0;
		tracerEndTime = 10;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 20;
		typicalSpeed = 875;
		deflecting = -5;
		submunitionAmmo = "ammo_57mm_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		aiAmmoUsageFlags = "128 + 256 + 512";
		allowAgainstInfantry = 0;
		timeToLive = 10;
	};
	class DBA_57mm_hef : B_35mm_AA_Tracer_Red
	{
		displayName = "57mw UR-81 High Explosive Fragmentation";
		hit = 50;
		indirectHit = 25;
		indirectHitRange = 10;
		visibleFire = 42;
		audibleFire = 42;
		initSpeed = 1000;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.94999999;
		cost = 15;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime = 0;
		tracerEndTime = 10;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 0.33333334;
		typicalSpeed = 700;
		deflecting = -5;
		aiAmmoUsageFlags = "64 + 128 + 256";
		allowAgainstInfantry = 1;
		submunitionAmmo = "";
		timeToLive = 10;
		ace_frag_enabled = 1;
		ace_frag_metal = 168;
		ace_frag_charge = 168;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] =
		{
			"ACE_frag_small_HD"
		};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
	class DBA_130mm_UR11_HE : Sh_120mm_APFSDS {
		displayName = "130mw UR-11 High Explosive";
		hit = 150;
		indirectHit = 85;
		indirectHitRange = 6.5;
		warheadName = "High Explosive";
		visibleFire = 42;
		audibleFire = 42;
		initSpeed = 980;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 1;
		cost = 50;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime = 0;
		tracerEndTime = 10;
		tracerScale = 3;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 4.761904762;
		typicalSpeed = 980;
		deflecting = -5;
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		aiAmmoUsageFlags = "64 + 128";
		allowAgainstInfantry = 1;
		timeToLive = 10;
	};
	class DBA_130mm_R13_AP : Sh_120mm_APFSDS {
		displayName = "130mw R-13 Kinetic Energy Penetrator";
		hit = 750;
		warheadName = "KEP";
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 42;
		audibleFire = 42;
		initSpeed = 1800;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0;
		cost = 500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime = 0;
		tracerScale = 3;
		tracerEndTime = 10;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 33.33333333;
		typicalSpeed = 1800;
		deflecting = 5;
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		aiAmmoUsageFlags = "128 + 512";
		allowAgainstInfantry = 0;
		timeToLive = 10;
	};
	class DBA_115mm_B3M_AP : Sh_120mm_APFSDS
	{
		displayName = "115mw B-3M Kinetic Energy Penetrator";
		hit = 650;
		warheadName = "KEP";
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 42;
		audibleFire = 42;
		initSpeed = 1610;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0;
		cost = 500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime = 0;
		tracerScale = 3;
		tracerEndTime = 10;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 26.91511387;
		typicalSpeed = 1610;
		deflecting = 5;
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		aiAmmoUsageFlags = "128 + 512";
		allowAgainstInfantry = 0;
		timeToLive = 10;
	};
	class DBA_115mm_KB4_HEAT : Sh_120mm_APFSDS
	{
		displayName = "115mw KB-4 High Explosive Anti-Tank";
		hit = 550;
		warheadName = "HEAT";
		indirectHit = 30;
		indirectHitRange = 5;
		visibleFire = 42;
		audibleFire = 42;
		initSpeed = 950;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.15;
		cost = 150;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime = 0;
		tracerEndTime = 10;
		tracerScale = 3;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 28.07017544;
		typicalSpeed = 950;
		deflecting = 5;
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 950;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		aiAmmoUsageFlags = "64 + 128 + 512";
		allowAgainstInfantry = 1;
		timeToLive = 10;
	};
	class DBA_115mm_UB11_HEF : Sh_120mm_APFSDS
	{
		displayName = "115mw UB-11 High Explosive Fragmentation";
		hit = 100;
		indirectHit = 50;
		indirectHitRange = 9.5;
		warheadName = "HE-Frag";
		visibleFire = 42;
		audibleFire = 42;
		initSpeed = 905;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 1;
		cost = 50;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime = 0;
		tracerEndTime = 10;
		tracerScale = 3;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 20;
		typicalSpeed = 905;
		deflecting = -5;
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		aiAmmoUsageFlags = "64 + 128";
		allowAgainstInfantry = 1;
		timeToLive = 10;
	};
	class DBA_90mm_UR62M_HEAT : B_35mm_AA_Tracer_Red {
		displayName = "90mw UR-26M High Explosive Anti Tank Multi-Purpose";
		hit = 485;
		indirectHit = 20;
		indirectHitRange = 8;
		warheadName = "High Explosive Anti Tank Multi-Purpose";
		visibleFire = 42;
		audibleFire = 42;
		initSpeed = 750;
		explosionSoundEffect = "DefaultExplosion";
		cost = 75;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime = 0;
		tracerEndTime = 10;
		tracerScale = 1;
		airFriction = 0;
		caliber = 28.44444444;
		typicalSpeed = 700;
		deflecting = -5;
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		aiAmmoUsageFlags = "64 + 128 + 512";
		allowAgainstInfantry = 1;
		timeToLive = 10;
	};
	class DBA_165mm_C33_BESH : B_35mm_AA_Tracer_Red {
		displayName = "165mw C-33 BESH";
		hit = 1000;
		indirectHit = 800;
		indirectHitRange = 25;
		warheadName = "BESH";
		visibleFire = 42;
		audibleFire = 42;
		initSpeed = 259;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.33;
		cost = 75;
		CraterEffects = "IEDMineBigGarbageCrater";
		explosionEffects = "IEDMineBigExplosion";
		tracerStartTime = 0;
		coefGravity = 2.0;
		tracerEndTime = 60;
		tracerScale = 1.1;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 54.05405405;
		typicalSpeed = 100;
		deflecting = -10;
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 259;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[] = {0,0,-0.2};
		aiAmmoUsageFlags = "64 + 128 + 512";
		allowAgainstInfantry = 1;
		class CamShakeFire
		{
			power = 125;
			duration = 2;
			frequency = 20;
			distance = 50;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 3.5;
			distance = 25;
			frequency = 20;
		};
		timeToLive = 20;
	};
	//Start of Canister Round
	class DBA_88mm_Canister_Submunition : B_762x54_Ball{
		hit=8;
		warheadName="Flechette";
		indirectHit=5;
		indirectHitRange=0.5;
		visibleFire=42;
		audibleFire=42;
		initSpeed=450;
		coefGravity=0.33;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.3;
		tracerEndTime=20;
		airFriction=0;
		muzzleEffect="";
		caliber=2.424242424;
		typicalSpeed=100;
		deflecting = 20;
		model="kobra\442_weapons\ammo\orange_tracer.p3d";
		effectfly="442_plasma_orange";
	};
	class DBA_88mm_CR13_CAN : Sh_120mm_APFSDS{
		displayName="CR-13 88mw Canister Round";
		hit=0;
		warheadName="Canister";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=343;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.9;
		cost=500;
		CraterEffects = "";
		coefGravity=0;
		explosioneffects = "";
		effectsSmoke = "";
		tracerStartTime=0.05;
		tracerScale=0.8;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=18.21493625;
		typicalSpeed=500;
		deflecting = 0;
		simulation = "shotSubmunitions";
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="DBA_88mm_Canister_Submunition";
		triggerDistance = -1;
		submunitionConeAngle = 0.525;
		submunitionInitSpeed=630;
		submunitionConeType[]=
		{
			"randomcenter",
			72
		};
		triggerTime=0.01;
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 1;
		submunitionInitialOffset[]= {0, 0, -5};
		aiAmmoUsageFlags="64 + 128";
		allowAgainstInfantry=1;
		timeToLive=210;
	};
	// END
};
