class CfgPatches
{
	class DBA_TurboLaser
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"A3_Static_F_Jets"
		};
		units[] =
		{
			"DBA_TurboLaserCannon",
			"DBA_TurboLaserCannonOPFOR"
		};
		weapons[] = {};
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
class VehicleSystemsTemplateLeftPilot : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Eventhandlers;
class CfgVehicles
{
	class NonStrategic;
	class StaticShip;
	class Building;
	class House_F;
	class FloatingStructure_F;
	class thingx;
	class Ship;
	class LandVehicle;
	class StaticWeapon : LandVehicle
	{
		class Turrets;
		class HitPoints;
	};
	class StaticMGWeapon : StaticWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
		class Components;
	};
	class DBA_TurboLaserCannon_Base : StaticMGWeapon
	{
		author = "Vulgar";
		scope = 0;
		scopeCurator = 0;
		vehicleClass = "Autonomous";
		picture = "\A3\Static_F_Jets\AAA_system_01\Data\UI\AAA_system_01_picture_CA.paa";
		uiPicture = "\A3\Static_F_Jets\AAA_system_01\Data\UI\AAA_system_01_picture_CA.paa";
		icon = "\A3\Static_F_Jets\AAA_system_01\Data\UI\AAA_system_01_icon_CA.paa";
		displayName = "TurboLaser Tower";
		hasDriver = 0;
		hasGunner = 1;
		isUav = 1;
		getInRadius = 0;
		threat[] = { 0.30000001,0.30000001,1 };
		cost = 150000;
		accuracy = 1;
		editorPreview = "\A3\EditorPreviews_F_Jets\Data\Cfgvehicles\B_AAA_system_01_F.jpg";
		unitInfoType = "RscUnitInfoTank";
		model = "101st_Aux_Mod\Addons\DBA_Imperial\DBA_Vehicles\DBA_GroundVehicles\Turbolaser\DBA_Turbolaser.p3d";
		hiddenSelections[] =
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Imperial\DBA_Vehicles\DBA_GroundVehicles\Turbolaser\Data\Turbo_Laser_Tower_Body_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Imperial\DBA_Vehicles\DBA_GroundVehicles\Turbolaser\Data\Turbo_Laser_Gun_CO.paa"
		};
		extCameraPosition[] = { 0,1.5,-10 };
		canFloat = 0;
		animationList[] = {};
		enableGPS = 1;
		radartype = 2;
		radarTarget = 1;
		radarTargetSize = 0.89999998;
		visualTarget = 1;
		visualTargetSize = 1.2;
		irTarget = 1;
		irTargetSize = 0.5;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		reportOwnPosition = 1;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 16;
		uavCameraGunnerPos = "pos_gunner_view";
		uavCameraGunnerDir = "pos_gunner_view_dir";
		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 100;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = 3500;
						maxTrackableSpeed = 800;
						angleRangeHorizontal = 60;
						angleRangeVertical = 40;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 7000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						aimDown = -45;
						maxTrackableSpeed = 1388.89;
					};
					class DataLinkSensorComponent : SensorTemplateDataLink
					{
					};
				};
			};
		};
		armor = 80;
		armorStructural = 2;
		damageResistance = 0.0040000002;
		damageEffect = "AirDestructionEffects";
		class HitPoints : HitPoints
		{
			class Hull
			{
				armor = 3;
				name = "hull";
				visual = "zbytek";
				radius = 0.25;
				minimalHit = 0.050000001;
				explosionShielding = 0.2;
				depends = "Total";
				passThrough = 0.1;
				material = 51;
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				turretinfotype = "RscOptics_APC_Tracked_01_gunner";
				animationSourceBody = "Mainturret";
				Body = "Mainturret";
				animationSourceGun = "Maingun";
				Gun = "Maingun";
				optics = 1;
				minElev = -5;
				maxElev = 35;
				minTurn = -360;
				maxTurn = +360;
				hasgunner = 1;
				gunnerName = "TurboLaser Gunner";
				primary = 1;
				primaryGunner = 1;
				startEngine = 0;
				enableManualFire = 1;
				selectionFireAnim = "zasleh";
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				memoryPointGunnerOptics = "pos_gunner_view";
				//gunnerLeftHandAnimName = "Heavygun";
				//gunnerRightHandAnimName = "Heavygun";
				displayName = "";
				gunnerForceOptics = 1;
				memoryPointGun[] = {"usti hlavne","usti hlavne2" };
				uavCameraGunnerPos = "pos_gunner_view";
				uavCameraGunnerDir = "pos_gunner_view_dir";
				memoryPointGunnerOptics = "pos_gunner_view";

				forceHideGunner = 1;
				gunnerforceoptics = 1;
				gunnerOutForceOptics = 1;
				viewgunnerinExternal = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				castGunnerShadow = 0;
				showAllTargets = 2;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.46599999;
						minFov = 0.46599999;
						maxFov = 0.46599999;
						visionMode[] =
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[] = { 0,1 };
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium : Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093000002;
						minFov = 0.093000002;
						maxFov = 0.093000002;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow : Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov = 0.028999999;
						minFov = 0.028999999;
						maxFov = 0.028999999;
					};
				};
				weapons[] =
				{
					"DBA_305mw_VKM8_Cannon"
				};
				magazines[] =
				{
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
					"DBA_305mm_M19K_HE_x2_mag",
				};
				class Components : Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = { 16000,8000,4000,2000 };
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = { 16000,8000,4000,2000 };
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class AttributeValues
		{
			RadarUsageAI = 1;
		};
	};
	class DBA_TurboLaserCannon : DBA_TurboLaserCannon_Base
	{
		class SimpleObject
		{
			eden = 1;
			verticalOffset = 2.467;
			verticalOffsetWorld = -0.039000001;
			init = "''";
		};
		author = "Vulgar";
		scope = 2;
		scopeCurator = 2;
		side=1;
		faction="B_DBA_Republic_F";
		crew = "B_UAV_AI";
		typicalCargo[] =
		{
			"B_UAV_AI"
		};
	};

	class DBA_TurboLaserCannonOPFOR : DBA_TurboLaserCannon_Base
	{
		class SimpleObject
		{
			eden = 1;
			verticalOffset = 2.467;
			verticalOffsetWorld = -0.039000001;
			init = "''";
		};
		author = "Vulgar";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "O_DBA_CIS_F";
		crew = "B_UAV_AI";
		typicalCargo[] =
		{
			"B_UAV_AI"
		};
	};
};
