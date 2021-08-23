class CfgPatches
{
	class DBA_patch_vehicle_weapons
	{
		author="DBA";
		requiredAddons[]=
		{
			"442_weapons_ammo"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_Ground_HMG_Generic",
			"DBA_Ground_AC_Generic",
			"DBA_57mw_Cannon",
			"DBA_240mw_Cannon",
			"DBA_MBT_Cannon",
			"DBA_115mw_B5TC_Cannon",
			"DBA_130mw_HH30_Cannon",
			"DBA_140mw_HH30M4_Cannon",
			"DBA_50mw_K5B2",
			"DBA_UKAS_MG",
			"DBA_90mw_HFAH1_Cannon",
			"DBA_165mw_B9M_ORD_Mortar",
			"DBA_23mw_G765",
			"DBA_G13_Coaxial"
		};
		magazines[]=
		{
			"DBA_lancer_mbt_he_x12_mag",
			"DBA_lancer_mbt_ap_x12_mag",
			"DBA_lancer_mbt_td_x12_mag",
			"DBA_57mm_ap_x6_mag",
			"DBA_57mm_hef_x6_mag",
			"DBA_50mm_sap_x150_mag",
			"DBA_50mm_hepf_x400_mag",
			"DBA_115mm_B3M_AP_x8_mag",
			"DBA_115mm_KB4_HEAT_x10_mag",
			"DBA_115mm_UB11_HEF_x20_mag",
			"DBA_130mm_R13_AP_x15_mag",
			"DBA_130mm_UR11_HE_x20_mag",
			"DBA_140mm_R1P_AP_x17_mag",
			"DBA_140mm_KB1P_HEAT_x23_mag",
			"DBA_90mm_UR62M_HEAT_x24_mag",
			"DBA_165mm_C33_BESH_x30_mag",
			"DBA_23mm_UM23_HEPF_x5000_mag",
			"DBA_792_M5A_x400_mag",
			"DBA_762_REC_x2600_mag",
			"DBA_HMG_blue_x500_mag",
			"DBA_HMG_green_x500_mag",
			"DBA_HMG_orange_x500_mag",
			"DBA_HMG_red_x500_mag",
			"DBA_HMG_pink_x500_mag",
			"DBA_HMG_purple_x500_mag ",
			"DBA_HMG_black_x500_mag",
			"DBA_HMG_yellow_x500_mag",
			"DBA_AC_blue_x100_mag",
			"DBA_AC_green_x100_mag",
			"DBA_AC_orange_x100_mag",
			"DBA_AC_red_x100_mag",
			"DBA_AC_pink_x100_mag",
			"DBA_AC_purple_x100_mag",
			"DBA_AC_black_x100_mag",
			"DBA_AC_yellow_x100_mag"
		};
		ammo[]=
		{
			"DBA_HMG_blue_ammo",
			"DBA_HMG_green_ammo",
			"DBA_HMG_orange_ammo",
			"DBA_HMG_red_ammo",
			"DBA_HMG_pink_ammo",
			"DBA_HMG_purple_ammo",
			"DBA_HMG_black_ammo",
			"DBA_HMG_yellow_ammo",
			"DBA_AC_blue_ammo",
			"DBA_AC_green_ammo",
			"DBA_AC_orange_ammo",
			"DBA_AC_red_ammo",
			"DBA_AC_pink_ammo",
			"DBA_AC_purple_ammo",
			"DBA_AC_black_ammo",
			"DBA_AC_yellow_ammo",
			"ammo_57mm_penetrator",
			"DBA_57mm_ap",
			"DBA_57mm_hef",
			"ammo_50mm_SAP_penetrator",
			"DBA_50mm_SAP",
			"DBA_50mm_HEPF",
			"DBA_115mm_B3M_AP",
			"DBA_115mm_KB4_HEAT",
			"DBA_115mm_UB11_HEF",
			"DBA_130mm_R13_AP",
			"DBA_130mm_UR11_HE",
			"DBA_140mm_R1P_AP",
			"DBA_140mm_KB1P_HEAT",
			"DBA_90mm_UR62M_HEAT",
			"DBA_165mm_C33_BESH",
			"DBA_23mm_UM23_HEPF",
			"DBA_792_M5A",
			"DBA_762_54_REC",
			"ammo_115mm_AP_Penetrator",
			"ammo_115mm_HEAT_Penetrator",
			"DBA_lancer_mbt_ap_ammo",
			"DBA_lancer_mbt_he_ammo",
			"DBA_lancer_mbt_td_ammo"
		};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class CfgWeapons
{
	/*external*/ class CannonCore;
	
	class Gatling_30mm_Plane_CAS_01_F
	{
		class LowROF;
	};
	class Cannon_30mm_Plane_CAS_02_F
	{
		class LowROF;
	};
	class HMG_127
	{
		class manual;
	};
	class cannon_120mm : CannonCore
	{
		class player;
	};
	class MGun;
	class LMG_RCWS: MGun
	{
		class manual: MGun
		{
		};
	};
	class 3AS_AAT_Repeater: LMG_RCWS{
		class manual : manual{
			
		};
	};
	class missiles_titan;
	class DBA_Aircraft_Lasers_Generic: Cannon_30mm_Plane_CAS_02_F
	{
		displayName="Aircraft Lasers";
		magazineReloadTime=10;
		ballisticsComputer=1;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		magazines[]=
		{
			"DBA_generic_aircraft_gun_x1000_mag"
		};
		class LowROF: LowROF
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",
					0.316228,
					1,
					20
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",
					0.316228,
					1,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",
					0.94999999,
					1,
					2000
				};
				begin2[]=
				{
					"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",
					0.94999999,
					1,
					2000
				};
				begin3[]=
				{
					"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",
					0.94999999,
					1,
					2000
				};
				begin4[]=
				{
					"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",
					0.94999999,
					1,
					2000
				};
				begin5[]=
				{
					"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",
					0.94999999,
					1,
					2000
				};
				begin6[]=
				{
					"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",
					0.94999999,
					1,
					2000
				};
				begin7[]=
				{
					"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",
					0.94999999,
					1,
					2000
				};
				begin8[]=
				{
					"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",
					0.94999999,
					1,
					2000
				};
				begin9[]=
				{
					"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",
					0.94999999,
					1,
					2000
				};
				begin10[]=
				{
					"3AS\3AS_Static\data\Sounds\HeavyRepeater\Blaster_Cannon_1",
					0.94999999,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1,
					"begin5",
					0.1,
					"begin6",
					0.1,
					"begin7",
					0.1,
					"begin8",
					0.1,
					"begin9",
					0.1,
					"begin10",
					0.1
				};
			};
			soundContinuous=0;
			soundBurst=0;
			multiplier=1;
			reloadTime=0.02;
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
		class close: LowROF
		{
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.1;
			showToPlayer=0;
		};
		class short: close
		{
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.1;
		};
		class medium: close
		{
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.40000001;
			maxRange=1000;
			maxRangeProbab=0.0099999998;
		};
	};
	class DBA_Aircraft_Lasers_Blue: DBA_Aircraft_Lasers_Generic
	{
		magazines[]=
		{
			"DBA_generic_aircraft_gun_blue_x1000_mag"
		};
	};
	class DBA_Aircraft_Lasers_Green: DBA_Aircraft_Lasers_Generic
	{
		magazines[]=
		{
			"DBA_generic_aircraft_gun_green_x1000_mag"
		};
	};
	class DBA_Aircraft_Lasers_Yellow: DBA_Aircraft_Lasers_Generic
	{
		magazines[]=
		{
			"DBA_generic_aircraft_gun_yellow_x1000_mag"
		};
	};
	class DBA_Aircraft_Lasers_Praetorian: DBA_Aircraft_Lasers_Generic
	{
		magazines[]=
		{
			"DBA_generic_aircraft_gun_preatorian_x1000_mag"
		};
	};
	class DBA_Aircraft_Heavy_Lasers_Red: Gatling_30mm_Plane_CAS_01_F
	{
		displayName="Heavy Aircraft Lasers";
		magazineReloadTime=5;
		ballisticsComputer=1;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		magazines[]=
		{
			"DBA_generic_aircraft_cannon_red_x200_mag"
		};
		class LowROF: LowROF
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",
					0.316228,
					1,
					20
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",
					0.316228,
					1,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"3AS\3as_Laat\sounds\LAAT_Cannon.wav",
					1.99526,
					1,
					1500
				};
				soundsetshot[]=
				{
					"3AS_LAATBall_SoundSet"
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
			reloadTime=0.02;
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
	};
	class DBA_Aircraft_Heavy_Lasers_Blue: DBA_Aircraft_Heavy_Lasers_Red
	{
		magazines[]=
		{
			"DBA_generic_aircraft_cannon_blue_x200_mag"
		};
	};
	class DBA_Aircraft_Heavy_Lasers_Green: DBA_Aircraft_Heavy_Lasers_Red
	{
		magazines[]=
		{
			"DBA_generic_aircraft_cannon_green_x200_mag"
		};
	};
	class DBA_Aircraft_Heavy_Lasers_Yellow: DBA_Aircraft_Heavy_Lasers_Red
	{
		magazines[]=
		{
			"DBA_generic_aircraft_cannon_yellow_x200_mag"
		};
	};
	class DBA_generic_kannon: DBA_Aircraft_Lasers_Generic
	{
		displayName="SIN-C 'Rage'";
		magazines[]=
		{
			"DBA_Kannon_x100_mag"
		};
		ballisticsComputer=1;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		class LowROF: LowROF
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\varsuk_125mm_distant",
					3.1622777,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			burst=1;
			soundContinuous=0;
			soundBurst=0;
			multiplier=1;
			reloadTime=0.166667;
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
	};
	class missiles_ASRAAM;
	class Rocket_04_AP_Plane_CAS_01_F;
	class missiles_DAGR;
	class missiles_Jian;
	class Missile_AGM_01_Plane_CAS_02_F;
	class Missile_AA_03_Plane_CAS_02_F;
	class BombCluster_02_F;
	class weapon_SDBLauncher;
	class GBU12BombLauncher;
	class MissileLauncher;
	class RocketPods;
	class dba_wynd_a2a: missiles_ASRAAM
	{
		displayName="Bolt (AA)";
		displayNameShort="Bolt A2A";
		magazines[]=
		{
			"dba_a2a_x4_mag"
		};
	};
	class dba_wynd_agm: missiles_DAGR
	{
		displayName="Rain AGM";
		displayNameShort="Rain AGM";
		canLock=2;
		magazines[]=
		{
			"dba_agm_x6_mag"
		};
	};
	class dba_wynd_ugm: Rocket_04_AP_Plane_CAS_01_F
	{
		displayName="Sleet UGM (UGM)";
		displayNameShort="Sleet UGM";
		magazines[]=
		{
			"dba_ugm_x10_mag"
		};
		autoFire="true";
	};
	class dba_wynd_lgm: missiles_Jian
	{
		displayName="Icicle WGM";
		displayNameShort="Icicle WGM";
		magazines[]=
		{
			"dba_lgm_x4_mag"
		};
	};
	class DBA_ClusterBomb: BombCluster_02_F
	{
		displayName="Lightning Cluster Bomb";
		displayNameShort="Lightning Cluster Bomb";
		magazines[]=
		{
			"DBA_cluster_bomb_x4_mag",
			"DBA_cluster_bomb_x2_mag"
		};
	};
	class DBA_SDBLauncher: weapon_SDBLauncher
	{
		displayName="Lightning SDB Bomb";
		displayNameShort="Lightning SDB Bomb";
		magazines[]=
		{
			"DBA_sdb_bomb_x4_mag"
		};
	};
	class DBA_LGBLauncher: GBU12BombLauncher
	{
		displayName="Lightning LGB Bomb";
		displayNameShort="Lightning LGB Bomb";
		magazines[]=
		{
			"DBA_lgb_bomb_x4_mag"
		};
	};
	class DBA_Aircraft_Lasers_Green_Pylon: DBA_Aircraft_Lasers_Green
	{
		magazines[]=
		{
			"DBA_pylon_generic_aircraft_gun_green_x1000_mag"
		};
	};
	class DBA_Aircraft_Heavy_Lasers_Green_Pylon: DBA_Aircraft_Heavy_Lasers_Green
	{
		magazines[]=
		{
			"DBA_pylon_generic_aircraft_cannon_green_x500_mag"
		};
	};
	class DBA_Aircraft_Lasers_Yellow_Pylon: DBA_Aircraft_Lasers_Yellow
	{
		magazines[]=
		{
			"DBA_pylon_generic_aircraft_gun_yellow_x1000_mag"
		};
	};
	class DBA_Aircraft_Heavy_Lasers_Yellow_Pylon: DBA_Aircraft_Heavy_Lasers_Yellow
	{
		magazines[]=
		{
			"DBA_pylon_generic_aircraft_cannon_yellow_x500_mag"
		};
	};
	class DBA_Kannon_Pylon: DBA_generic_kannon
	{
		magazines[]=
		{
			"DBA_pylon_kannon_x8_mag"
		};
	};
	class dba_pylon_a2a: missiles_ASRAAM
	{
		displayName="Bolt (AA)";
		displayNameShort="Bolt A2A";
		magazines[]=
		{
			"DBA_pylon_aa_x3_mag"
		};
	};
	class dba_pylon_agm: missiles_DAGR
	{
		displayName="Rain AGM";
		displayNameShort="Rain AGM";
		canLock=2;
		magazines[]=
		{
			"DBA_pylon_agm_x4_mag"
		};
	};
	class dba_pylon_ugm: Rocket_04_AP_Plane_CAS_01_F
	{
		displayName="Sleet UGM (UGM)";
		displayNameShort="Sleet UGM";
		magazines[]=
		{
			"DBA_pylon_ugm_x10_mag"
		};
		autoFire="true";
	};
	class dba_pylon_lgm: missiles_Jian
	{
		displayName="Icicle WGM";
		displayNameShort="Icicle WGM";
		magazines[]=
		{
			"DBA_pylon_lgm_x3_mag"
		};
	};
	class DBA_Opfor_Missile_A2A: missiles_ASRAAM
	{
		displayName="Stomper Air-to-Air Missile";
		magazines[]=
		{
			"DBA_pylon_stomper_aa_x3_mag"
		};
		model="a3\weapons_f\empty.p3d";
	};
	class DBA_Ground_lmg_Generic: HMG_127
	{
		displayName="Light Laser Repeater";
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		scope=2;
		magazines[]=
		{
			"DBA_lmg_blue_x500_mag",
			"DBA_lmg_green_x500_mag",
			"DBA_lmg_orange_x500_mag",
			"DBA_lmg_red_x500_mag",
			"DBA_lmg_pink_x500_mag",
			"DBA_lmg_purple_x500_mag",
			"DBA_lmg_black_x500_mag",
			"DBA_lmg_yellow_x500_mag"
		};
		magazineReloadTime=3;
		class manual: manual
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_a_vehicle\laat\sounds\dc-15r.wss",
					1,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.079999998;
			soundContinuous=0;
			soundBurst=0;
			dispersion=0.00049999997;
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
			aiBurstTerminable=1;
			dispersion=0.0099999998;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=16;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.69999999;
			midRange=400;
			midRangeProbab=0.75;
			maxRange=800;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=4;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=400;
			minRange=400;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.25;
			maxRange=2000;
			maxRangeProbab=0.050000001;
		};
	};
	class DBA_Ground_HMG_Generic: HMG_127
	{
		displayName="Heavy Laser Repeater";
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		scope=2;
		magazines[]=
		{
			"DBA_HMG_blue_x500_mag",
			"DBA_HMG_green_x500_mag",
			"DBA_HMG_orange_x500_mag",
			"DBA_HMG_red_x500_mag",
			"DBA_HMG_pink_x500_mag",
			"DBA_HMG_purple_x500_mag",
			"DBA_HMG_black_x500_mag",
			"DBA_HMG_yellow_x500_mag"
		};
		magazineReloadTime=3;
		class manual: manual
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_a_vehicle\laat\sounds\dc-15r.wss",
					1,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.1;
			soundContinuous=0;
			soundBurst=0;
			dispersion=0.00049999997;
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
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			dispersion=0.0115;
			aiRateOfFireDispersion=1.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=16;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.69999999;
			midRange=400;
			midRangeProbab=0.75;
			maxRange=800;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=4;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=400;
			minRange=400;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.25;
			maxRange=2000;
			maxRangeProbab=0.050000001;
		};
	};
	class DBA_Ground_AC_Generic: HMG_127
	{
		displayName="Light Laser Cannon";
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		scope=2;
		magazines[]=
		{
			"DBA_AC_blue_x100_mag",
			"DBA_AC_green_x100_mag",
			"DBA_AC_orange_x100_mag",
			"DBA_AC_red_x100_mag",
			"DBA_AC_pink_x100_mag",
			"DBA_AC_purple_x100_mag",
			"DBA_AC_black_x100_mag",
			"DBA_AC_yellow_x100_mag"
		};
		magazineReloadTime=6;
		class manual: manual
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_a_vehicle\laat\sounds\dc-15r.wss",
					1,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.38;
			soundContinuous=0;
			soundBurst=0;
			dispersion=0.00049999997;
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
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			dispersion=0.0099999998;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=16;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.69999999;
			midRange=400;
			midRangeProbab=0.75;
			maxRange=800;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=4;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=400;
			minRange=400;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.25;
			maxRange=2000;
			maxRangeProbab=0.050000001;
		};
	};
	class DBA_240mw_Cannon: cannon_120mm
	{
		displayName="240mw Siegecannon";
		scope=2;
		magazines[]=
		{
			"DBA_lancer_mbt_td_x12_mag"
		};
		reloadTime=6;
		magazineReloadTime=6;
		autoReload=1;
		class player: player
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_g_vehicle\aat\sounds\aat_main_gun.wss",
					3.1622777,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=6;
			magazineReloadTime=6;
			autoReload=1;
			autoFire=0;
			dispersion=0.00056999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.64999998;
			midRange=1250;
			midRangeProbab=0.80000001;
			maxRange=1750;
			maxRangeProbab=0.5;
		};
	};
	class 3AS_GATRepeater;	
	class 3AS_HeavyAATCannon_Base;
	class 3AS_HeavyGATCannon_Base : 3AS_HeavyAATCannon_Base{
		
	};
	class 3AS_GATCannon : 3AS_HeavyGATCannon_Base{
		
	};
	class autocannon_35mm : CannonCore
	{
		class manual :CannonCore
		{
			
		};
	};
	class M288_autocannon:autocannon_35mm
	{
		
	};
	class DBA_50mw_K5B2 : 3AS_GATRepeater
	{
		displayName="K-5B2 50mw Anti-Air Artillery";
		displayNameShort="K-5B2";
		author="ISU";
		magazines[]=
		{
			"DBA_50mm_hepf_x400_mag",
			"DBA_50mm_sap_x150_mag"
		};
		modes[]=
		{
			"manual",
			"short",
			"medium",
			"far"
		};
		magazineReloadTime=0.25;
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="MachineGun1";
				positionName="Usti hlavne";
			};
			class SecondEffect
			{
				directionName="Konec hlavne";
				effectName="MachineGun1";
				positionName="Usti hlavne";
			};
		};
		class manual
		{
			displayName="K-5B2";
			textureType = "fullAuto";
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.15;
			class StandardSound
			{
				begin1[]=
				{
					"\101st_Aux_Mod\Addons\Weapons\cannon.ogg",
					1,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			autoFire=1;
			soundContinuous=0;
			burst = 2;
			soundBurst=0;
			multiplier=1;
			dispersion=0.0055;
			aiRateOfFire=1;
			showToPlayer = 1;
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
			aiRateOfFire=1;
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
			burst=15;
			burstRangeMax=36;
			aiRateOfFire=2;
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
			burst=20;
			burstRangeMax=30;
			aiRateOfFire=3;
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
			burst=20;
			burstRangeMax=20;
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
	class DBA_23mw_G765 : DBA_50mw_K5B2{
		displayName="G-765 23mw Anti-Air Artillery";
		displayNameShort="G-765";
		author="ISU";
		magazines[]=
		{
			"DBA_23mm_UM23_HEPF_x5000_mag"
		};
		modes[]=
		{
			"manual",
			"short",
			"medium",
			"far"
		};
		magazineReloadTime=30;
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="MachineGun1";
				positionName="Usti hlavne";
			};
			class SecondEffect
			{
				directionName="Konec hlavne";
				effectName="MachineGun1";
				positionName="Usti hlavne";
			};
		};
		class manual
		{
			displayName="G-765";
			textureType = "fullAuto";
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.006;
			class StandardSound
			{
				begin1[]=
				{
					"\101st_Aux_Mod\Addons\Weapons\cannon.ogg",
					1,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			autoFire=1;
			soundContinuous=0;
			burst = 1;
			soundBurst=0;
			multiplier=1;
			dispersion=0.0075;
			aiRateOfFire=1;
			showToPlayer = 1;
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
			burst=120;
			burstRangeMax=120;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=500;
			minRange=0;
			minRangeProbab=0.88;
			midRange=250;
			midRangeProbab=0.90;
			maxRange=500;
			maxRangeProbab=1;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=150;
			burstRangeMax=200;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=750;
			minRange=500;
			minRangeProbab=0.9;
			midRange=600;
			midRangeProbab=0.9;
			maxRange=750;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=200;
			burstRangeMax=300;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=1300;
			minRange=900;
			minRangeProbab=0.9;
			midRange=1000;
			midRangeProbab=0.9;
			maxRange=1250;
			maxRangeProbab=0.9;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=200;
			burstRangeMax=400;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=2500;
			minRange=1500;
			minRangeProbab=0.98;
			midRange=2000;
			midRangeProbab=0.98;
			maxRange=2500;
			maxRangeProbab=0.9;
		};
	};
	class DBA_UKAS_MG : 3AS_GATRepeater{
		displayName="UKAS 7.62mw Repeater";
		displayNameShort="UKAS";
		author="ISU";
		magazines[]=
		{
			"DBA_762_REC_x2600_mag"
		};
		modes[]=
		{
			"manual",
			"short",
			"medium",
			"far"
		};
		magazineReloadTime=12;
		class manual
		{
			displayName="UKAS";
			textureType = "fullAuto";
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.02;
			class StandardSound
			{
				begin1[]=
				{
					"\101st_Aux_Mod\Addons\Weapons\cannon.ogg",
					0.5,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			autoFire=1;
			soundContinuous=0;
			burst = 4;
			soundBurst=0;
			multiplier=1;
			dispersion=0.0045;
			aiRateOfFire=1;
			showToPlayer = 1;
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
			burst=50;
			burstRangeMax=100;
			aiRateOfFire=1;
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
			burst=50;
			burstRangeMax=100;
			aiRateOfFire=2;
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
			burst=50;
			burstRangeMax=100;
			aiRateOfFire=3;
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
			burst=50;
			burstRangeMax=100;
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
	class DBA_115mw_B5TC_Cannon : cannon_120mm{
		displayName="115mw B-5TC";
		scope=2;
		magazines[]=
		{
			"DBA_115mm_B3M_AP_x8_mag",
			"DBA_115mm_KB4_HEAT_x10_mag",
			"DBA_115mm_UB11_HEF_x20_mag"
		};
		magazineReloadTime=8;
		autoReload=1;
		class player: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_g_vehicle\aat\sounds\aat_main_gun.wss",
					3.1622777,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=8;
			autoReload=1;
			autoFire=0;
			dispersion=0.00006999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.64999998;
			midRange=1250;
			midRangeProbab=0.80000001;
			maxRange=1750;
			maxRangeProbab=0.5;
		};
	};
	class DBA_90mw_HFAH1_Cannon : 3AS_HeavyGATCannon_Base{
		displayName="90mw HFA-B1 Cannon";
		displayNameShort="HFA-B1";
		shotFromTurret = 0;
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			1,
			10
		};
		magazines[]=
		{
			"DBA_90mm_UR62M_HEAT_x24_mag"
		};
		magazineReloadTime=15;
		autoReload=1;
		autoFire=0;
		class manual: Mode_SemiAuto
		{
			displayName="HFA-B1 Cannon";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					1,
					1,
					6000
				};
				begin2[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					1,
					1,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.5
				};
			};
			reloadTime=2;
			soundBurst=0;
			dispersion=0.0008500001;
			showToPlayer=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=150;
		};
	};
	class DBA_165mw_B9M_ORD_Mortar : 3AS_GATCannon{
		scope=2;
		displayName="165mw B-9M ORD Demolitian Mortar";
		cursor="EmptyCursor";
		cursorAim="cannon";
		showAimCursorInternal=0;
		nameSound="cannon";
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			1,
			10
		};
		magazines[]=
		{
			"DBA_165mm_C33_BESH_x30_mag"
		};
		reloadTime=13.75;
		magazineReloadTime=13.75;
		autoReload=1;
		canLock=0;
		ballisticsComputer="2 + 16";
		FCSMaxLeadSpeed=25;
		FCSZeroingDelay=1;
		aiDispersionCoefY=2;
		aiDispersionCoefX=2;
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
			displayName="165mw B-9M Ordnance Demolitian Mortar";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					1,
					0.89999998,
					6000
				};
				begin2[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					1,
					0.89999998,
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
			reloadTime=13.75;
			soundBurst=0;
			dispersion=0.000085;
			showToPlayer=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=150;
		};
		class close: manual
		{
			showToPlayer=0;
			soundBurst=0;
			soundContinuous=0;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=0.1;
			minRange=0;
			minRangeProbab=0.350000001;
			midRange=100;
			midRangeProbab=0.57999998;
			maxRange=300;
			maxRangeProbab=0.90000001;
		};
		class short: close
		{
			minRange=150;
			minRangeProbab=0.65;
			midRange=500;
			midRangeProbab=0.89999999;
			maxRange=1500;
			maxRangeProbab=0.70000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=0.1;
		};
		class medium: close
		{
			minRange=250;
			minRangeProbab=0.65;
			midRange=750;
			midRangeProbab=0.85999999;
			maxRange=1000;
			maxRangeProbab=0.8000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=700;
			aiRateOfFireDispersion=0.1;
		};
		class far: close
		{
			minRange=500;
			minRangeProbab=0.9;
			midRange=1200;
			midRangeProbab=0.85999999;
			maxRange=2100;
			maxRangeProbab=0.750000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=0.1;
		};
	};
	class DBA_130mw_HH30_Cannon : cannon_120mm{
		displayName="130mw HH-30 Mass Driver";
		scope=2;
		magazines[]=
		{
			"DBA_130mm_R13_AP_x15_mag",
			"DBA_130mm_UR11_HE_x20_mag"
		};
		magazineReloadTime=6.7;
		class player: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_g_vehicle\aat\sounds\aat_main_gun.wss",
					3.1622777,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=6.7;
			autoReload=1;
			autoFire=0;
			dispersion=0.00006999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.64999998;
			midRange=1250;
			midRangeProbab=0.80000001;
			maxRange=1750;
			maxRangeProbab=0.5;
		};
	};
	class DBA_140mw_HH30M4_Cannon : cannon_120mm{
		displayName="140mw HH-30M4 Mass Driver";
		scope=2;
		magazines[]=
		{
			"DBA_140mm_KB1P_HEAT_x23_mag",
			"DBA_140mm_R1P_AP_x17_mag"
		};
		magazineReloadTime=8.7;
		class player: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_g_vehicle\aat\sounds\aat_main_gun.wss",
					5.1622777,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=8.7;
			autoReload=1;
			autoFire=0;
			dispersion=0.00006999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.64999998;
			midRange=1250;
			midRangeProbab=0.80000001;
			maxRange=1750;
			maxRangeProbab=0.5;
		};
	};
	class DBA_G13_Coaxial : 3AS_AAT_Repeater {
		displayName="G-13 Repeaters";
		magazineReloadTime=3.75;
		ballisticsComputer=2;
		scope=1;
		class manual: manual
		{
			displayName="G-13 Repeaters";
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.1;
			dispersion=0.00875;
		};
		magazines[]=
		{
			"DBA_792_M5A_x400_mag"
		};
	};
	class DBA_57mw_Cannon: cannon_120mm
	{	
		displayName="57mw AZP Autocannon";
		scope=2;
		magazines[]=
		{
			"DBA_57mm_hef_x6_mag",
			"DBA_57mm_ap_x6_mag"
		};
		magazineReloadTime=2.5;
		modes[]=
		{
			"player",
			"short",
			"medium",
			"far"
		};
		class player: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_g_vehicle\aat\sounds\aat_main_gun.wss",
					3.1622777,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.5714286;
			aiBurstTerminable = 1;
			soundContinuous=0;
			autoReload=1;
			autoFire=1;
			dispersion=0.002;
			aiRateOfFire=0.5714286;
			aiRateOfFireDistance=500;
			minRange=5;
			minRangeProbab=0.85;
			midRange=500;
			midRangeProbab=0.725;
			maxRange=800;
			maxRangeProbab=0.45;
		};
		class close: player
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=6;
			aiRateOfFire=1;
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
			burst=2;
			burstRangeMax=6;
			aiRateOfFire=2;
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
			burst=4;
			burstRangeMax=6;
			aiRateOfFire=3;
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
			burst=6;
			burstRangeMax=6;
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
	class DBA_MBT_Cannon: cannon_120mm
	{
		displayName="MBT Cannon";
		scope=2;
		magazines[]=
		{
			"DBA_lancer_mbt_he_x12_mag",
			"DBA_lancer_mbt_ap_x12_mag",
			"DBA_lancer_mbt_td_x12_mag"
		};
		reloadTime=6;
		magazineReloadTime=6;
		autoReload=1;
		class player: player
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_g_vehicle\aat\sounds\aat_main_gun.wss",
					3.1622777,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=6;
			magazineReloadTime=6;
			autoReload=1;
			autoFire=0;
			dispersion=0.00056999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
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
					"\101st_Aux_Mod\Addons\Weapons\cannon.ogg",
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
};
class CfgMagazines
{
	class 500Rnd_Cannon_ARCback;
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F;
	class 100Rnd_127x99_mag_Tracer_Red;
	class 30Rnd_120mm_HE_shells;
	class DBA_generic_aircraft_gun_x1000_mag: 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		displayNameShort="Plasma Cores (Red)";
		displayName="Plasma Cores (Red)";
		ammo="DBA_generic_aircraft_laser_gun_red_ammo";
		count=1000;
		tracersEvery=1;
		initSpeed=1036;
		maxLeadSpeed=1000;
		muzzleImpulseFactor[]={0,0};
	};
	class DBA_generic_aircraft_gun_blue_x1000_mag: DBA_generic_aircraft_gun_x1000_mag
	{
		displayNameShort="Plasma Cores (Blue)";
		displayName="Plasma Cores (Blue)";
		ammo="DBA_generic_aircraft_laser_gun_blue_ammo";
	};
	class DBA_generic_aircraft_gun_green_x1000_mag: DBA_generic_aircraft_gun_x1000_mag
	{
		displayNameShort="Plasma Cores (Green)";
		displayName="Plasma Cores (Green)";
		ammo="DBA_generic_aircraft_laser_gun_green_ammo";
	};
	class DBA_generic_aircraft_gun_asg_x3000_mag: DBA_generic_aircraft_gun_x1000_mag
	{
		displayNameShort="AS Gun";
		displayName="Air Superiority Gun";
		ammo="DBA_generic_aircraft_laser_gun_green_ammo";
		count=3000;
	};
	class DBA_generic_aircraft_gun_yellow_x1000_mag: DBA_generic_aircraft_gun_x1000_mag
	{
		displayNameShort="Plasma Cores (Yellow)";
		displayName="Plasma Cores (Yellow)";
		ammo="DBA_generic_aircraft_laser_gun_yellow_ammo";
	};
	class DBA_generic_aircraft_gun_preatorian_x1000_mag: DBA_generic_aircraft_gun_x1000_mag
	{
		displayNameShort="Plasma Cores (Preatorian)";
		displayName="Plasma Cores";
		ammo="DBA_generic_aircraft_laser_gun_praetorian_ammo";
	};
	class DBA_Kannon_x100_mag: DBA_generic_aircraft_gun_green_x1000_mag
	{
		ammo="DBA_generic_kannon_ammo";
		displayNameShort="Coaxium Shells";
		count="100";
	};
	class DBA_generic_aircraft_cannon_red_x200_mag: DBA_generic_aircraft_gun_x1000_mag
	{
		count=200;
		displayNameShort="Plasma Cores (Red)";
		displayName="Plasma Cores (Red)";
		ammo="DBA_generic_aircraft_laser_cannon_red_ammo";
	};
	class DBA_generic_aircraft_cannon_green_x200_mag: DBA_generic_aircraft_gun_green_x1000_mag
	{
		count=200;
		displayNameShort="Plasma Cores (Green)";
		displayName="Plasma Cores (Green)";
		ammo="DBA_generic_aircraft_laser_cannon_green_ammo";
	};
	class DBA_generic_aircraft_cannon_blue_x200_mag: DBA_generic_aircraft_gun_blue_x1000_mag
	{
		count=200;
		displayNameShort="Plasma Cores";
		displayName="Plasma Cores";
		ammo="DBA_generic_aircraft_laser_cannon_blue_ammo";
	};
	class DBA_generic_aircraft_cannon_yellow_x200_mag: DBA_generic_aircraft_gun_blue_x1000_mag
	{
		count=200;
		displayNameShort="Plasma Cores";
		displayName="Plasma Cores";
		ammo="DBA_generic_aircraft_laser_cannon_yellow_ammo";
	};
	class 4Rnd_AAA_missiles;
	class 7Rnd_Rocket_04_AP_F;
	class magazine_Missile_rim116_x21;
	class magazine_Missile_rim162_x8;
	class PylonRack_12Rnd_PG_missiles;
	class 4Rnd_LG_Jian;
	class PylonRack_1Rnd_Missile_AGM_01_F;
	class 3as_PylonMissle_Vulture_2Rnd_Missile_AA;
	class DBA_a2a_x4_mag: 4Rnd_AAA_missiles
	{
		ammo="DBA_a2a_ammo";
		count=4;
		displayName="Bolt A2A";
		displayNameShort="Bolt A2A";
		tracersEvery=1;
	};
	class DBA_agm_x6_mag: PylonRack_12Rnd_PG_missiles
	{
		ammo="DBA_agm_ammo";
		count=6;
		displayName="Rain AGM";
		displayNameShort="Rain AGM";
		tracersEvery=1;
	};
	class DBA_ugm_x10_mag: 7Rnd_Rocket_04_AP_F
	{
		ammo="DBA_ugm_ammo";
		count=10;
		displayName="Sleet UGM";
		displayNameShort="Sleet UGM";
		tracersEvery=1;
	};
	class DBA_lgm_x4_mag: 4Rnd_LG_Jian
	{
		ammo="DBA_lgm_ammo";
		count=4;
		displayName="Icicle WGM";
		displayNameShort="Icicle WGM";
	};
	class 4Rnd_BombCluster_02_F;
	class PylonRack_Bomb_SDB_x4;
	class 2Rnd_GBU12_LGB;
	class DBA_cluster_bomb_x4_mag: 4Rnd_BombCluster_02_F
	{
		ammo="DBA_cluster_bomb_ammo";
		count=4;
		DisplayName="Thunderstorm CB";
		displayNameShort="Thunderstorm CB";
		tracersEvery=1;
	};
	class DBA_cluster_bomb_x2_mag: DBA_cluster_bomb_x4_mag
	{
		count=2;
	};
	class DBA_cluster_emp_x2_mag: DBA_cluster_bomb_x4_mag
	{
		ammo="DBA_cluster_emp_ammo";
		DisplayName="Lightning EMP CB";
		displayNameShort="Lightning EMP CB";
		count=2;
	};
	class DBA_sdb_bomb_x4_mag: PylonRack_Bomb_SDB_x4
	{
		ammo="DBA_sdb_bomb_ammo";
		count=4;
		DisplayName="Wrath PGB";
		displayNameShort="Wrath PGB";
		tracersEvery=1;
	};
	class DBA_lgb_bomb_x4_mag: 2Rnd_GBU12_LGB
	{
		ammo="DBA_lgb_bomb_ammo";
		count=4;
		DisplayName="Ruinscape GB";
		displayNameShort="Ruinscape GB";
		tracersEvery=1;
	};
	class DBA_voltic_x200_mag: DBA_generic_aircraft_cannon_green_x200_mag
	{
		displayNameShort="";
		ammo="DBA_voltic_ammo";
		count=200;
		tracersEvery=1;
		initSpeed=1036;
		maxLeadSpeed=300;
		muzzleImpulseFactor[]={0,0};
	};
	class DBA_laat_ball_turret_x200_mag: DBA_generic_aircraft_cannon_green_x200_mag
	{
		displayName="Laat Ball Turret Mag";
		displayNameShort="Ball Turret Mag";
		ammo="DBA_ball_turret_ammo";
		count=300;
		tracersEvery=1;
		initSpeed=1036;
		maxLeadSpeed=300;
		muzzleImpulseFactor=0;
		scope=1;
	};
	class 2Rnd_Bomb_03_F;
	class DBA_carpet_I_bomb_mag_x20_mag: 2Rnd_Bomb_03_F
	{
		dlc="DBA";
		scope=2;
		displayName="20 Rnd Carpet I Bomb";
		displayNameShort="20 Rnd Bomb";
		count=20;
		ammo="DBA_carpet_I_bomb_ammo";
		initSpeed=0;
		maxLeadSpeed=1000;
	};
	class DBA_pylon_generic_aircraft_gun_green_x1000_mag: DBA_generic_aircraft_gun_x1000_mag
	{
		displayNameShort="Aircraft Laser Cannons (Green)";
		displayName="Aircraft Laser Cannons (Green)";
		ammo="DBA_generic_aircraft_laser_gun_green_ammo";
		count=1000;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail"
		};
		pylonWeapon="DBA_Aircraft_Lasers_Green_Pylon";
	};
	class DBA_pylon_generic_aircraft_gun_yellow_x1000_mag: DBA_generic_aircraft_gun_x1000_mag
	{
		displayNameShort="Aircraft Laser Cannons (Yellow)";
		displayName="Aircraft Laser Cannons (Yellow)";
		ammo="DBA_generic_aircraft_laser_gun_yellow_ammo";
		count=1000;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Opfor_rail"
		};
		pylonWeapon="DBA_Aircraft_Lasers_Yellow_Pylon";
	};
	class DBA_pylon_generic_aircraft_cannon_green_x500_mag: DBA_generic_aircraft_cannon_green_x200_mag
	{
		displayNameShort="Heavy Aircraft Laser Cannons (Green)";
		displayName="Heavy Aircraft Laser Cannons (Green)";
		count=500;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail"
		};
		pylonWeapon="DBA_Aircraft_Heavy_Lasers_Green_Pylon";
	};
	class DBA_pylon_generic_aircraft_cannon_yellow_x500_mag: DBA_generic_aircraft_cannon_yellow_x200_mag
	{
		displayNameShort="Heavy Aircraft Laser Cannons";
		displayName="Heavy Aircraft Laser Cannons";
		count=500;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Opfor_rail"
		};
		pylonWeapon="DBA_Aircraft_Heavy_Lasers_Yellow_Pylon";
	};
	class DBA_pylon_kannon_x8_mag: DBA_Kannon_x100_mag
	{
		displayNameShort="Coaxium Laser Cannons";
		displayName="Coaxium Laser Cannons";
		count=8;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail"
		};
		pylonWeapon="DBA_Kannon_Pylon";
	};
	class DBA_pylon_agm_x4_mag: PylonRack_1Rnd_Missile_AGM_01_F
	{
		ammo="DBA_agm_ammo";
		count=4;
		displayName="Rain AGM";
		displayNameShort="Rain AGM";
		tracersEvery=1;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail",
			"DBA_Opfor_rail"
		};
		pylonWeapon="dba_pylon_agm";
	};
	class DBA_pylon_aa_x3_mag: 4Rnd_AAA_missiles
	{
		ammo="DBA_a2a_ammo";
		count=3;
		displayName="Bolt A2A";
		displayNameShort="Bolt A2A";
		tracersEvery=1;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail",
			"DBA_Opfor_rail"
		};
		pylonWeapon="dba_pylon_a2a";
	};
	class DBA_pylon_stomper_aa_x3_mag: 4Rnd_AAA_missiles
	{
		ammo="DBA_Stomper_a2a_ammo";
		count=3;
		displayName="Stomper A2A";
		displayNameShort="Stomper A2A";
		tracersEvery=1;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Opfor_rail"
		};
		pylonWeapon="DBA_Opfor_Missile_A2A";
	};
	class DBA_pylon_lgm_x3_mag: 4Rnd_LG_Jian
	{
		ammo="DBA_lgm_ammo";
		count=3;
		displayName="Icicle WGM";
		displayNameShort="Icicle WGM";
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail",
			"DBA_Opfor_rail"
		};
		pylonWeapon="DBA_pylon_lgm";
	};
	class DBA_pylon_ugm_x10_mag: 7Rnd_Rocket_04_AP_F
	{
		ammo="DBA_ugm_ammo";
		count=10;
		displayName="Sleet UGM";
		displayNameShort="Sleet UGM";
		tracersEvery=1;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail",
			"DBA_Opfor_rail"
		};
		pylonWeapon="DBA_pylon_ugm";
	};
	class DBA_aat_mbt_x50_mag: 30Rnd_120mm_HE_shells
	{
		displayNameShort="GAT MBT 50 round mag";
		ammo="DBA_aat_mbt_ammo";
		count=50;
		tracersEvery=1;
		initSpeed=600;
		muzzleImpulseFactor=0;
		maxLeadSpeed=300;
	};
	class DBA_aat_mbt_x10_mag: 30Rnd_120mm_HE_shells
	{
		displayNameShort="10Rnd King Laser Mag";
		ammo="DBA_aat_king_ammo";
		count=10;
		tracersEvery=1;
		initSpeed=800;
		muzzleImpulseFactor=0;
		maxLeadSpeed=600;
	};
	class DBA_lancer_mbt_he_x12_mag: DBA_aat_mbt_x10_mag
	{
		displayName="Kyber Plasma Shell";
		displayNameShort="12Rnd Kyber Plasma Shell";
		ammo="DBA_lancer_mbt_he_ammo";
		count=12;
		tracersEvery=1;
		initSpeed=800;
		muzzleImpulseFactor=0;
		maxLeadSpeed=600;
	};
	class DBA_lancer_mbt_ap_x12_mag: DBA_aat_mbt_x10_mag
	{
		displayName="Compacted Durasteel Shell";
		displayNameShort="12Rnd Durasteel Shell";
		ammo="DBA_lancer_mbt_ap_ammo";
		count=12;
		tracersEvery=1;
		initSpeed=800;
		muzzleImpulseFactor=0;
		maxLeadSpeed=600;
	};
	class DBA_lancer_mbt_td_x12_mag: DBA_aat_mbt_x10_mag
	{
		displayName="240mw Heavy Kinetic Energy Penetrator";
		displayNameShort="240mw HKEP";
		ammo="DBA_lancer_mbt_td_ammo";
		count=12;
		tracersEvery=1;
		initSpeed=1700;
		muzzleImpulseFactor=0;
		maxLeadSpeed=600;
	};
	class DBA_lmg_blue_x500_mag: 100Rnd_127x99_mag_Tracer_Red
	{
		scope=2;
		displayname="Plasma Cell (Blue)";
		ammo="DBA_762_blue";
		mass=0;
		displaynamemagazine="7.62mw Cannons";
		shortnamemagazine="7.62mw";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_lmg_green_x500_mag: DBA_lmg_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Green)";
		ammo="DBA_762_green";
		mass=0;
		displaynamemagazine="7.62mw Cannons";
		shortnamemagazine="7.62mw";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_lmg_orange_x500_mag: DBA_lmg_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Orange)";
		ammo="DBA_762_orange";
		mass=0;
		displaynamemagazine="7.62mw Cannons";
		shortnamemagazine="7.62mw";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_lmg_red_x500_mag: DBA_lmg_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Red)";
		ammo="DBA_762_red";
		mass=0;
		displaynamemagazine="7.62mw Cannons";
		shortnamemagazine="7.62mw";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_lmg_pink_x500_mag: DBA_lmg_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Pink)";
		ammo="DBA_762_red";
		mass=0;
		displaynamemagazine="7.62mw Cannons";
		shortnamemagazine="7.62mw";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_lmg_purple_x500_mag: DBA_lmg_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Purple)";
		ammo="DBA_762_purple";
		mass=0;
		displaynamemagazine="7.62mw Cannons";
		shortnamemagazine="7.62mw";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_lmg_black_x500_mag: DBA_lmg_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Black)";
		ammo="DBA_762_black";
		mass=0;
		displaynamemagazine="7.62mw Cannons";
		shortnamemagazine="7.62mw";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_lmg_yellow_x500_mag: DBA_lmg_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Yellow)";
		ammo="DBA_762_yellow";
		mass=0;
		displaynamemagazine="7.62mw Cannons";
		shortnamemagazine="7.62mw";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_HMG_blue_x500_mag: 100Rnd_127x99_mag_Tracer_Red
	{
		scope=2;
		displayname="Plasma Cell (Blue)";
		ammo="DBA_HMG_blue_ammo";
		mass=0;
		displaynamemagazine="12.7x99mm Cannons";
		shortnamemagazine="12.7mm";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_HMG_green_x500_mag: DBA_HMG_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Green)";
		ammo="DBA_HMG_green_ammo";
		mass=0;
		displaynamemagazine="12.7x99mm Cannons";
		shortnamemagazine="12.7mm";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_HMG_orange_x500_mag: DBA_HMG_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Orange)";
		ammo="DBA_HMG_orange_ammo";
		mass=0;
		displaynamemagazine="12.7x99mm Cannons";
		shortnamemagazine="12.7mm";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_HMG_red_x500_mag: DBA_HMG_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Red)";
		ammo="DBA_HMG_red_ammo";
		mass=0;
		displaynamemagazine="12.7x99mm Cannons";
		shortnamemagazine="12.7mm";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_HMG_pink_x500_mag: DBA_HMG_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Pink)";
		ammo="DBA_HMG_pink_ammo";
		mass=0;
		displaynamemagazine="12.7x99mm Cannons";
		shortnamemagazine="12.7mm";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_HMG_purple_x500_mag: DBA_HMG_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Purple)";
		ammo="DBA_HMG_purple_ammo";
		mass=0;
		displaynamemagazine="12.7x99mm Cannons";
		shortnamemagazine="12.7mm";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_HMG_black_x500_mag: DBA_HMG_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Black)";
		ammo="DBA_HMG_black_ammo";
		mass=0;
		displaynamemagazine="12.7x99mm Cannons";
		shortnamemagazine="12.7mm";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_HMG_yellow_x500_mag: DBA_HMG_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Yellow)";
		ammo="DBA_HMG_yellow_ammo";
		mass=0;
		displaynamemagazine="12.7x99mm Cannons";
		shortnamemagazine="12.7mm";
		count=500;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_AC_blue_x100_mag: DBA_HMG_blue_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Blue)";
		ammo="DBA_AC_blue_ammo";
		mass=0;
		displaynamemagazine="50mm Cannons";
		shortnamemagazine="50mm";
		count=100;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_AC_green_x100_mag: DBA_HMG_green_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Green)";
		ammo="DBA_AC_green_ammo";
		mass=0;
		displaynamemagazine="50mm Cannons";
		shortnamemagazine="50mm";
		count=100;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_AC_orange_x100_mag: DBA_HMG_orange_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Orange)";
		ammo="DBA_AC_orange_ammo";
		mass=0;
		displaynamemagazine="50mm Cannons";
		shortnamemagazine="50mm";
		count=100;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_AC_red_x100_mag: DBA_HMG_red_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Red)";
		ammo="DBA_AC_red_ammo";
		mass=0;
		displaynamemagazine="50mm Cannons";
		shortnamemagazine="50mm";
		count=100;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_AC_pink_x100_mag: DBA_HMG_pink_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Pink)";
		ammo="DBA_AC_pink_ammo";
		mass=0;
		displaynamemagazine="50mm Cannons";
		shortnamemagazine="50mm";
		count=100;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_AC_purple_x100_mag: DBA_HMG_purple_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Purple)";
		ammo="DBA_AC_purple_ammo";
		mass=0;
		displaynamemagazine="50mm Cannons";
		shortnamemagazine="50mm";
		count=100;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_AC_black_x100_mag: DBA_HMG_black_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Black)";
		ammo="DBA_AC_black_ammo";
		mass=0;
		displaynamemagazine="50mm Cannons";
		shortnamemagazine="50mm";
		count=100;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_AC_yellow_x100_mag: DBA_HMG_yellow_x500_mag
	{
		scope=2;
		displayname="Plasma Cell (Yellow)";
		ammo="DBA_AC_yellow_ammo";
		mass=0;
		displaynamemagazine="50mm Cannons";
		shortnamemagazine="50mm";
		count=100;
		initspeed=910;
		maxLeadSpeed=36.111099;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_lgm_x2_mag: DBA_lgm_x4_mag
	{
		ammo="DBA_lgm_ammo";
		count=2;
		displayName="Icicle WGM";
		displayNameShort="Icicle WGM";
	};
	class 240Rnd_40mm_GPR_Tracer_Red_shells;
	class DBA_57mm_ap_x6_mag: 240Rnd_40mm_GPR_Tracer_Red_shells
	{
		scope=2;
		displayname="B-81 AP-T";
		ammo="DBA_57mm_ap";
		mass=0;
		displaynamemagazine="57mw B-81 AP-T";
		shortnamemagazine="B-81 AP-T";
		displayNameMFDFormat="AP-T";
		displayNameShort="B-81 AP-T";
		count=6;
		initspeed=1000;
		maxLeadSpeed=500;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_57mm_hef_x6_mag: DBA_57mm_ap_x6_mag
	{
		displayname="UB-81 HE-Frag";
		ammo="DBA_57mm_hef";
		displaynamemagazine="57mw UB-81 HE-F";
		shortnamemagazine="UB-81 HE-F";
		displayNameMFDFormat="HE-F";
		displayNameShort="UB-81 HE-F";
	};
	class DBA_50mm_sap_x150_mag: 240Rnd_40mm_GPR_Tracer_Red_shells
	{
		scope=2;
		displayname="50mw SR-5 Semi-Armor Piercing High Explosive";
		ammo="DBA_50mm_SAP";
		displaynamemagazine="50mw SR-5 SAPHE";
		shortnamemagazine="SR-5 SAPHE";
		displayNameMFDFormat="SAPHE";
		displayNameShort="SR-5 SAPHE";
		mass=0;
		count=150;
		initspeed=910;
		maxLeadSpeed=500;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_50mm_HEPF_x400_mag: DBA_50mm_sap_x150_mag
	{
		displayname="50mw MR-90 HE Proximity Fuse";
		ammo="DBA_50mm_HEPF";
		displaynamemagazine="50mw MR-90 HE-PF";
		shortnamemagazine="MR-90 HE-PF";
		displayNameMFDFormat="HE-PF";
		displayNameShort="MR-90 HE-PF";
		count=400;
		initspeed=1015;
		tracersevery=1;
	};
	class DBA_23mm_UM23_HEPF_x5000_mag : DBA_50mm_HEPF_x400_mag{
		displayname="23mw UM-23 High Explosive Proxy Fuse";
		ammo="DBA_23mm_UM23_HEPF";
		displaynamemagazine="23mw UM-23 HE-PF";
		shortnamemagazine="UM-23 HE-PF";
		displayNameMFDFormat="HE-PF";
		displayNameShort="UM-23 HE-PF";
		count=5000;
		initspeed=1050;
		tracersevery=1;
	};
	class DBA_115mm_B3M_AP_x8_mag : 30Rnd_120mm_HE_shells{
		displayname="115mw B-3M Kinetic Energy Penetrator";
		ammo="DBA_115mm_B3M_AP";
		displaynamemagazine="115mm B-3M KEP";
		shortnamemagazine="B-3M KEP";
		displayNameMFDFormat="KEP";
		displayNameShort="B-3M KEP";
		count=8;
		initspeed=1610;
		tracersevery=1;
	};
	class DBA_115mm_KB4_HEAT_x10_mag : DBA_115mm_B3M_AP_x8_mag{
		displayname="115mw KB-4 High Explosive Anti-Tank";
		ammo="DBA_115mm_KB4_HEAT";
		displaynamemagazine="115mm KB-4 HEAT";
		shortnamemagazine="KB-4 HEAT";
		displayNameMFDFormat="HEAT";
		displayNameShort="KB-4 HEAT";
		count=10;
		initspeed=950;
		tracersevery=1;
	};
	class DBA_115mm_UB11_HEF_x20_mag : DBA_115mm_B3M_AP_x8_mag{
		displayname="115mw UB-11 High Explosive Fragmentation";
		ammo="DBA_115mm_UB11_HEF";
		displaynamemagazine="115mw UB-11 HE-F";
		shortnamemagazine="UB-11 HE-F";
		displayNameMFDFormat="HE-F";
		displayNameShort="UB-11 HE-F";
		count=20;
		initspeed=905;
		tracersevery=1;
	};
	class DBA_130mm_R13_AP_x15_mag : DBA_115mm_B3M_AP_x8_mag{
		displayname="130mw R-13 Kinetic Energy Penetrator";
		ammo="DBA_130mm_R13_AP";
		displaynamemagazine="130mw R-13 KEP";
		shortnamemagazine="R-13 KEP";
		displayNameMFDFormat="KEP";
		displayNameShort="R-13 KEP";
		count=15;
		initspeed=1800;
		tracersevery=1;
	};
	class DBA_130mm_UR11_HE_x20_mag : DBA_115mm_UB11_HEF_x20_mag{
		displayname="130mw UR-11 High Explosve";
		ammo="DBA_130mm_UR11_HE";
		displaynamemagazine="130mw UR-11 HE";
		shortnamemagazine="UR-11 HE";
		displayNameMFDFormat="HE";
		displayNameShort="UR-11 HE";
		count=20;
		initspeed=980;
		tracersevery=1;
	};
	class DBA_140mm_R1P_AP_x17_mag : DBA_130mm_R13_AP_x15_mag{
		displayname="140mw R-1P Kinetic Energy Penetrator";
		ammo="DBA_140mm_R1P_AP";
		displaynamemagazine="140mw R-1P KEP";
		shortnamemagazine="R-1P KEP";
		displayNameMFDFormat="KEP";
		displayNameShort="R-1P KEP";
		count=17;
		initspeed=1500;
		tracersevery=1;
	};
	class DBA_140mm_KB1P_HEAT_x23_mag : DBA_140mm_R1P_AP_x17_mag{
		displayname="140mw KB-1P High Explosve Anti Tank Multi-Purpose";
		ammo="DBA_140mm_KB1P_HEAT";
		displaynamemagazine="140mw KB-1P HEAT-MP";
		shortnamemagazine="KB-1P HEAT-MP";
		displayNameMFDFormat="HEAT-MP";
		displayNameShort="KB-1P HEAT-MP";
		count=23;
		initspeed=720;
		tracersevery=1;
	};
	class DBA_792_M5A_x400_mag : DBA_lmg_blue_x500_mag {
		scope=2;
		displayname="7.92mw M-5a";
		ammo="DBA_792_M5A";
		mass=0;
		displaynamemagazine="7.92mw M-5a";
		shortnamemagazine="7.92mw";
		displayNameMFDFormat="7.92mw";
		displayNameShort="7.92mw M-5a";
		count=400;
		initspeed=890;
		maxLeadSpeed=100;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_762_REC_x2600_mag : DBA_792_M5A_x400_mag{
		scope=2;
		displayname="7.62mw REC";
		ammo="DBA_762_54_REC";
		mass=0;
		displaynamemagazine="7.62mw REC";
		shortnamemagazine="7.62mw";
		displayNameMFDFormat="7.62mw";
		displayNameShort="7.62mw REC";
		count=2600;
		initspeed=820;
		maxLeadSpeed=100;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_90mm_UR62M_HEAT_x24_mag : DBA_140mm_KB1P_HEAT_x23_mag{
		displayname="90mw UR-26M High Explosve Anti Tank Multi-Purpose";
		ammo="DBA_90mm_UR62M_HEAT";
		displaynamemagazine="90mw UR-26M HEAT-MP";
		shortnamemagazine="UR-26M HEAT-MP";
		displayNameMFDFormat="HEAT-MP";
		displayNameShort="HEAT-MP";
		count=24;
		initspeed=750;
		tracersevery=1;
	};
	class DBA_165mm_C33_BESH_x30_mag : DBA_140mm_KB1P_HEAT_x23_mag{
		displayname="165mw C-33 BESH";
		ammo="DBA_165mm_C33_BESH";
		displaynamemagazine="165mw C-33 BESH";
		shortnamemagazine="C-33 BESH";
		displayNameMFDFormat="BESH";
		displayNameShort="BESH";
		count=30;
		initspeed=259;
		tracersevery=1;
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgAmmo
{
	class ammo_Penetrator_120mm;
	class Sh_120mm_APFSDS;
	class B_35mm_AA_Tracer_Red;
	class M_Air_AA;
	class Rocket_04_AP_F;
	class ammo_Missile_rim162;
	class M_PG_AT;
	class M_Jian_AT;
	class ammo_Missile_rim116;
	class 3AS_ATT_redPlasma_AT;
	class B_127x99_Ball_Tracer_Red;
	class DBA_vic_ammo_base: B_127x99_Ball_Tracer_Red
	{
		hit=8;
		indirecthit=0;
		indirecthitrange=0;
		model="kobra\442_weapons\ammo\blue_tracer.p3d";
		lightcolor[]={0.25,0.25,0.5};
		flaresize=5;
		tracerscale=1.1;
		effectflare="FlareShell";
		tracerstarttime=0.050000001;
		tracerendtime=10;
		nvgonly=0;
		typicalspeed=920;
		airlock=1;
		irtarget=1;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionradiushit=8;
		aiAmmoUsageFlags="32 + 64 + 128 + 256 + 512";
		audiblefire=35;
		brightness=1000;
		effectfly="442_plasma_blue";
		airfriction=-0.0012000001;
		waterFriction=-0.0020000001;
		caliber=0.86956501;
		cost=1;
		muzzleeffect="";
		deflecting=0;
		inittime=0;
		timetolive=6;
		coefgravity=1;
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
	class DBA_HMG_base_ammo: DBA_vic_ammo_base
	{
		hit=30;
		visibleFire=8;
		audibleFire=120;
		typicalSpeed=880;
		tracerScale=1.2;
		airFriction=0;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		caliber=2.5999999;
		ACE_caliber=12.954;
		ACE_bulletLength=58.674;
		ACE_bulletMass=41.925598;
		ACE_muzzleVelocityVariationSD=0.34999999;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.67000002};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={900};
		ACE_barrelLengths[]={736.59998};
		model="";
		explosive=0;
	};
	class DBA_AC_base_ammo: DBA_vic_ammo_base
	{
		model="";
		flaresize=3;
		tracerscale=0.75;
		hit=150;
		indirectHit=10;
		indirectHitRange=4;
		caliber=6;
		explosive=0.64999998;
		allowAgainstInfantry=1;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
			3.1622777,
			1,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
			3.1622777,
			1,
			1500
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
			3.1622777,
			1,
			1500
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
			3.1622777,
			1,
			1500
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=8;
			duration=1.2;
			frequency=20;
			distance=74.596397;
		};
		class CamShakeHit
		{
			power=20;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=0;
			duration=0.2;
			frequency=20;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class DBA_HMG_blue_ammo: DBA_HMG_base_ammo
	{
		model="kobra\442_weapons\ammo\blue_tracer.p3d";
		effectfly="442_plasma_blue";
	};
	class DBA_HMG_green_ammo: DBA_HMG_base_ammo
	{
		model="kobra\442_weapons\ammo\green_tracer.p3d";
		effectfly="442_plasma_green";
	};
	class DBA_HMG_orange_ammo: DBA_HMG_base_ammo
	{
		model="kobra\442_weapons\ammo\orange_tracer.p3d";
		effectfly="442_plasma_orange";
	};
	class DBA_HMG_red_ammo: DBA_HMG_base_ammo
	{
		model="kobra\442_weapons\ammo\red_tracer.p3d";
		effectfly="442_plasma_red";
	};
	class DBA_HMG_pink_ammo: DBA_HMG_base_ammo
	{
		model="kobra\442_weapons\ammo\pink_tracer.p3d";
		effectfly="442_plasma_pink";
	};
	class DBA_HMG_purple_ammo: DBA_HMG_base_ammo
	{
		model="kobra\442_weapons\ammo\purple_tracer.p3d";
		effectfly="442_plasma_purple";
	};
	class DBA_HMG_black_ammo: DBA_HMG_base_ammo
	{
		model="kobra\442_weapons\ammo\black_tracer.p3d";
		effectfly="442_plasma_black";
	};
	class DBA_HMG_yellow_ammo: DBA_HMG_base_ammo
	{
		model="kobra\442_weapons\ammo\yellow_tracer.p3d";
		effectfly="442_plasma_yellow";
	};
	class DBA_AC_blue_ammo: DBA_AC_base_ammo
	{
		model="kobra\442_weapons\ammo\blue_tracer.p3d";
		effectfly="442_plasma_blue";
	};
	class DBA_AC_green_ammo: DBA_AC_base_ammo
	{
		model="kobra\442_weapons\ammo\green_tracer.p3d";
		effectfly="442_plasma_green";
	};
	class DBA_AC_orange_ammo: DBA_AC_base_ammo
	{
		model="kobra\442_weapons\ammo\orange_tracer.p3d";
		effectfly="442_plasma_orange";
	};
	class DBA_AC_red_ammo: DBA_AC_base_ammo
	{
		model="kobra\442_weapons\ammo\red_tracer.p3d";
		effectfly="442_plasma_red";
	};
	class DBA_AC_pink_ammo: DBA_AC_base_ammo
	{
		model="kobra\442_weapons\ammo\pink_tracer.p3d";
		effectfly="442_plasma_pink";
	};
	class DBA_AC_purple_ammo: DBA_AC_base_ammo
	{
		model="kobra\442_weapons\ammo\purple_tracer.p3d";
		effectfly="442_plasma_purple";
	};
	class DBA_AC_black_ammo: DBA_AC_base_ammo
	{
		model="kobra\442_weapons\ammo\black_tracer.p3d";
		effectfly="442_plasma_black";
	};
	class DBA_AC_yellow_ammo: DBA_AC_base_ammo
	{
		model="kobra\442_weapons\ammo\yellow_tracer.p3d";
		effectfly="442_plasma_yellow";
	};
	class DBA_generic_aircraft_laser_gun_red_ammo: B_35mm_AA_Tracer_Red
	{
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
		cmImmunity=1;
		trackLead=1000;
		trackOversteer=1000;
		soundSetBulletFly[]=
		{
			"-"
		};
		soundSetSonicCrack[]=
		{
			"-"
		};
		airLock=1;
		hit=200;
		indirectHit=0;
		indirectHitRange=0;
		caliber=1;
		explosive=0;
		cost=1;
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		tracerScale=1;
		brightness=100000;
		tracerColor[]=
		{
			"Red"
		};
		tracerStartTime=0;
		tracerEndTime=10;
		timetolive=3;
		nvgOnly=0;
		typicalSpeed=125;
		coefGravity=0;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=4;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		craterEffects="";
		craterShape="";
		airFriction=0;
		muzzleEffect="";
		deflecting=0;
		initTime=0;
		weaponLockSystem=0;
		gravityFactor=0;
		ACE_caliber=1;
		class Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ManSensorComponent: SensorTemplateMan
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
				};
			};
		};
	};
	class DBA_generic_aircraft_laser_gun_blue_ammo: DBA_generic_aircraft_laser_gun_red_ammo
	{
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerColor[]=
		{
			"Blue"
		};
		muzzleEffect="";
	};
	class DBA_generic_aircraft_laser_gun_green_ammo: DBA_generic_aircraft_laser_gun_red_ammo
	{
		model="\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		tracerColor[]=
		{
			"Green"
		};
		muzzleEffect="";
	};
	class DBA_generic_aircraft_laser_gun_yellow_ammo: DBA_generic_aircraft_laser_gun_red_ammo
	{
		model="\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
		tracerColor[]={0.40000001,0,0.5,1};
	};
	class DBA_generic_aircraft_laser_gun_praetorian_ammo: DBA_generic_aircraft_laser_gun_red_ammo
	{
		hit=75;
		caliber=1;
		indirectHit=35;
		indirectHitRange=3;
		explosive=0.5;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
	};
	class DBA_generic_kannon_ammo: DBA_generic_aircraft_laser_gun_red_ammo
	{
		reloadTime=0.40000001;
		hit=6000;
		indirectHit=4000;
		indirectHitRange=12;
		caliber=6;
		explosive=1;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		simulation="shotShell";
		CraterEffects="ATRocketCrater";
		effectsFire="CannonFire";
		ExplosionEffects="MortarExplosion";
		explosionSoundEffect="DefaultExplosion";
		tracerScale=2;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118899,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118899,
			1,
			2000
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118899,
			1,
			2000
		};
		SoundSetExplosion[]=
		{
			"Shell155mm_Exp_SoundSet",
			"Shell155mm_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundSetSonicCrack[]=
		{
			"bulletSonicCrack_SoundSet",
			"bulletSonicCrackTail_SoundSet"
		};
		supersonicCrackFar[]=
		{
			"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",
			0.22387201,
			1,
			150
		};
		supersonicCrackNear[]=
		{
			"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",
			0.316228,
			1,
			50
		};
	};
	class DBA_generic_aircraft_laser_cannon_yellow_ammo: DBA_generic_aircraft_laser_gun_yellow_ammo
	{
		hit=400;
		indirectHit=80;
		indirectHitRange=5;
		explosive=0.2;
	};
	class DBA_generic_aircraft_laser_cannon_blue_ammo: DBA_generic_aircraft_laser_gun_blue_ammo
	{
		hit=400;
		indirectHit=80;
		indirectHitRange=5;
		explosive=0.2;
	};
	class DBA_generic_aircraft_laser_cannon_red_ammo: DBA_generic_aircraft_laser_gun_red_ammo
	{
		hit=400;
		indirectHit=80;
		indirectHitRange=5;
		explosive=0.2;
	};
	class DBA_generic_aircraft_laser_cannon_green_ammo: DBA_generic_aircraft_laser_gun_green_ammo
	{
		hit=400;
		indirectHit=80;
		indirectHitRange=5;
		explosive=0.2;
	};
	class 3AS_GAT_redPlasma_AT;
	class MissileBase;
	class DBA_aat_mbt_ammo: 3AS_GAT_redPlasma_AT
	{
		hit=450;
		indirectHit=120;
		indirectHitRange=10;
		explosive=0.40000001;
		cost=30;
		caliber=20;
		typicalSpeed=70;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
		CraterEffects="ATMissileCrater";
		explosionEffects="IEDMineSmallExplosion";
		tracerScale=3;
		tracerStartTime=0;
		tracerEndTime=10;
		timeToLive=10;
	};
	class ammo_Penetrator_Base;
	class ammo_57mm_penetrator: ammo_Penetrator_Base
	{
		hit=315;
		caliber=25;
	};
	class ammo_50mm_SAP_penetrator : ammo_Penetrator_Base
	{
		hit=200;
		caliber=25;
	};
	class DBA_50mm_SAP : DBA_generic_aircraft_laser_gun_red_ammo
	{
		displayName="50mw SR-5 Semi-Armor Piercing High Explosive";
		hit=200;
		indirectHit=17.5;
		indirectHitRange=9;
		visibleFire=42;
		audibleFire=42;
		initSpeed=910;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.655;
		cost=22;
		explosionEffects = "ExploAmmoExplosion";
		craterEffects = "ExploAmmoCrater";
		model="kobra\442_weapons\ammo\red_tracer.p3d";
		tracerScale=1.3;
		brightness=100000;
		tracerColor[]=
		{
			"Red"
		};
		tracerStartTime=0;
		tracerEndTime=10;
		muzzleEffect="";
		caliber=18.31501832;
		typicalSpeed=875;
		deflecting = -5;
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="64 + 128 + 512";
		allowAgainstInfantry=1;
		timeToLive=20;
		coefGravity=0;
		airfriction=-0;
		waterFriction=0;
	};
	class DBA_50mm_HEPF : DBA_generic_aircraft_laser_gun_red_ammo
	{
		hit = 125;
		indirectHit = 250;
		indirectHitRange = 22.5;
		displayname = "50mw MR-90 HE Proximity Fuse";
		warheadName = "MR-90 HE-PF";
		explosive = 0.9;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "256";
		cost = 75;
		model="kobra\442_weapons\ammo\red_tracer.p3d";
		tracerScale = 1.25;
		tracerStartTime = 0;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		caliber = 1.100000;
		typicalSpeed = 910;
		proximityExplosionDistance = 18.5;
		fuseDistance = 100;
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		allowAgainstInfantry=0;
		timeToLive=20;
		coefGravity=0;
		airfriction=-0;
		waterFriction=0;
	};
	class DBA_23mm_UM23_HEPF : DBA_50mm_HEPF{
		hit = 150;
		indirectHit = 125;
		indirectHitRange = 16;
		displayname = "23mm UM-23 High Explosive Proxy Fuse";
		warheadName = "UM-23 HE-PF";
		explosive = 0.9;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 256";
		cost = 15;
		model="kobra\442_weapons\ammo\red_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 30;
		brightness=100000;
		muzzleEffect = "";
		caliber = 0.875;
		initSpeed=1050;
		typicalSpeed = 500;
		proximityExplosionDistance = 16;
		fuseDistance = 25;
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 690;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		allowAgainstInfantry=1;
		timeToLive=20;
		coefGravity=0;
		airfriction=-0;
		waterFriction=0;
	};
	class DBA_57mm_ap: 3AS_ATT_redPlasma_AT
	{
		displayName="57mw R-81 Armor Piercing";
		hit=5;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1000;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=200;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime=0;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=20;
		typicalSpeed=875;
		deflecting = -5;
		submunitionAmmo="ammo_57mm_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 256 + 512";
		allowAgainstInfantry=0;
		timeToLive=10;
	};
	class DBA_57mm_hef: 3AS_ATT_redPlasma_AT
	{
		displayName="57mw UR-81 High Explosive Fragmentation";
		hit=50;
		indirectHit=25;
		indirectHitRange=10;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1000;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.94999999;
		cost=15;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime=0;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=0.33333334;
		typicalSpeed=700;
		deflecting = -5;
		aiAmmoUsageFlags="64 + 128 + 256";
		allowAgainstInfantry=1;
		submunitionAmmo = "";
		timeToLive=10;
		ace_frag_enabled=1;
		ace_frag_metal=168;
		ace_frag_charge=168;
		ace_frag_gurney_c=2440;
		ace_frag_gurney_k="3/5";
		ace_frag_classes[]=
		{
			"ACE_frag_small_HD"
		};
		ace_frag_skip=0;
		ace_frag_force=1;
	};
	//class ammo_115mm_AP_Penetrator : ammo_Penetrator_Base{
	//	hit=500;
	//	caliber=30.02070393;
	//};
	//class ammo_115mm_HEAT_Penetrator : ammo_Penetrator_Base{
	//	hit=345;
	//	caliber=39.64912281;
	//};
	class DBA_115mm_B3M_AP : Sh_120mm_APFSDS
	{
		displayName="115mw B-3M Kinetic Energy Penetrator";
		hit=650;
		warheadName="KEP";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1610;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0;
		tracerScale=3;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=26.91511387;
		typicalSpeed=1610;
		deflecting = 5;
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=10;
	};
	class DBA_115mm_KB4_HEAT : Sh_120mm_APFSDS
	{
		displayName="115mw KB-4 High Explosive Anti-Tank";
		hit = 550;
		warheadName = "HEAT";
		indirectHit = 30;
		indirectHitRange = 5;
		visibleFire=42;
		audibleFire=42;
		initSpeed=950;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.15;
		cost=150;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime=0;
		tracerEndTime=10;
		tracerScale=3;
		airFriction=0;
		muzzleEffect="";
		caliber=28.07017544;
		typicalSpeed=950;
		deflecting = 5;
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 950;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="64 + 128 + 512";
		allowAgainstInfantry=1;
		timeToLive=10;
	};
	class DBA_115mm_UB11_HEF : Sh_120mm_APFSDS
	{
		displayName="115mw UB-11 High Explosive Fragmentation";
		hit = 100;
		indirectHit = 50;
		indirectHitRange = 9.5;
		warheadName = "HE-Frag";
		visibleFire=42;
		audibleFire=42;
		initSpeed=905;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		cost=50;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime=0;
		tracerEndTime=10;
		tracerScale=3;
		airFriction=0;
		muzzleEffect="";
		caliber=20;
		typicalSpeed=905;
		deflecting = -5;
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="64 + 128";
		allowAgainstInfantry=1;
		timeToLive=10;
	};
	class DBA_130mm_R13_AP : Sh_120mm_APFSDS{
		displayName="130mw R-13 Kinetic Energy Penetrator";
		hit=750;
		warheadName="KEP";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1800;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0;
		tracerScale=3;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=33.33333333;
		typicalSpeed=1800;
		deflecting = 5;
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=10;
	};
	class DBA_130mm_UR11_HE : Sh_120mm_APFSDS{
		displayName="130mw UR-11 High Explosive";
		hit = 150;
		indirectHit = 85;
		indirectHitRange = 6.5;
		warheadName = "High Explosive";
		visibleFire=42;
		audibleFire=42;
		initSpeed=980;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		cost=50;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime=0;
		tracerEndTime=10;
		tracerScale=3;
		airFriction=0;
		muzzleEffect="";
		caliber=4.761904762;
		typicalSpeed=980;
		deflecting = -5;
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="64 + 128";
		allowAgainstInfantry=1;
		timeToLive=10;
	};
	class DBA_140mm_R1P_AP : Sh_120mm_APFSDS{
		displayName="140mw R-1P Kinetic Energy Penetrator";
		hit=900;
		warheadName="KEP";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1500;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0;
		tracerScale=3;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=33.33333333;
		typicalSpeed=1500;
		deflecting = 5;
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1500;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=10;
	};
	class DBA_140mm_KB1P_HEAT : Sh_120mm_APFSDS{
		displayName="140mw KB-1P High Explosive Anti Tank Multi-Purpose";
		hit = 700;
		indirectHit = 35;
		indirectHitRange = 8;
		warheadName = "High Explosive Anti Tank Multi-Purpose";
		visibleFire=42;
		audibleFire=42;
		initSpeed=720;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.175;
		cost=150;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime=0;
		tracerEndTime=10;
		tracerScale=3;
		airFriction=0;
		muzzleEffect="";
		caliber=44.44444444;
		typicalSpeed=720;
		deflecting = 2.5;
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 720;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="64 + 128 + 512";
		allowAgainstInfantry=1;
		timeToLive=10;
	};
	class DBA_90mm_UR62M_HEAT : 3AS_GAT_redPlasma_AT{
		displayName="90mw UR-26M High Explosive Anti Tank Multi-Purpose";
		hit = 485;
		indirectHit = 20;
		indirectHitRange = 8;
		warheadName = "High Explosive Anti Tank Multi-Purpose";
		visibleFire=42;
		audibleFire=42;
		initSpeed=750;
		explosionSoundEffect="DefaultExplosion";
		cost=75;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		tracerStartTime=0;
		tracerEndTime=10;
		tracerScale=1;
		airFriction=0;
		caliber=28.44444444;
		typicalSpeed=700;
		deflecting = -5;
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		aiAmmoUsageFlags="64 + 128 + 512";
		allowAgainstInfantry=1;
		timeToLive=10;
	};
	class DBA_165mm_C33_BESH : 3AS_GAT_redPlasma_AT{
		displayName="165mw C-33 BESH";
		hit = 400;
		indirectHit = 800;
		indirectHitRange = 25;
		warheadName = "BESH";
		visibleFire=42;
		audibleFire=42;
		initSpeed=259;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		cost=75;
		CraterEffects ="IEDMineBigGarbageCrater";
		explosionEffects="IEDMineBigExplosion";
		tracerStartTime=0;
		coefGravity = 2.0;
		tracerEndTime=60;
		tracerScale=1.1;
		airFriction=0;
		muzzleEffect="";
		caliber=54.05405405;
		typicalSpeed=100;
		deflecting = -10;
		model = "kobra\442_weapons\ammo\red_tracer.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 259;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="64 + 128 + 512";
		allowAgainstInfantry=1;
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
		timeToLive=20;
	};
	class DBA_792_M5A : DBA_generic_aircraft_laser_gun_red_ammo {
		hit = 32;
		indirectHit = 8;
		indirectHitRange = 0.5;
		displayname = "7.92 M-5a";
		warheadName = "M-5a";
		explosive = 0;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 128";
		cost = 5;
		model="kobra\442_weapons\ammo\red_tracer.p3d";
		tracerScale = 1.25;
		tracerStartTime = 0;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		caliber = 0.5243445693;
		typicalSpeed = 750;
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		allowAgainstInfantry=1;
		timeToLive=20;
		coefGravity=0;
		airfriction=-0;
		waterFriction=0;
	};
	class DBA_762_54_REC : DBA_generic_aircraft_laser_gun_red_ammo{
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
		initSpeed=820;
		model="kobra\442_weapons\ammo\red_tracer.p3d";
		tracerScale = 1.25;
		tracerStartTime = 0;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		caliber = 0.8130081301;
		typicalSpeed = 750;
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		allowAgainstInfantry=1;
		timeToLive=20;
		coefGravity=0;
		airfriction=-0;
		waterFriction=0;
	};
	class DBA_aat_king_ammo: 3AS_ATT_redPlasma_AT
	{
		hit=650;
		indirectHit=130;
		indirectHitRange=10;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1000;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.1;
		cost=22;
		CraterEffects="ATMissileCrater";
		explosionEffects="IEDMineSmallExplosion";
		tracerStartTime=0;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=5;
		typicalSpeed=70;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
		timeToLive=10;
	};
	class DBA_lancer_mbt_ap_ammo: DBA_aat_king_ammo
	{
		displayname="Compacted Durasteel AP Shell";
		warheadName="Compacted Durasteel AP Shell";
		hit=1000;
		indirectHit=1000;
		indirectHitRange=0.5;
		visibleFire=42;
		audibleFire=42;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.2;
		cost=22;
		CraterEffects="ATMissileCrater";
		explosionEffects="IEDMineSmallExplosion";
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerStartTime=0;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=10;
		tracerScale=3;
		typicalSpeed=70;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
		timeToLive=10;
	};
	class DBA_lancer_mbt_he_ammo: DBA_lancer_mbt_ap_ammo
	{
		displayname="Depleted Coaxium HE Shell";
		warheadName="Depleted Coaxium HE Shell";
		hit=650;
		indirectHit=650;
		indirectHitRange=12;
		visibleFire=42;
		audibleFire=42;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		cost=22;
		CraterEffects="ATRocketCrater";
		ExplosionEffects="MortarExplosion";
		tracerStartTime=0;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		tracerScale=3;
		caliber=10;
		typicalSpeed=70;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
		timeToLive=10;
	};
	class DBA_lancer_mbt_td_ammo: DBA_aat_king_ammo
	{
		displayname="240kw KEP";
		warheadName="KEP";
		hit=15000;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=22;
		CraterEffects="ATMissileCrater";
		explosionEffects="IEDMineSmallExplosion";
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerStartTime=0;
		tracerEndTime=15;
		airFriction=0;
		muzzleEffect="";
		caliber=100;
		tracerScale=4;
		typicalSpeed=600;
		aiAmmoUsageFlags="128 + 256 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
			class CamShakeFire
		{
			power = 75;
			duration = 1.5;
			frequency = 20;
			distance = 50;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 2;
			distance = 25;
			frequency = 20;
		};
	};
	class DBA_a2a_ammo: M_Air_AA
	{
		displayName="Bolt A2A";
		displayNameShort="Bolt A2A";
		muzzleEffect="";
		cmimmunity=0.80000001;
		brightness=20000;
		lightColor[]={1,0,0};
		triggerTime=0.1;
		hit=1000;
		indirectHit=100;
		indirectHitRange=3;
		cameraViewAvailable=1;
		maneuvrability=40;
		maxSpeed=1800;
		thrustTime=1;
	};
	class DBA_Stomper_a2a_ammo: M_Air_AA
	{
		displayName="Stomper A2A";
		displayNameShort="DBA_Stomper_a2a_ammo A2A";
		muzzleEffect="";
		cmimmunity=0.64999998;
		brightness=20000;
		lightColor[]={1,0,0};
		triggerTime=0.1;
		hit=250;
		indirectHit=100;
		indirectHitRange=5;
		cameraViewAvailable=1;
		maneuvrability=40;
	};
	class Missile_AGM_02_F;
	class DBA_agm_ammo: Missile_AGM_02_F
	{
		displayName="Rain AGM";
		displayNameShort="Rain AGM";
		muzzleEffect="";
		canLock=2;
		weaponLockSystem="1 + 2 + 4 + 8";
		brightness=20000;
		lightColor[]={0,0,1,1};
		triggerTime=0.1;
		hit=2200;
		indirectHit=620;
		indirectHitRange=15;
		cameraViewAvailable=1;
		irLock=1;
		laserLock=1;
		missileLockMinDistance=1;
		missileLockMaxDistance=10000;
	};
	class DBA_ugm_ammo: Rocket_04_AP_F
	{
		displayName="Sleet UGM";
		displayNameShort="Sleet UGM";
		muzzleEffect="";
		brightness=20000;
		lightColor[]={0,0,1,1};
		triggerTime=0.1;
		hit=1020;
		indirectHit=620;
		indirectHitRange=15;
		cameraViewAvailable=1;
	};
	class DBA_lgm_ammo: M_Jian_AT
	{
		displayName="Icicle WGM";
		displayNameShort="Icicle WGM";
		brightness=20000;
		lightColor[]={0,0,1,1};
		triggerTime=0.1;
		thrustTime=6;
		hit=3000;
		indirectHit=100;
		indirectHitRange=5;
		cameraViewAvailable=1;
		explosionTime=60;
		timeToLive=60;
	};
	class BombCluster_02_Ammo_F;
	class ammo_Bomb_SDB;
	class Bo_GBU12_LGB;
	class DBA_cluster_bomb_ammo: BombCluster_02_Ammo_F
	{
		DisplayName="Thunderstorm CB";
		displayNameShort="Thunderstorm CB";
		muzzleEffect="";
		tracerColor[]=
		{
			"blue"
		};
		brightness=20000;
		lightColor[]={0,0,1,1};
		triggerTime=0.1;
		hit=650;
		indirectHit=325;
		indirectHitRange=6;
	};
	class DBA_sdb_bomb_ammo: ammo_Bomb_SDB
	{
		DisplayName="Wrath PGB";
		displayNameShort="Wrath PGB";
		muzzleEffect="";
		tracerColor[]=
		{
			"blue"
		};
		brightness=20000;
		lightColor[]={0,0,1,1};
		triggerTime=0.1;
		hit=2000;
		indirectHit=1000;
		indirectHitRange=3;
	};
	class DBA_lgb_bomb_ammo: Bo_GBU12_LGB
	{
		DisplayName="Ruin GBU";
		displayNameShort="Ruin GBU";
		muzzleEffect="";
		tracerColor[]=
		{
			"blue"
		};
		brightness=20000;
		lightColor[]={0,0,1,1};
		triggerTime=0.1;
		hit=650;
		indirectHit=650;
		indirectHitRange=25;
	};
	class DBA_voltic_ammo: DBA_generic_aircraft_laser_gun_yellow_ammo
	{
		hit=400;
		indirectHit=150;
		indirectHitRange=6;
		explosive=0.2;
		caliber=9;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
	};
	class DBA_ball_beam_ammo: DBA_generic_aircraft_laser_gun_green_ammo
	{
		hit=600;
		indirectHit=400;
		indirectHitRange=1;
		explosive=1;
		caliber=6;
		ACE_caliber=0;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
		airLock=1;
	};
	class Bo_Mk82;
	class DBA_carpet_I_bomb_ammo: Bo_Mk82
	{
		model="OPTRE_weapons\Aircraft\500lb_bomb_fly.p3d";
		hit=10000;
		indirectHit=10000;
		indirectHitRange=30;
		caliber=3;
		explosive=1;
		timeToLive=240;
		triggerTime=5;
		triggerOnImpact="true";
	};
};
