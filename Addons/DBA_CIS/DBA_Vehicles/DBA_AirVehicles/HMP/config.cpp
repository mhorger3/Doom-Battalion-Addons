class cfgPatches
{
	class DBA_AirVehicles
	{
		author = "Vulgar";
		requiredVersion = 0.1;
		requiredAddons[] =
		{"A3_Air_F"};
		units[] =
		{
			"DBA_HMP_F",
			"DBA_HMP_TRANSPORT_F",
			"DBA_HMP_Wreck",
		};
		weapons[] = {};
	};
};
class SensorTemplatePassiveRadar;
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
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class VehicleSystemsTemplateLeftCommander : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class cfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F : Helicopter
	{
		class Turrets;
		class Hitpoints;
	};
	class Helicopter_Base_H : Helicopter_Base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class Components;
		class HitPoints : Hitpoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitAvionics;
		};
		class Reflectors
		{
			class Right;
		};
	};
	class DBA_HMP_BASE  : Helicopter_Base_H
	{
		ace_fastroping_enabled = 0;
		ace_cargo_hasCargo = 0;
		weapons[] =
		{
			"DBA_Aircraft_Heavy_Lasers_Red",
			"dba_wynd_ugm",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"DBA_generic_aircraft_cannon_red_x200_mag",
			"DBA_generic_aircraft_cannon_red_x200_mag",
			"dba_ugm_x10_mag",
			"dba_ugm_x10_mag",
			"240Rnd_CMFlareMagazine",
			"240Rnd_CMFlareMagazine",
			"240Rnd_CMFlareMagazine"
		};
		class EventHandlers : Eventhandlers
		{
		};
		fuelCapacity = 2500;
		fuelConsumptionRate = 0.138;
		side = 0;
		faction = "O_DBA_CIS_F";
		editorSubcategory = "O_DBA_CIS_Helicopters";
		vehicleClass = "O_DBA_CIS_Helicopters";
		crew = "O_DBA_CIS_OOM_Pilot_Droid_F";
		typicalCargo[] =
		{
			"O_DBA_CIS_OOM_Pilot_Droid_F"
		};
		icon = "kobra\442_a_vehicle\hmp\data\ui\hmp_icon.paa";
		editorpreview = "kobra\442_a_vehicle\hmp\data\ui\hmp_preview.jpg";
		picture = "";
		availableForSupportTypes[] =
		{
			"CAS_Heli",
			"Drop",
			"Transport"
		};
		cost = 200;
		armor = 100;
		altFullForce = 10000;
		altNoForce = 15000;
		maxSpeed = 500;
		maxFordingDepth = 5;
		incomingMissileDetectionSystem = "1 + 2 + 4 + 8 + 16 + 32";
		LockDetectionSystem = "1 + 2 + 4 + 8 + 16 + 32";
		allowTabLock = 1;
		getInRadius = 5;
		hideWeaponsCargo = 1;
		cargoCanEject = 0;
		isUav = 0;
		unloadInCombat = 0;
		driverOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		mainBladeRadius = 0;
		liftForceCoef = 3;
		bodyFrictionCoef = 11;
		cyclicAsideForceCoef = 2.5;
		cyclicForwardForceCoef = 1.5;
		backRotorForceCoef = 2;
		unitInfoTypeLite = "RscUnitInfoAirRTDBasic";
		unitInfoTypeRTD = "RscOptics_AV_pilot";
		draconicForceXCoef = 11;
		draconicForceYCoef = 2;
		draconicForceZCoef = 2;
		draconicTorqueXCoef = 0.050000001;
		draconicTorqueYCoef = 0;
		accuracy = 0.5;
		displayname = "Test HMP Gunship";
		model = "kobra\442_a_vehicle\hmp\hmp_gunship.p3d";
		driverAction = "apctracked2_slot1_in";
		driverInAction = "apctracked2_slot1_in";
		precisegetinout = 1;
		usePreciseGetInAction = 1;
		GetInAction = "GetInLow";
		GetOutAction = "GetOutLow";
		radarType = 8;
		extCameraPosition[] = {0,3,-23};
		driverforceoptics = 1;
		class damage
		{
			tex[] = {};
			mat[] =
			{
				"kobra\442_a_vehicle\hmp\data\body.rvmat",
				"kobra\442_a_vehicle\hmp\data\body_damage.rvmat",
				"kobra\442_a_vehicle\hmp\data\body_destruction.rvmat",
				"kobra\442_a_vehicle\hmp\data\engine.rvmat",
				"kobra\442_a_vehicle\hmp\data\engine.rvmat",
				"kobra\442_a_vehicle\hmp\data\engine.rvmat",
				"kobra\442_a_vehicle\hmp\data\eyes.rvmat",
				"kobra\442_a_vehicle\hmp\data\eyes.rvmat",
				"kobra\442_a_vehicle\hmp\data\eyes.rvmat",
				"kobra\442_a_vehicle\hmp\data\head.rvmat",
				"kobra\442_a_vehicle\hmp\data\head_damage.rvmat",
				"kobra\442_a_vehicle\hmp\data\head_destruction.rvmat",
				"kobra\442_a_vehicle\hmp\data\rockets.rvmat",
				"kobra\442_a_vehicle\hmp\data\rockets.rvmat",
				"kobra\442_a_vehicle\hmp\data\rockets.rvmat",
				"kobra\442_a_vehicle\hmp\data\seats.rvmat",
				"kobra\442_a_vehicle\hmp\data\seats.rvmat",
				"kobra\442_a_vehicle\hmp\data\seats.rvmat",
				"kobra\442_a_vehicle\hmp\data\wings.rvmat",
				"kobra\442_a_vehicle\hmp\data\wings_damage.rvmat",
				"kobra\442_a_vehicle\hmp\data\wings_destruction.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position = "Exhaust1";
				direction = "Exhaust1_dir";
				effect = "ExhaustsEffectPlane";
			};
			class Exhaust_2
			{
				position = "Exhaust2";
				direction = "Exhaust2_dir";
				effect = "ExhaustsEffectPlane";
			};
		};
		driveOnComponent[] =
		{
			"Skids"
		};
		class ViewPilot : ViewPilot
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class Viewoptics : Viewoptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
			visionMode[] =
			{
				"Normal",
				"NVG",
				"Ti"
			};
			thermalMode[] = {0,1};
		};
		class transportweapons
		{
		};
		class transportmagazines
		{
		};
		class transportItems
		{
		};
		class transportBackpacks
		{
		};
		class Reflectors
		{
			class Left
			{
				color[] = {10000,7500,7000};
				ambient[] = {100,75,70};
				intensity = 50;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				position = "light_l";
				direction = "light_l_end";
				hitpoint = "light_l";
				selection = "light_l";
			};
			class Right : Left
			{
				position = "light_r";
				direction = "light_r_end";
				hitpoint = "light_r";
				selection = "light_r";
			};
		};
		class simpleobject
		{
			animate[] =
			{

				{
					"CollisionLightRed1",
					0
				},

				{
					"CollisionLightGreen1",
					0
				},

				{
					"CollisionLightWhite1",
					0
				},

				{
					"CollisionLightWhite2",
					0
				},

				{
					"light_l",
					0
				},

				{
					"light_r",
					0
				}
			};
			hide[] =
			{
				"light_l",
				"light_r"
			};
			verticaloffset = 0;
			verticaloffsetworld = 0;
		};
		class animationsources
		{
		};
		class attributes
		{
		};
		animationlist[] = {};
		class HitPoints : HitPoints
		{
			class HitHull
			{
				armor = 999;
				convexComponent = "hull_hit";
				depends = "Total";
				explosionShielding = 1;
				material = 51;
				name = "hull_hit";
				passThrough = 1;
				visual = "zbytek";
				radius = 0.0099999998;
			};
			class HitFuel
			{
				convexcomponent = "fuel_hit";
				hitpoint = "fuel_hit";
				name = "fuel_hit";
				explosionShielding = 2;
				radius = 0.1;
				visual = "";
				passthrough = 0.1;
				minimalhit = 0.1;
				material = -1;
				armor = 0.5;
			};
			class HitEngine
			{
				armor = 0.25;
				convexComponent = "engine_hit";
				explosionShielding = 2;
				material = 51;
				name = "engine_hit";
				hitpoint = "engine_hit";
				passThrough = 1;
				visual = "";
				radius = 0.2;
			};
			class HitHRotor
			{
				armor = 3;
				convexComponent = "main_rotor_hit";
				explosionShielding = 2.5;
				material = 51;
				name = "main_rotor_hit";
				passThrough = 0.1;
				visual = "";
				radius = 0.0099999998;
			};
			class HitVRotor
			{
				armor = 3;
				convexComponent = "tail_rotor_hit";
				explosionShielding = 6;
				material = 51;
				name = "tail_rotor_hit";
				passThrough = 0.30000001;
				visual = "";
				radius = 0.0099999998;
			};
			class HitAvionics
			{
				armor = 1;
				convexComponent = "avionics_hit";
				explosionShielding = 2;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual = "";
				radius = 0.5;
			};
		};
		class MarkerLights
		{
			class CollisionLightRed1
			{
				color[] = {0.80000001,0,0};
				ambient[] = {0.079999998,0,0};
				intensity = 75;
				name = "positionlight_red_1_pos";
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.050000001;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class CollisionLightGreen1 : CollisionLightRed1
			{
				color[] = {0,0.80000001,0};
				ambient[] = {0,0.079999998,0};
				name = "positionlight_green_1_pos";
			};
			class CollisionLightWhite1 : CollisionLightRed1
			{
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				name = "positionlight_white_1_pos";
				blinking = 1;
				blinkingStartsOn = 1;
				blinkingPattern[] = {0.1,0.89999998};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.34999999;
				drawLightCenterSize = 0.050000001;
			};
			class CollisionLightWhite2 : CollisionLightWhite1
			{
				name = "positionlight_white_2_pos";
			};
		};
		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class activeRadarSenorComponent
					{
						aimDown = 30;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 125;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 3000;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class AntiRadiationSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class IRSensorComponent
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
						aimDown = 0;
						allowsMarking = 1;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "IRSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 2000;
					};
					class VisualSensorComponent
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
						aimDown = 0;
						animDirection = "";
						allowsMarking = 1;
						color[] = {1,1,0.5,0.80000001};
						componentType = "VisualSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.94;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						nightRangeCoef = 0;
						typeRecognitionDistance = 2000;
					};
					class PassiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
					};
					class LaserSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "LaserSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
					};
					class NVSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "NVSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
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
						resource = "RscCustomInfoMiniMap";
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
						range[] = {4000,2000,16000,8000};
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
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		soundEngineOnInt[] =
		{
			"kobra\442_a_vehicle\hmp\sounds\hmp_start.wss",
			0.79432797,
			1
		};
		soundEngineOnExt[] =
		{
			"kobra\442_a_vehicle\hmp\sounds\hmp_start.wss",
			0.79432797,
			1,
			600
		};
		soundEngineOffInt[] =
		{
			"kobra\442_a_vehicle\hmp\sounds\hmp_end.wss",
			0.79432797,
			1
		};
		soundEngineOffExt[] =
		{
			"kobra\442_a_vehicle\hmp\sounds\hmp_end.wss",
			0.79432797,
			1,
			600
		};
		soundLocked[] =
		{
			"kobra\442_a_vehicle\laat\sounds\laat_lock_on_beep.wss",
			1,
			1
		};
		soundIncommingMissile[] =
		{
			"kobra\442_a_vehicle\laat\sounds\laat_lock_on_alert_beep.wss",
			0.316228,
			1
		};
		class sounds
		{
			class EngineInt
			{
				sound[] =
				{
					"kobra\442_a_vehicle\hmp\sounds\hmp_engine_1.wss",
					1.25893,
					1
				};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class EngineExt
			{
				sound[] =
				{
					"kobra\442_a_vehicle\hmp\sounds\hmp_engine_2.wss",
					1.25893,
					1,
					600
				};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RainExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_int_open",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.25893,
					1,
					500
				};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.25893,
					1,
					500
				};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					700
				};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					700
				};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					"db-7",
					1,
					50
				};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
					0.316228,
					1,
					50
				};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class rotorLowAlarmInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.316228,
					1
				};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387201,
					1,
					20
				};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
		};
		memoryPointsGetInDriver = "pos_cargo";
		memoryPointsGetInDriverDir = "pos_cargo_dir";
		memoryPointsGetInCargo = "pos_cargo";
		memoryPointsGetInCargoDir = "pos_cargo_dir";
		memoryPointsGetInGunner = "pos_cargo";
		memoryPointsGetInGunnerDir = "pos_cargo_dir";
		memoryPointsGetInCargoPrecise[] =
		{
			"pos_cargo"
		};
		memoryPointTaskMarker = "TaskMarker_1_pos";
		memoryPointDriverOptics = "driver_view";
		memorypointLRocket = "rocketl";
		memorypointRRocket = "rocketr";
		memorypointLmissile = "rocketl";
		memorypointRmissile = "rocketR";
		memorypointcm[] =
		{
			"flare_launcher",
			"flare_launcher2"
		};
		memorypointcmdir[] =
		{
			"flare_launcher_dir",
			"flare_launcher2_dir"
		};
		gunBeg[] =
		{
			"usti hlavne 1",
			"usti hlavne 2"
		};
		gunEnd[] =
		{
			"konec hlavne 1",
			"konec hlavne 2"
		};
		memoryPointGun[] =
		{
			"usti hlavne 1",
			"usti hlavne 2"
		};
		class useractions
		{
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewGunner
				{
					visionMode[] =
					{
						"Normal",
						"NVG"
					};
					gunnerOpticsEffect[] = {};
					stabilizedInAxes = 0;
					directionStabilized = 0;
					horizontallyStabilized = 0;
					initFov = 1;
					minFov = 0.60000002;
					maxFov = 0.85000002;
					initAngleX = 0;
					minAngleX = 90;
					maxAngleX = 270;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = -30;
					minMoveX = -0.1;
					maxMoveX = 0.1;
					minMoveY = -0.025;
					maxMoveY = 0.1;
					minMoveZ = -0.1;
					maxMoveZ = 0.1;
					gunnerOpticsModel = "";
				};
				visionMode[] =
				{
					"Normal",
					"NVG",
					"Ti"
				};
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				class Viewoptics
				{
					visionMode[] =
					{
						"Normal",
						"NVG",
						"Ti"
					};
					minAngleX = 0;
					maxAngleX = 0;
					initAngleX = 0;
					minAngleY = -15;
					maxAngleY = 15;
					initAngleY = 0;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 0.75;
				};
				class OpticsIn
				{
					class Wide
					{
						visionMode[] =
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[] = {0,1};
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = -15;
						maxAngleY = 15;
						initFov = 0.46599999;
						minFov = 0.46599999;
						maxFov = 0.46599999;
						opticsDisplayName = "W";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium : Wide
					{
						initFov = 0.093000002;
						minFov = 0.093000002;
						maxFov = 0.093000002;
						opticsDisplayName = "M";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow : Wide
					{
						initFov = 0.028999999;
						minFov = 0.028999999;
						maxFov = 0.028999999;
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						visionMode[] =
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsEffect[] = {};
						initAngleX = -10;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
						gunnerOpticsModel = "";
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components : components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay
							{
								range[] = {4000,2000,16000,8000};
								componentType = "SensorsDisplayComponent";
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
						class Components : components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay
							{
								range[] = {4000,2000,16000,8000};
								componentType = "SensorsDisplayComponent";
								resource = "RscCustomInfoSensors";
							};
						};
						defaultDisplay = "SensorDisplay";
					};
				};
				gunnerOpticsEffect[] =
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				primaryObserver = 0;
				gunnerType = "k_swla_unit_b1_e5";
				primaryGunner = 1;
				primary = 1;
				usePip = 1;
				turretFollowFreeLook = 0;
				gunnerCompartments = "Compartment2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				proxyindex = 1;
				isCopilot = 0;
				gunnerName = "Center Gun";
				showHMD = 1;
				castCargoShadow = 0;
				viewCargoShadow = 0;
				castDriverShadow = 0;
				viewDriverShadow = 0;
				CanEject = 0;
				hideWeaponsGunner = 1;
				memoryPointsGetInGunner = "pos_cargo";
				memoryPointsGetInGunnerDir = "pos_cargo_dir";
				memoryPointGunnerOutOptics = "gunnerviewout";
				discreteDistanceInitIndex = 5;
				gunnerAction = "apctracked2_slot1_in";
				gunnerInAction = "apctracked2_slot1_in";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				gunnerUsesPilotView = 0;
				commanding = -1;
				startEngine = 0;
				stabilizedInAxes = 3;
				showAllTargets = 4;
				memoryPointLRocket = "RocketL";
				memoryPointRRocket = "RocketR";
				memoryPointLMissile = "RocketL";
				memoryPointRMissile = "RocketR";
				selectionFireAnim = "zasleh_c";
				weapons[] =
				{
					"DBA_Aircraft_Heavy_Lasers_Red",
					"DBA_Aircraft_Heavy_Lasers_Red"
				};
				magazines[] =
				{
					"DBA_generic_aircraft_cannon_red_x200_mag",
					"DBA_generic_aircraft_cannon_red_x200_mag",
					"DBA_generic_aircraft_cannon_red_x200_mag",
					"DBA_generic_aircraft_cannon_red_x200_mag"
				};
				gunBeg = "usti hlavne 3";
				gunEnd = "konec hlavne 3";
				memoryPointGun = "konec hlavne 3";
				outGunnerMayFire = 1;
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				gunnerOpticsModel = "";
				gunnerForceOptics = 1;
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
				soundServo[] =
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.31622776,
					1,
					30
				};
				soundServoVertical[] =
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.31622776,
					1,
					30
				};
				minElev = -15;
				maxElev = 45;
				minTurn = -40;
				maxTurn = 40;
				initElev = 0;
				initTurn = 0;
				minCamElev = -10;
				maxCamElev = -45;
				memoryPointGunnerOptics = "gunner_view";
			};
			class MainTurret2 : MainTurret
			{
				gunnerName = "Left Gun";
				proxyindex = 2;
				weapons[] =
				{
					"DBA_Aircraft_Lasers_Generic"
				};
				gunnerCompartments = "Compartment3";
				magazines[] =
				{
					"DBA_generic_aircraft_gun_x1000_mag",
					"DBA_generic_aircraft_gun_x1000_mag"
				};
				minElev = -80;
				maxElev = 80;
				minTurn = -20;
				maxTurn = 120;
				initElev = 0;
				initTurn = 45;
				minCamElev = -10;
				maxCamElev = -45;
				memoryPointGunnerOptics = "gunner_left_view";
				selectionFireAnim = "zasleh_l_1";
				gunBeg = "usti hlavne 5";
				gunEnd = "konec hlavne 5";
				memoryPointGun = "konec hlavne 5";
				enableManualFire = 0;
				animationSourceBody = "mainturret2";
				animationSourceCamElev = "camElev";
				animationSourceGun = "mainGun2";
				gun = "mainGun2";
			};
			class MainTurret3 : MainTurret2
			{
				gunnerName = "Right Gun";
				gunnerCompartments = "Compartment4";
				proxyindex = 3;
				minElev = -80;
				maxElev = 80;
				minTurn = -120;
				maxTurn = 20;
				initElev = 0;
				initTurn = -45;
				minCamElev = -10;
				maxCamElev = -45;
				memoryPointGunnerOptics = "gunner_right_view";
				selectionFireAnim = "zasleh_r_1";
				gunBeg = "usti hlavne 4";
				gunEnd = "konec hlavne 4";
				memoryPointGun = "konec hlavne 4";
				animationSourceBody = "mainturret3";
				animationSourceCamElev = "camElev";
				animationSourceGun = "mainGun3";
				gun = "mainGun3";
			};
		};
	};
	class DBA_HMP_F : DBA_HMP_BASE
	{
		author = "Vulgar";
		displayname = "HMP Gunship";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselections[] =
		{
			"body",
			"engine",
			"eyes",
			"head",
			"rockets",
			"seats",
			"wings"
		};
		hiddenselectionstextures[] =
		{
			"kobra\442_a_vehicle\hmp\data\body_co.paa",
			"kobra\442_a_vehicle\hmp\data\engine_co.paa",
			"kobra\442_a_vehicle\hmp\data\eyes_co.paa",
			"kobra\442_a_vehicle\hmp\data\head_co.paa",
			"kobra\442_a_vehicle\hmp\data\missiles_co.paa",
			"",
			"kobra\442_a_vehicle\hmp\data\wings_co.paa"
		};
		class components : Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "kobra\442_a_vehicle\hmp\data\ui\cis_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonMissile_Missile_BIM9X_x1";
						priority = 5;
						hardpoints[] =
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"SCALPEL_1RND",
							"B_ASRAAM",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_SDB_QUAD_RAIL",
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						turret[] = {};
						UIposition[] = {0.059999999,0.40000001};
					};
					class PylonRight1 : PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.63999999,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "Default";
						attachment[] =
						{
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
					class AT
					{
						displayName = "AT";
						attachment[] =
						{
							"PylonRack_12Rnd_PG_missiles",
							"PylonMissile_1Rnd_LG_scalpel",
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"PylonMissile_1Rnd_LG_scalpel",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] =
						{
							"PylonRack_12Rnd_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonRack_12Rnd_missiles"
						};
					};
				};
			};
		};
		class textureSources
		{
			class base
			{
				displayname = "Base";
				author = "Kobra Mod Team Team";
				textures[] =
				{
					"kobra\442_a_vehicle\hmp\data\body_co.paa",
					"kobra\442_a_vehicle\hmp\data\engine_co.paa",
					"kobra\442_a_vehicle\hmp\data\eyes_co.paa",
					"kobra\442_a_vehicle\hmp\data\head_co.paa",
					"kobra\442_a_vehicle\hmp\data\missiles_co.paa",
					"",
					"kobra\442_a_vehicle\hmp\data\wings_co.paa"
				};
				factions[] =
				{
					"O_DBA_CIS_F"
				};
			};
			class unmarked : base
			{
				displayname = "Unmarked";
				textures[] =
				{
					"kobra\442_a_vehicle\hmp\data\b_body_co.paa",
					"kobra\442_a_vehicle\hmp\data\engine_co.paa",
					"kobra\442_a_vehicle\hmp\data\eyes_co.paa",
					"kobra\442_a_vehicle\hmp\data\b_head_co.paa",
					"kobra\442_a_vehicle\hmp\data\b_missiles_co.paa",
					"",
					"kobra\442_a_vehicle\hmp\data\b_wings_co.paa"
				};
			};
		};
	};
	class DBA_HMP_TRANSPORT_F : DBA_HMP_F
	{
		author = "Vulgar";
		displayname = "HMP Gunship (Transport)";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselections[] =
		{
			"body",
			"engine",
			"eyes",
			"head",
			"rockets",
			"seats",
			"wings"
		};
		hiddenselectionstextures[] =
		{
			"kobra\442_a_vehicle\hmp\data\body_co.paa",
			"kobra\442_a_vehicle\hmp\data\engine_co.paa",
			"kobra\442_a_vehicle\hmp\data\eyes_co.paa",
			"kobra\442_a_vehicle\hmp\data\head_co.paa",
			"kobra\442_a_vehicle\hmp\data\missiles_co.paa",
			"kobra\442_a_vehicle\hmp\data\seats_co.paa",
			"kobra\442_a_vehicle\hmp\data\wings_co.paa"
		};
		transportSoldier = 10;
		cargoAction[] =
		{
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in"
		};
		cargoGetInAction[] =
		{
			"GetInLow"
		};
		cargoGetOutAction[] =
		{
			"GetOutLow"
		};
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10};
		class textureSources
		{
			class base
			{
				displayname = "Base";
				author = "Kobra Mod Team";
				textures[] =
				{
					"kobra\442_a_vehicle\hmp\data\body_co.paa",
					"kobra\442_a_vehicle\hmp\data\engine_co.paa",
					"kobra\442_a_vehicle\hmp\data\eyes_co.paa",
					"kobra\442_a_vehicle\hmp\data\head_co.paa",
					"kobra\442_a_vehicle\hmp\data\missiles_co.paa",
					"kobra\442_a_vehicle\hmp\data\seats_co.paa",
					"kobra\442_a_vehicle\hmp\data\wings_co.paa"
				};
				factions[] =
				{
					"O_DBA_CIS_F"
				};
			};
			class unmarked : base
			{
				displayname = "Unmarked";
				textures[] =
				{
					"kobra\442_a_vehicle\hmp\data\b_body_co.paa",
					"kobra\442_a_vehicle\hmp\data\engine_co.paa",
					"kobra\442_a_vehicle\hmp\data\eyes_co.paa",
					"kobra\442_a_vehicle\hmp\data\b_head_co.paa",
					"kobra\442_a_vehicle\hmp\data\b_missiles_co.paa",
					"kobra\442_a_vehicle\hmp\data\b_seats_co.paa",
					"kobra\442_a_vehicle\hmp\data\b_wings_co.paa"
				};
			};
		};
	};
	class Wreck_base_F;
	class DBA_HMP_Wreck : Wreck_base_F
	{
		author = "Vulgar";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon = "iconObject_1x2";
		displayname = "HMP Gunship (Wrecked)";
		model = "kobra\442_a_vehicle\hmp\hmp_gunship_w.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};
};