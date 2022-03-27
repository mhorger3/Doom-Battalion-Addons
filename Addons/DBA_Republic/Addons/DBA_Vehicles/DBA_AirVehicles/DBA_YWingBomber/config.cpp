class CfgPatches
{
	class DBA_YWingBomber
	{
		requiredAddons[] =
		{
			"A3_Air_F_Exp"
		};
		requiredVersion = 0.1;
		units[] =
		{
			"DBA_YWingBomber_VTOL_Dynamic_F"
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
	class DBA_YWingBomber_VTOL_Base_F : VTOL_Base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "VTOL_02_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "$STR_A3_CfgVehicles_VTOL_02_base_F0";
		model = "DBA_Republic\Addons\DBA_Vehicles\DBA_Airvehicles\DBA_YWingBomber\DBA_YWingBomber.p3d";
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
		memoryPointLRocket = "Rocket_1_pos";
		memorypointlmissile = "Bomb_1_pos";
		memoryPointRRocket = "Rocket_1_pos";
		memorypointRmissile = "Bomb_1_pos";
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
		memoryPointGun[] = { "z_gunL_muzzle","z_gunR_muzzle" };
		//	gunBeg = "Cannon_barrel_end";
		//	gunEnd = "Cannon_barrel_beg";

		weapons[] = { "dba_wynd_agm","DBA_ClusterBomb","DBA_SDBLauncher","DBA_LGBLauncher","DBA_23mw_GH197_AC","Laserdesignator_pilotCamera","CMFlareLauncher" };

		magazines[] = { "Laserbatteries","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine","DBA_HMG_red_x500_mag","DBA_HMG_red_x500_mag","DBA_agm_x6_mag","DBA_cluster_bomb_x4_mag","DBA_cluster_bomb_x4_mag","DBA_cluster_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_sdb_bomb_x4_mag","DBA_lgb_bomb_x4_mag","DBA_lgb_bomb_x4_mag","DBA_lgb_bomb_x4_mag","DBA_23mm_PS59_x400_mag" };

		minGunElev = -5;
		maxGunElev = 5;
		minGunTurn = 8;
		maxGunTurn = 8;
		maxSpeed = 715;
		landingAoa = 0.113446;
		landingSpeed = 250;
		engineMOI = 16;
		stallSpeed = 190;
		stallWarningTreshold = 0.07;
		wheelSteeringSensitivity = 1.3;
		airBrake = 1;
		airBrakeFrictionCoef = 2.2;
		flaps = 1;
		flapsFrictionCoef = 0.32;
		gearsUpFrictionCoef = 0.55;
		airFrictionCoefs0[] = { 0,0,0 };
		airFrictionCoefs1[] = { 0.1,0.52,0.0067 };
		airFrictionCoefs2[] = { 0.001,0.0054,7e-005 };
		angleOfIndicence = -0.00872665;
		envelope[] = { 0,0.07,0.28,0.83,1.11,1.74,2.51,3.41,4.46,5.64,6.96,8.42,8.8,9.11,9.38,9.45,9.43,9,8,7,6 };
		altNoForce = 15000;
		altFullForce = 4000;
		throttleToThrustLogFactor = 2;
		thrustCoef[] = { 1.28,1.33,1.37,1.4,1.41,1.39,1.36,1.33,1.29,1.25,1.2,1.15,1.05,0.5,0,0,0,0,0 };
		aileronSensitivity = 0.85;
		aileronCoef[] = { 0,0.1,0.3,0.6,0.8,0.95,1,1.02,1.03,1.04,1.04,1,0.9,0.7,0.3,0.2,0.15,0.1,0.1 };
		elevatorSensitivity = 0.95;
		elevatorCoef[] = { 0,0.2,0.95,0.8,0.75,0.7,0.65,0.6,0.55,0.5,0.46,0.32,0.29,0.16,0.14,0.12,0.1,0.09,0.08 };
		rudderInfluence = 0.966;
		rudderCoef[] = { 0,0.6,1.2,1.5,1.8,2,3.2,3.4,3.45,3.5,3.55,3.6,2.2,1.3,0.3,0.2,0.15,0.1,0.1 };
		aileronControlsSensitivityCoef = 3.6;
		elevatorControlsSensitivityCoef = 3.4;
		rudderControlsSensitivityCoef = 3.4;
		draconicForceXCoef = 13;
		draconicForceYCoef = 1.3;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = { 4.8,5,5.5,6.2,6.6,7.4,8,8.5,8,8.4,8.6,8.7,8.8,8.9,9,9.1 };
		draconicTorqueYCoef[] = { 12,7.5,4,1.5,0.1,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
		vtol = 4;
		VTOLYawInfluence = 6;
		VTOLPitchInfluence = 2;
		VTOLRollInfluence = 8;
		maxOmega = 2000;
		acceleration = 535;
		defaultUserMFDvalues[] = { 0.15000001,1,0.15000001,1 };
		hiddenselections[] =
		{
			"ballgun", "body", "cockpit", "leftwing", "r2", "rightwing",
		};
		hiddenselectionstextures[] =
		{
			"DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Ballgun_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Body_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\YWing\DBA_YWingBomber\Cockpit_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Left_wing_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\r2_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Right_wing_CO.paa"
		};
		class TextureSources
		{
			class RedWing
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
					"DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Red\Ballgun_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Red\Body_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\YWing\DBA_YWingBomber\Cockpit_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Red\Left_wing_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Red\r2_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Red\Right_wing_CO.paa"
				};
			};
			class GreenWing
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
					"DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Green\Ballgun_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Green\Body_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Green\Cockpit_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Green\Left_wing_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Green\r2_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Green\Right_wing_CO.paa"
				};
			};
			class YellowWing
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
					"DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Ballgun_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Body_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Cockpit_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Left_wing_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\r2_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Right_wing_CO.paa"
				};
			};
		};
		textureList[] =
		{
			"RedWing",
			1,
			"GreenWing",
			1,
			"YellowWing",
			1
		};
		class EventHandlers : EventHandlers
		{
			postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
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
			class HitEngine2 : HitHull
			{
				armor = 3.25;
				explosionShielding = 0.5;
				name = "HitEngine2";
				passThrough = 0.1;
				visual = "Hit_Engine2";
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
		};
		lightOnGear = 1;
		aggregateReflectors[] =
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
		};
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
		memoryPointDriverOptics = "pos_pilotcamera";
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
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -180;
			maxElev = 180;
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
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"3AS\3AS_BTLB\sounds\ywingsound.ogg",
					1.2,
					1,
					1200
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"3AS\3AS_BTLB\sounds\ywingsound.ogg",
					1.2,
					1.2,
					1400
				};
				frequency="1";
				volume="camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_ext",
					"db5",
					0.99000001,
					1700
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					"db-5",
					1,
					150
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"3AS\3AS_BTLB\sounds\ywingsoundinterrior.ogg",
					0.80000001,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"3AS\3AS_BTLB\sounds\ywingsoundinterrior.ogg",
					0.80000001,
					1.2
				};
				frequency="1";
				volume="(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int",
					"db0",
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					"db-6",
					1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
		};
	};
	class DBA_YWingBomber_VTOL_Base : DBA_YWingBomber_VTOL_Base_F
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
	class DBA_YWingBomber_VTOL_Dynamic_Base_F : DBA_YWingBomber_VTOL_Base
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
			/*class TransportPylonsComponent
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
			};*/
		};
	};
	class DBA_YWingBomber_VTOL_Dynamic_F : DBA_YWingBomber_VTOL_Dynamic_Base_F
	{
		author = "Vulgar";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_VTOL_02_infantry_dynamicLoadout_F.jpg";
		_generalMacro = "O_T_VTOL_02_infantry_dynamicLoadout_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "[DBA] YWing Bomber";
		side = 1;
		crew = "DBA_Reserve_Pilot_F";
		typicalCargo[] =
		{
			"DBA_Reserve_Pilot_F"
		};
		faction = "B_DBA_Republic_F";
		textureList[] =
		{
			"YellowWing",
			1
		};
		hiddenSelectionsTextures[] =
		{
			"DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Ballgun_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Body_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Cockpit_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Left_wing_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\r2_CO.paa", "DBA_Republic\Addons\DBA_Vehicles\DBA_AirVehicles\DBA_YWingBomber\Yellow\Right_wing_CO.paa"

		};
		availableForSupportTypes[] =
		{
			"CAS_Bombing"
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
