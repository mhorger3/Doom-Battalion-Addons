class CfgPatches
{
	class DBA_TIEPhantom
	{
		requiredAddons[] =
		{
			"A3_Air_F_Exp"
		};
		requiredVersion = 0.1;
		units[] =
		{
			"DBA_TIEPhantom_VTOL_Dynamic_F",	
			"DBA_TIEPhantomShield"
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
class CfgVehicles
{
	class Plane;
	class Plane_Base_F : Plane
	{
		class HitPoints;
	};
	class VTOL_Base_F : Plane_Base_F
	{
		class AnimationSources;
		class EventHandlers;
		class NewTurret;
		class CargoTurret;
		class Components;
		class HitPoints : HitPoints
		{
			class HitHull;
		};
		class ViewPilot;
	};
	class DBA_TIEPhantom_VTOL_Base_F : VTOL_Base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "VTOL_02_base_F";
		cloakStatus = false;
		scope = 0;
		scopeCurator = 0;
		displayName = "$STR_A3_CfgVehicles_VTOL_02_base_F0";
		model = "DBA_Imperial\Addons\DBA_Vehicles\DBA_Airvehicles\DBA_TIEPhantom\DBA_TIEPhantom.p3d";
		icon = "\A3\Air_F_Exp\VTOL_02\Data\UI\Map_VTOL_02_vehicle_CA.paa";
		picture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_vehicle_CA.paa";
		overviewPicture = "\A3\Data_F_Exp\Images\VehicleXian_ca.paa";
		vehicleClass = "Air";
		editorSubcategory = "EdSubcat_Planes";
		destrType = "DestructWreck";
		driverAction = "pilot_VTOL_02";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		driverCompartments = "Compartment1";
		driverCanEject = 1;
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "Stick_control_1";
		driverLeftLegAnimName = "Pedals_1_left_2";
		driverRightLegAnimName = "Pedals_1_right_2";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		memoryPointsGetInDriver = "GetIn_pilot_pos";
		memoryPointsGetInDriverDir = "GetIn_pilot_dir";
		memoryPointsGetInCargo = "GetIn_cargo_pos";
		memoryPointsGetInCargoDir = "GetIn_cargo_dir";
		memoryPointLRocket = "ProjectileLeft_Dir";
		memorypointlmissile = "ProjectileLeft_Dir";
		memoryPointRRocket = "ProjectileRight_Dir";
		memorypointRmissile = "ProjectileRight_Dir";
		memoryPointCM[] =
		{
			"Flare_launcher_1_pos",
			"Flare_launcher_2_pos"
		};
		memoryPointCMDir[] =
		{
			"Flare_launcher_1_dir",
			"Flare_launcher_2_dir"
		};
		extCameraPosition[] = { 0,1,-25 };
		class ViewPilot : ViewPilot
		{
			initAngleX = 9;
		};
		cargoAction[] =
		{
			"passenger_generic01_foldhands"
		};
		cargoGetInAction[] =
		{
			"GetInHigh"
		};
		cargoGetOutAction[] =
		{
			"GetOutHigh"
		};
		cargoCompartments[] =
		{
			"Compartment3"
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "Exhaust_1_pos";
				direction = "Exhaust_1_dir";
				effect = "ExhaustsEffectVTOL1HP";
				engineIndex = 0;
			};
			class Exhaust2
			{
				position = "Exhaust_2_pos";
				direction = "Exhaust_2_dir";
				effect = "ExhaustsEffectVTOL1HP";
				engineIndex = 1;
			};
			class Exhaust3
			{
				position = "Exhaust_3_pos";
				direction = "Exhaust_3_dir";
				effect = "ExhaustsEffectVTOL1HP";
				engineIndex = 2;
			};
		};
		accuracy = 0.5;
		driverForceOptics = true;
		armor = 325;
		armorStructural = 2;
		explosionShielding = 1;
		epeImpulseDamageCoef = 50;
		waterLeakiness = 8;
		waterResistanceCoef = 0.029999999;
		ejectSpeed[] = { 0,-2,0 };
		damageResistance = 0.00039999999;
		laserScanner = 1;
		showAllTargets = 4;
		showCrewAim = 0;
		radarTargetSize = 1.4;
		visualTargetSize = 1.2;
		irTargetSize = 1.4;
		lockDetectionSystem = "2 + 8 + 4 + 16";
		incomingMissileDetectionSystem = "2 + 8 + 16";
		maximumLoad = 3000;
		supplyRadius = 5;
		getInRadius = 3;
		selectionRotorStill = "Rotors_static";
		selectionRotorMove = "Rotors_blur";
		cabinOpening = 0;
		gearRetracting = 0;
		memoryPointGun[] = { "Laser_FarLeft","Laser_FarRight","Laser_MidLeft","Laser_MidRight","Laser_Upper" };
		//	gunBeg = "Cannon_barrel_end";
		//	gunEnd = "Cannon_barrel_beg";
		weapons[] =
		{
			"DBA_30mw_GH38C_AC",
			"DBA_305mw_VKM8_Cannon",
			"gatling_30mm_VTOL_02",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"DBA_30mm_PL84_x902_mag",
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
			"250Rnd_30mm_HE_shells_Tracer_Green",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		minGunElev = -5;
		maxGunElev = 5;
		minGunTurn = 8;
		maxGunTurn = 8;
		maxSpeed = 975;
		landingAoa = "10*3.1415/180";
		landingSpeed = 0;
		stallSpeed = 150;
		stallWarningTreshold = 0.2;
		wheelSteeringSensitivity = 0.55;
		airBrake = 1;
		airBrakeFrictionCoef = 5.0;
		flaps = 1;
		flapsFrictionCoef = 0.75;
		angleOfIndicence = "1*3.1415/180";
		envelope[] = { 0,0.0099999998,0.2,4,6,7.5999999,8.3999996,9.1999998,9.3999996,9.6000004,9.6999998,9.8000002,8,1 };
		altNoForce = 11000;
		altFullForce = 5500;
		throttleToThrustLogFactor = 2;
		thrustCoef[] = { 1.2,1.2,1.2,1.10,1.10,1.10,1.10,1.0700001,0.99000001,0.8,0.7,0.6,0.35 };
		aileronSensitivity = 0.555;
		aileronCoef[] = { 0.60000002,0.80000001,1,1.1,1.2,1.2,0.40000001 };
		elevatorSensitivity = 0.89999998;
		elevatorCoef[] = { 0.2,0.38999999,0.50999999,0.60000002,0.68000001,0.75,0.80000001,0.85000002,0.89999998,0.74000001,0.30000001 };
		rudderInfluence = 0.866;
		rudderCoef[] = { 0.2,0.5,1,1.5,1.8,2.0999999,2.4000001,2.5,2.5999999,2.7,2.7,0.80000001,0.40000001 };
		aileronControlsSensitivityCoef = 2;
		elevatorControlsSensitivityCoef = 4;
		rudderControlsSensitivityCoef = 2;
		draconicForceXCoef = 14;
		draconicForceYCoef = 0.55;
		draconicForceZCoef = 0.575;
		draconicTorqueXCoef[] = { 14,12,11.2,10.6,9.8999996,9.6000004,9.6999998,10.5,11,11.5,12 };
		draconicTorqueYCoef[] = { 0.5,1,2,2.3,3,2.5999999,2.4000001,2.2,2,1.9,1.8 };
		vtol = 4;
		VTOLYawInfluence = 6;
		VTOLPitchInfluence = 2;
		VTOLRollInfluence = 8;
		maxOmega = 3500;
		acceleration = 535;
		defaultUserMFDvalues[] = { 0.15000001,1,0.15000001,1 };
		hiddenSelections[] =
		{
			"Camo_1",
		};
		class TextureSources
		{
			class Hex
			{
				displayName = "$STR_A3_TEXTURESOURCES_HEX0";
				author = "$STR_A3_BOHEMIA_INTERACTIVE";
				factions[] =
				{
					"OPF_F",
					"OPF_T_F"
				};
				textures[] =
				{
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa",
				};
			};
			class GreenHex
			{
				displayName = "$STR_A3_TEXTURESOURCES_GREENHEX0";
				author = "$STR_A3_BOHEMIA_INTERACTIVE";
				factions[] =
				{
					"OPF_F",
					"OPF_T_F"
				};
				textures[] =
				{
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_ghex_CO.paa",
				};
			};
			class Grey
			{
				displayName = "$STR_A3_TEXTURESOURCES_GREY0";
				author = "$STR_A3_BOHEMIA_INTERACTIVE";
				factions[] =
				{
					"OPF_F",
					"OPF_T_F"
				};
				textures[] =
				{
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa",
				};
			};
		};
		textureList[] =
		{
			"Hex",
			1,
			"GreenHex",
			1,
			"Grey",
			1
		};
		class EventHandlers : EventHandlers
		{
			postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
			init = "_this execVM 'DBA_StealthTech_fnc_shield';";
		};
		class HitPoints : HitPoints
		{
			class HitHull : HitHull
			{
				armor = 3;
				explosionShielding = 1;
				name = "HitHull";
				passThrough = 0.5;
				visual = "Hit_Hull";
				radius = 0.30000001;
				minimalHit = 0.02;
				depends = "Total";
				material = -1;
			};
			class HitEngine : HitHull
			{
				armor = 3.25;
				explosionShielding = 0.5;
				name = "HitEngine";
				passThrough = 0.1;
				visual = "Hit_Engine";
				radius = 0.2;
				minimalHit = 0.0099999998;
			};
			class HitAvionics : HitHull
			{
				armor = 2;
				explosionShielding = 1;
				name = "HitAvionics";
				passThrough = 0.2;
				visual = "Hit_Avionics";
				radius = 0.2;
				depends = "0";
			};
			class HitFuel : HitHull
			{
				armor = 2.75;
				explosionShielding = 0.5;
				name = "HitFuel";
				passThrough = 0.5;
				visual = "Hit_Fuel";
				radius = 0.2;
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitShield : HitHull
			{
				armor = 3;
				explosionShielding = 1;
				name = "HitShield";
				passThrough = 0;
				visual = "Hit_Hull";
				radius = 0.30000001;
				minimalHit = 0.02;
				depends = "Total";
				material = -1;
			};
		};
		class AnimationSources : AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "3AS_GATRepeater";
			};
			class Rockets_revolving_source
			{
				source = "revolving";
				weapon = "rockets_Skyfire";
			};
			class Missiles_revolving_source
			{
				source = "revolving";
				weapon = "missiles_SCALPEL";
			};
			class Cannon_revolving_source
			{
				source = "revolving";
				weapon = "gatling_30mm_VTOL_02";
			};
			class Cannon_muzzleflash_source
			{
				source = "reload";
				weapon = "gatling_30mm_VTOL_02";
			};
			class HideWeapons
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class StealthMode {
				displayName = "Engage Stealth Mode";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class ShieldStatus {
				displayName = "ShieldStatus";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		lightOnGear = 1;
	/*	aggregateReflectors[] =
		{

			{
				"Light_1",
				"Light_2",
				"Light_3",
				"Light_4",
				"Light_5",
			}
		};
		class Reflectors
		{
			class Light_1
			{
				color[] = { 7000,7500,10000 };
				ambient[] = { 70,75,100 };
				intensity = 100;
				size = 3;
				innerAngle = 5;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				useFlare = 1;
				flareSize = 100;
				flareMaxDistance = 650;
				dayLight = 1;
				hitpoint = "";
				selection = "";
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 500;
					hardLimitEnd = 700;
				};
			};
			class Light_2 : Light_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
			};
			class Light_3 : Light_1
			{
				position = "Light_3_pos";
				direction = "Light_3_dir";
			};
			class Light_4 : Light_1
			{
				position = "Light_4_pos";
				direction = "Light_4_dir";
			};
			class Light_5 : Light_1
			{
				position = "Light_5_pos";
				direction = "Light_5_dir";
			};
		}; */
		memoryPointRDust = "WheelDust_right_pos";
		memoryPointLDust = "WheelDust_left_pos";
		dustEffect = "VTOLDust";
		waterEffect = "VTOLWater";
		reportOwnPosition = 1;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
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
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 120;
						angleRangeVertical = 80;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 40;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
					};
					class NVSensorComponent : SensorTemplateNV
					{
					};
				};
			};

		};
		memoryPointDriverOptics = "PilotCamera_pos";
		unitInfoType = "RscOptics_CAS_Pilot";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = "(30 / 120)";
					minFov = "(30 / 120)";
					maxFov = "(30 / 120)";
					directionStabilized = 1;
					visionMode[] =
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[] = { 0,1 };
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				class Medium : Wide
				{
					opticsDisplayName = "MFOV";
					initFov = "(6 / 120)";
					minFov = "(6 / 120)";
					maxFov = "(6 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow : Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(2 / 120)";
					minFov = "(2 / 120)";
					maxFov = "(2 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			driverForceOptics = true;
			minTurn = -0;
			maxTurn = 0;
			initTurn = 0;
			minElev = -0;
			maxElev = 0;
			initElev = 0;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 1;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};
	class DBA_TIEPhantom_VTOL_Base : DBA_TIEPhantom_VTOL_Base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "VTOL_02_infantry_base_F";
		displayName = "$STR_A3_CfgVehicles_VTOL_02_infantry_base_F0";
		scope = 0;
		scopeCurator = 0;
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_VTOL_02_infantry_base_F_Library0";
		};
	};
	class DBA_TIEPhantom_VTOL_Dynamic_Base_F : DBA_TIEPhantom_VTOL_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "VTOL_02_infantry_dynamicLoadout_base_F";
		class AnimationSources : AnimationSources
		{
			class HideWeapons
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonRight1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] =
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"UNI_SCALPEL"
						};
						turret[] = { 0 };
						UIposition[] = { 0.34999999,0.16 };
					};
					class PylonRight2 : PylonRight1
					{
						attachment = "PylonRack_19Rnd_Rocket_Skyfire";
						priority = 4;
						hardpoints[] =
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"UNI_SCALPEL"
						};
						UIposition[] = { 0.33000001,0.20999999 };
					};
					class PylonLeft2 : PylonRight2
					{
						mirroredMissilePos = 2;
						UIposition[] = { 0.33000001,0.34 };
					};
					class PylonLeft1 : PylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = { 0.34999999,0.38999999 };
					};
				};
				class presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] =
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] =
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] =
						{
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonRack_19Rnd_Rocket_Skyfire"
						};
					};
					class HAT
					{
						displayName = "$STR_A3_Heavy_AT_preset_displayName";
						attachment[] =
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
				};
			};
		};
	};
	class DBA_TIEPhantom_VTOL_Dynamic_F : DBA_TIEPhantom_VTOL_Dynamic_Base_F
	{
		author = "Vulgar";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_VTOL_02_infantry_dynamicLoadout_F.jpg";
		_generalMacro = "O_T_VTOL_02_infantry_dynamicLoadout_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "[DBA] TIE Phantom";
		side = 1;
		crew = "B_Fighter_Pilot_F";
		typicalCargo[] =
		{
			"B_Fighter_Pilot_F"
		};
		faction = "B_DBA_Imperial_F";
		textureList[] =
		{
			"GreenHex",
			1
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"
		};
	};

};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class proxyVTOL_02_vehicle_wreck_F : ProxyRetex
	{
		model = "\A3\Air_F_Exp\VTOL_02\VTOL_02_vehicle_wreck_F.p3d";
		hiddenSelections[] =
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
	};
};
