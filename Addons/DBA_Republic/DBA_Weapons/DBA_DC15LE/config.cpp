class CfgPatches
{
	class DBA_DC15LE
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
		};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
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
	class DBA_DC15A_Base_F;
	class DBA_DC15A_LE_F : DBA_DC15A_Base_F
	{
		author = "Vulgar";
		_generalMacro = "arifle_MXM_F";
		baseWeapon = "DBA_DC15A_LE_F";
		scope = 2;
		displayName = "DBA DC15A LE";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15LE\DCLE.p3d";
		modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
		reloadAction = "GestureReloadMXSniper";
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\15S_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\15S_CA.paa";
		magazines[] =
		{
			"DBA_DC15ALE_Mag",
			"DBA_DC15A_Mag"
		};
		hiddenSelections[] = 
		{ 
			"DC15a_1", 
			"LE_ Canister",
			"LE_Muzzle"
		};
		hiddenSelectionsTextures[] = 
		{ 
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15LE\LE_Rifle_CO.paa", 
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15LE\LE_Canister_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15LE\LE_Muzzle_CO.paa",
		};
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"
		};
		class Single : Mode_SemiAuto
		{
			dispersion = 0.00047;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.69999999;
			maxRange = 450;
			maxRangeProbab = 0.30000001;
			modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
		};
		class single_medium_optics1 : Single
		{
			dispersion = 0.00073000003;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.69999999;
			maxRange = 650;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2 : single_medium_optics1
		{
			dispersion = 0.00073000003;
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.69999999;
			maxRange = 800;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMM";
			onHoverText = "TODO XMM DSS";
		};
		inertia = 0.60000002;
		aimTransitionSpeed = 0.80000001;
		dexterity = 1.4;
		initSpeed = 920;
		recoil = "recoil_mxm";
		maxZeroing = 1400;
		descriptionShort = "$STR_A3_CfgWeapons_arifle_XMM1";
	};
	class ItemCore;
	class optic_MRD: ItemCore
	{
		class ItemInfo;
	};
	class 101st_LE_Scope: optic_MRD
	{
		author = "101st Aux";
		scope = 2;
		displayName = "CQC Sight Aurek";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_DC15LE\LE_Scope.p3d";
		descriptionShort = "Pistol Scope";
		class ItemInfo: ItemInfo
		{
			mass = 2;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class MRCOcq
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia = 0;
	};
};