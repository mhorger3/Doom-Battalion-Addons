class CfgPatches
{
	class HMCSAddon
	{
		name="DBA Mechanized";
		author="Trip";
		units[]=
		{
			"DBA_HMCS"
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddos[]=
		{
			"A3_Armor_F",
			"A3_Armor_F_Gamma"
		};
	};
};
class CfgVehicles
{
	class Sound;
	class HMSound_Thrust: Sound
	{
		sound="HMSFX_Thrust";
	};
	class HMSound_Thrust2: Sound
	{
		sound="HMSFX_Thrust2";
	};
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
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
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class MBT_01_base_F: Tank_F
	{
		class Exhausts;
		class Reflectors
		{
			class Left;
			class Right;
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F
	{
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
	};
	class AWGS: B_MBT_01_cannon_F
	{
	};
	class DBA_HMCS: AWGS
	{
		scope=2;
		scopeCurator=2;
		model="HMCS\HMCS.p3d";
		displayName="RFV-838 Staghound";
		crew="101st_CloneTrooper_212th";
		faction="Republic_101st";
		side=1;
		getInRadius=3.5;
		supplyRadius=4.5;
		extcameraposition[]={0,4,-15};
		picture="HMCS\ui\hm_cmd_ca.paa";
		icon="HMCS\ui\hm_map_ca.paa";
		editorPreview="HMCS\ui\ep_HMCS.jpg";
		transportSoldier=0;
		maximumLoad=0;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=40;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		brakeDistance=10;
		cost=500000;
		audible=4;
		camouflage=8;
		armor=1400;
		armorLights=0.40000001;
		armorHull=1;
		armorTurret=1;
		armorGun=1;
		armorEngine=1;
		armorTracks=0.60000002;
		armorStructural=4;
		damageResistance=0.0060000001;
		epeImpulseDamageCoef=18;
		crewVulnerable="false";
		crewExplosionProtection=0.99989998;
		crewcrashprotection=0.0099999998;
		ejectDeadGunner="false";
		ejectDeadDriver="false";
		ejectDeadCommander="false";
		ejectDamageLimit=0.94999999;
		waterPPInVehicle=1;
		maxFordingDepth=6;
		waterResistance=2;
		waterDamageEngine=0.5;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1;
				material=-1;
				name="HP_Hull";
				visual="HPV_HULL";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.18000001;
			};
			class HitEngine: HitEngine
			{
				armor=1;
				material=-1;
				name="HP_Engine";
				visual="HPV_ALL";
				passThrough=0;
				minimalHit=0.15000001;
				explosionShielding=0.2;
				radius=0.18000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.60000002;
				material=-1;
				name="HP_LTrack";
				visual="HPV_LTRUCKS";
				passThrough=0;
				minimalHit=0.2;
				explosionShielding=0.40000001;
				radius=0.18000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.60000002;
				material=-1;
				name="HP_RTrack";
				visual="HPV_RTRUCKS";
				passThrough=0;
				minimalHit=0.15000001;
				explosionShielding=0.40000001;
				radius=0.18000001;
			};
		};
		radartype=2;
		LockDetectionSystem="2 + 8 + 4";
		incomingMissileDetectionSystem=16;
		irTarget=1;
		irScanGround=1;
		irScanRangeMax=5000;
		irScanRangeMin=5;
		laserscanner=1;
		nvscanner=1;
		reportOwnPosition="true";
		reportRemoteTargets="true";
		receiveRemoteTargets="true";
		class Components
		{
			class TransportCountermeasuresComponent;
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						angleRangeHorizontal=360;
						angleRangeVertical=360;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						angleRangeHorizontal=360;
						angleRangeVertical=360;
					};
					class IRSensorComponent: SensorTemplateIR
					{
						animDirection="mainTurret";
						angleRangeHorizontal=90;
						angleRangeVertical=90;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						animDirection="mainTurret";
						angleRangeHorizontal=90;
						angleRangeVertical=90;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						animDirection="mainTurret";
						angleRangeHorizontal=90;
						angleRangeVertical=90;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						animDirection="mainTurret";
						angleRangeHorizontal=90;
						angleRangeVertical=90;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: HMVehicleSystemsDisplayManagerRightSensors
			{
			};
			class VehicleSystemsDisplayManagerComponentLeft: HMVehicleSystemsDisplayManagerLeftSensors
			{
			};
			class TransportPylonsComponent
			{
				UIPicture="HMCS\ui\hm_dl_ca.paa";
				class pylons
				{
					class HMPylon_Cannon
					{
						maxweight=10000;
						hardpoints[]=
						{
							"HMHardPoint_Cannon"
						};
						attachment="";
						bay=-1;
						priority=1;
						UIposition[]={0.2,0.25};
						turret[]={0};
					};
					class HMPylon_Gatling
					{
						maxweight=10000;
						hardpoints[]=
						{
							"HMHardPoint_Gatling"
						};
						attachment="";
						bay=-1;
						priority=1;
						UIposition[]={0.2,0.31999999};
						turret[]={0};
					};
					class HMPylon_Rocket
					{
						maxweight=10000;
						hardpoints[]=
						{
							"HMHardPoint_Rocket"
						};
						attachment="";
						bay=-1;
						priority=1;
						UIposition[]={0.5,0.15000001};
						turret[]={0};
					};
					class HMPylon_Missile
					{
						maxweight=10000;
						hardpoints[]=
						{
							"HMHardPoint_Missile"
						};
						attachment="";
						bay=-1;
						priority=2;
						UIposition[]={0.15000001,0.15000001};
						turret[]={0};
					};
				};
				class Presets
				{
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"HMPylon_32Rnd_120mm_APFSDS_shells_Tracer_Yellow",
							"HMPylon_HMMag_300Rnd_30mm_APDS_shells_Tracer_Yellow",
							"HMPylon_HMMag_14Rnd_Rocket_04_HE_F",
							"HMPylon_HMMag_4Rnd_GAT_missiles"
						};
					};
					class AA
					{
						displayName="AA";
						attachment[]=
						{
							"HMPylon_32Rnd_120mm_APFSDS_shells_Tracer_Yellow",
							"HMPylon_HMMag_300Rnd_30mm_APDS_shells_Tracer_Yellow",
							"HMPylon_HMMag_14Rnd_Rocket_04_HE_F",
							"HMPylon_HMMag_2Rnd_Titan_long_missiles"
						};
					};
				};
			};
		};
		hasDriver="true";
		forceHideDriver="true";
		driverAction="GetOutLow";
		driverInAction="GetInLow";
		driverCompartments="Compartment1";
		driverForceOptics=1;
		driverOpticsModel="HMCS\parts\optics\HMOptics_Driver.p3d";
		unitInfoType="RscOptics_AV_pilot";
		class ViewOptics: ViewOptics
		{
			initFov=0.80000001;
			minFov=0.1;
			maxFov=0.80000001;
			visionMode[]=
			{
				"Normal",
				"NVG",
				"TI"
			};
		};
		gunnerHasFlares=1;
		memorypointcm[]=
		{
			"HMFL_L_END",
			"HMFL_R_END"
		};
		memorypointcmdir[]=
		{
			"HMFL_L_BGN",
			"HMFL_R_BGN"
		};
		memoryPointMissileDir[]=
		{
			"HMML_END",
			"HMML_END"
		};
		memoryPointMissile[]=
		{
			"HMML_BGN",
			"HMML_BGN"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				hasGunner="true";
				forceHideGunner=1;
				viewGunnerInExternal="false";
				startEngine=1;
				gunnerCompartments="Compartment2";
				caneject=0;
				memoryPointsGetInGunnerDir="pos gunner dir";
				memoryPointsGetInGunner="pos gunner";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerUsesPilotView="false";
				gunnerForceOptics=1;
				gunnerOpticsShowCursor=0;
				maxturn=90;
				minturn=-90;
				initTurn=0;
				maxHorizontalRotSpeed=1.8;
				minElev=-35;
				maxElev=35;
				initElev=-25;
				maxVerticalRotSpeed=1.8;
				stabilizedInAxes="StabilizedInAxisX";
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel="HMCS\parts\optics\HMOptics_Gunner.p3d";
				gunnerOpticsEffect[]={};
				memoryPointGunnerOutOptics="";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				turretInfoType="RscOptics_UGV_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900};
				discreteDistanceInitIndex=3;
				class ViewOptics: ViewOptics
				{
					maxAngleX=90;
					minAngleX=-90;
					initAngleX=0;
					maxAngleY=35;
					minAngleY=-35;
					initAngleY=-25;
					initFov=0.80000001;
					minFov=0.025;
					maxFov=0.80000001;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentRight: HMVehicleSystemsDisplayManagerRightSensors
					{
					};
					class VehicleSystemsDisplayManagerComponentLeft: HMVehicleSystemsDisplayManagerLeftSensors
					{
					};
				};
				weapons[]=
				{
					"HMWeapon_cannon_T12",
					"HMWeapon_Gatling_GAU8B",
					"HMWeapon_Rocket_T10",
					"HMWeapon_missiles_T8",
					"CMFlareLauncher"
				};
				magazines[]=
				{
					"120Rnd_CMFlare_Chaff_Magazine"
				};
				gunBeg="HMGUN_BGN";
				gunEnd="HMGUN_END";
				memoryPointGun[]=
				{
					"HMMG"
				};
				missileBeg="HMRP_BGN";
				missileEnd="HMRP_END";
				class HitPoints
				{
					class HitTurret
					{
						armor=0.60000002;
						material=-1;
						name="HP_Turret";
						visual="HPV_HMGUNS";
						passThrough=0;
						minimalHit=0.15000001;
						explosionShielding=0.2;
						radius=0.18000001;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="HP_Gun";
						visual="HPV_ARMS";
						passThrough=0;
						minimalHit=0.15000001;
						explosionShielding=0.40000001;
						radius=0.18000001;
					};
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.56234133,
					1,
					50
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.56234133,
					1,
					50
				};
				class Turrets
				{
				};
			};
		};
		simulation="tankX";
		fuelCapacity=1700;
		maxSpeed=155;
		enginePower=2000;
		peakTorque=3000;
		idleRpm=700;
		redRpm=4000;
		maxOmega=418;
		engineLosses=1;
		transmissionLosses=1;
		brakeIdleSpeed=0;
		tankTurnForce=900000;
		thrustDelay=0.1;
		clutchStrength=100;
		latency=0.1;
		slowSpeedForwardCoef=0.30000001;
		normalSpeedForwardCoef=0.40000001;
		changeGearMinEffectivity[]={0.5,0.15000001,0.94999999};
		torqueCurve[]=
		{
			{0,1},
			{0.5,0.69999999},
			{1,0.5}
		};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-1,
				"N",
				0,
				"D1",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0;
		};
		numberPhysicalWheels=14;
		wheelCircumference=2.02;
		class Wheels
		{
			class L1
			{
				boneName="Wheel_1_1_Damper";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				steering=0;
				side="left";
				weight=150;
				mass=150;
				MOI=11.52;
				latStiffX=20;
				latStiffY=240;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=20000;
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=60000;
				dampingRate=1;
				dampingRateInAir=4000;
				dampingRateDamaged=2;
				dampingRateDestroyed=3;
				maxDroop=0.18000001;
				maxCompression=0.36000001;
				frictionVsSlipGraph[]=
				{
					{0,5},
					{0.5,5},
					{1,5}
				};
				width=1;
				suspTravelDirection[]={-0.125,-1,0};
			};
			class L2: L1
			{
				boneName="Wheel_1_2_Damper";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
			};
			class L3: L1
			{
				boneName="Wheel_1_3_Damper";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L1
			{
				boneName="";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L1
			{
				boneName="";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L1
			{
				boneName="";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L1
			{
				boneName="";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class R1: L1
			{
				boneName="Wheel_2_1_Damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class R2: R1
			{
				boneName="Wheel_2_2_Damper";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
			};
			class R3: R1
			{
				boneName="Wheel_2_3_Damper";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R1
			{
				boneName="";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R1
			{
				boneName="";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R1
			{
				boneName="";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R1
			{
				boneName="";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
		};
		destrType="DestructDefault";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"HMCS\rvmat\hm_01\hm_01.rvmat",
				"HMCS\rvmat\hm_01\hm_01_damage.rvmat",
				"HMCS\rvmat\hm_01\hm_01_destruct.rvmat",
				"HMCS\rvmat\hm_02\hm_02.rvmat",
				"HMCS\rvmat\hm_02\hm_02_damage.rvmat",
				"HMCS\rvmat\hm_02\hm_02_destruct.rvmat",
				"HMCS\rvmat\hm_03\hm_03.rvmat",
				"HMCS\rvmat\hm_03\hm_03_damage.rvmat",
				"HMCS\rvmat\hm_03\hm_03_destruct.rvmat",
				"hmcs\rvmat\hmguns\hmguns.rvmat",
				"hmcs\rvmat\hmguns\hmguns.rvmat",
				"hmcs\rvmat\hmguns\hmguns_destruct.rvmat"
			};
		};
		memoryPointsLeftWaterEffect="LTIRE_B";
		memoryPointsRightWaterEffect="RTIRE_B";
		dustFrontLeftPos="LTIRE_F";
		dustFrontRightPos="RTIRE_F";
		dustBackLeftPos="LTIRE_B";
		dustBackRightPos="RTIRE_B";
		class Exhausts: Exhausts
		{
			class Exhaust1
			{
				position="EXS_L";
				direction="EXS_L_DIR";
				effect="ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position="EXS_R";
				direction="EXS_R_DIR";
				effect="ExhaustsEffectHeliCom";
			};
			class Exhaust3
			{
				position="LTHRUST_EXS";
				direction="LTHRUST_EXS_DIR";
				effect="ExhaustsEffectVTOL1HP";
			};
			class Exhaust4
			{
				position="RTHRUST_EXS";
				direction="RTHRUST_EXS_DIR";
				effect="ExhaustsEffectVTOL1HP";
			};
		};
		class Reflectors
		{
		};
		selectionBrakeLights="LIGHT_B";
		insideSoundCoef=0.5;
		attenuationEffectType="TankAttenuation";
		soundLocked[]=
		{
			"HMCS\sound\warning.wss",
			6,
			1
		};
		soundIncommingMissile[]=
		{
			"HMCS\sound\warning.wss",
			20,
			1
		};
		soundEngineOnInt[]=
		{
			"HMCS\sound\gasTurbineStart.wss",
			2,
			1
		};
		soundEngineOnExt[]=
		{
			"HMCS\sound\gasTurbineStart.wss",
			10,
			1,
			120
		};
		soundEngineOffInt[]=
		{
			"HMCS\sound\gasTurbineStop.wss",
			1.2,
			1
		};
		soundEngineOffExt[]=
		{
			"HMCS\sound\gasTurbineStop.wss",
			4,
			1,
			80
		};
		class Sounds
		{
			class Engine_ext
			{
				sound[]=
				{
					"HMCS\sound\dash.wss",
					30,
					1,
					120
				};
				frequency="(rpm / 4000)";
				volume="engineOn * camPos * (rpm / 4000)";
			};
			class Engine_int
			{
				sound[]=
				{
					"HMCS\sound\dash.wss",
					3,
					1
				};
				frequency="(rpm / 4000)";
				volume="engineOn * (1 - camPos) * (rpm / 4000)";
			};
			class Tires_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1.1220185,
					1,
					60
				};
				frequency="1";
				volume="camPos * (speed factor[2,20])";
			};
			class Tires_in
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.40000001,
					1
				};
				frequency="1";
				volume="(1 - camPos) * (speed factor[2,20])";
			};
		};
		class AnimationSources: AnimationSources
		{
			class LooseLean
			{
				source="user";
				animPeriod=0.69999999;
				initPhase=1;
			};
			class InitLowMode
			{
				source="user";
				animPeriod=0.30000001;
				initPhase=1;
			};
			class Walk
			{
				source="user";
				animPeriod=2;
				initPhase=-0.5;
			};
			class InitHighMode
			{
				source="user";
				animPeriod=0.30000001;
				initPhase=0;
			};
			class InitBoostMode
			{
				source="user";
				animPeriod=0.25;
				initPhase=0;
			};
			class InitCargoMode
			{
				source="user";
				animPeriod=2.5;
				initPhase=0;
			};
			class TurnLean
			{
				source="user";
				animPeriod=0.30000001;
				initPhase=0;
			};
			class JumpLean
			{
				source="user";
				animPeriod=0.15000001;
				initPhase=0;
			};
			class FlowedLegs
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DropFoots
			{
				source="user";
				animPeriod=0.30000001;
				initPhase=0;
			};
			class SwingLThrust
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class SwingRThrust: SwingLThrust
			{
			};
			class SwingCovers
			{
				source="user";
				animPeriod=0.15000001;
				initPhase=0;
			};
			class SwingFlaps
			{
				source="user";
				animPeriod=0.15000001;
				initPhase=0;
			};
			class SwingRudders
			{
				source="user";
				animPeriod=0.15000001;
				initPhase=0;
			};
			class LockedTires
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class HideBurners
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class HideMuzzleFlashGun
			{
				source="reload";
				weapon="HMWeapon_cannon_T12";
			};
			class DeployMLDoor
			{
				source="user";
				animPeriod=0.40000001;
				initPhase=0;
			};
			class HideRockets
			{
				source="revolving";
				weapon="HMWeapon_Rocket_T10";
				animPeriod=0;
			};
			class HideMissiles
			{
				source="revolving";
				weapon="HMWeapon_missiles_T8";
				animPeriod=0;
			};
			class HideLights
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class HideHUDs
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
		};
		hiddenselections[]=
		{
			"hm_01",
			"hm_02",
			"hm_03",
			"hm_glass",
			"hmguns",
			"hm_clan",
			"hm_clanAlt",
			"hm_clanText",
			"hm_insignia",
			"hm_number"
		};
		hiddenselectionstextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Mecha\tex\hm_01_101_co.paa",
			"101st_Aux_Mod\Addons\DBA_Mecha\tex\hm_02_101_co.paa",
			"101st_Aux_Mod\Addons\DBA_Mecha\tex\hm_03_101_co.paa",
			"HMCS\tex\hm_glass\hm_glass_ca.paa",
			"HMCS\tex\hmguns\hmguns_01_co.paa",
			"",
			"",
			"",
			"",
			"HMCS\tex\hm_insignias\hm_insignias_01_ca.paa"
		};
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""HMCS\script\starter\MaintenanceStarter_HMCS.sqf"";";
		};
	};
};
