class CfgPatches
{
	class 101st_Crab
	{
		units[]=
		{
			"101st_Crab_Droid", 
		};
		weapons[]={};
		magazines[]={};
		ammo[]=
		{};
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
	class 101st_Crab_Droid: StaticMGWeapon
	 {
		author="Dutch";
		displayName="LM-432 Crab Droid (Prototype) ";
		armor=325;
		explosionshielding=100;
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Vehicles\DBA_GroundVehicles\DBA_CRAB\Crab.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_CIS\DBA_Vehicles\DBA_GroundVehicles\DBA_CRAB\data\Body_co.paa", "101st_Aux_Mod\Addons\DBA_CIS\DBA_Vehicles\DBA_GroundVehicles\DBA_CRAB\data\Legs_co.paa"};
        editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
        side = 0;
		crew = "B_UAV_AI";
        faction = "O_DBA_CIS_F";
        editorPreview = "101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Crab_Droid_F.jpg";
		scope=2;
		forceInGarage=1;
		scopeCurator=2;
		class Armory
		{
			description="";
		};
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
				turretInfoType = "RscOptics_crows";
				animationSourceBody = "Mainturret";
				Body = "Mainturret";
				animationSourceGun = "Maingun";
				Gun = "Maingun";
				optics = 0;
				minElev = -5;
				maxElev = 35;
				minTurn = -360;
				maxTurn = +360;
				selectionFireAnim = "zasleh";
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				weapons[]=
				{
					"DBA_25mw_H96C_AC"
				};
				magazines[]=
				{
					"DBA_25mm_UB5_x50_mag", "DBA_25mm_UB5_x50_mag", "DBA_25mm_UB5_x50_mag", "DBA_25mm_UB5_x50_mag", "DBA_25mm_UB5_x50_mag", "DBA_25mm_UB5_x50_mag", "DBA_25mm_UB5_x50_mag", "DBA_25mm_UB5_x50_mag"
				};
				memoryPointGunnerOptics = "gunnerview";
				//gunnerLeftHandAnimName = "Heavygun";
				//gunnerRightHandAnimName = "Heavygun";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnerForceOptics = 1;
				memoryPointGun[] = {"usti hlavne"};
				//gunBeg[]={"Usti hlavne L","Usti hlavne R"}; 
				//Gunend[]={"Konec hlavne L","Konec hlavne R"};
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class HitPoints
				{
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "gun";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun
					{
						armor = 1;
						name = "turret";
						class DestructionEffects
						{
							class Smoke
							{
								simulation = "particles";
								type = "WeaponWreckSmoke";
								position = "destructionEffect";
								intensity = 1;
								interval = 1;
								lifeTime = 5;
							};
						};
					};
				};
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
};
