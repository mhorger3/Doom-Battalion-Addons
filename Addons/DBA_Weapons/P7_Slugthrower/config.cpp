class cfgPatches
{
	class DBA_Aux_Mod_P7
	{
		author = "Vulgar";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = { "JLTS_weapons_z6","101st_Aux_Mod","DBA_patch_weapons" };
		requiredversion = 0.1;
		units[] = { "DBA_VH_P7_Slugthrower" };
		weapons[] = { "DBA_P7Slugthrower" };
	};
};
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
	class Pistol;
	class Pistol_Base_F : Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_MX_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 101st_stun_muzzle;
	class JLTS_stun_muzzle;
	class DBA_P7Slugthrower : Rifle_Long_Base_F
	{
		class FlashLight
		{
			color[] = { 180,160,130 }; //color[]={180,160,130}; Default
			ambient[] = { 0.9,0.3,0.3 }; //ambient[]={0.89999998,0.80000001,0.69999999}; Default
			intensity = 100;
			size = 1;
			innerAngle = 5;
			outerAngle = 100;
			coneFadeCoef = 10;
			position = "usti hlavne";
			direction = "konec hlavne";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 100;
			dayLight = 1;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 27;
				hardLimitEnd = 34;
			};
			scale[] = { 0 };
		};
		ACE_overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_slowdownFactor = 0;
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 0;
		selectionFireAnim = "zasleh";
		flash = "gunfire";
		author = "Vulgar";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Weapons\P7_Slugthrower\P7_Slugthrower.p3d";
		picture = "101st_Aux_Mod\Addons\DBA_Weapons\effects\icons\Boma_CA.paa";
		handAnim[] = { "OFP2_ManSkeleton","\A3\Weapons_F_beta\Rifles\MK20\Data\Anim\mk20G.rtm" };
		muzzles[] = { "this" };
		magazines[] =
		{
			"DBA_P7_Magazine"
		};
		hiddenSelections[] =
		{
			"camo1"
		};
		changeFiremodeSound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5 };
		hiddenSelectionsTextures[] = { "\101st_Aux_Mod\Addons\DBA_Weapons\P7_Slugthrower\Data\Slugthrower_CO.paa" };
		hiddenSelectionsMaterials[] = { "\101st_Aux_Mod\Addons\DBA_Weapons\P7_Slugthrower\Data\Slugthrower.rvmat" };
		reloadAction = "ReloadMagazine";
		displayName = "[101st] P-7 Slugthrower (Experimental)";
		descriptionShort = "DBA P-7 Slugthrower";
		soundBullet[] = { "" };
		modes[] =
		{
			"Single",
		};
		simulation = "Weapon";
		fireLightDuration = 0.050000001;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = { 0,1,0 };
		fireLightAmbient[] = { 0,1,0 };
		class Single : Mode_SemiAuto
		{

			soundContinuous = 0;
			soundBurst = 0;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure1",1 };
			};
			recoil = "recoil_MSBS65_ubs";
			recoilProne = "assaultRifleBase";
			reloadTime = 0.28;
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
		inertia = 1.4;
		dexterity = 1.7;
		initSpeed = 300;
		maxRecoilSway = 0.0125;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot : CowsSlot
			{
				access = 1;
				compatibleItems[] = { "DBA_HAMR_A","DBA_HAMR_B" };
			};
			class MuzzleSlot : MuzzleSlot
			{
				access = 1;
				compatibleItems[] = { "" };
			};
			class PointerSlot : PointerSlot
			{
				access = 1;
				compatibleItems[] = { "" };
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class DBA_VH_P7_Slugthrower : Weapon_Base_F
	{
		author = "Vulgar";
		displayName = "$STR_DBA_P7Slugthrower";
		scope = 2;
		model = "101st_Aux_Mod\Addons\DBA_Weapons\P7_Slugthrower\P7_Slugthrower.p3d";
		class TransportWeapons
		{
			class DBA_Battlerifle_T
			{
				count = 1;
				weapon = "DBA_P7Slugthrower";
			};
		};
	};
};


