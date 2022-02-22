class cfgPatches
{
	class DBA_Aux_Mod_BattleRifle
	{
		author = "ISU";
		name = "101st Aux Mod Weapons";
		requiredaddons[] = {"A3_Weapons_F_Mark"};
		requiredversion = 0.1;
		weapons[] = {"DBA_DC25F_Battlerifle", "DBA_DC25G_Battlerifle", "DBA_DC25D_Battlerifle"};
		magazines[]=
		{
			"DBA_792_LSPUR_x30_mag",
			"DBA_65_Ainu_x32_mag",
			"DBA_77_RRB_x40_mag",
		};
		ammo[]=
		{
			"DBA_792_LSPUR",
			"DBA_65_Ainu",
			"DBA_77_RRB",
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
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
	class Rifle_Base_F;
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class DBA_DC25F_Battlerifle : Rifle_Long_Base_F{
		scope=2;
		displayName = "DC-24G Battle-Rifle Concept A";
		magazines[] =
		{
			"DBA_792_LSPUR_x30_mag"
		};
		reloadAction = "GestureReloadDMR03";
		recoil="recoil_sdar";
		maxZeroing = 1600;
		overviewPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		discreteDistanceInitIndex = 0;
		cursor = "srifle";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\BattleRifle.p3d";
		dexterity = 1.6799999;
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		descriptionShort = "Gun";
		inertia = 0.80000001;
		aimTransitionSpeed = 0.69999999;
		class ItemInfo
		{
			priority = 1;
		};
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\Data\MBR_CO.paa",
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\Data\MBR.rvmat",
		};
		class Library
		{
			libTextDesc = "Hi";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E5\anims\E5_handanim.rtm"
		};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"semi",
			"fullAuto",
			"close",
			"medium",
			"far",
			"veryFar",
		};
		class semi : Mode_FullAuto{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_merc\rifles\zh73\sounds\zh73",
					1.55,
					0.92,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			autoFire=0;
			reloadTime=0.1090909091;
			dispersion=0.000872664;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
			textureType = "semi";
		};
		class fullAuto : Mode_FullAuto{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_merc\rifles\zh73\sounds\zh73",
					1.55,
					0.92,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.06666666667;
			dispersion=0.000872664;
			recoil="M240Recoil";
			recoilProne="M240RecoilProne";
			minRange=0.15;
			aiRateOfFireDistance=1;
			minRangeProbab=0.0;
			midRange=0.4;
			midRangeProbab=0.0;
			maxRange=0.5;
			maxRangeProbab=0.0;
			aiRateOfFire=1;
		};
		class close : fullAuto{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=0;
			minRangeProbab=0.99999999;
			midRange=50;
			midRangeProbab=0.95;
			maxRange=75;
			maxRangeProbab=0.4;
		};
		class medium : semi{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=100;
			minRangeProbab=0.99;
			midRange=200;
			midRangeProbab=0.99;
			maxRange=250;
			maxRangeProbab=0.99;
		};
		class far : medium{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=300;
			minRangeProbab=0.99;
			midRange=600;
			midRangeProbab=0.99;
			maxRange=700;
			maxRangeProbab=0.55;
		};
		class veryFar : far{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=800;
			minRangeProbab=0.8999998;
			midRange=1000;
			midRangeProbab=0.60000001;
			maxRange=1500;
			maxRangeProbab=0.550000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 220;
			class MuzzleSlot : MuzzleSlot_762
			{
				iconPosition[] = { 0.12,0.43099999 };
				iconScale = 0.15000001;
				compatibleItems[] = {};
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = { 0.5,0.36000001 };
				iconScale = 0.15000001;
				compatibleItems[] = {"DBA_MRCO_A", "DBA_MRCO_B"};
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPosition[] = { 0.33000001,0.40000001 };
				iconScale = 0.2;
				compatibleItems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot_rail
			{
				iconPosition[] = { 0.30000001,0.80000001 };
				iconScale = 0.30000001;
				compatibleItems[] = {};
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
	};
	class DBA_DC25G_Battlerifle : DBA_DC25F_Battlerifle{
		scope=2;
		displayName = "DC-24G BR (Concept B)";
		magazines[] =
		{
			"DBA_65_Ainu_x32_mag",
		};
		recoil="recoil_smg_02";
		reloadAction = "GestureReloadDMR03";
		maxZeroing = 1600;
		overviewPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		discreteDistanceInitIndex = 0;
		cursor = "srifle";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\BattleRifle.p3d";
		dexterity = 1.6799999;
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		descriptionShort = "Gun";
		inertia = 0.80000001;
		aimTransitionSpeed = 0.69999999;
		class ItemInfo
		{
			priority = 1;
		};
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\Data\MBR_CO.paa",
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\Data\MBR.rvmat",
		};
		class Library
		{
			libTextDesc = "Hi";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E5\anims\E5_handanim.rtm"
		};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"semi",
			"fullAuto",
			"close",
			"medium",
			"far",
			"veryFar",
		};
		class semi : Mode_FullAuto{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_merc\rifles\zh73\sounds\zh73",
					1.55,
					0.92,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			autoFire=0;
			reloadTime=0.1090909091;
			dispersion=0.000872664;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
			textureType = "semi";
		};
		class fullAuto : Mode_FullAuto{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_merc\rifles\zh73\sounds\zh73",
					1.55,
					0.92,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.1;
			dispersion=0.000872664;
			recoil="recoil_auto_dmr";
			recoilProne="recoil_auto_prone_dmr";
			minRange=0.15;
			aiRateOfFireDistance=1;
			minRangeProbab=0.0;
			midRange=0.4;
			midRangeProbab=0.0;
			maxRange=0.5;
			maxRangeProbab=0.0;
			aiRateOfFire=1;
		};
		class close : fullAuto{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=0;
			minRangeProbab=0.99999999;
			midRange=50;
			midRangeProbab=0.95;
			maxRange=75;
			maxRangeProbab=0.4;
		};
		class medium : semi{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=100;
			minRangeProbab=0.99;
			midRange=200;
			midRangeProbab=0.99;
			maxRange=250;
			maxRangeProbab=0.99;
		};
		class far : medium{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=300;
			minRangeProbab=0.99;
			midRange=600;
			midRangeProbab=0.99;
			maxRange=700;
			maxRangeProbab=0.55;
		};
		class veryFar : far{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=800;
			minRangeProbab=0.8999998;
			midRange=1000;
			midRangeProbab=0.60000001;
			maxRange=1500;
			maxRangeProbab=0.550000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 220;
			class MuzzleSlot : MuzzleSlot_762
			{
				iconPosition[] = { 0.12,0.43099999 };
				iconScale = 0.15000001;
				compatibleItems[] = {};
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = { 0.5,0.36000001 };
				iconScale = 0.15000001;
				compatibleItems[] = {"DBA_MRCO_A", "DBA_MRCO_B"};
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPosition[] = { 0.33000001,0.40000001 };
				iconScale = 0.2;
				compatibleItems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot_rail
			{
				iconPosition[] = { 0.30000001,0.80000001 };
				iconScale = 0.30000001;
				compatibleItems[] = {};
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
	};
	class DBA_DC25D_Battlerifle : DBA_DC25F_Battlerifle{
		scope=2;
		displayName = "DC-24G Battle-Rifle Concept C";
		magazines[] =
		{
			"DBA_77_RRB_x40_mag"
		};
		recoil="recoil_mxm";
		reloadAction = "GestureReloadDMR03";
		maxZeroing = 1600;
		overviewPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		discreteDistanceInitIndex = 0;
		cursor = "srifle";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\BattleRifle.p3d";
		dexterity = 1.6799999;
		picture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		UiPicture = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Effects\icons\Verpine_CA.paa";
		descriptionShort = "Gun";
		inertia = 0.80000001;
		aimTransitionSpeed = 0.69999999;
		class ItemInfo
		{
			priority = 1;
		};
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\Data\MBR_CO.paa",
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Weapons\DBA_BattleRifle\Data\MBR.rvmat",
		};
		class Library
		{
			libTextDesc = "Hi";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E5\anims\E5_handanim.rtm"
		};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"semi",
			"fullAuto",
			"close",
			"medium",
			"far",
			"veryFar",
		};
		class semi : Mode_FullAuto{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_merc\rifles\zh73\sounds\zh73",
					1.55,
					0.92,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			autoFire=0;
			reloadTime=0.1411764706;
			dispersion=0.000872664;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			aiRateOfFireDistance=1;
			minRange=0.1;
			minRangeProbab=0.0;
			midRange=0.2;
			midRangeProbab=0.0;
			maxRange=0.3;
			maxRangeProbab=0.0;
			textureType = "semi";
		};
		class fullAuto : Mode_FullAuto{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_merc\rifles\zh73\sounds\zh73",
					1.55,
					0.92,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.1411764706;
			dispersion=0.000872664;
			recoil="recoil_auto_dmr";
			recoilProne="recoil_auto_prone_dmr";
			minRange=0.15;
			aiRateOfFireDistance=1;
			minRangeProbab=0.0;
			midRange=0.4;
			midRangeProbab=0.0;
			maxRange=0.5;
			maxRangeProbab=0.0;
			aiRateOfFire=1;
		};
		class close : fullAuto{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=0;
			minRangeProbab=0.99999999;
			midRange=50;
			midRangeProbab=0.95;
			maxRange=75;
			maxRangeProbab=0.4;
		};
		class medium : semi{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=100;
			minRangeProbab=0.99;
			midRange=200;
			midRangeProbab=0.99;
			maxRange=250;
			maxRangeProbab=0.99;
		};
		class far : medium{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=300;
			minRangeProbab=0.99;
			midRange=600;
			midRangeProbab=0.99;
			maxRange=700;
			maxRangeProbab=0.55;
		};
		class veryFar : far{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=5;
			burstRangeMax=13;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.5;
			minRange=800;
			minRangeProbab=0.8999998;
			midRange=1000;
			midRangeProbab=0.60000001;
			maxRange=1500;
			maxRangeProbab=0.550000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 220;
			class MuzzleSlot : MuzzleSlot_762
			{
				iconPosition[] = { 0.12,0.43099999 };
				iconScale = 0.15000001;
				compatibleItems[] = {};
			};
			class CowsSlot : CowsSlot_Rail
			{
				iconPosition[] = { 0.5,0.36000001 };
				iconScale = 0.15000001;
				compatibleItems[] = {"DBA_MRCO_A", "DBA_MRCO_B"};
			};
			class PointerSlot : PointerSlot_Rail
			{
				iconPosition[] = { 0.33000001,0.40000001 };
				iconScale = 0.2;
				compatibleItems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot_rail
			{
				iconPosition[] = { 0.30000001,0.80000001 };
				iconScale = 0.30000001;
				compatibleItems[] = {};
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
	};
};
class CfgMagazines{
	class CA_Magazine;
	class DBA_792_LSPUR_x30_mag : CA_Magazine{
		displayname="7.92mw L-Spur (30 Rounds)";
		dlc="DBA";
		scope = 2;
		ammo="DBA_792_LSPUR";
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5\E5_mag.p3d";
		displaynamemagazine="7.92mw L-Spur (30 Rounds)";
		shortnamemagazine="7.92mw L-Spur";
		displayNameMFDFormat="7.92mw";
		displayNameShort="7.92mw";
		count=30;
		mass=25;
		initspeed=878;
		tracersevery=1;
	};
	class DBA_77_RRB_x40_mag : CA_Magazine{
		displayname="7.7mw RRB Mag(40 Rounds)";
		dlc="DBA";
		scope = 2;
		ammo="DBA_77_RRB";
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5\E5_mag.p3d";
		displaynamemagazine="7.7mw RRB Mag(40 Rounds)";
		shortnamemagazine="7.7mw RRB Mag";
		displayNameMFDFormat="7.7mw";
		displayNameShort="7.7mw";
		count=40;
		mass=20;
		initspeed=844;
		tracersevery=1;
	};
	class DBA_65_Ainu_x32_mag : CA_Magazine{
		displayname="6.5mw Ainu Mag (32 Rounds)";
		dlc="DBA";
		scope = 2;
		ammo="DBA_65_Ainu";
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5\E5_mag.p3d";
		displaynamemagazine="6.5mw Ainu Mag (32 Rounds)";
		shortnamemagazine="6.5mw Ainu";
		displayNameMFDFormat="6.5mw";
		displayNameShort="6.5mw";
		count=32;
		mass=15;
		initspeed=770;
		tracersevery=1;
	};
};
class CfgAmmo{
	class BulletBase;
	class DBA_792_LSPUR : BulletBase{
		hit = 13;
		indirectHit = 0;
		indirectHitRange = 0.0;
		explosive= 0.0;
		warheadName = "7.92mw";
		caliber = 5;
		deflecting = 1;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=878;
		aiAmmoUsageFlags= "64 + 128 + 256";
		cost = 1.2;
		effectfly = "DBA_BluePlasma";
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 1.0;
		tracerStartTime = 0.05;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 400;	
		allowAgainstInfantry=1;
		coefGravity=0.5;
		waterFriction=0;
	};
	class DBA_77_RRB : BulletBase{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0.0;
		explosive= 0.0;
		warheadName = "7.7mw";
		caliber = 3.5;
		deflecting = 1;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=844;
		aiAmmoUsageFlags= "64 + 128 + 256";
		cost = 1.2;
		effectfly = "DBA_BluePlasma";
		model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
		tracerScale = 1.0;
		tracerStartTime = 0.05;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 400;	
		allowAgainstInfantry=1;
		coefGravity=0.2;
		waterFriction=0;
	};
	class DBA_65_Ainu : BulletBase{
		hit = 9.5;
		indirectHit = 0;
		indirectHitRange = 0.0;
		explosive= 0.0;
		warheadName = "6.5mw";
		caliber = 3.5;
		deflecting = 1;
		airFriction = 0;
		timeToLive = 40;
		initSpeed=770;
		aiAmmoUsageFlags= "64 + 128 + 256";
		cost = 1.2;
		effectfly = "DBA_BluePlasma";
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		tracerScale = 1.0;
		tracerStartTime = 0.05;
		tracerEndTime = 20;
		brightness=100000;
		muzzleEffect = "";
		typicalSpeed = 400;	
		allowAgainstInfantry=1;
		coefGravity=0.2;
		waterFriction=0;
	};
};