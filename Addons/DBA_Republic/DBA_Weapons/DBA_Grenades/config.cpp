class CfgPatches
{
	class DBA_Aux_Mod_Grenades
	{
		author="";
		requiredAddons[]=
		{
			"DBA_Explosives",
			"A3_Characters_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
		};
		magazines[]=
		{
			"DBA_UT2_x1_Grenade",
			"DBA_UT3_x1_Grenade",
			"DBA_UT5_x3_Grenade",
			"DBA_UTN7_x1_Grenade",
			"DBA_UTD7C_x1_Satchel",
			"DBA_SN3_x1_Grenade",
			"DBA_SNF15_x1_Flash",
		};
		ammo[]=
		{
			"DBA_UT2_TD",
			"DBA_UT3_TD",
			"DBA_UT5_TD",
			"DBA_UTN7_TD",
			"DBA_UTD7C_TD",
			"DBA_SN3_Det",
			"DBA_SNF15_Flash",
		};
	};
};

class cfgWeapons
{
	class GrenadeLauncher;
	class Throw : GrenadeLauncher
	{
		muzzles[] +={"DBA_UT2","DBA_UT3","DBA_UT5","DBA_UTN7","DBA_UTD7C","DBA_SN3","DBA_SNF15"};
		class ThrowMuzzle;
		class DBA_UT2 : ThrowMuzzle
		{
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
			magazines[] =
			{
				"DBA_UT2_x1_Grenade"
			};
		};
		class DBA_UT3 : ThrowMuzzle
		{
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
			magazines[] =
			{
				"DBA_UT3_x1_Grenade"
			};
		};
		class DBA_UT5 : ThrowMuzzle
		{
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
			magazines[] =
			{
				"DBA_UT5_x3_Grenade"
			};
		};
		class DBA_UTN7 : ThrowMuzzle
		{
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
			magazines[] =
			{
				"DBA_UTN7_x1_Grenade"
			};
		};
		class DBA_UTD7C : ThrowMuzzle
		{
			model = "\A3\Weapons_F\explosives\c4_charge_small";
			magazines[] =
			{
				"DBA_UTD7C_x1_Satchel"
			};
		};
		class DBA_SN3 : ThrowMuzzle
		{
			model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\ctype.p3d";
			magazines[] =
			{
				"DBA_SN3_x1_Grenade"
			};
		};
		class DBA_SNF15 : ThrowMuzzle{
			model = "\z\ace\addons\grenades\models\ACE_m84_thrown.p3d";
			magazines[] =
			{
				"DBA_SNF15_x1_Flash"
			};
		};
	};
};
class CfgMagazines{
	class CA_Magazine;
	class DBA_UT2_x1_Grenade : CA_Magazine{
		author = "ISU";
		mass = 10;
		scope = 2;
		value = 1;
		maxThrowHoldTime = 2; 
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		displayName = "UT-2 Thermal Det.";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		displayNameShort = "UT-2 Thermal Det.";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
		type = 256;
		ammo = "DBA_UT2_TD";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
	};
	class DBA_UT3_x1_Grenade : CA_Magazine{
		author = "ISU";
		mass = 10;
		scope = 2;
		value = 1;
		maxThrowHoldTime = 2; 
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		displayName = "UT-3 Thermal Det.";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		displayNameShort = "UT-3 Thermal Det.";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
		type = 256;
		ammo = "DBA_UT3_TD";
		count = 1;
		initSpeed = 22;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
	};
	class DBA_UT5_x3_Grenade : CA_Magazine{
		author = "ISU";
		mass = 10;
		scope = 2;
		value = 1;
		maxThrowHoldTime = 2; 
		maxThrowIntensityCoef = 2.5;
		minThrowIntensityCoef = 0.75;
		displayName = "UT-5 Mini Det.";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		displayNameShort = "UT-5 Mini Det.";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
		type = 256;
		ammo = "DBA_UT5_TD";
		count = 3;
		initSpeed = 26;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
	};
	class DBA_UTN7_x1_Grenade : CA_Magazine{
		author = "ISU";
		mass = 10;
		scope = 2;
		value = 1;
		maxThrowHoldTime = 2; 
		maxThrowIntensityCoef = 3.4;
		minThrowIntensityCoef = 1.2;
		displayName = "UTN-7 Impact Det.";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		displayNameShort = "UTN-7 Impact Det.";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
		type = 256;
		ammo = "DBA_UTN7_TD";
		count = 1;
		initSpeed = 20;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
	};
	class DBA_UTD7C_x1_Satchel : CA_Magazine{
		author = "ISU";
		mass = 10;
		scope = 2;
		value = 1;
		maxThrowHoldTime = 2; 
		maxThrowIntensityCoef = 3.4;
		minThrowIntensityCoef = 1.2;
		displayName = "UTD-7C Cell";
		picture = "\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
		displayNameShort = "UTD-7C Cell";
		model = "\A3\Weapons_F\explosives\c4_charge_small_d";
		type = 256;
		ammo = "DBA_UTD7C_TD";
		count = 1;
		initSpeed = 15;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
	};
	class DBA_SN3_x1_Grenade : CA_Magazine{
		author = "ISU";
		mass = 10;
		scope = 2;
		value = 1;
		maxThrowHoldTime = 2; 
		maxThrowIntensityCoef = 3.4;
		minThrowIntensityCoef = 1.2;
		displayName = "SN-3 Shrapnel Det.";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		displayNameShort = "SN-3 Shrapnel Det.";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\imploder.p3d";
		type = 256;
		ammo = "DBA_SN3_Det";
		count = 1;
		initSpeed = 15;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
	};
	class DBA_SNF15_x1_Flash : CA_Magazine{
		author = "ISU";
		mass = 10;
		scope = 2;
		value = 1;
		maxThrowHoldTime = 2; 
		maxThrowIntensityCoef = 3.4;
		minThrowIntensityCoef = 1.2;
		displayName = "SNF-15 Flash";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		displayNameShort = "SNF-15 Flash";
		model = "\z\ace\addons\grenades\models\ACE_m84_thrown.p3d";
		type = 256;
		ammo = "DBA_SNF15_Flash";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
	};
};
class CfgAmmo{

