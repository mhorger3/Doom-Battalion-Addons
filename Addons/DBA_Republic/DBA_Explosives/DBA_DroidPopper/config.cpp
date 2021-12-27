class CfgPatches
{
	class DBA_DroidPopper
	{
		author = "Vulgar";
		requiredAddons[] =
		{
			"DBA_Explosives",
			"A3_Characters_F"
		};
		requiredVersion = 0.1;
		units[] = {
		};
		weapons[] =
		{
		};
		magazines[] =
		{
			"DBA_DroidPopper_x1_mag"
		};
	};
};
class cfgFunctions
{
	class DBA_DroidPopper
	{
		class functions
		{
			file = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\DBA_DroidPopper\functions";
			class DroidPopper {};
		};
	};
};
class Extended_HitPart_EventHandlers
{
	class Man
	{
		DBA_hitPart = "(_this select 0) call DBA_DroidPopper_fnc_DroidPopper";
	};
};
class cfgWeapons
{
	class GrenadeLauncher;
	class Throw : GrenadeLauncher
	{
		muzzles[] +=
		{
			"DBA_DroidPopperMuzzle"
		};
		class ThrowMuzzle;
		class DBA_DroidPopperMuzzle : ThrowMuzzle
		{
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
			magazines[] =
			{
				"DBA_DroidPopper_x1_mag"
			};
		};
	};
};
class cfgammo
{
	class Default;
	class Grenade : Default
	{
	};
	class DBA_DroidPopper_ammo : Grenade
	{
		DBA_isDroidPopper = 1;
		displayName = "DBA Droid Popper";
		ace_advanced_throwing_torqueDirection[] = { 1,1,0 };
		ace_advanced_throwing_torqueMagnitude = "(50 + random 100) * selectRandom [1, -1]";
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 8;
		soundFly[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermalDetFly.ogg",
			1.5,
			1,
			90
		};
		explosionEffects = "";
		explosionSoundEffect = "";
		simulation = "shotGrenade";
		class CamShakeExplode
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		ace_frag_enabled = 0;
		ace_frag_force = 0;
		class NVGMarkers
		{
			class Blinking1
			{
				name = "blinkpos1";
				color[] = { 0.0099999998,0.0099999998,0.0099999998,1 };
				ambient[] = { 0.0049999999,0.0049999999,0.0049999999,1 };
				blinking = 1;
				brightness = 0.0020000001;
				onlyInNvg = 1;
			};
			class Blinking2
			{
				color[] = { 0.89999998,0.1,0.1 };
				ambient[] = { 0.1,0.1,0.1 };
				name = "blinkpos2";
				blinking = 1;
				blinkingStartsOn = 1;
				blinkingPattern[] = { 0.1,0.89999998 };
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
	class DBA_DroidPopper_x1_mag : HandGrenade
	{
		author = "Vulgar";
		scope = 2;
		displayName = "DBA 1Rnd Droid Popper";
		displayNameShort = "Droid Popper";
		count = 1;
		ammo = "DBA_DroidPopper_ammo";
		mass = 10;
		descriptionShort = "DBA Droid Popper";
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