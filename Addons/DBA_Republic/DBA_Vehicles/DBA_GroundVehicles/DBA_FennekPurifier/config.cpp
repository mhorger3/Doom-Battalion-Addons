class CfgPatches
{
	class DBA_FennekPurifier
	{
		author = "Vulgar";
		requiredAddons[] =
		{
			"A3_Soft_F_Beta"
		};
		weapons[] =
		{
		};
		units[] = {"DBA_FennekPurifier"};
	};
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
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
class CfgVehicles
{
	class LandVehicle;
	class Car : LandVehicle
	{
		class NewTurret;
	};
	class Car_F : Car
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				disableSoundAttenuation = 0;
				class ViewOptics;
				class Components;
				class ViewGunner;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class ViewPilot;
		class AnimationSources;
		class Components;
	};
	class DBA_FennekPurifier_base : Car_F
	{
		features = "Randomization: No						<br />Camo selections: 2 - the body, hatch						<br />Script door sources: Door_LF, Door_RF						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 and 2";
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 6.5500002;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] =
				{
					"veh_vehicle_MRAP_s"
				};
				speechPlural[] =
				{
					"veh_vehicle_MRAP_p"
				};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_vehicle_MRAP_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_MRAP_p";
		nameSound = "veh_vehicle_MRAP_s";
		_generalMacro = "MRAP_03_base_F";
		transportSoldier = 2;
		transportMaxBackpacks = 2;
		terrainCoef = 1;
		turnCoef = 4.5;
		precision = 10;
		crewVulnerable = 0;
		crewCrashProtection = 1.35;
		crewExplosionProtection = 0.99970001;
		enableRadio = 1;
		enableGPS = 1;
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] =
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		displayName = "$STR_A3_CfgVehicles_MRAP_03_Base0";
		model = "\A3\soft_f_beta\MRAP_03\MRAP_03_unarmed_F";
		editorSubcategory = "EdSubcat_Cars";
		picture = "\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_Base_ca.paa";
		Icon = "\A3\soft_f_beta\MRAP_03\Data\UI\map_MRAP_03_CA.paa";
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_MRAP_03_Base_Library0";
		};
		armor = 200;
		armorStructural = 7;
		cost = 1000000;
		threat[] = { 0.80000001,0.60000002,0.60000002 };
		weapons[] =
		{
			"TruckHorn"
		};
		magazines[] = {};
		damageResistance = 0.030990001;
		secondaryExplosion = 100;
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_ext.rvmat",
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_ext_damage.rvmat",
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_ext_destruct.rvmat",
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_int.rvmat",
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_int_damage.rvmat",
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_int_destruct.rvmat",
				"A3\Data_F\Vehicles\Turret.rvmat",
				"A3\Data_F\Vehicles\Turret_damage.rvmat",
				"A3\Data_F\Vehicles\Turret_destruct.rvmat",
				"A3\data_f\Glass_veh.rvmat",
				"A3\data_f\Glass_veh_armored_damage.rvmat",
				"A3\data_f\Glass_veh_armored_damage.rvmat",
				"A3\data_f\Glass_veh_int.rvmat",
				"A3\data_f\Glass_veh_armored_damage.rvmat",
				"A3\data_f\Glass_veh_armored_damage.rvmat"
			};
		};
		canFloat = 1;
		waterAngularDampingCoef = 10;
		waterResistanceCoef = 0.5;
		waterLeakiness = 1.5;
		engineShiftY = 1.2;
		driverAction = "Driver_MRAP_03";
		cargoAction[] =
		{
			"passenger_MRAP_03exgunner",
			"passenger_generic01_foldhands"
		};
		getInAction = "GetInMRAP_03";
		getOutAction = "GetOutLow";
		cargoGetInAction[] =
		{
			"GetInMRAP_03"
		};
		cargoGetOutAction[] =
		{
			"GetOutLow"
		};
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		driverDoor = "";
		cargoDoors[] = {};
		class Components : Components
		{
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components : components
				{
					class VehicleCommanderDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Commander";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
			{
				class Components : components
				{
					class VehicleCommanderDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Commander";
					};
				};
			};
		};
		class MFD
		{
			class MFD_2
			{
				topLeft = "MFD_2_TL";
				topRight = "MFD_2_TR";
				bottomLeft = "MFD_2_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 1;
				enableParallax = 0;
				font = "RobotoCondensedLight";
				turret[] = { 0 };
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,0,0,1 };
					alpha = 0.5;
					class Driver_Heading
					{
						type = "text";
						source = "[x]turretworld";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.34,0.02},
							1
						};
						right[] =
						{
							{0.37200001,0.02},
							1
						};
						down[] =
						{
							{0.34,0.059999999},
							1
						};
					};
					class Range_Value
					{
						type = "text";
						source = "laserDist";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.5,0.02},
							1
						};
						right[] =
						{
							{0.53200001,0.02},
							1
						};
						down[] =
						{
							{0.5,0.059999999},
							1
						};
					};
					class Pitch_Value
					{
						type = "text";
						source = "static";
						text = "--.--";
						scale = 1;
						align = "center";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.65499997,0.02},
							1
						};
						right[] =
						{
							{0.68699998,0.02},
							1
						};
						down[] =
						{
							{0.65499997,0.059999999},
							1
						};
					};
					class Mode_Value
					{
						type = "text";
						source = "static";
						text = "TI";
						scale = 1;
						align = "right";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.15000001,0.47},
							1
						};
						right[] =
						{
							{0.2,0.47},
							1
						};
						down[] =
						{
							{0.15000001,0.51999998},
							1
						};
					};
					class Mode_Zoom
					{
						type = "text";
						source = "static";
						text = "1.6x";
						scale = 1;
						align = "right";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.85000002,0.47},
							1
						};
						right[] =
						{
							{0.89999998,0.47},
							1
						};
						down[] =
						{
							{0.85000002,0.51999998},
							1
						};
					};
				};
			};
		};
		class Turrets : Turrets
		{
			class CommanderTurret : MainTurret
			{
				gunnerName = "$STR_POSITION_COMMANDER";
				proxyType = "CPCommander";
				commanding = 2;
				primaryGunner = 0;
				primaryObserver = 1;
				body = "obsTurret";
				gun = "obsGun";
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				animationSourceElevation = "obsElevation";
				gunBeg = "PIP0_dir";
				gunEnd = "PIP0_pos";
				memoryPointGunnerOptics = "PIP0_dir";
				weapons[] =
				{
					"Laserdesignator_vehicle",
					"SmokeLauncher"
				};
				magazines[] =
				{
					"Laserbatteries",
					"SmokeLauncherMag"
				};
				soundServo[] =
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",
					0.17782794,
					1,
					10
				};
				soundServoVertical[] =
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",
					0.17782794,
					1,
					10
				};
				soundElevation[] =
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03_elevation",
					0.31622776,
					1,
					10
				};
				gunnerAction = "commander_MRAP_03";
				usePip = 1;
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F.p3d";
				Laser = 1;
				turretInfoType = "RscOptics_Strider_commander";
				gunnerForceOptics = 0;
				minElev = -18;
				maxElev = 40;
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				gunnerGetInAction = "GetInMRAP_03";
				gunnerGetOutAction = "GetOutLow";
				class ViewOptics : ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.155;
					minFov = 0.034000002;
					maxFov = 0.155;
					visionMode[] =
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[] = { 2,3 };
				};
				class ViewGunner : ViewGunner
				{
					initAngleX = -10;
					initFov = 0.89999998;
					minFov = 0.25;
					maxFov = 1.25;
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.2;
						material = -1;
						name = "commander_turret_hit";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.2;
						material = -1;
						name = "commander_gun_hit";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
				gunnerDoor = "";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
					};
					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
					};
				};
			};
		};
		class AnimationSources : AnimationSources
		{
			class Door_LF
			{
				source = "door";
				animPeriod = 0.80000001;
				initPhase = 0;
			};
			class Door_RF : Door_LF
			{
				source = "door";
				animPeriod = 0.80000001;
			};
		};
		class HitPoints : HitPoints
		{
			class HitLFWheel : HitLFWheel
			{
				radius = 0.33000001;
				visual = "wheel_1_1_damage";
				armorComponent = "wheel_1_1_hide";
				armor = -250;
				minimalHit = -0.016000001;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLF2Wheel : HitLF2Wheel
			{
				radius = 0.33000001;
				visual = "wheel_1_2_damage";
				armorComponent = "wheel_1_2_hide";
				armor = -250;
				minimalHit = -0.016000001;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRFWheel : HitRFWheel
			{
				radius = 0.33000001;
				visual = "wheel_2_1_damage";
				armorComponent = "wheel_2_1_hide";
				armor = -250;
				minimalHit = -0.016000001;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRF2Wheel : HitRF2Wheel
			{
				radius = 0.33000001;
				visual = "wheel_2_2_damage";
				armorComponent = "wheel_2_2_hide";
				armor = -250;
				minimalHit = -0.016000001;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				minimalHit = 0.15000001;
				explosionShielding = 0.2;
				radius = 0.25;
			};
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				minimalHit = 0.15000001;
				explosionShielding = 0.40000001;
				radius = 0.25;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.40000001;
				minimalHit = 0.15000001;
				explosionShielding = 0.2;
				radius = 0.25;
			};
			class HitBody
			{
				armor = 8;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.0099999998;
				explosionShielding = 2;
				radius = 0.44999999;
			};
			class HitGlass1 : HitGlass1
			{
				armor = 1.5;
				explosionShielding = 3;
				radius = 0.25;
			};
			class HitGlass2 : HitGlass2
			{
				armor = 1.5;
				explosionShielding = 3;
				radius = 0.25;
			};
			class HitGlass3 : HitGlass3
			{
				armor = 1.5;
				explosionShielding = 3;
				radius = 0.25;
			};
			class HitGlass4 : HitGlass4
			{
				armor = 1.5;
				explosionShielding = 3;
				radius = 0.25;
			};
			class HitGlass5 : HitGlass5
			{
				armor = 1.5;
				explosionShielding = 3;
				radius = 0.25;
			};
		};
		wheelDamageThreshold = 0.18000001;
		wheelDamageRadiusCoef = 0.85000002;
		wheelDestroyRadiusCoef = 0.60000002;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 120;
		class RenderTargets
		{
			class commander_display
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 2;
					renderQuality = 2;
					fov = 0.2;
					turret[] = { 0 };
				};
				BBoxes[] =
				{
					"PIP_0_TL",
					"PIP_0_TR",
					"PIP_0_BL",
					"PIP_0_BR"
				};
			};
			class mirrorL
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				BBoxes[] =
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
			class mirrorR
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				BBoxes[] =
				{
					"PIP_3_TL",
					"PIP_3_TR",
					"PIP_3_BL",
					"PIP_3_BR"
				};
			};
			class reverseCam
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				BBoxes[] =
				{
					"PIP_4_TL",
					"PIP_4_TR",
					"PIP_4_BL",
					"PIP_4_BR"
				};
			};
		};
		thrustDelay = 0.5;
		brakeIdleSpeed = 1.78;
		maxSpeed = 125;
		fuelCapacity = 26;
		wheelCircumference = 3.895;
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;
		idleRpm = 700;
		redRpm = 3000;
		class complexGearbox
		{
			GearboxRatios[] =
			{
				"R1",
				-5.75,
				"N",
				0,
				"D1",
				4.3000002,
				"D2",
				2.3,
				"D3",
				1.5,
				"D4",
				1,
				"D5",
				0.73000002
			};
			TransmissionRatios[] =
			{
				"High",
				6.7589998
			};
			AmphibiousRatios[] =
			{
				"R1",
				-30,
				"N",
				0,
				"D1",
				50
			};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 6;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.4;
		centreBias = 1.3;
		clutchStrength = 55;
		enginePower = 289;
		maxOmega = 320;
		peakTorque = 1950;
		dampingRateFullThrottle = 0.079999998;
		dampingRateZeroThrottleClutchEngaged = 1;
		dampingRateZeroThrottleClutchDisengaged = 0.15000001;
		torqueCurve[] =
		{
			{0,0},
			{0.278,0.5},
			{0.34999999,0.75},
			{0.461,1},
			{0.60000002,0.94999999},
			{0.69999999,0.85000002},
			{0.80000001,0.75},
			{1,0.5}
		};
		changeGearMinEffectivity[] = { 0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999 };
		switchTime = 0.1;
		latency = 1;
		class Wheels
		{
			class LF
			{
				side = "left";
				suspTravelDirection[] = { -0.125,-1,0 };
				boneName = "wheel_1_1";
				steering = 1;
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.37";
				mass = 150;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 30000;
				maxHandBrakeTorque = 0;
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				maxDroop = 0.15000001;
				sprungMass = 2425;
				springStrength = 196425;
				springDamperRate = 15520;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 1800;
				frictionVsSlipGraph[] =
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR : LF
			{
				boneName = "wheel_1_2";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 300000;
			};
			class RF : LF
			{
				side = "right";
				suspTravelDirection[] = { 0.125,-1,0 };
				boneName = "wheel_2_1";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
			};
			class RR : RF
			{
				boneName = "wheel_2_2";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 300000;
			};
		};
		extCameraPosition[] = { 0,2,-7 };
		maximumLoad = 4000;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 3;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 4;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 4;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 12;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = { 1.9,1.8,1.7 };
				ambient[] = { 5,5,5 };
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 30;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 100;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.050000001;
					hardLimitStart = 50;
					hardLimitEnd = 80;
				};
			};
			class Right : Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2 : Right
			{
				flareSize = 0.25;
				position = "Light_R2";
				direction = "Light_R_end2";
			};
			class Left2 : Right2
			{
				position = "Light_L2";
				direction = "Light_L_end2";
				hitpoint = "Light_L";
				selection = "Light_L";
			};
		};
		aggregateReflectors[] =
		{

			{
				"Left",
				"Left2"
			},

			{
				"Right",
				"Right2"
			}
		};
		class Exhausts
		{
			class Exhaust
			{
				position = "exhaust_pos";
				direction = "exhaust_dir";
				effect = "ExhaustEffectMRAP_03";
			};
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\DBA_FennekPurifier\Fennek_Green_Flame_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\DBA_FennekPurifier\Fennek_Flame_Turret_CO.paa"
		};
		class TextureSources
		{
			class Blufor
			{
				displayName = "Red Scheme";
				author = "Vulgar";
				textures[] =
				{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\DBA_FennekPurifier\Fennek_Red_Flame_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\DBA_FennekPurifier\Fennek_Flame_Turret_CO.paa"
				};
				factions[] =
				{
					"B_DBA_Republic_F"
				};
			};
			class Indep
			{
				displayName = "Green Scheme";
				author = "Vulgar";
				textures[] =
				{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\DBA_FennekPurifier\Fennek_Green_Flame_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\DBA_FennekPurifier\Fennek_Flame_Turret_CO.paa"
				};
				factions[] =
				{
					"B_DBA_Republic_F"
				};
			};
		};
	};
	class DBA_FennekPurifier_base_F : DBA_FennekPurifier_base
	{
		features = "Randomization: No						<br />Camo selections: 2 - the body, turret						<br />Script door sources: Door_LF, Door_RF						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1";
		author = "Vulgar";
		_generalMacro = "MRAP_03_hmg_base_F";
		displayName = "[DBA] Fennek Purifier";
		model = "\A3\soft_f_beta\MRAP_03\MRAP_03_hmg_F";
		picture = "\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_HMG_ca.paa";
		Icon = "\A3\soft_f_beta\MRAP_03\Data\UI\map_MRAP_03_HMG_CA.paa";
		unitInfoType = "RscUnitInfoTank";
		sensorPosition = "gunnerView";
		transportSoldier = 1;
		cost = 800000;
		threat[] = { 0.80000001,0.30000001,0.60000002 };
		cargoAction[] =
		{
			"passenger_generic01_foldhands"
		};
		class AnimationSources : AnimationSources
		{
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "HMG_127";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "HMG_127";
			};
		};
		class Components : Components
		{
			class VehicleSystemsDisplayManagerComponentLeft : VehicleSystemsTemplateLeftDriver
			{
			};
			class VehicleSystemsDisplayManagerComponentRight : VehicleSystemsTemplateRightDriver
			{
			};
		};
		class MFD
		{
			class MFD_1
			{
				topLeft = "MFD_1_TL";
				topRight = "MFD_1_TR";
				bottomLeft = "MFD_1_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 1;
				enableParallax = 0;
				font = "RobotoCondensedLight";
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,0,0,1 };
					alpha = 0.5;
					class Driver_Heading
					{
						type = "text";
						source = "[x]turretworld";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.13699999,0.94999999},
							1
						};
						right[] =
						{
							{0.18700001,0.94999999},
							1
						};
						down[] =
						{
							{0.13699999,1},
							1
						};
					};
					class Range_Text
					{
						type = "text";
						source = "static";
						text = "RANGE:";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] =
						{
							{0.51499999,0.69},
							1
						};
						right[] =
						{
							{0.55500001,0.69},
							1
						};
						down[] =
						{
							{0.51499999,0.73000002},
							1
						};
					};
					class Range_Value
					{
						type = "text";
						source = "laserDist";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.62,0.69},
							1
						};
						right[] =
						{
							{0.66000003,0.69},
							1
						};
						down[] =
						{
							{0.62,0.73000002},
							1
						};
					};
					class Mode_Text
					{
						type = "text";
						source = "static";
						text = "MODE:";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] =
						{
							{0.51499999,0.73000002},
							1
						};
						right[] =
						{
							{0.55500001,0.73000002},
							1
						};
						down[] =
						{
							{0.51499999,0.76999998},
							1
						};
					};
					class Mode_Value
					{
						type = "text";
						source = "static";
						text = "TI WHOT";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.62,0.73000002},
							1
						};
						right[] =
						{
							{0.66000003,0.73000002},
							1
						};
						down[] =
						{
							{0.62,0.76999998},
							1
						};
					};
				};
			};
			class MFD_2
			{
				topLeft = "MFD_2_TL";
				topRight = "MFD_2_TR";
				bottomLeft = "MFD_2_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 1;
				enableParallax = 0;
				font = "RobotoCondensedLight";
				turret[] = { 1 };
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,0,0,1 };
					alpha = 0.5;
					class Driver_Heading
					{
						type = "text";
						source = "[x]turretworld";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.34,0.02},
							1
						};
						right[] =
						{
							{0.37200001,0.02},
							1
						};
						down[] =
						{
							{0.34,0.059999999},
							1
						};
					};
					class Range_Value
					{
						type = "text";
						source = "laserDist";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.5,0.02},
							1
						};
						right[] =
						{
							{0.53200001,0.02},
							1
						};
						down[] =
						{
							{0.5,0.059999999},
							1
						};
					};
					class Pitch_Value
					{
						type = "text";
						source = "static";
						text = "--.--";
						scale = 1;
						align = "center";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.65499997,0.02},
							1
						};
						right[] =
						{
							{0.68699998,0.02},
							1
						};
						down[] =
						{
							{0.65499997,0.059999999},
							1
						};
					};
					class Mode_Value
					{
						type = "text";
						source = "static";
						text = "TI";
						scale = 1;
						align = "right";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.15000001,0.47},
							1
						};
						right[] =
						{
							{0.2,0.47},
							1
						};
						down[] =
						{
							{0.15000001,0.51999998},
							1
						};
					};
					class Mode_Zoom
					{
						type = "text";
						source = "static";
						text = "1.6x";
						scale = 1;
						align = "right";
						refreshRate = 0.079999998;
						pos[] =
						{
							{0.85000002,0.47},
							1
						};
						right[] =
						{
							{0.89999998,0.47},
							1
						};
						down[] =
						{
							{0.85000002,0.51999998},
							1
						};
					};
				};
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				body = "mainTurret";
				gun = "mainGun";
				weapons[] =
				{
					"DBA_VehicleFlamer",
					"DBA_Ground_HMG_Generic"
				};
				magazines[] =
				{
					"DBA_VehicleFlamer_Mag",
					"DBA_VehicleFlamer_Mag",
					"DBA_VehicleFlamer_Mag",
					"DBA_VehicleFlamer_Mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag",
					"DBA_HMG_green_x500_mag"
				};
				selectionFireAnim = "zasleh";
				gunnerAction = "gunner_MRAP_03";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				soundServo[] =
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",
					0.17782794,
					1,
					10
				};
				soundServoVertical[] =
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",
					0.17782794,
					1,
					10
				};
				stabilizedInAxes = 3;
				animationSourceStickX = "joystick_gunner_x";
				animationSourceStickY = "joystick_gunner_y";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "joystick_gunner";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500 };
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_crows";
				usePip = 1;
				commanding = 1;
				minElev = -20;
				maxElev = 20;
				headAimDown = 10;
				class ViewOptics : RCWSOptics
				{
				};
				class ViewGunner : ViewGunner
				{
					initAngleX = -10;
					initFov = 0.89999998;
					minFov = 0.25;
					maxFov = 1.25;
				};
				class HitPoints : HitPoints
				{
					class HitTurret
					{
						armor = -250;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "otocvez";
						passThrough = 0;
						minimalHit = 0.029999999;
						explosionShielding = 0.40000001;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun
					{
						armor = -250;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "otochlaven";
						passThrough = 0;
						minimalHit = 0.029999999;
						explosionShielding = 0.2;
						radius = 0.2;
						isGun = 1;
					};
				};
				gunnerDoor = "";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components : components
						{
							class VehicleCommanderDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Commander";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
						class Components : components
						{
							class VehicleCommanderDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Commander";
							};
						};
					};
				};
			};
			class CommanderTurret : CommanderTurret
			{
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
						};
					};
				};
			};
		};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 2;
					renderQuality = 2;
					fov = 0.2;
					turret[] = { 1 };
				};
				BBoxes[] =
				{
					"PIP_0_TL",
					"PIP_0_TR",
					"PIP_0_BL",
					"PIP_0_BR"
				};
			};
			class gunner_display
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 2;
					renderQuality = 2;
					fov = 0.5;
					turret[] = { 0 };
				};
				BBoxes[] =
				{
					"PIP_1_TL",
					"PIP_1_TR",
					"PIP_1_BL",
					"PIP_1_BR"
				};
			};
			class mirrorL
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				BBoxes[] =
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
			class mirrorR
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				BBoxes[] =
				{
					"PIP_3_TL",
					"PIP_3_TR",
					"PIP_3_BL",
					"PIP_3_BR"
				};
			};
			class reverseCam
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				BBoxes[] =
				{
					"PIP_4_TL",
					"PIP_4_TR",
					"PIP_4_BL",
					"PIP_4_BR"
				};
			};
		};
	};
	class DBA_FennekPurifier : DBA_FennekPurifier_base_F
	{
		author = "Vulgar";
		class SimpleObject
		{
			eden = 1;
			animate[] =
			{

				{
					"damagehide",
					0
				},

				{
					"damagehidevez",
					0
				},

				{
					"damagehidehlaven",
					0
				},

				{
					"wheel_1_1_destruct",
					0
				},

				{
					"wheel_1_2_destruct",
					0
				},

				{
					"wheel_1_3_destruct",
					0
				},

				{
					"wheel_1_4_destruct",
					0
				},

				{
					"wheel_2_1_destruct",
					0
				},

				{
					"wheel_2_2_destruct",
					0
				},

				{
					"wheel_2_3_destruct",
					0
				},

				{
					"wheel_2_4_destruct",
					0
				},

				{
					"wheel_1_1_destruct_unhide",
					0
				},

				{
					"wheel_1_2_destruct_unhide",
					0
				},

				{
					"wheel_1_3_destruct_unhide",
					0
				},

				{
					"wheel_1_4_destruct_unhide",
					0
				},

				{
					"wheel_2_1_destruct_unhide",
					0
				},

				{
					"wheel_2_2_destruct_unhide",
					0
				},

				{
					"wheel_2_3_destruct_unhide",
					0
				},

				{
					"wheel_2_4_destruct_unhide",
					0
				},

				{
					"wheel_1_3_damage",
					0
				},

				{
					"wheel_1_4_damage",
					0
				},

				{
					"wheel_2_3_damage",
					0
				},

				{
					"wheel_2_4_damage",
					0
				},

				{
					"wheel_1_3_damper_damage_backanim",
					0
				},

				{
					"wheel_1_4_damper_damage_backanim",
					0
				},

				{
					"wheel_2_3_damper_damage_backanim",
					0
				},

				{
					"wheel_2_4_damper_damage_backanim",
					0
				},

				{
					"glass1_destruct",
					0
				},

				{
					"glass2_destruct",
					0
				},

				{
					"glass3_destruct",
					0
				},

				{
					"glass4_destruct",
					0
				},

				{
					"glass5_destruct",
					0
				},

				{
					"glass6_destruct",
					0
				},

				{
					"wheel_1_1",
					0
				},

				{
					"wheel_2_1",
					0
				},

				{
					"wheel_1_2",
					0
				},

				{
					"wheel_2_2",
					0
				},

				{
					"daylights",
					0
				},

				{
					"pedal_thrust",
					0
				},

				{
					"pedal_brake",
					0
				},

				{
					"wheel_1_1_damage",
					0
				},

				{
					"wheel_1_2_damage",
					0
				},

				{
					"wheel_2_1_damage",
					0
				},

				{
					"wheel_2_2_damage",
					0
				},

				{
					"wheel_1_1_damper_damage_backanim",
					0
				},

				{
					"wheel_1_2_damper_damage_backanim",
					0
				},

				{
					"wheel_2_1_damper_damage_backanim",
					0
				},

				{
					"wheel_2_2_damper_damage_backanim",
					0
				},

				{
					"vehicletransported_antenna_hide",
					0
				},

				{
					"drivingwheel",
					0
				},

				{
					"steering_1_1",
					0
				},

				{
					"steering_2_1",
					0
				},

				{
					"indicatorspeed",
					0
				},

				{
					"indicatorrpm",
					0
				},

				{
					"fuel",
					1
				},

				{
					"reverse_light",
					1
				},

				{
					"gear_lever",
					1
				},

				{
					"gear_lever2",
					1
				},

				{
					"engineoff",
					0
				},

				{
					"startup",
					0
				},

				{
					"tyre_pressure_r1",
					1690.66
				},

				{
					"tyre_pressure_r2",
					1690.66
				},

				{
					"tyre_pressure_g1",
					1690.66
				},

				{
					"tyre_pressure_r3",
					1690.66
				},

				{
					"obsturret",
					0
				},

				{
					"obsgun",
					0
				},

				{
					"obselevation",
					0
				},

				{
					"wheel_1_1_damper",
					0
				},

				{
					"wheel_2_1_damper",
					0
				},

				{
					"wheel_1_2_damper",
					0
				},

				{
					"wheel_2_2_damper",
					0
				},

				{
					"door_lf",
					0
				},

				{
					"door_rf",
					0
				},

				{
					"mainturret",
					0
				},

				{
					"maingun",
					0
				},

				{
					"joystick_gunner_x",
					0
				},

				{
					"joystick_gunner_y",
					0
				},

				{
					"turret_indicator",
					0
				},

				{
					"mg_muzzle",
					0
				},

				{
					"zaslehrot",
					115
				}
			};
			hide[] =
			{
				"clan",
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset = 2.3;
			verticalOffsetWorld = -0.149;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_MRAP_03_hmg_F.jpg";
		_generalMacro = "I_MRAP_03_hmg_F";
		scope = 2;
		crew = "I_soldier_F";
		typicalCargo[] =
		{
			"I_Soldier_lite_F"
		};
		side = 1;
		faction = "B_DBA_Republic_F";
	};
};