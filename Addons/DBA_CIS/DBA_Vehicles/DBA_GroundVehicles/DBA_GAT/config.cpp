class CfgPatches {
	class DBA_GAT{
		requiredAddons[] = {"A3_Armor_F_Beta"};
		units[] = 
		{
			"DBA_CISGAT_F",
			"DBA_GAT_ADAS_F",
			"DBA_GAT_Light_F",
			"DBA_GAT_AA_F"
		};
		weapons[] = {};
	};
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class Mode_SemiAuto;
class CfgVehicles
{
	class LandVehicle;
	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class Wreck_base_F;
	//----------GAT Base----------
	class DBA_GAT_base_F : Tank_F
	{
		#include "sounds.hpp"
		#include "physx.hpp"
		author = "$STR_3as_Studio";

		destrType = "DestructWreck";
		editorSubcategory = "EdSubcat_Tanks";
		scope = 0;
		memoryPointDriverOptics[] = {"driverview"};
		driverOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		driverForceOptics = 1;
		//driverInfoPanelCameraPos="driverview_old";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		driverLeftLegAnimName = "pedal_brake";
		driverRightLegAnimName = "pedal_thrust";
		viewDriverShadowAmb = 0.5;
		viewDriverShadowDiff = 0.050000001;
		transportSoldier = 0;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] =
		{
			"GetInLow"
		};
		cargoGetOutAction[] =
		{
			"GetOutLow"
		};
		cargoAction[] =
		{

		};
		maxFordingDepth = -0.80000001;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		LODDriverTurnedin = 1100;
		LODDriverTurnedOut = 0;
		LODDriverOpticsIn = 1202;
		driverAction = "Driver_MBT_03_cannon_F_out";
		driverInAction = "Driver_MBT_01_cannon_F_in";
		extCameraPosition[] = {0,3,-9};
		forceHideDriver = 1;
		viewDriverInExternal = 1;
		class ViewOptics : ViewOptics
		{
			visionMode[] =
			{
				"Normal",
				"NVG"
			};
			//initFov=0.25;
			//minFov=0.15000001;
			//maxFov=0.25;
		};
		/*		class ViewPilot: ViewPilot
				{
					initAngleX=-3;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=0;
					maxMoveX=0;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
		*/
				armor = 500;
				armorLights = 0.1;
				armorStructural = 2;
				crewExplosionProtection = 0.99989998;
				damageResistance = 0.0054700002;
				cost = 2500000;
				crewVulnerable = 0;
				epeImpulseDamageCoef = 0.55;
				waterPPInVehicle = 0;
				wheelCircumference = 2.1500001;
				antiRollbarForceCoef = 45;
				antiRollbarForceLimit = 100;
				antiRollbarSpeedMin = 0;
				antiRollbarSpeedMax = 300;
				tracksSpeed = 1.4;
				model = "\3AS\3AS_GAT\3AS_GAT.p3d";
				picture = "\A3\armor_f_gamma\MBT_01\Data\UI\Slammer_M2A1_Base_ca.paa";
				Icon = "\A3\armor_f_gamma\MBT_01\Data\ui\map_slammer_mk4_ca.paa";
				memoryPointTaskMarker = "TaskMarker_1_pos";
				hideWeaponsDriver = 1;
				hideWeaponsCargo = 1;
				hasdriver = 1;
				class HitPoints : HitPoints
				{
					class HitHull : HitHull {	// Handle internal damage
						armor = 4;
						material = -1;
						name = "telo";
						visual = "zbytek";
						passThrough = 0.03;
						minimalHit = 0.14;
						explosionShielding = 2.0;
						radius = 0.2;
					};
					class HitEngine : HitEngine {
						armor = 0.75;
						material = -1;
						name = "motor";
						passThrough = 0.08;
						minimalHit = 0.24;
						explosionShielding = 1;
						radius = 0.33;
					};
					class HitLTrack : HitLTrack {
						armor = 0.5;
						material = -1;
						name = "track_l_hit";
						passThrough = 0;
						minimalHit = 0.08;
						explosionShielding = 1.44;
						radius = 0.3;
					};
					class HitRTrack : HitRTrack {
						armor = 0.5;
						material = -1;
						name = "track_r_hit";
						passThrough = 0;
						minimalHit = 0.08;
						explosionShielding = 1.44;
						radius = 0.3;
					};
					class HitFuel : HitFuel
					{
						armor = 1.5;
						material = -1;
						name = "palivo";
						passThrough = 1;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
				animationSourceHatch = "";
				class Exhausts
				{
					class Exhaust_1
					{
						position = "Exhaust_1_pos";
						direction = "Exhaust_1_dir";
						effect = "ExhaustsEffectHeliBig";
					};
					class Exhaust_2
					{
						position = "Exhaust_2_pos";
						direction = "Exhaust_2_dir";
						effect = "ExhaustsEffectHeliBig";
					};
				};
				insideSoundCoef = 0.89999998;
				threat[] = {0.80000001,1,0.30000001};
				class RenderTargets
				{
					class commander_display
					{
						renderTarget = "rendertarget0";
						class CameraView1
						{
							pointPosition = "commanderview";
							pointDirection = "commanderview_dir";
							renderVisionMode = 0;
							renderQuality = 2;
							fov = 0.305731;
							turret[] = {0,0};
						};
						BBoxes[] =
						{
							"PIP_COM_TL",
							"PIP_COM_TR",
							"PIP_COM_BL",
							"PIP_COM_BR"
						};
					};
					class driver_display
					{
						renderTarget = "rendertarget1";
						class CameraView1
						{
							pointPosition = "PIP0_pos";
							pointDirection = "PIP0_dir";
							renderVisionMode = 0;
							renderQuality = 2;
							fov = 0.80000001;
							turret[] = {-1};
						};
						BBoxes[] =
						{
							"PIP_DRV_TL",
							"PIP_DRV_TR",
							"PIP_DRV_BL",
							"PIP_DRV_BR"
						};
					};
				};
				class compartmentsLights
				{
					class Comp1
					{
						class Light1
						{
							color[] = {13,20,20};
							ambient[] = {0,0,0};
							intensity = 2;
							size = 0;
							useFlare = 0;
							flareSize = 0;
							flareMaxDistance = 0;
							dayLight = 0;
							blinking = 0;
							class Attenuation
							{
								start = 0;
								constant = 0;
								linear = 1;
								quadratic = 70;
								hardLimitStart = 0.15000001;
								hardLimitEnd = 1.15;
							};
							point = "light_interior1";
						};
						class Light2 : Light1
						{
							point = "light_interior2";
							color[] = {13,20,20};
							ambient[] = {0,0,0};
							intensity = 1.5;
						};
						class Light3 : Light1
						{
							point = "light_interior3";
							color[] = {13,20,20};
							ambient[] = {0,0,0};
							intensity = 1.5;
						};
						class Light4 : Light1
						{
							point = "light_interior4";
							color[] = {13,20,20};
							ambient[] = {0,0,0};
							intensity = 0.69999999;
						};
						class Light5 : Light1
						{
							point = "light_interior5";
							color[] = {18,20,20};
							ambient[] = {0,0,0};
							intensity = 0.2;
							size = 0;
						};
						class Light6 : Light1
						{
							point = "light_interior6";
							color[] = {18,20,20};
							ambient[] = {0,0,0};
							intensity = 3;
							size = 0;
						};
						class Light7 : Light1
						{
							point = "light_interior7";
							color[] = {18,20,20};
							ambient[] = {0,0,0};
							intensity = 4;
							size = 0;
						};
						class Light8 : Light1
						{
							point = "light_interior8";
							color[] = {18,20,20};
							ambient[] = {0,0,0};
							intensity = 4;
							size = 0;
						};
					};
				};
				class Reflectors
				{
					class Left
					{
						color[] = {1900,1800,1700};
						ambient[] = {5,5,5};
						position = "Light_L";
						direction = "Light_L_end";
						hitpoint = "Light_L";
						selection = "Light_L";
						size = 1;
						innerAngle = 100;
						outerAngle = 179;
						coneFadeCoef = 10;
						intensity = 1;
						useFlare = 0;
						dayLight = 0;
						flareSize = 1;
						class Attenuation
						{
							start = 1;
							constant = 0;
							linear = 0;
							quadratic = 0.25;
							hardLimitStart = 30;
							hardLimitEnd = 60;
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
						position = "light_R_flare";
						hitpoint = "Light_R_flare";
						useFlare = 1;
					};
					class Left2 : Left
					{
						position = "light_L_flare";
						hitpoint = "Light_L_flare";
						useFlare = 1;
					};
				};
				aggregateReflectors[] =
				{

					{
						"Left",
						"Right",
						"Left2",
						"Right2"
					}
				};
				soundLocked[] =
				{
					"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
					1,
					1
				};
				soundIncommingMissile[] =
				{
					"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",
					0.31622776,
					1
				};
				smokeLauncherGrenadeCount = 8;
				smokeLauncherVelocity = 14;
				smokeLauncherOnTurret = 1;
				smokeLauncherAngle = 120;
				class Turrets : Turrets
				{
					class MainTurret : MainTurret
					{
						class Turrets
						{
						};

						memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
						weapons[] = {"DBA_90mw_HFAH1_Cannon","SmokeLauncher"};
						magazines[] = {"DBA_90mm_UR62M_HEAT_x24_mag","DBA_90mm_UR62M_HEAT_x24_mag", "DBA_90mm_UR62M_HEAT_x24_mag", "SmokeLauncherMag"};
						turretInfoType = "RscWeaponRangeZeroing";
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						selectionFireAnim = "zasleh";
						animationSourceBody = "Mainturret";
						animationSourceGun = "MainGun";
						body = "Mainturret";
						gun = "MainGun";
						discreteDistanceInitIndex = 5;
						memoryPointGunnerOptics = "gunnerview";
						gunnerOutOpticsModel = "";
						gunnerOutOpticsEffect[] = {};
						gunnerOpticsEffect[] = {};
						gunnerForceOptics = 1;
						visionMode[] = {"Normal"};
						thermalMode[] = {};
						class OpticsIn
						{
							class Wide
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.155;
								minFov = 0.155;
								maxFov = 0.155;
								visionMode[] = {"Normal","NVG","Ti"};
								thermalMode[] = {0,1};
								gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
								gunnerOpticsEffect[] = {};
							};
							class Narrow : Wide
							{
								gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
								initFov = 0.047;
								minFov = 0.047;
								maxFov = 0.047;
							};
						};
						gunnerAction = "mbt2_slot2b_in";
						forceHideGunner = 1;
						outGunnerMayFire = 1;
						gunnerInAction = "mbt2_slot2b_in";
						gunnerRightHandAnimName = "";
						gunnerLeftHandAnimName = "";
						gunnerFireAlsoInInternalCamera = 1;
						gunnerOutFireAlsoInInternalCamera = 1;
						proxyIndex = 1;
						viewGunnerInExternal = 0;
						gunnerName = "Gunner";
						proxytype = "CPGunner";
						isPersonTurret = 0;
						personTurretAction = "vehicle_turnout_1";
						soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", db - 40, 1.0,50};
						minElev = -5;
						maxElev = +20;
						initElev = 0;
						inGunnerMayFire = 1;
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.8;
								material = -1;
								name = "otocvez";
								visual = "vez";
								passThrough = 0;
								minimalHit = 0.02;
								explosionShielding = 0.6;
								radius = 0.15;
							};
							class HitGun
							{
								armor = 0.75;
								material = -1;
								name = "otocvez";
								visual = "";
								passThrough = 0;
								minimalHit = 0;
								explosionShielding = 1;
								radius = 0.15;
							};
						};
					};
				};
				class Damage
				{
					tex[] = {};
					mat[] =
					{
						"3as\3as_GAT\data\GAT_hull.rvmat",
							"3as\3as_GAT\data\GAT_hull.rvmat",
						"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
						"3as\3as_GAT\data\GAT_weapons_Heavy.rvmat",
						"3as\3as_GAT\data\GAT_weapons_Heavy.rvmat",
						"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
					};
				};
				class AnimationSources //:AnimationSources
				{
					class muzzle_rot_cannon
					{
					source = "ammorandom";
					weapon = "3AS_GATRepeater";
					};
					class recoil_source
					{
					source = "reload";
					weapon = "3AS_AATCannon";
					};
					class muzzle_rot_coax
					{
					source = "ammorandom";
					weapon = "3AS_GATRepeater";
					};
				};
				animationList[] =
				{
					"showCamonetCannon",
					0,
					"showCamonetPlates1",
					0,
					"showCamonetPlates2",
					0,
					"showCamonetTurret",
					0,
					"showCamonetHull",
					0
				};
	};
	//----------Faction Base----------
	class DBA_CIS_GAT_base_F : DBA_GAT_base_F
	{
		author = "Vulgar";
		_generalMacro = "B_MBT_01_base_F";
		features = "Randomization: No						<br />Camo selections: 2 - hull, main turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 6";
		crew = "O_DBA_CIS_B1_Crew_Droid_F";
		side = 0;
		faction = "O_DBA_CIS_F";
	};
	//----------Faction Vehicles----------

	class DBA_CISGAT_F : DBA_CIS_GAT_base_F{
		scope = 2;
		scopeCurator = 2;
		forceingarage = 1;
		displayname = "DBA CIS GAT";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"3AS\3AS_GAT\data\hull_CO.paa", "3AS\3AS_GAT\data\weapons_CO.paa"};
		editorPreview = "3as\3as_gat\images\3AS_GAT.jpg";
		class TextureSources
		{
			class CIS
			{
				displayName = "Trade Federation";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_GAT\data\hull_CO.paa", "3AS\3AS_GAT\data\weapons_CO.paa"};
				factions[] = {"O_DBA_CIS_F"};
			};
			class Olive
			{
				displayName = "Olive";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_GAT\data\Olive\hull_CO.paa", "3AS\3AS_GAT\data\Olive\weapons_CO.paa"};
				factions[] = {"O_DBA_CIS_F"};
			};

		};
		accuracy = 1000;	// accuracy > 4 is not possible to be fully recognized during game
	};

	class DBA_CISGAT_Olive_F : DBA_CISGAT_F {

		displayname = "DBA CIS GAT (Olive)";
		hiddenSelections[] = {"camo1","camo2"};
		editorPreview = "3as\3as_gat\images\3AS_GAT_olive.jpg";
		hiddenSelectionstextures[] = {"3AS\3AS_GAT\data\Olive\hull_CO.paa", "3AS\3AS_GAT\data\Olive\weapons_CO.paa"};
		accuracy = 1000;	// accuracy > 4 is not possible to be fully recognized during game
	};
	class DBA_GAT_Light_Base : DBA_GAT_base_F
	{
		displayname = "GAT Light";
		model = "3as\3as_GAT\3as_GAT_Light.p3d";
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets
				{
				};
				memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle","z_gunL_muzzle_2","z_gunr_muzzle_2"};
				weapons[] = {"DBA_UKAS_MG","SmokeLauncher"};
				magazines[] = {"DBA_762_REC_x2600_mag","DBA_762_REC_x2600_mag","DBA_762_REC_x2600_mag","SmokeLauncherMag"};
				minElev = -9;
				maxElev = 40;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"3as\3as_GAT\data\GAT_hull.rvmat",
				"3as\3as_GAT\data\GAT_hull.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
				"3as\3as_GAT\data\Light_tank\GAT_weapons_Light.rvmat",
				"3as\3as_GAT\data\Light_tank\GAT_weapons_Light.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
			};
		};
	};
	class DBA_GAT_ADAS_Base : DBA_GAT_base_F
	{
		displayname = "DBA CIS GAT (ADAS)";
		armor = 700;
		armorStructural = 7;
		tankTurnForce = 350000;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets
				{
				};
				weapons[] = { "DBA_165mw_B9M_ORD_Mortar","SmokeLauncher" };
				magazines[] = { "DBA_165mm_C33_BESH_x30_mag","DBA_165mm_C33_BESH_x30_mag","DBA_165mm_C33_BESH_x30_mag","SmokeLauncherMag" };
				minElev = -9;
				maxElev = 40;
			};
		};
	};

	class DBA_GAT_ADAS_F : DBA_GAT_ADAS_Base {
		scope = 2;
		scopeCurator = 2;
		forceingarage = 1;
		faction = "O_DBA_CIS_F";
		crew = "O_DBA_CIS_B1_Crew_Droid_F";
		side = 0;
		displayname = "DBA CIS GAT (ADAS)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionstextures[] = { "3AS\3AS_GAT\data\hull_CO.paa", "3AS\3AS_GAT\data\weapons_CO.paa" };
		editorPreview = "3as\3as_gat\images\3AS_GAT.jpg";
		class TextureSources
		{
			class CIS
			{
				displayName = "Trade Federation";
				author = "3AS Mod Team";
				textures[] = { "3AS\3AS_GAT\data\hull_CO.paa", "3AS\3AS_GAT\data\weapons_CO.paa" };
				factions[] = { "O_DBA_CIS_F" };
			};
			class Olive
			{
				displayName = "Olive";
				author = "3AS Mod Team";
				textures[] = { "3AS\3AS_GAT\data\Olive\hull_CO.paa", "3AS\3AS_GAT\data\Olive\weapons_CO.paa" };
				factions[] = { "O_DBA_CIS_F" };
			};

		};
		accuracy = 1000;	// accuracy > 4 is not possible to be fully recognized during game
	};
	class DBA_GAT_Light_base_F : DBA_GAT_Light_Base
	{
		author = "Vulgar";
		_generalMacro = "B_MBT_01_base_F";
		features = "Randomization: No						<br />Camo selections: 2 - hull, main turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 6";
		crew = "O_DBA_CIS_B1_Crew_Droid_F";
		side = 0;
		faction = "O_DBA_CIS_F";
		armor = 400;
		armorStructural = 4;
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_GAT\data\hull_CO.paa",
			"3AS\3AS_GAT\data\Light_Tank\CIS\weapons_CO.paa"
		};
		class TextureSources
		{
			class CIS
			{
				displayName = "Trade Federation";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_GAT\data\hull_CO.paa", "3AS\3AS_GAT\data\Light_Tank\CIS\weapons_CO.paa"};
				factions[] = {"O_DBA_CIS_F"};
			};
			class Olive
			{
				displayName = "Olive";
				author = "3AS Mod Team";
			textures[] = {"3AS\3AS_GAT\data\Olive\hull_CO.paa", "3AS\3AS_GAT\data\Light_Tank\Olive\weapons_CO.paa"};
				factions[] = {"O_DBA_CIS_F"};
			};

		};
		class AnimationSources : AnimationSources
		{
			class muzzle_hide_cannon
			{
				source = "reload";
				weapon = "cannon_120mm";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "cannon_120mm";
			};
			class HitComTurret_src
			{
				source = "Hit";
				hitpoint = "HitComTurret";
				raw = 1;
			};
			class showBags
			{
				displayName = "Show Bags";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
		};
	};
	class DBA_GAT_Light_F :DBA_GAT_Light_base_F{
		scope = 2;
		scopeCurator = 2;
		forceingarage = 1;
		displayname = "GAT Light";
		hiddenSelections[] = {"camo1","camo2"};
		editorPreview = "3as\3as_gat\images\3AS_GAT_light.jpg";
	};
	class  DBA_GAT_Light_Olive : DBA_GAT_Light_F{

		displayname = "GAT Light(Olive)";
		hiddenSelections[] = {"camo1","camo2"};
		editorPreview = "3as\3as_gat\images\3AS_GAT_Light_olive.jpg";
		hiddenSelectionstextures[] = {"3AS\3AS_GAT\data\Olive\hull_CO.paa", "3AS\3AS_GAT\data\Light_Tank\OLIVE\weapons_CO.paa"};
		accuracy = 1000;	// accuracy > 4 is not possible to be fully recognized during game
	};
	class DBA_GAT_AA_F : DBA_GAT_Light_Base
	{
		author = "ISU";
		scope = 2;
		scopeCurator = 2;
		forceingarage = 1;
		displayname = "GAT (SPAA)";
		hiddenSelections[] = {"camo1","camo2"};
		editorPreview = "3as\3as_gat\images\3AS_GAT_light.jpg";
		_generalMacro = "B_MBT_01_base_F";
		features = "Randomization: No						<br />Camo selections: 2 - hull, main turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 6";
		crew = "O_DBA_CIS_B1_Crew_Droid_F";
		side = 0;
		faction = "O_DBA_CIS_F";
		armor = 400;
		editorSubcategory = "O_DBA_CIS_AAs";
		armorStructural = 4;
		allowTabLock = 1;
		radarType = 2;
		gunnerCanSee = "1 + 2 + 4 + 8 + 32";
		commanderCanSee = "1 + 2 + 4 + 8 + 32";
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = 5000;
						maxTrackableSpeed = 1600;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=7000;
							maxRange=7000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=7000;
							maxRange=7000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=7000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=1.0;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=20000;
						minSpeedThreshold=5;
						maxSpeedThreshold=1900;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class DataLinkSensorComponent{
					};
				};
			};
			class TransportCountermeasuresComponent{
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets
				{
				};
				weapons[] = { "DBA_37mw_HH10A_AAA","SmokeLauncher" };
				magazines[] = { "DBA_37mm_UB15_x500_mag","DBA_37mm_UB15_x500_mag","DBA_37mm_UB15_x500_mag","SmokeLauncherMag" };
				minElev = -9;
				maxElev = 65;
				class Components
				{
               	   class VehicleSystemsDisplayManagerComponentLeft
					{
						class Components
						{
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {7000,4000,2000};
								resource = "RscCustomInfoSensors";
							};
							class VehicleDriverDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Driver";
							};
							class VehicleCommanderDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Commander";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
							class MineDetectorDisplay
							{
								componentType = "MineDetectorDisplayComponent";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SlingLoadDisplay
							{
								componentType = "SlingLoadDisplayComponent";
							};
						};
						componentType = "VehicleSystemsDisplayManager";
						left = 1;
						defaultDisplay = "EmptyDisplay";
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						defaultDisplay = "SensorDisplay";
						class Components
						{
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000,8000,4000,2000};
								resource = "RscCustomInfoSensors";
							};
							class VehicleDriverDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Driver";
							};
							class VehicleCommanderDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Commander";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
							class MineDetectorDisplay
							{
								componentType = "MineDetectorDisplayComponent";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SlingLoadDisplay
							{
								componentType = "SlingLoadDisplayComponent";
							};
						};
						componentType = "VehicleSystemsDisplayManager";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
					};
				};
			};
		};
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_GAT\data\hull_CO.paa",
			"3AS\3AS_GAT\data\Light_Tank\CIS\weapons_CO.paa"
		};
		class TextureSources
		{
			class CIS
			{
				displayName = "Trade Federation";
				author = "3AS Mod Team";
				textures[] = {"3AS\3AS_GAT\data\hull_CO.paa", "3AS\3AS_GAT\data\Light_Tank\CIS\weapons_CO.paa"};
				factions[] = {"O_DBA_CIS_F"};
			};
			class Olive
			{
				displayName = "Olive";
				author = "3AS Mod Team";
			textures[] = {"3AS\3AS_GAT\data\Olive\hull_CO.paa", "3AS\3AS_GAT\data\Light_Tank\Olive\weapons_CO.paa"};
				factions[] = {"O_DBA_CIS_F"};
			};

		};
		class AnimationSources : AnimationSources
		{
			class muzzle_hide_cannon
			{
				source = "reload";
				weapon = "cannon_120mm";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "cannon_120mm";
			};
			class HitComTurret_src
			{
				source = "Hit";
				hitpoint = "HitComTurret";
				raw = 1;
			};
			class showBags
			{
				displayName = "Show Bags";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
		};
	};
};