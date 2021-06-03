
class CfgPatches
{
	class DBA_Aux_Mod_E11D_Weapons
	{
		author = "Vulgar";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = { "101st_Aux_Mod" };
		requiredversion = 0.1;
		units[] = {};
		weapons[] =
		{
			"E11D"
		};
	};
};
/// All firemodes
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

/// Weapon slots
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class JLTS_stun_muzzle;

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class E11DBase : Rifle_Base_F /// Just basic values common for all testing rifle variants
	{
		magazines[] = { "DBA_E11D_Magazine" }; /// original custom made magazines and a group of several standardized mags
		reloadAction = "GestureReloadMX"; /// MX hand animation actually fits this rifle well
		magazineReloadSwitchPhase = 0.4; /// part of reload animation when new magazine ammo count should affect "revolving" animation source
		discreteDistanceInitIndex = 0; /// Ironsight zeroing is the lowest value by default

		// Size of recoil sway of the cursor
		maxRecoilSway = 0.0125;
		// Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
		swayDecaySpeed = 1.25;
		/// inertia coefficient of the weapon
		inertia = 0.5;

		/// positive value defines speed of the muzzle independent on the magazine setting, negative value is a coefficient of magazine initSpeed
		initSpeed = -1; /// this means that initSpeed of magazine is used

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
			class MuzzleSlot : MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; 	/// this can be set, but having some common helps a bit
				compatibleItems[] = { "" }; 				/// A custom made suppressor for this weapon
				iconPosition[] = { 0.0, 0.45 };							/// position of the slot icon inside of the weapon icon, relative to top-left corner in {right, down} format
				iconScale = 0.2;										/// scale of icon described in iconPicture
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa"; 	/// icon for selected slot
				iconPinpoint = "Center"; 										/// top, bottom, left, right, center alignment of the icon on snap point
			};
			class CowsSlot : CowsSlot /// default accessories for this slot
			{
				iconPosition[] = { 0.5, 0.35 };
				iconScale = 0.2;
				compatibleItems[] = { "" };
			};
			class PointerSlot : PointerSlot /// default accessories for this slot
			{
				iconPosition[] = { 0.20, 0.45 };
				iconScale = 0.25;
				compatibleItems[] = { "" };
			};
			class UnderBarrelSlot : UnderBarrelSlot /// using test bipod
			{
				iconPosition[] = { 0.2, 0.7 };
				iconScale = 0.2;
				compatibleItems[] = { "" };
			};
		};

		/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;

		distanceZoomMin = 300;
		distanceZoomMax = 300;
		/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////

		descriptionShort = "E11D"; /// displayed on mouseOver in Inventory
		handAnim[] = { "OFP2_ManSkeleton", "3AS\3AS_Weapons\DC15A\Data\Anim\DC15A_handanim.rtm" }; /// MX hand animation actually fits this rifle well
		dexterity = 1.8;

		//caseless ammo//
		caseless[] = { "",1,1,1 };  /// no sound of ejected brass
		soundBullet[] = { caseless,1 };

		selectionFireAnim = "muzzleFlash"; /// are we able to get rid of all the zaslehs?

		modes[] = { Single, FullAuto, fullauto_medium, single_medium_optics1, single_far_optics2 }; /// Includes fire modes for AI

	////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////
		class Stun : JLTS_stun_muzzle {};
		class Single : Mode_SemiAuto /// Pew
		{
			// the new parameter to distinguish muzzle accessories type
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30 };
				closure2[] = { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30 };
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",2.5,1,1800 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure1",1 };
			};

			reloadTime = 0.2; /// means some 625 rounds per minute
			dispersion = 0.00001; /// A bit less than 3 MOA

			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";

			minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 400; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};

		class FullAuto : Mode_FullAuto /// Pew-pew-pew-pew-pew
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30 };
				closure2[] = { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30 };
				soundClosure[] = { "closure1",0.5,"closure2",0.5 };
			};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = { "\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot.ogg",2.5,1,1800 };
				closure2[] = { "A3\sounds_f\weapons\closure\zafir_closure_2",0.5,1,10 };
				soundBegin[] = { "begin1",1 };
				soundClosure[] = { "closure1",1 };
			};

			reloadTime = 0.2;
			dispersion = 0.00001;

			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";

			minRange = 0; minRangeProbab = 0.9;
			midRange = 15; midRangeProbab = 0.7;
			maxRange = 30; maxRangeProbab = 0.1;

			aiRateOfFire = 0.000001;
		};

		class fullauto_medium : FullAuto /// Pew, pew, pew only for AI
		{
			showToPlayer = 0;
			burst = 3;

			minRange = 2; minRangeProbab = 0.5;
			midRange = 75; midRangeProbab = 0.7;
			maxRange = 150; maxRangeProbab = 0.05;

			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		//////////////////////////////////////////////////// OPTICS //////////////////////////////////////////////////

		class single_medium_optics1 : Single /// Pew for AI with collimator sights
		{
			requiredOpticType = 1;
			showToPlayer = 0;

			minRange = 2; minRangeProbab = 0.2;
			midRange = 450; midRangeProbab = 0.7;
			maxRange = 600; maxRangeProbab = 0.2;

			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};

		class single_far_optics2 : single_medium_optics1	/// Pew for AI with better sights
		{
			requiredOpticType = 2;
			showToPlayer = 0;

			minRange = 100; minRangeProbab = 0.1;
			midRange = 500; midRangeProbab = 0.6;
			maxRange = 700; maxRangeProbab = 0.05;

			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};

		aiDispersionCoefY = 6.0; /// AI should have some degree of greater dispersion for initial shoots
		aiDispersionCoefX = 4.0; /// AI should have some degree of greater dispersion for initial shoots
		drySound[] = { "A3\sounds_f\weapons\Other\dry_1", db - 5, 1, 10 }; /// custom made sounds
		reloadMagazineSound[] = { "A3\sounds_f\weapons\reloads\new_MX",db - 8,1, 30 }; /// custom made sounds
	};

	class E11D : E11DBase
	{
		scope = 2; /// should be visible and useable in game
		displayName = "[DBA] E11D"; /// some name
		model = "\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D.p3d"; /// path to model
		hiddenSelections[] =
		{
			"Bipod", 
			"Body",
			"Grip",
			"Mag"
		};
		hiddenSelectionsTextures[] = 
		{ 
			"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D\Bipod_CO.paa", 
			"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D\Body_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D\Grip_CO.paa",
			"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D\Mag_CO.paa"
		};

		hiddenSelectionsMaterials[] = { 
			"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D\Bipod.rvmat", 
			"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D\Body.rvmat",
			"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D\Grip.rvmat",
			"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D\Mag.rvmat"
		};


		picture = "\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D\E11D_ca.paa"; /// different accessories have M, S, T instead of X
		UiPicture = "\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\E11D\E11D_ca.paa"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = { "this", "stun"}; /// to be able to switch between bullet muzzle and TGL

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100; /// some rough estimate
		};
	};

	

	/// include accessory from separate file to not clutter this one

};
