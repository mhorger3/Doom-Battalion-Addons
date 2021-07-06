class CfgPatches
{
	class DBA_Explosives
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] =
		{
			"A3_Weapons_F"
		};
		requiredVersion = 0.1;
		units[] =
		{
			"",
		};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class Default;
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
		model = "\101st_Aux_Mod\Addons\DBA_Explosives\ExplosiveP3D\ImploderBlock.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\DetBlock\Imploder_Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\DetBlock\Imploder.rvmat",
		};

	};
	
	class DBA_ThermalDetBlock_F : ACE_Explosives_Place
	{
		ACE_offset[] = { -3,14,2 };
		model = "\101st_Aux_Mod\Addons\DBA_Explosives\ExplosiveP3D\ThermalDetBlock.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\ThermalBlock\Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\ThermalBlock\Thermal.rvmat",
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
		model = "\101st_Aux_Mod\Addons\DBA_Explosives\ExplosiveP3D\ImploderBlock.p3d";
		defaultMagazine = "DBA_ImploderBlock_Mag"; 
		explosive = 1;
		explosionType = "bomb";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\DetBlock\Imploder_Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\DetBlock\Imploder.rvmat",
		}; 
		mineModelDisabled = "\101st_Aux_Mod\Addons\DBA_Explosives\ExplosiveP3D\ImploderBlock.p3d";
		soundHit1[] =
		{
			"\101st_Aux_Mod\Addons\_ammo\imploderExplode1.ogg",
			3.1622777,
			1,
			1500
		};
		soundHit2[] =
		{
			"\101st_Aux_Mod\Addons\_ammo\imploderExplode2.ogg",
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
			"\101st_Aux_Mod\Addons\_ammo\thermalimploderFly.ogg",1.5,1,150
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
		hit = 4000;
		indirectHit = 4000;
		indirectHitRange = 0.2;
		explosive = 1;
		explosionType = "bomb";
		model = "\101st_Aux_Mod\Addons\DBA_Explosives\ExplosiveP3D\ThermalDetBlock.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\ThermalBlock\Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\ThermalBlock\Thermal.rvmat",
		};
		mineModelDisabled = "\101st_Aux_Mod\Addons\DBA_Explosives\ExplosiveP3D\ThermalDetBlock.p3d";
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
	class DBA_ThermalDetBlock_Ammo_Scripted : DBA_ThermalDetBlock_Ammo
	{
	};
};
class CfgMagazines
{
	class CA_Magazine;
	
	class DBA_ImploderBlock_Mag : CA_Magazine
	{
		author = "Vulgar";
		scope = 2;
		displayName = "Imploder Block";
		picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model = "\101st_Aux_Mod\Addons\DBA_Explosives\ExplosiveP3D\ImploderBlock.p3d";
		descriptionShort = "DBA Demo Block";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\DetBlock\Imploder_Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\DetBlock\Imploder.rvmat",
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
		displayName = "Thermal Block";
		picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model = "\101st_Aux_Mod\Addons\DBA_Explosives\ExplosiveP3D\ThermalDetBlock.p3d";
		descriptionShort = "DBA Demo Block";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\ThermalBlock\Det_Block_CO.paa",
		};

		hiddenSelectionsMaterials[] = {
			"\101st_Aux_Mod\Addons\DBA_Explosives\Textures\ThermalBlock\Thermal.rvmat",
		};
		class Library
		{
			libTextDesc = "DBA Demo Block";
		};
		type = "2*		256";
		allowedSlots[] = { 901 };
		value = 5;
		ammo = "DBA_ThermalDetBlock_Ammo";
		mass = 80;
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
