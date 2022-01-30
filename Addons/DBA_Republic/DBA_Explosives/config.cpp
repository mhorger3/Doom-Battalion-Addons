class CfgPatches
{
	class DBA_Explosives
	{
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] =
		{
			"DBA_ImploderBlock_F",
			"DBA_ThermalDetBlock_F"
		};
		weapons[] = {};
		magazines[] =
		{
			"DBA_ImploderBlock_Mag",
			"DBA_ThermalBlock_Mag",
			"DBA_imploder_x1_mag",
			"DBA_throwable_c_type_x1_mag",
			"DBA_HandFlare_Purple",
			"DBA_thermaldet_x1_mag"
		};
	};
};
class CfgWeapons
{
	class Default;
	class GrenadeLauncher;
	class Put : Default
	{
		muzzles[] =
		{
			"DBA_ExplosivesMuzzle"
		};
		displayName = "$STR_A3_CfgWeapons_Put0";
		class PutMuzzle : Default 
		{
		};
		class DBA_ExplosivesMuzzle : PutMuzzle
		{
			autoreload = 0;
			displayName = "Imploder Block";
			magazines[] =
			{
				"DBA_ImploderBlock_Mag",
				"DBA_ThermalBlock_Mag"
			};
			enableAttack = 1;
			showToPlayer = 0;
		};
	};
	class Throw : GrenadeLauncher
	{
		muzzles[] +=
		{
				"DBA_Imploder",
				"DBA_Detonator",
				"DBA_Ctype",
				"DBA_PurpleSmoke"
		};
		class ThrowMuzzle;
		class DBA_Ctype : ThrowMuzzle
		{
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ctype.p3d";
			magazines[] =
			{
				"DBA_throwable_c_type_x1_mag"
			};
		};
		class DBA_Imploder : ThrowMuzzle
		{
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\imploder.p3d";
			magazines[] =
			{
				"DBA_imploder_x1_mag"
			};
		};
		class DBA_Detonator : ThrowMuzzle
		{
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
			magazines[] =
			{
				"DBA_thermaldet_x1_mag"
			};
		};
		class DBA_PurpleSmoke : ThrowMuzzle
		{
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
			magazines[] =
			{
				"DBA_HandFlare_Purple"
			};
		};
	};
};
class CfgVehicles
{
	class MineGeneric;
	class MineBase : MineGeneric
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1;
		_generalMacro = "MineBase";
		icon = "iconExplosiveGP";
	};
	
//	class DBA_ImploderBlock_F : MineBase