	class GrenadeHand;
	class DBA_UT2_TD : GrenadeHand{
		displayName = "UT-2 Defensive Thermal Detonator";
		soundFly[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermalDetFly.ogg",1.5,1,90};
		hiddenselections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermal.rvmat"};
		hiddenselectionstextures[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\ThermalDetonator_CO.paa"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
		hit = 20;
		indirectHit = 24;
		indirectHitRange = 6.5;
		explosive = 1.0;
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] = {"ace_frag_small"};
		ace_frag_metal = 810;
		ace_frag_charge = 185;
		ace_frag_gurney_c = 2930;
		ace_frag_gurney_k = "3/5";
		submunitionAmmo="";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 910;
		submunitionParentSpeedCoef = 0.000000;
		submunitionInitialOffset[]={0,0,-0.2};
		allowAgainstInfantry=1;
		thrustTime=2.15;
		thrust=400;
		timeToLive=24;
		explosionTime = 3.2;
	};
	class DBA_UT3_TD : GrenadeHand{
		displayName = "UT-3 Offensive Grenade";
		soundFly[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermalDetFly.ogg",1.75,1.15,90};
		hiddenselections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermal.rvmat"};
		hiddenselectionstextures[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\ThermalDetonator_CO.paa"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
		hit = 20;
		indirectHit = 45;
		indirectHitRange = 4;
		explosive = 1.0;
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] = {"ace_frag_tiny_HD"};
		ace_frag_metal = 360;
		ace_frag_charge = 1000;
		ace_frag_gurney_c = 2930;
		ace_frag_gurney_k = "3/5";
		submunitionAmmo="";
		allowAgainstInfantry=1;
		thrustTime=2.15;
		thrust=400;
		timeToLive=24;
		explosionTime = 4.35;
	};
	class DBA_UT5_TD : GrenadeHand{
		displayName = "UT-5 Mini-Frag";
		soundFly[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermalDetFly.ogg",2.5,1.55,90};
		hiddenselections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermal.rvmat"};
		hiddenselectionstextures[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\ThermalDetonator_CO.paa"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
		hit = 20;
		indirectHit = 26.5;
		indirectHitRange = 4.5;
		explosive = 1.0;
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] = {"ace_frag_tiny"};
		ace_frag_metal = 100;
		ace_frag_charge = 36;
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = "3/5";
		submunitionAmmo="";
		allowAgainstInfantry=1;
		thrustTime=2.15;
		thrust=400;
		timeToLive=24;
		explosionTime = 3;
	};
	class DBA_UTN7_TD : GrenadeHand{
		displayName = "UT-7 Impact Det.";
		soundFly[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermalDetFly.ogg",2.5,1.55,90};
		hiddenselections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermal.rvmat"};
		hiddenselectionstextures[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\ThermalDetonator_CO.paa"};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\thermal.p3d";
		hit = 10;
		indirectHit = 20;
		indirectHitRange = 3.5;
		explosive = 1.0;
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] = {"ace_frag_tiny"};
		ace_frag_metal = 255;
		ace_frag_charge = 85;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = "3/5";
		submunitionAmmo="";
		allowAgainstInfantry=1;
		thrustTime=2.15;
		thrust=400;
		timeToLive=24;
		explosionTime = -1;
	};
	class DBA_UTD7C_TD : GrenadeHand{
		displayName = "UTD-7C Cratering Charge";
		soundFly[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermalDetFly.ogg",1.75,0.55,90};
		model = "\A3\Weapons_F\explosives\c4_charge_small";
		hit = 10;
		indirectHit = 275;
		indirectHitRange = 7.5;
		explosive = 1.0;
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] = {"ace_frag_tiny_HD"};
		ace_frag_metal = 14515;
		ace_frag_charge = 2949;
		ace_frag_gurney_c = 2949;
		ace_frag_gurney_k = "3/5";
		submunitionAmmo="";
		allowAgainstInfantry=1;
		thrustTime=2.15;
		thrust=400;
		timeToLive=24;
		explosionTime = 10;
	};
	class DBA_SN3_Det : GrenadeHand{
		displayName = "SN-3 Shrapnel Bomb";
		soundFly[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermalDetFly.ogg",3.75,0.35,100};
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\imploder.p3d";
		hiddenselections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\imploder.rvmat"};
		hiddenselectionstextures[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalImploder\ThermalImploder_CO.paa"};
		hit = 10;
		indirectHit = 40;
		indirectHitRange = 8.25;
		explosive = 1.0;
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] = {"ace_frag_medium"};
		ace_frag_metal = 22566.22;
		ace_frag_charge = 3515.335;
		ace_frag_gurney_c = 1886;
		ace_frag_gurney_k = "3/5";
		submunitionAmmo="";
		allowAgainstInfantry=1;
		thrustTime=2.15;
		thrust=400;
		timeToLive=24;
		explosionTime = 6;
	};
	class DBA_SNF15_Flash : GrenadeHand{
		displayName = "SNF-15 Flashbang";
		soundFly[] = {"101st_Aux_Mod\Addons\DBA_Republic\DBA_Explosives\data\ThermalDet\thermalDetFly.ogg",4.75,2.35,150};
		model = "\z\ace\addons\grenades\models\ACE_m84_thrown.p3d";
		effectsSmoke = "ACE_M84FlashbangEffect";
		simulation = "shotSmoke";
		hit = 15;
		indirectHit = 0;
		indirectHitRange = 0.25;
		explosive = 0;
		ace_grenades_flashbang = 1;
        ace_grenades_flashbangBangs = 15;                    
        ace_grenades_flashbangInterval = 0.1;             
        ace_grenades_flashbangIntervalMaxDeviation = 0.05; 
		ace_frag_enabled = 0;
		ace_frag_skip = 0;
		ace_frag_force = 0;
		ace_frag_classes[] = {"ace_frag_tiny_HD"};
		ace_frag_metal = 0;
		ace_frag_charge = 0;
		ace_frag_gurney_c = 1886;
		ace_frag_gurney_k = "3/5";
		submunitionAmmo="";
		smokeColor[] = {0,0,0,0};
		allowAgainstInfantry=1;
		thrustTime=2.15;
		thrust=400;
		timeToLive=4;
		explosionTime = 2.1;
	};
};