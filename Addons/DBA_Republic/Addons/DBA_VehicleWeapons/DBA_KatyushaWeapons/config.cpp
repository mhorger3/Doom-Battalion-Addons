class CfgPatches
{
	class DBA_Katyusha
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] =
		{
		};
		weapons[] = {"DBA_rockets_230mm_Katyusha"};
	};
};
class CfgWeapons {
	class RocketPods;
	class DBA_rockets_230mm_Katyusha : RocketPods
	{
		class gunClouds
		{
		};
		displayName = "$STR_A3_CFGMAGAZINES_12RND_230MM_ROCKETS0";
		magazines[] =
		{
			"12Rnd_230mm_rockets",
			"12Rnd_230mm_rockets_cluster"
		};
		magazineReloadTime = 45;
		sounds[] =
		{
			"StandardSound"
		};
		cursorAim = "EmptyCursor";
		class StandardSound
		{
			begin1[] =
			{
				"A3\Sounds_F\weapons\Rockets\Titan_2",
				1.7782794,
				1,
				1500
			};
			soundBegin[] =
			{
				"begin1",
				1
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MLRSFired";
				positionName = "Konec hlavne";
				directionName = "Usti hlavne";
			};
		};
		modes[] =
		{
			"Mode_1",
			"Mode_2",
			"Mode_3",
			"Mode_4",
			"Mode_5",
			"Mode_6",
			"Mode_7",
			"Mode_8",
			"Mode_9",
			"Mode_10",
			"Mode_11",
			"Mode_12",
			"Mode_13",
			"Mode_14",
			"Mode_15",
			"Mode_16"
		};
		class Close : RocketPods
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Close0";
			minRange = 800;
			minRangeProbab = 0.15000001;
			midRange = 2500;
			midRangeProbab = 0.64999998;
			maxRange = 4600;
			maxRangeProbab = 0.050000001;
			reloadTime = 0.2;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"A3\Sounds_F\weapons\Rockets\Titan_2",
					1.7782794,
					1,
					1500
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			burst = 12;
			autoFire = 0;
			artilleryDispersion = 15;
			artilleryCharge = 0.25;
			soundBurst = 0;
			aiRateOfFire = 0.80000001;
			aiRateOfFireDistance = 2500;
		};
		class Medium : Close
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Medium0";
			minRange = 3100;
			minRangeProbab = 0.15000001;
			midRange = 12000;
			midRangeProbab = 0.55000001;
			maxRange = 18400;
			maxRangeProbab = 0.050000001;
			artilleryDispersion = 0.5;
			artilleryCharge = 0.5;
			aiRateOfFire = 1.8;
			aiRateOfFireDistance = 12000;
		};
		class Far : Close
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Far0";
			minRange = 7100;
			minRangeProbab = 0.15000001;
			midRange = 25000;
			midRangeProbab = 0.44999999;
			maxRange = 40000;
			maxRangeProbab = 0.050000001;
			artilleryDispersion = 0.5;
			artilleryCharge = 0.75;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 25000;
		};
		class Full : Close
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Full0";
			minRange = 12800;
			minRangeProbab = 0.15000001;
			midRange = 45000;
			midRangeProbab = 0.34999999;
			maxRange = 80000;
			maxRangeProbab = 0.050000001;
			artilleryDispersion = 0.5;
			artilleryCharge = 1;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 45000;
		};
		class Mode_1 : Close
		{
			displayName = "1000m-1300m";
			artilleryCharge = 0.13500001;
			minRange = 1000;
			minRangeProbab = 0.15000001;
			midRange = 1150;
			midRangeProbab = 0.64999998;
			maxRange = 1300;
			maxRangeProbab = 0.050000001;
		};
		class Mode_2 : Close
		{
			displayName = "1300m-1700m";
			artilleryCharge = 0.153;
			minRange = 1300;
			minRangeProbab = 0.15000001;
			midRange = 1500;
			midRangeProbab = 0.64999998;
			maxRange = 1700;
			maxRangeProbab = 0.050000001;
		};
		class Mode_3 : Close
		{
			displayName = "1700m-2200m";
			artilleryCharge = 0.175;
			minRange = 1700;
			minRangeProbab = 0.15000001;
			midRange = 1950;
			midRangeProbab = 0.64999998;
			maxRange = 2200;
			maxRangeProbab = 0.050000001;
		};
		class Mode_4 : Close
		{
			displayName = "2200m-2900m";
			artilleryCharge = 0.2;
			minRange = 2200;
			minRangeProbab = 0.15000001;
			midRange = 2550;
			midRangeProbab = 0.64999998;
			maxRange = 2900;
			maxRangeProbab = 0.050000001;
		};
		class Mode_5 : Close
		{
			displayName = "2900m-3800m";
			artilleryCharge = 0.228;
			minRange = 2900;
			minRangeProbab = 0.15000001;
			midRange = 3350;
			midRangeProbab = 0.64999998;
			maxRange = 3800;
			maxRangeProbab = 0.050000001;
		};
		class Mode_6 : Close
		{
			displayName = "3800m-5000m";
			artilleryCharge = 0.26100001;
			minRange = 3800;
			minRangeProbab = 0.15000001;
			midRange = 4400;
			midRangeProbab = 0.64999998;
			maxRange = 5000;
			maxRangeProbab = 0.050000001;
		};
		class Mode_7 : Close
		{
			displayName = "5000m-6600m";
			artilleryCharge = 0.30000001;
			minRange = 5000;
			minRangeProbab = 0.15000001;
			midRange = 5800;
			midRangeProbab = 0.64999998;
			maxRange = 6600;
			maxRangeProbab = 0.050000001;
		};
		class Mode_8 : Close
		{
			displayName = "6600m-8500m";
			artilleryCharge = 0.34099999;
			minRange = 6600;
			minRangeProbab = 0.15000001;
			midRange = 7550;
			midRangeProbab = 0.64999998;
			maxRange = 8500;
			maxRangeProbab = 0.050000001;
		};
		class Mode_9 : Close
		{
			displayName = "8500m-11000m";
			artilleryCharge = 0.38800001;
			minRange = 8500;
			minRangeProbab = 0.15000001;
			midRange = 9750;
			midRangeProbab = 0.64999998;
			maxRange = 11000;
			maxRangeProbab = 0.050000001;
		};
		class Mode_10 : Close
		{
			displayName = "11000m-14000m";
			artilleryCharge = 0.44;
			minRange = 11000;
			minRangeProbab = 0.15000001;
			midRange = 12500;
			midRangeProbab = 0.64999998;
			maxRange = 14000;
			maxRangeProbab = 0.050000001;
		};
		class Mode_11 : Close
		{
			displayName = "14000m-18000m";
			artilleryCharge = 0.495;
			minRange = 14000;
			minRangeProbab = 0.15000001;
			midRange = 16000;
			midRangeProbab = 0.64999998;
			maxRange = 18000;
			maxRangeProbab = 0.050000001;
		};
		class Mode_12 : Close
		{
			displayName = "18000m-23000m";
			artilleryCharge = 0.56;
			minRange = 18000;
			minRangeProbab = 0.15000001;
			midRange = 20500;
			midRangeProbab = 0.64999998;
			maxRange = 23000;
			maxRangeProbab = 0.050000001;
		};
		class Mode_13 : Close
		{
			displayName = "23000m-30000m";
			artilleryCharge = 0.639;
			minRange = 23000;
			minRangeProbab = 0.15000001;
			midRange = 26500;
			midRangeProbab = 0.64999998;
			maxRange = 30000;
			maxRangeProbab = 0.050000001;
		};
		class Mode_14 : Close
		{
			displayName = "30000m-40000m";
			artilleryCharge = 0.74000001;
			minRange = 30000;
			minRangeProbab = 0.15000001;
			midRange = 35000;
			midRangeProbab = 0.64999998;
			maxRange = 40000;
			maxRangeProbab = 0.050000001;
		};
		class Mode_15 : Close
		{
			displayName = "40000m-52000m";
			artilleryCharge = 0.84200001;
			minRange = 40000;
			minRangeProbab = 0.15000001;
			midRange = 46000;
			midRangeProbab = 0.64999998;
			maxRange = 52000;
			maxRangeProbab = 0.050000001;
		};
		class Mode_16 : Close
		{
			displayName = "52000m-67000m";
			artilleryCharge = 0.95999998;
			minRange = 52000;
			minRangeProbab = 0.15000001;
			midRange = 59500;
			midRangeProbab = 0.64999998;
			maxRange = 67000;
			maxRangeProbab = 0.050000001;
		};
	};
};