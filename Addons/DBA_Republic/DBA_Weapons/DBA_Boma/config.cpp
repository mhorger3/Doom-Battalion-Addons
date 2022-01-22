class cfgPatches
{
	class DBA_Boma
	{

		author = "Vulgar";
		name = "DBA Boma";
		requiredaddons[] = { "A3_Weapons_F" };
		requiredversion = 0.1;
		units[] = { "DBA_VH_Boma_Shotgun_F" };
		weapons[] = { "DBA_Boma_Shotgun_F" };
	};
};


class UGL_F;
class Mode_SemiAuto;
class Mode_Burst : Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto : Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Single;
class close;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class GunParticles;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class DBA_Boma_Shotgun_F : Rifle_Long_Base_F
	{
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		discreteDistance[] = { 100,200 };
		discreteDistanceInitIndex = 0;
		aiDispersionCoefY = 7;
		aiDispersionCoefX = 6;
		selectionFireAnim = "zasleh";
		flash = "gunfire";
		author = "Trip";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Boma\Data\Boma_Shotgun.p3d";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Boma_CA.paa";
		handAnim[] = { "OFP2_ManSkeleton","101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_Boma\anims\BomaHandAnim.rtm" };
		muzzles[] = { "this","DBA_3AS_GL_F" };
		class DBA_3AS_GL_F : UGL_F
		{
			displayName = "DBA Boma Shotgun";
			descriptionShort = "Shotgun with and underbarrel GL";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {};
			magazineWell[] = { "DBA_GL_Mags_magwell" };
			cameraDir = "OP_look";
			discreteDistance[] = { 50,75,100,150,200,250,300,350,400 };
			discreteDistanceCameraPoint[] =
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
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
		magazines[] =
		{
			"DBA_Boma_Scatter_Mag",
			"DBA_Boma_Slug_Mag"
		};
		reloadAction = "ReloadMagazine";
		displayName = "DBA Boma GL";
		descriptionShort = "101st Boma CK6 GL";
		soundBullet[] = { "" };
		modes[] =
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		simulation = "Weapon";
		fireLightDuration = 0.050000001;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = { 0,1,0 };
		fireLightAmbient[] = { 0,1,0 };
		class Single : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[] = { "Msbs65_01_Shotgun_Shot_SoundSet","Msbs65_01_Shotgun_Tail_SoundSet" };
			};
			recoil = "recoil_MSBS65_ubs";
			recoilProne = "assaultRifleBase";
			reloadTime = 0.35;
			dispersion = "5*0.00087";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close : Single
		{
			showToPlayer = 0;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.050000001;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short : close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.69999999;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[] = { "Msbs65_01_Shotgun_Shot_SoundSet","Msbs65_01_Shotgun_Tail_SoundSet" };
			};
			recoil = "recoil_MSBS65_ubs";
			recoilProne = "assaultRifleBase";
			reloadTime = 0.275;
			dispersion = "5*0.00087";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		inertia = 1.4;
		dexterity = 1.7;
		initSpeed = 300;
		maxRecoilSway = 0.0125;
		reloadMagazineSound[] = { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_Shotgun_Reload_01",3.98107,1,10 };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot : CowsSlot
			{
				access = 1;
				compatibleItems[] = { "optic_MRCO","101st_Aux_Pistol_A","101st_Aux_Pistol_B" };
			};
			class MuzzleSlot : MuzzleSlot
			{
				access = 1;
				compatibleItems[] = { "RD501_muzzle_flash" };
			};
			class PointerSlot : PointerSlot
			{
				access = 1;
				compatibleItems[] = { "acc_flashlight_smg_01" };
			};
		};
	};


};
class CfgVehicles
{
	class Weapon_Base_F;
	class DBA_VH_Boma_Shotgun_F : Weapon_Base_F
	{
		author = "Vulgar";
		displayName = "DBA Boma Shotgun";
		scope = 2;
		class TransportWeapons
		{
			class DBA_Boma_T
			{
				count = 1;
				weapon = "DBA_Boma_Shotgun_F";
			};
		};
	};
};


