class CfgPatches
{
	class 101st_EWEB
	{
		units[]=
		{
			"101st_EWEB"
		};
		weapons[]={};
		magazines[]={};
		ammo[]=
		{
			"101st_PlasmaBase_Turret"
		};
	};
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgDestructPos
{
	scope=1;
	class DelayedDestruction;
	class DelayedDestructionAmmo: DelayedDestruction
	{
		timeBeforeHiding="21";
		hideDuration="10";
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class ViewGunner;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class 101st_EWEB_base: StaticMGWeapon
	{
		author="DBA";
		_generalMacro="HMG_01_base_F";
		scope=0;
		displayName="EWEB Stationary Turret";
		class Armory
		{
			description="";
		};
		armor=75;
		model="101st_Aux_Mod\Addons\DBA_CIS\DBA_Vehicles\DBA_GroundVehicles\DBA_EWEB\eweb.p3d";
		editorSubcategory="EdSubcat_Turrets";
		picture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		UiPicture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		threat[]={1,0.30000001,0.30000001};
		cost=150000;
		getInAction="";
		getOutAction="";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_F_Gamma\data\StaticTurret_01.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_03_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				optics=0;
				minElev=-10;
				maxElev=40;
				minTurn=-360;
				maxTurn=360;
				animationSourceBody="Mainturret";
				Body="Mainturret";
				animationSourceGun="Maingun";
				Gun="Maingun";
				inGunnerMayFire=1;
				selectionFireAnim="zasleh";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",
					1.4125376,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",
					1.4125376,
					1,
					30
				};
				weapons[]=
				{
					"101st_EWEB_Repeater"
				};
				magazines[]=
				{
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
				};
				gunnerAction="RepeaterGunner";
				memoryPointGunnerOptics="gunnerview";
				gunnerLeftHandAnimName="Heavygun";
				gunnerRightHandAnimName="Heavygun";
				gunnergetInAction="";
				gunnergetOutAction="";
				GunnerName="Gunner";
				gunnerForceOptics=0;
				
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				ejectDeadGunner=1;
			};
		};
		class AnimationSources
		{
			class Minigun
			{
				source="revolving";
				weapon="3AS_HeavyRepeater";
			};
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.001,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			5
		};
	};
	class 101st_EWEB: 101st_EWEB_base
	{
		author="3AS Mod Team + Dutch";
		editorPreview="3as\3as_static\images\3AS_StationaryTurret.jpg";
		_generalMacro="B_HMG_01_F";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=0;
		displayName="EWEB Stationary Turret";
		faction="O_DBA_CIS_F";
		crew="O_DBA_CIS_B1_Droid_F";
		editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
				};
			};
		};
	};
};
class CfgWeapons
{
	class Mgun;
	class LMG_RCWS;
	class 101st_EWEB_Repeater: LMG_RCWS
	{
		displayName="CIS EWEB Repeater";
		magazineReloadTime=15;
		ballisticsComputer=2;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		class gunParticles
		{
			class effect2
			{
				positionName="machinegun_end";
				directionName="machinegun_beg";
				effectName="MachineGun1";
			};
		};
		class manual: Mgun
		{
			displayName="Heavy Repeater";
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
					"101st_Aux_Mod\Addons\DBA_CIS\DBA_Vehicles\DBA_GroundVehicles\DBA_EWEB\eweb.ogg",
					0.94999999,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1,
				};
			};
			soundContinuous=0;
			soundBurst=0;
			multiplier=3;
			reloadTime=0.1;
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
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_dry",
			1,
			1,
			10
		};
		magazines[]=
		{
			"DBA_lmg_red_x500_mag"
		};
	};
};
class CfgMagazines
{
	class 200Rnd_65x39_Belt;
	class 101st_HeavyRepeaterCell: 200Rnd_65x39_Belt
	{
		author="Dutch";
		count=500;
		ammo="101st_PlasmaBase_Turret";
		tracersEvery=1;
		displayName="Repeater Cells";
		descriptionShort="";
	};
};
class CfgAmmo
{
	class 101st_Sniper_Ammo_Red;
	class 101st_PlasmaBase_Turret: 101st_Sniper_Ammo_Red
	{
		hit=30;
		caliber=07;
	};
};
