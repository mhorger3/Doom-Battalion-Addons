class CfgPatches
{
	class 101st_DSD
	{
		units[]=
		{
			"101st_DSD_Droid", 
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
	class 101st_DSD_Droid: StaticMGWeapon
	{
		displayName="CIS Dwarf Spider Droid";
		armor=200;
		explosionshielding=100;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		crew = "B_UAV_AI";
		side = 0;
		faction = "O_DBA_CIS_F";
		model = "101st_Aux_Mod\Addons\DBA_CIS\DBA_Vehicles\DBA_GroundVehicles\DBA_DSD\DSD.p3d";
		hiddenSelections[] = {"body", "lights"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\DBA_CIS\DBA_Vehicles\DBA_GroundVehicles\DBA_DSD\DSD_Main_CO.paa","101st_Aux_Mod\Addons\DBA_CIS\DBA_Vehicles\DBA_GroundVehicles\DBA_DSD\DSD_Lights_CO.paa"};
		editorSubcategory = "O_DBA_CIS_Turrets";
        vehicleClass = "O_DBA_CIS_Turrets";
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
		
		destrType = "DestructBuilding"; 
		explosionEffect = "FuelExplosion";
		class DestructionEffects 
		{
			class SmokeSmall
			{
				simulation = "particles";
				type = "BarelDestructionSmoke";
				position[] = {0,0,0};
				intensity = 0.2;
				interval = 1;
				lifeTime = 1;
			};
			class Sound
			 {
				position = "destructionEffect";
				simulation = "sound";
				type = "Fire";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
					"DBA_20mw_HH30C_AC"
				};
				magazines[]=
				{
					"DBA_20mm_UR18_x20_mag", "DBA_20mm_UR18_x20_mag", "DBA_20mm_UR18_x20_mag", "DBA_20mm_UR18_x20_mag", "DBA_20mm_UR18_x20_mag"
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
