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
			"DBA_Command_Relay",
			"DBA_57mw_Cannon",
			"DBA_240mw_Cannon",
			"DBA_MBT_Cannon",
			"DBA_115mw_B5TC_Cannon",
			"DBA_130mw_HH30_Cannon",
			"DBA_140mw_HH30M4_Cannon",
			"DBA_105mw_PN105M_Cannon",
			"DBA_120mw_PG251_Cannon",
			"DBA_152mw_M83S_Cannon",
			"DBA_210mw_VK39_Cannon",
			"DBA_305mw_VKM8_Cannon",
			"DBA_60mw_PG60H_Cannon",
			"DBA_184mw_LP4M5_Cannon",
			"DBA_88mw_B18S_Cannon",
			"DBA_20mw_GAIBO1_AC",
			"DBA_20mw_LAATBALL_AC",
			"DBA_25mw_P252G_AC",
			"DBA_93mw_TPV13_Rockets",
			"DBA_127mw_PVX90_ATGM",
			"DBA_792mw_DC42_MG",
			"DBA_50mw_K5B2",
			"DBA_UKAS_MG",
			"DBA_VehicleLauncher",
			"DBA_90mw_HFAH1_Cannon",
			"DBA_165mw_B9M_ORD_Mortar",
			"DBA_23mw_G765",
			"DBA_40mw_P4M_Cannon",
			"DBA_762_C95A1_CG",
			"DBA_762_C110_CG",
			"DBA_762_C3M_CG",
			"DBA_762_CP46_CG",
			"DBA_127_C3HB_HMG",
			"DBA_127_C3HB_RCWS",
			"DBA_G13_Coaxial",
			"DBA_23mw_GH197_AC",
			"DBA_45mw_GH20K_AC",
			"DBA_50mw_R5P_Rockets",
			"DBA_107mw_R10P_Rockets",
			"DBA_200mw_R20P_Rockets",
			"DBA_148mw_K2M_ATGM",
			"DBA_130mw_Ballista_ATGM",
			"DBA_Onager_AGM_Weapon",
			"DBA_D39M_AAM_Weapon",
			"DBA_AD3M_AAM_Weapon",
			"DBA_DADS5M_SAM",
			"DBA_DADS1P_SAM",
			"DBA_94mw_PN32_FG",
			"DBA_88mw_B18S_Cannon",
			"DBA_25mw_P25S_Cannon",
			"DBA_37mw_HH10A_AAA",
			"DBA_20mw_HH30C_AC",
			"DBA_75mw_B32S_Cannon",
			"DBA_80mw_HH10G_Cannon",
			"DBA_13mw_H92C_MG",
			"DBA_25mw_H96C_AC",
			"DBA_30mw_G108K",
			"DBA_MG33A_AAM",
			"DBA_CIS_Chafflauncher",
			"DBA_80mw_UP8R_Rockets",
			"DBA_170mw_PK72_Cannon",
			"DBA_100mw_HH33G_Cannon",
			"worthorn"
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
			"DBA_105mm_P900_x4_mag",
			"DBA_105mm_P456_x4_mag",
			"DBA_105mm_P395_x4_mag",
			"DBA_105mm_S416_x8_mag",
			"DBA_120mm_PM53_x16_mag",
			"DBA_120mm_P225_x16_mag",
			"DBA_120mm_PM11_x18_mag",
			"DBA_120mm_Kanabo_x5_mag",
			"DBA_152mm_Tanto1_x25_mag",
			"DBA_152mm_Tanto3_x35_mag",
			"DBA_152mm_Tanto5_x2_mag",
			"DBA_20mm_PM359_x150_mag",
			"DBA_20mm_P594_x250_mag",
			"DBA_792_PKW_x5000_mag",
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
			"DBA_40mm_PM225_AP_x80_mag",
			"DBA_40mm_PL31A_HESH_x320_mag",
			"DBA_25mm_PM258_KEP_x160_mag",
			"DBA_25mm_PL266_HE_x360_mag",
			"DBA_93mm_TPV13_TBR_x24_mag",
			"DBA_127mm_PVX90_ATGM_x2_mag",
			"DBA_60mm_PLX772_x5_mag",
			"DBA_210mm_K17_x6_mag",
			"DBA_210mm_K18_x3_mag",
			"DBA_210mm_S19_x8_mag",
			"DBA_210mm_CK17_x4_mag",
			"DBA_210mm_UMK20_x4_mag",
			"DBA_210mm_ATN3S_TACN_x1_mag",
			"DBA_305mm_M19K_HE_x2_mag",
			"DBA_184mm_K1_AP_x20_mag",
			"DBA_184mm_B1_BESH_x35_mag",
			"DBA_184mm_PL1_HE_x20_mag",
			"DBA_60mm_P300_HEAT_x120_mag",
			"DBA_Laserbeam_mag",
			"DBA_792_M5A_x400_mag",
			"DBA_762_REC_x2600_mag",
			"DBA_762_D61_x2000_mag",
			"DBA_762_D61_x400_mag",
			"DBA_762_DN71_x250_mag",
			"DBA_127_X962_x1500_mag",
			"DBA_305mm_ATN3S_x1_mag",
			"DBA_23mm_PS59_x400_mag",
			"DBA_45mm_PS73_x80_mag",
			"DBA_148mm_Fletch_x4_mag",
			"DBA_130mm_Ballista_x2_mag",
			"DBA_Onager_x1_mag",
			"DBA_50mm_R5P_x24_pod",
			"DBA_50mm_R5P_x48_pod",
			"DBA_107mm_R10P_x12_pod",
			"DBA_107mm_R10P_x24_pod",
			"DBA_200mm_R20P_x5_pod",
			"DBA_AD3M_x3_pylon",
			"DBA_D39M_x4_pylon",
			"DBA_DADS5M_mag_x21",
			"DBA_DADS1P_mag_x8",
			"DBA_94mm_PM1_x4_mag",
			"DBA_94mm_PM5_x4_mag",
			"DBA_94mm_P2_x4_mag",
			"DBA_94mm_SM3_x4_mag",
			"DBA_94mm_PM4C_x4_mag",
			"DBA_88mm_CR13_x20_mag",
			"DBA_37mm_UB15_x500_mag",
			"DBA_20mm_UR18_x20_mag",
			"DBA_75mm_CR34_x40_mag",
			"DBA_80mm_UBF5_x50_mag",
			"DBA_13mm_UR2_x80_mag",
			"DBA_25mm_UB5_x50_mag",
			"DBA_30mm_STN_x800_mag",
			"DBA_MG33A_x4_Pylon",
			"DBA_80mm_UP8R_x48_Pylon",
			"DBA_Chaff_x100_mag",
			"DBA_25mm_PL25S_x300_mag",
			"DBA_170mm_K46_x10_mag",
			"DBA_170mm_KN46_x10_mag",
			"DBA_170mm_K46H_x10_mag",
			"DBA_100mm_UB4H_x100_mag",
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
			"DBA_40mm_PM225_AP",
			"DBA_40mm_PL31A_HESH",
			"DBA_105mm_P900_KEP",
			"DBA_105mm_P456_HEAT",
			"DBA_105mm_P395_HEP",
			"DBA_105mm_S416_SMK",
			"DBA_120mm_PM53_KEP",
			"DBA_120mm_P225_HEAT",
			"DBA_120mm_PM11_HE",
			"DBA_120mm_Kanabo_Penetrator",
			"DBA_120mm_Kanabo_ATGM",
			"DBA_152mm_Tanto1_KEP",
			"DBA_152mm_Tanto3_HE",
			"DBA_152mm_Tanto5_Lance",
			"DBA_152mm_Tanto5_Penetrator",
			"DBA_25mm_PM258_KEP",
			"DBA_25mm_PL266_HE",
			"DBA_93mm_TPV13_TBR",
			"DBA_TPV13_TBR_Submunition",
			"DBA_127mm_PVX90_Missile",
			"DBA_PVX90_Penetrator",
			"DBA_20mm_PM359_KEP",
			"DBA_20mm_P594_HEI",
			"DBA_105mm_Smoke_Submunition",
			"DBA_792_PKW",
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
			"DBA_762_51_D61",
			"DBA_762_54_DN71",
			"DBA_127_X962_SLAP",
			"DBA_60mm_PLX772",
			"DBA_210mm_K17_HE",
			"DBA_210mm_K18_AP",
			"DBA_210mm_S19_SMK",
			"DBA_210mm_CK17_Cluster",
			"DBA_210mm_Cluster_Submunition",
			"DBA_210mm_UMK20_Mines",
			"DBA_210mm_ATN3S_TACN",
			"DBA_210mm_TACN_Submunition",
			"DBA_305mm_M19K_HE",
			"DBA_184mm_BESH_Submunition",
			"DBA_60mm_HEAT_Submuntion",
			"DBA_184mm_K1_AP",
			"DBA_184mm_B1_BESH",
			"DBA_184mm_PL1_HE",
			"DBA_60mm_P300_HEAT",
			"ammo_115mm_AP_Penetrator",
			"ammo_115mm_HEAT_Penetrator",
			"ammo_23mm_SAP_Penetrator",
			"ammo_45mm_SAP_Penetrator",
			"ammo_Fletch_Penetrator",
			"ammo_Ballista_Penetrator",
			"ammo_Onager_Penetrator",
			"ammo_R10P_Penetrator",
			"ammo_R20P_Penetrator",
			"DBA_23mm_PS59_SAP",
			"DBA_45mm_PS73_SAP",
			"DBA_148mm_Fletch_ATGM",
			"DBA_130mm_Ballista_ATGM",
			"DBA_Onager_AGM",
			"DBA_50mm_R5P_Rocket",
			"DBA_107mm_R10P_Rocket",
			"DBA_200mm_R20P_Rocket",
			"DBA_AD3M_AAM",
			"DBA_D39M_AAM",
			"DBA_DADS5M_Missile",
			"DBA_DADS1P_Missile",
			"DBA_PM1_Penetrator",
			"DBA_94mm_PM1_AP",
			"DBA_PM5_Penetrator",
			"DBA_94mm_PM5_KEP",
			"DBA_94mm_P2_HEF",
			"DBA_94mm_SM3_SMK",
			"DBA_94mm_Canister_Submunition",
			"DBA_94mm_PM4C_CAN",
			"DBA_88mm_Canister_Submunition",
			"DBA_88mm_CR13_CAN",
			"DBA_37mm_UB15_HEI",
			"DBA_20mm_UR18_API",
			"DBA_75mm_Canister_Submunition",
			"DBA_75mm_CR34_CAN",
			"DBA_80mm_UBF5_HEF",
			"DBA_13mm_UR2_API",
			"DBA_25mm_UB5_HEI",
			"DBA_30mm_STN_HEI",
			"DBA_MG33A_Missile",
			"DBA_80mm_UP8R_Rocket",
			"DBA_PL25S_Penetrator",
			"DBA_25mm_PL25S_HEDP",
			"DBA_K46_Penetrator",
			"DBA_K46H_Penetrator",
			"DBA_170mm_K46_AC",
			"DBA_170mm_KN46_HE",
			"DBA_170mm_K46H_HEAT",
			"DBA_lancer_mbt_ap_ammo",
			"DBA_lancer_mbt_he_ammo",
			"DBA_lancer_mbt_td_ammo"
		};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class DefaultEventhandlers;
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
	class autocannon_Base_F: CannonCore{
		class player;
	};
	class autocannon_40mm_CTWS: autocannon_Base_F {
		class HESH : autocannon_Base_F{
			class player: player{
				
			};
		};
		class AP : autocannon_Base_F{
			class player: player{
				
			};
		};
	};
	class MGun;
	class SmokeLauncher;
	class LMG_RCWS: MGun
	{
		class manual: MGun
		{
		};
	};
	class LMG_coax : LMG_RCWS{
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
	class HMG_127_MBT;
	class mortar_155mm_AMOS{
		class Single1: Mode_SemiAuto{
		};
	};
	class missiles_DAGR;
	class missiles_Jian;
	class Missile_AGM_01_Plane_CAS_02_F;
	class Missile_AA_03_Plane_CAS_02_F;
	class BombCluster_02_F;
	class weapon_SDBLauncher;
	class GBU12BombLauncher;
	class MissileLauncher;
	class autocannon_30mm_RCWS{
		class player;
	};
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
	class DBA_VehicleLauncher : SmokeLauncher{
		scope = 2;
		displayName = "Integrated Mortar";
		sounds[]= {"StandardSound"};

		class StandardSound {
			soundSetShot[]= {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
		};
		magazines[]= {"DBA_60mm_PLX772_x5_mag"};
		reloadTime = 5;
		magazineReloadTime = 20;
		canLock = 0;
		autoFire = 0;
		simulation = "cmlauncher";
		showToPlayer = 1;
		minRange = 0;
		maxRange = 10000;
		textureType = "semi";
	};
	class DBA_210mw_VK39_Cannon : mortar_155mm_AMOS{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		scope = 1;
		displayName = "210mw VK-39 Howitzer";
		nameSound = "cannon";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[]= {"StandardSound"};

		class StandardSound {
			begin1[]= {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant", 3.511886, 0.525, 1500};
			soundBegin[]= {"begin1", 1};
		};
		reloadSound[]= {"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2", 31.622778, 1, 15};
		magazineReloadTime = 10;
		autoReload = 1;
		canLock = 0;
		magazines[]= {
			"DBA_210mm_K17_x6_mag",
			"DBA_210mm_K18_x3_mag",
			"DBA_210mm_S19_x8_mag",
			"DBA_210mm_CK17_x4_mag",
			"DBA_210mm_ATN3S_TACN_x1_mag",
			};
		modes[]= {"Single1", "Single2", "Single3", "Single4", "Single5"};
		class EventHandlers : DefaultEventhandlers
		{
			Fired = "[_this select 6, _this select 4] execVM '101st_Aux_Mod\Addons\DBA_General\DBA_OrbitalDesignator\functions\fn_Fired_nuke.sqf';";
		};
		
		class GunParticles {

			class Effect1 {
				effectName = "ArtilleryFired1";
				positionName = "Usti hlavne3";
				directionName = "Konec hlavne3";
			};

			class Effect2 {
				effectName = "ArtilleryFiredL";
				positionName = "Usti hlavne";
				directionName = "Usti hlavne b";
			};

			class Effect3 {
				effectName = "ArtilleryFiredR";
				positionName = "Usti hlavne";
				directionName = "Usti hlavne b";
			};
		};

		class Single1: Mode_SemiAuto {
			displayName = "Single Charge";
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant", 5.511886, 0.725, 1500};
				soundBegin[]= {"begin1", 1};
			};
			reloadSound[]= {"A3\sounds_f\dummysound", 1.000000, 1, 20};
			reloadTime = 1.75;
			artilleryDispersion = 3.850000;
			artilleryCharge = 0.100000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class Single2: Single1 {
			displayName = "Two Charges";
			artilleryCharge = 0.250000;
		};

		class Single3: Single1 {
			displayName = "Three Charges";
			artilleryCharge = 0.400000;
		};

		class Single4: Single1 {
			displayName = "Four Charges";
			artilleryCharge = 0.67500000;
		};

		class Single5: Single1 {
			displayName = "Five Charges";
			artilleryCharge = 0.8525;
		};
	};
	class DBA_Command_Relay : mortar_155mm_AMOS {
		ace_overpressure_angle = 0;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
		ace_overpressure_range = 0;  // Range in meters in which the damage is applied
		ace_overpressure_damage = 0;  // Damage multiplier
		scope = 1;
		displayName = "Orbital Relay Uplink";
		nameSound = "cannon";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = { "StandardSound" };
		class StandardSound {
			begin1[] = { "A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant", 3.511886, 0.525, 1500 };
			soundBegin[] = { "begin1", 1 };
		};
		reloadSound[] = { "A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2", 31.622778, 1, 15 };
		magazineReloadTime = 1;
		autoReload = 1;
		canLock = 0;
		magazines[] = {
			"DBA_210mm_AMMO_Resupply_x1_mag",
			"DBA_210mm_Explosive_Resupply_x1_mag",
			"DBA_210mm_Launcher_Resupply_x1_mag",
			"DBA_210mm_Medical_Resupply_x1_mag",
			"DBA_210mm_Repair_Resupply_x1_mag",
			"DBA_210mm_Secondary_Resupply_x1_mag",
		};
		modes[] = { "Single1", "Single2", "Single3", "Single4", "Single5" };
		class EventHandlers : DefaultEventhandlers
		{
			Fired = "[_this select 6, _this select 4] execVM '101st_Aux_Mod\Addons\DBA_General\DBA_OrbitalDesignator\functions\fn_Fired_Relay.sqf';";
		};

		class Single1 : Mode_SemiAuto {
			displayName = "Single Charge";
			sounds[] = { "StandardSound" };

			class StandardSound {
				begin1[] = { "A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant", 0, 0, 0 };
				soundBegin[] = { "begin1", 1 };
			};
			reloadSound[] = { "A3\sounds_f\dummysound", 1.000000, 1, 20 };
			reloadTime = 1.75;
			artilleryDispersion = 3.850000;
			artilleryCharge = 0.100000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class Single2 : Single1 {
			displayName = "Two Charges";
			artilleryCharge = 0.250000;
		};

		class Single3 : Single1 {
			displayName = "Three Charges";
			artilleryCharge = 0.400000;
		};

		class Single4 : Single1 {
			displayName = "Four Charges";
			artilleryCharge = 0.67500000;
		};

		class Single5 : Single1 {
			displayName = "Five Charges";
			artilleryCharge = 0.8525;
		};
	};
	class DBA_305mw_VKM8_Cannon : cannon_120mm{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		displayName="305mw VKM-8 Turbolaser";
		scope=2;
		magazines[]=
		{
			"DBA_305mm_M19K_HE_x2_mag",
		};
		modes[]=
		{
			"player",
			"close",
			"medium",
			"far"
		};
		magazineReloadTime=22;
		class player: player
		{
			displayName="305mw VKM-8 Turbolaser";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\bigboigun.ogg",
					50.1622777,
					0.8,
					2500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=0.75;
			autoReload=1;
			burst=2;
			autoFire=0;
			dispersion=0.00011;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.64999998;
			midRange=1250;
			midRangeProbab=0.80000001;
			maxRange=1750;
			maxRangeProbab=0.5;
		};
		class close: player{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=2;
			burstRangeMax=2;
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
		class medium:close{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=2;
			burstRangeMax=2;
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
		class far:medium{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=2;
			burstRangeMax=2;
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
	class DBA_50mw_K5B2 : LMG_RCWS{
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
					"\101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
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
					"\101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
					1.25,
					0.65,
					2500
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
	class DBA_UKAS_MG : LMG_RCWS{
		displayName="UKAS 7.62mw Repeater";
		displayNameShort="UKAS";
		author="ISU";
		class GunParticles
		{
			class effect1
			{
				positionName="z_gunl_chamber";
				directionName="z_gunl_muzzle";
				effectName="MachineGunCloud";
			};
			class effect2
			{
				positionName="z_gunr_chamber";
				directionName="z_gunr_muzzle";
				effectName="MachineGunCloud";
			};
		};
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
					"\101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
					0.5,
					0.85,
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
	class DBA_40mw_P4M_Cannon : autocannon_40mm_CTWS{
		displayName = "P-4M 40mw Autocannon";
		muzzles[]= {"HE", "AP"};

		class HE: autocannon_Base_F {
			displayName = "P-4M 40mw Autocannon";
			magazines[]= 
				{
					"DBA_40mm_PL31A_HESH_x320_mag",
				};
			magazineReloadTime = 6;
			class player: player 
			{
				dispersion = 0.000500;
				reloadTime=0.15;
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
						0.65,
						500
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			};

			class close: player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
		};

		class AP: autocannon_Base_F {
			displayName = "P-4M 40mw Autocannon";
			magazines[]= 
				{
					"DBA_40mm_PM225_AP_x80_mag",
				};
			magazineReloadTime = 10;
			class player: player 
			{
				dispersion = 0.000099;
				reloadTime=0.15;
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
						0.65,
						500
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			};

			class close: player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
		};
	};
	//GAT AA Gun
	class DBA_37mw_HH10A_AAA : LMG_RCWS{
		displayName="HH-10A 37mw Anti-Aircraft Gun";
		displayNameShort="HH-10A";
		author="ISU";
		ballisticsComputer = 1;
		class GunParticles
		{
			class effect1
			{
				positionName="z_gunl_chamber";
				directionName="z_gunl_muzzle";
				effectName="MachineGunCloud";
			};
			class effect2
			{
				positionName="z_gunr_chamber";
				directionName="z_gunr_muzzle";
				effectName="MachineGunCloud";
			};
		};
		magazines[]=
		{
			"DBA_37mm_UB15_x500_mag"
		};
		modes[]=
		{
			"manual",
			"short",
			"medium",
			"far"
		};
		magazineReloadTime=8;
		class manual
		{
			displayName="HH-10A";
			textureType = "fullAuto";
			reloadTime=0.1411764706;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
					1.5,
					0.7,
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
			dispersion=0.0085;
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
			maxRange=100;
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
			minRange=1000;
			minRangeProbab=0.64999998;
			midRange=2000;
			midRangeProbab=0.30000001;
			maxRange=3500;
			maxRangeProbab=0.050000001;
		};
	};
	class DBA_25mw_P252G_AC : CannonCore{
		displayName = "P252G 25mw Dual-Linked Autocannons";
		muzzles[]= {"HE", "AP"};
		ballisticsComputer="2 + 4 + 16";
		FCSMaxLeadSpeed=500;
		FCSZeroingDelay=0.5;
		canLock=0;
		shotFromTurret=0;
		class HE: autocannon_Base_F {
			displayName = "P252G 25mw Dual-Linked Autocannons";
			magazines[]= 
				{
					"DBA_25mm_PL266_HE_x360_mag",
				};
			magazineReloadTime = 6;
			class player: player 
			{
				dispersion = 0.0002750;
				reloadTime=0.1034482759;
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
						0.875,
						750
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			};

			class close: player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
		};

		class AP: autocannon_Base_F {
			displayName = "P252G 25mw Dual-Linked Autocannons";
			magazines[]= 
				{
					"DBA_25mm_PM258_KEP_x160_mag",
				};
			magazineReloadTime = 6;
			class player: player 
			{
				dispersion = 0.0001750;
				reloadTime=0.1034482759;
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
						0.875,
						750
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			};

			class close: player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
		};
	};
	class DBA_93mw_TPV13_Rockets : MissileLauncher{
		displayName = "93mw TPV-13 Rocketpod";
		magazines[]= {"DBA_93mm_TPV13_TBR_x24_mag"};
		modes[]= {"Far_AI", "Medium_AI", "Burst"};
		canLock = 0;
		weaponLockDelay = 0;
		weaponLockSystem = 0;
		cmImmunity = 1.0;
		lockingTargetSound[]= {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.562341, 1};
		lockedTargetSound[]= {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.562341, 2.500000};
		cursor = "EmptyCursor";
		cursorAim = "Rocket";
		showAimCursorInternal = 1;
		holdsterAnimValue = 1;
		ballisticsComputer="2 + 8 + 16";
		class Far_AI: RocketPods {
			displayName = "93mw TPV-13 Rocketpod";
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			autoFire = 0;
			dispersion = 0.000150888;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.900000;
			midRange = 3000;
			midRangeProbab = 0.900000;
			maxRange = 5000;
			maxRangeProbab = 0.300000;
		};

		class Medium_AI: Far_AI {
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 2;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.200000;
			midRange = 600;
			midRangeProbab = 0.900000;
			maxRange = 3000;
			maxRangeProbab = 0.300000;
		};

		class Burst: RocketPods {
			displayName = "93mw TPV-13 Rocketpod";
			burst = 1;
			soundContinuous = 0;
			autoFire = 0;
			reloadTime = 1.5;
			dispersion = 0.000150888;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			textureType = "semi";
		};
	};
	class DBA_127mw_PVX90_ATGM : MissileLauncher{
		displayName="PVX-90 ATGM";
		reloadTime=0.5;
		magazineReloadTime=30;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			0.825,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.4125376,
				0.5,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			0.675,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"DBA_127mm_PVX90_ATGM_x2_mag",
		};
		minRange=50;
		minRangeProbab=0.40000001;
		midRange=500;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.85000002;
		aiRateOfFire=24;
		aiRateOfFireDistance=2000;
		aiRateOfFireDispersion=-16;
		canLock=0;
		weaponLockSystem=0;
		textureType="semi";
	};
	class DBA_762_C95A1_CG : LMG_coax
	{
		displayName = "C-95A1 Chaingun";
		magazineReloadTime = 10;
		showAimCursorInternal = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 60;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
		magazines[]= 
		{
			"DBA_762_D61_x2000_mag",
			"DBA_762_D61_x400_mag",
		};
		class manual: MGun {
			displayName = "C-95A1 Chaingun";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
					0.5,
					1.35,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.1090909091;
			dispersion = 0.000750;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.500000;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.800000;
			midRange = 20;
			midRangeProbab = 0.700000;
			maxRange = 50;
			maxRangeProbab = 0.200000;
		};

		class short: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.700000;
			midRange = 150;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.200000;
		};

		class medium: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.700000;
			midRange = 600;
			midRangeProbab = 0.650000;
			maxRange = 800;
			maxRangeProbab = 0.100000;
		};

		class far: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.650000;
			midRange = 800;
			midRangeProbab = 0.400000;
			maxRange = 1200;
			maxRangeProbab = 0.100000;
		};
	};
	class DBA_127_C3HB_HMG : LMG_coax{
		displayName = "C3-HB Heavy Repeater";
		magazineReloadTime = 12;
		showAimCursorInternal = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 60;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
		magazines[]= 
		{
			"DBA_127_X962_x1500_mag"
		};
		class manual: MGun {
			displayName = "C3-HB Heavy Repeater";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
					0.8,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.04615384615;
			dispersion = 0.000750;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.500000;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.800000;
			midRange = 20;
			midRangeProbab = 0.700000;
			maxRange = 50;
			maxRangeProbab = 0.200000;
		};

		class short: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.700000;
			midRange = 150;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.200000;
		};

		class medium: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.700000;
			midRange = 600;
			midRangeProbab = 0.650000;
			maxRange = 800;
			maxRangeProbab = 0.100000;
		};

		class far: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.650000;
			midRange = 800;
			midRangeProbab = 0.400000;
			maxRange = 1200;
			maxRangeProbab = 0.100000;
		};
	};
	class DBA_792mw_DC42_MG : HMG_127_MBT
	{
		displayName = "DC-42 Light Repeater";
		magazineReloadTime = 15;
		showAimCursorInternal = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 60;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
		magazines[]= 
		{
			"DBA_792_PKW_x5000_mag"
		};
		class manual: MGun {
			displayName = "DC-42 Light Repeater";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_a_vehicle\laat\sounds\dc-15r.wss",
					0.8,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.04;
			dispersion = 0.007550;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.500000;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.800000;
			midRange = 20;
			midRangeProbab = 0.700000;
			maxRange = 50;
			maxRangeProbab = 0.200000;
		};

		class short: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.700000;
			midRange = 150;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.200000;
		};

		class medium: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.700000;
			midRange = 600;
			midRangeProbab = 0.650000;
			maxRange = 800;
			maxRangeProbab = 0.100000;
		};

		class far: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.650000;
			midRange = 800;
			midRangeProbab = 0.400000;
			maxRange = 1200;
			maxRangeProbab = 0.100000;
		};
	};
	class DBA_127_C3HB_RCWS : DBA_792mw_DC42_MG{
		displayName = "C3-HB Heavy Repeater";
		magazineReloadTime = 12;
		showAimCursorInternal = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 60;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
		magazines[]= 
		{
			"DBA_127_X962_x1500_mag"
		};
		class manual: MGun {
			displayName = "C3-HB Heavy Repeater";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_a_vehicle\laat\sounds\dc-15r.wss",
					0.8,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.04615384615;
			dispersion = 0.000750;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.500000;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.800000;
			midRange = 20;
			midRangeProbab = 0.700000;
			maxRange = 50;
			maxRangeProbab = 0.200000;
		};

		class short: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.700000;
			midRange = 150;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.200000;
		};

		class medium: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.700000;
			midRange = 600;
			midRangeProbab = 0.650000;
			maxRange = 800;
			maxRangeProbab = 0.100000;
		};

		class far: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.650000;
			midRange = 800;
			midRangeProbab = 0.400000;
			maxRange = 1200;
			maxRangeProbab = 0.100000;
		};
	};
	class DBA_762_C110_CG : DBA_792mw_DC42_MG{
		displayName = "C110 Coax";
		magazineReloadTime = 7.25;
		showAimCursorInternal = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 60;
		FCSZeroingDelay = 0.1;
		maxZeroing = 2500;
		magazines[]= 
		{
			"DBA_762_D61_x2000_mag",
			"DBA_762_D61_x400_mag",
		};
		class manual: MGun {
			displayName = "C110 Coax";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_a_vehicle\laat\sounds\dc-15r.wss",
					0.8,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.08275862069;
			dispersion = 0.002750;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};
	};
	class DBA_762_C3M_CG : DBA_762_C110_CG{
		displayName = "C3M Coax";
		magazineReloadTime = 5.25;
		showAimCursorInternal = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 60;
		FCSZeroingDelay = 0.1;
		maxZeroing = 2500;
		magazines[]= 
		{
			"DBA_762_D61_x2000_mag",
			"DBA_762_D61_x400_mag",
		};
		class manual: MGun {
			displayName = "C3M Coax";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_a_vehicle\laat\sounds\dc-15r.wss",
					0.8,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.05454545455;
			dispersion = 0.006850;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};
	};
	class DBA_762_CP46_CG : DBA_762_C3M_CG{
		displayName = "CP-46 Coax";
		magazineReloadTime = 5.25;
		showAimCursorInternal = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 60;
		FCSZeroingDelay = 0.1;
		maxZeroing = 2500;
		magazines[]= 
		{
			"DBA_762_DN71_x250_mag"
		};
		class manual: MGun {
			displayName = "CP-46 Coax";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"kobra\442_a_vehicle\laat\sounds\dc-15r.wss",
					0.8,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.075;
			dispersion = 0.002550;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};
	};
	class DBA_115mw_B5TC_Cannon : cannon_120mm{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
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
					9.1622777,
					0.9,
					2500
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
	class DBA_90mw_HFAH1_Cannon : CannonCore{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
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
		sounds[] = {"StandardSounds"};
        class StandardSounds
        {
            begin1[] = {"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",1,1,6000};
            begin2[] = {"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",1,1,6000};
            soundBegin[] = {"begin1",0.1,"begin2",0.5};
        };
		magazines[]=
		{
			"DBA_90mm_UR62M_HEAT_x24_mag"
		};
		magazineReloadTime=15;
		autoReload=1;
		autoFire=0;
		class manual
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
	class DBA_165mw_B9M_ORD_Mortar : CannonCore{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		scope=2;
		displayName="165mw B-9M ORD Demolitian Mortar";
		cursor="EmptyCursor";
		cursorAim="cannon";
		shotFromTurret=0;
		showAimCursorInternal=0;
		nameSound="cannon";
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
			"DBA_165mm_C33_BESH_x30_mag"
		};
		sounds[]=
			{
				"StandardSounds"
			};
			class StandardSounds
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
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
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
					8.1622777,
					0.875,
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
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
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
					010.1622777,
					0.8,
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
	class DBA_105mw_PN105M_Cannon : cannon_120mm
	{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		displayName="105mw PN-105M Mass Driver";
		scope=2;
		magazines[]=
		{
			"DBA_105mm_P900_x4_mag",
			"DBA_105mm_P456_x4_mag",
			"DBA_105mm_P395_x4_mag",
			"DBA_105mm_S416_x8_mag",
		};
		magazineReloadTime=5.5;
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
			reloadTime=2.75;
			autoReload=1;
			autoFire=0;
			dispersion=0.0000001;
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
	class DBA_120mw_PG251_Cannon : cannon_120mm{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		displayName="120mw PG251 Mass Driver";
		scope=2;
		magazines[]=
		{
			"DBA_120mm_PM53_x16_mag",
			"DBA_120mm_P225_x16_mag",
			"DBA_120mm_PM11_x18_mag",
			"DBA_120mm_Kanabo_x5_mag",
		};
		magazineReloadTime=6.75;
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
			reloadTime=6.75;
			autoReload=1;
			autoFire=0;
			dispersion=0.0000001;
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
	class DBA_152mw_M83S_Cannon : cannon_120mm{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		displayName="152mw M83S Svir Mass Driver";
		scope=2;
		magazines[]=
		{
			"DBA_152mm_Tanto1_x25_mag",
			"DBA_152mm_Tanto3_x35_mag",
			"DBA_152mm_Tanto5_x2_mag",
		};
		magazineReloadTime=11.5;
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
					"101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\bigboigun.ogg",
					15.555,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=11.5;
			autoReload=1;
			autoFire=0;
			dispersion=0.0000001;
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
	class DBA_60mw_PG60H_Cannon : MGun{
		class GunParticles
		{
		};
		displayName="60mw PG60H Cannon";
		scope=1;
		shotFromTurret=0;
		canLock = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 1;
		maxZeroing=3000;
		magazines[]=
		{
		"DBA_60mm_P300_HEAT_x120_mag",
		};
		magazineReloadTime=0.75;
		modes[]=
		{
			"manual",
		};
		class manual: MGun
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
						10,
						0.45,
						2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.75;
			aiBurstTerminable = 1;
			soundContinuous=0;
			autoReload=1;
			autoFire=1;
			dispersion=0.00075;
			aiRateOfFire=0.5714286;
			aiRateOfFireDistance=500;
			minRange=5;
			minRangeProbab=0.85;
			midRange=500;
			midRangeProbab=0.725;
			maxRange=800;
			maxRangeProbab=0.45;
		};
	};
	class DBA_184mw_LP4M5_Cannon: cannon_120mm{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		displayName="LP4-M5 184mw Mass Driver";
		scope=2;
		shotFromTurret=0;
		magazines[]=
		{
			"DBA_184mm_K1_AP_x20_mag",
			"DBA_184mm_B1_BESH_x35_mag",
			"DBA_184mm_PL1_HE_x20_mag",
		};
		ballisticsComputer="2 + 16";
		magazineReloadTime=4;
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
					"101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\bigboigun.ogg",
					15.555,
					0.875,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=4;
			autoReload=1;
			autoFire=0;
			dispersion=0.0000001;
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
	class DBA_20mw_GAIBO1_AC : autocannon_30mm_RCWS{
		muzzles[]= {"HE", "AP"};
		class HE: autocannon_30mm_RCWS {
			displayName = "GAI-BO1 Autocannon";
			shotFromTurret=0;
			magazines[]= 
				{
					"DBA_20mm_P594_x250_mag",
				};
			magazineReloadTime = 12;
			class player: player 
			{
				reloadTime = 0.06;
				dispersion = 0.000170;
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
			};

			class close: player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
			class GunParticles
		{
        class Effect
        {
            effectName = "AutoCannonFired";
            positionName = "Usti hlavne2";
            directionName = "Konec hlavne2";
        };
		};
		};

		class AP: autocannon_30mm_RCWS {
			displayName = "GAI-BO1 Autocannon";
			shotFromTurret=0;
			magazines[]= 
				{
					"DBA_20mm_PM359_x150_mag",
				};
			magazineReloadTime = 15;
			class player: player 
			{
				reloadTime = 0.06;
				
				dispersion = 0.000170;
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
			};

			class close: player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
			class GunParticles
			{
			class Effect
			{
            effectName = "AutoCannonFired";
            positionName = "Usti hlavne2";
            directionName = "Konec hlavne2";
			};
			};
		}; 
		showAimCursorInternal = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 60;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
	};
	class DBA_20mw_LAATBALL_AC : autocannon_30mm_RCWS {
		muzzles[] = { "HE", "AP" };
		class HE : autocannon_30mm_RCWS {
			displayName = "GAI-BO1 Autocannon";
			shotFromTurret = 0;
			magazines[] =
			{
				"DBA_20mm_P594_x250_mag",
			};
			magazineReloadTime = 12;
			class player : player
			{
				reloadTime = 0.06;
				dispersion = 0.000550;
				sounds[] =
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[] =
					{
						"kobra\442_a_vehicle\laat\sounds\dc-15r.wss",
						1,
						1,
						500
					};
					soundBegin[] =
					{
						"begin1",
						1
					};
				};
			};

			class close : player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short : close{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium : close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far : close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
			class GunParticles
			{
				class Effect
				{
					effectName = "AutoCannonFired";
					positionName = "Usti hlavne2";
					directionName = "Konec hlavne2";
				};
			};
		};

		class AP : autocannon_30mm_RCWS {
			displayName = "GAI-BO1 Autocannon";
			shotFromTurret = 0;
			magazines[] =
			{
				"DBA_20mm_PM359_x150_mag",
			};
			magazineReloadTime = 15;
			class player : player
			{
				reloadTime = 0.06;

				dispersion = 0.000170;
				sounds[] =
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[] =
					{
						"kobra\442_a_vehicle\laat\sounds\dc-15r.wss",
						1,
						1,
						500
					};
					soundBegin[] =
					{
						"begin1",
						1
					};
				};
			};

			class close : player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short : close{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium : close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far : close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
			class GunParticles
			{
				class Effect
				{
					effectName = "AutoCannonFired";
					positionName = "Usti hlavne2";
					directionName = "Konec hlavne2";
				};
			};
		};
		showAimCursorInternal = 0;
		ballisticsComputer = "1";
		FCSMaxLeadSpeed = 60;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
	};
	class DBA_G13_Coaxial : LMG_RCWS {
		displayName="G-13 Repeaters";
		magazineReloadTime=3.75;
		ballisticsComputer=2;
		shotFromTurret=0;
		scope=1;
		class manual: MGun
		{
			displayName="G-13 Repeaters";
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
						1.15,
						750
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			reloadTime=0.1;
			dispersion=0.00875;
		};
		magazines[]=
		{
			"DBA_792_M5A_x400_mag"
		};
	};
	// LAAT Weapons
	class DBA_23mw_GH197_AC : CannonCore{
		displayName = "GH-197 23mw Rotary Autocannon";
		scope=2;
		muzzles[]= {"Low", "High"};
		FCSMaxLeadSpeed=500;
		FCSZeroingDelay=0.5;
		canLock=0;
		shotFromTurret=0;
		class Low : autocannon_Base_F {
			displayName = "GH-197 23mw Rotary Autocannon";
			displayNameShort="GH-197";
			ballisticsComputer=1;
			magazines[]= 
			{
			"DBA_23mm_PS59_x400_mag",
			};
			magazineReloadTime = 0.5;
			class player: player 
			{
				dispersion = 0.009308416;
				reloadTime=0.04615384615;
				textureType = "semi";
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
						0.775,
						750
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			};

			class close: player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
		};
		class High : Low {
			class player: player 
			{
				dispersion = 0.01163552;
				reloadTime=0.02608695652;
				textureType = "fullAuto";
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
						0.775,
						750
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			};

			class close: player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
		};
	};
	class DBA_45mw_GH20K_AC : CannonCore{
		displayName = "GH20K 45mw Heavy Autocannon";
		scope=2;
		muzzles[]= {"manual"};
		FCSMaxLeadSpeed=500;
		FCSZeroingDelay=0.5;
		canLock=0;
		shotFromTurret=0;
		class manual : autocannon_Base_F {
			displayName = "GH20K 45mw Heavy Autocannon";
			ballisticsComputer=1;
			magazines[]= 
				{
					"DBA_45mm_PS73_x80_mag",
				};
			magazineReloadTime = 0.5;
			class player: player 
			{
				dispersion = 0.0001750;
				reloadTime=0.1578947368;
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
						0.575,
						750
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			};

			class close: player {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.100000;
				midRange = 400;
				midRangeProbab = 0.700000;
				maxRange = 800;
				maxRangeProbab = 0.800000;
			};

			class short: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.750000;
				midRange = 800;
				midRangeProbab = 0.800000;
				maxRange = 1200;
				maxRangeProbab = 0.800000;
			};

			class medium: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.800000;
				midRange = 1500;
				midRangeProbab = 0.800000;
				maxRange = 2000;
				maxRangeProbab = 0.700000;
			};

			class far: close {
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.740000;
				midRange = 2400;
				midRangeProbab = 0.650000;
				maxRange = 3000;
				maxRangeProbab = 0.050000;
			};
		};

	};
	class DBA_50mw_R5P_Rockets : RocketPods{
		displayName = "50mw R-5P Rocketpod";
		scope=2;
		magazines[]= {"DBA_50mm_R5P_x24_pod","DBA_50mm_R5P_x48_pod"};
		modes[]= {"Far_AI", "Medium_AI", "Single", "Burst", "FullSalvo"};
		canLock = 0;
		weaponLockDelay = 0;
		weaponLockSystem = 0;
		cmImmunity = 1.0;
		lockingTargetSound[]= {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.562341, 1};
		lockedTargetSound[]= {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.562341, 2.500000};
		cursor = "EmptyCursor";
		cursorAim = "Rocket";
		showAimCursorInternal = 1;
		holdsterAnimValue = 1;
		ballisticsComputer=8;
		class Far_AI: RocketPods {
			displayName = "50mw R-5P Rocketpod";
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			autoFire = 0;
			dispersion = 0.02036216;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.900000;
			midRange = 3000;
			midRangeProbab = 0.900000;
			maxRange = 5000;
			maxRangeProbab = 0.300000;
		};

		class Medium_AI: Far_AI {
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 2;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.200000;
			midRange = 600;
			midRangeProbab = 0.900000;
			maxRange = 3000;
			maxRangeProbab = 0.300000;
		};
		class Single: RocketPods{
			displayName = "50mw R-5P Rocketpod";
			burst = 1;
			soundContinuous = 0;
			autoFire = 0;
			reloadTime = 0.06315789474;
			dispersion = 0.01036216;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			textureType = "semi";
		};
		class Burst: RocketPods {
			displayName = "50mw R-5P Rocketpod";
			burst = 4;
			soundContinuous = 0;
			autoFire = 0;
			reloadTime = 0.06315789474;
			dispersion = 0.02036216;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			textureType = "burst";
		};
		class FullSalvo : Burst{
			displayName = "50mw R-5P Rocketpod";
			burst = 24;
			soundContinuous = 0;
			autoFire = 1;
			reloadTime = 0.06315789474;
			dispersion =0.02036216;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			textureType = "fullAuto";
		};
	};
	class DBA_107mw_R10P_Rockets : RocketPods{
		displayName = "107mw R-10P Rocketpod";
		scope=2;
		magazines[]= {"DBA_107mm_R10P_x12_pod","DBA_107mm_R10P_x24_pod"};
		modes[]= {"Far_AI", "Medium_AI", "Single", "Burst", "FullSalvo"};
		canLock = 0;
		weaponLockDelay = 0;
		weaponLockSystem = 0;
		cmImmunity = 1.0;
		lockingTargetSound[]= {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.562341, 1};
		lockedTargetSound[]= {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.562341, 2.500000};
		cursor = "EmptyCursor";
		cursorAim = "Rocket";
		showAimCursorInternal = 1;
		holdsterAnimValue = 1;
		ballisticsComputer=8;
		class Far_AI: RocketPods {
			displayName = "107mw R-10P Rocketpod";
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			autoFire = 0;
			dispersion = 0.000150888;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.900000;
			midRange = 3000;
			midRangeProbab = 0.900000;
			maxRange = 5000;
			maxRangeProbab = 0.300000;
		};

		class Medium_AI: Far_AI {
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 2;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.200000;
			midRange = 600;
			midRangeProbab = 0.900000;
			maxRange = 3000;
			maxRangeProbab = 0.300000;
		};
		class Single: RocketPods{
			displayName = "107mw R-10P Rocketpod";
			burst = 1;
			soundContinuous = 0;
			autoFire = 0;
			reloadTime = 0.06315789474;
			dispersion = 0.01036216;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			textureType = "semi";
		};
		class Burst: RocketPods {
			displayName = "107mw R-10P Rocketpod";
			burst = 4;
			soundContinuous = 0;
			autoFire = 1;
			reloadTime = 0.06315789474;
			dispersion = 0.02036216;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			textureType = "burst";
		};
		class FullSalvo : Burst{
			displayName = "107mw R-10P Rocketpod";
			burst = 12;
			soundContinuous = 0;
			autoFire = 1;
			reloadTime = 0.06315789474;
			dispersion = 0.02036216;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			textureType = "fullAuto";
		};
	};
	class DBA_200mw_R20P_Rockets : RocketPods{
		displayName = "200mw R-20P Rocketpod";
		magazines[]= {"DBA_200mm_R20P_x5_pod"};
		scope=2;
		modes[]= {"Far_AI", "Medium_AI", "Single", "Burst", "FullSalvo"};
		canLock = 0;
		weaponLockDelay = 0;
		weaponLockSystem = 0;
		cmImmunity = 1.0;
		lockingTargetSound[]= {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.562341, 1};
		lockedTargetSound[]= {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.562341, 2.500000};
		cursor = "EmptyCursor";
		cursorAim = "Rocket";
		showAimCursorInternal = 1;
		holdsterAnimValue = 1;
		ballisticsComputer=8;
		class Far_AI: RocketPods {
			displayName = "107mw R-10P Rocketpod";
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			autoFire = 0;
			dispersion = 0.000150888;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.900000;
			midRange = 3000;
			midRangeProbab = 0.900000;
			maxRange = 5000;
			maxRangeProbab = 0.300000;
		};

		class Medium_AI: Far_AI {
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 2;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.200000;
			midRange = 600;
			midRangeProbab = 0.900000;
			maxRange = 3000;
			maxRangeProbab = 0.300000;
		};
		class Single: RocketPods{
			displayName = "200mw R-20P Rocketpod";
			burst = 1;
			soundContinuous = 0;
			autoFire = 0;
			reloadTime = 0.06315789474;
			dispersion = 0.01036216;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			textureType = "semi";
		};
		class Burst: RocketPods {
			displayName = "200mw R-20P Rocketpod";
			burst = 1;
			soundContinuous = 0;
			autoFire = 0;
			reloadTime = 0.06315789474;
			dispersion = 0.02036216;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			textureType = "burst";
		};
		class FullSalvo : Burst{
			displayName = "200mw R-20P Rocketpod";
			burst = 5;
			soundContinuous = 0;
			autoFire = 1;
			reloadTime = 0.06315789474;
			dispersion = 0.02036216;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			textureType = "fullAuto";
		};
	};
	class DBA_148mw_K2M_ATGM : MissileLauncher{
		displayName="K-2M Fletch ATGM";
		scope=2;
		reloadTime=0.5;
		magazineReloadTime=5;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			0.825,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.4125376,
				0.5,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			0.675,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"DBA_148mm_Fletch_x4_mag",
		};
		minRange=50;
		minRangeProbab=0.40000001;
		midRange=500;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.85000002;
		aiRateOfFire=24;
		aiRateOfFireDistance=2000;
		aiRateOfFireDispersion=-16;
		canLock=0;
		weaponLockSystem=0;
		textureType="semi";
	};
	class DBA_130mw_Ballista_ATGM : MissileLauncher{
		displayName="AK-114A Ballista ATGM";
		scope=2;
		reloadTime=0.5;
		magazineReloadTime=5;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			0.825,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.4125376,
				0.5,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			0.675,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"DBA_130mm_Ballista_x2_mag",
		};
		minRange=50;
		minRangeProbab=0.40000001;
		midRange=500;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.85000002;
		aiRateOfFire=24;
		aiRateOfFireDistance=2000;
		aiRateOfFireDispersion=-16;
		canLock=0;
		weaponLockSystem=0;
		textureType="semi";
	};
	class DBA_Onager_AGM_Weapon : MissileLauncher{
		displayName="UK-25 Onager AGM";
		reloadTime=0.5;
		magazineReloadTime=5;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			0.825,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.4125376,
				0.5,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			0.675,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"DBA_Onager_x1_mag",
		};
		minRange=50;
		minRangeProbab=0.40000001;
		midRange=500;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.85000002;
		aiRateOfFire=24;
		aiRateOfFireDistance=2000;
		aiRateOfFireDispersion=-16;
		lockAcquire=0;
		canLock=2;
		weaponLockDelay=1.5;
		weaponLockSystem=12;
		ballisticsComputer = 0;
		textureType="semi";
	};
	class DBA_D39M_AAM_Weapon : MissileLauncher{
		displayName="D-39M AAM";
		reloadTime=0.5;
		magazineReloadTime=10;
		cursor = "EmptyCursor";
		cursoraim = "EmptyCursor";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			0.825,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.4125376,
				0.5,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			0.675,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"DBA_D39M_x4_pylon",
		};
		minRange=50;
		minRangeProbab=0.40000001;
		midRange=500;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.85000002;
		aiRateOfFire=24;
		aiRateOfFireDistance=2000;
		aiRateOfFireDispersion=-16;
		canLock=2;
		lockAcquire = 0;
		weaponLockDelay=3.25;
		weaponLockSystem=2;
		textureType="semi";
	};
	class DBA_AD3M_AAM_Weapon : MissileLauncher{
		displayName="AD-3M AAM";
		reloadTime=0.5;
		magazineReloadTime=30;
		cursor = "EmptyCursor";
		cursoraim = "EmptyCursor";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			0.825,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.4125376,
				0.5,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			0.675,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"DBA_AD3M_x3_pylon",
		};
		minRange=50;
		minRangeProbab=0.40000001;
		midRange=500;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.85000002;
		aiRateOfFire=24;
		aiRateOfFireDistance=2000;
		aiRateOfFireDispersion=-16;
		canLock=2;
		lockAcquire = 0;
		weaponLockDelay=3.75;
		weaponLockSystem=2;
		textureType="semi";
	};
	// SAM Weapons
	class DBA_DADS1P_SAM : MissileLauncher{
		displayName="DADS-1P Surface-To-Air Missile System";
		reloadTime=8;
		magazineReloadTime=8;
		cursor = "EmptyCursor";
		cursoraim = "EmptyCursor";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			0.825,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\Titan_2", 4.778279, 0.65, 2000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			0.675,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"DBA_DADS1P_mag_x8",
		};
		minRange=100;
		minRangeProbab=0.90000001;
		midRange=8000;
		midRangeProbab=0.95000002;
		maxRange=16000;
		maxRangeProbab=0.975000002;
		aiRateOfFire=0.1;
		aiRateOfFireDistance=16000;
		aiRateOfFireDispersion=-16;
		canLock=2;
		lockAcquire = 1;
		weaponLockDelay=3.5;
		weaponLockSystem=2;
		textureType="semi";
	};
	class DBA_DADS5M_SAM : MissileLauncher{
		displayName="DADS-1P Surface-To-Air Missile System";
		reloadTime=4;
		magazineReloadTime=8;
		cursor = "EmptyCursor";
		cursoraim = "EmptyCursor";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			0.825,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\Titan_2", 2.778279, 0.9, 2000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			0.675,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"DBA_DADS5M_mag_x21",
		};
		minRange=100;
		minRangeProbab=0.950000001;
		midRange=4000;
		midRangeProbab=0.90000002;
		maxRange=8000;
		maxRangeProbab=0.875000002;
		aiRateOfFire=0.1;
		aiRateOfFireDistance=9000;
		aiRateOfFireDispersion=-16;
		canLock=2;
		lockAcquire = 1;
		weaponLockDelay=1.75;
		weaponLockSystem=2;
		textureType="semi";
	};
	class DBA_100mw_HH33G_Cannon : cannon_120mm{
		displayName="HH-33G 100mw Naval Gun";
		displayNameShort="HH-33G";
		author="ISU";
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		magazines[]=
		{
			"DBA_100mm_UB4H_x100_mag",
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		magazineReloadTime=3.3333;
		class manual
		{
			displayName="HH-33";
			textureType = "fullAuto";
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=3.333333333;
			class StandardSound
			{
				begin1[]=
				{
					"101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\bigboigun.ogg",
					10.25,
					1.75,
					5500
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
			dispersion=0.00290888;
			aiRateOfFire=1;
			showToPlayer = 1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=100;
			midRangeProbab=0.9999999998;
			maxRange=150;
			maxRangeProbab=0.999999998;
		};
		class close: manual
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=500;
			minRange=0;
			minRangeProbab=0.88;
			midRange=500;
			midRangeProbab=0.90;
			maxRange=750;
			maxRangeProbab=1;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=750;
			minRange=0;
			minRangeProbab=0.9;
			midRange=1500;
			midRangeProbab=0.9;
			maxRange=2000;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=1300;
			minRange=0;
			minRangeProbab=0.9;
			midRange=3000;
			midRangeProbab=0.9;
			maxRange=3750;
			maxRangeProbab=0.9;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=2500;
			minRange=0;
			minRangeProbab=0.98;
			midRange=4750;
			midRangeProbab=0.98;
			maxRange=5250;
			maxRangeProbab=0.9;
		};
	};
	//Field Gun
	class DBA_94mw_PN32_FG : cannon_120mm{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		displayName="PN32 Field Gun";
		scope=2;
		shotFromTurret=0;
		magazines[]=
		{
			"DBA_94mm_PM1_x4_mag",
			"DBA_94mm_PM5_x4_mag",
			"DBA_94mm_P2_x4_mag",
			"DBA_94mm_SM3_x4_mag",
			"DBA_94mm_PM4C_x4_mag",
		};
		ballisticsComputer="1 + 2 + 16";
		magazineReloadTime=8;
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
					"OPTRE_Weapons\Vehicle\data\sounds\Gauss_1.wss",
					2.25,
					0.85,
					750
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=2.75;
			autoReload=1;
			autoFire=0;
			dispersion=0.0000001;
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
	//Canister
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
			aiRateOfFireDistance=10;
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
			aiRateOfFireDistance=100;
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
			aiRateOfFireDistance=200;
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
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=0.1;
		};
	};
	//New Turrets
	class DBA_20mw_HH30C_AC : LMG_RCWS{
		displayName="HH30C 20mw Autocannon";
		displayNameShort="HH30C";
		author="ISU";
		magazines[]=
		{
			"DBA_20mm_UR18_x20_mag"
		};
		modes[]=
		{
			"manual",
			"short",
			"medium",
			"far"
		};
		magazineReloadTime=3;
		class manual
		{
			displayName="HH30C";
			textureType = "fullAuto";
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.75;
			class StandardSound
			{
				begin1[]=
				{
					"\101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
					1.0,
					1.65,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			autoFire=0;
			soundContinuous=0;
			burst = 1;
			soundBurst=0;
			multiplier=1;
			dispersion=0.0015;
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
			aiRateOfFireDispersion=0.1;
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
			aiRateOfFireDispersion=0.2;
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
			aiRateOfFireDispersion=0.2;
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
			aiRateOfFireDispersion=0.4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.64999998;
			midRange=1000;
			midRangeProbab=0.30000001;
			maxRange=1500;
			maxRangeProbab=0.050000001;
		};
	};
	class DBA_75mw_B32S_Cannon : LMG_RCWS{
		displayName="75mw B-32S Canister Cannon";
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
			"DBA_75mm_CR34_x40_mag",
		};
		reloadTime=3.25;
		magazineReloadTime=3.25;
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
		class manual: Mode_SemiAuto
		{
			displayName="75mw B-32S Canister Cannon";
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
					0.558,
					6000
				};
				begin2[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					10,
					0.458,
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
			aiRateOfFireDistance=10;
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
			aiRateOfFireDistance=100;
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
			aiRateOfFireDistance=200;
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
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=0.1;
		};
	};
	class DBA_80mw_HH10G_Cannon : LMG_RCWS{
		displayName="HH-10G 80mw Heavy Cannon";
		displayNameShort="HH-10G";
		author="ISU";
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		magazines[]=
		{
			"DBA_80mm_UBF5_x50_mag",
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		magazineReloadTime=3.3333;
		class manual
		{
			displayName="HH-10G";
			textureType = "fullAuto";
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=3.333333333;
			class StandardSound
			{
				begin1[]=
				{
					"101st_Aux_Mod\Addons\sounds\bigboigun.ogg",
					10.25,
					1.75,
					5500
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
			dispersion=0.00290888;
			aiRateOfFire=1;
			showToPlayer = 1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=100;
			midRangeProbab=0.9999999998;
			maxRange=150;
			maxRangeProbab=0.999999998;
		};
		class close: manual
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=500;
			minRange=0;
			minRangeProbab=0.88;
			midRange=500;
			midRangeProbab=0.90;
			maxRange=750;
			maxRangeProbab=1;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=750;
			minRange=0;
			minRangeProbab=0.9;
			midRange=1500;
			midRangeProbab=0.9;
			maxRange=2000;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=1300;
			minRange=0;
			minRangeProbab=0.9;
			midRange=3000;
			midRangeProbab=0.9;
			maxRange=3750;
			maxRangeProbab=0.9;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=0.1;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=2500;
			minRange=0;
			minRangeProbab=0.98;
			midRange=4750;
			midRangeProbab=0.98;
			maxRange=5250;
			maxRangeProbab=0.9;
		};
	};
	class DBA_13mw_H92C_MG : LMG_RCWS{
		displayName="H-92C 13.2mw Repeater";
		displayNameShort="H-92C";
		author="ISU";
		magazines[]=
		{
			"DBA_13mm_UR2_x80_mag"
		};
		modes[]=
		{
			"manual",
			"short",
			"medium",
			"far"
		};
		magazineReloadTime=4;
		class manual
		{
			displayName="H-92C";
			textureType = "fullAuto";
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.07058823529;
			class StandardSound
			{
				begin1[]=
				{
					"\101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
					0.5,
					0.95,
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
	class DBA_25mw_H96C_AC : LMG_RCWS{
		displayName="H-96C 25mw Autocannon";
		displayNameShort="H-96C";
		author="ISU";
		magazines[]=
		{
			"DBA_25mm_UB5_x50_mag"
		};
		modes[]=
		{
			"manual",
			"short",
			"medium",
			"far"
		};
		magazineReloadTime=3.5;
		class manual
		{
			displayName="H-96C";
			textureType = "fullAuto";
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.1363636364;
			class StandardSound
			{
				begin1[]=
				{
					"\101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
					0.5,
					1.00,
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
	//Borodino Weapons
	class DBA_170mw_PK72_Cannon : cannon_120mm{
		ace_overpressure_angle = 45;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 20;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		displayName="170mw PK-72 Ymir Mass Driver";
		scope=2;
		magazines[]=
		{
			"DBA_170mm_K46_x10_mag",
			"DBA_170mm_K46H_x10_mag",
			"DBA_170mm_KN46_x10_mag",
		};
		magazineReloadTime=21.5;
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			0.65,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Reload_01",
			2.5118899,
			0.65,
			10
		};
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
					"101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\bigboigun.ogg",
					15.555,
					0.57,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=21.5;
			autoReload=1;
			autoFire=0;
			dispersion=0.0000001;
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
	//Vulture Weapons
	class DBA_30mw_G108K : CannonCore{
		displayName = "G108K 30mw Autocannon";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		showAimCursorInternal = 0;
		magazines[]={
			"DBA_30mm_STN_x800_mag"
		};
		canLock = 0;
		ballisticsComputer = "1 + 2 + 16";
		FCSMaxLeadSpeed = 800;
		FCSZeroingDelay = 0.500000;
		maxZeroing = 2500;
		aiDispersionCoefY = 0.500000;
		aiDispersionCoefX = 0.500000;
		modes[]= {"manual", "close", "short", "medium", "far"};
		
		class GunParticles {

			class Effect {
				effectName = "MachineGun1";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};

		class manual: CannonCore {
			displayName = "G108K 30mw Autocannon";
			autoFire = 1;
			textureType = "fullAuto";
			sounds[]= {"StandardSound"};
			class StandardSound {
				begin1[]= {"3AS\3AS_Static\data\Sounds\FieldCannon\Fieldcannon.ogg", 5.778279, 1.25, 2000};
				soundBegin[]= {"begin1", 1};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.09230769231;
			dispersion = 0.01599884;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 20;
			burstRangeMax = 47;
			aiRateOfFire = 0.500000;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.100000;
			midRange = 50;
			midRangeProbab = 0.850000;
			maxRange = 400;
			maxRangeProbab = 0.950000;
		};

		class short: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 22;
			burstRangeMax = 42;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 200;
			minRangeProbab = 0.850000;
			midRange = 400;
			midRangeProbab = 0.950000;
			maxRange = 1000;
			maxRangeProbab = 0.750000;
		};

		class medium: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 22;
			burstRangeMax = 38;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.850000;
			midRange = 1400;
			midRangeProbab = 0.400000;
			maxRange = 1800;
			maxRangeProbab = 0.150000;
		};

		class far: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 15;
			burstRangeMax = 25;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1400;
			minRange = 1400;
			minRangeProbab = 0.500000;
			midRange = 1800;
			midRangeProbab = 0.150000;
			maxRange = 2500;
			maxRangeProbab = 0.050000;
		};
	}; 
	class DBA_80mw_UP8R_Rockets : RocketPods{
		displayName = "UP-8R 80mw Rockets";
		magazines[]= {
			"DBA_80mm_UP8R_x48_Pylon"
		};
		canLock = 0;
		ballisticsComputer = 8;
		modes[]= {"Far_AI", "Medium_AI", "Close_AI", "Burst"};

		class Far_AI: RocketPods {
			displayName = "UP-8R 80mw Rockets";
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			autoFire = 1;
			reloadTime = 0.16;
			dispersion = 0.02472548;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 4;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.700000;
			midRange = 1500;
			midRangeProbab = 0.700000;
			maxRange = 3200;
			maxRangeProbab = 0.100000;
		};

		class Medium_AI: Far_AI {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.800000;
			midRange = 800;
			midRangeProbab = 0.850000;
			maxRange = 1200;
			maxRangeProbab = 0.950000;
		};

		class Close_AI: Far_AI {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 42;
			aiRateOfFire = 0.500000;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.400000;
			midRange = 100;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.800000;
		};

		class Burst: RocketPods {
			displayName = "UP-8R 80mw Rockets";
			textureType = "fullAuto";
			autoFire = 1;
			burst = 1;
			reloadTime = 0.16;
			dispersion = 0.02472548;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\Rockets\new_rocket_7", 1.778279, 0.47500000, 1600};
				soundBegin[]= {"begin1", 1};
			};
			soundContinuous = 0;
		};
	};
	class DBA_MG33A_AAM : MissileLauncher{
		displayName="MG-33A AAM System";
		reloadTime=2;
		magazineReloadTime=2;
		cursor = "EmptyCursor";
		cursoraim = "EmptyCursor";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			0.825,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\Titan_2", 4.778279, 0.85, 2000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			0.675,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"DBA_MG33A_x4_Pylon",
		};
		minRange=100;
		minRangeProbab=0.90000001;
		midRange=2500;
		midRangeProbab=0.95000002;
		maxRange=5500;
		maxRangeProbab=0.975000002;
		aiRateOfFire=1;
		aiRateOfFireDistance=5500;
		aiRateOfFireDispersion=1;
		canLock=2;
		lockAcquire = 1;
		weaponLockDelay=4.25;
		weaponLockSystem=2;
		textureType="semi";
	};
	class DBA_CIS_Chafflauncher : SmokeLauncher{
		scope = 2;
		displayName = "CIS Chaff";
		magazines[]= {"DBA_Chaff_x100_mag"};
		magazineReloadTime = 0.200000;
		simulation= "cmlauncher";
		modes[]= {"Auto", "AIAuto"};

		class Auto: Mode_FullAuto {
			displayName = "Chaff Dispenser";
			reloadTime = 0.03;
			autoFire= 1;
			sounds[]= {"StandardSound"};

			class StandardSound {
				begin1[]= {"A3\Sounds_F\weapons\HMG\HMG_grenade", 1.000000, 0.65, 300};
				soundBegin[]= {"begin1", 1};
			};
			showToPlayer = 1;
			multiplier = 4;
			soundBurst = 0;
			dispersion = 0.550000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};
		class AIAuto: Auto {
			burst = 10;
			burstRangeMax = 20;
			showToPlayer = 0;
			soundBurst = 0;
			minRange = 100;
			minRangeProbab = 1;
			midRange = 1000;
			midRangeProbab = 1;
			maxRange = 25000;
			maxRangeProbab = 1;
		};
	}; 
	//Fennek Gun Start
	class DBA_25mw_P25S_Cannon : HMG_127{
		displayName = "P-25S Autogun";
		magazineReloadTime = 5;
		showAimCursorInternal = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 75;
		FCSZeroingDelay = 0.15;
		maxZeroing = 5500;
		magazines[]= 
		{
			"DBA_25mm_PL25S_x300_mag",
		};
		class manual: MGun {
			displayName = "P-25S Autogun";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"101st_Aux_Mod\Addons\DBA_General\DBA_Sounds\cannon.ogg",
					0.5,
					0.15,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.2390438247;
			dispersion = 0.00509054;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.500000;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.800000;
			midRange = 20;
			midRangeProbab = 0.700000;
			maxRange = 50;
			maxRangeProbab = 0.200000;
		};

		class short: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.700000;
			midRange = 150;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.200000;
		};

		class medium: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.700000;
			midRange = 600;
			midRangeProbab = 0.650000;
			maxRange = 800;
			maxRangeProbab = 0.100000;
		};

		class far: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.650000;
			midRange = 800;
			midRangeProbab = 0.400000;
			maxRange = 1200;
			maxRangeProbab = 0.100000;
		};
	};
	//END
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
};
class CfgMagazines
{
	class VehicleMagazine;
	class 500Rnd_Cannon_ARCback;
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F;
	class 100Rnd_127x99_mag_Tracer_Red;
	class 30Rnd_120mm_HE_shells;
	class 24Rnd_PG_missiles;
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
	class DBA_105mm_P900_x4_mag : DBA_140mm_R1P_AP_x17_mag
	{
		displayname="105mw P900 Kinetic Energy Penetrator";
		ammo="DBA_105mm_P900_KEP";
		displaynamemagazine="105mw P900 KEP";
		shortnamemagazine="P900 KEP";
		displayNameMFDFormat="KEP";
		displayNameShort="P900 KEP";
		count=4;
		initspeed=1505;
		tracersevery=1;
	};
	class DBA_105mm_P456_x4_mag : DBA_105mm_P900_x4_mag
	{
		displayname="105mw P456 High Explosive Anti-Tank";
		ammo="DBA_105mm_P456_HEAT";
		displaynamemagazine="105mw P456 HEAT";
		shortnamemagazine="P456 HEAT";
		displayNameMFDFormat="HEAT";
		displayNameShort="P456 HEAT";
		count=4;
		initspeed=1173;
		tracersevery=1;
	};
	class DBA_105mm_P395_x4_mag : DBA_105mm_P900_x4_mag
	{
		displayname="105mw P395 High Explosive Plastic";
		ammo="DBA_105mm_P395_HEP";
		displaynamemagazine="105mw P395 HEP";
		shortnamemagazine="P395 HEP";
		displayNameMFDFormat="HEP";
		displayNameShort="P395 HEP";
		count=4;
		initspeed=732;
		tracersevery=1;
	};
	class DBA_105mm_S416_x8_mag : DBA_105mm_P900_x4_mag
	{
		displayname="105mw S416 Smoke Shell";
		ammo="DBA_105mm_S416_SMK";
		displaynamemagazine="105mw S416 SMK";
		shortnamemagazine="S416 SMK";
		displayNameMFDFormat="SMK";
		displayNameShort="S416 SMK";
		count=8;
		initspeed=703;
		tracersevery=1;
	};
	class DBA_120mm_PM53_x16_mag : DBA_105mm_P900_x4_mag{
		displayname="120mw PM53 Kinetic Energy Penetrator";
		ammo="DBA_120mm_PM53_KEP";
		displaynamemagazine="120mw PM53 KEP";
		shortnamemagazine="PM53 KEP";
		displayNameMFDFormat="KEP";
		displayNameShort="PM53 KEP";
		count=16;
		initspeed=1750;
		tracersevery=1;
	};
	class DBA_120mm_P225_x16_mag : DBA_120mm_PM53_x16_mag{
		displayname="120mw P225 High Explosive Anti-Tank";
		ammo="DBA_120mm_P225_HEAT";
		displaynamemagazine="120mw P225 HEAT";
		shortnamemagazine="P225 HEAT";
		displayNameMFDFormat="HEAT";
		displayNameShort="P225 HEAT";
		count=16;
		initspeed=1410;
		tracersevery=1;
	};
	class DBA_120mm_PM11_x18_mag : DBA_120mm_PM53_x16_mag{
		displayname="120mw PM11 High Explosive";
		ammo="DBA_120mm_PM11_HE";
		displaynamemagazine="120mw PM11 HE";
		shortnamemagazine="PM11 HE";
		displayNameMFDFormat="HE";
		displayNameShort="PM11 HE";
		count=18;
		initspeed=1505;
		tracersevery=1;
	};
	class DBA_120mm_Kanabo_x5_mag : DBA_120mm_PM53_x16_mag{
		displayname="120mw Kanabo ATGM";
		ammo="DBA_120mm_Kanabo_ATGM";
		displaynamemagazine="120mw Kanabo ATGM";
		shortnamemagazine="Kanabo ATGM";
		displayNameMFDFormat="ATGM";
		displayNameShort="Kanabo ATGM";
		count=5;
		initspeed=50;
		tracersevery=1;
	};
	class DBA_152mm_Tanto1_x25_mag : DBA_105mm_P900_x4_mag{
		displayname="152mw Tanto-1 Heavy Kinetic Energy Penetrator";
		ammo="DBA_152mm_Tanto1_KEP";
		displaynamemagazine="152mw Tanto-1 HKEP";
		shortnamemagazine="Tanto-1 HKEP";
		displayNameMFDFormat="HKEP";
		displayNameShort="Tanto-1 HKEP";
		count=25;
		initspeed=2105;
		tracersevery=1;
	};
	class DBA_152mm_Tanto3_x35_mag : DBA_152mm_Tanto1_x25_mag{
		displayname="152mw Tanto-3 High Explosive";
		ammo="DBA_152mm_Tanto3_HE";
		displaynamemagazine="152mw Tanto-3 HE";
		shortnamemagazine="Tanto-3 HE";
		displayNameMFDFormat="HE";
		displayNameShort="Tanto-3 HE";
		count=35;
		initspeed=805;
		tracersevery=1;
	};
	class DBA_152mm_Tanto5_x2_mag : DBA_152mm_Tanto1_x25_mag{
		displayname="152mw Tanto-5 Lance";
		ammo="DBA_152mm_Tanto5_Lance";
		displaynamemagazine="152mw Tanto-5 Lance";
		shortnamemagazine="Tanto-5 Lance";
		displayNameMFDFormat="Lance";
		displayNameShort="Tanto-5 Lance";
		count=2;
		initspeed=80;
		tracersevery=1;
	};
	class DBA_60mm_PLX772_x5_mag : VehicleMagazine{
		author = "ISU";
		scope = 2;
		ammo = "DBA_60mm_PLX772";
		count = 5;
		nameSound = "smokeshell";
		initSpeed = 50;
	};
	class DBA_25mm_PM258_KEP_x160_mag : VehicleMagazine{
		displayname="25mw PM258 Kinetic Energy Penetrator";
		ammo="DBA_25mm_PM258_KEP";
		displaynamemagazine="25mw PM258 KEP";
		shortnamemagazine="PM258 KEP";
		displayNameMFDFormat="KEP";
		displayNameShort="PM258 KEP";
		count=160;
		initspeed=1408;
		tracersevery=1;
	};
	class DBA_25mm_PL266_HE_x360_mag : DBA_25mm_PM258_KEP_x160_mag{
		displayname="25mw PL266 High Explosive Incendiary";
		ammo="DBA_25mm_PL266_HE";
		displaynamemagazine="25mw PL266 HEI";
		shortnamemagazine="PL266 HEI";
		displayNameMFDFormat="HEI";
		displayNameShort="PL266 HEI";
		count=360;
		initspeed=1150;
		tracersevery=1;
	};
	class DBA_93mm_TPV13_TBR_x24_mag : VehicleMagazine{
		displayname="TPV-13 Thermobaric Rockets";
		ammo="DBA_93mm_TPV13_TBR";
		displaynamemagazine="TPV-13 TBR";
		shortnamemagazine="TPV-13 TBR";
		displayNameMFDFormat="TBR";
		displayNameShort="TPV-13 TBR";
		count=24;
		initspeed=200;
		tracersevery=1;
	};
	class DBA_127mm_PVX90_ATGM_x2_mag : VehicleMagazine{
		displayname="127mw PVX-90 Tandem ATGM";
		ammo="DBA_127mm_PVX90_Missile";
		displaynamemagazine="127mw PVX-90 Tandem Heat";
		shortnamemagazine="PVX-90 Tandem Heat";
		displayNameMFDFormat="Tandem Heat";
		displayNameShort="PVX-90 Tandem Heat";
		count=2;
		initspeed=115;
		tracersevery=1;
	};
	class DBA_20mm_PM359_x150_mag : DBA_152mm_Tanto1_x25_mag{
		displayname="20mw PM359 Kinetic Energy Penetrator";
		ammo="DBA_20mm_PM359_KEP";
		displaynamemagazine="20mw PM359 KEP";
		shortnamemagazine="PM359 KEP";
		displayNameMFDFormat="KEP";
		displayNameShort="PM359 KEP";
		count=150;
		initspeed=1100;
		tracersevery=1;
	};
	class DBA_20mm_P594_x250_mag : DBA_20mm_PM359_x150_mag{
		displayname="20mw P594 High Explosive Incendiary";
		ammo="DBA_20mm_P594_HEI";
		displaynamemagazine="20mw P594 HEI";
		shortnamemagazine="P594 HEI";
		displayNameMFDFormat="HEI";
		displayNameShort="P594 HEI";
		count=250;
		initspeed=1100;
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
	class DBA_40mm_PL31A_HESH_x320_mag : DBA_50mm_HEPF_x400_mag
	{
		displayname="40mw PL-31A HEP";
		ammo="DBA_40mm_PL31A_HESH";
		displaynamemagazine="40mw PL-31A HEP";
		shortnamemagazine="PL-31A HEP";
		displayNameMFDFormat="HEP";
		displayNameShort="PL-31A HEP";
		count=320;
		initspeed=1200;
		tracersevery=1;
	};
	class DBA_40mm_PM225_AP_x80_mag : DBA_40mm_PL31A_HESH_x320_mag
	{
		displayname="40mw PM-225 KEP";
		ammo="DBA_40mm_PM225_AP";
		displaynamemagazine="40mw PM-225 KEP";
		shortnamemagazine="PM-225 KEP";
		displayNameMFDFormat="KEP";
		displayNameShort="PM-225 KEP";
		count=80;
		initspeed=1500;
		tracersevery=1;
	};
	class DBA_762_D61_x2000_mag : DBA_792_M5A_x400_mag
	{
		scope=2;
		displayname="7.62mw D61";
		ammo="DBA_762_51_D61";
		mass=0;
		displaynamemagazine="7.62mw D61";
		shortnamemagazine="7.62mw";
		displayNameMFDFormat="7.62mw";
		displayNameShort="7.62mw D61";
		count=2000;
		initspeed=910;
		maxLeadSpeed=100;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_762_D61_x400_mag : DBA_762_D61_x2000_mag{
		count=400;
	};
	class DBA_762_DN71_x250_mag : DBA_762_D61_x2000_mag{
		scope=2;
		displayname="7.62mw DN71";
		ammo="DBA_762_54_DN71";
		mass=0;
		displaynamemagazine="7.62mw DN71";
		shortnamemagazine="7.62mw";
		displayNameMFDFormat="7.62mw";
		displayNameShort="7.62mw DN71";
		count=250;
		initspeed=883;
		maxLeadSpeed=100;
		tracersevery=1;
		namesound="mgun";
	};
	class DBA_792_PKW_x5000_mag : DBA_792_M5A_x400_mag
	{
		scope=2;
		displayname="7.92mw PKW";
		ammo="DBA_792_PKW";
		mass=0;
		displaynamemagazine="7.92mw PKW";
		shortnamemagazine="7.92mw PKW";
		displayNameMFDFormat="7.92mw";
		displayNameShort="7.92mw PKW";
		count=5000;
		initspeed=905;
		maxLeadSpeed=100;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_127_X962_x1500_mag : DBA_792_M5A_x400_mag
	{
		scope=2;
		displayname="12.7mw X-962 SLAP";
		ammo="DBA_127_X962_SLAP";
		mass=0;
		displaynamemagazine="12.7mw X-962 SLAP";
		shortnamemagazine="SLAP";
		displayNameMFDFormat="SLAP";
		displayNameShort="12.7mw X-962 SLAP";
		count=1500;
		initspeed=1300;
		maxLeadSpeed=100;
		tracersevery=1;
		namesound="mgun";
		muzzleimpulsefactor[]={0.050000001,0.050000001};
	};
	class DBA_210mm_K17_x6_mag : DBA_140mm_KB1P_HEAT_x23_mag{
		displayname="210mw K-17 High Explosive";
		ammo="DBA_210mm_K17_HE";
		displaynamemagazine="210mw K-17 HE";
		shortnamemagazine="K-17 HE";
		displayNameMFDFormat="HE";
		displayNameShort="HE";
		count=6;
		initspeed=855;
		tracersevery=1;
	};
	class DBA_210mm_K18_x3_mag : DBA_210mm_K17_x6_mag{
		displayname="210mw K-18 Armor Piercing";
		ammo="DBA_210mm_K18_AP";
		displaynamemagazine="210mw K-18 AP";
		shortnamemagazine="K-18 AP";
		displayNameMFDFormat="AP";
		displayNameShort="AP";
		count=3;
		initspeed=701;
		tracersevery=1;
	};
	class DBA_210mm_S19_x8_mag : DBA_210mm_K17_x6_mag{
		displayname="210mw S-19 Smoke";
		ammo="DBA_210mm_S19_SMK";
		displaynamemagazine="210mw S-19 SMK";
		shortnamemagazine="S-19 SMK";
		displayNameMFDFormat="SMK";
		displayNameShort="SMK";
		count=8;
		initspeed=855;
		tracersevery=1;
	};
	class DBA_210mm_CK17_x4_mag : DBA_210mm_K17_x6_mag{
		displayname="210mw CK-17 Cluster";
		ammo="DBA_210mm_CK17_Cluster";
		displaynamemagazine="210mw CK-17 Cluster";
		shortnamemagazine="CK-17 Cluster";
		displayNameMFDFormat="Cluster";
		displayNameShort="Cluster";
		count=4;
		initspeed=701;
		tracersevery=1;
	};
	class DBA_210mm_UMK20_x4_mag : DBA_210mm_K17_x6_mag{
		displayname="210mw UMK-20 Mines";
		ammo="DBA_210mm_UMK20_Mines";
		displaynamemagazine="UMK-20 Mines";
		shortnamemagazine="UMK-20 Mines";
		displayNameMFDFormat="Mines";
		displayNameShort="Mines";
		count=4;
		initspeed=701;
		tracersevery=1;
	};
	class DBA_210mm_ATN3S_TACN_x1_mag : DBA_210mm_K17_x6_mag{
		displayname="210mw ATN-3S Tact. N.";
		ammo="DBA_210mm_ATN3S_TACN";
		displaynamemagazine="210mw ATN-3S TACN";
		shortnamemagazine=" ATN-3S TACN";
		displayNameMFDFormat="TAC. N.";
		displayNameShort="TAC. N.";
		count=1;
		initspeed=855;
		tracersevery=1;
	};
	class DBA_210mm_AMMO_Resupply_x1_mag : DBA_210mm_K17_x6_mag {
		displayname = "Orbital Ammo Resupply";
		ammo = "DBA_OrbitalRelay_AmmoResupply";
		displaynamemagazine = "Orbital Ammo Resupply";
		shortnamemagazine = "ORB AMMO";
		displayNameMFDFormat = "AMMO R.";
		displayNameShort = "AMMO R.";
		count = 3;
		initspeed = 855;
		tracersevery = 1;
	};
	class DBA_210mm_Explosive_Resupply_x1_mag : DBA_210mm_K17_x6_mag {
		displayname = "Orbital Explosive Resupply";
		ammo = "DBA_OrbitalRelay_ExplosiveResupply";
		displaynamemagazine = "Orbital Explosive Resupply";
		shortnamemagazine = "ORB EXPLO";
		displayNameMFDFormat = "EXPL R.";
		displayNameShort = "EXPL R.";
		count = 3;
		initspeed = 855;
		tracersevery = 1;
	};
	class DBA_210mm_Launcher_Resupply_x1_mag : DBA_210mm_K17_x6_mag {
		displayname = "Orbital Launcher Resupply";
		ammo = "DBA_OrbitalRelay_LauncherResupply";
		displaynamemagazine = "Orbital Launcher Resupply";
		shortnamemagazine = "ORB LAUNCH";
		displayNameMFDFormat = "LANC R.";
		displayNameShort = "LANC R.";
		count = 3;
		initspeed = 855;
		tracersevery = 1;
	};
	class DBA_210mm_Medical_Resupply_x1_mag : DBA_210mm_K17_x6_mag {
		displayname = "Orbital Medical Resupply";
		ammo = "DBA_OrbitalRelay_MedicalResupply";
		displaynamemagazine = "Orbital Medical Resupply";
		shortnamemagazine = "ORB MEDICAL";
		displayNameMFDFormat = "MED R.";
		displayNameShort = "MED R.";
		count = 3;
		initspeed = 855;
		tracersevery = 1;
	};
	class DBA_210mm_Repair_Resupply_x1_mag : DBA_210mm_K17_x6_mag {
		displayname = "Orbital Repair Resupply";
		ammo = "DBA_OrbitalRelay_RepairResupply";
		displaynamemagazine = "Orbital Repair Resupply";
		shortnamemagazine = "ORB REPAIR";
		displayNameMFDFormat = "REPAIR R.";
		displayNameShort = "REPAIR R.";
		count = 3;
		initspeed = 855;
		tracersevery = 1;
	};
	class DBA_210mm_Secondary_Resupply_x1_mag : DBA_210mm_K17_x6_mag {
		displayname = "Orbital Secondary Resupply";
		ammo = "DBA_OrbitalRelay_SecondaryResupply";
		displaynamemagazine = "Orbital Secondary Resupply";
		shortnamemagazine = "ORB SEC";
		displayNameMFDFormat = "SEC R.";
		displayNameShort = "SEC R.";
		count = 3;
		initspeed = 855;
		tracersevery = 1;
	};
	class DBA_305mm_M19K_HE_x2_mag : VehicleMagazine{
		displayname="305mw M-19K High Explosive";
		ammo="DBA_305mm_M19K_HE";
		displaynamemagazine="305mw M-19K HE";
		shortnamemagazine="M-19K HE";
		displayNameMFDFormat="HE";
		displayNameShort="HE";
		count=2;
		initspeed=808;
		tracersevery=1;
	};
	class DBA_184mm_K1_AP_x20_mag : VehicleMagazine{
		displayname="184mw K-1 Armor Piercing";
		ammo="DBA_184mm_K1_AP";
		displaynamemagazine="184mw K-1 AP";
		shortnamemagazine="K-1 AP";
		displayNameMFDFormat="AP";
		displayNameShort="AP";
		count=20;
		initspeed=830;
		tracersevery=1;
	};
	class DBA_184mm_B1_BESH_x35_mag : VehicleMagazine{
		displayname="184mw B-1 BESH";
		ammo="DBA_184mm_B1_BESH";
		displaynamemagazine="184mw B-1 BESH";
		shortnamemagazine="B-1 BESH";
		displayNameMFDFormat="BESH";
		displayNameShort="BESH";
		count=35;
		initspeed=716;
		tracersevery=1;
	};
	class DBA_184mm_PL1_HE_x20_mag : VehicleMagazine{
		displayname="184mw PL-1 High Explosive High Drag";
		ammo="DBA_184mm_PL1_HE";
		displaynamemagazine="184mw PL-1 HE-HD";
		shortnamemagazine="PL-1 HE-HD";
		displayNameMFDFormat="HE-HD";
		displayNameShort="HE-HD";
		count=20;
		initspeed=730;
		tracersevery=1;
	};
	class DBA_60mm_P300_HEAT_x120_mag : VehicleMagazine{
		displayname="P300 60mw High Explosive Anti-Tank";
		ammo="DBA_60mm_P300_HEAT";
		displaynamemagazine="60mw P300 HEAT";
		shortnamemagazine="P300 HEAT";
		displayNameMFDFormat="HEAT";
		displayNameShort="HEAT";
		count=120;
		initspeed=880;
		tracersevery=1;
	};
	class DBA_23mm_PS59_x400_mag : VehicleMagazine{
		displayname="PS-59 23mw SAPHEI";
		ammo="DBA_23mm_PS59_SAP";
		displaynamemagazine="23mw PS-59 SAPHEI";
		shortnamemagazine="PS-59 SAPHEI";
		displayNameMFDFormat="SAPHEI";
		displayNameShort="SAPHEI";
		count=500;
		initspeed=715;
		tracersevery=1;
	};
	class DBA_45mm_PS73_x80_mag : VehicleMagazine{
		displayname="PS-73 45mw SAPHEI";
		ammo="DBA_45mm_PS73_SAP";
		displaynamemagazine="PS-73 45mw SAPHEI";
		shortnamemagazine="PS-73 SAPHEI";
		displayNameMFDFormat="SAPHEI";
		displayNameShort="SAPHEI";
		count=160;
		initspeed=1415;
		tracersevery=1;
	};
	class DBA_148mm_Fletch_x4_mag : VehicleMagazine{
		ammo="DBA_148mm_Fletch_ATGM";
		count=4;
		displayName="K-2M Fletch ATGM";
		displayNameShort="Fletch ATGM";
		tracersEvery=1;
		initspeed=50;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail",
		};
		pylonWeapon="DBA_148mw_K2M_ATGM";
	};
	class DBA_130mm_Ballista_x2_mag : VehicleMagazine{
		ammo="DBA_130mm_Ballista_ATGM";
		count=2;
		displayName="AK-114A Ballista ATGM";
		displayNameShort="Ballista ATGM";
		tracersEvery=1;
		initspeed=50;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail",
		};
		pylonWeapon="DBA_130mw_Ballista_ATGM";
	};
	class DBA_Onager_x1_mag : VehicleMagazine{
		ammo="DBA_Onager_AGM";
		count=1;
		displayName="UK-25M Onager AGM";
		displayNameShort="UK-25M Onager";
		tracersEvery=1;
		initspeed=50;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail",
		};
		pylonWeapon="DBA_Onager_AGM_Weapon";
	};
	class DBA_50mm_R5P_x24_pod : VehicleMagazine{
		ammo="DBA_50mm_R5P_Rocket";
		count=24;
		displayName="R5-P24 Rockets";
		displayNameShort="R-5P Rockets";
		tracersEvery=1;
		initspeed=50;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail",
			"DBA_LE_Rail",
		};
		pylonWeapon="DBA_50mw_R5P_Rockets";
	};
	class DBA_50mm_R5P_x48_pod : DBA_50mm_R5P_x24_pod{
		ammo="DBA_50mm_R5P_Rocket";
		count=48;
		displayName="R5-P48 Rockets";
		displayNameShort="R-5P Rockets";
		tracersEvery=1;
		initspeed=50;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail",
		};
		pylonWeapon="DBA_50mw_R5P_Rockets";
	};
	class DBA_107mm_R10P_x12_pod : VehicleMagazine{
		ammo="DBA_107mm_R10P_Rocket";
		count=12;
		displayName="R10-P12 Rockets";
		displayNameShort="R-10P Rockets";
		tracersEvery=1;
		initspeed=50;
		model="a3\weapons_f\empty.p3d";
		hardpoints[]=
		{
			"DBA_Universal_rail",
			"DBA_LE_Rail",
		};
		pylonWeapon="DBA_107mw_R10P_Rockets";
	};
	class DBA_107mm_R10P_x24_pod : DBA_107mm_R10P_x12_pod{
		count=24;
		displayName="R10-P24 Rockets";
		displayNameShort="R-10P Rockets";
		tracersEvery=1;
		initspeed=50;
		hardpoints[]=
		{
			"DBA_Universal_rail",
		};
		pylonWeapon="DBA_107mw_R10P_Rockets";
	};
	class DBA_200mm_R20P_x5_pod : VehicleMagazine{
		ammo="DBA_200mm_R20P_Rocket";
		count=5;
		displayName="R-20P Rockets";
		displayNameShort="R-20P Rockets";
		tracersEvery=1;
		model="a3\weapons_f\empty.p3d";
		initspeed=50;
		hardpoints[]=
		{
			"DBA_Universal_rail",
			"DBA_LE_Rail",
		};
		pylonWeapon="DBA_200mw_R20P_Rockets";
	};
	class DBA_AD3M_x3_pylon : VehicleMagazine{
		ammo="DBA_AD3M_AAM";
		count=3;
		displayName="AD-3M AAM";
		displayNameShort="AD-3M AAM";
		tracersEvery=1;
		model="a3\weapons_f\empty.p3d";
		initspeed=50;
		hardpoints[]=
		{
			"DBA_Universal_rail",
			"DBA_LE_Rail",
		};
		pylonWeapon="DBA_AD3M_AAM_Weapon";
	};
	class DBA_D39M_x4_pylon : VehicleMagazine{
		ammo="DBA_D39M_AAM";
		count=4;
		displayName="D-39M AAM";
		displayNameShort="D-39M AAM";
		tracersEvery=1;
		model="a3\weapons_f\empty.p3d";
		initspeed=50;
		hardpoints[]=
		{
			"DBA_Universal_rail",
		};
		pylonWeapon="DBA_D39M_AAM_Weapon";
	};
	class DBA_DADS5M_mag_x21 : VehicleMagazine{
		displayname="DAM-5 Missile";
		ammo="DBA_DADS5M_Missile";
		displaynamemagazine="DAM-5 SAM";
		shortnamemagazine="DAM-5 SAM";
		displayNameMFDFormat="SAM";
		displayNameShort="SAM";
		count=21;
		initspeed=40;
		tracersevery=1;
	};
	class DBA_DADS1P_mag_x8 : VehicleMagazine{
		displayname="DAM-1U Missile";
		ammo="DBA_DADS1P_Missile";
		displaynamemagazine="DAM-1U SAM";
		shortnamemagazine="DAM-1U SAM";
		displayNameMFDFormat="SAM";
		displayNameShort="SAM";
		count=8;
		initspeed=30;
		tracersevery=1;
	};
	class DBA_94mm_PM1_x4_mag : VehicleMagazine{
		displayname="PM1 94mw Armor Piercing";
		ammo="DBA_94mm_PM1_AP";
		displaynamemagazine="94mw PM1 AP";
		shortnamemagazine="PM1 AP";
		displayNameMFDFormat="AP";
		displayNameShort="AP";
		count=4;
		initspeed=929;
		tracersevery=1;
	};
	class DBA_94mm_P2_x4_mag : VehicleMagazine{
		displayname="P2 94mw High Explosive Fragmentation";
		ammo="DBA_94mm_P2_HEF";
		displaynamemagazine="94mw P2 HE-F";
		shortnamemagazine="P2 HE-F";
		displayNameMFDFormat="HE-F";
		displayNameShort="HE-F";
		count=4;
		initspeed=1043;
		tracersevery=1;
	};
	class DBA_94mm_SM3_x4_mag : VehicleMagazine{
		displayname="SM3 94mw Smoke";
		ammo="DBA_94mm_SM3_SMK";
		displaynamemagazine="94mw SM3 SMK";
		shortnamemagazine="SM3 SMK";
		displayNameMFDFormat="SMK";
		displayNameShort="SMK";
		count=4;
		initspeed=1143;
		tracersevery=1;
	};
	class DBA_94mm_PM4C_x4_mag : VehicleMagazine{
		displayname="PM4-C 94mw Beehive";
		ammo="DBA_94mm_PM4C_CAN";
		displaynamemagazine="94mw P4M-C Beehive";
		shortnamemagazine="P4M-C Beehive";
		displayNameMFDFormat="Beehive";
		displayNameShort="Beehive";
		count=4;
		initspeed=343;
		tracersevery=1;
	};
	class DBA_94mm_PM5_x4_mag : VehicleMagazine{
		displayname="PM5 94mw Kinetic Sabot Shot";
		ammo="DBA_94mm_PM5_KEP";
		displaynamemagazine="94mw PM5 KEP";
		shortnamemagazine="PM5 KEP";
		displayNameMFDFormat="KEP";
		displayNameShort="KEP";
		count=4;
		initspeed=1570;
		tracersevery=1;
	};
	class DBA_100mm_UB4H_x100_mag : VehicleMagazine{
		displayname="UB-4A 100mw High Explosive Fragmentation";
		ammo="DBA_100mm_UB4H_HEF";
		displaynamemagazine="100mw UB-4H HE-F";
		shortnamemagazine="UB-4H HE-F";
		displayNameMFDFormat="HE-F";
		displayNameShort="HE-F";
		count=100;
		initspeed=930;
		tracersevery=1;
	};
	class DBA_Laserbeam_mag : VehicleMagazine{
		displayname="Orbital Laser Designator";
		ammo="DBA_Laserbeam";
		displaynamemagazine="Orbital Laser Designator";
		shortnamemagazine="Orbital Laser Designator";
		displayNameMFDFormat="OLD";
		displayNameShort="OLD";
		count=99999;
		initspeed=25000;
		tracersevery=0;
	};
	//Canister
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
	//GAT AA Ammo
	class DBA_37mm_UB15_x500_mag  : VehicleMagazine{
		displayname="UB-15 37mw HE-I";
		ammo="DBA_37mm_UB15_HEI";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displaynamemagazine="UB-15 37mw HE-I";
		shortnamemagazine="UB-15 HE-I";
		displayNameMFDFormat="UB-15";
		displayNameShort="UB-15";
		count=500;
		initspeed=880;
		tracersevery=1;
	};
	//Borodino Ammo
	class DBA_170mm_K46_x10_mag : VehicleMagazine{
		displayname="K46 170mw Anti-Concrete";
		ammo="DBA_170mm_K46_AC";
		displaynamemagazine="K46 170mw Anti-Concrete";
		shortnamemagazine="K46 Anti-Concrete";
		displayNameMFDFormat="Anti-Concrete";
		displayNameShort="Anti-Concrete";
		count=10;
		initspeed=920;
		tracersevery=1;
	};
	class DBA_170mm_KN46_x10_mag : VehicleMagazine{
		displayname="KN46 170mw High Explosive";
		ammo="DBA_170mm_KN46_HE";
		displaynamemagazine="KN46 170mw High Explosive";
		shortnamemagazine="KN46 High Explosive";
		displayNameMFDFormat="High Explosive";
		displayNameShort="High Explosive";
		count=10;
		initspeed=920;
		tracersevery=1;
	};
	class DBA_170mm_K46H_x10_mag : VehicleMagazine{
		displayname="K46H 170mw High Explosive Anti-Tank";
		ammo="DBA_170mm_K46H_HEAT";
		displaynamemagazine="K46H 170mw HEAT";
		shortnamemagazine="K46H HEAT";
		displayNameMFDFormat="HEAT";
		displayNameShort="HEAT";
		count=10;
		initspeed=920;
		tracersevery=1;
	};
	//New Turrets
	class DBA_20mm_UR18_x20_mag : VehicleMagazine{
		displayname="UR-18 20mw AP-I";
		ammo="DBA_20mm_UR18_API";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displaynamemagazine="UR-18 20mw AP-I";
		shortnamemagazine="UR-18 AP-I";
		displayNameMFDFormat="UR-18";
		displayNameShort="UR-18";
		count=20;
		initspeed=800;
		tracersevery=1;
	};
	class DBA_75mm_CR34_x40_mag : VehicleMagazine{
		displayname="CR-34 75mw Canister";
		ammo="DBA_75mm_CR34_CAN";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displaynamemagazine="CR-34 75mw Canister";
		shortnamemagazine="CR-34 Canister";
		displayNameMFDFormat="CR-34";
		displayNameShort="CR-34";
		count=40;
		initspeed=400;
		tracersevery=1;
	};
	class DBA_80mm_UBF5_x50_mag : VehicleMagazine{
		displayname="UBF-5 80mw HE-F";
		ammo="DBA_80mm_UBF5_HEF";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displaynamemagazine="UBF-5 80mw HE-F";
		shortnamemagazine="UBF-5 HE-F";
		displayNameMFDFormat="UBF-5";
		displayNameShort="UBF-5";
		count=50;
		initspeed=680;
		tracersevery=1;
	};
	class DBA_13mm_UR2_x80_mag : VehicleMagazine{
		displayname="UR-2 13mw API";
		ammo="DBA_13mm_UR2_API";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displaynamemagazine="UR-2 13mw API";
		shortnamemagazine="UR-2 API";
		displayNameMFDFormat="UR-2";
		displayNameShort="UR-2";
		count=80;
		initspeed=805;
		tracersevery=1;
	};
	class DBA_25mm_UB5_x50_mag : VehicleMagazine{
		displayname="UB-5 25mw HE-I";
		ammo="DBA_25mm_UB5_HEI";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displaynamemagazine="UB-5 25mw HE-I";
		shortnamemagazine="UB-5 HE-I";
		displayNameMFDFormat="UB-5";
		displayNameShort="UB-5";
		count=50;
		initspeed=900;
		tracersevery=1;
	};
	//Vulture Armaments
	class DBA_30mm_STN_x800_mag : VehicleMagazine {
		displayname="STN 30mw HE-I";
		ammo="DBA_30mm_STN_HEI";
		muzzleimpulsefactor[] = { 0.050000001,0.050000001 };
		displaynamemagazine="STN 30mw HE-I";
		shortnamemagazine="STN HE-I";
		displayNameMFDFormat="STN";
		displayNameShort="STN";
		count=800;
		initspeed=540;
		tracersevery=1;
	};
	class DBA_80mm_UP8R_x48_Pylon : VehicleMagazine{
		count=48;
		displayName="UP-8R Rockets";
		ammo="DBA_80mm_UP8R_Rocket";
		displayNameShort="UP-8R Rockets";
		tracersEvery=1;
		initspeed=50;
		hardpoints[]=
		{
			"DBA_CIS_Ordinance_Rail",
		};
		pylonWeapon="DBA_80mw_UP8R_Rockets";
	};
	class DBA_MG33A_x4_Pylon : VehicleMagazine{
		ammo="DBA_MG33A_Missile";
		count=4;
		displayName="MG-33A AAM";
		displayNameShort="MG-33A AAM";
		tracersEvery=1;
		model="a3\weapons_f\empty.p3d";
		initspeed=50;
		hardpoints[]=
		{
			"DBA_CIS_Fighter_Rail",
			"DBA_CIS_Ordinance_Rail",
		};
		pylonWeapon="DBA_MG33A_AAM";
	};
	class DBA_Chaff_x100_mag : VehicleMagazine{
		author = "DBA";
		count = 200;
		ammo = "CMflareAmmo";
		initSpeed = 55;
	};
	//Fennek Gun Start
	class DBA_25mm_PL25S_x300_mag : VehicleMagazine{
		displayname="PL-25S 25mw HEDP";
		ammo="DBA_25mm_PL25S_HEDP";
		displaynamemagazine="PL-25S 25mw HEDP";
		shortnamemagazine="PL-25S HEDP";
		displayNameMFDFormat="HEDP";
		displayNameShort="HEDP";
		count=300;
		initspeed=405;
		tracersevery=1;
	};
	//END
	class DBA_Laserbeam_mag : VehicleMagazine{
		displayname="Orbital Laser Designator";
		ammo="DBA_Laserbeam";
		displaynamemagazine="Orbital Laser Designator";
		shortnamemagazine="Orbital Laser Designator";
		displayNameMFDFormat="OLD";
		displayNameShort="OLD";
		count=99999;
		initspeed=25000;
		tracersevery=0;
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
	class DefaultEventhandlers;
	class SubmunitionBase;
	class SmokeShellArty;
	class SmokeLauncherAmmo;
	class ammo_Penetrator_Base;
	class ammo_Penetrator_120mm;
	class Sh_120mm_APFSDS;
	class Sh_155mm_AMOS;
	class G_40mm_HE;
	class B_35mm_AA_Tracer_Red;
	class M_Air_AA;
	class Rocket_04_AP_F;
	class ammo_Missile_rim162;
	class M_PG_AT;
	class M_Jian_AT;
	class ammo_Missile_rim116;
	class B_40mm_GPR;
	class SmokeShell;
	class RocketBase;
	class MissileBase;
	class 3AS_ATT_redPlasma_AT;
	class B_127x99_Ball_Tracer_Red;
	class ammo_Missile_CannonLaunchedBase;
	class B_762x54_Ball;
	class M_120mm_cannon_ATGM;
	class M_125mm_cannon_ATGM;
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
	class BulletCore;
	class DBA_FakeBullet : BulletCore{
		hit=0;
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RD501_Zeus\functions\fn_beam.sqf';";
		};
	};
	class DBA_Laserbeam : BulletCore{
		hit = 0;
		indirectHit = 00;
		indirectHitRange = 0;
		model = "\A3\weapons_f\empty";
		simulationStep = 0.100000;
		cost = 5000;
		timeToLive = 0;
		soundHit[]= {"", 19.952623, 1, 1500};
		soundFly[]= {"", 0.000100, 4};
		initSpeed=25000;
		maxSpeed = 50000;
		airLock = 1;
		manualControl = 1;
		maxControlRange = 0;
		initTime = 0;
		maneuvrability = 0;
		simulation = "shotSubmunitions";
		submunitionAmmo = "DBA_FakeBullet";
		submunitionConeType[]= {"poissondisc", 1};
		submunitionConeAngle = 1;
		simulationStep = 0.010000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 1;
	};
	class ammo_Penetrator_Base;
	class DBA_25mm_PM258_KEP : B_40mm_GPR{
		hit = 110;
		indirectHit = 5;
		indirectHitRange = 0.25;
		explosive= 0.0
		warheadName = "KEP";
		caliber = 16.5719697;
		deflecting = 1;
		cost = 40;
		airFriction = 0.0;
		timeToLive = 40;
		initSpeed=1408;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 0.875, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 0.875, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 0.875, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 0.875, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "128 + 256 + 512";
		cost = 75;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 910;	
		allowAgainstInfantry=0;
		coefGravity=0.1;
		waterFriction=0;
		class CamShakeExplode {
			power = 10;
			duration = 1.75;
			frequency = 20;
			distance = 25;
		};

		class CamShakeHit {
			power = 60;
			duration = 2;
			frequency = 20;
			distance = 5;
		};

		class CamShakeFire {
			power = 10;
			duration = 0.35;
			frequency = 15;
			distance = 60;
		};

		class CamShakePlayerFire {
			power = 0.000000001;
			duration = 0.050000;
			frequency = 10;
			distance = 0.5;
		};
	};
	class DBA_25mm_PL266_HE : DBA_25mm_PM258_KEP{
		hit = 50;
		indirectHit = 45;
		indirectHitRange = 7.5;
		explosive= 0.8
		warheadName = "HEP";
		caliber = 5.600000;
		deflecting = 10;
		cost = 40;
		airFriction = 0.00;
		timeToLive = 40;
		initSpeed=1150;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 0.875, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 0.875, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 0.875, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 0.875, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "128 + 256 + 512";
		cost = 75;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 910;	
		allowAgainstInfantry=0;
		coefGravity=0.1;
		waterFriction=0;
		class CamShakeExplode {
			power = 10;
			duration = 1.75;
			frequency = 20;
			distance = 25;
		};

		class CamShakeHit {
			power = 60;
			duration = 2;
			frequency = 20;
			distance = 5;
		};

		class CamShakeFire {
			power = 10;
			duration = 0.35;
			frequency = 15;
			distance = 60;
		};

		class CamShakePlayerFire {
			power = 0.000000001;
			duration = 0.050000;
			frequency = 10;
			distance = 0.5;
		};
	};
	class DBA_TPV13_TBR_Submunition : SubmunitionBase{
		hit = 100;
		indirectHit = 50;
		indirectHitRange = 12.5;
		explosive= 1.0
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
	};
	class DBA_93mm_TPV13_TBR : RocketBase{
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9.p3d";
		warheadName="Thermobaric";
		submunitionAmmo="DBA_TPV13_TBR_Submunition";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionConeType[]= {"poissondisc", 8};
		submunitionInitSpeed=100;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHit=125;
		indirectHitRange=13;
		explosive=0.80000001;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airfriction=0.44999999;
		sideAirFriction=0.0099999998;
		maxSpeed=1000;
		typicalspeed=500;
		initTime=0.029999999;
		thrustTime=2;
		thrust=500;
		fuseDistance=15;
		effectsMissile="missile2";
		whistleDist=4;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class ammo_57mm_penetrator: ammo_Penetrator_Base{
		hit=315;
		caliber=25;
	};
	class ammo_50mm_SAP_penetrator : ammo_Penetrator_Base
	{
		hit=200;
		caliber=25;
	};
	class DBA_50mm_SAP : B_40mm_GPR
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
	class DBA_50mm_HEPF : B_40mm_GPR
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
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
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
	class DBA_40mm_PL31A_HESH : B_40mm_GPR{
		hit = 125;
		indirectHit = 50;
		indirectHitRange = 9;
		explosive= 0.8
		warheadName = "HEP";
		caliber = 4.600000;
		deflecting = 10;
		cost = 40;
		airFriction = -0.000600;
		timeToLive = 40;
		initSpeed=1200;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		cost = 75;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 1.05;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 910;	
		allowAgainstInfantry=1;
		coefGravity=0;
		waterFriction=0;
		class CamShakeExplode {
			power = 10;
			duration = 1.75;
			frequency = 40;
			distance = 75;
		};

		class CamShakeHit {
			power = 60;
			duration = 2;
			frequency = 20;
			distance = 5;
		};

		class CamShakeFire {
			power = 8;
			duration = 1.35;
			frequency = 15;
			distance = 60;
		};

		class CamShakePlayerFire {
			power = 0.000000001;
			duration = 0.050000;
			frequency = 10;
			distance = 0.5;
		};
	};
	class DBA_40mm_PM225_AP : DBA_40mm_PL31A_HESH
	{
		hit = 180;
		indirectHit = 5;
		indirectHitRange = 0.25;
		explosive= 0.0
		warheadName = "KEP";
		caliber = 20;
		deflecting = 1;
		cost = 40;
		airFriction = -0.000600;
		timeToLive = 40;
		initSpeed=1500;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "128 + 256 + 512";
		cost = 75;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 1.5;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 910;	
		allowAgainstInfantry=0;
		coefGravity=0;
		waterFriction=0;
		class CamShakeExplode {
			power = 10;
			duration = 1.75;
			frequency = 20;
			distance = 25;
		};

		class CamShakeHit {
			power = 60;
			duration = 2;
			frequency = 20;
			distance = 5;
		};

		class CamShakeFire {
			power = 8;
			duration = 1.35;
			frequency = 15;
			distance = 60;
		};

		class CamShakePlayerFire {
			power = 0.000000001;
			duration = 0.050000;
			frequency = 10;
			distance = 0.5;
		};
	};
	class DBA_60mm_PLX772 : G_40mm_HE{
		hit = 200;
		indirectHit = 45;
		indirectHitRange = 8;
		explosive=1;
		simulation = "shotBullet";
	};
	class DBA_105mm_Smoke_Submunition : SmokeShell
	{
		simulation = "shotSmoke";
		timeToLive=120;
	};
	class DBA_105mm_P900_KEP : Sh_120mm_APFSDS
	{
		displayName="105mw P900 Kinetic Energy Penetrator";
		hit=600;
		warheadName="KEP";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1505;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.3;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=23.4772979;
		typicalSpeed=1000;
		deflecting = 5;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_105mm_P456_HEAT : DBA_105mm_P900_KEP{
		displayName="105mw P456 High Explosive Anti-Tank";
		hit=444;
		warheadName="HEAT";
		indirectHit=70;
		indirectHitRange=4.5;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1173;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.1;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.3;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=22.73373117;
		typicalSpeed=1000;
		deflecting = 5;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_105mm_P395_HEP : DBA_105mm_P900_KEP{
		displayName="105mw P395 High Explosive Plastic";
		hit=295;
		warheadName="HEP";
		indirectHit=125;
		indirectHitRange=7.5;
		visibleFire=42;
		audibleFire=42;
		initSpeed=732;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.1;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.3;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=18.21493625;
		typicalSpeed=500;
		deflecting = 0;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_105mm_S416_SMK : DBA_105mm_P900_KEP{
		displayName="105mw S416 Smoke Shell";
		hit=1;
		warheadName="SMK";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=703;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.9;
		cost=500;
		CraterEffects = "";
		explosioneffects = "";
		effectsSmoke = "SmokeShellWhite";
		tracerStartTime=0.05;
		tracerScale=0.8;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=18.21493625;
		typicalSpeed=500;
		deflecting = 0;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="DBA_105mm_Smoke_Submunition";
		triggerDistance = -1;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		submunitionConeAngle[]= {90, 170};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionInitSpeed = 10;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[]= {0, 0, -5};
		submunitionConeType[]= {"randomupcone", 12};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_120mm_PM53_KEP : Sh_120mm_APFSDS
	{
		displayName="120mw PM53 Kinetic Energy Penetrator";
		hit=800;
		warheadName="KEP";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1750;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.1;
		tracerScale=1.3;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=23.4772979;
		typicalSpeed=1000;
		deflecting = 5;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_120mm_P225_HEAT : DBA_120mm_PM53_KEP 
	{
		displayName="120mw P225 High Explosive Anti-Tank";
		hit=600;
		warheadName="HEAT";
		indirectHit=50;
		indirectHitRange=5.5;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1410;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.1;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.1;
		tracerScale=1.05;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=30.73286052;
		typicalSpeed=1000;
		deflecting = 5;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_120mm_PM11_HE : DBA_120mm_PM53_KEP 
	{
		displayName="120mw PM11 High Explosive";
		hit=300;
		warheadName="KEP";
		indirectHit=170;
		indirectHitRange=9;
		visibleFire=42;
		audibleFire=42;
		initSpeed=980;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.1;
		tracerScale=1.05;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=3.401360544;
		typicalSpeed=500;
		deflecting = 0;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_120mm_Kanabo_Penetrator : ammo_Penetrator_Base
	{
		hit=900;
		warheadName = "TandemHEAT";
		caliber=53.33333333;
	};
	class DBA_120mm_Kanabo_ATGM : M_120mm_cannon_ATGM
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 4.500000;
		explosive = 0.400000;
		warheadName = "ATGM";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.05;
		thrustTime = 5;
		thrust = 60;
		maxSpeed = 320;
		maneuvrability = 7;
		fuseDistance = 25;
		trackLead = 0.850000;
		trackOversteer = 2.5;
		airFriction = 0.050000;
		sideAirFriction = 0.600000;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 1;
		manualControl = 1;
		maxControlRange = 5000;
		manualControlOffset = 100;
		missileManualControlCone = 90;
		weaponLockSystem = 16;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		submunitionAmmo = "DBA_120mm_Kanabo_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class DBA_PVX90_Penetrator : DBA_120mm_Kanabo_Penetrator{
		hit=1100;
		warheadName = "TandemHEAT";
		caliber=30;
	};
	class DBA_127mm_PVX90_Missile : DBA_120mm_Kanabo_ATGM{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 4.500000;
		explosive = 0.400000;
		warheadName = "ATGM";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.05;
		thrustTime = 5;
		thrust = 200;
		maxSpeed = 600;
		maneuvrability = 7;
		fuseDistance = 25;
		trackLead = 0.750000;
		trackOversteer = 3.0;
		airFriction = 0.050000;
		sideAirFriction = 0.600000;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 1;
		manualControl = 1;
		maxControlRange = 10000;
		manualControlOffset = 100;
		missileManualControlCone = 90;
		weaponLockSystem = 16;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		submunitionAmmo = "DBA_PVX90_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class DBA_152mm_Tanto1_KEP : Sh_120mm_APFSDS
	{
		displayName="152mw Tanto-1 Heavy Kinetic Energy Penetrator";
		hit=1500;
		warheadName="HKEP";
		indirectHit=200;
		indirectHitRange=0.33;
		visibleFire=42;
		audibleFire=42;
		initSpeed=2105;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.3;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=28.50356295;
		typicalSpeed=1000;
		deflecting = 1;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_152mm_Tanto3_HE : DBA_152mm_Tanto1_KEP
	{
		displayName="152mw Tanto-3 High Explosive";
		hit=400;
		warheadName="HE";
		indirectHit=1000;
		indirectHitRange=12.5;
		visibleFire=42;
		audibleFire=42;
		initSpeed=805;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		coefGravity=0.8;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.3;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=12.42236025;
		typicalSpeed=500;
		deflecting = 5;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_152mm_Tanto5_Penetrator : ammo_Penetrator_Base{
		hit=13500;
		warheadName = "TandemHEAT";
		caliber=53.33333333;
	};
	class DBA_152mm_Tanto5_Lance : M_125mm_cannon_ATGM{
		displayName="152mw Tanto-5 Lance";
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 4.500000;
		explosive = 0.400000;
		warheadName = "Lance";
		simulationStep = 0.002000;
		timeToLive = 120;
		initTime = 0.05;
		thrustTime = 30;
		thrust = 15;
		maxSpeed = 150;
		maneuvrability = 7;
		fuseDistance = 25;
		trackLead = 0.850000;
		trackOversteer = 2.5;
		airFriction = 0.050000;
		sideAirFriction = 0.600000;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 1;
		manualControl = 1;
		maxControlRange = 5000;
		manualControlOffset = 100;
		missileManualControlCone = 90;
		weaponLockSystem = 16;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		submunitionAmmo = "DBA_152mm_Tanto5_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class DBA_210mm_Cluster_Submunition : DBA_105mm_P395_HEP{
		hit=105;
		warheadName="HE Cluster";
		indirectHit=105;
		indirectHitRange=11.5;
		visibleFire=42;
		audibleFire=42;
		initSpeed=732;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.3;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=18.21493625;
		typicalSpeed=500;
		deflecting = 0;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
	};
	class DBA_305mm_M19K_HE : Sh_120mm_APFSDS{
		displayName="305mw M-19K HE";
		hit = 2000;
		indirectHit = 4100;
		indirectHitRange = 65;
		warheadName = "HE";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 125;
		typicalSpeed = 250;
		caliber = 30;
		deflecting = 0;
		explosive = 0.800000;
		cost = 300;
		model = "kobra\442_weapons\ammo\green_tracer.p3d";
		tracerStartTime=0.15;
		tracerEndTime=10000000;
		tracerScale=2.25;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 100;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 210;
		airFriction = 0;
		coefGravity=0;
		sideairFriction = 0.000000;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.511886, 0.7, 1900};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.511886, 0.72, 1900};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.511886, 0.65, 1900};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.511886, 0.75, 1900};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		submunitionAmmo="";
		submunitionDirectionType = "";
		submunitionInitSpeed = 1610;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=240;
		class CamShakeExplode {
			power = 50;
			duration = 5.500000;
			frequency = 20;
			distance = 500;
		};

		class CamShakeHit {
			power = 200;
			duration = 8;
			frequency = 20;
			distance = 200;
		};

		class CamShakeFire {
			power = 12;
			duration = 4.500000;
			frequency = 20;
			distance = 175;
		};

		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_184mm_BESH_Submunition : ammo_Penetrator_Base{
		hit=625;
		warheadName = "TandemHEAT";
		caliber=23.33333333;
	};
	class DBA_60mm_HEAT_Submuntion : ammo_Penetrator_Base{
		hit=215;
		warheadName = "TandemHEAT";
		caliber=30.66666667;
	};
	class DBA_184mm_K1_AP : Sh_120mm_APFSDS{
		displayName="184mw K-1 Heavy Kinetic Energy Penetrator";
		hit=1000;
		warheadName="HKEP";
		indirectHit=150;
		indirectHitRange=0.33;
		visibleFire=42;
		audibleFire=42;
		initSpeed=830;
		coefGravity=0;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.5;
		tracerEndTime=120;
		airFriction=0;
		muzzleEffect="";
		caliber=28.50356295;
		typicalSpeed=1000;
		deflecting = 1;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_184mm_B1_BESH : DBA_184mm_K1_AP{
		displayName="184mw B-1 Heavy Kinetic Energy Penetrator";
		hit=500;
		warheadName="HKEP";
		indirectHit=800;
		indirectHitRange=16;
		visibleFire=42;
		audibleFire=42;
		initSpeed=713;
		coefGravity=0;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.8;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.5;
		tracerEndTime=120;
		airFriction=0;
		muzzleEffect="";
		caliber=28.50356295;
		typicalSpeed=1000;
		deflecting = 1;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo = "DBA_184mm_BESH_Submunition";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_184mm_PL1_HE : DBA_184mm_K1_AP{
		displayName="184mw PL-1 High Explosive High Drag";
		hit=400;
		warheadName="HE-HD";
		indirectHit=1250;
		indirectHitRange=16;
		visibleFire=42;
		audibleFire=42;
		initSpeed=730;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.5;
		tracerEndTime=120;
		airFriction=0;
		coefGravity=1.85;
		muzzleEffect="";
		caliber=10.0;
		typicalSpeed=1000;
		deflecting = 1;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class BulletBase;
	class DBA_60mm_P300_HEAT : BulletBase{
		displayName="60mw P300 High Explosive Anti-Tank";
		hit=200;
		warheadName="HEAT";
		indirectHit=100;
		indirectHitRange=7.25;
		visibleFire=42;
		audibleFire=42;
		initSpeed=880;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.8;
		coefGravity=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.5;
		tracerEndTime=120;
		airFriction=0;
		muzzleEffect="";
		caliber=10.0;
		typicalSpeed=1000;
		deflecting = 1;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo = "DBA_60mm_HEAT_Submuntion";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_210mm_K17_HE : Sh_155mm_AMOS{
		displayName="210mw K-17 HE";
		hit = 600;
		indirectHit = 1250;
		indirectHitRange = 47.5;
		warheadName = "HE";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 125;
		typicalSpeed = 550;
		caliber = 30;
		deflecting = 0;
		explosive = 0.800000;
		cost = 300;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 100;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 210;
		airFriction = 0;
		sideairFriction = 0.000000;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.511886, 1, 1900};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.511886, 1, 1900};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.511886, 1, 1900};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.511886, 1, 1900};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};

		class CamShakeExplode {
			power = 31;
			duration = 2.400000;
			frequency = 20;
			distance = 339.598999;
		};

		class CamShakeHit {
			power = 155;
			duration = 0.800000;
			frequency = 20;
			distance = 1;
		};

		class CamShakeFire {
			power = 3.528440;
			duration = 2.400000;
			frequency = 20;
			distance = 99.599197;
		};

		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_210mm_K18_AP : Sh_155mm_AMOS{
		displayName="210mw K-18 AP";
		hit = 4000;
		indirectHit = 22250;
		indirectHitRange = 5;
		warheadName = "AP";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 75;
		typicalSpeed = 150;
		caliber = 71.32667618;
		initSpeed= 701;
		deflecting = 0;
		explosive = 0.0;
		cost = 300;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 100;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 2180;
		airFriction = 0;
		sideairFriction = 0.000000;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.511886, 1, 1900};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.511886, 1, 1900};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.511886, 1, 1900};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.511886, 1, 1900};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};

		class CamShakeExplode {
			power = 31;
			duration = 2.400000;
			frequency = 20;
			distance = 339.598999;
		};

		class CamShakeHit {
			power = 155;
			duration = 0.800000;
			frequency = 20;
			distance = 1;
		};

		class CamShakeFire {
			power = 3.528440;
			duration = 2.400000;
			frequency = 20;
			distance = 99.599197;
		};

		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_210mm_S19_SMK : Sh_155mm_AMOS{
		displayName="210mw S-19 Smoke Shell";
		hit=0;
		warheadName="SMK";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=703;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.9;
		cost=500;
		CraterEffects = "";
		explosioneffects = "";
		effectsSmoke = "SmokeShellWhite";
		tracerStartTime=0.05;
		tracerScale=0.8;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		artilleryLock = 1;
		caliber=18.21493625;
		typicalSpeed=500;
		deflecting = 0;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="DBA_105mm_Smoke_Submunition";
		triggerDistance = -1;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		submunitionConeAngle[]= {90, 170};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionInitSpeed = 50;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[]= {0, 0, -5};
		submunitionConeType[]= {"randomupcone", 30};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=210;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.511886, 1, 1900};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.511886, 1, 1900};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.511886, 1, 1900};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.511886, 1, 1900};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};

		class CamShakeExplode {
			power = 31;
			duration = 2.400000;
			frequency = 20;
			distance = 339.598999;
		};

		class CamShakeHit {
			power = 155;
			duration = 0.800000;
			frequency = 20;
			distance = 1;
		};

		class CamShakeFire {
			power = 3.528440;
			duration = 2.400000;
			frequency = 20;
			distance = 99.599197;
		};

		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_210mm_CK17_Cluster : Sh_155mm_AMOS{
		displayName="210mw CK-17 Cluster";
		hit=0;
		warheadName="Cluster";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=703;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.9;
		cost=500;
		CraterEffects = "";
		explosioneffects = "";
		effectsSmoke = "";
		tracerStartTime=0.05;
		tracerScale=0.8;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		artilleryLock = 1;
		caliber=18.21493625;
		typicalSpeed=500;
		deflecting = 0;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="DBA_210mm_Cluster_Submunition";
		triggerDistance = 250;
		triggerSpeedCoef[]= {0.500000, 1};
		submunitionConeAngle = 22;
		submunitionConeType[]= {"randomcenter", 40};
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 1;
		submunitionInitialOffset[]= {0, 0, -5};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=210;

	};
	class DBA_210mm_UMK20_Mines : Sh_155mm_AMOS{
		displayName="210mw UMK-20 Cluster Mine";
		hit=0;
		warheadName="Cluster";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=703;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.9;
		cost=500;
		CraterEffects = "";
		explosioneffects = "";
		effectsSmoke = "";
		tracerStartTime=0.05;
		tracerScale=0.8;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		artilleryLock = 1;
		caliber=18.21493625;
		typicalSpeed=500;
		deflecting = 0;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="Mo_ClassicMineRange";
		triggerDistance = 250;
		triggerSpeedCoef[]= {0.500000, 1};
		submunitionConeAngle = 16;
		submunitionConeType[]= {"randomcenter", 25};
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 1;
		submunitionInitialOffset[]= {0, 0, -5};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=210;
	};
	class DBA_210mm_ATN3S_TACN : Sh_155mm_AMOS{
		displayName="210mw ATN-3S TAC N.";
		artilleryLock = 1;
		hit = 100;
		indirectHit = 200;
		indirectHitRange = 550;
		initSpeed=855;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 1.0;
		tracerStartTime=0.10;
		tracerEndTime=200;
		timetolive = 220;
		airFriction = 0.0;
		simulation = "shotSubmunitions";
		submunitionAmmo = "DBA_210mm_TACN_Submunition";
		submunitionConeType[]= {"poissondisc", 1};
		submunitionConeAngle = 1;
		simulationStep = 0.010000;
		triggerDistance = 15;
		aimAboveTarget[]= {10};
		aimAboveDefault = 0;
		DBA_isNuke = 1;
	};
	class DBA_OrbitalRelay_AmmoResupply : Sh_155mm_AMOS {
		displayName = "DBA Orbital Ammo Resupply";
		artilleryLock = 1;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 855;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 0;
		tracerStartTime = 0.01;
		tracerEndTime = 0.02;
		timetolive = 220;
		airFriction = 0.0;
		simulation = "shotSubmunitions";
		submunitionConeType[] = { "poissondisc", 1 };
		submunitionConeAngle = 1;
		simulationStep = 0.010000;
		triggerDistance = 15;
		aimAboveTarget[] = { 10 };
		aimAboveDefault = 0;
		DBA_isAmmoResupply = 1;
	};
	class DBA_OrbitalRelay_ExplosiveResupply : Sh_155mm_AMOS {
		displayName = "DBA Orbital Explosive Resupply";
		artilleryLock = 1;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 855;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 0;
		tracerStartTime = 0.01;
		tracerEndTime = 0.02;
		timetolive = 220;
		airFriction = 0.0;
		simulation = "shotSubmunitions";
		submunitionConeType[] = { "poissondisc", 1 };
		submunitionConeAngle = 1;
		simulationStep = 0.010000;
		triggerDistance = 15;
		aimAboveTarget[] = { 10 };
		aimAboveDefault = 0;
		DBA_isAmmoResupply = 2;
	};
	class DBA_OrbitalRelay_LauncherResupply : Sh_155mm_AMOS {
		displayName = "DBA Orbital Launcher Resupply";
		artilleryLock = 1;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 855;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 0;
		tracerStartTime = 0.01;
		tracerEndTime = 0.02;
		timetolive = 220;
		airFriction = 0.0;
		simulation = "shotSubmunitions";
		submunitionConeType[] = { "poissondisc", 1 };
		submunitionConeAngle = 1;
		simulationStep = 0.010000;
		triggerDistance = 15;
		aimAboveTarget[] = { 10 };
		aimAboveDefault = 0;
		DBA_isAmmoResupply = 3;
	};
	class DBA_OrbitalRelay_MedicalResupply : Sh_155mm_AMOS {
		displayName = "DBA Orbital Medical Resupply";
		artilleryLock = 1;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 855;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 0;
		tracerStartTime = 0.01;
		tracerEndTime = 0.02;
		timetolive = 220;
		airFriction = 0.0;
		simulation = "shotSubmunitions";
		submunitionConeType[] = { "poissondisc", 1 };
		submunitionConeAngle = 1;
		simulationStep = 0.010000;
		triggerDistance = 15;
		aimAboveTarget[] = { 10 };
		aimAboveDefault = 0;
		DBA_isAmmoResupply = 4;
	};
	class DBA_OrbitalRelay_RepairResupply : Sh_155mm_AMOS {
		displayName = "DBA Orbital Repair & Resupply";
		artilleryLock = 1;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 855;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 0;
		tracerStartTime = 0.01;
		tracerEndTime = 0.02;
		timetolive = 220;
		airFriction = 0.0;
		simulation = "shotSubmunitions";
		submunitionConeType[] = { "poissondisc", 1 };
		submunitionConeAngle = 1;
		simulationStep = 0.010000;
		triggerDistance = 15;
		aimAboveTarget[] = { 10 };
		aimAboveDefault = 0;
		DBA_isAmmoResupply = 5;
	};
	class DBA_OrbitalRelay_SecondaryAmmoResupply : Sh_155mm_AMOS {
		displayName = "DBA Orbital Secondary Ammo Resupply";
		artilleryLock = 1;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 855;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 0;
		tracerStartTime = 0.01;
		tracerEndTime = 0.02;
		timetolive = 220;
		airFriction = 0.0;
		simulation = "shotSubmunitions";
		submunitionConeType[] = { "poissondisc", 1 };
		submunitionConeAngle = 1;
		simulationStep = 0.010000;
		triggerDistance = 15;
		aimAboveTarget[] = { 10 };
		aimAboveDefault = 0;
		DBA_isAmmoResupply = 6;
	};
	class DBA_210mm_TACN_Submunition : Sh_155mm_AMOS{
		hit = 3000;
		indirectHit = 12500;
		indirectHitRange = 650;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		explosionTime = 0.1;
		ExplosionEffects = "";
		CraterEffects = "";
		SoundSetExplosion[]= {"", "Shell155mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class DBA_20mm_PM359_KEP : B_40mm_GPR{
		hit = 80;
		indirectHit = 5;
		indirectHitRange = 0.15;
		explosive= 0.0
		warheadName = "KEP";
		caliber = 18.18181818;
		deflecting = 1;
		cost = 40;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=1100;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "128 + 256 + 512";
		cost = 75;
		model="\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		tracerScale = 1.05;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 910;	
		allowAgainstInfantry=0;
		coefGravity=0.1;
		waterFriction=0;
		class CamShakeExplode {
			power = 10;
			duration = 1.75;
			frequency = 20;
			distance = 25;
		};

		class CamShakeHit {
			power = 60;
			duration = 2;
			frequency = 20;
			distance = 5;
		};

		class CamShakeFire {
			power = 8;
			duration = 1.35;
			frequency = 15;
			distance = 60;
		};

		class CamShakePlayerFire {
			power = 0.000000001;
			duration = 0.050000;
			frequency = 10;
			distance = 0.5;
		};
	};
	class DBA_20mm_P594_HEI : DBA_20mm_PM359_KEP{
		hit = 10;
		indirectHit = 40;
		indirectHitRange = 6.45;
		explosive= 1
		warheadName = "HEI";
		caliber = 5;
		deflecting = 1;
		cost = 40;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=1100;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "128 + 256 + 512";
		cost = 75;
		model="\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		tracerScale = 1.0;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 910;	
		allowAgainstInfantry=0;
		coefGravity=0.1;
		waterFriction=0;
		class CamShakeExplode {
			power = 10;
			duration = 1.75;
			frequency = 20;
			distance = 25;
		};

		class CamShakeHit {
			power = 60;
			duration = 2;
			frequency = 20;
			distance = 5;
		};

		class CamShakeFire {
			power = 8;
			duration = 1.35;
			frequency = 15;
			distance = 60;
		};

		class CamShakePlayerFire {
			power = 0.000000001;
			duration = 0.050000;
			frequency = 10;
			distance = 0.5;
		};
	};
	class DBA_23mm_UM23_HEPF : DBA_50mm_HEPF{
		hit = 65;
		indirectHit = 45;
		indirectHitRange = 2;
		displayname = "23mm UM-23 High Explosive Proxy Fuse";
		warheadName = "UM-23 HE-PF";
		explosive = 1;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 256";
		cost = 15;
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 30;
		brightness=100000;
		muzzleEffect = "";
		caliber = 0.875;
		initSpeed=1050;
		typicalSpeed = 500;
		fuseDistance = 10;
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 690;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		allowAgainstInfantry=1;
		timeToLive=10;
		coefGravity=0;
		airfriction=0;
		waterFriction=0;
	};
	class DBA_57mm_ap: B_40mm_GPR
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
	class DBA_57mm_hef: B_40mm_GPR
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
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
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
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
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
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
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
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
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
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
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
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
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
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		aiAmmoUsageFlags="64 + 128 + 512";
		allowAgainstInfantry=1;
		timeToLive=10;
	};
	class DBA_165mm_C33_BESH : 3AS_GAT_redPlasma_AT{
		displayName="165mw C-33 BESH";
		hit = 1000;
		indirectHit = 800;
		indirectHitRange = 25;
		warheadName = "BESH";
		visibleFire=42;
		audibleFire=42;
		initSpeed=259;
		explosionSoundEffect="DefaultExplosion";
		explosive=0.33;
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
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
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
	class DBA_792_M5A : B_762x54_Ball {
		hit = 18;
		indirectHit = 8;
		indirectHitRange = 0.5;
		displayname = "7.92 M-5a";
		warheadName = "M-5a";
		explosive = 0;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 128";
		cost = 5;
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
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
	class DBA_762_54_REC : B_762x54_Ball{
		hit = 22;
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
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
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
	class DBA_762_51_D61 : DBA_762_54_REC
	{
		hit = 22;
		indirectHit = 2;
		indirectHitRange = 0.2;
		displayname = "7.62mw D61";
		warheadName = "7.62mw D61";
		explosive = 0;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 128";
		cost = 5;
		initSpeed=910;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 1.10;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		caliber = 3.2967;
		typicalSpeed = 500;
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
	class DBA_792_PKW : DBA_762_54_REC
	{
		hit = 25;
		indirectHit = 3;
		indirectHitRange = 0.1;
		displayname = "7.92mw PKW";
		warheadName = "7.92mw PKW";
		explosive = 0;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 128";
		cost = 5;
		initSpeed=905;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 0.9;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		caliber = 2.578268877;
		typicalSpeed = 500;
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		allowAgainstInfantry=1;
		timeToLive=20;
		coefGravity=0.25;
		airfriction=-0;
		waterFriction=0;
	};

	class DBA_762_54_DN71 : B_762x54_Ball{
		hit = 25;
		indirectHit = 3;
		indirectHitRange = 0.1;
		displayname = "7.62mw DN71";
		warheadName = "7.62mw DN71";
		explosive = 0;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 128";
		cost = 5;
		initSpeed=883;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 0.9;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		caliber = 2.642506606;
		typicalSpeed = 500;
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		allowAgainstInfantry=1;
		timeToLive=20;
		coefGravity=0.25;
		airfriction=0;
		waterFriction=0;
	};
	class DBA_127_X962_SLAP : DBA_762_51_D61
	{
		hit = 32;
		indirectHit = 10;
		indirectHitRange = 0.8;
		displayname = "12.7mw X962";
		warheadName = "12.7mw X962";
		explosive = 0;
		airLock = 1;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 128";
		cost = 5;
		initSpeed=1300;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 1.2;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		caliber = 5.897435897;
		typicalSpeed = 500;
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
	// LAAT Technical Testbed Munitions
	class ammo_23mm_SAP_Penetrator : ammo_Penetrator_Base{
		hit=135;
		warheadName = "SAPHEI";
		caliber=9.5;
	};
	class ammo_45mm_SAP_Penetrator : ammo_Penetrator_Base{
		hit=425;
		warheadName = "SAPHEI";
		caliber=16.66666667;
	};
	class ammo_Fletch_Penetrator : ammo_Penetrator_Base{
		hit=675;
		warheadName = "HEAT";
		caliber=26.66666667;
	};
	class ammo_Ballista_Penetrator : ammo_Penetrator_Base{
		hit=1100;
		warheadName = "Tandem";
		caliber=40;
	};
	class ammo_Onager_Penetrator : ammo_Penetrator_Base{
		hit=5000;
		warheadName = "Tandem";
		caliber=40;
	};
	class ammo_R10P_Penetrator : ammo_Penetrator_Base{
		hit=500;
		warheadName = "HEAT";
		caliber=28;
	};
	class ammo_R20P_Penetrator : ammo_Penetrator_Base{
		hit=950;
		warheadName = "HEAT";
		caliber=39.66666667;
	};
	class DBA_23mm_PS59_SAP : G_40mm_HE{
		displayName="23mw PS59 SAPHEI";
		hit = 100;
		indirectHit = 27;
		indirectHitRange = 6;
		explosive= 1.0
		warheadName = "SAPHEI";
		caliber = 1;
		deflecting = 1;
		cost = 40;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=715;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "128 + 256 + 512";
		cost = 75;
		model="\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerColor[]=
		{
			"Blue"
		};
		tracerScale = 1.5;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 500;	
		allowAgainstInfantry=1;
		coefGravity=0;
		waterFriction=0;
		submunitionAmmo = "ammo_23mm_SAP_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class DBA_45mm_PS73_SAP : G_40mm_HE{
		displayName="45mw PS73 SAPHEI";
		hit = 100;
		indirectHit = 55;
		indirectHitRange = 10;
		explosive= 1.0
		warheadName = "SAPHEI";
		caliber = 1;
		deflecting = 1;
		cost = 40;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=1415;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 2.778279, 0.9, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 2.778279, 0.95, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 2.778279, 0.93, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 2.778279, 0.92, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "128 + 256 + 512";
		cost = 75;
		model="\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		tracerColor[]=
		{
			"Green"
		};
		tracerScale = 1.5;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 500;	
		allowAgainstInfantry=1;
		coefGravity=0;
		waterFriction=0;
		submunitionAmmo = "ammo_45mm_SAP_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class DBA_148mm_Fletch_ATGM : MissileBase{
		displayName="K-2M Fletch ATGM";
		scope=2;
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
		proxyShape = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_tube_heat";
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 4.500000;
		explosive = 0.400000;
		warheadName = "ATGM";
		simulation = "shotMissile";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.05;
		thrustTime = 15;
		thrust = 80;
		maxSpeed = 160;
		maneuvrability = 10;
		fuseDistance = 25;
		trackOversteer = 0.4;
		trackLead = 0.55;
		airFriction = 0;
		sideAirFriction = 0.100000;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 1;
		manualControl = 1;
		maxControlRange = 6000;
		manualControlOffset = 100;
		missileManualControlCone = 40;
		weaponLockSystem = 0;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		flightProfiles[] = {"Direct"};
		submunitionAmmo = "ammo_Fletch_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class DBA_130mm_Ballista_ATGM : MissileBase{
		displayName="AK-114A Ballista ATGM";
		scope=2;
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_F";
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 4.500000;
		explosive = 0.400000;
		warheadName = "ATGM";
		simulation = "shotMissile";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.05;
		thrustTime = 5;
		thrust = 205;
		maxSpeed = 345;
		maneuvrability = 20;
		fuseDistance = 25;
		tracklead = 1.5;
		trackoversteer = 9.0;
		airFriction = 0.000000;
		sideairfriction = 0.75;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 1;
		manualControl = 1;
		maxControlRange = 5000;
		manualControlOffset = 100;
		missileManualControlCone = 65;
		weaponLockSystem = 0;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		flightProfiles[] = {"Direct"};
		submunitionAmmo = "ammo_Ballista_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class DBA_Onager_AGM : MissileBase{
		displayName="UK-25M Onager AGM";
		model = "\A3\Weapons_F_Sams\Ammo\Missile_AR_02_F_fly.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Missile_AR_02_F.p3d";
		hit = 400;
		indirectHit = 1000;
		indirectHitRange = 6.0;
		explosive = 1.00000;
		warheadName = "AGM";
		simulation = "shotMissile";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.05;
		thrustTime = 6.25;
		thrust = 440;
		maxSpeed = 670;
		maneuvrability = 15;
		fuseDistance = 25;
		trackLead = 1.0;
		trackOversteer = 2.0;
		airFriction = 0.000000;
		sideAirFriction = 0.100000;
		cost = 500;
		class Components
		{
        class SensorsManagerComponent
        {
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
                        minRange = 100;
                        maxRange = 1500;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
                        minRange = 10;
                        maxRange = 11000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 95;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 20000;
						maxFogSeeThrough = 1.0;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
		flightProfiles[] = {"Direct"};
		class Direct
		{	
		};
		class TopDown
		{
        ascendHeight = 400;
        descendDistance = 1000;
        minDistance = 400;
        ascendAngle = 0.01;
		};
		missileLockCone = 90;
		missileKeepLockedCone = 70;
		missileLockMaxDistance = 11000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 905;
		irLock = 1;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 0;
		manualControl = 0;
		weaponLockSystem = 2;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		submunitionAmmo = "ammo_Onager_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class DBA_50mm_R5P_Rocket : RocketBase{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.630957,1.2,1700};
		warheadName="FRAG";
		simulation="shotRocket";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHit=30;
		manualControl=0;
		indirectHitRange=7;
		explosive=1;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airfriction=0.14999999;
		sideAirFriction=0.001999998;
		maxSpeed=570;
		typicalspeed=400;
		initTime=0.029999999;
		thrustTime=1.5;
		thrust=400;
		fuseDistance=15;
		effectsMissile="missile2";
		whistleDist=4;
	};
	class DBA_107mm_R10P_Rocket : RocketBase{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.630957,0.9,1700};
		warheadName="HEAT/FRAG";
		simulation="shotRocket";
		submunitionAmmo="ammo_R10P_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHit=45;
		manualControl=0;
		indirectHitRange=6;
		explosive=1;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airfriction=0.07999999;
		sideAirFriction=0.001999998;
		maxSpeed=570;
		typicalspeed=400;
		initTime=0.029999999;
		thrustTime=2.15;
		thrust=400;
		fuseDistance=15;
		effectsMissile="missile2";
		whistleDist=4;
	};
	class DBA_200mm_R20P_Rocket : RocketBase{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.630957,0.8,1700};
		warheadName="BESH";
		simulation="shotRocket";
		submunitionAmmo="ammo_R20P_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHit=100;
		manualControl=0;
		indirectHitRange=10.5;
		explosive=1;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airfriction=0.04999999;
		sideAirFriction=0.001999998;
		maxSpeed=420;
		typicalspeed=100;
		initTime=0.029999999;
		thrustTime=3.25;
		thrust=400;
		fuseDistance=15;
		effectsMissile="missile2";
		whistleDist=4;
	};
	class DBA_AD3M_AAM : MissileBase{
		displayName="AD-3M AAM";
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		hit = 400;
		indirectHit = 550;
		indirectHitRange = 4.5;
		proximityExplosionDistance=6;
		explosive = 1.00000;
		warheadName = "AAM";
		simulation = "shotMissile";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.05;
		thrustTime = 8.25;
		thrust = 440;
		maxSpeed = 584;
		maneuvrability = 30;
		fuseDistance = 25;
		trackLead = 1.0;
		trackOversteer = 1.15;
		airFriction = 0.15;
		sideAirFriction = 0.100000;
		cost = 500;
		class Components{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
                        minRange = 100;
                        maxRange = 7000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
                        minRange = 100;
                        maxRange = 7000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 1595;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 7000;
						maxFogSeeThrough = 1.0;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
		flightProfiles[] = {"Direct"};
		missileLockCone = 50;
		missileKeepLockedCone = 90;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 9000;
		irLock = 1;
		airLock = 2;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 0;
		manualControl = 0;
		weaponLockSystem = 2;
		cmImmunity = 0.75;
		cameraViewAvailable = 1;
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class DBA_D39M_AAM : MissileBase{
		displayName="D-39M AAM";
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		hit = 400;
		indirectHit = 300;
		indirectHitRange = 12.0;
		proximityExplosionDistance=15;
		explosive = 1.00000;
		warheadName = "AAM";
		simulation = "shotMissile";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.05;
		thrustTime = 6.25;
		thrust = 300;
		maxSpeed = 420;
		maneuvrability = 30;
		fuseDistance = 25;
		trackoversteer = 0.95;
		sideairfriction = 0.072;
		trackLead = 0.56;
		airFriction = 0.05;
		cost = 500;
		missileLockCone = 90;
		missileKeepLockedCone = 50;
		missileLockMaxDistance = 2500;
		missileLockMinDistance = 10;
		missileLockMaxSpeed = 1900;
		irLock = 1;
		airLock = 2;
		class Components{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
                        minRange = 10;
                        maxRange = 7500;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
                        minRange = 10;
                        maxRange = 7500;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 9500;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 7500;
						maxFogSeeThrough = 1.0;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 0;
		manualControl = 0;
		weaponLockSystem = 2;
		cmImmunity = 0.85;
		cameraViewAvailable = 1;
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	// END OF LAAT TTB AMMO
	// Start of CIS Missile Weapon Systems
	class DBA_DADS5M_Missile : MissileBase{
		displayName="DAM-5 SAM";
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
		hit = 400;
		indirectHit = 450;
		indirectHitRange = 20;
		proximityExplosionDistance=20;
		explosive = 1.00000;
		warheadName = "SAM";
		simulation = "shotMissile";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.05;
		thrustTime = 12;
		thrust = 475;
		maxSpeed = 549;
		maneuvrability = 30;
		fuseDistance = 25;
		trackLead = 1.0;
		trackOversteer = 1.15;
		airFriction = 0.15;
		sideAirFriction = 0.100000;
		cost = 10;
		class Components{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
                        minRange = 8000;
                        maxRange = 8000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
                        minRange = 8000;
                        maxRange = 8000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 1950;
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 8000;
						maxFogSeeThrough = 1.0;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1500;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=50;
						angleRangeVertical=50;
						groundNoiseDistanceCoef=1;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=20000;
						minSpeedThreshold=5;
						maxSpeedThreshold=1500;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
				};
			};
		};
		flightProfiles[] = {"Direct"};
		missileLockCone = 50;
		missileKeepLockedCone = 70;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 900;
		irLock = 1;
		airLock = 2;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 0;
		manualControl = 0;
		weaponLockSystem = "2 + 8";
		cmImmunity = 0.925;
		cameraViewAvailable = 1;
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class DBA_DADS1P_Missile : MissileBase{
		displayName="DAM-1U SAM";
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		hit = 400;
		indirectHit = 1000;
		indirectHitRange = 25;
		proximityExplosionDistance=25;
		explosive = 1.00000;
		warheadName = "SAM";
		simulation = "shotMissile";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.05;
		thrustTime = 17;
		thrust = 800;
		maxSpeed = 1020;
		maneuvrability = 30;
		fuseDistance = 25;
		trackLead = 1.0;
		trackOversteer = 1.15;
		airFriction = 0.15;
		sideAirFriction = 0.100000;
		cost = 500;
		class Components{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
                        minRange = 16000;
                        maxRange = 16000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
                        minRange = 16000;
                        maxRange = 16000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 1950;
						angleRangeHorizontal = 80;
						angleRangeVertical = 80;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 16000;
						maxFogSeeThrough = 1.0;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1500;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=16000;
						angleRangeHorizontal=80;
						angleRangeVertical=80;
						groundNoiseDistanceCoef=1;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=20000;
						minSpeedThreshold=5;
						maxSpeedThreshold=1500;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
				};
			};
		};
		flightProfiles[] = {"Direct"};
		missileLockCone = 90;
		missileKeepLockedCone = 90;
		missileLockMaxDistance = 16000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 1900;
		irLock = 1;
		airLock = 2;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 0;
		manualControl = 0;
		weaponLockSystem = "2 + 8";
		cmImmunity = 0.875;
		cameraViewAvailable = 1;
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	//Borodino Ammo
	class DBA_K46_Penetrator : ammo_Penetrator_Base{
		hit=2500;
		warheadName = "Anti-Concrete";
		caliber=32;
	};
	class DBA_K46H_Penetrator : ammo_Penetrator_Base{
		hit=1700;
		warheadName = "HEAT";
		caliber=29;
	};
	class DBA_170mm_K46_AC : Sh_120mm_APFSDS{
		displayName="170mw K46 Anti-Concrete Round";
		hit=500;
		warheadName="Anti-Concrete";
		indirectHit=300;
		indirectHitRange=0.33;
		visibleFire=42;
		audibleFire=42;
		initSpeed=920;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.7;
		tracerEndTime=10;
		airFriction=0;
		muzzleEffect="";
		caliber=28.50356295;
		typicalSpeed=1000;
		coefGravity=0.0;
		deflecting = 1;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.778279, 0.6, 1800};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.778279, 0.7, 1800};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.778279, 0.65, 1800};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.778279, 0.75, 1800};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo = "DBA_K46_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_170mm_KN46_HE : Sh_120mm_APFSDS{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 62595.696;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 6971.70904;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny_HD", "ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		displayName="170mw PL-1 High Explosive High Drag";
		hit=400;
		warheadName="HE";
		indirectHit=1000;
		indirectHitRange=20;
		visibleFire=42;
		audibleFire=42;
		initSpeed=920;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.7;
		tracerEndTime=120;
		airFriction=0;
		coefGravity=0.0;
		muzzleEffect="";
		caliber=5.0;
		typicalSpeed=1000;
		deflecting = 1;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.778279, 0.65, 1800};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.778279, 0.75, 1800};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.778279, 0.6, 1800};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.778279, 0.7, 1800};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_170mm_K46H_HEAT : Sh_120mm_APFSDS{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 27000;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 2750;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny_HD", "ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		displayName="170mw PL-1 High Explosive High Drag";
		hit=300;
		warheadName="HE";
		indirectHit=300;
		indirectHitRange=8;
		visibleFire=42;
		audibleFire=42;
		initSpeed=920;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.7;
		tracerEndTime=120;
		airFriction=0;
		coefGravity=0.0;
		muzzleEffect="";
		caliber=5.0;
		typicalSpeed=1000;
		deflecting = 1;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.778279, 0.65, 1800};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.778279, 0.75, 1800};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.778279, 0.6, 1800};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.778279, 0.7, 1800};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo = "DBA_K46H_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		triggerOnImpact = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	//END
	// Start of PN32 Field Gun Munitions
	class DBA_PM1_Penetrator : ammo_Penetrator_Base{
		hit=500;
		warheadName = "APBC";
		caliber=21.66666667;
	};
	class DBA_94mm_PM1_AP : Sh_120mm_APFSDS{
		displayName="94mw PM1 AP";
		hit=50;
		warheadName="APBC";
		indirectHit=5;
		indirectHitRange=0.33;
		visibleFire=42;
		audibleFire=42;
		initSpeed=929;
		coefGravity=0;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.5;
		tracerEndTime=120;
		airFriction=0;
		muzzleEffect="";
		caliber=23.32256907;
		typicalSpeed=1000;
		deflecting = 1;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="DBA_PM1_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_94mm_P2_HEF : Sh_120mm_APFSDS{
		displayName="94mw P2 High Explosive Fragmentation";
		hit=10;
		warheadName="HE-F";
		indirectHit=150;
		indirectHitRange=6.5;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1043;
		coefGravity=0;
		explosionSoundEffect="DefaultExplosion";
		explosive=1;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.5;
		tracerEndTime=120;
		airFriction=0;
		muzzleEffect="";
		caliber=1.50356295;
		typicalSpeed=1000;
		deflecting = 1;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_94mm_SM3_SMK : Sh_120mm_APFSDS{
		displayName="94mw SM3 Smoke Shell";
		hit=10;
		warheadName="SMK";
		indirectHit=5;
		indirectHitRange=0.33;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1143;
		coefGravity=0;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.5;
		tracerEndTime=120;
		airFriction=0;
		muzzleEffect="";
		caliber=28.50356295;
		typicalSpeed=1000;
		deflecting = 1;
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		submunitionAmmo="DBA_105mm_Smoke_Submunition";
		triggerDistance = -1;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		submunitionConeAngle[]= {90, 170};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionInitSpeed = 10;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[]= {0, 0, -5};
		submunitionConeType[]= {"randomupcone", 12};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	class DBA_94mm_Canister_Submunition : DBA_762_54_DN71{
		hit=25;
		warheadName="HE Cluster";
		indirectHit=5;
		indirectHitRange=0.33;
		visibleFire=42;
		audibleFire=42;
		initSpeed=550;
		coefGravity=0;
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
		deflecting = 0;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
	};
	class DBA_94mm_PM4C_CAN : Sh_120mm_APFSDS{
		displayName="94mw PM4-C Beehive";
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
		triggerTime=0.01;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="DBA_94mm_Canister_Submunition";
		triggerDistance = -1;
		submunitionConeAngle = 0.4;
		submunitionConeType[]=
		{
			"randomcenter",
			65
		};
		triggerTime=0.2;
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 1;
		submunitionInitialOffset[]= {0, 0, -5};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=210;
	};
	class DBA_PM5_Penetrator : ammo_Penetrator_Base{
		hit=750;
		warheadName = "KEP";
		caliber=33.33333333;
	};
	class DBA_94mm_PM5_KEP : Sh_120mm_APFSDS{
		displayName="94mw PM5 KEP";
		hit=50;
		warheadName="KEP";
		indirectHit=5;
		indirectHitRange=0.33;
		visibleFire=42;
		audibleFire=42;
		initSpeed=1570;
		coefGravity=0;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime=0.05;
		tracerScale=1.5;
		tracerEndTime=120;
		airFriction=0;
		muzzleEffect="";
		caliber=21.23142251;
		typicalSpeed=1000;
		deflecting = 1;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="DBA_PM5_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		timeToLive=20;
	};
	// END
	class DBA_100mm_UB4H_HEF : Sh_120mm_APFSDS{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 15500;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 1850;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 1886;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_small_HD", "ACE_frag_small"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 125;
		indirectHit = 75;
		indirectHitRange = 8;
		displayname = "100mw UB-4H HE Fragmentation";
		warheadName = "UB-4H HE-F";
		explosive = 1.0;
		airLock = 0;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 128";
		cost = 15;
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		tracerScale = 2.15;
		tracerStartTime = 0;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		caliber = 1.100000;
		typicalSpeed = 930;
		proximityExplosionDistance = 30;
		fuseDistance = 50;
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		allowAgainstInfantry=1;
		timeToLive=20;
		coefGravity=7.50;
		airfriction=-0;
		deflecting=0;
		waterFriction=0;
		class CamShakeExplode {
			power = 10;
			duration = 1.75;
			frequency = 40;
			distance = 75;
		};

		class CamShakeHit {
			power = 80;
			duration = 2;
			frequency = 20;
			distance = 25;
		};

		class CamShakeFire {
			power = 40;
			duration = 2.5;
			frequency = 15;
			distance = 100;
		};

		class CamShakePlayerFire {
			power = 0.000000001;
			duration = 0.050000;
			frequency = 10;
			distance = 0.5;
		};
	};
	//END
	//GAT AA Round 
	class DBA_37mm_UB15_HEI : B_40mm_GPR{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 735;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 40;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2970;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 65;
		indirectHit = 55;
		indirectHitRange = 3.5;
		explosive= 0.35;
		warheadName = "HE-I";
		caliber = 9.777777778;
		deflecting = 3;
		cost = 40;
		airFriction = 0;
		timeToLive = 20;
		initSpeed=880;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 0.5, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 0.5, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 0.5, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 0.5, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "64 + 128 + 256";
		model="\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		tracerScale = 1.55;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 50;	
		allowAgainstInfantry=1;
		coefGravity=0.15;
		waterFriction=0;
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
	//New Turret Ammo
	class DBA_20mm_UR18_API : B_40mm_GPR{
		ace_frag_enabled = 0;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 0;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 0;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2377;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny_HD", "ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 1;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 30;
		indirectHit = 5;
		indirectHitRange = 0.25;
		explosive= 0;
		warheadName = "API";
		caliber = 7.5;
		deflecting = 3;
		cost = 40;
		airFriction = 0;
		timeToLive = 20;
		initSpeed=800;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 0.5, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 0.5, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 0.5, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 0.5, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "64 + 128 + 256";
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		tracerScale = 1.15;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 50;	
		allowAgainstInfantry=1;
		coefGravity=0.3;
		waterFriction=0;
	};
	class DBA_75mm_Canister_Submunition : B_762x54_Ball{
		hit=6;
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
		timeToLive = 10;
		model="kobra\442_weapons\ammo\red_tracer.p3d";
		effectfly="442_plasma_red";
	};
	class DBA_75mm_CR34_CAN : Sh_120mm_APFSDS{
		displayName="CR-34 75mw Canister Round";
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
		caliber=5.21493625;
		typicalSpeed=300;
		deflecting = 0;
		simulation = "shotSubmunitions";
		model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		submunitionAmmo="DBA_75mm_Canister_Submunition";
		triggerDistance = -1;
		submunitionConeAngle = 0.355;
		submunitionInitSpeed=430;
		submunitionConeType[]=
		{
			"randomcenter",
			40
		};
		triggerTime=0.01;
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 1;
		submunitionInitialOffset[]= {0, 0, -5};
		aiAmmoUsageFlags="64 + 128";
		allowAgainstInfantry=1;
		timeToLive=210;
	};
	class DBA_80mm_UBF5_HEF : Sh_120mm_APFSDS{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 5900;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 480;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 150;
		indirectHit = 60;
		indirectHitRange = 4.5;
		displayname = "80mw UBF-5 HE Fragmentation";
		warheadName = "UBF-5 HE-F";
		explosive = 1.0;
		airLock = 0;
		canLock = 2;
		aiAmmoUsageFlags = "64 + 128";
		cost = 15;
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		tracerScale = 2.15;
		tracerStartTime = 0;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		caliber = 1.100000;
		typicalSpeed = 680;
		proximityExplosionDistance = 30;
		fuseDistance = 15;
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		allowAgainstInfantry=1;
		timeToLive=20;
		coefGravity=0.15;
		airfriction=-0;
		deflecting=0;
		waterFriction=0;
		class CamShakeExplode {
			power = 10;
			duration = 1.75;
			frequency = 40;
			distance = 75;
		};

		class CamShakeHit {
			power = 80;
			duration = 2;
			frequency = 20;
			distance = 25;
		};

		class CamShakeFire {
			power = 10;
			duration = 1.5;
			frequency = 15;
			distance = 100;
		};

		class CamShakePlayerFire {
			power = 0.000000001;
			duration = 0.050000;
			frequency = 10;
			distance = 0.5;
		};
	};
	class DBA_13mm_UR2_API : B_40mm_GPR{
		hit = 19;
		indirectHit = 5;
		indirectHitRange = 0.25;
		explosive= 0;
		warheadName = "API";
		caliber = 5;
		deflecting = 3;
		cost = 40;
		airFriction = 0;
		timeToLive = 20;
		initSpeed=805;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 0.5, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 0.5, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 0.5, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 0.5, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "64 + 128 + 256";
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		tracerScale = 1.15;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 50;	
		allowAgainstInfantry=1;
		coefGravity=0.3;
		waterFriction=0;
		class CamShakeExplode {
			power = 10;
			duration = 1.00;
			frequency = 40;
			distance = 10;
		};

		class CamShakeHit {
			power = 80;
			duration = 2;
			frequency = 20;
			distance = 25;
		};

		class CamShakeFire {
			power = 0;
			duration = 1.5;
			frequency = 15;
			distance = 0;
		};

		class CamShakePlayerFire {
			power = 0.000000001;
			duration = 0.050000;
			frequency = 10;
			distance = 0.5;
		};
	};
	class DBA_25mm_UB5_HEI : B_40mm_GPR{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 250;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 10;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2377;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 30;
		indirectHit = 20;
		indirectHitRange = 4.25;
		explosive= 1;
		warheadName = "HEI";
		caliber = 5;
		deflecting = 3;
		cost = 40;
		airFriction = 0;
		timeToLive = 20;
		initSpeed=900;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 0.5, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 0.5, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 0.5, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 0.5, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "64 + 128 + 256";
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		tracerScale = 1.15;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 50;	
		allowAgainstInfantry=1;
		coefGravity=0.15;
		waterFriction=0;
		class CamShakeExplode {
			power = 15;
			duration = 1.7;
			frequency = 40;
			distance = 20;
		};

		class CamShakeHit {
			power = 80;
			duration = 2;
			frequency = 20;
			distance = 25;
		};

		class CamShakeFire {
			power = 0;
			duration = 1.5;
			frequency = 15;
			distance = 0;
		};
		class CamShakePlayerFire {
			power = 0.000000001;
			duration = 0.050000;
			frequency = 10;
			distance = 0.5;
		};
	}; 
	//END
	//Vulture Armaments
	class DBA_30mm_STN_HEI : B_40mm_GPR{
		ace_frag_enabled = 0;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 0;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 0;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2377;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny_HD", "ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 1;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 30;
		indirectHit = 40;
		indirectHitRange = 3;
		explosive= 1;
		warheadName = "HE-I";
		caliber = 7.5;
		deflecting = 3;
		cost = 40;
		airFriction = 0;
		timeToLive = 20;
		initSpeed=540;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 0.5, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 0.5, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 0.5, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 0.5, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "64 + 128 + 256";
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		tracerScale = 1.15;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 50;	
		allowAgainstInfantry=1;
		coefGravity=0.05;
		waterFriction=0;
	};
	class DBA_80mm_UP8R_Rocket : RocketBase{
		ace_frag_enabled = 0;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 0;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 0;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2377;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny_HD", "ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 1;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",3.630957,0.85,1700};
		warheadName="FRAG";
		simulation="shotRocket";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered=0;
		coefGravity=0.3;
		hit=100;
		indirectHit=75;
		manualControl=0;
		indirectHitRange=5;
		explosive=1;
		cost=30;
		aiAmmoUsageFlags="64 + 128 + 512";
		allowAgainstInfantry=1;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airfriction=0.14999999;
		sideAirFriction=0.001999998;
		maxSpeed=584;
		typicalspeed=100;
		initTime=0.029999999;
		thrustTime=2;
		thrust=500;
		fuseDistance=15;
		effectsMissile="missile2";
		whistleDist=4;
	};
	class DBA_MG33A_Missile : MissileBase{
		displayName="MG-33A AAM";
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		hit = 250;
		indirectHit = 1000;
		indirectHitRange = 10;
		proximityExplosionDistance=12;
		explosive = 1.00000;
		warheadName = "SAM";
		simulation = "shotMissile";
		simulationStep = 0.002000;
		timeToLive = 75;
		initTime = 0.05;
		thrustTime = 8;
		thrust = 1500;
		maxSpeed = 2060;
		maneuvrability = 34;
		fuseDistance = 25;
		trackLead = 0.9;
		trackOversteer = 0.95;
		airFriction = 0.18;
		sideAirFriction = 0.100000;
		cost = 100;
		class Components{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
                        minRange = 5500;
                        maxRange = 5500;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
                        minRange = 5500;
                        maxRange = 5500;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 1950;
						angleRangeHorizontal = 80;
						angleRangeVertical = 80;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 5500;
						maxFogSeeThrough = 1.0;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1500;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
		flightProfiles[] = {"Direct"};
		missileLockCone = 80;
		missileKeepLockedCone = 65;
		missileLockMaxDistance = 5500;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 1900;
		irLock = 1;
		airLock = 2;
		aiAmmoUsageFlags = "128 + 256";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 0;
		manualControl = 0;
		weaponLockSystem = 2;
		cmImmunity = 0.85;
		cameraViewAvailable = 1;
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]= {0, 0, -0.200000};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	//END
	//Fennek Gun Start
	class DBA_PL25S_Penetrator : ammo_Penetrator_Base{
		hit=80;
		warheadName = "HEDP";
		caliber=2.4;
	};
	class DBA_25mm_PL25S_HEDP : B_40mm_GPR{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 140;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 21;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2377;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny_HD", "ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 75;
		indirectHit = 55;
		indirectHitRange = 3.15;
		explosive= 1;
		warheadName = "HEDP";
		caliber = 5;
		deflecting = 3;
		cost = 40;
		airFriction = 0;
		timeToLive = 20;
		initSpeed=405;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.778279, 0.5, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.778279, 0.5, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.778279, 0.5, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.778279, 0.5, 1600};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		cost = 75;
		model="\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="DBA_PL25S_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 1;
		submunitionInitialOffset[]={0,0,-0.2};
		tracerScale = 1.55;
		tracerStartTime = 0.1;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 50;	
		allowAgainstInfantry=0;
		coefGravity=3.5;
		waterFriction=0;
	};
	//END
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
	class Default;
	class worthorn: Default
	{
		cursor = "";
		cursorAim = "";
		scope = 2;
		displayName = "Meme Horn";
		reloadTime = 0;
		drySound[] = 
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Sound\Warthog_Music.ogg", 5, 1, 200
		};
		canLock = 0;
		optics = 0;
		enableAttack = 0;
	};
};
