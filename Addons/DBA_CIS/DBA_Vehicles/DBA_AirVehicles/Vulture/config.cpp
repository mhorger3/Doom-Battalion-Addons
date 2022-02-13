class CfgPatches
{
	class 101st_Vulture
	{
		units[]=
		{
			"DBA_CIS_Vulture_Droid_Base",
			"DBA_CIS_Vulture_Interim",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Tank_Loadorder"
		};
	};
};
class AnimationSources;
class UserActions;
class Eventhandlers;
class HitPoints;
class HitHull;
class MarkerLights;
class Components;
class EjectionSystem;
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
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{/*
	class components;
};
class CfgVehicles
{
	class 3as_Vulture_dynamicLoadout_AA;
	class O_DBA_CIS_Vulture_Droid_F: 3as_Vulture_dynamicLoadout_AA
	{
		scope=2;
		scopeCurator=2;
		displayName="Vulture-Class Droid Fighter";
		editorSubcategory="O_DBA_CIS_Planes";
		vehicleClass="O_DBA_CIS_Planes";
		side=0;
		faction="O_DBA_CIS_F";
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Vulture_Droid_3as_F.jpg";
		crew="O_DBA_CIS_OOM_Pilot_Droid_F";
	};*/
	class Plane_Fighter_03_dynamicLoadout_base_F; 
	class MFD
	{
	};
	class DBA_CIS_Vulture_Droid_Base : Plane_Fighter_03_dynamicLoadout_base_F{
		irTarget=1;
		irTargetSize=1;
		radarTarget=1;
		radarTargetSize=1;
		memoryPointDriverOptics="PilotCamera_pos";
		unitInfoType="RscOptics_CAS_Pilot";
		driverWeaponsInfoType="RscOptics_CAS_01_TGP";
		class MFD: MFD
		{
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=900;
						componentType="IRSensorComponent";
						typeRecognitionDistance=4000;
						maxFogSeeThrough=0.995;
						color[]={1,0,0,1};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=900;
						aimDown=1;
						animDirection="";
						componentType="VisualSensorComponent";
						nightRangeCoef=0;
						maxFogSeeThrough=0.94;
						color[]={1,1,0.5,0.80000001};
						typeRecognitionDistance=4000;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange=45000;
							maxRange=45000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						color[]={0.5,1,0.5,0.5};
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=10000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=0.2;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=200;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						componentType="LaserSensorComponent";
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						componentType="NVSensorComponent";
						color[]={1,1,1,0};
						typeRecognitionDistance=0;
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture="a3\air_f_gamma\plane_fighter_03\data\ui\plane_a143_3den_ca.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"DBA_CIS_Fighter_Rail",
						};
						attachment="DBA_MG33A_x4_Pylon";
						priority=5;
						maxweight=5000;
						UIposition[]={0.34999999,0.15000001};
					};
					class Pylons2: Pylons1
					{
						maxweight=1200;
						UIposition[]={0.34999999,-0.15000001};
					};
					class Pylons3: Pylons1
					{
						UIposition[]={0.34999999,0.30000001};
						mirroredMissilePos=2;
					};
					class Pylons4: Pylons2
					{
						UIposition[]={0.34999999,-0.30000001};
						mirroredMissilePos=1;
					};
					class Pylons5: Pylons1
					{
						UIposition[]={0.34999999,0};
						priority=4;
						hardpoints[]=
						{
							"DBA_CIS_Fighter_Rail",
						};
						attachment="DBA_MG33A_x4_Pylon";
					};
					class Pylons6: Pylons5
					{
						UIposition[]={0.34999999,0.5};
						mirroredMissilePos=5;
					};
					class Pylons7: Pylons1
					{
						priority=10;
						attachment="DBA_80mm_UP8R_x48_Pylon";
						maxweight=1200;
						UIposition[]={0.1,0.27000001};
						hardpoints[]=
						{
							"DBA_CIS_Ordinance_Rail",
						};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay="EmptyDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,2000,4000,16000,30000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,2000,4000,16000,30000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		selectionFireAnim="zasleh";
		simulation="airplaneX";
		vtol=4;
		scope=1;
		scopecurator=1;
		author="DBA";
		model="3as\3as_vulture\model\vulture.p3d";
		displayName="Vulture Droid";
		crew="B_Pilot_F";
		icon="A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		picture="A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";
		driverLeftHandAnimName="throttle_pilot";
		driverRightHandAnimName="throttle_pilot";
		driverleftleganimname="pedal";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		driverrightleganimname="pedal";
		forceHideDriver=1;
		forceHideGunner=1;
		forceHideCommander=1;
		hideProxyInCombat=1;
		driverForceOptics=1;
		driverOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatEnabled=0;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_Vulture\data\Vulture.rvmat",
				"3as\3as_Vulture\data\Vulture.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectPlaneHP";
			};
			class Exhaust_2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectPlaneHP";
			};
		};
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"3as\3as_vulture\data\vulturedroid_color.paa"
		};
		insideSoundCoef=0.2;
		destrType="DestructWreck";
		driveraction="Plane_Fighter_03_pilot";
		armor=200;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				name="HitHull";
				visual="Hit_Hull";
				armor=3.5;
				explosionShielding=3.5;
				passThrough=1;
				radius=0.5;
				minimalHit=0.050000001;
				depends="0";
				material=-1;
			};
			class HitEngine: HitHull
			{
				name="HitEngine";
				visual="Hit_Engine";
				armor=2.5;
				explosionShielding=0.85;
				passThrough=1;
				radius=0.60000002;
				minimalHit=0.050000001;
			};
		};
		driveoncomponent[]={};
		camouflage=8;
		audible=10;
		accuracy=0.2;
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		htMin=60;
		htMax=1800;
		afMax=200;
		mfMax=100;
		mFact=0;
		tBody=0;
		radartype=4;
		lockdetectionsystem="2 + 8 + 4";
		incommingmissliedetectionsystem=16;
		maxSpeed=950;
		acceleration=600;
		landingAoa="6 * 3.1415 / 180";
		landingSpeed=215;
		stallSpeed=50;
		stallWarningTreshold=0.1;
		armorStructured=1;
		envelope[]={0,0.5,2.5,4.8000002,6,7,7.5,7.5,7.5,7,6.4000001,5.5999999,2.0999999,1.7,1.4,1.35,1.3,1.15,0};
		draconicForceXCoef=6.5;
		draconicForceYCoef=8.5;
		draconicForceZCoef=9;
		draconicTorqueXCoef=2.0999999;
		draconicTorqueYCoef=3;
		angleOfIndicence=0.090000004;
		airFriction0[]={60,50,12};
		airFriction1[]={70,50,12};
		airFriction2[]={60,50,12};
		altNoForce=13000;
		altFullForce=10000;
		elevatorCoef[]={0,0.80000001,0.89999998,1,1.1,1.2,1.2,1.3,1.3,1.3,1.4,1.4,1.4};
		elevatorSensitivity=1.3;
		elevatorControlsSensitivityCoef=5;
		aileronCoef[]={0,0.5,1,1.2,1.3,1.2,1.1};
		aileronSensitivity=1.1;
		aileronControlsSensitivityCoef=5;
		rudderCoef[]={0.5,1.8,2.5999999,2.75,2.8,2.8499999,2.9000001,2.95,2.98,3.01,2.7,1.1,0.89999998,0.69999999,0.5,0.30000001};
		rudderinfluence=0.89999998;
		rudderControlsSensitivityCoef=2;
		thrustCoef[]={2.5,3.5,3.5999999,3.8,4,4.5,5,4.5,3.5,3,2.7,2.5,2.0999999,2,1.5,1.25};
		irScanRangeMin=10;
		irScanRangeMax=10000;
		irScanToEyeFactor=8;
		fuelCapacity=8000;
		wheelSteeringSensitivity=1.5;
		maxOmega=2000;
		airBrake=40;
		airBrakeFrictionCoef=5;
		flaps=1;
		flapsFrictionCoef=0.31999999;
		gearsUpFrictionCoef=0.60000002;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.5,0.0066};
		airFrictionCoefs2[]={0.001,0.0049999999,6.8000001e-005};
		laserScanner=1;
		memoryPointLRocket="P Raketa";
		memoryPointRRocket="L Raketa";
		cost=10000000;
		type="VAir";
		threat[]={0.2,0.69999999,0.89999998};
		class camShakeGForce
		{
			power=1;
			frequency=20;
			distance=0;
			minSpeed=1;
		};
		minGForce=0.30000001;
		maxGForce=20;
		gForceShakeAttenuation=0.5;
		class WingVortices
		{
		};
		class Reflectors
		{
			class Left
			{
				ambient[]={100,100,100,0};
				color[]={7000,7500,10000,1};
				conefadecoef=10;
				daylight=0;
				direction="light_1_dir";
				flaresize=4;
				hitpoint="L svetlo";
				innerangle=20;
				intensity=50;
				outerangle=60;
				position="light_1_pos";
				selection="L svetlo";
				size=1;
				useflare=1;
				class Attenuation
				{
					constant=0;
					linear=0;
					quadratic=4;
					start=1;
				};
			};
		};
		class MarkerLights
		{
			class Red_Still_R
			{
				name="light_positional_red";
				color[]={0.30000001,0,0,1};
				ambient[]={0.003,0.003,0.003,1};
				brightness=0.050000001;
				dayLight=1;
				blinking=0;
			};
			class Green_Still_L
			{
				name="light_positional_green";
				color[]={0,0.30000001,0,1};
				ambient[]={0.003,0.003,0.003,1};
				brightness=0.050000001;
				blinking=0;
				dayLight=1;
			};
		};
		class Library
		{
			libTextDesc="Vulture Droid";
		};
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin",
			"db0",
			1,
			40
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getout",
			"db0",
			1,
			40
		};
		soundDammage[]=
		{
			"",
			"db-5",
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_int",
			"db-0",
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_ext",
			"db5",
			1,
			500
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int",
			"db-0",
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext",
			"db5",
			1,
			500
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			"db-20",
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			"db-20",
			1.5
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_up",
			"db-2",
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_down",
			"db-2",
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Up",
			"db-4",
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Down",
			"db-4",
			1,
			100
		};
		class scrubLandInt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\air\noises\wheelsInt",
				"db0",
				1,
				100
			};
			frequency=1;
			volume="(scrubLand factor[0.01, 0.20])";
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_ext",
					"db8",
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
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_ext",
					"db8",
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
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int",
					"db0",
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int",
					"db0",
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
	class DBA_CIS_Vulture_Interim: DBA_CIS_Vulture_Droid_Base
	{
		scope=2;
		scopecurator=2;
		Displayname="Vulture Swarm Fighter";
		side=0;
		editorSubcategory = "O_DBA_CIS_Planes";
        vehicleClass = "O_DBA_CIS_Planes";
        faction = "O_DBA_CIS_F";
		crew="O_UAV_AI";
		icon="A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		picture="3as\3as_vulture\data\vulture_picture_co.paa";
		explosionShielding=0.5;
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		gunBeg[]=
		{
			"Usti hlavne1",
			"Usti hlavne2"
		};
		Gunend[]=
		{
			"Konec hlavne1",
			"Konec hlavne2"
		};
		weapons[]=
		{
			"DBA_30mw_G108K",
			"DBA_CIS_Chafflauncher"
		};
		editorPreview="101st_Aux_Mod\Addons\DBA_CIS\EditorPreviews_F\Data\O_DBA_CIS_Vulture_Droid_3as_F.jpg";
		magazines[]=
		{
			"DBA_30mm_STN_x800_mag",
			"DBA_Chaff_x100_mag"
		};
	};
};
