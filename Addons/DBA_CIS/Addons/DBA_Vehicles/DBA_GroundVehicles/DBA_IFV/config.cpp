class CfgPatches 
{
	class DBA_Cannons
	{
		requiredAddons[] = {"A3_Armor_F_Beta"};
		units[] = {"DBA_Viper", "DBA_Technical", "DBA_Marid", "DBA_Skorpion"};
		weapons[] = {};
	};
};
class Mode_SemiAuto;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class ViewGunner;
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class RCWSOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class Car_F;
	class Wheeled_APC_F: Car_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class LT_01_base_F;
	class LT_01_cannon_base_F: LT_01_base_F
	{
		class components;
		class Turrets
		{
			class MainTurret;
		};
	};
	class I_LT_01_cannon_F: LT_01_cannon_base_F
	{
		class components;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Offroad_01_military_base_F;
	class Offroad_01_armed_base_F: Offroad_01_military_base_F
	{
		class Turrets
		{
			class M2_Turret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};	
	class DBA_Technical: Offroad_01_armed_base_F
	{
		displayName="Technical";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		side=0;
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		faction="O_DBA_CIS_F";
		editorSubcategory="RD501_Editor_Category_IFV";
		vehicleClass="RD501_Vehicle_Class_IFV";
		class Turrets: Turrets
		{
			class Laser_Turret: M2_Turret
			{
				weapons[]=
				{
					"DBA_Ground_lmg_Generic"
				};
				magazines[]=
				{
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag",
					"DBA_lmg_red_x500_mag"
				};
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewGunner
				{
				};
			};
		};
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		class Turrets
		{
			class MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class DBA_Marid: O_APC_Wheeled_02_rcws_v2_F
	{
		displayName="Marid IFV";
		textureList[]={};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		forceInGarage=1;
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		faction="O_DBA_CIS_F";
		editorSubcategory="RD501_Editor_Category_IFV";
		vehicleClass="RD501_Vehicle_Class_IFV";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics=0;
				gunnerAction="Commander_APC_Wheeled_02_rcws_F_out";
				gunnerInAction="Commander_APC_Wheeled_02_rcws_F_in";
				body="MainTurret";
				gun="MainGun";
				weapons[]=
				{
					"GMG_40mm",
					"DBA_Ground_LMG_Generic",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"DBA_LMG_orange_x500_mag",
					"DBA_LMG_orange_x500_mag",
					"DBA_LMG_orange_x500_mag",
					"DBA_LMG_orange_x500_mag",
					"SmokeLauncherMag"
				};
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				gunnerName="$STR_POSITION_COMMANDER";
				commanding=1;
				primaryGunner=1;
				primaryObserver=0;
				LODOpticsIn=0;
				viewGunnerInExternal=1;
				forceHideGunner=0;
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				startEngine=0;
				usePip=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				gunnerOutOpticsModel="";
				gunnerOpticsEffect[]={};
				stabilizedInAxes=3;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerRightHandAnimName="turret_control";
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="commanderview";
				selectionFireAnim="zasleh2";
				turretInfoType="RscOptics_crows";
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				minElev=-15;
				maxElev=30;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="otocvez";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.40000001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="otochlaven";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.2;
						radius=0.2;
						isGun=1;
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.31;
					minFov=0.034000002;
					maxFov=0.31;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
				};
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
			};
			class CommanderOptics;
		};
	};
	class DBA_Skorpion: I_LT_01_cannon_F
	{
		displayName="Skorpion Recon Tank";
		textureList[]={};
		forceInGarage=1;
		side=0;
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		faction="O_DBA_CIS_F";
		editorSubcategory="RD501_Editor_Category_IFV";
		vehicleClass="RD501_Vehicle_Class_IFV";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"SmokeLauncher",
					"DBA_Ground_HMG_Generic"
				};
				magazines[]=
				{
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"SmokeLauncherMag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag",
					"DBA_HMG_red_x500_mag"
				};
			};
		};
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F
	{
		class Components;
	};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class DBA_Viper: O_APC_Tracked_02_cannon_F
	{
		displayName="Viper Heavy APC";
		textureList[]={};
		forceInGarage=1;
		side=0;
		crew="O_DBA_CIS_B1_Crew_Droid_F";
		faction="O_DBA_CIS_F";
		editorSubcategory="RD501_Editor_Category_IFV";
		vehicleClass="RD501_Vehicle_Class_IFV";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"DBA_Ground_AC_Generic",
					"missiles_titan"
				};
				magazines[]=
				{
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"DBA_AC_red_x100_mag",
					"2Rnd_GAT_missiles_O",
					"2Rnd_GAT_missiles_O"
				};
			};
		};
	};
};
