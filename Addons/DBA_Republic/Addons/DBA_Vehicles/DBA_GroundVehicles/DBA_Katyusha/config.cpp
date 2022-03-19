class CfgPatches
{
	class DBA_Katyusha
	{
		requiredAddons[] =
		{
			"A3_Armor_F_Gamma"
		};
		requiredVersion = 0.1;
		units[] =
		{
			"B_T_DBA_Katyusha_F",
			"DBA_KatyushaTruck_MRL_base_F"
		};
		weapons[] = {};
	};
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class NewTurret;
class Optics_Commander_01 : Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01 : Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles {
	class Tank;
	class Tank_F : Tank
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class MBT_01_base_F : Tank_F
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
	};
	class DBA_Katyusha_Base_F : MBT_01_base_F
	{
		features = "Randomization: No						<br />Camo selections: 2 - hull, main turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Vulgar";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] =
				{
					"veh_vehicle_armor_s"
				};
				speechPlural[] =
				{
					"veh_vehicle_armor_p"
				};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_vehicle_armor_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_armor_p";
		nameSound = "veh_vehicle_armor_s";
		_generalMacro = "MBT_01_mlrs_base_F";
		displayName = "[DBA] Ratchet MLRS";
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_B_MBT_01_MLRS_Library0";
		};
		model = "\A3\armor_f_gamma\MBT_01\MBT_01_mlrs_F";
		editorSubcategory = "EdSubcat_Artillery";
		picture = "\A3\Armor_F_Gamma\MBT_01\Data\UI\Slammer_MLRS_Base_ca.paa";
		Icon = "\A3\armor_f_gamma\MBT_01\Data\ui\map_mlrs_ca.paa";
		unitInfoType = "RscUnitInfoArtillery";
		forceHideDriver = 0;
		transportSoldier = 0;
		armorStructural = 7;
		weapons[] =
		{
			"SmokeLauncher"
		};
		magazines[] =
		{
			"SmokeLauncherMag"
		};
		class MFD
		{
			class MFD_Driver_Heading
			{
				topLeft = "MFD_1_TL";
				topRight = "MFD_1_TR";
				bottomLeft = "MFD_1_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 0.5;
				enableParallax = 0;
				font = "LCD14";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 0.61000001,0.62,0 };
					alpha = 1;
					condition = "on";
					class Driver_Heading
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.5,0},
							1
						};
						right[] =
						{
							{1,0},
							1
						};
						down[] =
						{
							{0.5,0.81},
							1
						};
					};
				};
			};
			class MFD_Driver_Speed
			{
				topLeft = "MFD_2_TL";
				topRight = "MFD_2_TR";
				bottomLeft = "MFD_2_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 0.5;
				enableParallax = 0;
				font = "LCD14";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 0.61000001,0.62,0 };
					alpha = 1;
					condition = "on";
					class Driver_Speed
					{
						type = "text";
						source = "speed";
						sourceScale = 3.5999999;
						sourceLength = 2;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.5,0},
							1
						};
						right[] =
						{
							{1,0},
							1
						};
						down[] =
						{
							{0.5,0.81},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_text
			{
				topLeft = "MFD_Driver_1_TL";
				topRight = "MFD_Driver_1_TR";
				bottomLeft = "MFD_Driver_1_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 1,1,1 };
				alpha = 0.5;
				enableParallax = 0;
				font = "RobotoCondensedLight";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Driver_Heading
					{
						type = "text";
						source = "static";
						text = "AZIMUTH";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.44999999,0.02},
							1
						};
						right[] =
						{
							{0.69999999,0.02},
							1
						};
						down[] =
						{
							{0.44999999,0.87},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_second
			{
				topLeft = "MFD_Driver_2_TL";
				topRight = "MFD_Driver_2_TR";
				bottomLeft = "MFD_Driver_2_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 1,1,1 };
				alpha = 0.5;
				enableParallax = 0;
				font = "RobotoCondensedLight";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Driver_Heading
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.44999999,0},
							1
						};
						right[] =
						{
							{0.94999999,0},
							1
						};
						down[] =
						{
							{0.44999999,0.81},
							1
						};
					};
				};
			};
			class MFD_Gunner_Ready_To_Fire
			{
				topLeft = "mfd_gun_cli_TL";
				topRight = "mfd_gun_cli_TR";
				bottomLeft = "mfd_gun_cli_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0,0,0 };
				alpha = 0.5;
				enableParallax = 0;
				font = "EtelkaMonospaceProBold";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 0,0,0 };
					alpha = 1;
					condition = "1";
					class Top_text
					{
						type = "text";
						source = "static";
						text = "READY TO";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.44999999,0.050000001},
							1
						};
						right[] =
						{
							{0.67000002,0.050000001},
							1
						};
						down[] =
						{
							{0.44999999,0.55000001},
							1
						};
					};
					class Bottom_text
					{
						type = "text";
						source = "static";
						text = "FIRE";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.465,0.44999999},
							1
						};
						right[] =
						{
							{0.685,0.44999999},
							1
						};
						down[] =
						{
							{0.465,0.94999999},
							1
						};
					};
				};
			};
			class MFD_Gunner_Display
			{
				topLeft = "mfd_gun_TL";
				topRight = "mfd_gun_TR";
				bottomLeft = "mfd_gun_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 1,1,1 };
				alpha = 0.5;
				enableParallax = 0;
				turret[] = { 0 };
				font = "EtelkaMonospaceProBold";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Main_armament
					{
						type = "text";
						source = "static";
						text = "MAIN ARMAMENT";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,-0.003},
							1
						};
						right[] =
						{
							{0.075000003,-0.003},
							1
						};
						down[] =
						{
							{0.015,0.075000003},
							1
						};
					};
					class Machinegun
					{
						type = "text";
						source = "static";
						text = "COAX";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,0.31},
							1
						};
						right[] =
						{
							{0.075000003,0.31},
							1
						};
						down[] =
						{
							{0.015,0.38800001},
							1
						};
					};
					class Main_armament_ammo_type
					{
						type = "text";
						source = "static";
						text = "AMMO TYPE";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.54500002,-0.003},
							1
						};
						right[] =
						{
							{0.60500002,-0.003},
							1
						};
						down[] =
						{
							{0.54500002,0.075000003},
							1
						};
					};
					class Lased_distance_elevation
					{
						type = "text";
						source = "static";
						text = "LASED DIST";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,0.83999997},
							1
						};
						right[] =
						{
							{0.064999998,0.83999997},
							1
						};
						down[] =
						{
							{0.015,0.91799998},
							1
						};
					};
					class Azimut
					{
						type = "text";
						source = "static";
						text = "AZIMUTH";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,0.91500002},
							1
						};
						right[] =
						{
							{0.075000003,0.91500002},
							1
						};
						down[] =
						{
							{0.015,0.99299997},
							1
						};
					};
					class Damage
					{
						type = "text";
						source = "static";
						text = "DAMAGE";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,0.38999999},
							1
						};
						right[] =
						{
							{0.075000003,0.38999999},
							1
						};
						down[] =
						{
							{0.015,0.46799999},
							1
						};
					};
					class Heading
					{
						type = "text";
						source = "[x]turretworld";
						sourceScale = 1;
						sourceLength = 3;
						scale = 0.2;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.34,0.91500002},
							1
						};
						right[] =
						{
							{0.40000001,0.91500002},
							1
						};
						down[] =
						{
							{0.34,0.99299997},
							1
						};
					};
					class Lased_Range
					{
						type = "text";
						source = "laserDist";
						sourceScale = 1;
						sourceLength = 4;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.33500001,0.83999997},
							1
						};
						right[] =
						{
							{0.39500001,0.83999997},
							1
						};
						down[] =
						{
							{0.33500001,0.91799998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Main_Armament_Ammo_Type
			{
				topLeft = "mfd_gun_TL";
				topRight = "mfd_gun_TR";
				bottomLeft = "mfd_gun_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 0.5;
				turret[] = { 0 };
				enableParallax = 0;
				font = "EtelkaMonospaceProBold";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Gunner_AmmoType
					{
						type = "text";
						source = "ammoFormat";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.56,0.090000004},
							1
						};
						right[] =
						{
							{0.62,0.090000004},
							1
						};
						down[] =
						{
							{0.56,0.168},
							1
						};
					};
				};
			};
			class MFD_Gunner_Coax_Ammo
			{
				topLeft = "mfd_gun_TL";
				topRight = "mfd_gun_TR";
				bottomLeft = "mfd_gun_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 0.5;
				enableParallax = 0;
				turret[] = { 0 };
				font = "EtelkaMonospaceProBold";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Gunner_Text_1
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						sourceIndex = 1;
						align = "left";
						refreshRate = 0.1;
						pos[] =
						{
							{0.37,0.31},
							1
						};
						right[] =
						{
							{0.43000001,0.31},
							1
						};
						down[] =
						{
							{0.37,0.38800001},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				topLeft = "mfd_gun_TL";
				topRight = "mfd_gun_TR";
				bottomLeft = "mfd_gun_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 0.5;
				enableParallax = 0;
				turret[] = { 0 };
				font = "EtelkaMonospacePro";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Main_Armament_Ammo_Type_1
					{
						type = "text";
						source = "static";
						text = "APFSDS-T";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,0.064999998},
							1
						};
						right[] =
						{
							{0.075000003,0.064999998},
							1
						};
						down[] =
						{
							{0.015,0.14300001},
							1
						};
					};
					class Gunner_Text_1
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						sourceLength = 2;
						sourceIndex = 1000;
						scale = 1;
						align = "left";
						refreshRate = 0.1;
						pos[] =
						{
							{0.38499999,0.064999998},
							1
						};
						right[] =
						{
							{0.44499999,0.064999998},
							1
						};
						down[] =
						{
							{0.38499999,0.14300001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type = "text";
						source = "static";
						text = "HE-T";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,0.125},
							1
						};
						right[] =
						{
							{0.075000003,0.125},
							1
						};
						down[] =
						{
							{0.015,0.20299999},
							1
						};
					};
					class Gunner_Text_2
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						sourceLength = 2;
						sourceIndex = 1001;
						scale = 1;
						align = "left";
						refreshRate = 0.1;
						pos[] =
						{
							{0.38499999,0.125},
							1
						};
						right[] =
						{
							{0.44499999,0.125},
							1
						};
						down[] =
						{
							{0.38499999,0.20299999},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type = "text";
						source = "static";
						text = "HEAT-MP-T";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,0.185},
							1
						};
						right[] =
						{
							{0.075000003,0.185},
							1
						};
						down[] =
						{
							{0.015,0.26300001},
							1
						};
					};
					class Gunner_Text_3
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						sourceLength = 2;
						sourceIndex = 1002;
						scale = 1;
						align = "left";
						refreshRate = 0.1;
						pos[] =
						{
							{0.38499999,0.185},
							1
						};
						right[] =
						{
							{0.44499999,0.185},
							1
						};
						down[] =
						{
							{0.38499999,0.26300001},
							1
						};
					};
				};
			};
			class MFD_Gunner_Generic1
			{
				topLeft = "mfd_gun_generic1_TL";
				topRight = "mfd_gun_generic1_TR";
				bottomLeft = "mfd_gun_generic1_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 0.5;
				enableParallax = 0;
				font = "PuristaMedium";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 0.61000001,0.62,0 };
					alpha = 1;
					condition = "on";
					class Generic_Text1
					{
						type = "text";
						source = "static";
						text = "SIGHT: READY";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] =
						{
							{0.050000001,0.1},
							1
						};
						right[] =
						{
							{0.17,0.1},
							1
						};
						down[] =
						{
							{0.050000001,0.5},
							1
						};
					};
					class Generic_Text2
					{
						type = "text";
						source = "static";
						text = "RETICLE: CALIBRATED";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] =
						{
							{0.050000001,0.44999999},
							1
						};
						right[] =
						{
							{0.17,0.44999999},
							1
						};
						down[] =
						{
							{0.050000001,0.85000002},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoType
			{
				topLeft = "MFD_4_TL";
				topRight = "MFD_4_TR";
				bottomLeft = "MFD_4_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 0.5;
				turret[] = { 0 };
				enableParallax = 0;
				font = "LCD14";
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Gunner_AmmoType
					{
						type = "text";
						source = "ammoFormat";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.45500001,0.2},
							1
						};
						right[] =
						{
							{0.65499997,0.2},
							1
						};
						down[] =
						{
							{0.45500001,0.69999999},
							1
						};
					};
				};
			};
			class MFD_Gunner_Heading
			{
				topLeft = "MFD_Gunner_heading_TL";
				topRight = "MFD_Gunner_heading_TR";
				bottomLeft = "MFD_Gunner_heading_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 1,1,1 };
				alpha = 0.5;
				enableParallax = 0;
				font = "LCD14";
				turret[] = { 0 };
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Heading
					{
						type = "text";
						source = "[x]turretworld";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.5,0},
							1
						};
						right[] =
						{
							{0.69999999,0},
							1
						};
						down[] =
						{
							{0.5,0.89999998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Second_Display
			{
				topLeft = "mfd_com_TL";
				topRight = "mfd_com_TR";
				bottomLeft = "mfd_com_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 1,1,1 };
				alpha = 0.5;
				enableParallax = 0;
				turret[] = { 0 };
				font = "RobotoCondensedLight";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Main_armament
					{
						type = "text";
						source = "static";
						text = "MAIN ARMAMENT";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,-0.0049999999},
							1
						};
						right[] =
						{
							{0.075000003,-0.0049999999},
							1
						};
						down[] =
						{
							{0.015,0.072999999},
							1
						};
					};
					class Lased_distance_elevation
					{
						type = "text";
						source = "static";
						text = "LASER DIST";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,0.83999997},
							1
						};
						right[] =
						{
							{0.075000003,0.83999997},
							1
						};
						down[] =
						{
							{0.015,0.91799998},
							1
						};
					};
					class Azimut
					{
						type = "text";
						source = "static";
						text = "AZIMUTH";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,0.91500002},
							1
						};
						right[] =
						{
							{0.075000003,0.91500002},
							1
						};
						down[] =
						{
							{0.015,0.99299997},
							1
						};
					};
					class Heading
					{
						type = "text";
						source = "weaponHeading";
						sourceScale = 1;
						sourceLength = 3;
						scale = 0.2;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.34,0.91500002},
							1
						};
						right[] =
						{
							{0.40000001,0.91500002},
							1
						};
						down[] =
						{
							{0.34,0.99299997},
							1
						};
					};
					class Lased_Range
					{
						type = "text";
						source = "laserDist";
						sourceScale = 1;
						sourceLength = 4;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.34,0.83999997},
							1
						};
						right[] =
						{
							{0.40000001,0.83999997},
							1
						};
						down[] =
						{
							{0.34,0.91799998},
							1
						};
					};
				};
			};
			class MFD_Commander_Ready_To_Fire
			{
				topLeft = "mfd_com_cli_TL";
				topRight = "mfd_com_cli_TR";
				bottomLeft = "mfd_com_cli_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0,0,0 };
				alpha = 0.5;
				enableParallax = 0;
				font = "RobotoCondensedLight";
				class Bones
				{
				};
				class Draw
				{
					color[] = { 0,0,0 };
					alpha = 1;
					condition = "1";
					class Top_text
					{
						type = "text";
						source = "static";
						text = "READY TO";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							{0.47999999,0.050000001},
							1
						};
						right[] =
						{
							{0.68000001,0.050000001},
							1
						};
						down[] =
						{
							{0.47999999,0.56},
							1
						};
					};
					class Bottom_text
					{
						type = "text";
						source = "static";
						text = "FIRE";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							{0.5,0.41},
							1
						};
						right[] =
						{
							{0.69999999,0.41},
							1
						};
						down[] =
						{
							{0.5,0.92000002},
							1
						};
					};
				};
			};
			class MFD_Commander_Smoke_Indicator
			{
				topLeft = "mfd_com_smoke_TL";
				topRight = "mfd_com_smoke_TR";
				bottomLeft = "mfd_com_smoke_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0,0,0 };
				alpha = 0.5;
				enableParallax = 0;
				font = "RobotoCondensedLight";
				class Bones
				{
				};
				class Draw
				{
					color[] = { 0,0,0 };
					alpha = 1;
					condition = "1";
					class Top_text
					{
						type = "text";
						source = "static";
						text = "SMOKE";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							{0.5,0},
							1
						};
						right[] =
						{
							{0.69999999,0},
							1
						};
						down[] =
						{
							{0.5,0.5},
							1
						};
					};
					class Bottom_text
					{
						type = "text";
						source = "static";
						text = "SCREEN";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							{0.5,0.40000001},
							1
						};
						right[] =
						{
							{0.69999999,0.40000001},
							1
						};
						down[] =
						{
							{0.5,0.89999998},
							1
						};
					};
				};
			};
			class MFD_Commander_AmmoIndicator_Main_Armament
			{
				topLeft = "mfd_com_TL";
				topRight = "mfd_com_TR";
				bottomLeft = "mfd_com_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 0.5;
				enableParallax = 0;
				turret[] = { 0 };
				font = "PuristaMedium";
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 1000,1000,1000,1 };
				};
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Main_Armament_Ammo_Type_1
					{
						type = "text";
						source = "static";
						text = "TITAN AG MSL";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "right";
						refreshRate = 0.1;
						pos[] =
						{
							{0.015,0.079999998},
							1
						};
						right[] =
						{
							{0.075000003,0.079999998},
							1
						};
						down[] =
						{
							{0.015,0.15800001},
							1
						};
					};
					class Gunner_Text_1
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						sourceLength = 2;
						sourceIndex = 0;
						scale = 1;
						align = "left";
						refreshRate = 0.1;
						pos[] =
						{
							{0.38,0.079999998},
							1
						};
						right[] =
						{
							{0.44,0.079999998},
							1
						};
						down[] =
						{
							{0.38,0.15800001},
							1
						};
					};
				};
			};
			class MFD_Com_Range
			{
				topLeft = "MFD_10_TL";
				topRight = "MFD_10_TR";
				bottomLeft = "MFD_10_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.83999997,0.86000001,0.83999997 };
				alpha = 0.5;
				enableParallax = 0;
				turret[] = { 0 };
				font = "LCD14";
				class Bones
				{
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					condition = "1";
					class Gunner_Range
					{
						type = "text";
						source = "laserDist";
						sourceScale = 1;
						sourceLength = 4;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] =
						{
							{0.47999999,-0.1},
							1
						};
						right[] =
						{
							{0.88,-0.1},
							1
						};
						down[] =
						{
							{0.47999999,1},
							1
						};
					};
				};
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[] = { 10,15,15 };
					ambient[] = { 0,0,0 };
					intensity = 3;
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
					color[] = { 10,15,15 };
					ambient[] = { 0,0,0 };
					intensity = 1.5;
				};
				class Light3 : Light1
				{
					point = "light_interior3";
				};
			};
		};
		class RenderTargets
		{
			class gunner_display
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.305731;
					turret[] = { 0,0 };
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
					turret[] = { -1 };
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
		class AnimationSources : AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "DBA_rockets_230mm_Katyusha";
			};
			class muzzle_hide_missiles
			{
				source = "reload";
				weapon = "DBA_rockets_230mm_Katyusha";
			};
		};
		artilleryScanner = 1;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets
				{
				};
				weapons[] =
				{
					"DBA_rockets_230mm_Katyusha"
				};
				magazines[] =
				{
					"12Rnd_230mm_rockets",
					"12Rnd_230mm_rockets",
					"12Rnd_230mm_rockets",
					"12Rnd_230mm_rockets"

				};
				soundServo[] =
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.15848932,
					1,
					30
				};
				soundServoVertical[] =
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					1,
					30
				};
				minElev = 5;
				maxElev = 66;
				initElev = 10;
				maxCamElev = 30;
				elevationMode = 3;
				maxHorizontalRotSpeed = 0.77999997;
				maxVerticalRotSpeed = 0.25999999;
				memoryPointGunnerOptics = "computer";
				cameraDir = "look";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				gunnerForceOptics = 0;
				usePip = 2;
				LODTurnedIn = 1200;
				forceHideGunner = 1;
				gunnerInAction = "Gunner_MBT_01_mlrs_F_in";
				animationSourceStickX = "turret_control_x";
				animationSourceStickY = "turret_control_y";
				gunnerRightHandAnimName = "turret_control";
				class OpticsIn : Optics_Gunner_MBT_01
				{
					class Wide : Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
						initFov = 0.17399999;
						minFov = 0.0077777999;
						maxFov = 0.14;
						visionMode[] =
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[] = { 0,1 };
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.80000001;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun
					{
						armor = 0.60000002;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.40000001;
						radius = 0.2;
						isGun = 1;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_body.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_damage.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_int.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_int_damage.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_int_destruct.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_damage.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_destruct.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_track.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_track_damage.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_track_destruct.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_mlrs.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_mlrs_damage.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_mlrs_destruct.rvmat"
			};
		};
	};
	class B_DBA_Katyusha_Base_F : DBA_Katyusha_Base_F
	{
		author = "Vulgar";
		_generalMacro = "B_MBT_01_mlrs_base_F";
		crew = "101st_CloneTrooper_212th";
		typicalCargo[] =
		{
			"101st_CloneTrooper_212th"
		};
		side = 1;
		faction = "BLU_F";
	};
	class B_DBA_Katyusha_F : B_DBA_Katyusha_Base_F
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
					"wheel_koll1",
					0
				},

				{
					"wheel_kolol1",
					0
				},

				{
					"wheel_podkolol1",
					0
				},

				{
					"wheel_kolp1",
					0
				},

				{
					"wheel_kolop1",
					0
				},

				{
					"wheel_podkolop1",
					0
				},

				{
					"wheel_koll2",
					0
				},

				{
					"wheel_kolp2",
					0
				},

				{
					"wheel_kolol2",
					0
				},

				{
					"wheel_kolol3",
					0
				},

				{
					"wheel_kolol4",
					0
				},

				{
					"wheel_kolol5",
					0
				},

				{
					"wheel_kolol6",
					0
				},

				{
					"wheel_kolop2",
					0
				},

				{
					"wheel_kolop3",
					0
				},

				{
					"wheel_kolop4",
					0
				},

				{
					"wheel_kolop5",
					0
				},

				{
					"wheel_kolop6",
					0
				},

				{
					"wheel_podkolol2",
					0
				},

				{
					"wheel_podkolol3",
					0
				},

				{
					"wheel_podkolol4",
					0
				},

				{
					"wheel_podkolol5",
					0
				},

				{
					"wheel_podkolol6",
					0
				},

				{
					"wheel_podkolop2",
					0
				},

				{
					"wheel_podkolop3",
					0
				},

				{
					"wheel_podkolop4",
					0
				},

				{
					"wheel_podkolop5",
					0
				},

				{
					"wheel_podkolop6",
					0
				},

				{
					"podkolol1_hide_damage",
					0
				},

				{
					"podkolol2_hide_damage",
					0
				},

				{
					"podkolol3_hide_damage",
					0
				},

				{
					"podkolol4_hide_damage",
					0
				},

				{
					"podkolol5_hide_damage",
					0
				},

				{
					"podkolol6_hide_damage",
					0
				},

				{
					"podkolol7_hide_damage",
					0
				},

				{
					"podkolol8_hide_damage",
					0
				},

				{
					"podkolop1_hide_damage",
					0
				},

				{
					"podkolop2_hide_damage",
					0
				},

				{
					"podkolop3_hide_damage",
					0
				},

				{
					"podkolop4_hide_damage",
					0
				},

				{
					"podkolop5_hide_damage",
					0
				},

				{
					"podkolop6_hide_damage",
					0
				},

				{
					"podkolop7_hide_damage",
					0
				},

				{
					"podkolop8_hide_damage",
					0
				},

				{
					"damagevez",
					0
				},

				{
					"mainturret",
					0
				},

				{
					"maingun",
					0.17
				},

				{
					"maingunint",
					0.17
				},

				{
					"damagevezvelitele",
					0
				},

				{
					"poklop_commander_damage",
					0
				},

				{
					"poklop_driver_damage",
					0
				},

				{
					"hatchdriver",
					0
				},

				{
					"plates_1_y",
					0
				},

				{
					"plates_2_y",
					0
				},

				{
					"plates_1_x",
					0
				},

				{
					"plates_2_x",
					0
				},

				{
					"plates_1_bank",
					0
				},

				{
					"plates_2_bank",
					0
				},

				{
					"drivingwheel",
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
					"dmg_com_halo_unhide",
					0
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
					"track_damage_indicator",
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
					"indicator_hull_direction_mfd_gunner",
					0
				},

				{
					"indicator_main_turret_mfd_gunner",
					0
				},

				{
					"indicator_com_smoke_1",
					1
				},

				{
					"indicator_com_smoke_2",
					1
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
					"indicator_damage_tracks",
					0
				},

				{
					"indicator_turret_damage_hull",
					0
				},

				{
					"lights_turret2",
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
					"indicator_turret_damage_track",
					0
				},

				{
					"indicator_turret_damage_turret",
					0
				},

				{
					"hide_mfd_and_pip_screen_driver",
					1
				},

				{
					"elevator",
					0.17
				},

				{
					"elevator_piston",
					0.17
				},

				{
					"maingunoptics",
					0.17
				},

				{
					"maingunoptics_stabilization",
					0.17
				},

				{
					"cannon_ready_light",
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
					"ammo_status_slider_translation",
					1
				},

				{
					"missiles_ready_light",
					0
				},

				{
					"hidemlrs_1",
					1
				},

				{
					"hidemlrs_2",
					1
				},

				{
					"hidemlrs_3",
					1
				},

				{
					"hidemlrs_4",
					1
				},

				{
					"hidemlrs_5",
					1
				},

				{
					"hidemlrs_6",
					1
				},

				{
					"hidemlrs_7",
					1
				},

				{
					"hidemlrs_8",
					1
				},

				{
					"hidemlrs_9",
					1
				},

				{
					"hidemlrs_10",
					1
				},

				{
					"hidemlrs_11",
					1
				},

				{
					"hidemlrs_12",
					1
				},

				{
					"com_and_gun_turret_indicator_12_show_from_left",
					0
				},

				{
					"com_and_gun_turret_indicator_12_hide_from_left",
					0
				},

				{
					"com_and_gun_turret_indicator_11_show",
					0
				},

				{
					"com_and_gun_turret_indicator_11_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_10_show",
					0
				},

				{
					"com_and_gun_turret_indicator_10_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_9_show",
					0
				},

				{
					"com_and_gun_turret_indicator_9_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_8_show",
					0
				},

				{
					"com_and_gun_turret_indicator_8_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_7_show",
					0
				},

				{
					"com_and_gun_turret_indicator_7_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_6_show_from_left",
					0
				},

				{
					"com_and_gun_turret_indicator_6_hide_from_left",
					0
				},

				{
					"com_and_gun_turret_indicator_12_show_from_right",
					0
				},

				{
					"com_and_gun_turret_indicator_12_hide_from_right",
					0
				},

				{
					"com_and_gun_turret_indicator_1_show",
					0
				},

				{
					"com_and_gun_turret_indicator_1_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_2_show",
					0
				},

				{
					"com_and_gun_turret_indicator_2_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_3_show",
					0
				},

				{
					"com_and_gun_turret_indicator_3_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_4_show",
					0
				},

				{
					"com_and_gun_turret_indicator_4_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_5_show",
					0
				},

				{
					"com_and_gun_turret_indicator_5_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_6_show_from_right",
					0
				},

				{
					"com_and_gun_turret_indicator_6_hide_from_right",
					0
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
			verticalOffset = 1.811;
			verticalOffsetWorld = -0.204;
			postinit = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MBT_01_mlrs_F.jpg";
		_generalMacro = "B_MBT_01_mlrs_F";
		scope = 2;
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		hiddenSelectionsTextures[] =
		{
			"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",
			"A3\armor_f_gamma\MBT_01\data\MBT_01_MLRS_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		class TextureSources
		{
			class Sand
			{
				displayName = "$STR_A3_TextureSources_Sand0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",
					"A3\armor_f_gamma\MBT_01\data\MBT_01_MLRS_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] =
				{
					"BLU_F"
				};
			};
			class Olive
			{
				displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",
					"A3\Armor_F_Exp\MBT_01\data\MBT_01_MLRS_olive_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
				factions[] =
				{
					"BLU_T_F"
				};
			};
		};
		availableForSupportTypes[] =
		{
			"Artillery"
		};
	};
	class B_T_DBA_Katyusha_F : B_DBA_Katyusha_F
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
					"wheel_koll1",
					0.02
				},

				{
					"wheel_kolol1",
					0.02
				},

				{
					"wheel_podkolol1",
					0.47
				},

				{
					"wheel_kolp1",
					0.02
				},

				{
					"wheel_kolop1",
					0.02
				},

				{
					"wheel_podkolop1",
					0.47
				},

				{
					"wheel_koll2",
					0.02
				},

				{
					"wheel_kolp2",
					0.02
				},

				{
					"wheel_kolol2",
					0.02
				},

				{
					"wheel_kolol3",
					0.02
				},

				{
					"wheel_kolol4",
					0.02
				},

				{
					"wheel_kolol5",
					0.02
				},

				{
					"wheel_kolol6",
					0.02
				},

				{
					"wheel_kolop2",
					0.02
				},

				{
					"wheel_kolop3",
					0.02
				},

				{
					"wheel_kolop4",
					0.02
				},

				{
					"wheel_kolop5",
					0.02
				},

				{
					"wheel_kolop6",
					0.02
				},

				{
					"wheel_podkolol2",
					0.51999998
				},

				{
					"wheel_podkolol3",
					0.57999998
				},

				{
					"wheel_podkolol4",
					0.63
				},

				{
					"wheel_podkolol5",
					0.70999998
				},

				{
					"wheel_podkolol6",
					0.75
				},

				{
					"wheel_podkolop2",
					0.50999999
				},

				{
					"wheel_podkolop3",
					0.56999999
				},

				{
					"wheel_podkolop4",
					0.63999999
				},

				{
					"wheel_podkolop5",
					0.69
				},

				{
					"wheel_podkolop6",
					0.74000001
				},

				{
					"podkolol1_hide_damage",
					0
				},

				{
					"podkolol2_hide_damage",
					0
				},

				{
					"podkolol3_hide_damage",
					0
				},

				{
					"podkolol4_hide_damage",
					0
				},

				{
					"podkolol5_hide_damage",
					0
				},

				{
					"podkolol6_hide_damage",
					0
				},

				{
					"podkolol7_hide_damage",
					0
				},

				{
					"podkolol8_hide_damage",
					0
				},

				{
					"podkolop1_hide_damage",
					0
				},

				{
					"podkolop2_hide_damage",
					0
				},

				{
					"podkolop3_hide_damage",
					0
				},

				{
					"podkolop4_hide_damage",
					0
				},

				{
					"podkolop5_hide_damage",
					0
				},

				{
					"podkolop6_hide_damage",
					0
				},

				{
					"podkolop7_hide_damage",
					0
				},

				{
					"podkolop8_hide_damage",
					0
				},

				{
					"damagevez",
					0
				},

				{
					"mainturret",
					0
				},

				{
					"maingun",
					0.17
				},

				{
					"maingunint",
					0.17
				},

				{
					"damagevezvelitele",
					0
				},

				{
					"poklop_commander_damage",
					0
				},

				{
					"poklop_driver_damage",
					0
				},

				{
					"hatchdriver",
					0
				},

				{
					"plates_1_y",
					0
				},

				{
					"plates_2_y",
					0
				},

				{
					"plates_1_x",
					0
				},

				{
					"plates_2_x",
					0
				},

				{
					"plates_1_bank",
					0
				},

				{
					"plates_2_bank",
					0
				},

				{
					"drivingwheel",
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
					"dmg_com_halo_unhide",
					0
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
					"track_damage_indicator",
					0
				},

				{
					"pedal_thrust",
					0
				},

				{
					"pedal_brake",
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
					"indicator_hull_direction_mfd_gunner",
					0
				},

				{
					"indicator_main_turret_mfd_gunner",
					0
				},

				{
					"indicator_com_smoke_1",
					1
				},

				{
					"indicator_com_smoke_2",
					1
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
					"indicator_damage_tracks",
					0
				},

				{
					"indicator_turret_damage_hull",
					0
				},

				{
					"lights_turret2",
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
					"indicator_turret_damage_track",
					0
				},

				{
					"indicator_turret_damage_turret",
					0
				},

				{
					"hide_mfd_and_pip_screen_driver",
					1
				},

				{
					"elevator",
					0.17
				},

				{
					"elevator_piston",
					0.17
				},

				{
					"maingunoptics",
					0.17
				},

				{
					"maingunoptics_stabilization",
					0.17
				},

				{
					"cannon_ready_light",
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
					"ammo_status_slider_translation",
					1
				},

				{
					"missiles_ready_light",
					0
				},

				{
					"hidemlrs_1",
					1
				},

				{
					"hidemlrs_2",
					1
				},

				{
					"hidemlrs_3",
					1
				},

				{
					"hidemlrs_4",
					1
				},

				{
					"hidemlrs_5",
					1
				},

				{
					"hidemlrs_6",
					1
				},

				{
					"hidemlrs_7",
					1
				},

				{
					"hidemlrs_8",
					1
				},

				{
					"hidemlrs_9",
					1
				},

				{
					"hidemlrs_10",
					1
				},

				{
					"hidemlrs_11",
					1
				},

				{
					"hidemlrs_12",
					1
				},

				{
					"com_and_gun_turret_indicator_12_show_from_left",
					0
				},

				{
					"com_and_gun_turret_indicator_12_hide_from_left",
					0
				},

				{
					"com_and_gun_turret_indicator_11_show",
					0
				},

				{
					"com_and_gun_turret_indicator_11_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_10_show",
					0
				},

				{
					"com_and_gun_turret_indicator_10_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_9_show",
					0
				},

				{
					"com_and_gun_turret_indicator_9_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_8_show",
					0
				},

				{
					"com_and_gun_turret_indicator_8_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_7_show",
					0
				},

				{
					"com_and_gun_turret_indicator_7_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_6_show_from_left",
					0
				},

				{
					"com_and_gun_turret_indicator_6_hide_from_left",
					0
				},

				{
					"com_and_gun_turret_indicator_12_show_from_right",
					0
				},

				{
					"com_and_gun_turret_indicator_12_hide_from_right",
					0
				},

				{
					"com_and_gun_turret_indicator_1_show",
					0
				},

				{
					"com_and_gun_turret_indicator_1_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_2_show",
					0
				},

				{
					"com_and_gun_turret_indicator_2_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_3_show",
					0
				},

				{
					"com_and_gun_turret_indicator_3_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_4_show",
					0
				},

				{
					"com_and_gun_turret_indicator_4_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_5_show",
					0
				},

				{
					"com_and_gun_turret_indicator_5_hide",
					0
				},

				{
					"com_and_gun_turret_indicator_6_show_from_right",
					0
				},

				{
					"com_and_gun_turret_indicator_6_hide_from_right",
					0
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
			verticalOffset = 1.804;
			verticalOffsetWorld = -0.211;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_MBT_01_mlrs_F.jpg";
		_generalMacro = "B_T_MBT_01_mlrs_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Crew_F";
		typicalCargo[] =
		{
			"B_T_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_khk_F
			{
				weapon = "arifle_MXC_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_30Rnd_65x39_caseless_khaki_mag
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 4;
			};
		};
		hiddenSelectionsTextures[] =
		{
			"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",
			"A3\Armor_F_Exp\MBT_01\data\MBT_01_MLRS_olive_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
	};
	class Car_F;
	class Truck_F : Car_F
	{
		class ViewPilot;
		class AnimationSources;
	};
	class Truck_02_base_F : Truck_F
	{
		class Turrets
		{
		};
		class AnimationSources : AnimationSources
		{
			class spz_hide;
		};
		class EventHandlers;
	};

	class DBA_KatyushaTruck_MRL_base_F : Truck_02_base_F
	{
		model = "\A3\Soft_F_Gamma\Truck_02\Truck_02_MRL_F.p3d";
		icon = "\A3\Soft_F_Gamma\Truck_02\Data\UI\Map_Truck_02_MRL_CA.paa";
		picture = "\A3\Soft_F_Gamma\Truck_02\Data\UI\Truck_02_MRL_CA.paa";
		editorSubcategory = "EdSubcat_Artillery";
		class MFD
		{
			class MFD_Gunner_Optics
			{
				topLeft = "PIP_3_TL";
				topRight = "PIP_3_TR";
				bottomLeft = "PIP_3_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0,0,0,1 };
				enableParallax = 0;
				turret[] = { 0 };
				class Bones
				{
					class Static
					{
						type = "fixed";
						pos[] = { 0.15000001,0.75 };
					};
					class OpticsCenter
					{
						type = "fixed";
						pos[] = { 0.63999999,0.60000002 };
					};
				};
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 400,200,200,1 };
				};
				class Draw
				{
					color[] = { 0,0,0 };
					alpha = 1;
					class OpticsBackground
					{
						color[] = { 0.029999999,0.0099999998,0.059999999 };
						alpha = 0.1;
						class Polygon
						{
							type = "polygon";
							points[] =
							{

								{

									{

										{
											"0.42+ 0.0",
											"0.0+0.78"
										},
										1
									},

									{

										{
											"0.42+ 0.16",
											"0.0+0.78"
										},
										1
									},

									{

										{
											"0.42+ 0.16",
											"0.1+0.78"
										},
										1
									},

									{

										{
											"0.42+ 0.0",
											"0.1+0.78"
										},
										1
									}
								},

								{

									{

										{
											"0.70+ 0.0",
											"0.0+0.78"
										},
										1
									},

									{

										{
											"0.70+ 0.16",
											"0.0+0.78"
										},
										1
									},

									{

										{
											"0.70+ 0.16",
											"0.1+0.78"
										},
										1
									},

									{

										{
											"0.70+ 0.0",
											"0.1+0.78"
										},
										1
									}
								}
							};
						};
					};
					class OpticsGroup
					{
						color[] = { 0.99000001,0.31,0.25 };
						class Optics
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"OpticsCenter",
									1,
									{0.001,0},
									1
								},

								{
									"OpticsCenter",
									1,
									{-0.001,0},
									1
								},
								{},

								{
									"OpticsCenter",
									1,
									{0,0.001},
									1
								},

								{
									"OpticsCenter",
									1,
									{-0,-0.001},
									1
								},
								{},

								{
									"OpticsCenter",
									1,
									{-0.34999999,0},
									1
								},

								{
									"OpticsCenter",
									1,
									{-0.2,0},
									1
								},
								{},

								{
									"OpticsCenter",
									1,
									{-0.15000001,0},
									1
								},

								{
									"OpticsCenter",
									1,
									{-0.029999999,0},
									1
								},
								{},

								{
									"OpticsCenter",
									1,
									{0.34999999,0},
									1
								},

								{
									"OpticsCenter",
									1,
									{0.2,0},
									1
								},
								{},

								{
									"OpticsCenter",
									1,
									{0.15000001,0},
									1
								},

								{
									"OpticsCenter",
									1,
									{0.029999999,0},
									1
								},
								{},

								{
									"OpticsCenter",
									1,
									{0,-0.28},
									1
								},

								{
									"OpticsCenter",
									1,
									{0,-0.029999999},
									1
								},
								{},

								{
									"OpticsCenter",
									1,
									{0.02,-0.28},
									1
								},

								{
									"OpticsCenter",
									1,
									{-0.02,-0.28},
									1
								},
								{},

								{
									"OpticsCenter",
									1,
									{0,0.28},
									1
								},

								{
									"OpticsCenter",
									1,
									{0,0.029999999},
									1
								},
								{},

								{
									"OpticsCenter",
									1,
									{0.22,0.28},
									1
								},

								{
									"OpticsCenter",
									1,
									{-0.22,0.28},
									1
								},
								{}
							};
						};
					};
					class OpticsGroupRedText
					{
						color[] = { 0.99000001,0.07,0.029999999 };
						class OpticHeadingValue
						{
							type = "text";
							source = "weaponHeading";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.625,0.28},
								1
							};
							right[] =
							{
								{0.65499997,0.28},
								1
							};
							down[] =
							{
								{0.625,0.315},
								1
							};
						};
						class CurrentZoomText
						{
							type = "text";
							source = "static";
							text = "6.0x";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] =
							{
								{0.81,0.57999998},
								1
							};
							right[] =
							{
								{0.83999997,0.57999998},
								1
							};
							down[] =
							{
								{0.81,0.61500001},
								1
							};
						};
						class CurrentPitchText
						{
							type = "text";
							source = "static";
							text = "0.0";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] =
							{
								{0.46000001,0.57999998},
								1
							};
							right[] =
							{
								{0.49000001,0.57999998},
								1
							};
							down[] =
							{
								{0.46000001,0.61500001},
								1
							};
						};
						class VisionModeText
						{
							type = "text";
							source = "static";
							text = "VIS";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] =
							{
								{0.43000001,0.88999999},
								1
							};
							right[] =
							{
								{0.46000001,0.88999999},
								1
							};
							down[] =
							{
								{0.43000001,0.92500001},
								1
							};
						};
						class CurrentElevation
						{
							type = "text";
							source = "[y]turretworld";
							sourceScale = 1;
							sourceLength = 2;
							sourcePrecision = 2;
							refreshRate = 0.1;
							align = "left";
							scale = 1;
							pos[] =
							{
								{0.83999997,0.81},
								1
							};
							right[] =
							{
								{0.87,0.81},
								1
							};
							down[] =
							{
								{0.83999997,0.84500003},
								1
							};
						};
						class SoluutionElevText
						{
							type = "text";
							source = "static";
							text = "--";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] =
							{
								{0.83999997,0.83999997},
								1
							};
							right[] =
							{
								{0.87,0.83999997},
								1
							};
							down[] =
							{
								{0.83999997,0.875},
								1
							};
						};
						class CurrentRangeValue
						{
							type = "text";
							source = "laserDist";
							sourceScale = 1;
							sourceLength = 2;
							sourcePrecision = 2;
							align = "left";
							scale = 1;
							pos[] =
							{
								{0.56,0.81},
								1
							};
							right[] =
							{
								{0.58999997,0.81},
								1
							};
							down[] =
							{
								{0.56,0.84500003},
								1
							};
						};
						class TOFValue
						{
							type = "text";
							source = "MissileFlightTime";
							sourceScale = 1;
							sourceLength = 2;
							align = "left";
							scale = 1;
							pos[] =
							{
								{0.56,0.83999997},
								1
							};
							right[] =
							{
								{0.58999997,0.83999997},
								1
							};
							down[] =
							{
								{0.56,0.875},
								1
							};
						};
					};
					class OpticsGroupWhiteText
					{
						color[] = { 1,1,1 };
						class SolutionText
						{
							type = "text";
							source = "static";
							text = "SOLUTION";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.42500001,0.79000002},
								1
							};
							right[] =
							{
								{0.44499999,0.79000002},
								1
							};
							down[] =
							{
								{0.42500001,0.815},
								1
							};
						};
						class RangeText
						{
							type = "text";
							source = "static";
							text = "RNG";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.42500001,0.81},
								1
							};
							right[] =
							{
								{0.45500001,0.81},
								1
							};
							down[] =
							{
								{0.42500001,0.84500003},
								1
							};
						};
						class TOFText
						{
							type = "text";
							source = "static";
							text = "TRV";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.42500001,0.83999997},
								1
							};
							right[] =
							{
								{0.45500001,0.83999997},
								1
							};
							down[] =
							{
								{0.42500001,0.875},
								1
							};
						};
						class ElevCtrlText
						{
							type = "text";
							source = "static";
							text = "ELV CTRL";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.70499998,0.79000002},
								1
							};
							right[] =
							{
								{0.72500002,0.79000002},
								1
							};
							down[] =
							{
								{0.70499998,0.815},
								1
							};
						};
						class ElevationText
						{
							type = "text";
							source = "static";
							text = "ELV";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.70499998,0.81},
								1
							};
							right[] =
							{
								{0.73500001,0.81},
								1
							};
							down[] =
							{
								{0.70499998,0.84500003},
								1
							};
						};
						class RelText
						{
							type = "text";
							source = "static";
							text = "REL";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.70499998,0.83999997},
								1
							};
							right[] =
							{
								{0.73500001,0.83999997},
								1
							};
							down[] =
							{
								{0.70499998,0.875},
								1
							};
						};
					};
					class PanelTextWhite
					{
						condition = 0;
						color[] = { 1,1,1 };
						class RangeText
						{
							type = "text";
							source = "static";
							text = "RANGE";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.035,0.19},
								1
							};
							right[] =
							{
								{0.079999998,0.19},
								1
							};
							down[] =
							{
								{0.035,0.245},
								1
							};
						};
						class AzimuthText
						{
							type = "text";
							source = "static";
							text = "AZIMUTH";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.035,0.255},
								1
							};
							right[] =
							{
								{0.079999998,0.255},
								1
							};
							down[] =
							{
								{0.035,0.31},
								1
							};
						};
						class ElevText
						{
							type = "text";
							source = "static";
							text = "ELEV";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] =
							{
								{0.035,0.31999999},
								1
							};
							right[] =
							{
								{0.079999998,0.31999999},
								1
							};
							down[] =
							{
								{0.035,0.375},
								1
							};
						};
					};
				};
			};
			class MFD_Gunner_Screen
			{
				topLeft = "PIP_2_TL";
				topRight = "PIP_2_TR";
				bottomLeft = "PIP_2_BL";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0,0,0,1 };
				enableParallax = 0;
				turret[] = { 0 };
				font = "LCD14";
				class Bones
				{
					class Static
					{
						type = "fixed";
						pos[] = { 0.155,0.69999999 };
					};
					class TurretRotation
					{
						type = "rotational";
						source = "weaponHeading";
						sourceIndex = 0;
						center[] = { 0,0 };
						min = 0;
						max = 360;
						minAngle = 0;
						maxAngle = 360;
						aspectRatio = 1.4215699;
					};
				};
				class material
				{
					ambient[] = { 1,1,1,1 };
					diffuse[] = { 1,1,1,1 };
					emissive[] = { 400,200,200,1 };
				};
				class Draw
				{
					color[] = { 1,1,1 };
					alpha = 1;
					class RangeValue
					{
						type = "text";
						source = "laserDist";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							{0.22,0.19},
							1
						};
						right[] =
						{
							{0.25999999,0.19},
							1
						};
						down[] =
						{
							{0.22,0.235},
							1
						};
					};
					class AzimuthValue
					{
						type = "text";
						source = "weaponHeading";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							{0.22,0.25999999},
							1
						};
						right[] =
						{
							{0.25999999,0.25999999},
							1
						};
						down[] =
						{
							{0.22,0.30500001},
							1
						};
					};
					class CurrentElevation
					{
						type = "text";
						source = "[y]turretworld";
						sourceScale = 1;
						sourceLength = 2;
						sourcePrecision = 2;
						refreshRate = 0.1;
						align = "center";
						scale = 1;
						pos[] =
						{

							{
								0.22,
								"0.19+0.07*2"
							},
							1
						};
						right[] =
						{

							{
								0.25999999,
								"0.19+0.07*2"
							},
							1
						};
						down[] =
						{
							{0.22,0.375},
							1
						};
					};
					class AmmoTypeValue
					{
						type = "text";
						source = "ammoFormat";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{

							{
								"0.62+0.15",
								0
							},
							1
						};
						right[] =
						{
							{0.81,0},
							1
						};
						down[] =
						{

							{
								"0.62+0.15",
								0.045000002
							},
							1
						};
					};
					class AmmoCountValue
					{
						type = "text";
						source = "ammo";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{

							{
								"0.62+0.15",
								0.039999999
							},
							1
						};
						right[] =
						{
							{0.81,0.039999999},
							1
						};
						down[] =
						{

							{
								"0.62+0.15",
								0.085000001
							},
							1
						};
					};
					class CordX
					{
						type = "text";
						source = "coordinateX";
						sourceScale = 0.0099999998;
						sourceLength = 3;
						sourceOffset = -0.5;
						align = "right";
						scale = 1;
						pos[] =
						{

							{
								"0.34+0.07",
								0
							},
							1
						};
						right[] =
						{
							{0.44999999,0},
							1
						};
						down[] =
						{

							{
								"0.34+0.07",
								0.045000002
							},
							1
						};
					};
					class CordY : CordX
					{
						source = "coordinateY";
						pos[] =
						{

							{
								"0.34+0.07+0.06",
								0
							},
							1
						};
						right[] =
						{
							{0.50999999,0},
							1
						};
						down[] =
						{

							{
								"0.34+0.07+0.06",
								0.045000002
							},
							1
						};
					};
					class ASLValue
					{
						type = "text";
						source = "altitudeASL";
						scale = 1;
						sourceScale = 1;
						align = "center";
						pos[] =
						{

							{
								"0.32+0.15",
								0.039999999
							},
							1
						};
						right[] =
						{
							{0.50999999,0.039999999},
							1
						};
						down[] =
						{

							{
								"0.32+0.15",
								0.085000001
							},
							1
						};
					};
					class Time
					{
						type = "text";
						source = "time";
						text = "%X";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] =
						{
							{0.86799997,0.0049999999},
							1
						};
						right[] =
						{
							{0.89300001,0.0049999999},
							1
						};
						down[] =
						{
							{0.86799997,0.039999999},
							1
						};
					};
					class Date : Time
					{
						text = "%x";
						pos[] =
						{

							{
								0.86799997,
								"0.005+0.04"
							},
							1
						};
						right[] =
						{

							{
								0.89300001,
								"0.005+0.04"
							},
							1
						};
						down[] =
						{
							{0.86799997,0.079999998},
							1
						};
					};
					class BlackElements
					{
						color[] = { 0.40000001,0.40000001,0.40000001 };
						class TurretIndicator
						{
							class Shape
							{
								type = "line";
								width = 4;
								points[] =
								{

									{
										"Static",
										1,

										{
											"TurretRotation",
											0.045000002,
											0.050000001
										},
										1
									},

									{
										"Static",
										1,

										{
											"TurretRotation",
											0.045000002,
											-0.07
										},
										1
									},

									{
										"Static",
										1,

										{
											"TurretRotation",
											-0.045000002,
											-0.07
										},
										1
									},

									{
										"Static",
										1,

										{
											"TurretRotation",
											-0.045000002,
											0.050000001
										},
										1
									},

									{
										"Static",
										1,

										{
											"TurretRotation",
											0.045000002,
											0.050000001
										},
										1
									},
									{},

									{
										"Static",
										{-0.059999999,-0.16},
										1
									},

									{
										"Static",
										{0.059999999,-0.16},
										1
									},

									{
										"Static",
										{0.059999999,0.13},
										1
									},

									{
										"Static",
										{-0.059999999,0.13},
										1
									},

									{
										"Static",
										{-0.059999999,-0.16},
										1
									},
									{},

									{
										"Static",
										{-0.059999999,-0.17},
										1
									},

									{
										"Static",
										{0.059999999,-0.17},
										1
									},

									{
										"Static",
										{0.059999999,-0.25999999},
										1
									},

									{
										"Static",
										{-0.059999999,-0.25999999},
										1
									},

									{
										"Static",
										{-0.059999999,-0.17},
										1
									}
								};
							};
						};
						class TurretPolygons
						{
							type = "polygon";
							points[] =
							{

								{

									{
										"Static",

										{
											"TurretRotation",
											-0.033,
											0.063000001
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											-0.043000001,
											0.063000001
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											-0.043000001,
											0.050000001
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											-0.033,
											0.050000001
										},
										1
									}
								},

								{

									{
										"Static",

										{
											"TurretRotation",
											-0.0178,
											"-0.03+0.093"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											-0.027799999,
											"-0.03+0.093"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											-0.027799999,
											"-0.03+0.08"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											-0.0178,
											"-0.03+0.08"
										},
										1
									}
								},

								{

									{
										"Static",

										{
											"TurretRotation",
											-0.0026,
											"-0.03+0.093"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											-0.0126,
											"-0.03+0.093"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											-0.0126,
											"-0.03+0.08"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											-0.0026,
											"-0.03+0.08"
										},
										1
									}
								},

								{

									{
										"Static",

										{
											"TurretRotation",
											0.0126,
											"-0.03+0.093"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											0.0026,
											"-0.03+0.093"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											0.0026,
											"-0.03+0.08"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											0.0126,
											"-0.03+0.08"
										},
										1
									}
								},

								{

									{
										"Static",

										{
											"TurretRotation",
											0.027799999,
											"-0.03+0.093"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											0.0178,
											"-0.03+0.093"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											0.0178,
											"-0.03+0.08"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											0.027799999,
											"-0.03+0.08"
										},
										1
									}
								},

								{

									{
										"Static",

										{
											"TurretRotation",
											0.043000001,
											"-0.03+0.093"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											0.033,
											"-0.03+0.093"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											0.033,
											"-0.03+0.08"
										},
										1
									},

									{
										"Static",

										{
											"TurretRotation",
											0.043000001,
											"-0.03+0.08"
										},
										1
									}
								}
							};
						};
					};
					class ReadyToFire
					{
						condition = "(speed<=3)*(ammo>=1)";
						class StatusText
						{
							type = "text";
							source = "static";
							text = "READY TO FIRE";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] =
							{
								{0.15000001,0.92000002},
								1
							};
							right[] =
							{
								{0.185,0.92000002},
								1
							};
							down[] =
							{
								{0.15000001,0.95999998},
								1
							};
						};
					};
					class Moving
					{
						condition = "(speed>=3)*(ammo>=1)";
						class StatusText
						{
							type = "text";
							source = "static";
							text = "LOCKED";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] =
							{
								{0.15000001,0.92000002},
								1
							};
							right[] =
							{
								{0.185,0.92000002},
								1
							};
							down[] =
							{
								{0.15000001,0.95999998},
								1
							};
						};
					};
					class OutOfAmmo
					{
						condition = "ammo<=0";
						class StatusText
						{
							type = "text";
							source = "static";
							text = "NO AMMO";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] =
							{
								{0.15000001,0.92000002},
								1
							};
							right[] =
							{
								{0.185,0.92000002},
								1
							};
							down[] =
							{
								{0.15000001,0.95999998},
								1
							};
						};
					};
				};
			};
		};
		unitInfoType = "RscUnitInfoArtillery";
		accuracy = 0.89999998;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
		transportSoldier = 1;
		driverAction = "Truck_02_Driver";
		cargoAction[] =
		{
			"Truck_Cargo01"
		};
		cargoIsCoDriver[] = { 1 };
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3\data_f\glass_veh.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_glass_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_glass_damage.rvmat",
				"A3\data_f\glass_veh.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_glass_in_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_glass_in_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_chassis.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_chassis_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_chassis_destruct.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_destruct.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_VP.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_destruct.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_kab.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_kab_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_kab_destruct.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_VP.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_destruct.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_shine.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_shine_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_shine_destruct.rvmat",
				"A3\soft_f_gamma\Truck_02\Data\Truck_02_MRL.rvmat",
				"A3\soft_f_gamma\Truck_02\Data\Truck_02_MRL_damage.rvmat",
				"A3\soft_f_gamma\Truck_02\Data\Truck_02_MRL_destruct.rvmat",
				"A3\soft_f_gamma\Truck_02\Data\truck_02_mfd_stand.rvmat",
				"A3\soft_f_gamma\Truck_02\Data\truck_02_mfd_stand_damage.rvmat",
				"A3\soft_f_gamma\Truck_02\Data\truck_02_mfd_stand_destruct.rvmat"
			};
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_co.paa",
			"a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"a3\soft_f_gamma\truck_02\data\truck_02_mrl_co.paa"
		};
		class TextureSources
		{
			class Indep
			{
				displayName = "$STR_A3_TEXTURESOURCES_INDEP0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_gamma\truck_02\data\truck_02_mrl_co.paa"
				};
				factions[] =
				{
					"IND_F"
				};
			};
			class Opfor
			{
				displayName = "$STR_A3_TEXTURESOURCES_OPFOR0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_gamma\truck_02\data\truck_02_mrl_OPFOR_co.paa"
				};
				factions[] =
				{
					"OPF_F"
				};
			};
		};
		availableforsupporttypes[] =
		{
			"Artillery"
		};
		artilleryscanner = 1;
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class Turrets
				{
				};
				commanding = 1;
				body = "Base";
				gun = "Tower_Fake";
				animationSourceStickX = "turret_control_y";
				animationSourceStickY = "turret_control_x";
				minTurn = -180;
				maxTurn = 180;
				minElev = 0;
				maxElev = 66;
				initElev = 11.5;
				minCamElev = -10;
				maxCamElev = 30;
				elevationMode = 3;
				maxHorizontalRotSpeed = 0.77999997;
				maxVerticalRotSpeed = 0.77999997;
				lockWhenVehicleSpeed = 1;
				startEngine = 0;
				stabilizedInAxes = 0;
				weapons[] =
				{
					"DBA_rockets_230mm_Katyusha"
				};
				magazines[] =
				{
					"12Rnd_230mm_rockets",
					"12Rnd_230mm_rockets",
					"12Rnd_230mm_rockets",
					"12Rnd_230mm_rockets"
				};
				gunnerAction = "truck_02_mrl_gunner";
				gunnergetInAction = "GetInLow";
				gunnergetOutAction = "GetOutLow";
				gunnerLeftHandAnimName = "turret_control";
				cameraDir = "look";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				usePiP = 1;
				inGunnerMayFire = 1;
				outGunnerMayFire = 1;
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				class OpticsIn : Optics_Gunner_MBT_01
				{
					class Wide : Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
						initFov = 0.17399999;
						minFov = 0.0077777999;
						maxFov = 0.14;
						visionMode[] =
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[] = { 0,1 };
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.093000002;
					minFov = 0.093000002;
					maxFov = 0.093000002;
				};
				class ViewGunner
				{
					initAngleX = -29;
					initAngleY = 0;
					initFov = 0.89999998;
					minFov = 0.25;
					maxFov = 1.25;
					minAngleX = -65;
					maxAngleX = 85;
					minAngleY = -150;
					maxAngleY = 150;
					minMoveX = -0.075000003;
					maxMoveX = 0.075000003;
					minMoveY = -0.075000003;
					maxMoveY = 0.075000003;
					minMoveZ = -0.075000003;
					maxMoveZ = 0.1;
				};
				class Hitpoints
				{
					class HitTurret
					{
						armor = 0.80000001;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "Turret_base";
						passThrough = 1;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.2;
						isTurret = 1;
					};
					class HitGun
					{
						armor = 0.60000002;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "Turret";
						passThrough = 1;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.2;
						isGun = 1;
					};
				};
			};
		};
		class RenderTargets
		{
			class mirrors_Left
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.69999999;
				};
				BBoxes[] =
				{
					"PIP_0_TL",
					"PIP_0_TR",
					"PIP_0_BL",
					"PIP_0_BR"
				};
			};
			class mirrors_Right
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.69999999;
				};
				BBoxes[] =
				{
					"PIP_1_TL",
					"PIP_1_TR",
					"PIP_1_BL",
					"PIP_1_BR"
				};
			};
			class gunner_screen
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = "0.35/6";
					turret[] = { 0 };
				};
				BBoxes[] =
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
		};
		class AnimationSources : AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "DBA_rockets_230mm_Katyusha";
			};
		};
		class EventHandlers : EventHandlers
		{
			fired = "[_this select 0,_this select 6,'missile_move','SubmunitionBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class DBA_KatyushaTruck_MRL_F : DBA_KatyushaTruck_MRL_base_F
	{
		author = "Vulgar";
		class SimpleObject
		{
			eden = 1;
			animate[] =
			{

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
					"wheel_1_4_damage",
					0
				},

				{
					"wheel_2_4_damage",
					0
				},

				{
					"wheel_1_4_damper_damage_backanim",
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
					"reverse_light",
					1
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
					"wheel_1_3_damage",
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
					"commander_turret",
					0
				},

				{
					"commander_gun",
					0.2
				},

				{
					"base",
					0
				},

				{
					"tower",
					0.2
				},

				{
					"tower_fake",
					0.2
				},

				{
					"elevator",
					0.2
				},

				{
					"elevator_2",
					0.2
				},

				{
					"elevator_3",
					0.2
				},

				{
					"elevator_piston",
					0.2
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
					"launcher001_hide",
					1
				},

				{
					"launcher001_unhide",
					1
				},

				{
					"missile_move_001",
					1
				},

				{
					"launcher002_hide",
					1
				},

				{
					"launcher002_unhide",
					1
				},

				{
					"missile_move_002",
					1
				},

				{
					"launcher003_hide",
					1
				},

				{
					"launcher003_unhide",
					1
				},

				{
					"missile_move_003",
					1
				},

				{
					"launcher004_hide",
					1
				},

				{
					"launcher004_unhide",
					1
				},

				{
					"missile_move_004",
					1
				},

				{
					"launcher005_hide",
					1
				},

				{
					"launcher005_unhide",
					1
				},

				{
					"missile_move_005",
					1
				},

				{
					"launcher006_hide",
					1
				},

				{
					"launcher006_unhide",
					1
				},

				{
					"missile_move_006",
					1
				},

				{
					"launcher007_hide",
					1
				},

				{
					"launcher007_unhide",
					1
				},

				{
					"missile_move_007",
					1
				},

				{
					"launcher008_hide",
					1
				},

				{
					"launcher008_unhide",
					1
				},

				{
					"missile_move_008",
					1
				},

				{
					"launcher009_hide",
					1
				},

				{
					"launcher009_unhide",
					1
				},

				{
					"missile_move_009",
					1
				},

				{
					"launcher010_hide",
					1
				},

				{
					"launcher010_unhide",
					1
				},

				{
					"missile_move_010",
					1
				},

				{
					"launcher011_hide",
					1
				},

				{
					"launcher011_unhide",
					1
				},

				{
					"missile_move_011",
					1
				},

				{
					"launcher012_hide",
					1
				},

				{
					"launcher012_unhide",
					1
				},

				{
					"missile_move_012",
					1
				},

				{
					"wheel_1_3",
					0
				},

				{
					"wheel_2_3",
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
					"wheel_1_3_damper",
					0
				},

				{
					"wheel_2_3_damper",
					0
				},

				{
					"damagehide",
					0
				},

				{
					"damagehide_turret",
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
					"ventilate",
					0
				},

				{
					"indicatoroiltemp",
					0
				},

				{
					"fuel",
					1
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
					"hide_mfd_and_pip_screen",
					1
				},

				{
					"hide_mfd_elements",
					1
				},

				{
					"hide_daylights",
					0
				},

				{
					"hide_reverselights",
					0
				},

				{
					"hide_rearlights",
					0
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
			verticalOffset = 2.448;
			verticalOffsetWorld = -0.204;
			postinit = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Truck_02_MRL_F.jpg";
		_generalMacro = "I_Truck_02_MRL_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "[DBA] Katyusha Truck";
		side = 1;
		faction = "BLU_F";
		crew = "101st_CloneTrooper_212th";
		typicalCargo[] =
		{
			"101st_CloneTrooper_212th",
			"101st_CloneTrooper_212th"
		};
	};
};