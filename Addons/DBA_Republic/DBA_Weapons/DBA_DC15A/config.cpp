class CfgPatches
{
	class DBA_DC15A
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{"DBA_DC15A_F", "DBA_DC15A_GL_F", "DBA_DC15A_Mod0_F"
		};
	};
};
class UGL_F;
class Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;

};
class Mode_Burst: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;

};
class Mode_FullAuto: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;

};
class SlotInfo;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class DBA_DC15A_Base_F : Rifle_Base_F
	{
		author = "Vulgar";
		_generalMacro = "arifle_MX_Base_F";
		scope = 0;
		magazines[] =
		{
			"DBA_DC15A_Mag"
		};
		magazineReloadSwitchPhase = 0.5;
		class Library
		{
			libTextDesc = "Clone gun";
		};
		reloadAction = "GestureReloadMX";
		recoil = "recoil_mx";
		maxZeroing = 1000;
		discreteDistanceInitIndex = 0;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\firemode_Mx",0.177828,1,5};		
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
		soundBullet[] = {};
		
		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot_65
			{
				iconPosition[] = { 0,0.44999999 };
				iconScale = 0.2;
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = { 0.5,0.34999999 };
				compatibleItems[] = {"DBA_MRCO_A", "DBA_MRCO_B"};
				iconScale = 0.2;
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPosition[] = { 0.2,0.44999999 };
				iconScale = 0.25;
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "Gun";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\anims\DC15aHandAnim.rtm"
		};
		modes[] =
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single : Mode_SemiAuto
		{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5 };
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15Shot.ogg",1,1,1800 };
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundBegin[] = { "begin1",1 };
				soundClosure[] = {"closure2",0.5 };
			};
			
			reloadTime = 0.13;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
		};
		class FullAuto : Mode_FullAuto
		{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15Shot.ogg",1,1,1800 };
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",0.5 };
			};

			reloadTime = 0.13;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			dispersion = 0.00087;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class Burst : Mode_Burst
		{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.5,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15Shot.ogg",1,1,1800 };
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.5,1,10};
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure2",0.5 };
			};

			reloadTime = 0.05;
			dispersion = 0.00087;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;

		};
		class fullauto_medium : FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			aiBurstTerminable = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1 : Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2 : single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.60000002;
			maxRange = 700;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		class GL_3GL_F : UGL_F
		{
			displayName = "DC15A UnderBarrel GL";
			descriptionShort = "Goodbye Grenade";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] =
			{
			};
			magazineWell[] =
			{
				"DBA_GL_Mags_magwell"
			};
			cameraDir = "OP_look";
			discreteDistance[] = { 75,150,250,350,425 };
			discreteDistanceCameraPoint[] = { "OP_eye","OP_eye2","OP_eye3","OP_eye4","OP_eye5" };
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] =
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
	};
	class DBA_DC15A_F : DBA_DC15A_Base_F
	{
		author = "Vulgar";
		_generalMacro = "arifle_MX_F";
		baseWeapon = "DBA_DC15A_F";
		scope = 2;
		displayName = "DBA DC15A";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15A.p3d";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\15S_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\15S_CA.paa";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\anims\DC15aHandAnim.rtm"
		};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15A_CO.paa" };
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15A.rvmat" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
		};
		inertia = 0.5;
		aimTransitionSpeed = 1;
		dexterity = 1.5;
		initSpeed = 800;
		class ItemInfo
		{
			priority = 1;
		};
		descriptionShort = "$STR_A3_CfgWeapons_arifle_XMX1";
	};
	class DBA_DC15A_GL_F : DBA_DC15A_Base_F
	{
		author = "Vulgar";
		_generalMacro = "arifle_MX_GL_F";
		baseWeapon = "DBA_DC15A_GL_F";
		scope = 2;
		displayName = "DBA DC15A GL";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15AGL.p3d";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\15S_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\15S_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15AGL_CO.paa" };
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15AGL.rvmat" };
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\anims\DC15AGLHandAnim.rtm"
		};
		muzzles[] =
		{
			"this",
			"GL_3GL_F"
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 120;
		};
		inertia = 0.60000002;
		aimTransitionSpeed = 0.80000001;
		dexterity = 1.4;
		initSpeed = 800;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMX 3GL";
			onHoverText = "TODO XMX 3GL DSS";
		};
		descriptionShort = "A DC15A Equipped with an underbarrel GL";
	};
	class DBA_DC15A_Mod0_F : DBA_DC15A_Base_F
	{
		author = "Vulgar";
		_generalMacro = "arifle_MX_SW_F";
		scope = 2;
		displayName = "DBA DC15A Mod-0";
		nameSound = "Mgun";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15A.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15A_CO.paa" };
		hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15A\Data\DC15A.rvmat" };
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\15S_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\15S_CA.paa";
		magazines[] =
		{
			"DBA_DC15AMod0_Mag",
			"DBA_DC15A_Mag"
		};
		cursor = "mg";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot_65MG
			{
				iconPosition[] = { 0,0.44999999 };
				iconScale = 0.2;
			};
			mass = 120;
		};
		inertia = 0.60000002;
		aimTransitionSpeed = 0.80000001;
		dexterity = 1.4;
		initSpeed = 880;
		recoil = "recoil_sw";
		maxZeroing = 1200;
		class Single : Mode_SemiAuto
		{
			reloadTime = 0.079999998;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00073000003;
			minRange = 2;
			minRangeProbab = 0.0099999998;
			midRange = 200;
			midRangeProbab = 0.0099999998;
			maxRange = 400;
			maxRangeProbab = 0.0099999998;
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMSW";
			onHoverText = "TODO XMSW DSS";
		};
		modes[] =
		{
			"manual",
			"single",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class manual : FullAuto
		{
			reloadTime = 0.06666666;
			dispersion = 0.00073000003;
			recoilProne = "recoil_single_prone_mx_sw";
			minRange = 0;
			minRangeProbab = 0.30000001;
			midRange = 5;
			midRangeProbab = 0.69999999;
			maxRange = 10;
			maxRangeProbab = 0.039999999;
			showToPlayer = 1;
		};
		class close : manual
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.050000001;
			midRange = 20;
			midRangeProbab = 0.69999999;
			maxRange = 50;
			maxRangeProbab = 0.039999999;
			showToPlayer = 0;
		};
		class short : close
		{
			burst = 8;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.039999999;
		};
		class medium : close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1 : close
		{
			burst = 3;
			requiredOpticType = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 650;
			minRange = 300;
			minRangeProbab = 0.050000001;
			midRange = 500;
			midRangeProbab = 0.40000001;
			maxRange = 650;
			maxRangeProbab = 0.0099999998;
		};
		class far_optic2 : far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.050000001;
			midRange = 750;
			midRangeProbab = 0.69999999;
			maxRange = 900;
			maxRangeProbab = 0.0099999998;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		aiDispersionCoefY = 24;
		aiDispersionCoefX = 21;
		descriptionShort = "DC15A Mod-0 for that perfectly balanced LMG";
	};
};
