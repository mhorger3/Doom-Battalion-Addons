class CfgPatches
{
	class DBA_YWing
	{
		requiredAddons[] =
		{
			"A3_Air_F_EPC"
		};
		requiredVersion = 0.1;
		units[] =
		{
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
	class Air;
	class Plane : Air
	{
		class HitPoints;
	};
	class Plane_Base_F : Plane
	{
		class AnimationSources;
		class HitPoints : HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
		class ViewPilot;
	};
	class DBA_CAS_Ywing_Republic_BasE_F : Plane_Base_F
	{
		features = "Randomization: No						<br />Camo selections: 2 - the main body, wings lower part of body						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: None";
		author = "Vulgar";
		mapSize = 16.379999;
		_generalMacro = "Plane_CAS_02_base_F";
		scope = 0;
		displayName = "DBA Republic Y-Wing Base";
		model = "\A3\Air_F_EPC\Plane_CAS_02\Plane_cas_02_F.p3d";
		icon = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Map_Plane_cas_02_F.paa";
		picture = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_F.paa";
		editorSubcategory = "EdSubcat_Planes";
		destrType = "DestructWreck";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] =
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		accuracy = 0.2;
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F_Library0";
		};
		driverAction = "pilot_plane_cas_02";
		getinAction = "pilot_plane_cas_02_Enter";
		getoutaction = "pilot_plane_cas_02_Exit";
		precisegetinout = 1;
		driverCanEject = 0;
		viewDriverShadowDiff = 0.5;
		viewDriverShadowAmb = 0.5;
		lockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		class EjectionSystem
		{
			EjectionSeatEnabled = 1;
			EjectionDual = 0;
			EjectionSeatClass = "O_Ejection_Seat_Plane_CAS_02_F";
			CanopyClass = "Plane_CAS_02_Canopy_F";
			EjectionSeatHideAnim = "ejection_seat_hide";
			EjectionSeatRailAnim = "ejection_seat_motion";
			CanopyHideAnim = "canopy_hide";
			EjectionSeatPos = "pos_eject";
			CanopyPos = "pos_eject_canopy";
			EjectionSoundExt = "Plane_Fighter_01_ejection_ext_sound";
			EjectionSoundInt = "Plane_Fighter_01_ejection_in_sound";
			EjectionParachute = "Steerable_Parachute_F";
			EjectionSeatForce = 50;
			CanopyForce = 30;
			canopyExplodes = 1;
		};
		class Turrets
		{
		};
		class TransportItems
		{
		};
		attenuationEffectType = "PlaneAttenuation";
		soundGetIn[] =
		{
			"A3\Sounds_F_EPC\CAS_02\TO_getin",
			1,
			1
		};
		soundGetOut[] =
		{
			"A3\Sounds_F_EPC\CAS_02\getout",
			1,
			1,
			40
		};
		cabinOpenSound[] =
		{
			"A3\Sounds_F\air\noises\Plane_CAS02_CabinOpen",
			3.1622777,
			1,
			40
		};
		cabinCloseSound[] =
		{
			"A3\Sounds_F\air\noises\Plane_CAS02_CabinClose",
			3.1622777,
			1,
			40
		};
		cabinOpenSoundInternal[] =
		{
			"A3\Sounds_F\air\noises\Plane_CAS02_CabinOpen",
			10,
			1,
			40
		};
		cabinCloseSoundInternal[] =
		{
			"A3\Sounds_F\air\noises\Plane_CAS02_CabinClose",
			10,
			1,
			40
		};
		soundDammage[] =
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[] =
		{
			"A3\Sounds_F_EPC\CAS_02\CAS_02_start_int",
			0.79432821,
			1
		};
		soundEngineOnExt[] =
		{
			"A3\Sounds_F_EPC\CAS_02\CAS_02_start_ext",
			1,
			1,
			500
		};
		soundEngineOffInt[] =
		{
			"A3\Sounds_F_EPC\CAS_02\CAS_02_stop_int",
			0.79432821,
			1
		};
		soundEngineOffExt[] =
		{
			"A3\Sounds_F_EPC\CAS_02\CAS_02_stop_ext",
			1,
			1,
			500
		};
		soundLocked[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		soundIncommingMissile[] =
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4",
			0.39810717,
			1
		};
		soundGearUp[] =
		{
			"A3\Sounds_F_EPC\CAS_02\gear_up",
			0.79432821,
			1,
			150
		};
		soundGearDown[] =
		{
			"A3\Sounds_F_EPC\CAS_02\gear_down",
			0.79432821,
			1,
			150
		};
		soundFlapsUp[] =
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Up",
			0.63095737,
			1,
			100
		};
		soundFlapsDown[] =
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Down",
			0.63095737,
			1,
			100
		};
		soundWaterCollision1[] =
		{
			"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",
			1.4125376,
			1,
			500
		};
		soundWaterCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",
			1.4125376,
			1,
			500
		};
		soundWaterCrashes[] =
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		buildCrash0[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		buildCrash1[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		buildCrash2[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		buildCrash3[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundBuildingCrash[] =
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			3.1622777,
			1,
			900
		};
		WoodCrash1[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",
			3.1622777,
			1,
			900
		};
		WoodCrash2[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",
			3.1622777,
			1,
			900
		};
		WoodCrash3[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",
			3.1622777,
			1,
			900
		};
		soundWoodCrash[] =
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		armorCrash1[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		armorCrash2[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		armorCrash3[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundArmorCrash[] =
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		Crash1[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		Crash2[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		Crash3[] =
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundCrashes[] =
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class scrubLandInt
		{
			sound[] =
			{
				"A3\Sounds_F\vehicles\air\noises\wheelsInt",
				1,
				1,
				100
			};
			frequency = 1;
			volume = "(scrubLand factor[0.01, 0.20])";
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] =
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_engine_idle_ext",
					1,
					1,
					2100
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] =
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_engine_max_ext",
					1,
					1.2,
					2500
				};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] =
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_forsage_ext",
					1.4125376,
					1.2,
					2800
				};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = { 3.1400001,3.9200001,2,0.5 };
			};
			class WindNoiseOut
			{
				sound[] =
				{
					"A3\Sounds_F_EPC\CAS_02\noise",
					0.56234133,
					1,
					150
				};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] =
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_engine_idle_int",
					0.56234133,
					1
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[] =
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_engine_max_int",
					0.31622776,
					1.2
				};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] =
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_forsage_int",
					0.50118721,
					1.2
				};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] =
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise_int",
					0.31622776,
					1
				};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
			class RainExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1.7782794,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1-camPos) * rain * (speed factor[50, 0])";
			};
			class Waternoise_ext
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\air_driving_in_water",
					0.70794576,
					1,
					300
				};
				frequency = "1";
				volume = "(speed factor[0, 5]) * water * camPos + (speed factor[-0.1, -5]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int",
					0.56234133,
					1,
					100
				};
				frequency = "1";
				volume = "(speed factor[0, 5]) * water * (1-camPos) + (speed factor[-0.1, -5]) * water * (1-camPos)";
			};
		};
		maxOmega = 2000;
		clutchStrength = 100;
		dampingRateFullThrottle = 0.40000001;
		class Wheels
		{
			class Wheel_1
			{
				boneName = "Wheel_1";
				steering = 1;
				side = "left";
				center = "Wheel_1_center";
				boundary = "Wheel_1_rim";
				width = 0.16;
				mass = 80;
				MOI = 4.4355602;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 0;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = { 0,-1,0 };
				suspForceAppPointOffset = "Wheel_1_center";
				tireForceAppPointOffset = "Wheel_1_center";
				maxCompression = 0.15000001;
				maxDroop = 0.15000001;
				sprungMass = 2000;
				springStrength = 200000;
				springDamperRate = 75000;
				longitudinalStiffnessPerUnitGravity = 1500;
				latStiffX = 2;
				latStiffY = 18;
				frictionVsSlipGraph[] =
				{
					{0,0.5},
					{0.2,0.89999998},
					{0.60000002,0.69999999}
				};
			};
			class Wheel_2 : Wheel_1
			{
				boneName = "Wheel_2";
				steering = 0;
				center = "Wheel_2_center";
				boundary = "Wheel_2_rim";
				width = 0.28;
				maxCompression = 0.15000001;
				maxDroop = 0.15000001;
				sprungMass = 4500;
				maxBrakeTorque = 100;
				suspForceAppPointOffset = "Wheel_2_center";
				tireForceAppPointOffset = "Wheel_2_center";
			};
			class Wheel_3 : Wheel_2
			{
				boneName = "Wheel_3";
				side = "right";
				center = "Wheel_3_center";
				boundary = "Wheel_3_rim";
				suspForceAppPointOffset = "Wheel_3_center";
				tireForceAppPointOffset = "Wheel_3_center";
			};
		};
		maxSpeed = 900;
		landingAoa = 0.113446;
		landingSpeed = 250;
		stallSpeed = 190;
		stallWarningTreshold = 0.07;
		wheelSteeringSensitivity = 1.75;
		airBrake = 1;
		airBrakeFrictionCoef = 2.2;
		flaps = 1;
		flapsFrictionCoef = 0.33000001;
		gearsUpFrictionCoef = 0.55000001;
		airFrictionCoefs0[] = { 0,0,0 };
		airFrictionCoefs1[] = { 0.1,0.51999998,0.0066999998 };
		airFrictionCoefs2[] = { 0.001,0.0054000001,7.0000002e-005 };
		angleOfIndicence = -0.0087266499;
		envelope[] = { 0,0.07,0.28,0.63,1.11,1.74,2.51,3.4100001,4.46,5.6399999,6.96,8.4200001,8.8000002,9.1099997,9.3800001,9.4499998,9.4300003,9,8,7,6 };
		altNoForce = 10000;
		altFullForce = 2000;
		thrustCoef[] = { 1.28,1.33,1.37,1.4,1.41,1.39,1.36,1.33,1.29,1.25,1.2,1.15,1.05,0.5,0,0,0,0,0 };
		aileronSensitivity = 0.75;
		aileronCoef[] = { 0,0.1,0.30000001,0.60000002,0.80000001,0.94999999,1,1.02,1.03,1.04,1.04,1,0.89999998,0.69999999,0.30000001,0.2,0.15000001,0.1,0.1 };
		elevatorSensitivity = 0.75;
		elevatorCoef[] = { 0,0.2,0.94999999,0.60000002,0.55000001,0.5,0.44999999,0.40000001,0.34999999,0.30000001,0.25999999,0.22,0.19,0.16,0.14,0.12,0.1,0.090000004,0.079999998 };
		rudderInfluence = 0.866;
		rudderCoef[] = { 0,0.60000002,1.2,1.5,1.8,2,2.2,2.4000001,2.45,2.5,2.55,2.5999999,2.2,1.3,0.30000001,0.2,0.15000001,0.1,0.1 };
		aileronControlsSensitivityCoef = 3.5999999;
		elevatorControlsSensitivityCoef = 3.4000001;
		rudderControlsSensitivityCoef = 3.4000001;
		draconicForceXCoef = 13;
		draconicForceYCoef = 1.3;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = { 4.8000002,6,7.5,8.1999998,9,10.4,11,11.5,12,12.4,12.6,12.7,12.8,12.9,13,13.1 };
		draconicTorqueYCoef[] = { 12,7.5,4,1.5,0.1,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
		threat[] = { 0.80000001,1,0.80000001 };
		irScanRangeMin = 500;
		irScanRangeMax = 5000;
		irScanToEyeFactor = 2;
		laserScanner = 1;
		showAllTargets = 4;
		minFireTime = 30;
		gunAimDown = 0;
		class ViewPilot : ViewPilot
		{
			initAngleX = -2.5;
		};
		extCameraPosition[] = { 0,4.0999999,-20 };
		cabinOpening = 1;
		driverCompartments = 1;
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "ControlStick";
		memoryPointsGetInDriver = "GetIn_driver_pos";
		memoryPointsGetInDriverDir = "GetIn_driver_dir";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		memoryPointCM[] =
		{
			"FlareLauncher_1_pos",
			"FlareLauncher_2_pos"
		};
		memoryPointCMDir[] =
		{
			"FlareLauncher_1_dir",
			"FlareLauncher_2_dir"
		};
		memoryPointLDust = "WheelDust_left_pos";
		memoryPointRDust = "WheelDust_right_pos";
		memoryPointGun = "Cannon_barrel_end";
		selectionFireAnim = "Cannon_muzzleflash";
		driveOnComponent[] = {};
		class Exhausts
		{
			class Exhaust1
			{
				position = "Exhaust_1_pos";
				direction = "Exhaust_1_dir";
				effect = "ExhaustsEffectPlaneHP";
				engineIndex = 0;
			};
			class Exhaust2
			{
				position = "Exhaust_2_pos";
				direction = "Exhaust_2_dir";
				effect = "ExhaustsEffectPlaneHP";
				engineIndex = 1;
			};
		};
		class WingVortices
		{
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "Vapour_body_left_pos";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "Vapour_body_right_pos";
			};
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "Vapour_wintip_left_pos";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "Vapour_wintip_right_pos";
			};
		};
		aggregateReflectors[] =
		{

			{
				"Gear_1_light_1",
				"Gear_1_light_1_flare",
				"Gear_1_light_2"
			},

			{
				"Gear_2_light_1",
				"Gear_2_light_1_flare",
				"Gear_2_light_2"
			},

			{
				"Gear_3_light_1",
				"Gear_3_light_1_flare",
				"Gear_3_light_2"
			}
		};
		class Reflectors
		{
			class Gear_2_light_1
			{
				color[] = { 0.94999999,1,0.89999998 };
				ambient[] = { 0.0094999997,0.0099999998,0.0089999996 };
				intensity = 100000;
				size = 1;
				innerAngle = 5;
				outerAngle = 15;
				coneFadeCoef = 8;
				position = "Gear_2_light_1_pos";
				direction = "Gear_2_light_1_dir";
				hitpoint = "Gear_2_light_1_hit";
				selection = "Gear_2_light_1_hide";
				useFlare = 0;
				flareSize = 1;
				flareMaxDistance = 500;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0.0099999998;
					quadratic = 0;
					hardLimitStart = 250;
					hardLimitEnd = 300;
				};
			};
			class Gear_2_light_1_flare : Gear_2_light_1
			{
				drawLight = 0;
				useFlare = 1;
				intensity = 25000;
				outerAngle = 178;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 1;
				};
			};
			class Gear_2_light_2 : Gear_2_light_1
			{
				color[] = { 0.89999998,1,0.80000001 };
				ambient[] = { 0.0089999996,0.0099999998,0.0080000004 };
				intensity = 25000;
				innerAngle = 0;
				outerAngle = 90;
				coneFadeCoef = 12;
				position = "Gear_2_light_2_pos";
				direction = "Gear_2_light_2_dir";
				hitpoint = "Gear_2_light_2_hit";
				selection = "Gear_2_light_2_hide";
				useFlare = 1;
				flareSize = 0.5;
				flareMaxDistance = 30;
				class Attenuation : Attenuation
				{
					linear = 15;
					quadratic = 7;
					hardLimitStart = 75;
					hardLimitEnd = 100;
				};
			};
			class Gear_3_light_1 : Gear_2_light_1
			{
				position = "Gear_3_light_1_pos";
				direction = "Gear_3_light_1_dir";
				hitpoint = "Gear_3_light_1_hit";
				selection = "Gear_3_light_1_hide";
			};
			class Gear_3_light_1_flare : Gear_3_light_1
			{
				drawLight = 0;
				useFlare = 1;
				intensity = 25000;
				outerAngle = 178;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 1;
				};
			};
			class Gear_3_light_2 : Gear_2_light_2
			{
				position = "Gear_3_light_2_pos";
				direction = "Gear_3_light_2_dir";
				hitpoint = "Gear_3_light_2_hit";
				selection = "Gear_3_light_2_hide";
			};
			class Gear_1_light_1 : Gear_2_light_1
			{
				intensity = 1600000;
				coneFadeCoef = 2;
				position = "Gear_1_light_1_pos";
				direction = "Gear_1_light_1_dir";
				hitpoint = "Gear_1_light_1_hit";
				selection = "Gear_1_light_1_hide";
			};
			class Gear_1_light_1_flare : Gear_1_light_1
			{
				drawLight = 0;
				useFlare = 1;
				intensity = 25000;
				outerAngle = 178;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 1;
				};
			};
			class Gear_1_light_2 : Gear_2_light_2
			{
				position = "Gear_1_light_2_pos";
				direction = "Gear_1_light_2_dir";
				hitpoint = "Gear_1_light_2_hit";
				selection = "Gear_1_light_2_hide";
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					point = "MFD_Light_1";
					color[] = { 10,25,10 };
					ambient[] = { 0,0,0 };
					intensity = 1.5;
					size = 0;
					useFlare = 0;
					flareSize = 0;
					flareMaxDistance = 0;
					dayLight = 0;
					blinking = 0;
					drawLight = 0;
					activeLight = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 70;
						hardLimitStart = 0.15000001;
						hardLimitEnd = 0.25;
					};
				};
				class Light2 : Light1
				{
					point = "MFD_Light_2";
				};
				class Light3 : Light2
				{
					point = "MFD_Light_3";
				};
			};
		};
		class AnimationSources : AnimationSources
		{
			class Cannon_30mm_ammorandom
			{
				source = "ammorandom";
				weapon = "Cannon_30mm_Plane_CAS_02_F";
			};
			class Cannon_30mm_revolving
			{
				source = "revolving";
				weapon = "Cannon_30mm_Plane_CAS_02_F";
			};
			class Missile_AA_03_revolving
			{
				source = "revolving";
				weapon = "Missile_AA_03_Plane_CAS_02_F";
			};
			class Missile_AGM_01_revolving
			{
				source = "revolving";
				weapon = "Missile_AGM_01_Plane_CAS_02_F";
			};
			class Rocket_03_HE_revolving
			{
				source = "revolving";
				weapon = "Rocket_03_HE_Plane_CAS_02_F";
			};
			class Rocket_03_AP_revolving
			{
				source = "revolving";
				weapon = "Rocket_03_AP_Plane_CAS_02_F";
			};
			class Bomb_03_revolving
			{
				source = "revolving";
				weapon = "Bomb_03_Plane_CAS_02_F";
			};
			class Damper_1_source
			{
				source = "damper";
				wheel = "Wheel_1";
			};
			class Damper_2_source
			{
				source = "damper";
				wheel = "Wheel_2";
			};
			class Damper_3_source
			{
				source = "damper";
				wheel = "Wheel_3";
			};
			class Wheel_1_source
			{
				source = "wheel";
				wheel = "Wheel_1";
			};
			class Wheel_2_source
			{
				source = "wheel";
				wheel = "Wheel_2";
			};
			class Wheel_3_source
			{
				source = "wheel";
				wheel = "Wheel_3";
			};
			class HitAvionics
			{
				source = "Hit";
				hitpoint = "HitAvionics";
				raw = 1;
			};
			class HideWeapons
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class canopy_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class ejection_seat_hide : canopy_hide
			{
			};
			class ejection_seat_motion
			{
				source = "user";
				animPeriod = 0.25;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Plane_CAS_02_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "$STR_A3_action_eject";
				condition = "player in this && {speed this > 1}";
				statement = "[this] spawn bis_fnc_planeEjection";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
		};
		class Eventhandlers : Eventhandlers
		{
			hit = "_this call bis_fnc_planeAiEject";
		};
		hiddenSelections[] =
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Air_F_EPC\Plane_CAS_02\Data\fighter02_ext01_co.paa",
			"\A3\Air_F_EPC\Plane_CAS_02\Data\fighter02_ext02_co.paa"
		};
		armor = 80;
		armorStructural = 2;
		explosionShielding = 1;
		armorLights = 0.1;
		epeImpulseDamageCoef = 200;
		waterLeakiness = 1.5;
		damageResistance = 0.0040000002;
		class HitPoints : HitPoints
		{
			class HitHull : HitHull
			{
				armor = 7.5;
				explosionShielding = 1.8;
				name = "HitHull";
				passThrough = 1;
				visual = "Hit_Hull";
				radius = 0.40000001;
				minimalHit = 0.0099999998;
				depends = "0";
				material = -1;
			};
			class HitEngine : HitHull
			{
				armor = 4;
				explosionShielding = 2.2;
				name = "HitEngine";
				passThrough = 0.60000002;
				visual = "Hit_Engine";
				radius = 0.55000001;
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitEngine2 : HitEngine
			{
				armor = 4;
				explosionShielding = 2.2;
				name = "HitEngine2";
				passThrough = 0.60000002;
				visual = "Hit_Engine2";
				radius = 0.55000001;
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitAvionics : HitHull
			{
				armor = 4;
				explosionShielding = 4;
				name = "HitAvionics";
				passThrough = 0.5;
				visual = "Hit_Avionics";
				radius = 0.2;
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitFuel : HitHull
			{
				armor = 5.5;
				explosionShielding = 4;
				name = "HitFuel";
				passThrough = 0.60000002;
				visual = "Hit_Fuel";
				radius = 0.30000001;
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitFuel2 : HitFuel
			{
				armor = 3;
				explosionShielding = 3;
				name = "HitFuel2";
				passThrough = 0.40000001;
				visual = "";
				radius = 0.30000001;
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitGlass1 : HitHull
			{
				armor = 1.3;
				explosionShielding = 3;
				name = "HitGlass1";
				passThrough = 0;
				visual = "glass_1";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitGlass2 : HitHull
			{
				armor = 1.5;
				explosionShielding = 2.8;
				name = "HitGlass2";
				passThrough = 0;
				visual = "glass_2";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLAileron : HitHull
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "HitLAileron";
				passThrough = 0.30000001;
				visual = "Hit_AileronL";
				radius = 0.2;
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitRAileron : HitLAileron
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "HitRAileron";
				passThrough = 0.30000001;
				visual = "Hit_AileronR";
				radius = 0.2;
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitLCRudder : HitHull
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "HitLCRudder";
				passThrough = 0.30000001;
				visual = "Hit_RudderC";
				radius = 0.2;
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitLCElevator : HitHull
			{
				armor = 3.5;
				explosionShielding = 2.8;
				name = "HitLCElevator";
				passThrough = 0.30000001;
				visual = "Hit_ElevatorL";
				radius = 0.2;
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitRElevator : HitLCElevator
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "HitRElevator";
				passThrough = 0.30000001;
				visual = "Hit_ElevatorR";
				radius = 0.2;
				minimalHit = 0.0099999998;
				depends = "0";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01_destruct.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext02.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext02_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext02_destruct.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int01.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int01_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int01_destruct.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int02.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int02_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int02_destruct.rvmat",
				"A3\data_f\glass_veh.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_Glass_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_Glass_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Glass_veh_int.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Glass_veh_int_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Glass_veh_int_damage.rvmat"
			};
		};
		defaultUserMFDvalues[] = { 0.15000001,1,0.15000001,0.40000001 };
		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0,1,0,0.1 };
				enableParallax = 1;
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = { 0.5,0.52999997 };
					};
					class ClimbFixed
					{
						type = "fixed";
						pos[] = { 0.898,0.69999999 };
					};
					class ClimbRotate
					{
						type = "rotational";
						source = "vspeed";
						sourceScale = 1;
						center[] = { 0.88,0.69999999 };
						min = -30;
						max = 30;
						minAngle = -90;
						maxAngle = 90;
						aspectRatio = 0.98863602;
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class HorizonBankSource
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = { 0.5,0.52999997 };
						min = -6.2831001;
						max = 6.2831001;
						minAngle = -360;
						maxAngle = 360;
					};
					class HorizonBankInverted
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = { 0.5,0.52999997 };
						min = -6.2831001;
						max = 6.2831001;
						minAngle = 360;
						maxAngle = -360;
					};
					class HorizonBankRotFull
					{
						type = "rotational";
						source = "horizonBank";
						center[] = { 0,0 };
						min = -3.1415999;
						max = 3.1415999;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Level0
					{
						source = "horizonDive";
						type = "linear";
						angle = 0;
						min = -3.4000001;
						max = 3.4000001;
						minPos[] = { 0.5,4.7800002 };
						maxPos[] = { 0.5,-3.72 };
					};
					class TerrainBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 200;
						minPos[] = { 0,0.66600001 };
						maxPos[] = { 0,0.40000001 };
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPoint";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class ImpactPointRelative
					{
						type = "vector";
						source = "impactpointweaponRelative";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class Limit0109
					{
						type = "limit";
						limits[] = { 0.1,0.1,0.89999998,0.89999998 };
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class TargetingPodDir
					{
						source = "pilotcamera";
						type = "vector";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class TargetingPodTarget
					{
						source = "pilotcameratarget";
						type = "vector";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPoint";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 1;
						center[] = { 0,0 };
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.98863602;
					};
					class MissileFlightTimeRot2 : MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3 : MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4 : MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5 : MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6 : MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7 : MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8 : MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9 : MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10 : MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11 : MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12 : MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13 : MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14 : MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15 : MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16 : MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17 : MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class Airport2 : Airport1
					{
						source = "airportCorner2";
					};
					class Airport3 : Airport1
					{
						source = "airportCorner3";
					};
					class Airport4 : Airport1
					{
						source = "airportCorner4";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = { 0.5,0.52999997 };
						pos3[] = { 0.764,0.52999997 };
					};
					class ILS_W : ILS_H
					{
						pos3[] = { 0.5,0.79100001 };
					};
					class LarAmmoMax
					{
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 1;
						min = 0;
						max = 1;
						minPos[] = { 0,1 };
						maxPos[] = { 0,0 };
					};
					class LarAmmoMin : LarAmmoMax
					{
						source = "LarAmmoMin";
					};
					class LarTargetDist : LarAmmoMax
					{
						source = "LarTargetDist";
					};
					class LarAmmoMGunMax
					{
						type = "rotational";
						source = "LarAmmoMax";
						sourceScale = 1;
						center[] = { 0,0 };
						min = 0;
						max = 1;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 0.98863602;
					};
					class LarAmmoMGunMin : LarAmmoMGunMax
					{
						source = "LarAmmoMin";
					};
				};
				class Draw
				{
					alpha = "user3";
					color[] =
					{
						"user0",
						"user1",
						"user2"
					};
					condition = "on";
					class Horizont
					{
						clipTL[] = { 0.1,0.28 };
						clipBR[] = { 0.89999998,0.80000001 };
						class Dimmed
						{
							class Level00
							{
								type = "line";
								width = 2;
								points[] =
								{

									{
										"Level0",
										{0.23999999,0},
										1
									},

									{
										"Level0",
										{-0.23999999,0},
										1
									},
									{}
								};
							};
							class Level2MH5 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.16312499},
										1
									},

									{
										"Level0",
										{0.228,-0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.16312499},
										1
									},

									{
										"Level0",
										{0.21600001,-0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.16312499},
										1
									},

									{
										"Level0",
										{0.204,-0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.16312499},
										1
									},

									{
										"Level0",
										{0.192,-0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.16312499},
										1
									},

									{
										"Level0",
										{0.18000001,-0.16312499},
										1
									}
								};
							};
							class Level2MH0 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.054375},
										1
									},

									{
										"Level0",
										{0.228,-0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.054375},
										1
									},

									{
										"Level0",
										{0.21600001,-0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.054375},
										1
									},

									{
										"Level0",
										{0.204,-0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.054375},
										1
									},

									{
										"Level0",
										{0.192,-0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.054375},
										1
									},

									{
										"Level0",
										{0.18000001,-0.054375},
										1
									}
								};
							};
							class Level2PH5 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.16312499},
										1
									},

									{
										"Level0",
										{0.228,0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.16312499},
										1
									},

									{
										"Level0",
										{0.21600001,0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.16312499},
										1
									},

									{
										"Level0",
										{0.204,0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.16312499},
										1
									},

									{
										"Level0",
										{0.192,0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.16312499},
										1
									},

									{
										"Level0",
										{0.18000001,0.16312499},
										1
									}
								};
							};
							class Level2PH0 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.054375},
										1
									},

									{
										"Level0",
										{0.228,0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.054375},
										1
									},

									{
										"Level0",
										{0.21600001,0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.054375},
										1
									},

									{
										"Level0",
										{0.204,0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.054375},
										1
									},

									{
										"Level0",
										{0.192,0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.054375},
										1
									},

									{
										"Level0",
										{0.18000001,0.054375},
										1
									}
								};
							};
							class Level2M5 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.12875},
										1
									},

									{
										"Level0",
										{0.23999999,-0.10875},
										1
									},

									{
										"Level0",
										{0.18000001,-0.10875},
										1
									}
								};
							};
							class VALM2_1_5
							{
								type = "text";
								source = "static";
								text = 5;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.14475},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.14475},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.11275},
									1
								};
							};
							class Level2P5 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.088749997},
										1
									},

									{
										"Level0",
										{0.23999999,0.10875},
										1
									},

									{
										"Level0",
										{0.18000001,0.10875},
										1
									}
								};
							};
							class VALP2_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.072750002},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.072750002},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.10475},
									1
								};
							};
							class Level2MH10 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.27187499},
										1
									},

									{
										"Level0",
										{0.228,-0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.27187499},
										1
									},

									{
										"Level0",
										{0.21600001,-0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.27187499},
										1
									},

									{
										"Level0",
										{0.204,-0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.27187499},
										1
									},

									{
										"Level0",
										{0.192,-0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.27187499},
										1
									},

									{
										"Level0",
										{0.18000001,-0.27187499},
										1
									}
								};
							};
							class Level2PH10 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.27187499},
										1
									},

									{
										"Level0",
										{0.228,0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.27187499},
										1
									},

									{
										"Level0",
										{0.21600001,0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.27187499},
										1
									},

									{
										"Level0",
										{0.204,0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.27187499},
										1
									},

									{
										"Level0",
										{0.192,0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.27187499},
										1
									},

									{
										"Level0",
										{0.18000001,0.27187499},
										1
									}
								};
							};
							class Level2M10 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.2375},
										1
									},

									{
										"Level0",
										{0.23999999,-0.2175},
										1
									},

									{
										"Level0",
										{0.18000001,-0.2175},
										1
									}
								};
							};
							class VALM2_1_10
							{
								type = "text";
								source = "static";
								text = 10;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.25350001},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.25350001},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.22149999},
									1
								};
							};
							class Level2P10 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.19750001},
										1
									},

									{
										"Level0",
										{0.23999999,0.2175},
										1
									},

									{
										"Level0",
										{0.18000001,0.2175},
										1
									}
								};
							};
							class VALP2_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.1815},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.1815},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.21349999},
									1
								};
							};
							class Level2MH15 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.38062501},
										1
									},

									{
										"Level0",
										{0.228,-0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.38062501},
										1
									},

									{
										"Level0",
										{0.21600001,-0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.38062501},
										1
									},

									{
										"Level0",
										{0.204,-0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.38062501},
										1
									},

									{
										"Level0",
										{0.192,-0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.38062501},
										1
									},

									{
										"Level0",
										{0.18000001,-0.38062501},
										1
									}
								};
							};
							class Level2PH15 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.38062501},
										1
									},

									{
										"Level0",
										{0.228,0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.38062501},
										1
									},

									{
										"Level0",
										{0.21600001,0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.38062501},
										1
									},

									{
										"Level0",
										{0.204,0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.38062501},
										1
									},

									{
										"Level0",
										{0.192,0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.38062501},
										1
									},

									{
										"Level0",
										{0.18000001,0.38062501},
										1
									}
								};
							};
							class Level2M15 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.34625},
										1
									},

									{
										"Level0",
										{0.23999999,-0.32624999},
										1
									},

									{
										"Level0",
										{0.18000001,-0.32624999},
										1
									}
								};
							};
							class VALM2_1_15
							{
								type = "text";
								source = "static";
								text = 15;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.36225},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.36225},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.33024999},
									1
								};
							};
							class Level2P15 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.30625001},
										1
									},

									{
										"Level0",
										{0.23999999,0.32624999},
										1
									},

									{
										"Level0",
										{0.18000001,0.32624999},
										1
									}
								};
							};
							class VALP2_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.29025},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.29025},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.32225001},
									1
								};
							};
							class Level2MH20 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.489375},
										1
									},

									{
										"Level0",
										{0.228,-0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.489375},
										1
									},

									{
										"Level0",
										{0.21600001,-0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.489375},
										1
									},

									{
										"Level0",
										{0.204,-0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.489375},
										1
									},

									{
										"Level0",
										{0.192,-0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.489375},
										1
									},

									{
										"Level0",
										{0.18000001,-0.489375},
										1
									}
								};
							};
							class Level2PH20 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.489375},
										1
									},

									{
										"Level0",
										{0.228,0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.489375},
										1
									},

									{
										"Level0",
										{0.21600001,0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.489375},
										1
									},

									{
										"Level0",
										{0.204,0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.489375},
										1
									},

									{
										"Level0",
										{0.192,0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.489375},
										1
									},

									{
										"Level0",
										{0.18000001,0.489375},
										1
									}
								};
							};
							class Level2M20 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.45500001},
										1
									},

									{
										"Level0",
										{0.23999999,-0.435},
										1
									},

									{
										"Level0",
										{0.18000001,-0.435},
										1
									}
								};
							};
							class VALM2_1_20
							{
								type = "text";
								source = "static";
								text = 20;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.47099999},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.47099999},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.43900001},
									1
								};
							};
							class Level2P20 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.41499999},
										1
									},

									{
										"Level0",
										{0.23999999,0.435},
										1
									},

									{
										"Level0",
										{0.18000001,0.435},
										1
									}
								};
							};
							class VALP2_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.39899999},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.39899999},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.43099999},
									1
								};
							};
							class Level2MH25 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.59812498},
										1
									},

									{
										"Level0",
										{0.228,-0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.59812498},
										1
									},

									{
										"Level0",
										{0.21600001,-0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.59812498},
										1
									},

									{
										"Level0",
										{0.204,-0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.59812498},
										1
									},

									{
										"Level0",
										{0.192,-0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.59812498},
										1
									},

									{
										"Level0",
										{0.18000001,-0.59812498},
										1
									}
								};
							};
							class Level2PH25 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.59812498},
										1
									},

									{
										"Level0",
										{0.228,0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.59812498},
										1
									},

									{
										"Level0",
										{0.21600001,0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.59812498},
										1
									},

									{
										"Level0",
										{0.204,0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.59812498},
										1
									},

									{
										"Level0",
										{0.192,0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.59812498},
										1
									},

									{
										"Level0",
										{0.18000001,0.59812498},
										1
									}
								};
							};
							class Level2M25 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.56375003},
										1
									},

									{
										"Level0",
										{0.23999999,-0.54374999},
										1
									},

									{
										"Level0",
										{0.18000001,-0.54374999},
										1
									}
								};
							};
							class VALM2_1_25
							{
								type = "text";
								source = "static";
								text = 25;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.57975},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.57975},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.54775},
									1
								};
							};
							class Level2P25 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.52375001},
										1
									},

									{
										"Level0",
										{0.23999999,0.54374999},
										1
									},

									{
										"Level0",
										{0.18000001,0.54374999},
										1
									}
								};
							};
							class VALP2_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.50774997},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.50774997},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.53974998},
									1
								};
							};
							class Level2MH30 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.70687503},
										1
									},

									{
										"Level0",
										{0.228,-0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.70687503},
										1
									},

									{
										"Level0",
										{0.21600001,-0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.70687503},
										1
									},

									{
										"Level0",
										{0.204,-0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.70687503},
										1
									},

									{
										"Level0",
										{0.192,-0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.70687503},
										1
									},

									{
										"Level0",
										{0.18000001,-0.70687503},
										1
									}
								};
							};
							class Level2PH30 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.70687503},
										1
									},

									{
										"Level0",
										{0.228,0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.70687503},
										1
									},

									{
										"Level0",
										{0.21600001,0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.70687503},
										1
									},

									{
										"Level0",
										{0.204,0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.70687503},
										1
									},

									{
										"Level0",
										{0.192,0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.70687503},
										1
									},

									{
										"Level0",
										{0.18000001,0.70687503},
										1
									}
								};
							};
							class Level2M30 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.67250001},
										1
									},

									{
										"Level0",
										{0.23999999,-0.65249997},
										1
									},

									{
										"Level0",
										{0.18000001,-0.65249997},
										1
									}
								};
							};
							class VALM2_1_30
							{
								type = "text";
								source = "static";
								text = 30;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.68849999},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.68849999},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.65649998},
									1
								};
							};
							class Level2P30 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.63249999},
										1
									},

									{
										"Level0",
										{0.23999999,0.65249997},
										1
									},

									{
										"Level0",
										{0.18000001,0.65249997},
										1
									}
								};
							};
							class VALP2_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.61650002},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.61650002},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.64850003},
									1
								};
							};
							class Level2MH35 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.81562501},
										1
									},

									{
										"Level0",
										{0.228,-0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.81562501},
										1
									},

									{
										"Level0",
										{0.21600001,-0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.81562501},
										1
									},

									{
										"Level0",
										{0.204,-0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.81562501},
										1
									},

									{
										"Level0",
										{0.192,-0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.81562501},
										1
									},

									{
										"Level0",
										{0.18000001,-0.81562501},
										1
									}
								};
							};
							class Level2PH35 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.81562501},
										1
									},

									{
										"Level0",
										{0.228,0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.81562501},
										1
									},

									{
										"Level0",
										{0.21600001,0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.81562501},
										1
									},

									{
										"Level0",
										{0.204,0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.81562501},
										1
									},

									{
										"Level0",
										{0.192,0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.81562501},
										1
									},

									{
										"Level0",
										{0.18000001,0.81562501},
										1
									}
								};
							};
							class Level2M35 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.78125},
										1
									},

									{
										"Level0",
										{0.23999999,-0.76125002},
										1
									},

									{
										"Level0",
										{0.18000001,-0.76125002},
										1
									}
								};
							};
							class VALM2_1_35
							{
								type = "text";
								source = "static";
								text = 35;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.79724997},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.79724997},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.76525003},
									1
								};
							};
							class Level2P35 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.74124998},
										1
									},

									{
										"Level0",
										{0.23999999,0.76125002},
										1
									},

									{
										"Level0",
										{0.18000001,0.76125002},
										1
									}
								};
							};
							class VALP2_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.72525001},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.72525001},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.75725001},
									1
								};
							};
							class Level2MH40 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.924375},
										1
									},

									{
										"Level0",
										{0.228,-0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.924375},
										1
									},

									{
										"Level0",
										{0.21600001,-0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.924375},
										1
									},

									{
										"Level0",
										{0.204,-0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.924375},
										1
									},

									{
										"Level0",
										{0.192,-0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.924375},
										1
									},

									{
										"Level0",
										{0.18000001,-0.924375},
										1
									}
								};
							};
							class Level2PH40 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.924375},
										1
									},

									{
										"Level0",
										{0.228,0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.924375},
										1
									},

									{
										"Level0",
										{0.21600001,0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.924375},
										1
									},

									{
										"Level0",
										{0.204,0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.924375},
										1
									},

									{
										"Level0",
										{0.192,0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.924375},
										1
									},

									{
										"Level0",
										{0.18000001,0.924375},
										1
									}
								};
							};
							class Level2M40 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.88999999},
										1
									},

									{
										"Level0",
										{0.23999999,-0.87},
										1
									},

									{
										"Level0",
										{0.18000001,-0.87},
										1
									}
								};
							};
							class VALM2_1_40
							{
								type = "text";
								source = "static";
								text = 40;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.90600002},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.90600002},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.87400001},
									1
								};
							};
							class Level2P40 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.85000002},
										1
									},

									{
										"Level0",
										{0.23999999,0.87},
										1
									},

									{
										"Level0",
										{0.18000001,0.87},
										1
									}
								};
							};
							class VALP2_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.83399999},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.83399999},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.866},
									1
								};
							};
							class Level2MH45 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-1.03312},
										1
									},

									{
										"Level0",
										{0.228,-1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-1.03312},
										1
									},

									{
										"Level0",
										{0.21600001,-1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.212,-1.03312},
										1
									},

									{
										"Level0",
										{0.204,-1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.2,-1.03312},
										1
									},

									{
										"Level0",
										{0.192,-1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-1.03312},
										1
									},

									{
										"Level0",
										{0.18000001,-1.03312},
										1
									}
								};
							};
							class Level2PH45 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,1.03312},
										1
									},

									{
										"Level0",
										{0.228,1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,1.03312},
										1
									},

									{
										"Level0",
										{0.21600001,1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.212,1.03312},
										1
									},

									{
										"Level0",
										{0.204,1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.2,1.03312},
										1
									},

									{
										"Level0",
										{0.192,1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,1.03312},
										1
									},

									{
										"Level0",
										{0.18000001,1.03312},
										1
									}
								};
							};
							class Level2M45 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.99874997},
										1
									},

									{
										"Level0",
										{0.23999999,-0.97874999},
										1
									},

									{
										"Level0",
										{0.18000001,-0.97874999},
										1
									}
								};
							};
							class VALM2_1_45
							{
								type = "text";
								source = "static";
								text = 45;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-1.01475},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-1.01475},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.98275},
									1
								};
							};
							class Level2P45 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.95875001},
										1
									},

									{
										"Level0",
										{0.23999999,0.97874999},
										1
									},

									{
										"Level0",
										{0.18000001,0.97874999},
										1
									}
								};
							};
							class VALP2_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.94274998},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.94274998},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.97474998},
									1
								};
							};
						};
					};
					class PlaneOrientationCrosshair
					{
						type = "line";
						width = 3;
						points[] =
						{

							{
								"HorizonBankInverted",
								{-0.175,0},
								1
							},

							{
								"HorizonBankInverted",
								{-0.12,0},
								1
							},

							{
								"HorizonBankInverted",
								{-0.1,-0.029999999},
								1
							},

							{
								"HorizonBankInverted",
								{-0.079999998,0},
								1
							},

							{
								"HorizonBankInverted",
								{-0.050000001,0},
								1
							},
							{},

							{
								"HorizonBankInverted",
								{0.050000001,0},
								1
							},

							{
								"HorizonBankInverted",
								{0.079999998,0},
								1
							},

							{
								"HorizonBankInverted",
								{0.1,-0.029999999},
								1
							},

							{
								"HorizonBankInverted",
								{0.12,0},
								1
							},

							{
								"HorizonBankInverted",
								{0.175,0},
								1
							},
							{},

							{
								"HorizonBankInverted",
								{-0,0.059999999},
								1
							},

							{
								"HorizonBankInverted",
								{-0,0.090000004},
								1
							},
							{},

							{
								"PlaneOrientation",
								{-0.205,0},
								1
							},

							{
								"PlaneOrientation",
								{-0.175,0},
								1
							},
							{},

							{
								"PlaneOrientation",
								{0.175,0},
								1
							},

							{
								"PlaneOrientation",
								{0.205,0},
								1
							},
							{},

							{
								"PlaneOrientation",
								{0,-0.029999999},
								1
							},

							{
								"PlaneOrientation",
								{0,-0.0099999998},
								1
							},
							{},

							{
								"PlaneOrientation",
								{0,0.029999999},
								1
							},

							{
								"PlaneOrientation",
								{0,0.0099999998},
								1
							},
							{},

							{
								"PlaneOrientation",
								{-0.029999999,0},
								1
							},

							{
								"PlaneOrientation",
								{-0.0099999998,0},
								1
							},
							{},

							{
								"PlaneOrientation",
								{0.029999999,0},
								1
							},

							{
								"PlaneOrientation",
								{0.0099999998,0},
								1
							},
							{}
						};
					};
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 3;
						points[] =
						{

							{
								"Velocity",
								{0,-0.019772699},
								1
							},

							{
								"Velocity",
								{0.0099999998,-0.0171232},
								1
							},

							{
								"Velocity",
								{0.01732,-0.0098863598},
								1
							},

							{
								"Velocity",
								{0.02,0},
								1
							},

							{
								"Velocity",
								{0.01732,0.0098863598},
								1
							},

							{
								"Velocity",
								{0.0099999998,0.0171232},
								1
							},

							{
								"Velocity",
								{0,0.019772699},
								1
							},

							{
								"Velocity",
								{-0.0099999998,0.0171232},
								1
							},

							{
								"Velocity",
								{-0.01732,0.0098863598},
								1
							},

							{
								"Velocity",
								{-0.02,0},
								1
							},

							{
								"Velocity",
								{-0.01732,-0.0098863598},
								1
							},

							{
								"Velocity",
								{-0.0099999998,-0.0171232},
								1
							},

							{
								"Velocity",
								{0,-0.019772699},
								1
							},
							{},

							{
								"Velocity",
								{0.039999999,0},
								1
							},

							{
								"Velocity",
								{0.02,0},
								1
							},
							{},

							{
								"Velocity",
								{-0.039999999,0},
								1
							},

							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},

							{
								"Velocity",
								{0,-0.039545499},
								1
							},

							{
								"Velocity",
								{0,-0.019772699},
								1
							}
						};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.029999999,0.94},
							1
						};
						right[] =
						{
							{0.079999998,0.94},
							1
						};
						down[] =
						{
							{0.029999999,0.98000002},
							1
						};
					};
					class AmmoCount
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.029999999,0.88999999},
							1
						};
						right[] =
						{
							{0.079999998,0.88999999},
							1
						};
						down[] =
						{
							{0.029999999,0.93000001},
							1
						};
					};
					class CMName
					{
						type = "text";
						source = "cmweapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.91000003,0.94},
							1
						};
						right[] =
						{
							{0.95999998,0.94},
							1
						};
						down[] =
						{
							{0.91000003,0.98000002},
							1
						};
					};
					class CMCount
					{
						type = "text";
						source = "cmammo";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.91000003,0.88999999},
							1
						};
						right[] =
						{
							{0.95999998,0.88999999},
							1
						};
						down[] =
						{
							{0.91000003,0.93000001},
							1
						};
					};
					class FlapsGroup
					{
						type = "group";
						condition = "flaps";
						class FlapsText
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.029999999,0.48500001},
								1
							};
							right[] =
							{
								{0.079999998,0.48500001},
								1
							};
							down[] =
							{
								{0.029999999,0.52499998},
								1
							};
						};
					};
					class TGPGroup
					{
						type = "group";
						condition = "laseron";
						class LaserText
						{
							type = "text";
							source = "static";
							text = "LASER";
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.029999999,0.435},
								1
							};
							right[] =
							{
								{0.079999998,0.435},
								1
							};
							down[] =
							{
								{0.029999999,0.47499999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition = "1-pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] =
							{

								{
									"TargetingPodDir",
									{-0.0070710699,0.0069907098},
									1
								},

								{
									"TargetingPodDir",
									{-0.0212132,0.020972099},
									1
								},
								{},

								{
									"TargetingPodDir",
									{0.0070710699,0.0069907098},
									1
								},

								{
									"TargetingPodDir",
									{0.0212132,0.020972099},
									1
								},
								{},

								{
									"TargetingPodDir",
									{0.0070710699,-0.0069907098},
									1
								},

								{
									"TargetingPodDir",
									{0.0212132,-0.020972099},
									1
								},
								{},

								{
									"TargetingPodDir",
									{-0.0070710699,-0.0069907098},
									1
								},

								{
									"TargetingPodDir",
									{-0.0212132,-0.020972099},
									1
								},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition = "pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] =
							{

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0070710699,0.0069907098},
									1
								},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0212132,0.020972099},
									1
								},
								{},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0070710699,0.0069907098},
									1
								},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0212132,0.020972099},
									1
								},
								{},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0070710699,-0.0069907098},
									1
								},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0212132,-0.020972099},
									1
								},
								{},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0070710699,-0.0069907098},
									1
								},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0212132,-0.020972099},
									1
								},
								{}
							};
						};
					};
					class GearGroup
					{
						type = "group";
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.029999999,0.53500003},
								1
							};
							right[] =
							{
								{0.079999998,0.53500003},
								1
							};
							down[] =
							{
								{0.029999999,0.57499999},
								1
							};
						};
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = { 0,0 };
							clipBR[] = { 1,1 };
							class ILS
							{
								type = "line";
								points[] =
								{

									{
										"ILS_W",
										{-0.23999999,0},
										1
									},

									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},

									{
										"ILS_W",
										{-0.23999999,-0.0237273},
										1
									},

									{
										"ILS_W",
										{-0.23999999,0.0237273},
										1
									},
									{},

									{
										"ILS_W",
										{-0.12,-0.017795499},
										1
									},

									{
										"ILS_W",
										{-0.12,0.017795499},
										1
									},
									{},

									{
										"ILS_W",
										{0,-0.0237273},
										1
									},

									{
										"ILS_W",
										{0,0.0237273},
										1
									},
									{},

									{
										"ILS_W",
										{0.12,-0.017795499},
										1
									},

									{
										"ILS_W",
										{0.12,0.017795499},
										1
									},
									{},

									{
										"ILS_W",
										{0.23999999,-0.0237273},
										1
									},

									{
										"ILS_W",
										{0.23999999,0.0237273},
										1
									},
									{},

									{
										"ILS_H",
										{0,-0.23727299},
										1
									},

									{
										"ILS_H",
										{0,0.23727299},
										1
									},
									{},

									{
										"ILS_H",
										{-0.024,-0.23727299},
										1
									},

									{
										"ILS_H",
										{0.024,-0.23727299},
										1
									},
									{},

									{
										"ILS_H",
										{-0.017999999,-0.118636},
										1
									},

									{
										"ILS_H",
										{0.017999999,-0.118636},
										1
									},
									{},

									{
										"ILS_H",
										{-0.024,0},
										1
									},

									{
										"ILS_H",
										{0.024,0},
										1
									},
									{},

									{
										"ILS_H",
										{-0.017999999,0.118636},
										1
									},

									{
										"ILS_H",
										{0.017999999,0.118636},
										1
									},
									{},

									{
										"ILS_H",
										{-0.024,0.23727299},
										1
									},

									{
										"ILS_H",
										{0.024,0.23727299},
										1
									}
								};
							};
							class airport
							{
								type = "line";
								points[] =
								{

									{
										"airport1",
										1
									},

									{
										"airport2",
										1
									},

									{
										"airport4",
										1
									},

									{
										"airport3",
										1
									},

									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class StallGroup
					{
						type = "group";
						condition = "stall";
						color[] = { 1,0,0 };
						blinkingPattern[] = { 0.2,0.2 };
						blinkingStartsOn = 1;
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] =
							{
								{0.5,0.28},
								1
							};
							right[] =
							{
								{0.55000001,0.28},
								1
							};
							down[] =
							{
								{0.5,0.31999999},
								1
							};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.029999999,0.58499998},
								1
							};
							right[] =
							{
								{0.079999998,0.58499998},
								1
							};
							down[] =
							{
								{0.029999999,0.625},
								1
							};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.029999999,0.63499999},
								1
							};
							right[] =
							{
								{0.079999998,0.63499999},
								1
							};
							down[] =
							{
								{0.029999999,0.67500001},
								1
							};
						};
					};
					class PitchNumber
					{
						type = "text";
						source = "horizonDive";
						sourceScale = 57.29578;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.50999999,0.88999999},
							1
						};
						right[] =
						{
							{0.56,0.88999999},
							1
						};
						down[] =
						{
							{0.50999999,0.93000001},
							1
						};
					};
					class PitchText
					{
						type = "text";
						source = "static";
						text = "PITCH";
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.49000001,0.88999999},
							1
						};
						right[] =
						{
							{0.54000002,0.88999999},
							1
						};
						down[] =
						{
							{0.49000001,0.93000001},
							1
						};
					};
					class RollNumber
					{
						type = "text";
						source = "horizonBank";
						sourceScale = 57.29578;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.50999999,0.94},
							1
						};
						right[] =
						{
							{0.56,0.94},
							1
						};
						down[] =
						{
							{0.50999999,0.98000002},
							1
						};
					};
					class RollText
					{
						type = "text";
						source = "static";
						text = "ROLL";
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.49000001,0.94},
							1
						};
						right[] =
						{
							{0.54000002,0.94},
							1
						};
						down[] =
						{
							{0.49000001,0.98000002},
							1
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.5999999;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.13,0.14},
							1
						};
						right[] =
						{
							{0.18000001,0.14},
							1
						};
						down[] =
						{
							{0.13,0.18000001},
							1
						};
					};
					class SpeedText
					{
						type = "text";
						source = "static";
						text = "SPD";
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.11,0.14},
							1
						};
						right[] =
						{
							{0.16,0.14},
							1
						};
						down[] =
						{
							{0.11,0.18000001},
							1
						};
					};
					class TerrainGroup
					{
						type = "group";
						clipTL[] = { 0,0 };
						clipBR[] = { 1,0.60000002 };
						class TerrainArrow
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									{0.84200001,0.40000001},
									1
								},

								{
									{0.86000001,0.40000001},
									1
								},
								{},

								{
									"TerrainBone",
									{0.84200001,-0.016000001},
									1
								},

								{
									"TerrainBone",
									{0.86000001,0},
									1
								},

								{
									"TerrainBone",
									{0.84200001,0.016000001},
									1
								}
							};
						};
					};
					class TerrainText
					{
						type = "text";
						source = "static";
						text = "ATL";
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.85000002,0.1},
							1
						};
						right[] =
						{
							{0.89999998,0.1},
							1
						};
						down[] =
						{
							{0.85000002,0.14},
							1
						};
					};
					class TerrainNumber
					{
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.85000002,0.14},
							1
						};
						right[] =
						{
							{0.89999998,0.14},
							1
						};
						down[] =
						{
							{0.85000002,0.18000001},
							1
						};
					};
					class AltitudeNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.88999999,0.14},
							1
						};
						right[] =
						{
							{0.94,0.14},
							1
						};
						down[] =
						{
							{0.88999999,0.18000001},
							1
						};
					};
					class AltitudeText
					{
						type = "text";
						source = "static";
						text = "ASL";
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.88999999,0.1},
							1
						};
						right[] =
						{
							{0.94,0.1},
							1
						};
						down[] =
						{
							{0.88999999,0.14},
							1
						};
					};
					class AltitudeArrow
					{
						type = "line";
						width = 4;
						points[] =
						{

							{
								{0.898,0.384},
								1
							},

							{
								{0.88,0.40000001},
								1
							},

							{
								{0.898,0.41600001},
								1
							}
						};
					};
					class AltitudeLine
					{
						type = "line";
						width = 4;
						points[] =
						{

							{
								{0.87,0.60000002},
								1
							},

							{
								{0.87,0.2},
								1
							}
						};
					};
					class AltitudeScale
					{
						type = "scale";
						horizontal = 0;
						source = "altitudeASL";
						sourceScale = 1;
						width = 4;
						top = 0.60000002;
						center = 0.40000001;
						bottom = 0.2;
						lineXleft = 0.88;
						lineYright = 0.88999999;
						lineXleftMajor = 0.88;
						lineYrightMajor = 0.89999998;
						majorLineEach = 5;
						numberEach = 5;
						step = 20;
						stepSize = 0.026666701;
						align = "right";
						scale = 1;
						pos[] = { 0.91000003,0.57999998 };
						right[] = { 0.95999998,0.57999998 };
						down[] = { 0.91000003,0.62 };
					};
					class ClimbNumber
					{
						type = "text";
						source = "vspeed";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.94499999,0.68099999},
							1
						};
						right[] =
						{
							{0.995,0.68099999},
							1
						};
						down[] =
						{
							{0.94499999,0.71600002},
							1
						};
					};
					class ClimbArrow
					{
						type = "line";
						width = 4;
						points[] =
						{

							{
								"ClimbRotate",
								{-0.034000002,-0.0060000001},
								1
							},

							{
								"ClimbRotate",
								{-0.044,0},
								1
							},

							{
								"ClimbRotate",
								{-0.034000002,0.0060000001},
								1
							},

							{
								"ClimbRotate",
								{-0.034000002,-0.0060000001},
								1
							},
							{},

							{
								"ClimbRotate",
								{-0.044,0},
								1
							},

							{
								"ClimbRotate",
								{-0.0040000002,0},
								1
							}
						};
					};
					class ClimbLine
					{
						type = "line";
						width = 4;
						points[] =
						{

							{
								{0.898,0.68400002},
								1
							},

							{
								{0.88800001,0.68800002},
								1
							},

							{
								{0.88200003,0.69300002},
								1
							},

							{
								{0.88,0.69999999},
								1
							},

							{
								{0.88200003,0.70700002},
								1
							},

							{
								{0.88800001,0.71200001},
								1
							},

							{
								{0.898,0.71600002},
								1
							},

							{
								{0.95300001,0.71600002},
								1
							},

							{
								{0.95300001,0.68400002},
								1
							},

							{
								{0.898,0.68400002},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.079999998,3.4571701e-009},
								1
							},

							{
								"ClimbFixed",
								{-0.059999999,2.5928799e-009},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.058688901,-0.0123329},
								1
							},

							{
								"ClimbFixed",
								{-0.068470299,-0.0143884},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.050244998,-0.0221163},
								1
							},

							{
								"ClimbFixed",
								{-0.063948199,-0.028147999},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.048540998,-0.0348664},
								1
							},

							{
								"ClimbFixed",
								{-0.0566312,-0.040677398},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.036802199,-0.0404085},
								1
							},

							{
								"ClimbFixed",
								{-0.046839099,-0.051429},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.058688901,0.012333},
								1
							},

							{
								"ClimbFixed",
								{-0.068470299,0.0143884},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.050244998,0.0221163},
								1
							},

							{
								"ClimbFixed",
								{-0.063948199,0.028147999},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.048540998,0.0348664},
								1
							},

							{
								"ClimbFixed",
								{-0.0566312,0.040677398},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.036802199,0.0404085},
								1
							},

							{
								"ClimbFixed",
								{-0.046839099,0.051429},
								1
							},
							{},

							{
								"ClimbFixed",

								{
									-0.046839099,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.0566312,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.063948199,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.068470299,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.07,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.068470299,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.063948199,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.0566312,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.046839099,
									"scalar NaN"
								},
								1
							}
						};
					};
					class HeadingArrow
					{
						type = "line";
						width = 3;
						points[] =
						{

							{
								{0.47999999,0.145},
								1
							},

							{
								{0.5,0.125},
								1
							},

							{
								{0.51999998,0.145},
								1
							},

							{
								{0.54000002,0.145},
								1
							},

							{
								{0.54000002,0.18000001},
								1
							},

							{
								{0.46000001,0.18000001},
								1
							},

							{
								{0.46000001,0.145},
								1
							},

							{
								{0.47999999,0.145},
								1
							}
						};
					};
					class HeadingLine
					{
						type = "line";
						width = 4;
						points[] =
						{

							{
								{0.30000001,0.12},
								1
							},

							{
								{0.69999999,0.12},
								1
							}
						};
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] =
						{
							{0.5,0.14},
							1
						};
						right[] =
						{
							{0.55000001,0.14},
							1
						};
						down[] =
						{
							{0.5,0.18000001},
							1
						};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 0.1;
						width = 4;
						NeverEatSeaWeed = 1;
						top = 0.30000001;
						center = 0.5;
						bottom = 0.69999999;
						lineXleft = 0.118;
						lineYright = 0.108;
						lineXleftMajor = 0.118;
						lineYrightMajor = 0.097999997;
						majorLineEach = 2;
						numberEach = 6;
						step = 0.5;
						stepSize = 0.034482799;
						align = "center";
						scale = 1;
						pos[] = { 0.30000001,0.050000001 };
						right[] = { 0.34999999,0.050000001 };
						down[] = { 0.30000001,0.090000004 };
					};
					class MGun
					{
						condition = "-2+(mgun+rocket)*ImpactDistance";
						class Cross
						{
							type = "line";
							width = 3;
							points[] =
							{

								{
									"ImpactPointRelative",
									{0,-0.07},
									1
								},

								{
									"ImpactPointRelative",
									{0,-0.029999999},
									1
								},
								{},

								{
									"ImpactPointRelative",
									{0,0.045000002},
									1
								},

								{
									"ImpactPointRelative",
									{0,0.029999999},
									1
								},
								{},

								{
									"ImpactPointRelative",
									{-0.045000002,0},
									1
								},

								{
									"ImpactPointRelative",
									{-0.029999999,0},
									1
								},
								{},

								{
									"ImpactPointRelative",
									{0.045000002,0},
									1
								},

								{
									"ImpactPointRelative",
									{0.029999999,0},
									1
								},
								{},

								{
									"ImpactPointRelative",
									{0,-0.0020000001},
									1
								},

								{
									"ImpactPointRelative",
									{0,0.0020000001},
									1
								},
								{},

								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},

								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type = "line";
							width = 6;
							points[] =
							{

								{
									"ImpactPointRelative",
									{0,-0.039545499},
									1
								},

								{
									"ImpactPointRelative",
									{0,-0.049431801},
									1
								},

								{
									"MissileFlightTimeRot1",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot2",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot3",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot4",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot5",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot6",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot7",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot8",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot9",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot10",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot11",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot12",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot13",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot14",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot15",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot16",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot17",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_LAR
						{
							type = "line";
							width = 5;
							points[] =
							{

								{
									"ImpactPointRelative",
									1,

									{
										"LarAmmoMGunMin",
										0,
										-0.0593182
									},
									1
								},

								{
									"ImpactPointRelative",
									1,

									{
										"LarAmmoMGunMin",
										0,
										-0.049431801
									},
									1
								},
								{},

								{
									"ImpactPointRelative",
									1,

									{
										"LarAmmoMGunMax",
										0,
										-0.0593182
									},
									1
								},

								{
									"ImpactPointRelative",
									1,

									{
										"LarAmmoMGunMax",
										0,
										-0.049431801
									},
									1
								},
								{}
							};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] =
							{
								"ImpactPointRelative",
								{-0.0020000001,-0.1},
								1
							};
							right[] =
							{
								"ImpactPointRelative",
								{0.045000002,-0.1},
								1
							};
							down[] =
							{
								"ImpactPointRelative",
								{-0.0020000001,-0.059999999},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type = "group";
						condition = "AAmissile";
						class AAMissileCrosshair
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"WeaponAim",
									{0,-0.247159},
									1
								},

								{
									"WeaponAim",
									{0.043400001,-0.243402},
									1
								},

								{
									"WeaponAim",
									{0.085500002,-0.232255},
									1
								},

								{
									"WeaponAim",
									{0.125,-0.21404},
									1
								},

								{
									"WeaponAim",
									{0.16069999,-0.18932401},
									1
								},

								{
									"WeaponAim",
									{0.19149999,-0.15887401},
									1
								},

								{
									"WeaponAim",
									{0.2165,-0.12358},
									1
								},

								{
									"WeaponAim",
									{0.234925,-0.084528401},
									1
								},

								{
									"WeaponAim",
									{0.2462,-0.042906798},
									1
								},

								{
									"WeaponAim",
									{0.25,0},
									1
								},

								{
									"WeaponAim",
									{0.2462,0.042906798},
									1
								},

								{
									"WeaponAim",
									{0.234925,0.084528401},
									1
								},

								{
									"WeaponAim",
									{0.2165,0.12358},
									1
								},

								{
									"WeaponAim",
									{0.19149999,0.15887401},
									1
								},

								{
									"WeaponAim",
									{0.16069999,0.18932401},
									1
								},

								{
									"WeaponAim",
									{0.125,0.21404},
									1
								},

								{
									"WeaponAim",
									{0.085500002,0.232255},
									1
								},

								{
									"WeaponAim",
									{0.043400001,0.243402},
									1
								},

								{
									"WeaponAim",
									{0,0.247159},
									1
								},

								{
									"WeaponAim",
									{-0.043400001,0.243402},
									1
								},

								{
									"WeaponAim",
									{-0.085500002,0.232255},
									1
								},

								{
									"WeaponAim",
									{-0.125,0.21404},
									1
								},

								{
									"WeaponAim",
									{-0.16069999,0.18932401},
									1
								},

								{
									"WeaponAim",
									{-0.19149999,0.15887401},
									1
								},

								{
									"WeaponAim",
									{-0.2165,0.12358},
									1
								},

								{
									"WeaponAim",
									{-0.234925,0.084528401},
									1
								},

								{
									"WeaponAim",
									{-0.2462,0.042906798},
									1
								},

								{
									"WeaponAim",
									{-0.25,0},
									1
								},

								{
									"WeaponAim",
									{-0.2462,-0.042906798},
									1
								},

								{
									"WeaponAim",
									{-0.234925,-0.084528401},
									1
								},

								{
									"WeaponAim",
									{-0.2165,-0.12358},
									1
								},

								{
									"WeaponAim",
									{-0.19149999,-0.15887401},
									1
								},

								{
									"WeaponAim",
									{-0.16069999,-0.18932401},
									1
								},

								{
									"WeaponAim",
									{-0.125,-0.21404},
									1
								},

								{
									"WeaponAim",
									{-0.085500002,-0.232255},
									1
								},

								{
									"WeaponAim",
									{-0.043400001,-0.243402},
									1
								},

								{
									"WeaponAim",
									{0,-0.247159},
									1
								}
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition = "ATmissile";
						type = "group";
						class ATMissileCrosshair
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},

								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},

								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},

								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},

								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},

								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},

								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},

								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},

								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},

								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},

								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},

								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},

								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},

								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},

								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},

								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class BombCrosshairGroup
					{
						type = "group";
						condition = "bomb";
						class BombCrosshair
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"ImpactPoint",
									{0,-0.098863602},
									1
								},

								{
									"ImpactPoint",
									{0.01736,-0.097360902},
									1
								},

								{
									"ImpactPoint",
									{0.034200002,-0.092902198},
									1
								},

								{
									"ImpactPoint",
									{0.050000001,-0.085615903},
									1
								},

								{
									"ImpactPoint",
									{0.064280003,-0.075729497},
									1
								},

								{
									"ImpactPoint",
									{0.0766,-0.063549504},
									1
								},

								{
									"ImpactPoint",
									{0.086599998,-0.049431801},
									1
								},

								{
									"ImpactPoint",
									{0.093970001,-0.033811402},
									1
								},

								{
									"ImpactPoint",
									{0.098480001,-0.017162699},
									1
								},

								{
									"ImpactPoint",
									{0.1,0},
									1
								},

								{
									"ImpactPoint",
									{0.098480001,0.017162699},
									1
								},

								{
									"ImpactPoint",
									{0.093970001,0.033811402},
									1
								},

								{
									"ImpactPoint",
									{0.086599998,0.049431801},
									1
								},

								{
									"ImpactPoint",
									{0.0766,0.063549504},
									1
								},

								{
									"ImpactPoint",
									{0.064280003,0.075729497},
									1
								},

								{
									"ImpactPoint",
									{0.050000001,0.085615903},
									1
								},

								{
									"ImpactPoint",
									{0.034200002,0.092902198},
									1
								},

								{
									"ImpactPoint",
									{0.01736,0.097360902},
									1
								},

								{
									"ImpactPoint",
									{0,0.098863602},
									1
								},

								{
									"ImpactPoint",
									{-0.01736,0.097360902},
									1
								},

								{
									"ImpactPoint",
									{-0.034200002,0.092902198},
									1
								},

								{
									"ImpactPoint",
									{-0.050000001,0.085615903},
									1
								},

								{
									"ImpactPoint",
									{-0.064280003,0.075729497},
									1
								},

								{
									"ImpactPoint",
									{-0.0766,0.063549504},
									1
								},

								{
									"ImpactPoint",
									{-0.086599998,0.049431801},
									1
								},

								{
									"ImpactPoint",
									{-0.093970001,0.033811402},
									1
								},

								{
									"ImpactPoint",
									{-0.098480001,0.017162699},
									1
								},

								{
									"ImpactPoint",
									{-0.1,0},
									1
								},

								{
									"ImpactPoint",
									{-0.098480001,-0.017162699},
									1
								},

								{
									"ImpactPoint",
									{-0.093970001,-0.033811402},
									1
								},

								{
									"ImpactPoint",
									{-0.086599998,-0.049431801},
									1
								},

								{
									"ImpactPoint",
									{-0.0766,-0.063549504},
									1
								},

								{
									"ImpactPoint",
									{-0.064280003,-0.075729497},
									1
								},

								{
									"ImpactPoint",
									{-0.050000001,-0.085615903},
									1
								},

								{
									"ImpactPoint",
									{-0.034200002,-0.092902198},
									1
								},

								{
									"ImpactPoint",
									{-0.01736,-0.097360902},
									1
								},

								{
									"ImpactPoint",
									{0,-0.098863602},
									1
								},
								{},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,-0.019772699},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0.014,-0.0138409},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,

									{
										"+ 0.02",
										0
									},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0.014,0.0138409},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0.019772699},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{-0.014,0.0138409},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,

									{
										"- 0.02",
										0
									},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{-0.014,-0.0138409},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,-0.019772699},
									1
								},
								{},

								{
									"Velocity",
									0.001,
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								},

								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] =
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[] =
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[] =
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = { 0.2,0.2 };
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "LOCKING";
							align = "center";
							scale = 1;
							pos[] =
							{
								{0.47499999,0.81562501},
								1
							};
							right[] =
							{
								{0.53500003,0.81562501},
								1
							};
							down[] =
							{
								{0.47499999,0.86505699},
								1
							};
						};
					};
					class TargetInfo
					{
						condition = "missilelocked";
						class TargetLockedText
						{
							type = "text";
							source = "static";
							text = "TARGET ACQUIRED";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.025,0.20900001},
								1
							};
							right[] =
							{
								{0.064999998,0.20900001},
								1
							};
							down[] =
							{
								{0.025,0.23999999},
								1
							};
						};
						class TimeOfFlightText
						{
							type = "text";
							source = "static";
							text = "TOF:";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.025,0.23899999},
								1
							};
							right[] =
							{
								{0.07,0.23899999},
								1
							};
							down[] =
							{
								{0.025,0.27399999},
								1
							};
						};
						class DistanceText
						{
							type = "text";
							source = "static";
							text = "DISTANCE:";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.025,0.271},
								1
							};
							right[] =
							{
								{0.07,0.271},
								1
							};
							down[] =
							{
								{0.025,0.30599999},
								1
							};
						};
						class TOF_source
						{
							type = "text";
							sourceScale = 1;
							source = "missileflighttime";
							align = "left";
							scale = 1;
							pos[] =
							{
								{0.26899999,0.23899999},
								1
							};
							right[] =
							{
								{0.31900001,0.23899999},
								1
							};
							down[] =
							{
								{0.26899999,0.27399999},
								1
							};
						};
						class TargetDistance
						{
							type = "text";
							source = "targetDist";
							scale = 1;
							sourceLength = 0;
							sourcePrecision = 1;
							sourceScale = 0.001;
							align = "left";
							pos[] =
							{
								{0.26899999,0.271},
								1
							};
							right[] =
							{
								{0.31900001,0.271},
								1
							};
							down[] =
							{
								{0.26899999,0.30599999},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = { 0.30000001,0.30000001 };
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] =
							{
								{0.48500001,0.2175},
								1
							};
							right[] =
							{
								{0.54500002,0.2175},
								1
							};
							down[] =
							{
								{0.48500001,0.26693201},
								1
							};
						};
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "left";
							scale = 1;
							pos[] =
							{
								{0.075000003,0.81562501},
								1
							};
							right[] =
							{
								{0.13500001,0.81562501},
								1
							};
							down[] =
							{
								{0.075000003,0.86505699},
								1
							};
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = ">";
							align = "center";
							scale = 2;
							pos[] =
							{
								{0.090000004,0.81562501},
								1
							};
							right[] =
							{
								{0.11,0.81562501},
								1
							};
							down[] =
							{
								{0.090000004,0.86505699},
								1
							};
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.1,0.81562501},
								1
							};
							right[] =
							{
								{0.16,0.81562501},
								1
							};
							down[] =
							{
								{0.1,0.86505699},
								1
							};
						};
						class WP
						{
							width = 1;
							type = "line";
							points[] =
							{

								{
									"wppoint",
									1,

									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},

								{
									"wppoint",
									1,

									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},

								{
									"wppoint",
									1,

									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};
					class RadarBoxes
					{
						type = "radar";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
						width = 4;
						points[] =
						{

							{
								{-0.0020000001,-0.00197727},
								1
							},

							{
								{0.0020000001,-0.00197727},
								1
							},

							{
								{0.0020000001,0.00197727},
								1
							},

							{
								{-0.0020000001,0.00197727},
								1
							},

							{
								{-0.0020000001,-0.00197727},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"Target",
									{0,-0.039545499},
									1
								},

								{
									"Target",
									{0.0069439998,-0.038944401},
									1
								},

								{
									"Target",
									{0.01368,-0.037160899},
									1
								},

								{
									"Target",
									{0.02,-0.0342464},
									1
								},

								{
									"Target",
									{0.025712,-0.030291799},
									1
								},

								{
									"Target",
									{0.03064,-0.0254198},
									1
								},

								{
									"Target",
									{0.034639999,-0.019772699},
									1
								},

								{
									"Target",
									{0.037588,-0.0135245},
									1
								},

								{
									"Target",
									{0.039391998,-0.0068650902},
									1
								},

								{
									"Target",
									{0.039999999,0},
									1
								},

								{
									"Target",
									{0.039391998,0.0068650902},
									1
								},

								{
									"Target",
									{0.037588,0.0135245},
									1
								},

								{
									"Target",
									{0.034639999,0.019772699},
									1
								},

								{
									"Target",
									{0.03064,0.0254198},
									1
								},

								{
									"Target",
									{0.025712,0.030291799},
									1
								},

								{
									"Target",
									{0.02,0.0342464},
									1
								},

								{
									"Target",
									{0.01368,0.037160899},
									1
								},

								{
									"Target",
									{0.0069439998,0.038944401},
									1
								},

								{
									"Target",
									{0,0.039545499},
									1
								},

								{
									"Target",
									{-0.0069439998,0.038944401},
									1
								},

								{
									"Target",
									{-0.01368,0.037160899},
									1
								},

								{
									"Target",
									{-0.02,0.0342464},
									1
								},

								{
									"Target",
									{-0.025712,0.030291799},
									1
								},

								{
									"Target",
									{-0.03064,0.0254198},
									1
								},

								{
									"Target",
									{-0.034639999,0.019772699},
									1
								},

								{
									"Target",
									{-0.037588,0.0135245},
									1
								},

								{
									"Target",
									{-0.039391998,0.0068650902},
									1
								},

								{
									"Target",
									{-0.039999999,0},
									1
								},

								{
									"Target",
									{-0.039391998,-0.0068650902},
									1
								},

								{
									"Target",
									{-0.037588,-0.0135245},
									1
								},

								{
									"Target",
									{-0.034639999,-0.019772699},
									1
								},

								{
									"Target",
									{-0.03064,-0.0254198},
									1
								},

								{
									"Target",
									{-0.025712,-0.030291799},
									1
								},

								{
									"Target",
									{-0.02,-0.0342464},
									1
								},

								{
									"Target",
									{-0.01368,-0.037160899},
									1
								},

								{
									"Target",
									{-0.0069439998,-0.038944401},
									1
								},

								{
									"Target",
									{0,-0.039545499},
									1
								},
								{}
							};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.049431801},
									1
								},

								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.050000001,0},
									1
								},

								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.049431801},
									1
								},

								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.050000001,0},
									1
								},

								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.049431801},
									1
								}
							};
						};
					};
					class CoordXNumber
					{
						type = "text";
						source = "coordinateX";
						sourceScale = 0.0099999998;
						sourceLength = 3;
						sourceOffset = -0.5;
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.89399999,0.78899997},
							1
						};
						right[] =
						{
							{0.94400001,0.78899997},
							1
						};
						down[] =
						{
							{0.89399999,0.824},
							1
						};
					};
					class CoordYNumber : CoordXNumber
					{
						source = "coordinateY";
						pos[] =
						{
							{0.95099998,0.78899997},
							1
						};
						right[] =
						{
							{1.001,0.78899997},
							1
						};
						down[] =
						{
							{0.95099998,0.824},
							1
						};
					};
					class Time : CoordXNumber
					{
						source = "time";
						text = "%X";
						align = "left";
						pos[] =
						{
							{0.94400001,0.81900001},
							1
						};
						right[] =
						{
							{0.99400002,0.81900001},
							1
						};
						down[] =
						{
							{0.94400001,0.85399997},
							1
						};
					};
					class LAR
					{
						type = "group";
						condition = "(AAmissile + missilelocked)/2";
						class Lines
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									{0.19,0.38},
									1
								},

								{
									{0.17,0.38},
									1
								},

								{
									{0.17,0.64999998},
									1
								},

								{
									{0.19,0.64999998},
									1
								},
								{},

								{
									{0.19,0.58249998},
									1
								},

								{
									{0.17,0.58249998},
									1
								},
								{},

								{
									{0.19,0.51499999},
									1
								},

								{
									{0.17,0.51499999},
									1
								},
								{},

								{
									{0.19,0.44749999},
									1
								},

								{
									{0.17,0.44749999},
									1
								},
								{},

								{
									"LarTargetDist",
									-0.27000001,
									{0.15000001,0.67000002},
									1
								},

								{
									"LarTargetDist",
									-0.27000001,
									{0.17,0.64999998},
									1
								},

								{
									"LarTargetDist",
									-0.27000001,
									{0.15000001,0.63},
									1
								},
								{}
							};
						};
						class Poly
						{
							type = "polygon";
							points[] =
							{

								{

									{
										"LarAmmoMin",
										-0.27000001,
										{0.171,0.64999998},
										1
									},

									{
										"LarAmmoMax",
										-0.27000001,
										{0.171,0.64999998},
										1
									},

									{
										"LarAmmoMax",
										-0.27000001,
										{0.18799999,0.64999998},
										1
									},

									{
										"LarAmmoMin",
										-0.27000001,
										{0.18799999,0.64999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type = "text";
							source = "LarTop";
							sourceScale = 0.001;
							scale = 1;
							pos[] =
							{
								{0.2,0.36000001},
								1
							};
							right[] =
							{
								{0.23999999,0.36000001},
								1
							};
							down[] =
							{
								{0.2,0.40000001},
								1
							};
							align = "right";
						};
						class MiddleText : TopText
						{
							source = "LarTop";
							sourcePrecision = -1;
							sourceScale = 0.00050000002;
							pos[] =
							{
								{0.2,0.495},
								1
							};
							right[] =
							{
								{0.23999999,0.495},
								1
							};
							down[] =
							{
								{0.2,0.53500003},
								1
							};
						};
						class SpeedText : TopText
						{
							source = "LarTargetSpeed";
							align = "left";
							sourceScale = 3.5999999;
							pos[] =
							{
								"LarTargetDist",
								-0.27000001,
								{0.14,0.63},
								1
							};
							right[] =
							{
								"LarTargetDist",
								-0.27000001,
								{0.18000001,0.63},
								1
							};
							down[] =
							{
								"LarTargetDist",
								-0.27000001,
								{0.14,0.67000002},
								1
							};
						};
					};
				};
			};
		};
		memoryPointDriverOptics = "PilotCamera_pos";
		unitInfoType = "RscOptics_CAS_Pilot";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		class PilotCamera
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
					initFov = "(60 / 120)";
					minFov = "(60 / 120)";
					maxFov = "(60 / 120)";
					directionStabilized = 1;
					visionMode[] =
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[] = { 0,1 };
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] =
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium : Wide
				{
					opticsDisplayName = "MFOV";
					initFov = "(12 / 120)";
					minFov = "(12 / 120)";
					maxFov = "(12 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow : Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(4 / 120)";
					minFov = "(4 / 120)";
					maxFov = "(4 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class VeryNarrow : Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(2 / 120)";
					minFov = "(2 / 120)";
					maxFov = "(2 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -20;
			maxElev = 90;
			initElev = 15;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
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
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 37;
						maxTrackableSpeed = 100;
						animDirection = "PilotCamera_V";
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
						angleRangeHorizontal = 50;
						angleRangeVertical = 37;
						maxTrackableSpeed = 100;
						animDirection = "PilotCamera_V";
					};
					class AntiRadiationSensorComponent : SensorTemplateAntiRadiation
					{
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
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 4000,2000,16000,8000 };
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
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 4000,2000,16000,8000 };
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		weapons[] =
		{
			"Cannon_30mm_Plane_CAS_02_F",
			"Missile_AA_03_Plane_CAS_02_F",
			"Missile_AGM_01_Plane_CAS_02_F",
			"Rocket_03_HE_Plane_CAS_02_F",
			"Rocket_03_AP_Plane_CAS_02_F",
			"Bomb_03_Plane_CAS_02_F",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"500Rnd_Cannon_30mm_Plane_CAS_02_F",
			"2Rnd_Missile_AA_03_F",
			"4Rnd_Missile_AGM_01_F",
			"2Rnd_Bomb_03_F",
			"20Rnd_Rocket_03_HE_F",
			"20Rnd_Rocket_03_AP_F",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class Plane_CAS_02_dynamicLoadout_base_F : Plane_CAS_02_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Plane_CAS_02_dynamicLoadout_base_F";
		weapons[] =
		{
			"Cannon_30mm_Plane_CAS_02_F",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"500Rnd_Cannon_30mm_Plane_CAS_02_F",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
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
				uiPicture = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[] =
						{
							"O_MISSILE_PYLON",
							"UNI_SCALPEL"
						};
						attachment = "PylonRack_1Rnd_Missile_AA_03_F";
						priority = 5;
						maxweight = 150;
						UIposition[] = { 0.34999999,0 };
					};
					class Pylons2 : Pylons1
					{
						priority = 4;
						attachment = "PylonRack_1Rnd_Missile_AGM_01_F";
						maxweight = 500;
						UIposition[] = { 0.345,0.050000001 };
					};
					class Pylons3 : Pylons1
					{
						hardpoints[] =
						{
							"O_BOMB_PYLON",
							"O_MISSILE_PYLON",
							"UNI_SCALPEL"
						};
						priority = 3;
						attachment = "PylonRack_20Rnd_Rocket_03_HE_F";
						maxweight = 1050;
						UIposition[] = { 0.34,0.1 };
					};
					class Pylons4 : Pylons1
					{
						hardpoints[] =
						{
							"O_BOMB_PYLON",
							"O_MISSILE_PYLON",
							"UNI_SCALPEL"
						};
						priority = 2;
						attachment = "PylonRack_1Rnd_Missile_AGM_01_F";
						maxweight = 1200;
						UIposition[] = { 0.33000001,0.2 };
					};
					class Pylons5 : Pylons1
					{
						hardpoints[] =
						{
							"O_BOMB_PYLON",
							"O_MISSILE_PYLON",
							"UNI_SCALPEL"
						};
						priority = 1;
						attachment = "PylonMissile_1Rnd_Bomb_03_F";
						maxweight = 1200;
						UIposition[] = { 0.33000001,0.25 };
					};
					class Pylons6 : Pylons5
					{
						UIposition[] = { 0.33000001,0.30000001 };
						mirroredMissilePos = 5;
					};
					class Pylons7 : Pylons4
					{
						UIposition[] = { 0.33000001,0.34999999 };
						mirroredMissilePos = 4;
					};
					class Pylons8 : Pylons3
					{
						UIposition[] = { 0.34,0.44999999 };
						mirroredMissilePos = 3;
						attachment = "PylonRack_20Rnd_Rocket_03_AP_F";
					};
					class Pylons9 : Pylons2
					{
						UIposition[] = { 0.345,0.5 };
						mirroredMissilePos = 2;
					};
					class Pylons10 : Pylons1
					{
						UIposition[] = { 0.34999999,0.55000001 };
						mirroredMissilePos = 1;
					};
				};
				class Presets
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
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AA_03_F"
						};
					};
					class AA
					{
						displayName = "$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[] =
						{
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F"
						};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] =
						{
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_20Rnd_Rocket_03_AP_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_20Rnd_Rocket_03_AP_F",
							"PylonRack_1Rnd_Missile_AA_03_F"
						};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] =
						{
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonRack_20Rnd_Rocket_03_AP_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_20Rnd_Rocket_03_AP_F",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonRack_1Rnd_Missile_AA_03_F"
						};
					};
				};
			};
		};
	};
	class O_Plane_CAS_02_F : Plane_CAS_02_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] =
			{

				{
					"airintake_1_front_rot",
					0.07
				},

				{
					"airintake_2_front_rot",
					0.07
				},

				{
					"airintake_1_top_1_rot",
					0.07
				},

				{
					"airintake_2_top_1_rot",
					0.07
				},

				{
					"airintake_1_top_2_move",
					0.07
				},

				{
					"airintake_2_top_2_move",
					0.07
				},

				{
					"rotor_1_1_rot",
					0
				},

				{
					"rotor_1_2_rot",
					0
				},

				{
					"rotor_2_1_rot",
					0
				},

				{
					"rotor_2_2_rot",
					0
				},

				{
					"aileron_1_rot_1",
					0
				},

				{
					"aileron_2_rot_1",
					0
				},

				{
					"airbrake_rot_1",
					0
				},

				{
					"airbrake_piston_1_move_1",
					0
				},

				{
					"airbrake_piston_2_rot_1",
					0
				},

				{
					"elevator_1_rot",
					0
				},

				{
					"elevator_2_rot",
					0
				},

				{
					"flap_1_rot",
					0
				},

				{
					"flap_2_rot",
					0
				},

				{
					"slat_1_1_rot",
					0
				},

				{
					"slat_1_2_rot",
					0
				},

				{
					"slat_2_1_rot",
					0
				},

				{
					"slat_2_2_rot",
					0
				},

				{
					"rudder_rot",
					0
				},

				{
					"wheel_1_rot",
					0
				},

				{
					"wheel_2_rot",
					0
				},

				{
					"wheel_3_rot",
					0
				},

				{
					"gear_1_rot",
					0
				},

				{
					"gear_1_hatch_1_rot",
					0
				},

				{
					"gear_1_hatch_2_rot",
					0
				},

				{
					"gear_1_hatch_3_rot",
					0
				},

				{
					"gear_1_hatch_4_rot",
					0
				},

				{
					"gear_1_hatch_5_rot",
					0
				},

				{
					"gear_1_steering_rot",
					0
				},

				{
					"gear_1_damper_move",
					0
				},

				{
					"gear_1_stabil_1_rot",
					0
				},

				{
					"gear_1_stabil_2_rot",
					0
				},

				{
					"gear_2_rot",
					0
				},

				{
					"gear_2_hatch_1_rot",
					0
				},

				{
					"gear_2_hatch_2_rot",
					0
				},

				{
					"gear_2_hatch_3_rot",
					0
				},

				{
					"gear_2_piston_1_rot",
					0
				},

				{
					"gear_2_stabil_1_rot",
					0
				},

				{
					"gear_2_stabil_2_rot",
					0
				},

				{
					"gear_2_damper_move",
					0
				},

				{
					"gear_3_rot",
					0
				},

				{
					"gear_3_hatch_1_rot",
					0
				},

				{
					"gear_3_hatch_2_rot",
					0
				},

				{
					"gear_3_hatch_3_rot",
					0
				},

				{
					"gear_3_piston_1_rot",
					0
				},

				{
					"gear_3_stabil_1_rot",
					0
				},

				{
					"gear_3_stabil_2_rot",
					0
				},

				{
					"gear_3_damper_move",
					0
				},

				{
					"canopy_rot",
					0
				},

				{
					"ladder_hatch_l_rot",
					0
				},

				{
					"ladder_hatch_r_rot",
					0
				},

				{
					"display_off_hide",
					0
				},

				{
					"avionics_damage",
					0
				},

				{
					"display_cannon_rot",
					1
				},

				{
					"display_cannon_rot_1",
					0
				},

				{
					"display_cannon_rot_2",
					0
				},

				{
					"display_missile_aa_1_rot",
					1
				},

				{
					"display_missile_aa_1_rot_1",
					0
				},

				{
					"display_missile_aa_1_rot_2",
					0
				},

				{
					"display_missile_aa_2_rot",
					1
				},

				{
					"display_missile_aa_2_rot_1",
					0
				},

				{
					"display_missile_aa_2_rot_2",
					0
				},

				{
					"display_missile_agm_2_1_rot",
					1
				},

				{
					"display_missile_agm_2_1_rot_1",
					0
				},

				{
					"display_missile_agm_2_1_rot_2",
					0
				},

				{
					"display_missile_agm_1_1_rot",
					1
				},

				{
					"display_missile_agm_1_1_rot_1",
					0
				},

				{
					"display_missile_agm_1_1_rot_2",
					0
				},

				{
					"display_missile_agm_2_2_rot",
					1
				},

				{
					"display_missile_agm_2_2_rot_1",
					0
				},

				{
					"display_missile_agm_2_2_rot_2",
					0
				},

				{
					"display_missile_agm_1_2_rot",
					1
				},

				{
					"display_missile_agm_1_2_rot_1",
					0
				},

				{
					"display_missile_agm_1_2_rot_2",
					0
				},

				{
					"display_rocketpod_2_rot",
					1
				},

				{
					"display_rocketpod_2_rot_1",
					0
				},

				{
					"display_rocketpod_2_rot_2",
					0
				},

				{
					"display_rocketpod_1_rot",
					1
				},

				{
					"display_rocketpod_1_rot_1",
					0
				},

				{
					"display_rocketpod_1_rot_2",
					0
				},

				{
					"display_bomb_1_rot",
					1
				},

				{
					"display_bomb_1_rot_1",
					0
				},

				{
					"display_bomb_1_rot_2",
					0
				},

				{
					"display_bomb_2_rot",
					1
				},

				{
					"display_bomb_2_rot_1",
					0
				},

				{
					"display_bomb_2_rot_2",
					0
				},

				{
					"display_cannon_slider_move",
					1
				},

				{
					"display_rocketpod_1_slider_move",
					1
				},

				{
					"display_rocketpod_2_slider_move",
					1
				},

				{
					"display_horizon_rot_1",
					-0.029999999
				},

				{
					"display_horizon_rot_2",
					0
				},

				{
					"display_speed_rot",
					0
				},

				{
					"display_compass_rot",
					0
				},

				{
					"display_altitude_large_rot",
					7.98
				},

				{
					"display_altitude_small_rot",
					7.98
				},

				{
					"display_climb_rot",
					0
				},

				{
					"display_engine_1_rot",
					0
				},

				{
					"display_engine_2_rot",
					0
				},

				{
					"display_engine_1_slider_move",
					0
				},

				{
					"display_engine_2_slider_move",
					0
				},

				{
					"display_gear_down_move",
					0
				},

				{
					"display_gear_up_move",
					0
				},

				{
					"controlstick_pitch_rot",
					0
				},

				{
					"controlstick_roll_rot",
					0
				},

				{
					"compass_rot",
					0
				},

				{
					"cannon_muzzleflash_rot",
					514
				},

				{
					"positionlights",
					0
				},

				{
					"collisionlight_red_blinking",
					0
				},

				{
					"pilotcamera_h",
					0
				},

				{
					"pilotcamera_v",
					0.25999999
				},

				{
					"unhidemfd",
					0
				}
			};
			hide[] =
			{
				"clan",
				"cannon_muzzleflash",
				"gear_2_light_1_hide",
				"gear_2_light_2_hide",
				"gear_3_light_1_hide",
				"gear_3_light_2_hide",
				"gear_1_light_1_hide",
				"gear_1_light_2_hide",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset = 2.872;
			verticalOffsetWorld = -0.108;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro = "O_Plane_CAS_02_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
		model = "\A3\Air_F_EPC\Plane_CAS_02\Plane_cas_02_F.p3d";
		icon = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Map_Plane_cas_02_F.paa";
		picture = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_F.paa";
		side = 0;
		faction = "OPF_F";
		crew = "O_pilot_F";
		typicalCargo[] =
		{
			"O_pilot_F"
		};
		availableForSupportTypes[] =
		{
			"CAS_Bombing"
		};
	};
	class O_Plane_CAS_02_dynamicLoadout_F : Plane_CAS_02_dynamicLoadout_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 1;
			animate[] =
			{

				{
					"airintake_1_front_rot",
					0.07
				},

				{
					"airintake_2_front_rot",
					0.07
				},

				{
					"airintake_1_top_1_rot",
					0.07
				},

				{
					"airintake_2_top_1_rot",
					0.07
				},

				{
					"airintake_1_top_2_move",
					0.07
				},

				{
					"airintake_2_top_2_move",
					0.07
				},

				{
					"rotor_1_1_rot",
					0
				},

				{
					"rotor_1_2_rot",
					0
				},

				{
					"rotor_2_1_rot",
					0
				},

				{
					"rotor_2_2_rot",
					0
				},

				{
					"aileron_1_rot_1",
					0
				},

				{
					"aileron_2_rot_1",
					0
				},

				{
					"airbrake_rot_1",
					0
				},

				{
					"airbrake_piston_1_move_1",
					0
				},

				{
					"airbrake_piston_2_rot_1",
					0
				},

				{
					"elevator_1_rot",
					0
				},

				{
					"elevator_2_rot",
					0
				},

				{
					"flap_1_rot",
					0
				},

				{
					"flap_2_rot",
					0
				},

				{
					"slat_1_1_rot",
					0
				},

				{
					"slat_1_2_rot",
					0
				},

				{
					"slat_2_1_rot",
					0
				},

				{
					"slat_2_2_rot",
					0
				},

				{
					"rudder_rot",
					0
				},

				{
					"wheel_1_rot",
					0
				},

				{
					"wheel_2_rot",
					0
				},

				{
					"wheel_3_rot",
					0
				},

				{
					"gear_1_rot",
					0
				},

				{
					"gear_1_hatch_1_rot",
					0
				},

				{
					"gear_1_hatch_2_rot",
					0
				},

				{
					"gear_1_hatch_3_rot",
					0
				},

				{
					"gear_1_hatch_4_rot",
					0
				},

				{
					"gear_1_hatch_5_rot",
					0
				},

				{
					"gear_1_steering_rot",
					0
				},

				{
					"gear_1_damper_move",
					0
				},

				{
					"gear_1_stabil_1_rot",
					0
				},

				{
					"gear_1_stabil_2_rot",
					0
				},

				{
					"gear_2_rot",
					0
				},

				{
					"gear_2_hatch_1_rot",
					0
				},

				{
					"gear_2_hatch_2_rot",
					0
				},

				{
					"gear_2_hatch_3_rot",
					0
				},

				{
					"gear_2_piston_1_rot",
					0
				},

				{
					"gear_2_stabil_1_rot",
					0
				},

				{
					"gear_2_stabil_2_rot",
					0
				},

				{
					"gear_2_damper_move",
					0
				},

				{
					"gear_3_rot",
					0
				},

				{
					"gear_3_hatch_1_rot",
					0
				},

				{
					"gear_3_hatch_2_rot",
					0
				},

				{
					"gear_3_hatch_3_rot",
					0
				},

				{
					"gear_3_piston_1_rot",
					0
				},

				{
					"gear_3_stabil_1_rot",
					0
				},

				{
					"gear_3_stabil_2_rot",
					0
				},

				{
					"gear_3_damper_move",
					0
				},

				{
					"canopy_rot",
					0
				},

				{
					"ladder_hatch_l_rot",
					0
				},

				{
					"ladder_hatch_r_rot",
					0
				},

				{
					"display_off_hide",
					0
				},

				{
					"avionics_damage",
					0
				},

				{
					"display_cannon_rot",
					1
				},

				{
					"display_cannon_rot_1",
					0
				},

				{
					"display_cannon_rot_2",
					0
				},

				{
					"display_missile_aa_1_rot",
					1
				},

				{
					"display_missile_aa_1_rot_1",
					0
				},

				{
					"display_missile_aa_1_rot_2",
					0
				},

				{
					"display_missile_aa_2_rot",
					1
				},

				{
					"display_missile_aa_2_rot_1",
					0
				},

				{
					"display_missile_aa_2_rot_2",
					0
				},

				{
					"display_missile_agm_2_1_rot",
					1
				},

				{
					"display_missile_agm_2_1_rot_1",
					0
				},

				{
					"display_missile_agm_2_1_rot_2",
					0
				},

				{
					"display_missile_agm_1_1_rot",
					1
				},

				{
					"display_missile_agm_1_1_rot_1",
					0
				},

				{
					"display_missile_agm_1_1_rot_2",
					0
				},

				{
					"display_missile_agm_2_2_rot",
					1
				},

				{
					"display_missile_agm_2_2_rot_1",
					0
				},

				{
					"display_missile_agm_2_2_rot_2",
					0
				},

				{
					"display_missile_agm_1_2_rot",
					1
				},

				{
					"display_missile_agm_1_2_rot_1",
					0
				},

				{
					"display_missile_agm_1_2_rot_2",
					0
				},

				{
					"display_rocketpod_2_rot",
					1
				},

				{
					"display_rocketpod_2_rot_1",
					0
				},

				{
					"display_rocketpod_2_rot_2",
					0
				},

				{
					"display_rocketpod_1_rot",
					1
				},

				{
					"display_rocketpod_1_rot_1",
					0
				},

				{
					"display_rocketpod_1_rot_2",
					0
				},

				{
					"display_bomb_1_rot",
					1
				},

				{
					"display_bomb_1_rot_1",
					0
				},

				{
					"display_bomb_1_rot_2",
					0
				},

				{
					"display_bomb_2_rot",
					1
				},

				{
					"display_bomb_2_rot_1",
					0
				},

				{
					"display_bomb_2_rot_2",
					0
				},

				{
					"display_cannon_slider_move",
					1
				},

				{
					"display_rocketpod_1_slider_move",
					1
				},

				{
					"display_rocketpod_2_slider_move",
					1
				},

				{
					"display_horizon_rot_1",
					-0.029999999
				},

				{
					"display_horizon_rot_2",
					0
				},

				{
					"display_speed_rot",
					0
				},

				{
					"display_compass_rot",
					0
				},

				{
					"display_altitude_large_rot",
					7.98
				},

				{
					"display_altitude_small_rot",
					7.98
				},

				{
					"display_climb_rot",
					0
				},

				{
					"display_engine_1_rot",
					0
				},

				{
					"display_engine_2_rot",
					0
				},

				{
					"display_engine_1_slider_move",
					0
				},

				{
					"display_engine_2_slider_move",
					0
				},

				{
					"display_gear_down_move",
					0
				},

				{
					"display_gear_up_move",
					0
				},

				{
					"controlstick_pitch_rot",
					0
				},

				{
					"controlstick_roll_rot",
					0
				},

				{
					"compass_rot",
					0
				},

				{
					"cannon_muzzleflash_rot",
					878
				},

				{
					"positionlights",
					0
				},

				{
					"collisionlight_red_blinking",
					0
				},

				{
					"pilotcamera_h",
					0
				},

				{
					"pilotcamera_v",
					0.25999999
				},

				{
					"unhidemfd",
					1
				}
			};
			hide[] =
			{
				"clan",
				"cannon_muzzleflash",
				"gear_2_light_1_hide",
				"gear_2_light_2_hide",
				"gear_3_light_1_hide",
				"gear_3_light_2_hide",
				"gear_1_light_1_hide",
				"gear_1_light_2_hide",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset = 2.872;
			verticalOffsetWorld = -0.108;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Plane_CAS_02_dynamicLoadout_F.jpg";
		_generalMacro = "O_Plane_CAS_02_dynamicLoadout_F";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
		model = "\A3\Air_F_EPC\Plane_CAS_02\Plane_cas_02_F.p3d";
		icon = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Map_Plane_cas_02_F.paa";
		picture = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_F.paa";
		side = 0;
		faction = "OPF_F";
		crew = "O_Fighter_Pilot_F";
		typicalCargo[] =
		{
			"O_Fighter_Pilot_F"
		};
		availableForSupportTypes[] =
		{
			"CAS_Bombing"
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0,1,0,0.1 };
				enableParallax = 1;
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = { 0.5,0.52999997 };
					};
					class ClimbFixed
					{
						type = "fixed";
						pos[] = { 0.898,0.69999999 };
					};
					class ClimbRotate
					{
						type = "rotational";
						source = "vspeed";
						sourceScale = 1;
						center[] = { 0.88,0.69999999 };
						min = -30;
						max = 30;
						minAngle = -90;
						maxAngle = 90;
						aspectRatio = 0.98863602;
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class HorizonBankSource
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = { 0.5,0.52999997 };
						min = -6.2831001;
						max = 6.2831001;
						minAngle = -360;
						maxAngle = 360;
					};
					class HorizonBankInverted
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = { 0.5,0.52999997 };
						min = -6.2831001;
						max = 6.2831001;
						minAngle = 360;
						maxAngle = -360;
					};
					class HorizonBankRotFull
					{
						type = "rotational";
						source = "horizonBank";
						center[] = { 0,0 };
						min = -3.1415999;
						max = 3.1415999;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Level0
					{
						source = "horizonDive";
						type = "linear";
						angle = 0;
						min = -3.4000001;
						max = 3.4000001;
						minPos[] = { 0.5,4.7800002 };
						maxPos[] = { 0.5,-3.72 };
					};
					class TerrainBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 200;
						minPos[] = { 0,0.66600001 };
						maxPos[] = { 0,0.40000001 };
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPoint";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class ImpactPointRelative
					{
						type = "vector";
						source = "impactpointweaponRelative";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class Limit0109
					{
						type = "limit";
						limits[] = { 0.1,0.1,0.89999998,0.89999998 };
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class TargetingPodDir
					{
						source = "pilotcamera";
						type = "vector";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class TargetingPodTarget
					{
						source = "pilotcameratarget";
						type = "vector";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPoint";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 1;
						center[] = { 0,0 };
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.98863602;
					};
					class MissileFlightTimeRot2 : MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3 : MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4 : MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5 : MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6 : MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7 : MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8 : MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9 : MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10 : MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11 : MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12 : MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13 : MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14 : MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15 : MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16 : MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17 : MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
					};
					class Airport2 : Airport1
					{
						source = "airportCorner2";
					};
					class Airport3 : Airport1
					{
						source = "airportCorner3";
					};
					class Airport4 : Airport1
					{
						source = "airportCorner4";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = { 0.5,0.52999997 };
						pos3[] = { 0.764,0.52999997 };
					};
					class ILS_W : ILS_H
					{
						pos3[] = { 0.5,0.79100001 };
					};
					class LarAmmoMax
					{
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 1;
						min = 0;
						max = 1;
						minPos[] = { 0,1 };
						maxPos[] = { 0,0 };
					};
					class LarAmmoMin : LarAmmoMax
					{
						source = "LarAmmoMin";
					};
					class LarTargetDist : LarAmmoMax
					{
						source = "LarTargetDist";
					};
					class LarAmmoMGunMax
					{
						type = "rotational";
						source = "LarAmmoMax";
						sourceScale = 1;
						center[] = { 0,0 };
						min = 0;
						max = 1;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 0.98863602;
					};
					class LarAmmoMGunMin : LarAmmoMGunMax
					{
						source = "LarAmmoMin";
					};
				};
				class Draw
				{
					alpha = "user3";
					color[] =
					{
						"user0",
						"user1",
						"user2"
					};
					condition = "on";
					class Horizont
					{
						clipTL[] = { 0.1,0.28 };
						clipBR[] = { 0.89999998,0.80000001 };
						class Dimmed
						{
							class Level00
							{
								type = "line";
								width = 2;
								points[] =
								{

									{
										"Level0",
										{0.23999999,0},
										1
									},

									{
										"Level0",
										{-0.23999999,0},
										1
									},
									{}
								};
							};
							class Level2MH5 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.16312499},
										1
									},

									{
										"Level0",
										{0.228,-0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.16312499},
										1
									},

									{
										"Level0",
										{0.21600001,-0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.16312499},
										1
									},

									{
										"Level0",
										{0.204,-0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.16312499},
										1
									},

									{
										"Level0",
										{0.192,-0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.16312499},
										1
									},

									{
										"Level0",
										{0.18000001,-0.16312499},
										1
									}
								};
							};
							class Level2MH0 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.054375},
										1
									},

									{
										"Level0",
										{0.228,-0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.054375},
										1
									},

									{
										"Level0",
										{0.21600001,-0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.054375},
										1
									},

									{
										"Level0",
										{0.204,-0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.054375},
										1
									},

									{
										"Level0",
										{0.192,-0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.054375},
										1
									},

									{
										"Level0",
										{0.18000001,-0.054375},
										1
									}
								};
							};
							class Level2PH5 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.16312499},
										1
									},

									{
										"Level0",
										{0.228,0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.16312499},
										1
									},

									{
										"Level0",
										{0.21600001,0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.16312499},
										1
									},

									{
										"Level0",
										{0.204,0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.16312499},
										1
									},

									{
										"Level0",
										{0.192,0.16312499},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.16312499},
										1
									},

									{
										"Level0",
										{0.18000001,0.16312499},
										1
									}
								};
							};
							class Level2PH0 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.054375},
										1
									},

									{
										"Level0",
										{0.228,0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.054375},
										1
									},

									{
										"Level0",
										{0.21600001,0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.054375},
										1
									},

									{
										"Level0",
										{0.204,0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.054375},
										1
									},

									{
										"Level0",
										{0.192,0.054375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.054375},
										1
									},

									{
										"Level0",
										{0.18000001,0.054375},
										1
									}
								};
							};
							class Level2M5 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.12875},
										1
									},

									{
										"Level0",
										{0.23999999,-0.10875},
										1
									},

									{
										"Level0",
										{0.18000001,-0.10875},
										1
									}
								};
							};
							class VALM2_1_5
							{
								type = "text";
								source = "static";
								text = 5;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.14475},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.14475},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.11275},
									1
								};
							};
							class Level2P5 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.088749997},
										1
									},

									{
										"Level0",
										{0.23999999,0.10875},
										1
									},

									{
										"Level0",
										{0.18000001,0.10875},
										1
									}
								};
							};
							class VALP2_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.072750002},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.072750002},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.10475},
									1
								};
							};
							class Level2MH10 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.27187499},
										1
									},

									{
										"Level0",
										{0.228,-0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.27187499},
										1
									},

									{
										"Level0",
										{0.21600001,-0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.27187499},
										1
									},

									{
										"Level0",
										{0.204,-0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.27187499},
										1
									},

									{
										"Level0",
										{0.192,-0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.27187499},
										1
									},

									{
										"Level0",
										{0.18000001,-0.27187499},
										1
									}
								};
							};
							class Level2PH10 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.27187499},
										1
									},

									{
										"Level0",
										{0.228,0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.27187499},
										1
									},

									{
										"Level0",
										{0.21600001,0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.27187499},
										1
									},

									{
										"Level0",
										{0.204,0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.27187499},
										1
									},

									{
										"Level0",
										{0.192,0.27187499},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.27187499},
										1
									},

									{
										"Level0",
										{0.18000001,0.27187499},
										1
									}
								};
							};
							class Level2M10 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.2375},
										1
									},

									{
										"Level0",
										{0.23999999,-0.2175},
										1
									},

									{
										"Level0",
										{0.18000001,-0.2175},
										1
									}
								};
							};
							class VALM2_1_10
							{
								type = "text";
								source = "static";
								text = 10;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.25350001},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.25350001},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.22149999},
									1
								};
							};
							class Level2P10 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.19750001},
										1
									},

									{
										"Level0",
										{0.23999999,0.2175},
										1
									},

									{
										"Level0",
										{0.18000001,0.2175},
										1
									}
								};
							};
							class VALP2_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.1815},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.1815},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.21349999},
									1
								};
							};
							class Level2MH15 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.38062501},
										1
									},

									{
										"Level0",
										{0.228,-0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.38062501},
										1
									},

									{
										"Level0",
										{0.21600001,-0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.38062501},
										1
									},

									{
										"Level0",
										{0.204,-0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.38062501},
										1
									},

									{
										"Level0",
										{0.192,-0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.38062501},
										1
									},

									{
										"Level0",
										{0.18000001,-0.38062501},
										1
									}
								};
							};
							class Level2PH15 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.38062501},
										1
									},

									{
										"Level0",
										{0.228,0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.38062501},
										1
									},

									{
										"Level0",
										{0.21600001,0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.38062501},
										1
									},

									{
										"Level0",
										{0.204,0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.38062501},
										1
									},

									{
										"Level0",
										{0.192,0.38062501},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.38062501},
										1
									},

									{
										"Level0",
										{0.18000001,0.38062501},
										1
									}
								};
							};
							class Level2M15 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.34625},
										1
									},

									{
										"Level0",
										{0.23999999,-0.32624999},
										1
									},

									{
										"Level0",
										{0.18000001,-0.32624999},
										1
									}
								};
							};
							class VALM2_1_15
							{
								type = "text";
								source = "static";
								text = 15;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.36225},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.36225},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.33024999},
									1
								};
							};
							class Level2P15 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.30625001},
										1
									},

									{
										"Level0",
										{0.23999999,0.32624999},
										1
									},

									{
										"Level0",
										{0.18000001,0.32624999},
										1
									}
								};
							};
							class VALP2_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.29025},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.29025},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.32225001},
									1
								};
							};
							class Level2MH20 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.489375},
										1
									},

									{
										"Level0",
										{0.228,-0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.489375},
										1
									},

									{
										"Level0",
										{0.21600001,-0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.489375},
										1
									},

									{
										"Level0",
										{0.204,-0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.489375},
										1
									},

									{
										"Level0",
										{0.192,-0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.489375},
										1
									},

									{
										"Level0",
										{0.18000001,-0.489375},
										1
									}
								};
							};
							class Level2PH20 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.489375},
										1
									},

									{
										"Level0",
										{0.228,0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.489375},
										1
									},

									{
										"Level0",
										{0.21600001,0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.489375},
										1
									},

									{
										"Level0",
										{0.204,0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.489375},
										1
									},

									{
										"Level0",
										{0.192,0.489375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.489375},
										1
									},

									{
										"Level0",
										{0.18000001,0.489375},
										1
									}
								};
							};
							class Level2M20 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.45500001},
										1
									},

									{
										"Level0",
										{0.23999999,-0.435},
										1
									},

									{
										"Level0",
										{0.18000001,-0.435},
										1
									}
								};
							};
							class VALM2_1_20
							{
								type = "text";
								source = "static";
								text = 20;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.47099999},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.47099999},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.43900001},
									1
								};
							};
							class Level2P20 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.41499999},
										1
									},

									{
										"Level0",
										{0.23999999,0.435},
										1
									},

									{
										"Level0",
										{0.18000001,0.435},
										1
									}
								};
							};
							class VALP2_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.39899999},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.39899999},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.43099999},
									1
								};
							};
							class Level2MH25 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.59812498},
										1
									},

									{
										"Level0",
										{0.228,-0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.59812498},
										1
									},

									{
										"Level0",
										{0.21600001,-0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.59812498},
										1
									},

									{
										"Level0",
										{0.204,-0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.59812498},
										1
									},

									{
										"Level0",
										{0.192,-0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.59812498},
										1
									},

									{
										"Level0",
										{0.18000001,-0.59812498},
										1
									}
								};
							};
							class Level2PH25 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.59812498},
										1
									},

									{
										"Level0",
										{0.228,0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.59812498},
										1
									},

									{
										"Level0",
										{0.21600001,0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.59812498},
										1
									},

									{
										"Level0",
										{0.204,0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.59812498},
										1
									},

									{
										"Level0",
										{0.192,0.59812498},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.59812498},
										1
									},

									{
										"Level0",
										{0.18000001,0.59812498},
										1
									}
								};
							};
							class Level2M25 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.56375003},
										1
									},

									{
										"Level0",
										{0.23999999,-0.54374999},
										1
									},

									{
										"Level0",
										{0.18000001,-0.54374999},
										1
									}
								};
							};
							class VALM2_1_25
							{
								type = "text";
								source = "static";
								text = 25;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.57975},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.57975},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.54775},
									1
								};
							};
							class Level2P25 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.52375001},
										1
									},

									{
										"Level0",
										{0.23999999,0.54374999},
										1
									},

									{
										"Level0",
										{0.18000001,0.54374999},
										1
									}
								};
							};
							class VALP2_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.50774997},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.50774997},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.53974998},
									1
								};
							};
							class Level2MH30 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.70687503},
										1
									},

									{
										"Level0",
										{0.228,-0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.70687503},
										1
									},

									{
										"Level0",
										{0.21600001,-0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.70687503},
										1
									},

									{
										"Level0",
										{0.204,-0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.70687503},
										1
									},

									{
										"Level0",
										{0.192,-0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.70687503},
										1
									},

									{
										"Level0",
										{0.18000001,-0.70687503},
										1
									}
								};
							};
							class Level2PH30 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.70687503},
										1
									},

									{
										"Level0",
										{0.228,0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.70687503},
										1
									},

									{
										"Level0",
										{0.21600001,0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.70687503},
										1
									},

									{
										"Level0",
										{0.204,0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.70687503},
										1
									},

									{
										"Level0",
										{0.192,0.70687503},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.70687503},
										1
									},

									{
										"Level0",
										{0.18000001,0.70687503},
										1
									}
								};
							};
							class Level2M30 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.67250001},
										1
									},

									{
										"Level0",
										{0.23999999,-0.65249997},
										1
									},

									{
										"Level0",
										{0.18000001,-0.65249997},
										1
									}
								};
							};
							class VALM2_1_30
							{
								type = "text";
								source = "static";
								text = 30;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.68849999},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.68849999},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.65649998},
									1
								};
							};
							class Level2P30 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.63249999},
										1
									},

									{
										"Level0",
										{0.23999999,0.65249997},
										1
									},

									{
										"Level0",
										{0.18000001,0.65249997},
										1
									}
								};
							};
							class VALP2_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.61650002},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.61650002},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.64850003},
									1
								};
							};
							class Level2MH35 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.81562501},
										1
									},

									{
										"Level0",
										{0.228,-0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.81562501},
										1
									},

									{
										"Level0",
										{0.21600001,-0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.81562501},
										1
									},

									{
										"Level0",
										{0.204,-0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.81562501},
										1
									},

									{
										"Level0",
										{0.192,-0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.81562501},
										1
									},

									{
										"Level0",
										{0.18000001,-0.81562501},
										1
									}
								};
							};
							class Level2PH35 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.81562501},
										1
									},

									{
										"Level0",
										{0.228,0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.81562501},
										1
									},

									{
										"Level0",
										{0.21600001,0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.81562501},
										1
									},

									{
										"Level0",
										{0.204,0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.81562501},
										1
									},

									{
										"Level0",
										{0.192,0.81562501},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.81562501},
										1
									},

									{
										"Level0",
										{0.18000001,0.81562501},
										1
									}
								};
							};
							class Level2M35 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.78125},
										1
									},

									{
										"Level0",
										{0.23999999,-0.76125002},
										1
									},

									{
										"Level0",
										{0.18000001,-0.76125002},
										1
									}
								};
							};
							class VALM2_1_35
							{
								type = "text";
								source = "static";
								text = 35;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.79724997},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.79724997},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.76525003},
									1
								};
							};
							class Level2P35 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.74124998},
										1
									},

									{
										"Level0",
										{0.23999999,0.76125002},
										1
									},

									{
										"Level0",
										{0.18000001,0.76125002},
										1
									}
								};
							};
							class VALP2_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.72525001},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.72525001},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.75725001},
									1
								};
							};
							class Level2MH40 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-0.924375},
										1
									},

									{
										"Level0",
										{0.228,-0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-0.924375},
										1
									},

									{
										"Level0",
										{0.21600001,-0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.212,-0.924375},
										1
									},

									{
										"Level0",
										{0.204,-0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.2,-0.924375},
										1
									},

									{
										"Level0",
										{0.192,-0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-0.924375},
										1
									},

									{
										"Level0",
										{0.18000001,-0.924375},
										1
									}
								};
							};
							class Level2PH40 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,0.924375},
										1
									},

									{
										"Level0",
										{0.228,0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,0.924375},
										1
									},

									{
										"Level0",
										{0.21600001,0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.212,0.924375},
										1
									},

									{
										"Level0",
										{0.204,0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.2,0.924375},
										1
									},

									{
										"Level0",
										{0.192,0.924375},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,0.924375},
										1
									},

									{
										"Level0",
										{0.18000001,0.924375},
										1
									}
								};
							};
							class Level2M40 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.88999999},
										1
									},

									{
										"Level0",
										{0.23999999,-0.87},
										1
									},

									{
										"Level0",
										{0.18000001,-0.87},
										1
									}
								};
							};
							class VALM2_1_40
							{
								type = "text";
								source = "static";
								text = 40;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-0.90600002},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-0.90600002},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.87400001},
									1
								};
							};
							class Level2P40 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.85000002},
										1
									},

									{
										"Level0",
										{0.23999999,0.87},
										1
									},

									{
										"Level0",
										{0.18000001,0.87},
										1
									}
								};
							};
							class VALP2_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.83399999},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.83399999},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.866},
									1
								};
							};
							class Level2MH45 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,-1.03312},
										1
									},

									{
										"Level0",
										{0.228,-1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,-1.03312},
										1
									},

									{
										"Level0",
										{0.21600001,-1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.212,-1.03312},
										1
									},

									{
										"Level0",
										{0.204,-1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.2,-1.03312},
										1
									},

									{
										"Level0",
										{0.192,-1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,-1.03312},
										1
									},

									{
										"Level0",
										{0.18000001,-1.03312},
										1
									}
								};
							};
							class Level2PH45 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.236,1.03312},
										1
									},

									{
										"Level0",
										{0.228,1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.22400001,1.03312},
										1
									},

									{
										"Level0",
										{0.21600001,1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.212,1.03312},
										1
									},

									{
										"Level0",
										{0.204,1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.2,1.03312},
										1
									},

									{
										"Level0",
										{0.192,1.03312},
										1
									},
									{},

									{
										"Level0",
										{0.18799999,1.03312},
										1
									},

									{
										"Level0",
										{0.18000001,1.03312},
										1
									}
								};
							};
							class Level2M45 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,-0.99874997},
										1
									},

									{
										"Level0",
										{0.23999999,-0.97874999},
										1
									},

									{
										"Level0",
										{0.18000001,-0.97874999},
										1
									}
								};
							};
							class VALM2_1_45
							{
								type = "text";
								source = "static";
								text = 45;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,-1.01475},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,-1.01475},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,-0.98275},
									1
								};
							};
							class Level2P45 : Level00
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{0.23999999,0.95875001},
										1
									},

									{
										"Level0",
										{0.23999999,0.97874999},
										1
									},

									{
										"Level0",
										{0.18000001,0.97874999},
										1
									}
								};
							};
							class VALP2_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{0.2,0.94274998},
									1
								};
								right[] =
								{
									"Level0",
									{0.23999999,0.94274998},
									1
								};
								down[] =
								{
									"Level0",
									{0.2,0.97474998},
									1
								};
							};
						};
					};
					class PlaneOrientationCrosshair
					{
						type = "line";
						width = 3;
						points[] =
						{

							{
								"HorizonBankInverted",
								{-0.175,0},
								1
							},

							{
								"HorizonBankInverted",
								{-0.12,0},
								1
							},

							{
								"HorizonBankInverted",
								{-0.1,-0.029999999},
								1
							},

							{
								"HorizonBankInverted",
								{-0.079999998,0},
								1
							},

							{
								"HorizonBankInverted",
								{-0.050000001,0},
								1
							},
							{},

							{
								"HorizonBankInverted",
								{0.050000001,0},
								1
							},

							{
								"HorizonBankInverted",
								{0.079999998,0},
								1
							},

							{
								"HorizonBankInverted",
								{0.1,-0.029999999},
								1
							},

							{
								"HorizonBankInverted",
								{0.12,0},
								1
							},

							{
								"HorizonBankInverted",
								{0.175,0},
								1
							},
							{},

							{
								"HorizonBankInverted",
								{-0,0.059999999},
								1
							},

							{
								"HorizonBankInverted",
								{-0,0.090000004},
								1
							},
							{},

							{
								"PlaneOrientation",
								{-0.205,0},
								1
							},

							{
								"PlaneOrientation",
								{-0.175,0},
								1
							},
							{},

							{
								"PlaneOrientation",
								{0.175,0},
								1
							},

							{
								"PlaneOrientation",
								{0.205,0},
								1
							},
							{},

							{
								"PlaneOrientation",
								{0,-0.029999999},
								1
							},

							{
								"PlaneOrientation",
								{0,-0.0099999998},
								1
							},
							{},

							{
								"PlaneOrientation",
								{0,0.029999999},
								1
							},

							{
								"PlaneOrientation",
								{0,0.0099999998},
								1
							},
							{},

							{
								"PlaneOrientation",
								{-0.029999999,0},
								1
							},

							{
								"PlaneOrientation",
								{-0.0099999998,0},
								1
							},
							{},

							{
								"PlaneOrientation",
								{0.029999999,0},
								1
							},

							{
								"PlaneOrientation",
								{0.0099999998,0},
								1
							},
							{}
						};
					};
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 3;
						points[] =
						{

							{
								"Velocity",
								{0,-0.019772699},
								1
							},

							{
								"Velocity",
								{0.0099999998,-0.0171232},
								1
							},

							{
								"Velocity",
								{0.01732,-0.0098863598},
								1
							},

							{
								"Velocity",
								{0.02,0},
								1
							},

							{
								"Velocity",
								{0.01732,0.0098863598},
								1
							},

							{
								"Velocity",
								{0.0099999998,0.0171232},
								1
							},

							{
								"Velocity",
								{0,0.019772699},
								1
							},

							{
								"Velocity",
								{-0.0099999998,0.0171232},
								1
							},

							{
								"Velocity",
								{-0.01732,0.0098863598},
								1
							},

							{
								"Velocity",
								{-0.02,0},
								1
							},

							{
								"Velocity",
								{-0.01732,-0.0098863598},
								1
							},

							{
								"Velocity",
								{-0.0099999998,-0.0171232},
								1
							},

							{
								"Velocity",
								{0,-0.019772699},
								1
							},
							{},

							{
								"Velocity",
								{0.039999999,0},
								1
							},

							{
								"Velocity",
								{0.02,0},
								1
							},
							{},

							{
								"Velocity",
								{-0.039999999,0},
								1
							},

							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},

							{
								"Velocity",
								{0,-0.039545499},
								1
							},

							{
								"Velocity",
								{0,-0.019772699},
								1
							}
						};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.029999999,0.94},
							1
						};
						right[] =
						{
							{0.079999998,0.94},
							1
						};
						down[] =
						{
							{0.029999999,0.98000002},
							1
						};
					};
					class AmmoCount
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.029999999,0.88999999},
							1
						};
						right[] =
						{
							{0.079999998,0.88999999},
							1
						};
						down[] =
						{
							{0.029999999,0.93000001},
							1
						};
					};
					class CMName
					{
						type = "text";
						source = "cmweapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.91000003,0.94},
							1
						};
						right[] =
						{
							{0.95999998,0.94},
							1
						};
						down[] =
						{
							{0.91000003,0.98000002},
							1
						};
					};
					class CMCount
					{
						type = "text";
						source = "cmammo";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.91000003,0.88999999},
							1
						};
						right[] =
						{
							{0.95999998,0.88999999},
							1
						};
						down[] =
						{
							{0.91000003,0.93000001},
							1
						};
					};
					class FlapsGroup
					{
						type = "group";
						condition = "flaps";
						class FlapsText
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.029999999,0.48500001},
								1
							};
							right[] =
							{
								{0.079999998,0.48500001},
								1
							};
							down[] =
							{
								{0.029999999,0.52499998},
								1
							};
						};
					};
					class TGPGroup
					{
						type = "group";
						condition = "laseron";
						class LaserText
						{
							type = "text";
							source = "static";
							text = "LASER";
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.029999999,0.435},
								1
							};
							right[] =
							{
								{0.079999998,0.435},
								1
							};
							down[] =
							{
								{0.029999999,0.47499999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition = "1-pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] =
							{

								{
									"TargetingPodDir",
									{-0.0070710699,0.0069907098},
									1
								},

								{
									"TargetingPodDir",
									{-0.0212132,0.020972099},
									1
								},
								{},

								{
									"TargetingPodDir",
									{0.0070710699,0.0069907098},
									1
								},

								{
									"TargetingPodDir",
									{0.0212132,0.020972099},
									1
								},
								{},

								{
									"TargetingPodDir",
									{0.0070710699,-0.0069907098},
									1
								},

								{
									"TargetingPodDir",
									{0.0212132,-0.020972099},
									1
								},
								{},

								{
									"TargetingPodDir",
									{-0.0070710699,-0.0069907098},
									1
								},

								{
									"TargetingPodDir",
									{-0.0212132,-0.020972099},
									1
								},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition = "pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] =
							{

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0070710699,0.0069907098},
									1
								},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0212132,0.020972099},
									1
								},
								{},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0070710699,0.0069907098},
									1
								},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0212132,0.020972099},
									1
								},
								{},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0070710699,-0.0069907098},
									1
								},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0212132,-0.020972099},
									1
								},
								{},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0070710699,-0.0069907098},
									1
								},

								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0212132,-0.020972099},
									1
								},
								{}
							};
						};
					};
					class GearGroup
					{
						type = "group";
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.029999999,0.53500003},
								1
							};
							right[] =
							{
								{0.079999998,0.53500003},
								1
							};
							down[] =
							{
								{0.029999999,0.57499999},
								1
							};
						};
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = { 0,0 };
							clipBR[] = { 1,1 };
							class ILS
							{
								type = "line";
								points[] =
								{

									{
										"ILS_W",
										{-0.23999999,0},
										1
									},

									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},

									{
										"ILS_W",
										{-0.23999999,-0.0237273},
										1
									},

									{
										"ILS_W",
										{-0.23999999,0.0237273},
										1
									},
									{},

									{
										"ILS_W",
										{-0.12,-0.017795499},
										1
									},

									{
										"ILS_W",
										{-0.12,0.017795499},
										1
									},
									{},

									{
										"ILS_W",
										{0,-0.0237273},
										1
									},

									{
										"ILS_W",
										{0,0.0237273},
										1
									},
									{},

									{
										"ILS_W",
										{0.12,-0.017795499},
										1
									},

									{
										"ILS_W",
										{0.12,0.017795499},
										1
									},
									{},

									{
										"ILS_W",
										{0.23999999,-0.0237273},
										1
									},

									{
										"ILS_W",
										{0.23999999,0.0237273},
										1
									},
									{},

									{
										"ILS_H",
										{0,-0.23727299},
										1
									},

									{
										"ILS_H",
										{0,0.23727299},
										1
									},
									{},

									{
										"ILS_H",
										{-0.024,-0.23727299},
										1
									},

									{
										"ILS_H",
										{0.024,-0.23727299},
										1
									},
									{},

									{
										"ILS_H",
										{-0.017999999,-0.118636},
										1
									},

									{
										"ILS_H",
										{0.017999999,-0.118636},
										1
									},
									{},

									{
										"ILS_H",
										{-0.024,0},
										1
									},

									{
										"ILS_H",
										{0.024,0},
										1
									},
									{},

									{
										"ILS_H",
										{-0.017999999,0.118636},
										1
									},

									{
										"ILS_H",
										{0.017999999,0.118636},
										1
									},
									{},

									{
										"ILS_H",
										{-0.024,0.23727299},
										1
									},

									{
										"ILS_H",
										{0.024,0.23727299},
										1
									}
								};
							};
							class airport
							{
								type = "line";
								points[] =
								{

									{
										"airport1",
										1
									},

									{
										"airport2",
										1
									},

									{
										"airport4",
										1
									},

									{
										"airport3",
										1
									},

									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class StallGroup
					{
						type = "group";
						condition = "stall";
						color[] = { 1,0,0 };
						blinkingPattern[] = { 0.2,0.2 };
						blinkingStartsOn = 1;
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] =
							{
								{0.5,0.28},
								1
							};
							right[] =
							{
								{0.55000001,0.28},
								1
							};
							down[] =
							{
								{0.5,0.31999999},
								1
							};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.029999999,0.58499998},
								1
							};
							right[] =
							{
								{0.079999998,0.58499998},
								1
							};
							down[] =
							{
								{0.029999999,0.625},
								1
							};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.029999999,0.63499999},
								1
							};
							right[] =
							{
								{0.079999998,0.63499999},
								1
							};
							down[] =
							{
								{0.029999999,0.67500001},
								1
							};
						};
					};
					class PitchNumber
					{
						type = "text";
						source = "horizonDive";
						sourceScale = 57.29578;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.50999999,0.88999999},
							1
						};
						right[] =
						{
							{0.56,0.88999999},
							1
						};
						down[] =
						{
							{0.50999999,0.93000001},
							1
						};
					};
					class PitchText
					{
						type = "text";
						source = "static";
						text = "PITCH";
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.49000001,0.88999999},
							1
						};
						right[] =
						{
							{0.54000002,0.88999999},
							1
						};
						down[] =
						{
							{0.49000001,0.93000001},
							1
						};
					};
					class RollNumber
					{
						type = "text";
						source = "horizonBank";
						sourceScale = 57.29578;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.50999999,0.94},
							1
						};
						right[] =
						{
							{0.56,0.94},
							1
						};
						down[] =
						{
							{0.50999999,0.98000002},
							1
						};
					};
					class RollText
					{
						type = "text";
						source = "static";
						text = "ROLL";
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.49000001,0.94},
							1
						};
						right[] =
						{
							{0.54000002,0.94},
							1
						};
						down[] =
						{
							{0.49000001,0.98000002},
							1
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.5999999;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.13,0.14},
							1
						};
						right[] =
						{
							{0.18000001,0.14},
							1
						};
						down[] =
						{
							{0.13,0.18000001},
							1
						};
					};
					class SpeedText
					{
						type = "text";
						source = "static";
						text = "SPD";
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.11,0.14},
							1
						};
						right[] =
						{
							{0.16,0.14},
							1
						};
						down[] =
						{
							{0.11,0.18000001},
							1
						};
					};
					class TerrainGroup
					{
						type = "group";
						clipTL[] = { 0,0 };
						clipBR[] = { 1,0.60000002 };
						class TerrainArrow
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									{0.84200001,0.40000001},
									1
								},

								{
									{0.86000001,0.40000001},
									1
								},
								{},

								{
									"TerrainBone",
									{0.84200001,-0.016000001},
									1
								},

								{
									"TerrainBone",
									{0.86000001,0},
									1
								},

								{
									"TerrainBone",
									{0.84200001,0.016000001},
									1
								}
							};
						};
					};
					class TerrainText
					{
						type = "text";
						source = "static";
						text = "ATL";
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.85000002,0.1},
							1
						};
						right[] =
						{
							{0.89999998,0.1},
							1
						};
						down[] =
						{
							{0.85000002,0.14},
							1
						};
					};
					class TerrainNumber
					{
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.85000002,0.14},
							1
						};
						right[] =
						{
							{0.89999998,0.14},
							1
						};
						down[] =
						{
							{0.85000002,0.18000001},
							1
						};
					};
					class AltitudeNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.88999999,0.14},
							1
						};
						right[] =
						{
							{0.94,0.14},
							1
						};
						down[] =
						{
							{0.88999999,0.18000001},
							1
						};
					};
					class AltitudeText
					{
						type = "text";
						source = "static";
						text = "ASL";
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.88999999,0.1},
							1
						};
						right[] =
						{
							{0.94,0.1},
							1
						};
						down[] =
						{
							{0.88999999,0.14},
							1
						};
					};
					class AltitudeArrow
					{
						type = "line";
						width = 4;
						points[] =
						{

							{
								{0.898,0.384},
								1
							},

							{
								{0.88,0.40000001},
								1
							},

							{
								{0.898,0.41600001},
								1
							}
						};
					};
					class AltitudeLine
					{
						type = "line";
						width = 4;
						points[] =
						{

							{
								{0.87,0.60000002},
								1
							},

							{
								{0.87,0.2},
								1
							}
						};
					};
					class AltitudeScale
					{
						type = "scale";
						horizontal = 0;
						source = "altitudeASL";
						sourceScale = 1;
						width = 4;
						top = 0.60000002;
						center = 0.40000001;
						bottom = 0.2;
						lineXleft = 0.88;
						lineYright = 0.88999999;
						lineXleftMajor = 0.88;
						lineYrightMajor = 0.89999998;
						majorLineEach = 5;
						numberEach = 5;
						step = 20;
						stepSize = 0.026666701;
						align = "right";
						scale = 1;
						pos[] = { 0.91000003,0.57999998 };
						right[] = { 0.95999998,0.57999998 };
						down[] = { 0.91000003,0.62 };
					};
					class ClimbNumber
					{
						type = "text";
						source = "vspeed";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.94499999,0.68099999},
							1
						};
						right[] =
						{
							{0.995,0.68099999},
							1
						};
						down[] =
						{
							{0.94499999,0.71600002},
							1
						};
					};
					class ClimbArrow
					{
						type = "line";
						width = 4;
						points[] =
						{

							{
								"ClimbRotate",
								{-0.034000002,-0.0060000001},
								1
							},

							{
								"ClimbRotate",
								{-0.044,0},
								1
							},

							{
								"ClimbRotate",
								{-0.034000002,0.0060000001},
								1
							},

							{
								"ClimbRotate",
								{-0.034000002,-0.0060000001},
								1
							},
							{},

							{
								"ClimbRotate",
								{-0.044,0},
								1
							},

							{
								"ClimbRotate",
								{-0.0040000002,0},
								1
							}
						};
					};
					class ClimbLine
					{
						type = "line";
						width = 4;
						points[] =
						{

							{
								{0.898,0.68400002},
								1
							},

							{
								{0.88800001,0.68800002},
								1
							},

							{
								{0.88200003,0.69300002},
								1
							},

							{
								{0.88,0.69999999},
								1
							},

							{
								{0.88200003,0.70700002},
								1
							},

							{
								{0.88800001,0.71200001},
								1
							},

							{
								{0.898,0.71600002},
								1
							},

							{
								{0.95300001,0.71600002},
								1
							},

							{
								{0.95300001,0.68400002},
								1
							},

							{
								{0.898,0.68400002},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.079999998,3.4571701e-009},
								1
							},

							{
								"ClimbFixed",
								{-0.059999999,2.5928799e-009},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.058688901,-0.0123329},
								1
							},

							{
								"ClimbFixed",
								{-0.068470299,-0.0143884},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.050244998,-0.0221163},
								1
							},

							{
								"ClimbFixed",
								{-0.063948199,-0.028147999},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.048540998,-0.0348664},
								1
							},

							{
								"ClimbFixed",
								{-0.0566312,-0.040677398},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.036802199,-0.0404085},
								1
							},

							{
								"ClimbFixed",
								{-0.046839099,-0.051429},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.058688901,0.012333},
								1
							},

							{
								"ClimbFixed",
								{-0.068470299,0.0143884},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.050244998,0.0221163},
								1
							},

							{
								"ClimbFixed",
								{-0.063948199,0.028147999},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.048540998,0.0348664},
								1
							},

							{
								"ClimbFixed",
								{-0.0566312,0.040677398},
								1
							},
							{},

							{
								"ClimbFixed",
								{-0.036802199,0.0404085},
								1
							},

							{
								"ClimbFixed",
								{-0.046839099,0.051429},
								1
							},
							{},

							{
								"ClimbFixed",

								{
									-0.046839099,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.0566312,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.063948199,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.068470299,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.07,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.068470299,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.063948199,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.0566312,
									"scalar NaN"
								},
								1
							},

							{
								"ClimbFixed",

								{
									-0.046839099,
									"scalar NaN"
								},
								1
							}
						};
					};
					class HeadingArrow
					{
						type = "line";
						width = 3;
						points[] =
						{

							{
								{0.47999999,0.145},
								1
							},

							{
								{0.5,0.125},
								1
							},

							{
								{0.51999998,0.145},
								1
							},

							{
								{0.54000002,0.145},
								1
							},

							{
								{0.54000002,0.18000001},
								1
							},

							{
								{0.46000001,0.18000001},
								1
							},

							{
								{0.46000001,0.145},
								1
							},

							{
								{0.47999999,0.145},
								1
							}
						};
					};
					class HeadingLine
					{
						type = "line";
						width = 4;
						points[] =
						{

							{
								{0.30000001,0.12},
								1
							},

							{
								{0.69999999,0.12},
								1
							}
						};
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] =
						{
							{0.5,0.14},
							1
						};
						right[] =
						{
							{0.55000001,0.14},
							1
						};
						down[] =
						{
							{0.5,0.18000001},
							1
						};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 0.1;
						width = 4;
						NeverEatSeaWeed = 1;
						top = 0.30000001;
						center = 0.5;
						bottom = 0.69999999;
						lineXleft = 0.118;
						lineYright = 0.108;
						lineXleftMajor = 0.118;
						lineYrightMajor = 0.097999997;
						majorLineEach = 2;
						numberEach = 6;
						step = 0.5;
						stepSize = 0.034482799;
						align = "center";
						scale = 1;
						pos[] = { 0.30000001,0.050000001 };
						right[] = { 0.34999999,0.050000001 };
						down[] = { 0.30000001,0.090000004 };
					};
					class MGun
					{
						condition = "-2+(mgun+rocket)*ImpactDistance";
						class Cross
						{
							type = "line";
							width = 3;
							points[] =
							{

								{
									"ImpactPointRelative",
									{0,-0.07},
									1
								},

								{
									"ImpactPointRelative",
									{0,-0.029999999},
									1
								},
								{},

								{
									"ImpactPointRelative",
									{0,0.045000002},
									1
								},

								{
									"ImpactPointRelative",
									{0,0.029999999},
									1
								},
								{},

								{
									"ImpactPointRelative",
									{-0.045000002,0},
									1
								},

								{
									"ImpactPointRelative",
									{-0.029999999,0},
									1
								},
								{},

								{
									"ImpactPointRelative",
									{0.045000002,0},
									1
								},

								{
									"ImpactPointRelative",
									{0.029999999,0},
									1
								},
								{},

								{
									"ImpactPointRelative",
									{0,-0.0020000001},
									1
								},

								{
									"ImpactPointRelative",
									{0,0.0020000001},
									1
								},
								{},

								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},

								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type = "line";
							width = 6;
							points[] =
							{

								{
									"ImpactPointRelative",
									{0,-0.039545499},
									1
								},

								{
									"ImpactPointRelative",
									{0,-0.049431801},
									1
								},

								{
									"MissileFlightTimeRot1",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot2",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot3",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot4",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot5",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot6",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot7",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot8",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot9",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot10",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot11",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot12",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot13",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot14",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot15",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot16",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},

								{
									"MissileFlightTimeRot17",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_LAR
						{
							type = "line";
							width = 5;
							points[] =
							{

								{
									"ImpactPointRelative",
									1,

									{
										"LarAmmoMGunMin",
										0,
										-0.0593182
									},
									1
								},

								{
									"ImpactPointRelative",
									1,

									{
										"LarAmmoMGunMin",
										0,
										-0.049431801
									},
									1
								},
								{},

								{
									"ImpactPointRelative",
									1,

									{
										"LarAmmoMGunMax",
										0,
										-0.0593182
									},
									1
								},

								{
									"ImpactPointRelative",
									1,

									{
										"LarAmmoMGunMax",
										0,
										-0.049431801
									},
									1
								},
								{}
							};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] =
							{
								"ImpactPointRelative",
								{-0.0020000001,-0.1},
								1
							};
							right[] =
							{
								"ImpactPointRelative",
								{0.045000002,-0.1},
								1
							};
							down[] =
							{
								"ImpactPointRelative",
								{-0.0020000001,-0.059999999},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type = "group";
						condition = "AAmissile";
						class AAMissileCrosshair
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"WeaponAim",
									{0,-0.247159},
									1
								},

								{
									"WeaponAim",
									{0.043400001,-0.243402},
									1
								},

								{
									"WeaponAim",
									{0.085500002,-0.232255},
									1
								},

								{
									"WeaponAim",
									{0.125,-0.21404},
									1
								},

								{
									"WeaponAim",
									{0.16069999,-0.18932401},
									1
								},

								{
									"WeaponAim",
									{0.19149999,-0.15887401},
									1
								},

								{
									"WeaponAim",
									{0.2165,-0.12358},
									1
								},

								{
									"WeaponAim",
									{0.234925,-0.084528401},
									1
								},

								{
									"WeaponAim",
									{0.2462,-0.042906798},
									1
								},

								{
									"WeaponAim",
									{0.25,0},
									1
								},

								{
									"WeaponAim",
									{0.2462,0.042906798},
									1
								},

								{
									"WeaponAim",
									{0.234925,0.084528401},
									1
								},

								{
									"WeaponAim",
									{0.2165,0.12358},
									1
								},

								{
									"WeaponAim",
									{0.19149999,0.15887401},
									1
								},

								{
									"WeaponAim",
									{0.16069999,0.18932401},
									1
								},

								{
									"WeaponAim",
									{0.125,0.21404},
									1
								},

								{
									"WeaponAim",
									{0.085500002,0.232255},
									1
								},

								{
									"WeaponAim",
									{0.043400001,0.243402},
									1
								},

								{
									"WeaponAim",
									{0,0.247159},
									1
								},

								{
									"WeaponAim",
									{-0.043400001,0.243402},
									1
								},

								{
									"WeaponAim",
									{-0.085500002,0.232255},
									1
								},

								{
									"WeaponAim",
									{-0.125,0.21404},
									1
								},

								{
									"WeaponAim",
									{-0.16069999,0.18932401},
									1
								},

								{
									"WeaponAim",
									{-0.19149999,0.15887401},
									1
								},

								{
									"WeaponAim",
									{-0.2165,0.12358},
									1
								},

								{
									"WeaponAim",
									{-0.234925,0.084528401},
									1
								},

								{
									"WeaponAim",
									{-0.2462,0.042906798},
									1
								},

								{
									"WeaponAim",
									{-0.25,0},
									1
								},

								{
									"WeaponAim",
									{-0.2462,-0.042906798},
									1
								},

								{
									"WeaponAim",
									{-0.234925,-0.084528401},
									1
								},

								{
									"WeaponAim",
									{-0.2165,-0.12358},
									1
								},

								{
									"WeaponAim",
									{-0.19149999,-0.15887401},
									1
								},

								{
									"WeaponAim",
									{-0.16069999,-0.18932401},
									1
								},

								{
									"WeaponAim",
									{-0.125,-0.21404},
									1
								},

								{
									"WeaponAim",
									{-0.085500002,-0.232255},
									1
								},

								{
									"WeaponAim",
									{-0.043400001,-0.243402},
									1
								},

								{
									"WeaponAim",
									{0,-0.247159},
									1
								}
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition = "ATmissile";
						type = "group";
						class ATMissileCrosshair
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},

								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},

								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},

								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},

								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},

								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},

								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},

								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},

								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},

								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},

								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},

								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},

								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},

								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},

								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},

								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class BombCrosshairGroup
					{
						type = "group";
						condition = "bomb";
						class BombCrosshair
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"ImpactPoint",
									{0,-0.098863602},
									1
								},

								{
									"ImpactPoint",
									{0.01736,-0.097360902},
									1
								},

								{
									"ImpactPoint",
									{0.034200002,-0.092902198},
									1
								},

								{
									"ImpactPoint",
									{0.050000001,-0.085615903},
									1
								},

								{
									"ImpactPoint",
									{0.064280003,-0.075729497},
									1
								},

								{
									"ImpactPoint",
									{0.0766,-0.063549504},
									1
								},

								{
									"ImpactPoint",
									{0.086599998,-0.049431801},
									1
								},

								{
									"ImpactPoint",
									{0.093970001,-0.033811402},
									1
								},

								{
									"ImpactPoint",
									{0.098480001,-0.017162699},
									1
								},

								{
									"ImpactPoint",
									{0.1,0},
									1
								},

								{
									"ImpactPoint",
									{0.098480001,0.017162699},
									1
								},

								{
									"ImpactPoint",
									{0.093970001,0.033811402},
									1
								},

								{
									"ImpactPoint",
									{0.086599998,0.049431801},
									1
								},

								{
									"ImpactPoint",
									{0.0766,0.063549504},
									1
								},

								{
									"ImpactPoint",
									{0.064280003,0.075729497},
									1
								},

								{
									"ImpactPoint",
									{0.050000001,0.085615903},
									1
								},

								{
									"ImpactPoint",
									{0.034200002,0.092902198},
									1
								},

								{
									"ImpactPoint",
									{0.01736,0.097360902},
									1
								},

								{
									"ImpactPoint",
									{0,0.098863602},
									1
								},

								{
									"ImpactPoint",
									{-0.01736,0.097360902},
									1
								},

								{
									"ImpactPoint",
									{-0.034200002,0.092902198},
									1
								},

								{
									"ImpactPoint",
									{-0.050000001,0.085615903},
									1
								},

								{
									"ImpactPoint",
									{-0.064280003,0.075729497},
									1
								},

								{
									"ImpactPoint",
									{-0.0766,0.063549504},
									1
								},

								{
									"ImpactPoint",
									{-0.086599998,0.049431801},
									1
								},

								{
									"ImpactPoint",
									{-0.093970001,0.033811402},
									1
								},

								{
									"ImpactPoint",
									{-0.098480001,0.017162699},
									1
								},

								{
									"ImpactPoint",
									{-0.1,0},
									1
								},

								{
									"ImpactPoint",
									{-0.098480001,-0.017162699},
									1
								},

								{
									"ImpactPoint",
									{-0.093970001,-0.033811402},
									1
								},

								{
									"ImpactPoint",
									{-0.086599998,-0.049431801},
									1
								},

								{
									"ImpactPoint",
									{-0.0766,-0.063549504},
									1
								},

								{
									"ImpactPoint",
									{-0.064280003,-0.075729497},
									1
								},

								{
									"ImpactPoint",
									{-0.050000001,-0.085615903},
									1
								},

								{
									"ImpactPoint",
									{-0.034200002,-0.092902198},
									1
								},

								{
									"ImpactPoint",
									{-0.01736,-0.097360902},
									1
								},

								{
									"ImpactPoint",
									{0,-0.098863602},
									1
								},
								{},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,-0.019772699},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0.014,-0.0138409},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,

									{
										"+ 0.02",
										0
									},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0.014,0.0138409},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0.019772699},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{-0.014,0.0138409},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,

									{
										"- 0.02",
										0
									},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{-0.014,-0.0138409},
									1
								},

								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,-0.019772699},
									1
								},
								{},

								{
									"Velocity",
									0.001,
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								},

								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] =
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[] =
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[] =
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = { 0.2,0.2 };
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "LOCKING";
							align = "center";
							scale = 1;
							pos[] =
							{
								{0.47499999,0.81562501},
								1
							};
							right[] =
							{
								{0.53500003,0.81562501},
								1
							};
							down[] =
							{
								{0.47499999,0.86505699},
								1
							};
						};
					};
					class TargetInfo
					{
						condition = "missilelocked";
						class TargetLockedText
						{
							type = "text";
							source = "static";
							text = "TARGET ACQUIRED";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.025,0.20900001},
								1
							};
							right[] =
							{
								{0.064999998,0.20900001},
								1
							};
							down[] =
							{
								{0.025,0.23999999},
								1
							};
						};
						class TimeOfFlightText
						{
							type = "text";
							source = "static";
							text = "TOF:";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.025,0.23899999},
								1
							};
							right[] =
							{
								{0.07,0.23899999},
								1
							};
							down[] =
							{
								{0.025,0.27399999},
								1
							};
						};
						class DistanceText
						{
							type = "text";
							source = "static";
							text = "DISTANCE:";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.025,0.271},
								1
							};
							right[] =
							{
								{0.07,0.271},
								1
							};
							down[] =
							{
								{0.025,0.30599999},
								1
							};
						};
						class TOF_source
						{
							type = "text";
							sourceScale = 1;
							source = "missileflighttime";
							align = "left";
							scale = 1;
							pos[] =
							{
								{0.26899999,0.23899999},
								1
							};
							right[] =
							{
								{0.31900001,0.23899999},
								1
							};
							down[] =
							{
								{0.26899999,0.27399999},
								1
							};
						};
						class TargetDistance
						{
							type = "text";
							source = "targetDist";
							scale = 1;
							sourceLength = 0;
							sourcePrecision = 1;
							sourceScale = 0.001;
							align = "left";
							pos[] =
							{
								{0.26899999,0.271},
								1
							};
							right[] =
							{
								{0.31900001,0.271},
								1
							};
							down[] =
							{
								{0.26899999,0.30599999},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = { 0.30000001,0.30000001 };
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] =
							{
								{0.48500001,0.2175},
								1
							};
							right[] =
							{
								{0.54500002,0.2175},
								1
							};
							down[] =
							{
								{0.48500001,0.26693201},
								1
							};
						};
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "left";
							scale = 1;
							pos[] =
							{
								{0.075000003,0.81562501},
								1
							};
							right[] =
							{
								{0.13500001,0.81562501},
								1
							};
							down[] =
							{
								{0.075000003,0.86505699},
								1
							};
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = ">";
							align = "center";
							scale = 2;
							pos[] =
							{
								{0.090000004,0.81562501},
								1
							};
							right[] =
							{
								{0.11,0.81562501},
								1
							};
							down[] =
							{
								{0.090000004,0.86505699},
								1
							};
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] =
							{
								{0.1,0.81562501},
								1
							};
							right[] =
							{
								{0.16,0.81562501},
								1
							};
							down[] =
							{
								{0.1,0.86505699},
								1
							};
						};
						class WP
						{
							width = 1;
							type = "line";
							points[] =
							{

								{
									"wppoint",
									1,

									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},

								{
									"wppoint",
									1,

									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},

								{
									"wppoint",
									1,

									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};
					class RadarBoxes
					{
						type = "radar";
						pos0[] = { 0.5,0.52999997 };
						pos10[] = { 1.38,1.4 };
						width = 4;
						points[] =
						{

							{
								{-0.0020000001,-0.00197727},
								1
							},

							{
								{0.0020000001,-0.00197727},
								1
							},

							{
								{0.0020000001,0.00197727},
								1
							},

							{
								{-0.0020000001,0.00197727},
								1
							},

							{
								{-0.0020000001,-0.00197727},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"Target",
									{0,-0.039545499},
									1
								},

								{
									"Target",
									{0.0069439998,-0.038944401},
									1
								},

								{
									"Target",
									{0.01368,-0.037160899},
									1
								},

								{
									"Target",
									{0.02,-0.0342464},
									1
								},

								{
									"Target",
									{0.025712,-0.030291799},
									1
								},

								{
									"Target",
									{0.03064,-0.0254198},
									1
								},

								{
									"Target",
									{0.034639999,-0.019772699},
									1
								},

								{
									"Target",
									{0.037588,-0.0135245},
									1
								},

								{
									"Target",
									{0.039391998,-0.0068650902},
									1
								},

								{
									"Target",
									{0.039999999,0},
									1
								},

								{
									"Target",
									{0.039391998,0.0068650902},
									1
								},

								{
									"Target",
									{0.037588,0.0135245},
									1
								},

								{
									"Target",
									{0.034639999,0.019772699},
									1
								},

								{
									"Target",
									{0.03064,0.0254198},
									1
								},

								{
									"Target",
									{0.025712,0.030291799},
									1
								},

								{
									"Target",
									{0.02,0.0342464},
									1
								},

								{
									"Target",
									{0.01368,0.037160899},
									1
								},

								{
									"Target",
									{0.0069439998,0.038944401},
									1
								},

								{
									"Target",
									{0,0.039545499},
									1
								},

								{
									"Target",
									{-0.0069439998,0.038944401},
									1
								},

								{
									"Target",
									{-0.01368,0.037160899},
									1
								},

								{
									"Target",
									{-0.02,0.0342464},
									1
								},

								{
									"Target",
									{-0.025712,0.030291799},
									1
								},

								{
									"Target",
									{-0.03064,0.0254198},
									1
								},

								{
									"Target",
									{-0.034639999,0.019772699},
									1
								},

								{
									"Target",
									{-0.037588,0.0135245},
									1
								},

								{
									"Target",
									{-0.039391998,0.0068650902},
									1
								},

								{
									"Target",
									{-0.039999999,0},
									1
								},

								{
									"Target",
									{-0.039391998,-0.0068650902},
									1
								},

								{
									"Target",
									{-0.037588,-0.0135245},
									1
								},

								{
									"Target",
									{-0.034639999,-0.019772699},
									1
								},

								{
									"Target",
									{-0.03064,-0.0254198},
									1
								},

								{
									"Target",
									{-0.025712,-0.030291799},
									1
								},

								{
									"Target",
									{-0.02,-0.0342464},
									1
								},

								{
									"Target",
									{-0.01368,-0.037160899},
									1
								},

								{
									"Target",
									{-0.0069439998,-0.038944401},
									1
								},

								{
									"Target",
									{0,-0.039545499},
									1
								},
								{}
							};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.049431801},
									1
								},

								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.050000001,0},
									1
								},

								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.049431801},
									1
								},

								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.050000001,0},
									1
								},

								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.049431801},
									1
								}
							};
						};
					};
					class CoordXNumber
					{
						type = "text";
						source = "coordinateX";
						sourceScale = 0.0099999998;
						sourceLength = 3;
						sourceOffset = -0.5;
						align = "left";
						scale = 1;
						pos[] =
						{
							{0.89399999,0.78899997},
							1
						};
						right[] =
						{
							{0.94400001,0.78899997},
							1
						};
						down[] =
						{
							{0.89399999,0.824},
							1
						};
					};
					class CoordYNumber : CoordXNumber
					{
						source = "coordinateY";
						pos[] =
						{
							{0.95099998,0.78899997},
							1
						};
						right[] =
						{
							{1.001,0.78899997},
							1
						};
						down[] =
						{
							{0.95099998,0.824},
							1
						};
					};
					class Time : CoordXNumber
					{
						source = "time";
						text = "%X";
						align = "left";
						pos[] =
						{
							{0.94400001,0.81900001},
							1
						};
						right[] =
						{
							{0.99400002,0.81900001},
							1
						};
						down[] =
						{
							{0.94400001,0.85399997},
							1
						};
					};
					class LAR
					{
						type = "group";
						condition = "(AAmissile + missilelocked)/2";
						class Lines
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									{0.19,0.38},
									1
								},

								{
									{0.17,0.38},
									1
								},

								{
									{0.17,0.64999998},
									1
								},

								{
									{0.19,0.64999998},
									1
								},
								{},

								{
									{0.19,0.58249998},
									1
								},

								{
									{0.17,0.58249998},
									1
								},
								{},

								{
									{0.19,0.51499999},
									1
								},

								{
									{0.17,0.51499999},
									1
								},
								{},

								{
									{0.19,0.44749999},
									1
								},

								{
									{0.17,0.44749999},
									1
								},
								{},

								{
									"LarTargetDist",
									-0.27000001,
									{0.15000001,0.67000002},
									1
								},

								{
									"LarTargetDist",
									-0.27000001,
									{0.17,0.64999998},
									1
								},

								{
									"LarTargetDist",
									-0.27000001,
									{0.15000001,0.63},
									1
								},
								{}
							};
						};
						class Poly
						{
							type = "polygon";
							points[] =
							{

								{

									{
										"LarAmmoMin",
										-0.27000001,
										{0.171,0.64999998},
										1
									},

									{
										"LarAmmoMax",
										-0.27000001,
										{0.171,0.64999998},
										1
									},

									{
										"LarAmmoMax",
										-0.27000001,
										{0.18799999,0.64999998},
										1
									},

									{
										"LarAmmoMin",
										-0.27000001,
										{0.18799999,0.64999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type = "text";
							source = "LarTop";
							sourceScale = 0.001;
							scale = 1;
							pos[] =
							{
								{0.2,0.36000001},
								1
							};
							right[] =
							{
								{0.23999999,0.36000001},
								1
							};
							down[] =
							{
								{0.2,0.40000001},
								1
							};
							align = "right";
						};
						class MiddleText : TopText
						{
							source = "LarTop";
							sourcePrecision = -1;
							sourceScale = 0.00050000002;
							pos[] =
							{
								{0.2,0.495},
								1
							};
							right[] =
							{
								{0.23999999,0.495},
								1
							};
							down[] =
							{
								{0.2,0.53500003},
								1
							};
						};
						class SpeedText : TopText
						{
							source = "LarTargetSpeed";
							align = "left";
							sourceScale = 3.5999999;
							pos[] =
							{
								"LarTargetDist",
								-0.27000001,
								{0.14,0.63},
								1
							};
							right[] =
							{
								"LarTargetDist",
								-0.27000001,
								{0.18000001,0.63},
								1
							};
							down[] =
							{
								"LarTargetDist",
								-0.27000001,
								{0.14,0.67000002},
								1
							};
						};
					};
				};
			};
			class Plane_MFD_02
			{
				topLeft = "MFD_2_TL";
				topRight = "MFD_2_TR";
				bottomLeft = "MFD_2_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0.1;
				borderBottom = 0;
				color[] = { 0.15000001,1,0.15000001,1 };
				enableParallax = 0;
				font = "LucidaConsoleB";
				class material
				{
					ambient[] = { 5,5,5,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 200,200,200,1 };
				};
				class Bones
				{
					class Center
					{
						type = "fixed";
						pos[] = { 0.35299999,0.41 };
					};
				};
				class Draw
				{
					alpha = 1;
					color[] = { 1,1,1 };
					condition = "on";
					class Pylon1
					{
						type = "pylonicon";
						pos[] =
						{
							"Center",
							{0.396,0},
							1
						};
						pylon = 1;
						name = "Plane_CAS_02";
					};
					class Pylon2 : Pylon1
					{
						pos[] =
						{
							"Center",
							{0.33000001,0},
							1
						};
						pylon = 2;
					};
					class Pylon3 : Pylon1
					{
						pos[] =
						{
							"Center",
							{0.264,0},
							1
						};
						pylon = 3;
					};
					class Pylon4 : Pylon1
					{
						pos[] =
						{
							"Center",
							{0.198,0},
							1
						};
						pylon = 4;
					};
					class Pylon5 : Pylon1
					{
						pos[] =
						{
							"Center",
							{0.132,0},
							1
						};
						pylon = 5;
					};
					class Pylon6 : Pylon1
					{
						pos[] =
						{
							"Center",
							{-0.132,0},
							1
						};
						pylon = 6;
					};
					class Pylon7 : Pylon1
					{
						pos[] =
						{
							"Center",
							{-0.198,0},
							1
						};
						pylon = 7;
					};
					class Pylon8 : Pylon1
					{
						pos[] =
						{
							"Center",
							{-0.264,0},
							1
						};
						pylon = 8;
					};
					class Pylon9 : Pylon1
					{
						pos[] =
						{
							"Center",
							{-0.33000001,0},
							1
						};
						pylon = 9;
					};
					class Pylon10 : Pylon1
					{
						pos[] =
						{
							"Center",
							{-0.396,0},
							1
						};
						pylon = 10;
					};
					class CurrentWeapon
					{
						type = "text";
						source = "weapon";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] =
						{
							{0.88999999,0.07},
							1
						};
						right[] =
						{
							{0.935,0.07},
							1
						};
						down[] =
						{
							{0.88999999,0.105},
							1
						};
					};
					class CurrentAmmo
					{
						type = "text";
						source = "ammo";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] =
						{
							{0.88999999,0.12},
							1
						};
						right[] =
						{
							{0.935,0.12},
							1
						};
						down[] =
						{
							{0.88999999,0.155},
							1
						};
					};
					class Gatling_Ammo
					{
						type = "text";
						source = "ammo";
						sourceIndex = 0;
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							{0.49000001,0.63999999},
							1
						};
						right[] =
						{
							{0.54000002,0.63999999},
							1
						};
						down[] =
						{
							{0.49000001,0.68099999},
							1
						};
					};
					class CM_Name
					{
						type = "text";
						source = "CMWeapon";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							{0.49000001,0.85000002},
							1
						};
						right[] =
						{
							{0.52999997,0.85000002},
							1
						};
						down[] =
						{
							{0.49000001,0.88099998},
							1
						};
					};
					class CM_Ammo
					{
						type = "text";
						source = "CMAmmo";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							{0.49000001,0.88},
							1
						};
						right[] =
						{
							{0.52999997,0.88},
							1
						};
						down[] =
						{
							{0.49000001,0.91100001},
							1
						};
					};
				};
			};
		};
	};
};