//	{
//		author = "Vulgar";
//		mapSize = 0.43000001;
//		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
//		scope = 2;
//		icon = "iconExplosiveGP";
//		ammo = "DBA_ImploderBlock_Ammo";
//		model = "\101st_Aux_Mod\Addons\DBA_Explosives\ExplosiveP3D\ImploderBlock.p3d";
//		displayName = "Imploder Block";
//		DLC = "101st_Aux_Mod";
//	}; Archived due to ACE 
	class Items_base_F;
	class ACE_Explosives_Place: Items_base_F
	{
		class ACE_Actions
		{
			class ACE_MAinActions;
		};
	};
	class DBA_ImploderBlock_F : ACE_Explosives_Place {
		displayName = "Imploder Block";  // Name of the item // Path to your model
		ACE_offset[] = { -3,14,2 };  // Offset of the interaction point from the model in meters on the X,Y,Z axis. Try setting this to the place where it makes most sense (e.g. to buttons/switches/pins)
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ImploderBlock.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\DetBlock\Imploder_Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\DetBlock\Imploder.rvmat",
		};

	};
	
	class DBA_ThermalDetBlock_F : ACE_Explosives_Place
	{
		ACE_offset[] = { -3,14,2 };
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ThermalDetBlock.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalBlock\Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalBlock\Thermal.rvmat",
		};
		displayName = "Thermal Det Block";
	};
};
class CfgAmmo
{
	class MineCore;
	class BoundingMineCore;
	class DirectionalBombCore;
	class PipeBombCore;
	class Default;
	class Grenade : Default
	{
	};
	class MineBase : MineCore
	{
	};
	class BoundingMineBase : BoundingMineCore
	{
	};
	class DirectionalBombBase : DirectionalBombCore
	{
	};
	class PipeBombBase : PipeBombCore
	{
	}; // Keep incase we ever want to make our own mines
	class DBA_ImploderBlock_Ammo : PipeBombBase
	{
		hit = 7500;
		indirectHit = 5500;
		indirectHitRange = 11;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ImploderBlock.p3d";
		defaultMagazine = "DBA_ImploderBlock_Mag"; 
		explosive = 1;
		explosionType = "bomb";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\DetBlock\Imploder_Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\DetBlock\Imploder.rvmat",
		}; 
		mineModelDisabled = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ImploderBlock.p3d";
		soundHit1[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\imploderExplode1.ogg",
			3.1622777,
			1,
			1500
		};
		soundHit2[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\imploderExplode2.ogg",
			3.1622777,
			1,
			1500
		};
		multiSoundHit[] =
		{
			"soundHit1",
			0.5,
			"soundHit2",
			0.5
		}; 
		soundActivation[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\thermalimploderFly.ogg",1.5,1,150
		};
		soundDeactivation[] =
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.9952624,
			1,
			20
		};
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		whistleDist = 10;
		mineInconspicuousness = 3;
		mineTrigger = "RemoteTrigger";
		ace_explosives_magazine = "DBA_ImploderBlock_Mag";
		ACE_explodeOnDefuse = 0.02;
		ace_explosives_defuseObjectPosition[] = { 0,0,0 };
		ace_explosives_size = 0;
	};
	class DBA_ImploderBlock_Remote_Ammo_Scripted : DBA_ImploderBlock_Ammo
	{
	};
	class DBA_ThermalDetBlock_Ammo : PipeBombBase
	{
		hit = 5000;
		indirectHit = 5000;
		indirectHitRange = 0.2;
		explosive = 0;
		explosionType = "bomb";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ThermalDetBlock.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalBlock\Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalBlock\Thermal.rvmat",
		};
		mineModelDisabled = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ThermalDetBlock.p3d";
		soundHit[] =
		{
			"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",
			3.1622777,
			1,
			1500
		};
		soundDeactivation[] =
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		defaultMagazine = "DBA_ThermalBlock_Mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		CraterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
		ACE_explodeOnDefuse = 0.02;
		ace_explosives_defuseObjectPosition[] = { 0,0,0 };
		ace_explosives_size = 0;

	};

	class DBA_imploder_ammo : Grenade
	{
		displayName = "DBA Thermal Imploder";
		ace_advanced_throwing_torqueDirection[] = {1,1,0};
		ace_advanced_throwing_torqueMagnitude = "(50 + random 100) * selectRandom [1, -1]";
		hit = 75;
		indirectHit = 45;
		indirectHitRange = 8;
		simulation = "shotGrenade";
		soundFly[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\thermalimploderFly.ogg",
			1.5,
			1,
			90
		};
		multiSoundHit[] =
		{
			"soundHit1",
			0.33000001,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		soundHit1[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\imploderExplode1.ogg",
			2,
			1,
			2000
		};
		soundHit2[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\imploderExplode2.ogg",
			2,
			1,
			2000
		};
		soundHit3[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\imploderExplode3.ogg",
			2,
			1,
			2000
		};
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] =
		{
			"ace_frag_tiny_HD"
		};
		ace_frag_metal = 210;
		ace_frag_charge = 185;
		ace_frag_gurney_c = 2843;
		ace_frag_gurney_k = "3/5";
		class NVGMarkers
		{
			class Blinking1
			{
				name = "blinkpos1";
				color[] = {0.0099999998,0.0099999998,0.0099999998,1};
				ambient[] = {0.0049999999,0.0049999999,0.0049999999,1};
				blinking = 1;
				brightness = 0.0020000001;
				onlyInNvg = 1;
			};
			class Blinking2
			{
				color[] = {0.89999998,0.1,0.1};
				ambient[] = {0.1,0.1,0.1};
				name = "blinkpos2";
				blinking = 1;
				blinkingStartsOn = 1;
				blinkingPattern[] = {0.1,0.89999998};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.34999999;
				drawLightCenterSize = 0.050000001;
				brightness = 0.0020000001;
				dayLight = 1;
				onlyInNvg = 0;
				intensity = 75;
				drawLight = 1;
				activeLight = 0;
				useFlare = 0;
			};
		};
		typicalspeed = 18;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\imploder.p3d";
		hiddenselections[] =
		{
			"camo1"
		};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\ThermalImploder_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\imploder.rvmat"
		};
	};
	class DBA_throwable_c_type_ammo : Grenade
	{
		displayName = "DBA Throwable C-Type Explosive";
		simulation = "shotGrenade";
		thrust = 210;
		airFriction = -0.00050000002;
		hit = 300;
		indirectHit = 200;
		indirectHitRange = 10;
		typicalspeed = 15;
		explosionTime = 15;
		timeToLive = 20;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ctype.p3d";
		hiddenselections[] =
		{
			"camo1"
		};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\CType\TypeC_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\CType\ctype.rvmat"
		};
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		soundFly[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\CType\ctypeFly.ogg",
			1,
			1,
			90
		};
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] =
		{
			"ace_frag_tiny_HD"
		};
		ace_frag_metal = 210;
		ace_frag_charge = 185;
		ace_frag_gurney_c = 2843;
		ace_frag_gurney_k = "3/5";
		class NVGMarkers
		{
			class Blinking1
			{
				name = "blinkpos1";
				color[] = {0.0099999998,0.0099999998,0.0099999998,1};
				ambient[] = {0.0049999999,0.0049999999,0.0049999999,1};
				blinking = 1;
				brightness = 0.0020000001;
				onlyInNvg = 1;
			};
			class Blinking2
			{
				color[] = {0.89999998,0.1,0.1};
				ambient[] = {0.1,0.1,0.1};
				name = "blinkpos2";
				blinking = 1;
				blinkingStartsOn = 1;
				blinkingPattern[] = {0.1,0.89999998};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.34999999;
				drawLightCenterSize = 0.050000001;
				brightness = 0.0020000001;
				dayLight = 1;
				onlyInNvg = 0;
				intensity = 75;
				drawLight = 1;
				activeLight = 0;
				useFlare = 0;
			};
		};
	};
	class DBA_thermaldet_ammo : Grenade
	{
		displayName = "DBA Thermal Detonator";
		ace_advanced_throwing_torqueDirection[] = {1,1,0};
		ace_advanced_throwing_torqueMagnitude = "(50 + random 100) * selectRandom [1, -1]";
		hit = 35;
		indirectHit = 14;
		indirectHitRange = 8;
		soundFly[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermalDetFly.ogg",
			1.5,
			1,
			90
		};
		simulation = "shotGrenade";
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] =
		{
			"ace_frag_tiny_HD"
		};
		ace_frag_metal = 210;
		ace_frag_charge = 185;
		ace_frag_gurney_c = 2843;
		ace_frag_gurney_k = "3/5";
		class NVGMarkers
		{
			class Blinking1
			{
				name = "blinkpos1";
				color[] = {0.0099999998,0.0099999998,0.0099999998,1};
				ambient[] = {0.0049999999,0.0049999999,0.0049999999,1};
				blinking = 1;
				brightness = 0.0020000001;
				onlyInNvg = 1;
			};
			class Blinking2
			{
				color[] = {0.89999998,0.1,0.1};
				ambient[] = {0.1,0.1,0.1};
				name = "blinkpos2";
				blinking = 1;
				blinkingStartsOn = 1;
				blinkingPattern[] = {0.1,0.89999998};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.34999999;
				drawLightCenterSize = 0.050000001;
				brightness = 0.0020000001;
				dayLight = 1;
				onlyInNvg = 0;
				intensity = 75;
				drawLight = 1;
				activeLight = 0;
				useFlare = 0;
			};
		};
		typicalspeed = 18;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
		hiddenselections[] =
		{
			"camo1"
		};
		hiddenselectionstextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\ThermalDetonator_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermal.rvmat"
		};
		fuseDistance = 0;
	};
	class DBA_ThermalDetBlock_Ammo_Scripted : DBA_ThermalDetBlock_Ammo
	{
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine : Default
	{
	};
	class HandGrenade : CA_Magazine
	{
	};

	class DBA_imploder_x1_mag : HandGrenade
	{
		author = "Vulgar";
		scope = 2;
		displayName = "DBA 1Rnd Thermal Imploder";
		displayNameShort = "Thermal Imploder";
		count = 1;
		ammo = "DBA_imploder_ammo";
		descriptionShort = "DBA Thermal Imploder";
		type = 256;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\imploder.p3d";
	};
	class DBA_throwable_c_type_x1_mag : HandGrenade
	{
		author = "Vulgar";
		scope = 2;
		displayName = "DBA 1Rnd Throwable C-Type";
		displayNameShort = "Throwable C-Type";
		count = 1;
		initSpeed = 12;
		mass = 70;
		ammo = "DBA_throwable_c_type_ammo";
		descriptionShort = "DBA Throwable C-Type";
		type = 256;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ctype.p3d";
	};
	class ACE_HandFlare_Base;
	class DBA_HandFlare_Purple : ACE_HandFlare_Base
	{
		author = "Vulgar";
		scope = 2;
		displayname = "Purple Flare";
		descriptionShort = "Its a flare thats purple";
		displayNameShort = "Purple Flare";
		model = "\A3\weapons_f\ammo\flare_white";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_white_ca.paa";
		ammo = "ACE_G_Handflare_Purple";
	};
	class DBA_thermaldet_x1_mag : HandGrenade
	{
		author = "Vulgar";
		scope = 2;
		displayName = "DBA 1Rnd Thermal Detonator";
		displayNameShort = "Thermal Detonator";
		count = 1;
		ammo = "DBA_thermaldet_ammo";
		mass = 10;
		descriptionShort = "DBA Thermal Detonator";
		type = 256;
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] =
		{
			"",
			0.00031622799,
			1
		};
	};
	class DBA_ImploderBlock_Mag : CA_Magazine
	{
		author = "Vulgar";
		scope = 2;
		displayName = "DBA Imploder Block";
		picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ImploderBlock.p3d";
		descriptionShort = "DBA Demo Block";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\DetBlock\Imploder_Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\DetBlock\Imploder.rvmat",
		};
		class Library
		{
			libTextDesc = "DBA Demo Block";
		};
		type = "2*		256";
		allowedSlots[] = { 901 };
		value = 5;
		ammo = "DBA_ImploderBlock_Ammo";
		mass = 80;
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		descriptionUse = "Use: Set Imploder Charge";
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		weaponPoolAvailable = 1;
		// useAction = 1; Archived incase we need to remove ACE
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] =
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
		ACE_Explosives_Placeable = 1;
		useAction = 0;
		ACE_Explosives_SetupObject = "DBA_ImploderBlock_F";
		ACE_Explosives_DelayTime = 1.5;
		class ACE_Triggers
		{
			SupportedTriggers[] =
			{
				"Timer",
				"Command",
				"MK16_Transmitter",
				"DeadmanSwitch"
			};
			class Timer
			{
				FuseTime = 0.5;
			};
			class Command
			{
				FuseTime = 0.5;
			};
			class MK16_Transmitter : Command
			{
			};
			class DeadmanSwitch : Command
			{
			};
		};
	};
	class DBA_ThermalBlock_Mag : CA_Magazine
	{
		author = "Vulgar";
		scope = 2;
		displayName = "DBA Thermal Block";
		picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ThermalDetBlock.p3d";
		descriptionShort = "DBA Demo Block";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalBlock\Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalBlock\Thermal.rvmat",
		};
		class Library
		{
			libTextDesc = "DBA Demo Block";
		};
		type = "2*		256";
		allowedSlots[] = { 901 };
		value = 5;
		ammo = "DBA_ThermalDetBlock_Ammo";
		mass = 60;
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		descriptionUse = "Use: Set Thermal Charge";
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		weaponPoolAvailable = 1;
		// useAction = 1; Archived incase we need to remove ACE
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] =
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
		ACE_Explosives_Placeable = 1;
		useAction = 0;
		ACE_Explosives_SetupObject = "DBA_ThermalDetBlock_F";
		ACE_Explosives_DelayTime = 1.5;
		class ACE_Triggers
		{
			SupportedTriggers[] =
			{
				"Timer",
				"Command",
				"MK16_Transmitter",
				"DeadmanSwitch"
			};
			class Timer
			{
				FuseTime = 0.5;
			};
			class Command
			{
				FuseTime = 0.5;
			};
			class MK16_Transmitter : Command
			{
			};
			class DeadmanSwitch : Command
			{
			};
		};
		class DBA_imploder_x1_mag : HandGrenade
		{
			author = "101st";
			scope = 2;
			displayName = "101st 1Rnd Thermal Imploder";
			displayNameShort = "Thermal Imploder";
			count = 1;
			ammo = "101st_imploder_ammo";
			descriptionShort = "101st Thermal Imploder";
			type = 256;
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\imploder.p3d";
		};
		class DBA_throwable_c_type_x1_mag : HandGrenade
		{
			author = "101st";
			scope = 2;
			displayName = "101st 1Rnd Throwable C-Type";
			displayNameShort = "Throwable C-Type";
			count = 1;
			initSpeed = 12;
			mass = 70;
			ammo = "101st_throwable_c_type_ammo";
			descriptionShort = "101st Throwable C-Type";
			type = 256;
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ctype.p3d";
		};
		class ACE_HandFlare_Base;
		class DBA_HandFlare_Purple : ACE_HandFlare_Base
		{
			author = "101st";
			scope = 2;
			displayname = "Purple Flare";
			descriptionShort = "Its a flare thats purple";
			displayNameShort = "Purple Flare";
			model = "\A3\weapons_f\ammo\flare_white";
			picture = "\A3\Weapons_F\Data\UI\gear_flare_white_ca.paa";
			ammo = "ACE_G_Handflare_Purple";
		};
		class DBA_thermaldet_x1_mag : HandGrenade
		{
			author = "101st";
			scope = 2;
			displayName = "101st 1Rnd Thermal Detonator";
			displayNameShort = "Thermal Detonator";
			count = 1;
			ammo = "101st_thermaldet_ammo";
			mass = 10;
			descriptionShort = "101st Thermal Detonator";
			type = 256;
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
			initSpeed = 18;
			nameSound = "handgrenade";
			maxLeadSpeed = 7;
			sound[] =
			{
				"",
				0.00031622799,
				1
			};
		};
	};
};
class CfgMineTriggers
{
	class RangeTrigger;
	class WireTrigger;
	class TankTriggerMagnetic : WireTrigger
	{
	};
	class IRTrigger : WireTrigger
	{
	};
	class RangeTriggerShort : RangeTrigger
	{
	};
	class UnderwaterRangeTriggerMagnetic : RangeTrigger
	{
	};
	class UnderwaterRangeTriggerMagneticShort : WireTrigger
	{
	};
	class RangeTriggerBounding : RangeTrigger
	{
	};
};
