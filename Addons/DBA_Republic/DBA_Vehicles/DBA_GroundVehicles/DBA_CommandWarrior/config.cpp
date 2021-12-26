class cfgPatches
{
	class DBA_CommandWarrior
	{
		author="Vulgar";
		name="DBA Command Warrior";
		units[]=
		{
			"DBA_CommandAPC_Wheeled_03_base_F",
			"B_DBA_CommandAPC_Wheeled_03_base_F",
			"B_DBA_CommandAPC_Wheeled_03_cannon_F"
			
		};
		requiredAddons[]=
		{
			"A3_Armor_F_Gamma",
			"A3_Soft_F"
		};
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
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles

{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
	};
	class DBA_CommandAPC_Wheeled_03_base_F: Wheeled_APC_F
	{
		features="Randomization: No						<br />Camo selections: 4 - hull, bottom, main turret, accessories						<br />Script door sources: None						<br />Script animations: HideTurret						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 8";
		author="Vulgar";
		mapSize=10.25;
		artilleryScanner = 1;
		_generalMacro="APC_Wheeled_03_base_F";
		accuracy=0.25;
		displayName="DBA Command Warrior Base";
		thrustDelay=0.34999999;
		brakeIdleSpeed=1.78;
		maxSpeed=75;
		fuelCapacity=24;
		wheelCircumference=3.8050001;
		waterLeakiness=2.5;
		normalSpeedForwardCoef=0.51999998;
		accelAidForceYOffset=-1.5;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=65;
		simulation="carx";
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		enginePower=372.5;
		peakTorque=2033.75;
		maxOmega=220;
		minOmega=40;
		idleRpm=388;
		redRpm=2100;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.050000001;
		torqueCurve[]=
		{
			
			{
				"(0/2300)",
				"(0/2260)"
			},
			
			{
				"(1200/2300)",
				"(1625/2260)"
			},
			
			{
				"(1400/2300)",
				"(2100/2260)"
			},
			
			{
				"(1500/2300)",
				"(2200/2260)"
			},
			
			{
				"(1550/2300)",
				"(2260/2260)"
			},
			
			{
				"(1600/2300)",
				"(2200/2260)"
			},
			
			{
				"(2300/2300)",
				"(1700/2260)"
			},
			
			{
				"(4700/2300)",
				"(0/2260)"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.8400002,
				"N",
				0,
				"D1",
				3.4300001,
				"D2",
				2.01,
				"D3",
				1.42,
				"D4",
				1,
				"D5",
				0.82999998,
				"D6",
				0.58999997
			};
			TransmissionRatios[]=
			{
				"High",
				7.3000002
			};
			AmphibiousRatios[]=
			{
				"R1",
				-8,
				"N",
				0,
				"D1",
				35
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		switchTime=0.1;
		latency=1.4;
		clutchStrength=35;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				steering=1;
				center="wheel_1_1_center";
				boundary="wheel_1_1_bound";
				width="0.33";
				mass=187.5;
				MOI=50;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=45000;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_center";
				tireForceAppPointOffset="wheel_1_1_center";
				maxCompression=0.1125;
				maxDroop=0.15000001;
				sprungMass=3090;
				springStrength=110000;
				springDamperRate=27900;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=1;
				center="wheel_1_2_center";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_center";
				tireForceAppPointOffset="wheel_1_2_center";
			};
			class L3: L1
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_center";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_center";
				tireForceAppPointOffset="wheel_1_3_center";
				maxHandBrakeTorque=300000;
			};
			class L4: L1
			{
				boneName="wheel_1_4_damper";
				steering=0;
				center="wheel_1_4_center";
				boundary="wheel_1_4_bound";
				suspForceAppPointOffset="wheel_1_4_center";
				tireForceAppPointOffset="wheel_1_4_center";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_center";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_center";
				tireForceAppPointOffset="wheel_2_1_center";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=1;
				center="wheel_2_2_center";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_center";
				tireForceAppPointOffset="wheel_2_2_center";
			};
			class R3: R1
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_center";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_center";
				tireForceAppPointOffset="wheel_2_3_center";
				maxHandBrakeTorque=300000;
			};
			class R4: R1
			{
				boneName="wheel_2_4_damper";
				steering=0;
				center="wheel_2_4_center";
				boundary="wheel_2_4_bound";
				suspForceAppPointOffset="wheel_2_4_center";
				tireForceAppPointOffset="wheel_2_4_center";
				maxHandBrakeTorque=300000;
			};
		};
		editorSubcategory="O_DBA_Republic_APCs";
		terrainCoef=1.5;
		turnCoef=3;
		canFloat=1;
		waterAngularDampingCoef=10;
		waterPPInVehicle=0;
		waterResistanceCoef=0.5;
		engineShiftY=1.1;
		wheelDestroyRadiusCoef=0.60000002;
		armor=1560;
		armorStructural=19;
		armorLights=0.1;
		crewExplosionProtection=0.99949998;
		damageResistance=0.0071899998;
		driverAction="Driver_APC_Wheeled_03_cannon_F_out";
		driverInAction="Driver_APC_Wheeled_03_cannon_F_in";
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic04",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic02",
			"passenger_apc_generic02b",
			"passenger_generic01_leanright",
			"passenger_apc_narrow_generic01"
		};
		hideWeaponsCargo=1;
		memoryPointDriverOptics="driverview";
		driverInfoPanelCameraPos="driverview_old";
		cargoIsCoDriver[]={0};
		forceHideDriver=0;
		viewDriverInExternal=1;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		driverForceOptics=0;
		LODDriverTurnedOut=1201;
		LODDriverTurnedin=1100;
		LODDriverOpticsIn=1202;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		driverLeftLegAnimName="pedal_brake";
		showNVGDriver=0;
		showNVGCommander=0;
		showNVGGunner=0;
		class MFD
		{
			class MFD_Driver_Heading
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.61000001,0.62,0};
					alpha=1;
					condition="on";
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0},
							1
						};
						right[]=
						{
							{1,0},
							1
						};
						down[]=
						{
							{0.5,0.81},
							1
						};
					};
				};
			};
			class MFD_Commander_Display_Damage
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0,0};
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Damage_Hull
					{
						type="text";
						source="static";
						text="HULL";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.039999999,0.18000001},
							1
						};
						right[]=
						{
							{0.064999998,0.18000001},
							1
						};
						down[]=
						{
							{0.039999999,0.44},
							1
						};
					};
					class Damage_Engine
					{
						type="text";
						source="static";
						text="ENG";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.11,0.18000001},
							1
						};
						right[]=
						{
							{0.13500001,0.18000001},
							1
						};
						down[]=
						{
							{0.11,0.44},
							1
						};
					};
					class Damage_Fuel
					{
						type="text";
						source="static";
						text="FUEL";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.178,0.18000001},
							1
						};
						right[]=
						{
							{0.20299999,0.18000001},
							1
						};
						down[]=
						{
							{0.178,0.44},
							1
						};
					};
					class Damage_Wheels
					{
						type="text";
						source="static";
						text="WHL";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.039999999,0.55000001},
							1
						};
						right[]=
						{
							{0.064999998,0.55000001},
							1
						};
						down[]=
						{
							{0.039999999,0.81},
							1
						};
					};
					class Damage_Gun
					{
						type="text";
						source="static";
						text="GUN";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.11,0.55000001},
							1
						};
						right[]=
						{
							{0.13500001,0.55000001},
							1
						};
						down[]=
						{
							{0.11,0.81},
							1
						};
					};
					class Damage_Turret
					{
						type="text";
						source="static";
						text="TRT";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.178,0.55000001},
							1
						};
						right[]=
						{
							{0.20299999,0.55000001},
							1
						};
						down[]=
						{
							{0.178,0.81},
							1
						};
					};
				};
			};
			class MFD_Commander_Display
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
					class FuelScale
					{
						type="linear";
						source="fuel";
						sourceIndex=1;
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,0};
						maxPos[]={-0.090000004,0};
					};
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_Gun
					{
						type="text";
						source="static";
						text="MAIN GUN";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.273,0.18000001},
							1
						};
						right[]=
						{
							{0.29800001,0.18000001},
							1
						};
						down[]=
						{
							{0.273,0.44},
							1
						};
					};
					class Main_Gun_Ammo_count
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=0;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.273,0.55000001},
							1
						};
						right[]=
						{
							{0.29800001,0.55000001},
							1
						};
						down[]=
						{
							{0.273,0.81},
							1
						};
					};
					class Main_Gun_Ammo_Type_text
					{
						type="text";
						source="static";
						text="TYPE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.38499999,0.18000001},
							1
						};
						right[]=
						{
							{0.41,0.18000001},
							1
						};
						down[]=
						{
							{0.38499999,0.44},
							1
						};
					};
					class Main_Gun_Ammo_Type
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.38499999,0.55000001},
							1
						};
						right[]=
						{
							{0.41,0.55000001},
							1
						};
						down[]=
						{
							{0.38499999,0.81},
							1
						};
					};
					class Coax
					{
						type="text";
						source="static";
						text="COAX";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.498,0.18000001},
							1
						};
						right[]=
						{
							{0.523,0.18000001},
							1
						};
						down[]=
						{
							{0.498,0.44},
							1
						};
					};
					class Coax_Ammo_count
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.498,0.55000001},
							1
						};
						right[]=
						{
							{0.523,0.55000001},
							1
						};
						down[]=
						{
							{0.498,0.81},
							1
						};
					};
					class Azimuth
					{
						type="text";
						source="static";
						text="GUN AZIM";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.60500002,0.18000001},
							1
						};
						right[]=
						{
							{0.63,0.18000001},
							1
						};
						down[]=
						{
							{0.60500002,0.44},
							1
						};
					};
					class Azimuth_number
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.61000001,0.55000001},
							1
						};
						right[]=
						{
							{0.63499999,0.55000001},
							1
						};
						down[]=
						{
							{0.61000001,0.81},
							1
						};
					};
					class Smoke
					{
						type="text";
						source="static";
						text="SMOKE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.71700001,0.18000001},
							1
						};
						right[]=
						{
							{0.74199998,0.18000001},
							1
						};
						down[]=
						{
							{0.71700001,0.44},
							1
						};
					};
					class Fuel_background_white
					{
						color[]={0.2,0.2,0.2};
						alpha=0.1;
						condition="1";
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.787,0.69999999},
										1
									},
									
									{
										{0.87699997,0.69999999},
										1
									},
									
									{
										{0.87699997,0.89999998},
										1
									},
									
									{
										{0.787,0.89999998},
										1
									}
								}
							};
						};
					};
					class Fuel_background_green
					{
						color[]={0,0.69999999,0};
						condition="fuel>=0.5";
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.787,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.89999998},
										1
									},
									
									{
										{0.787,0.89999998},
										1
									}
								}
							};
						};
					};
					class Fuel_background_yellow
					{
						color[]={0.89999998,0.69999999,0};
						condition="fuel<0.5";
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.787,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.89999998},
										1
									},
									
									{
										{0.787,0.89999998},
										1
									}
								}
							};
						};
					};
					class Fuel_background_red
					{
						color[]={0.69999999,0,0};
						condition="fuel<0.3";
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.787,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.89999998},
										1
									},
									
									{
										{0.787,0.89999998},
										1
									}
								}
							};
						};
					};
					class Fuel
					{
						type="text";
						source="static";
						text="FUEL";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.82999998,0.18000001},
							1
						};
						right[]=
						{
							{0.85500002,0.18000001},
							1
						};
						down[]=
						{
							{0.82999998,0.44},
							1
						};
					};
					class Fuel_number
					{
						type="text";
						source="fuel";
						sourceScale=100;
						sourceLength=1;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.83499998,0.40000001},
							1
						};
						right[]=
						{
							{0.86000001,0.40000001},
							1
						};
						down[]=
						{
							{0.83499998,0.66000003},
							1
						};
					};
					class Fuel_percent_sign
					{
						type="text";
						source="static";
						text="%";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.84500003,0.40000001},
							1
						};
						right[]=
						{
							{0.87,0.40000001},
							1
						};
						down[]=
						{
							{0.84500003,0.66000003},
							1
						};
					};
				};
			};
			class MFD_Commander_OnScreen
			{
				topLeft="PIP_COM_TL";
				topRight="PIP_COM_TR";
				bottomLeft="PIP_COM_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0,0};
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Azimuth_number
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.22,0.435},
							1
						};
						right[]=
						{
							{0.245,0.435},
							1
						};
						down[]=
						{
							{0.22,0.472},
							1
						};
					};
					class Elevation_Text
					{
						type="text";
						source="static";
						text="E: ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.2,0.28},
							1
						};
						right[]=
						{
							{0.22499999,0.28},
							1
						};
						down[]=
						{
							{0.2,0.317},
							1
						};
					};
					class Elevation_Number
					{
						type="text";
						source="[y]turretworld";
						sourceScale=1;
						sourceLength=4;
						sourcePrecision=1;
						refreshRate=0;
						align="center";
						scale=1;
						pos[]=
						{
							{0.23,0.28},
							1
						};
						right[]=
						{
							{0.255,0.28},
							1
						};
						down[]=
						{
							{0.23,0.317},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.75,0.28},
							1
						};
						right[]=
						{
							{0.77499998,0.28},
							1
						};
						down[]=
						{
							{0.75,0.317},
							1
						};
					};
					class VisionMode_Text
					{
						type="text";
						source="static";
						text="WFOV";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.75,0.64999998},
							1
						};
						right[]=
						{
							{0.77499998,0.64999998},
							1
						};
						down[]=
						{
							{0.75,0.68699998},
							1
						};
					};
					class VisionMode_String
					{
						type="text";
						source="visionMode";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.82499999,0.64999998},
							1
						};
						right[]=
						{
							{0.85000002,0.64999998},
							1
						};
						down[]=
						{
							{0.82499999,0.68699998},
							1
						};
					};
				};
			};
			class MFD_Commander_Display_MainTurret
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0,0};
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Smoke_ammo
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						sourceIndex=0;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.72000003,0.55000001},
							1
						};
						right[]=
						{
							{0.745,0.55000001},
							1
						};
						down[]=
						{
							{0.72000003,0.81},
							1
						};
					};
				};
			};
			class MFD_Gunner_Ready_To_Fire
			{
				topLeft="mfd_gun_cli_TL";
				topRight="mfd_gun_cli_TR";
				bottomLeft="mfd_gun_cli_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0,0};
				alpha=0.5;
				enableParallax=0;
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition="1";
					class Top_text
					{
						type="text";
						source="static";
						text="READY TO";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.050000001},
							1
						};
						right[]=
						{
							{0.67000002,0.050000001},
							1
						};
						down[]=
						{
							{0.44999999,0.55000001},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="FIRE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.465,0.44999999},
							1
						};
						right[]=
						{
							{0.685,0.44999999},
							1
						};
						down[]=
						{
							{0.465,0.94999999},
							1
						};
					};
				};
			};
			class MFD_Gunner_Display
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_armament
					{
						type="text";
						source="static";
						text="MAIN ARMAMENT";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,-0.003},
							1
						};
						right[]=
						{
							{0.075000003,-0.003},
							1
						};
						down[]=
						{
							{0.015,0.075000003},
							1
						};
					};
					class Machinegun
					{
						type="text";
						source="static";
						text="COAX MG";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.31},
							1
						};
						right[]=
						{
							{0.075000003,0.31},
							1
						};
						down[]=
						{
							{0.015,0.38800001},
							1
						};
					};
					class Main_armament_ammo_type
					{
						type="text";
						source="static";
						text="AMMO TYPE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.54500002,-0.003},
							1
						};
						right[]=
						{
							{0.60500002,-0.003},
							1
						};
						down[]=
						{
							{0.54500002,0.075000003},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="LASED DIST";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.83999997},
							1
						};
						right[]=
						{
							{0.068999998,0.83999997},
							1
						};
						down[]=
						{
							{0.015,0.91799998},
							1
						};
					};
					class Azimut
					{
						type="text";
						source="static";
						text="AZIMUTH";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.91500002},
							1
						};
						right[]=
						{
							{0.075000003,0.91500002},
							1
						};
						down[]=
						{
							{0.015,0.99299997},
							1
						};
					};
					class Damage
					{
						type="text";
						source="static";
						text="DAMAGE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.38999999},
							1
						};
						right[]=
						{
							{0.075000003,0.38999999},
							1
						};
						down[]=
						{
							{0.015,0.46799999},
							1
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.91500002},
							1
						};
						right[]=
						{
							{0.40000001,0.91500002},
							1
						};
						down[]=
						{
							{0.34,0.99299997},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.33500001,0.83999997},
							1
						};
						right[]=
						{
							{0.39500001,0.83999997},
							1
						};
						down[]=
						{
							{0.33500001,0.91799998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Main_Armament_Ammo_Type
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
				enableParallax=0;
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_AmmoType
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.56,0.090000004},
							1
						};
						right[]=
						{
							{0.62,0.090000004},
							1
						};
						down[]=
						{
							{0.56,0.168},
							1
						};
					};
				};
			};
			class MFD_Gunner_Coax_Ammo
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38,0.31},
							1
						};
						right[]=
						{
							{0.43000001,0.31},
							1
						};
						down[]=
						{
							{0.38,0.38800001},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="EtelkaMonospacePro";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="MP-T";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.064999998},
							1
						};
						right[]=
						{
							{0.075000003,0.064999998},
							1
						};
						down[]=
						{
							{0.015,0.14300001},
							1
						};
					};
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=0;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38,0.064999998},
							1
						};
						right[]=
						{
							{0.44,0.064999998},
							1
						};
						down[]=
						{
							{0.38,0.14300001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="APFSDS-T";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.125},
							1
						};
						right[]=
						{
							{0.064999998,0.125},
							1
						};
						down[]=
						{
							{0.015,0.20299999},
							1
						};
					};
					class Gunner_Text_2
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=0;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38,0.125},
							1
						};
						right[]=
						{
							{0.44,0.125},
							1
						};
						down[]=
						{
							{0.38,0.20299999},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="AT MISSILE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.185},
							1
						};
						right[]=
						{
							{0.064999998,0.185},
							1
						};
						down[]=
						{
							{0.015,0.26300001},
							1
						};
					};
					class Gunner_Text_3
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=2;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38,0.185},
							1
						};
						right[]=
						{
							{0.43000001,0.185},
							1
						};
						down[]=
						{
							{0.38,0.26300001},
							1
						};
					};
				};
			};
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.40000001;
			minFov=0.23;
			maxFov=0.40000001;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-2.5;
			initAngleY=0;
			initFov=0.89999998;
			minFov=0.25;
			maxFov=1.25;
			minAngleX=-65;
			maxAngleX=85;
			minAngleY=-150;
			maxAngleY=150;
			minMoveX=-0.075000003;
			maxMoveX=0.075000003;
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
		};
		extCameraPosition[]={0,3,-7.1999998};
		unitInfoType="RscUnitInfoTank";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=4;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.2;
			};
			class HitEngine: HitEngine
			{
				armor=3;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.2;
			};
			class HitFuel: HitFuel
			{
				armor=1.75;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.5;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.2;
			};
			class HitSLAT_Left_1
			{
				simulation="Armor_SLAT";
				armorComponent="cage_left_1_geo";
				name="cage_left_1_point";
				armor=-200;
				minimalHit=0.30000001;
				passThrough=0;
				visual="-";
				explosionShielding=2;
				radius=0.25;
			};
			class HitSLAT_Left_2: HitSLAT_Left_1
			{
				armorComponent="cage_left_2_geo";
				name="cage_left_2_point";
			};
			class HitSLAT_Left_3: HitSLAT_Left_1
			{
				armorComponent="cage_left_3_geo";
				name="cage_left_3_point";
			};
			class HitSLAT_Right_1: HitSLAT_Left_1
			{
				armorComponent="cage_right_1_geo";
				name="cage_right_1_point";
			};
			class HitSLAT_Right_2: HitSLAT_Left_1
			{
				armorComponent="cage_right_2_geo";
				name="cage_right_2_point";
			};
			class HitSLAT_Right_3: HitSLAT_Left_1
			{
				armorComponent="cage_right_3_geo";
				name="cage_right_3_point";
			};
			class HitSLAT_back: HitSLAT_Left_1
			{
				armorComponent="cage_back_geo";
				name="cage_back_point";
			};
			class HitSLAT_front: HitSLAT_Left_1
			{
				armorComponent="cage_front_geo";
				name="cage_front_point";
			};
			class HitLFWheel: HitLFWheel
			{
				radius=0.33000001;
				visual="wheel_1_1_hide";
				armorComponent="wheel_1_1_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.33000001;
				visual="wheel_1_2_hide";
				armorComponent="wheel_1_2_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLMWheel: HitLMWheel
			{
				radius=0.33000001;
				visual="wheel_1_3_hide";
				armorComponent="wheel_1_3_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLBWheel: HitLBWheel
			{
				radius=0.33000001;
				visual="wheel_1_4_hide";
				armorComponent="wheel_1_4_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.33000001;
				visual="wheel_2_1_hide";
				armorComponent="wheel_2_1_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.33000001;
				visual="wheel_2_2_hide";
				armorComponent="wheel_2_2_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRMWheel: HitRMWheel
			{
				radius=0.33000001;
				visual="wheel_2_3_hide";
				armorComponent="wheel_2_3_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRBWheel: HitRBWheel
			{
				radius=0.33000001;
				visual="wheel_2_4_hide";
				armorComponent="wheel_2_4_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
		};
		wheelDamageThreshold=0.18000001;
		wheelDamageRadiusCoef=0.75;
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_2",
			0.31622776,
			1
		};
		smokeLauncherGrenadeCount=14;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=210;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						gunnerName = "Commander";
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						minCamElev=-90;
						maxCamElev=90;
						weapons[] =
						{
							"SmokeLauncher"
						};
						magazines[] =
						{
							"SmokeLauncherMag"
						};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							0.56234133,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							0.56234133,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						forceHideGunner=0;
						gunnerAction="Commander_APC_Wheeled_03_cannon_F_out";
						gunnerInAction="Commander_APC_Wheeled_03_cannon_F_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						gunnerForceOptics=0;
						usepip=2;
						LODTurnedIn=1100;
						LODTurnedOut=1;
						LODOpticsIn=0;
						turretFollowFreeLook=2;
						animationSourceStickX="com_turret_control_x";
						animationSourceStickY="com_turret_control_y";
						gunnerRightHandAnimName="com_turret_control";
						minOutElev=-10;
						maxOutElev=25;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=40;
						initOutTurn=0;
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
						class ViewGunner: ViewGunner
						{
							initAngleX=-10;
							initAngleY=0;
							initFov=0.89999998;
							minFov=0.25;
							maxFov=1.25;
							minAngleX=-65;
							maxAngleX=85;
							minAngleY=-150;
							maxAngleY=150;
							minMoveX=-0.075000003;
							maxMoveX=0.075000003;
							minMoveY=-0.075000003;
							maxMoveY=0.075000003;
							minMoveZ=-0.075000003;
							maxMoveZ=0.1;
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.31;
							minFov=0.034000002;
							maxFov=0.31;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={2,3};
						};
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
							};
							class Medium: Medium
							{
							};
							class Narrow: Narrow
							{
							};
						};
						turretInfoType="RscOptics_APC_Wheeled_03_commander";
						showCrewAim=1;
						startEngine=0;
						class HitPoints
						{
							class HitComTurret
							{
								armor=0.5;
								material=-1;
								armorComponent="hit_com_turret";
								name="hit_com_turret_point";
								visual="commander_turret";
								passThrough=0;
								minimalHit=0.050000001;
								explosionShielding=1;
								radius=0.15000001;
								isTurret=1;
							};
							class HitComGun
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_com_gun";
								name="hit_com_gun_point";
								visual="commander_gun";
								passThrough=0;
								minimalHit=0.050000001;
								explosionShielding=1;
								radius=0.15000001;
								isGun=1;
							};
						};
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						gunnerHasFlares=1;
						viewGunnerInExternal=1;
					};
				};
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"LMG_RCWS"
				};
				magazines[]=
				{
					"2000Rnd_65x39_belt",
					"2000Rnd_65x39_belt"
				};
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					0.0099999998,
					1,
					30
				};
				commanding=1;
				minElev=-15;
				initElev=0;
				maxElev=90;
				minCamElev=-90;
				maxCamElev=90;
				gunnerAction="apcwheeled3_slot1_out";
				gunnerInAction="Gunner_APC_Wheeled_03_cannon_F_in";
				gunnerForceOptics=0;
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				forceHideGunner=1;
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				startEngine=0;
				stabilizedInAxes=3;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				usepip=1;
				LODTurnedIn=1100;
				LODTurnedOut=1;
				LODOpticsIn=0;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerRightHandAnimName="turret_control";
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh2";
				memoryPointGun[]=
				{
					"usti hlavne3"
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-10;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
				};
				class OpticsIn: Optics_Gunner_APC_03
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="RscOptics_APC_Wheeled_03_gunner";
				showCrewAim=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=15;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="OtocVez";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.2;
						isTurret=1;
					};
					class HitGun
					{
						armor=15;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="OtocHlaven";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext_damage.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext_destruct.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext2.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext2_damage.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext2_destruct.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext_alpha.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext_alpha_damage.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext_alpha_destruct.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_int.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_int_damage.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_int_destruct.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\RCWS30.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\RCWS30_damage.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\RCWS30_destruct.rvmat"
			};
		};
		textureList[]=
		{
			"Indep",
			1
		};
		class TextureSources
		{
			class Indep
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext2_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"A3\armor_f\data\cage_aaf_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class Indep_02
			{
				displayName="$STR_A3_texturesources_indepjungle0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext2_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"A3\armor_f\data\cage_G1_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class Indep_03
			{
				displayName="$STR_A3_texturesources_indepdesert0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext2_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"A3\Armor_F\Data\cage_G3_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class Guerilla_01
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_010";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_01_CO.paa",
					"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_01_CO.paa",
					"A3\Data_F_Tacops\data\RCWS30_IG_01_CO.paa",
					"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_01_CO.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa",
					"A3\armor_f\data\cage_G1_co.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_02
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_020";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_02_CO.paa",
					"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_02_CO.paa",
					"A3\Data_F_Tacops\data\RCWS30_IG_02_CO.paa",
					"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_02_CO.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa",
					"A3\armor_f\data\cage_sand_co.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_03
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_030";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_03_CO.paa",
					"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_03_CO.paa",
					"A3\Data_F_Tacops\data\RCWS30_IG_03_CO.paa",
					"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_03_CO.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
		};
		viewCargoShadowDiff=1;
		viewCargoShadowAmb=1;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectAMV";
			};
		};
		engineStartSpeed=5;
		class NVGMarkers
		{
			class NVGMarker01
			{
				name="nvg_marker";
				color[]={0.029999999,0.003,0.003,1};
				ambient[]={0.003,0.00030000001,0.00030000001,1};
				brightness=0.001;
				blinking=1;
			};
		};
		explosionEffect="FuelExplosionBig";
		engineEffectSpeed=5;
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				hitpoint="Light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				hitpoint="Light_L_flare";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2",
				"Right",
				"Right2"
			}
		};
		selectionFireAnim="";
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={21,20,13};
					ambient[]={5,0,0};
					intensity=0.13;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=1.15;
					};
					point="light_interior1";
				};
				class Light2: Light1
				{
					point="light_interior2";
					color[]={18,20,13};
					ambient[]={5,0,0};
					intensity=0.80000001;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=0.40000001;
				};
				class Light4: Light1
				{
					point="light_interior4";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light5: Light1
				{
					point="light_interior5";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light6: Light1
				{
					point="light_interior6";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light7: Light1
				{
					point="light_interior7";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light8: Light1
				{
					point="light_interior8";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light9: Light1
				{
					point="light_interior9";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light10: Light1
				{
					point="light_interior10";
					color[]={22,22,22};
					ambient[]={5,0,0};
					intensity=0.69999999;
				};
				class Light11: Light1
				{
					point="light_interior11";
					color[]={22,22,22};
					ambient[]={5,0,0};
					intensity=0.69999999;
				};
				class Light12: Light1
				{
					point="light_interior12";
					color[]={22,22,22};
					ambient[]={5,0,0};
					intensity=0.69999999;
				};
				class Light13: Light1
				{
					point="light_interior13";
					color[]={22,22,22};
					ambient[]={5,0,0};
					intensity=0.69999999;
				};
			};
		};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
				BBoxes[]=
				{
					"PIP_COM_TL",
					"PIP_COM_TR",
					"PIP_COM_BL",
					"PIP_COM_BR"
				};
			};
			class driver_display
			{
				renderTarget="rendertarget5";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.60000002;
					turret[]={-1};
				};
				BBoxes[]=
				{
					"PIP_DRV_TL",
					"PIP_DRV_TR",
					"PIP_DRV_BL",
					"PIP_DRV_BR"
				};
			};
			class mirror_l
			{
				renderTarget="mirror_l";
				class Camera
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"Mirror_L_TL",
					"Mirror_L_TR",
					"Mirror_L_BL",
					"Mirror_L_BR"
				};
			};
			class mirror_r
			{
				renderTarget="mirror_r";
				class Camera
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"Mirror_R_TL",
					"Mirror_R_TR",
					"Mirror_R_BL",
					"Mirror_R_BR"
				};
			};
		};
		transportSoldier=8;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=12;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20_F
			{
				weapon="arifle_Mk20_F";
				count=2;
			};
		};
		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class BreakWater
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
			class revolving_cannon
			{
				source="revolving";
				weapon="autocannon_30mm_CTWS";
			};
			class HitEngine_src
			{
				source="Hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class HitFuel_src
			{
				source="Hit";
				hitpoint="HitFuel";
				raw=1;
			};
			class HitHull_src
			{
				source="Hit";
				hitpoint="HitHull";
				raw=1;
			};
			class HitMainGun_src
			{
				source="Hit";
				hitpoint="HitGun";
				raw=1;
			};
			class HitTurret_src
			{
				source="Hit";
				hitpoint="HitTurret";
				raw=1;
			};
			class HitComTurret_src
			{
				source="Hit";
				hitpoint="HitComTurret";
				raw=1;
			};
			class HitSLAT_Left_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_1";
				raw=1;
			};
			class HitSLAT_Left_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_2";
				raw=1;
			};
			class HitSLAT_Left_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_3";
				raw=1;
			};
			class HitSLAT_Right_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_1";
				raw=1;
			};
			class HitSLAT_Right_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_2";
				raw=1;
			};
			class HitSLAT_Right_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_3";
				raw=1;
			};
			class HitSLAT_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_back";
				raw=1;
			};
			class HitSLAT_front_src
			{
				source="Hit";
				hitpoint="HitSLAT_front";
				raw=1;
			};
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBags
			{
				displayName="$STR_A3_animationsources_showbagshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBags2
			{
				displayName="$STR_A3_animationsources_showbagsturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showTools
			{
				displayName="$STR_A3_animationsources_showtoolshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showSLATHull
			{
				displayName="$STR_A3_animationsources_showslathull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showBags",
			0,
			"showBags2",
			0,
			"showTools",
			0,
			"showSLATHull",
			0
		};
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		numberPhysicalWheels=8;
	};
	class B_DBA_CommandAPC_Wheeled_03_base_F: DBA_CommandAPC_Wheeled_03_base_F
	{
		author="Vulgar";
		_generalMacro="I_APC_Wheeled_03_base_F";
		side=1;
		faction="B_DBA_Republic_F";
		crew="B_DBA_P2CloneTrooper_F";
		typicalCargo[]=
		{
			"B_DBA_P2CloneTrooper_F"
		};
	};
	class B_DBA_CommandAPC_Wheeled_03_cannon_F: B_DBA_CommandAPC_Wheeled_03_base_F
	{
		author="Vulgar";
		class SimpleObject
		{
			eden=1;
			animate[]=
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
					"fuel",
					1
				},
				
				{
					"indicatorspeed",
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
					"wheel_1_3",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"wheel_2_3",
					0
				},
				
				{
					"wheel_1_4",
					0
				},
				
				{
					"wheel_2_4",
					0
				},
				
				{
					"daylights",
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
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
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
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
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
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
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
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
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
					"wheel_1_3_damper",
					0
				},
				
				{
					"wheel_2_2_damper",
					0
				},
				
				{
					"wheel_2_3_damper",
					0
				},
				
				{
					"wheel_1_4_damper",
					0
				},
				
				{
					"wheel_2_4_damper",
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
					"steering_1_2",
					0
				},
				
				{
					"steering_2_2",
					0
				},
				
				{
					"hatchdriver",
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
					"obsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"damagehlaven",
					0
				},
				
				{
					"damagecamonet",
					0
				},
				
				{
					"vrtulea",
					0
				},
				
				{
					"vrtuleb",
					0
				},
				
				{
					"poklop_commander",
					0
				},
				
				{
					"zasleh_rot",
					962
				},
				
				{
					"zasleh2_rot",
					1459.37
				},
				
				{
					"zasleh_hide",
					0
				},
				
				{
					"reverse_light",
					1
				},
				
				{
					"hidetitan_1",
					1
				},
				
				{
					"hidetitan_2",
					1
				},
				
				{
					"reloadtitan_1",
					0
				},
				
				{
					"reloadtitan_2",
					0
				},
				
				{
					"missile_move_1",
					1
				},
				
				{
					"missile_move_2",
					0
				},
				
				{
					"launcher_hatch_1_rot",
					0
				},
				
				{
					"launcher_hatch_1_translate_1",
					0
				},
				
				{
					"launcher_hatch_1_translate_2",
					0
				},
				
				{
					"launcher_hatch_2_rot",
					0
				},
				
				{
					"launcher_hatch_2_translate_1",
					0
				},
				
				{
					"launcher_hatch_2_translate_2",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"indicatortempoil",
					0
				},
				
				{
					"indicatortempwater",
					0
				},
				
				{
					"indicatorammeter",
					0
				},
				
				{
					"indicatorspeed_mfd_driver",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_mfd_driver",
					0
				},
				
				{
					"lights_driver",
					0
				},
				
				{
					"lights_driver_off",
					0
				},
				
				{
					"lights_turret",
					0
				},
				
				{
					"cannon_ready_light",
					1
				},
				
				{
					"engine_damage_indicator",
					0
				},
				
				{
					"main_gun_damage_indicator",
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
					"turret_control_x",
					0
				},
				
				{
					"turret_control_y",
					0
				},
				
				{
					"com_turret_control_x",
					0
				},
				
				{
					"com_turret_control_y",
					0
				},
				
				{
					"driver_reverse_cam",
					1
				},
				
				{
					"driver_hide_mfd",
					1
				},
				
				{
					"indicatortempwater_mfd_driver",
					0
				},
				
				{
					"indicatorfuel_mfd_driver",
					1
				},
				
				{
					"indicator_hull_direction_mfd_driver",
					0
				},
				
				{
					"indicator_main_turret_mfd_driver",
					0
				},
				
				{
					"indicator_com_turret_mfd_driver",
					0
				},
				
				{
					"indicator_hull_direction_mfd_com",
					0
				},
				
				{
					"indicator_main_turret_mfd_com",
					0
				},
				
				{
					"indicator_main_turret_onscreen_com",
					0
				},
				
				{
					"indicator_com_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_onscreen_com",
					0
				},
				
				{
					"indicator_hull_direction_mfd_gunner",
					0
				},
				
				{
					"indicator_main_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_smoke_1",
					0
				},
				
				{
					"indicator_com_smoke_2",
					0
				},
				
				{
					"indicator_damage_engine",
					0
				},
				
				{
					"indicator_damage_fuel",
					0
				},
				
				{
					"indicator_damage_wheels",
					0
				},
				
				{
					"indicator_turret_damage_hull",
					0
				},
				
				{
					"indicator_turret_damage_engine",
					0
				},
				
				{
					"indicator_turret_damage_fuel",
					0
				},
				
				{
					"indicator_turret_damage_main_gun",
					0
				},
				
				{
					"indicator_turret_damage_wheels",
					0
				},
				
				{
					"indicator_turret_damage_turret",
					0
				},
				
				{
					"indicator_turret_damage_com_turret",
					0
				},
				
				{
					"unhide_pip_error_screen",
					1
				},
				
				{
					"hide_mfd_elements",
					1
				},
				
				{
					"slat_front_normal_hide",
					0
				},
				
				{
					"slat_front_damage_unhide",
					0
				},
				
				{
					"slat_front_damage_hide",
					0
				},
				
				{
					"slat_front_destroyed_unhide",
					0
				},
				
				{
					"slat_front_firegeo_hide",
					0
				},
				
				{
					"slat_back_normal_hide",
					0
				},
				
				{
					"slat_back_damage_unhide",
					0
				},
				
				{
					"slat_back_damage_hide",
					0
				},
				
				{
					"slat_back_destroyed_unhide",
					0
				},
				
				{
					"slat_back_firegeo_hide",
					0
				},
				
				{
					"slat_left_1_normal_hide",
					0
				},
				
				{
					"slat_left_1_damage_unhide",
					0
				},
				
				{
					"slat_left_1_damage_hide",
					0
				},
				
				{
					"slat_left_1_destroyed_unhide",
					0
				},
				
				{
					"slat_left_1_firegeo_hide",
					0
				},
				
				{
					"slat_left_2_normal_hide",
					0
				},
				
				{
					"slat_left_2_damage_unhide",
					0
				},
				
				{
					"slat_left_2_damage_hide",
					0
				},
				
				{
					"slat_left_2_destroyed_unhide",
					0
				},
				
				{
					"slat_left_2_firegeo_hide",
					0
				},
				
				{
					"slat_left_3_normal_hide",
					0
				},
				
				{
					"slat_left_3_damage_unhide",
					0
				},
				
				{
					"slat_left_3_damage_hide",
					0
				},
				
				{
					"slat_left_3_destroyed_unhide",
					0
				},
				
				{
					"slat_left_3_firegeo_hide",
					0
				},
				
				{
					"slat_right_1_normal_hide",
					0
				},
				
				{
					"slat_right_1_damage_unhide",
					0
				},
				
				{
					"slat_right_1_damage_hide",
					0
				},
				
				{
					"slat_right_1_destroyed_unhide",
					0
				},
				
				{
					"slat_right_1_firegeo_hide",
					0
				},
				
				{
					"slat_right_2_normal_hide",
					0
				},
				
				{
					"slat_right_2_damage_unhide",
					0
				},
				
				{
					"slat_right_2_damage_hide",
					0
				},
				
				{
					"slat_right_2_destroyed_unhide",
					0
				},
				
				{
					"slat_right_2_firegeo_hide",
					0
				},
				
				{
					"slat_right_3_normal_hide",
					0
				},
				
				{
					"slat_right_3_damage_unhide",
					0
				},
				
				{
					"slat_right_3_damage_hide",
					0
				},
				
				{
					"slat_right_3_destroyed_unhide",
					0
				},
				
				{
					"slat_right_3_firegeo_hide",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh2",
				"zasleh_1",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.523;
			verticalOffsetWorld=-0.090999998;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_APC_Wheeled_03_cannon_F.jpg";
		_generalMacro="I_APC_Wheeled_03_cannon_F";
		scope=2;
		accuracy=0.30000001;
		displayName="[DBA] Command Warrior [Test Bed]";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_APC_Wheeled_03_WAPC_Library0";
		};
		model="\A3\armor_f_gamma\APC_Wheeled_03\APC_Wheeled_03_cannon_F.p3d";
		picture="\A3\armor_f_gamma\APC_Wheeled_03\data\UI\APC_Wheeled_03_ca.paa";
		Icon="\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
		memoryPointTaskMarker="TaskMarker_1_pos";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] =
				{
					"DBA_Command_Relay",
					"DBA_40mw_P4M_Cannon",
					"DBA_762_C95A1_CG",
					"DBA_127_C3HB_HMG"
				};
				magazines[] =
				{
					"DBA_210mm_AMMO_Resupply_x1_mag",
					"DBA_210mm_AMMO_Resupply_x1_mag",
					"DBA_210mm_AMMO_Resupply_x1_mag",
					"DBA_210mm_Explosive_Resupply_x1_mag",
					"DBA_210mm_Explosive_Resupply_x1_mag",
					"DBA_210mm_Explosive_Resupply_x1_mag",
					"DBA_210mm_Launcher_Resupply_x1_mag",
					"DBA_210mm_Launcher_Resupply_x1_mag",
					"DBA_210mm_Launcher_Resupply_x1_mag",
					"DBA_210mm_Medical_Resupply_x1_mag",
					"DBA_210mm_Medical_Resupply_x1_mag",
					"DBA_210mm_Medical_Resupply_x1_mag",
					"DBA_210mm_Repair_Resupply_x1_mag",
					"DBA_210mm_Repair_Resupply_x1_mag",
					"DBA_210mm_Repair_Resupply_x1_mag",
					"DBA_210mm_Secondary_Resupply_x1_mag",
					"DBA_210mm_Secondary_Resupply_x1_mag",
					"DBA_210mm_Secondary_Resupply_x1_mag",
					"DBA_40mm_PM225_AP_x80_mag",
					"DBA_40mm_PM225_AP_x80_mag",
					"DBA_40mm_PM225_AP_x80_mag",
					"DBA_40mm_PL31A_HESH_x320_mag",
					"DBA_40mm_PL31A_HESH_x320_mag",
					"DBA_762_D61_x2000_mag",
					"DBA_127_X962_x1500_mag"
				};
				gunnerName = "Orbital Relay Controller";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.39810717,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.39810717,
					1,
					30
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_titan";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="autocannon_30mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="autocannon_30mm_CTWS";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warrior\warrior_ext_01_101_co.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_GroundVehicles\Warrior\warrior_ext_02_101_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
	};
};