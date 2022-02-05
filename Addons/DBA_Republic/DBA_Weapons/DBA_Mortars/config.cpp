class CfgPatches
{
	class DBA_Aux_Mod_Mortars
	{
		author="";
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"DBA_60mw_PNM10_Mortar",
			"DBA_94mw_PNM15_Mortar",
			"DBA_120mw_PNM30_Mortar",
		};
		weapons[]=
		{
			"DBA_60mw_PNM10",
			"DBA_94mw_PNM15",
			"DBA_120mw_PNM30",
			"DBA_120mw_PNM30_proxy",
			"DBA_94mw_PNM15_proxy",
			"DBA_60mw_PNM10_proxy",
			"DBA_PNM10_carry",
			"DBA_PNM15_carry",
			"DBA_PNM30_carry",
		};
		magazines[]=
		{
			"DBA_60mm_GPL8_HE_Mag",
			"DBA_60mm_GPL9_SMK_Mag",
			"DBA_60mm_GPL10_ILLUM_Mag",
			"DBA_94mm_GPM15_HE_Mag",
			"DBA_94mm_GPM16_SMK_Mag",
			"DBA_94mm_GPM17_ILLUM_Mag",
			"DBA_94mm_GPM18_AB_Mag",
			"DBA_120mm_GPH40_HE_Mag",
			"DBA_120mm_GPH42_SMK_Mag",
			"DBA_120mm_GPH46_AB_Mag",
			"DBA_60mm_GPL8_HE_csw_mag",
			"DBA_60mm_GPL9_SMK_csw_mag",
			"DBA_60mm_GPL10_ILLUM_csw_mag",
			"DBA_94mm_GPM15_HE_csw_mag",
			"DBA_94mm_GPM16_SMK_csw_mag",
			"DBA_94mm_GPM17_ILLUM_csw_mag",
			"DBA_94mm_GPM18_AB_csw_mag",
			"DBA_120mm_GPH40_HE_csw_mag",
			"DBA_120mm_GPH42_SMK_csw_mag",
			"DBA_120mm_GPH46_AB_csw_mag",
		};
		ammo[]=
		{
			"DBA_60mm_GPL8_HE",
			"DBA_60mm_GPL9_SMK",
			"DBA_60mm_GPL10_ILLUM",
			"DBA_94mm_GPM15_HE",
			"DBA_94mm_GPM16_SMK",
			"DBA_94mm_GPM17_ILLUM",
			"DBA_94mm_GPM18_AB",
			"DBA_120mm_GPH40_HE",
			"DBA_120mm_GPH42_SMK",
			"DBA_120mm_GPH46_AB",
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgVehicles{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class assembleInfo;
	};
	class B_Mortar_01_F: Mortar_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class DBA_60mw_PNM10_Mortar : B_Mortar_01_F{
		displayname="PNM-10 Light Mortar";
		model="3AS\3as_static\Mortar\model\republicmortar.p3d";
		editorPreview="\3as\3as_static\images\3AS_Republic_Mortar.jpg";
		crew="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initelev=0;
				maxelev=40;
				minelev=-15;
				initturn=0;
				maxturn=360;
				minturn=-360;
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				weapons[]=
				{
					"DBA_60mw_PNM10"
				};
				magazines[]={
					"DBA_60mm_GPL8_HE_Mag",
				};
				memoryPointGunnerOptics="gunnerview";
				cameraDir="look";
				discreteDistanceCameraPoint[]=
				{
					"eye"
				};
				gunnerOutOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				elevationMode=0;
				gunnerforceoptics=1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.155;
						minFov=0.155;
						maxFov=0.155;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				class ViewOptics;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\mortar\data\base.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"3as\3as_static\mortar\data\tube.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\3as\3as_static\Mortar\data\base.001_co.paa",
			"\3as\3as_static\Mortar\data\tube.001_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base.rvmat",
			"\3as\3as_static\Mortar\data\tube.rvmat"
		};
		faction="B_DBA_Republic_F";
		scopeCurator=2;
		class ace_csw
		{
			enabled = 1;
			disassembleWeapon = "DBA_PNM10_carry";
			disassembleTurret = "ace_csw_mortarBaseplate";
			desiredAmmo = 1;
			ammoLoadTime = 3;
			ammoUnloadTime = 3;
			proxyWeapon = "ace_mk6mortar_fnc_csw_getProxyWeapon";
			magazineLocation = "_target selectionPosition 'usti hlavne'";
		};
	};
	class DBA_94mw_PNM15_Mortar : B_Mortar_01_F{
		displayname="PNM-15 Infantry Mortar";
		model="3AS\3as_static\Mortar\model\republicmortar.p3d";
		editorPreview="\3as\3as_static\images\3AS_Republic_Mortar.jpg";
		crew="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initelev=0;
				maxelev=40;
				minelev=-15;
				initturn=0;
				maxturn=360;
				minturn=-360;
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				weapons[]=
				{
					"DBA_94mw_PNM15"
				};
				magazines[]={
					"DBA_94mm_GPM15_HE_Mag",
				};
				memoryPointGunnerOptics="gunnerview";
				cameraDir="look";
				discreteDistanceCameraPoint[]=
				{
					"eye"
				};
				gunnerOutOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				elevationMode=0;
				gunnerforceoptics=1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.155;
						minFov=0.155;
						maxFov=0.155;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				class ViewOptics;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\mortar\data\base.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"3as\3as_static\mortar\data\tube.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\3as\3as_static\Mortar\data\base.001_co.paa",
			"\3as\3as_static\Mortar\data\tube.001_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base.rvmat",
			"\3as\3as_static\Mortar\data\tube.rvmat"
		};
		faction="B_DBA_Republic_F";
		scopeCurator=2;
		class ACE_CSW {
            enabled = 1; // Enables ACE CSW for this weapon              
            proxyWeapon = "ace_mk6mortar_fnc_csw_getProxyWeapon"; // The proxy weapon created above
            magazineLocation = "_target selectionPosition 'usti hlavne'"; // Ammo handling interaction point location
            disassembleWeapon = "DBA_PNM15_carry";  // Carryable weapon created above
            disassembleTurret = "ace_csw_carryMortarBaseplate";  // Which static tripod will appear when weapon is disassembled
            ammoLoadTime = 1;   // How long it takes in seconds to load ammo into the weapon           
            ammoUnloadTime = 1; // How long it takes in seconds to unload ammo from the weapon
            desiredAmmo = 1;  // When the weapon is reloaded it will try and reload to this ammo capacity
        };
	};
	class DBA_120mw_PNM30_Mortar : B_Mortar_01_F{
		displayname="PNM-30 Heavy Mortar";
		model="3AS\3as_static\Mortar\model\republicmortar.p3d";
		editorPreview="\3as\3as_static\images\3AS_Republic_Mortar.jpg";
		crew="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initelev=0;
				maxelev=40;
				minelev=-15;
				initturn=0;
				maxturn=360;
				minturn=-360;
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				weapons[]=
				{
					"DBA_120mw_PNM30"
				};
				magazines[]=
				{
					"DBA_120mm_GPH40_HE_Mag",
				};
				memoryPointGunnerOptics="gunnerview";
				cameraDir="look";
				discreteDistanceCameraPoint[]=
				{
					"eye"
				};
				gunnerOutOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				elevationMode=0;
				gunnerforceoptics=1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.155;
						minFov=0.155;
						maxFov=0.155;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				class ViewOptics;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\mortar\data\base.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"3as\3as_static\mortar\data\tube.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\3as\3as_static\Mortar\data\base.001_co.paa",
			"\3as\3as_static\Mortar\data\tube.001_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base.rvmat",
			"\3as\3as_static\Mortar\data\tube.rvmat"
		};
		faction="B_DBA_Republic_F";
		scopeCurator=2;
		class ACE_CSW {
            enabled = 1; // Enables ACE CSW for this weapon              
            proxyWeapon = "ace_mk6mortar_fnc_csw_getProxyWeapon"; // The proxy weapon created above
            magazineLocation = "_target selectionPosition 'magazine'"; // Ammo handling interaction point location
            disassembleWeapon = "DBA_PNM30_carry";  // Carryable weapon created above
            disassembleTurret = "ace_csw_carryMortarBaseplate";  // Which static tripod will appear when weapon is disassembled
            ammoLoadTime = 1;   // How long it takes in seconds to load ammo into the weapon           
            ammoUnloadTime = 1; // How long it takes in seconds to unload ammo from the weapon
            desiredAmmo = 1;  // When the weapon is reloaded it will try and reload to this ammo capacity
        };
	};
};
class cfgWeapons
{
	/*external*/ class CannonCore;
	class DBA_60mw_PNM10 : CannonCore{
		scope = 1;
		displayname = "PNM-10 Light Mortar";
		nameSound = "CannonCore";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[]= {"StandardSound"};

		class StandardSound {
			begin1[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.258925, 1.35, 250};
			begin2[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.258925, 1.4, 250};
			soundBegin[]= {"begin1", 0.500000, "begin2", 0.500000};
		};
		reloadSound[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.000000, 1.35, 20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar", 1.000000, 1.35, 20};
		soundServo[]= {"", 0.000100, 1.000000};
		reloadTime = 1.800000;
		magazineReloadTime = 0.15;
		autoReload = 1;
		canLock = 0;
		magazines[]= 
		{
			"DBA_60mm_GPL8_HE_Mag",
			"DBA_60mm_GPL9_SMK_Mag",
			"DBA_60mm_GPL10_ILLUM_Mag",
			"DBA_60mm_GPL8_HE_csw_mag",
			"DBA_60mm_GPL9_SMK_csw_mag",
			"DBA_60mm_GPL10_ILLUM_csw_mag",
		};
		ballisticsComputer = 2;

		class GunParticles {

			class FirstEffect {
				effectName = "MortarFired";
				positionName = "Usti Hlavne";
				directionName = "Konec Hlavne";
			};
		};
		modes[] = {"Single1", "Single2", "Single3", "Burst1", "Burst2", "Burst3"};

		class Single1: Mode_SemiAuto {
			displayName = "Short Charge";
			sounds[] = {"StandardSound"};

			class StandardSound {
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.258925, 1.45, 250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.258925, 1.35, 250};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.000000, 1.35, 20};
			reloadTime = 1.15000;
			artilleryDispersion = 1.80000;
			artilleryCharge = 0.4212;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class Single2: Single1 {
			displayName = "Half Charge";
			artilleryCharge = 0.650100;
		};

		class Single3: Single1 {
			displayName = "Full Charge";
			artilleryCharge = 0.8;
		};

		class Burst1: Mode_Burst {
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst10";
			burst = 4;
			aiBurstTerminable = 1;
			sounds[] = {"StandardSound"};

			class StandardSound {
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.258925, 1.35, 250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.258925, 1.45, 250};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.000000, 1.35, 20};
			soundServo[] = {"", 0.000100, 1.000000};
			soundBurst = 0;
			reloadTime = 1.800000;
			artilleryDispersion = 2.200000;
			artilleryCharge = 0.350000;
			minRange = 60;
			minRangeProbab = 0.500000;
			midRange = 290;
			midRangeProbab = 0.700000;
			maxRange = 665;
			maxRangeProbab = 0.500000;
		};

		class Burst2: Burst1 {
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst20";
			artilleryCharge = 0.700000;
			minRange = 230;
			minRangeProbab = 0.400000;
			midRange = 1175;
			midRangeProbab = 0.600000;
			maxRange = 2660;
			maxRangeProbab = 0.400000;
		};

		class Burst3: Burst1 {
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst30";
			artilleryCharge = 1;
			minRange = 540;
			minRangeProbab = 0.300000;
			midRange = 2355;
			midRangeProbab = 0.400000;
			maxRange = 5500;
			maxRangeProbab = 0.300000;
		};
	};
	class DBA_94mw_PNM15 : CannonCore{
		scope = 1;
		displayname = "PNM-15 Infantry Mortar";
		nameSound = "CannonCore";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[]= {"StandardSound"};

		class StandardSound {
			begin1[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.258925, 0.95, 250};
			begin2[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.258925, 0.93, 250};
			soundBegin[]= {"begin1", 0.500000, "begin2", 0.500000};
		};
		reloadSound[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.000000, 0.95, 20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar", 1.000000, 0.95, 20};
		soundServo[] = {"", 0.000100, 1.000000};
		reloadTime = 1.800000;
		magazineReloadTime = 0.15;
		autoReload = 1;
		canLock = 0;
		magazines[]= 
		{
			"DBA_94mm_GPM15_HE_Mag",
			"DBA_94mm_GPM16_SMK_Mag",
			"DBA_94mm_GPM17_ILLUM_Mag",
			"DBA_94mm_GPM18_AB_Mag",
			"DBA_94mm_GPM15_HE_csw_mag",
			"DBA_94mm_GPM16_SMK_csw_mag",
			"DBA_94mm_GPM17_ILLUM_csw_mag",
			"DBA_94mm_GPM18_AB_csw_mag",
		};
		ballisticsComputer = 2;

		class GunParticles {

			class FirstEffect {
				effectName = "MortarFired";
				positionName = "Usti Hlavne";
				directionName = "Konec Hlavne";
			};
		};
		modes[] = {"Single1", "Single2", "Single3", "Burst1", "Burst2", "Burst3"};

		class Single1: Mode_SemiAuto {
			displayName = "Short Charge";
			sounds[] = {"StandardSound"};

			class StandardSound {
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.258925, 0.95, 250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.258925, 0.95, 250};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.000000, 0.95, 20};
			reloadTime = 1.550000;
			artilleryDispersion = 2.100000;
			artilleryCharge = 0.4212;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class Single2: Single1 {
			displayName = "Half Charge";
			artilleryCharge = 0.6501000;
		};

		class Single3: Single1 {
			displayName = "Full Charge";
			artilleryCharge = 0.80;
		};

		class Burst1: Mode_Burst {
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst10";
			burst = 4;
			aiBurstTerminable = 1;
			sounds[] = {"StandardSound"};

			class StandardSound {
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.258925, 0.95, 250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.258925, 0.95, 250};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.000000, 0.95, 20};
			soundServo[] = {"", 0.000100, 1.000000};
			soundBurst = 0;
			reloadTime = 1.800000;
			artilleryDispersion = 2.200000;
			artilleryCharge = 0.350000;
			minRange = 60;
			minRangeProbab = 0.500000;
			midRange = 290;
			midRangeProbab = 0.700000;
			maxRange = 665;
			maxRangeProbab = 0.500000;
		};

		class Burst2: Burst1 {
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst20";
			artilleryCharge = 0.700000;
			minRange = 230;
			minRangeProbab = 0.400000;
			midRange = 1175;
			midRangeProbab = 0.600000;
			maxRange = 2660;
			maxRangeProbab = 0.400000;
		};

		class Burst3: Burst1 {
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst30";
			artilleryCharge = 1;
			minRange = 540;
			minRangeProbab = 0.300000;
			midRange = 2355;
			midRangeProbab = 0.400000;
			maxRange = 5500;
			maxRangeProbab = 0.300000;
		};
	};
	class DBA_120mw_PNM30 : CannonCore{
		scope = 1;
		displayname = "PNM-30 Heavy Mortar";
		nameSound = "CannonCore";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[]= {"StandardSound"};

		class StandardSound {
			begin1[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.258925, 0.67, 250};
			begin2[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.258925, 0.67, 250};
			soundBegin[]= {"begin1", 0.500000, "begin2", 0.500000};
		};
		reloadSound[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.000000, 0.77, 20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar", 1.000000, 0.77, 20};
		soundServo[] = {"", 0.000100, 1.000000};
		reloadTime = 2.150000;
		magazineReloadTime = 0.15;
		autoReload = 1;
		canLock = 0;
		magazines[]= 
		{
			"DBA_120mm_GPH40_HE",
			"DBA_120mm_GPH42_SMK",
			"DBA_120mm_GPH46_AB",
			"DBA_120mm_GPH40_HE_csw_mag",
			"DBA_120mm_GPH42_SMK_csw_mag",
			"DBA_120mm_GPH46_AB_csw_mag",
		};
		ballisticsComputer = 2;

		class GunParticles {

			class FirstEffect {
				effectName = "MortarFired";
				positionName = "Usti Hlavne";
				directionName = "Konec Hlavne";
			};
		};
		modes[] = {"Single1", "Single2", "Single3", "Burst1", "Burst2", "Burst3"};

		class Single1: Mode_SemiAuto {
			displayName = "Short Charge";
			sounds[] = {"StandardSound"};

			class StandardSound {
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.258925, 0.67, 250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.258925, 0.67, 250};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.000000, 0.77, 20};
			reloadTime = 2.150000;
			artilleryDispersion = 1.650000;
			artilleryCharge = 0.350000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class Single2: Single1 {
			displayName = "Half Charge";
			artilleryCharge = 0.700000;
		};

		class Single3: Single1 {
			displayName = "Full Charge";
			artilleryCharge = 0.85;
		};

		class Burst1: Mode_Burst {
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst10";
			burst = 4;
			aiBurstTerminable = 1;
			sounds[] = {"StandardSound"};

			class StandardSound {
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.258925, 0.67, 250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.258925, 0.67, 250};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.000000, 0.77, 20};
			soundServo[] = {"", 0.000100, 1.000000};
			soundBurst = 0;
			reloadTime = 1.800000;
			artilleryDispersion = 2.200000;
			artilleryCharge = 0.350000;
			minRange = 60;
			minRangeProbab = 0.500000;
			midRange = 290;
			midRangeProbab = 0.700000;
			maxRange = 665;
			maxRangeProbab = 0.500000;
		};

		class Burst2: Burst1 {
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst20";
			artilleryCharge = 0.700000;
			minRange = 230;
			minRangeProbab = 0.400000;
			midRange = 1175;
			midRangeProbab = 0.600000;
			maxRange = 2660;
			maxRangeProbab = 0.400000;
		};

		class Burst3: Burst1 {
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst30";
			artilleryCharge = 1;
			minRange = 540;
			minRangeProbab = 0.300000;
			midRange = 2355;
			midRangeProbab = 0.400000;
			maxRange = 5500;
			maxRangeProbab = 0.300000;
		};
	};
	class DBA_60mw_PNM10_proxy: DBA_60mw_PNM10 {
        magazineReloadTime = 1;
    };
	class DBA_94mw_PNM15_proxy: DBA_94mw_PNM15 {
        magazineReloadTime = 1;
    };
	class DBA_120mw_PNM30_proxy: DBA_120mw_PNM30 {
        magazineReloadTime = 1;
    };
	class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };
    class DBA_PNM10_carry: Launcher_Base_F {
        // displayName, author, model and picture are omitted and up to you
        scope = 2;
        modes[] = {};
		displayname = "PNM-10 Mortar Tube";
		model = "\z\ace\addons\apl\ACE_CSW_Bag.p3d";
        class ACE_CSW {
            type = "weapon"; // Use "weapon" for weapons or "mount" for tripods - see below
            deployTime = 2.5;  // How long it takes to deploy the weapon onto the tripod
            pickupTime = 3;  // How long it takes to disassemble weapon from the tripod
            class assembleTo {
                // What tripod can this weapon deploy onto, and what vehicle will it spawn when it is deployed
                ace_csw_mortarBaseplate = "DBA_60mw_PNM10_Mortar";
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            // One WeaponSlot with a positive value for iconScale forces game to use icon overlay method
            // Required, because the inventory icon has no accessory variants
            class MuzzleSlot {
                iconScale = 0.1;
            };

            // Don't forget to set mass to a reasonable value
            // We use mass in pounds * 10
            mass = 100; // 84 lb / 38 kg
        };
    };
	class DBA_PNM15_carry: Launcher_Base_F {
        // displayName, author, model and picture are omitted and up to you
        scope = 2;
        modes[] = {};
		displayname = "PNM-15 Mortar Tube";
		model = "\z\ace\addons\apl\ACE_CSW_Bag.p3d";
        class ACE_CSW {
            type = "weapon"; // Use "weapon" for weapons or "mount" for tripods - see below
            deployTime = 4;  // How long it takes to deploy the weapon onto the tripod
            pickupTime = 4;  // How long it takes to disassemble weapon from the tripod
            class assembleTo {
                // What tripod can this weapon deploy onto, and what vehicle will it spawn when it is deployed
                ace_csw_mortarBaseplate = "DBA_94mw_PNM15_Mortar";
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            // One WeaponSlot with a positive value for iconScale forces game to use icon overlay method
            // Required, because the inventory icon has no accessory variants
            class MuzzleSlot {
                iconScale = 0.1;
            };

            // Don't forget to set mass to a reasonable value
            // We use mass in pounds * 10
            mass = 350; // 84 lb / 38 kg
        };
    };
	class DBA_PNM30_carry: Launcher_Base_F {
        // displayName, author, model and picture are omitted and up to you
        scope = 2;
        modes[] = {};
		displayname = "PNM-30 Mortar Tube";
		model = "\z\ace\addons\apl\ACE_CSW_Bag.p3d";
        class ACE_CSW {
            type = "weapon"; // Use "weapon" for weapons or "mount" for tripods - see below
            deployTime = 5;  // How long it takes to deploy the weapon onto the tripod
            pickupTime = 6;  // How long it takes to disassemble weapon from the tripod
            class assembleTo {
                // What tripod can this weapon deploy onto, and what vehicle will it spawn when it is deployed
                ace_csw_mortarBaseplate = "DBA_120mw_PNM30_Mortar";
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            // One WeaponSlot with a positive value for iconScale forces game to use icon overlay method
            // Required, because the inventory icon has no accessory variants
            class MuzzleSlot {
                iconScale = 0.1;
            };

            // Don't forget to set mass to a reasonable value
            // We use mass in pounds * 10
            mass = 600; // 84 lb / 38 kg
        };
    };
};
class CfgMagazines{
	class VehicleMagazine;
	class DBA_60mm_GPL8_HE_Mag : VehicleMagazine{
		displayname="GPL-8 High Explosive";
		ammo="DBA_60mm_GPL8_HE";
		displaynamemagazine="60mw GPL-8 HE";
		shortnamemagazine="GPL-8 HE";
		displayNameMFDFormat="HE";
		displayNameShort="HE";
		count=6;
		initspeed=142;
		muzzleImpulseFactor[]= {0.000000, 0.000000};
		tracersevery=1;
	};
	class DBA_60mm_GPL9_SMK_Mag : DBA_60mm_GPL8_HE_Mag{
		displayname="GPL-9 Smoke Shell";
		ammo="DBA_60mm_GPL9_SMK";
		displaynamemagazine="60mw GPL-9 Smoke";
		shortnamemagazine="GPL-9 Smoke";
		displayNameMFDFormat="Smoke";
		displayNameShort="Smoke";
	};
	class DBA_60mm_GPL10_ILLUM_Mag : DBA_60mm_GPL8_HE_Mag{
		displayname="GPL-10 Star Shell";
		ammo="DBA_60mm_GPL10_ILLUM";
		displaynamemagazine="60mw GPL-10 Star Shell";
		shortnamemagazine="GPL-10 Star Shell";
		displayNameMFDFormat="Star Shell";
		displayNameShort="Star Shell";
	};
	class DBA_94mm_GPM15_HE_Mag : VehicleMagazine{
		displayname="GPM-15 High Explosive";
		ammo="DBA_94mm_GPM15_HE";
		displaynamemagazine="94mw GPM-15 HE";
		shortnamemagazine="GPM-15 HE";
		displayNameMFDFormat="HE";
		displayNameShort="HE";
		count=4;
		initspeed=193;
		muzzleImpulseFactor[]= {0.000000, 0.000000};
		tracersevery=1;
	};
	class DBA_94mm_GPM16_SMK_Mag : DBA_94mm_GPM15_HE_Mag{
		displayname="GPM-16 Smoke Shell";
		ammo="DBA_94mm_GPM16_SMK";
		displaynamemagazine="94mw GPM-16 Smoke";
		shortnamemagazine="GPM-16 Smoke";
		displayNameMFDFormat="Smoke";
		displayNameShort="Smoke";
	};
	class DBA_94mm_GPM17_ILLUM_Mag : DBA_94mm_GPM15_HE_Mag{
		displayname="GPM-17 Star Shell";
		ammo="DBA_94mm_GPM17_ILLUM";
		displaynamemagazine="94mw GPM-17 Star Shell";
		shortnamemagazine="GPM-17 Star Shell";
		displayNameMFDFormat="Star Shell";
		displayNameShort="Star Shell";
	};
	class DBA_94mm_GPM18_AB_Mag : DBA_94mm_GPM15_HE_Mag{
		displayname="GPM-18 Airburst Shell";
		ammo="DBA_94mm_GPM18_AB";
		displaynamemagazine="94mw GPM-18 Airburst Shell";
		shortnamemagazine="GPM-18 Airburst";
		displayNameMFDFormat="Airburst";
		displayNameShort="Airburst";
	};
	class DBA_120mm_GPH40_HE_Mag : VehicleMagazine{
		displayname="GPH-40 High Explosive";
		ammo="DBA_120mm_GPH40_HE";
		displaynamemagazine="120mw GPH-40 HE";
		shortnamemagazine="GPH-40 HE";
		displayNameMFDFormat="HE";
		displayNameShort="HE";
		count=2;
		initspeed=211;
		muzzleImpulseFactor[]= {0.000000, 0.000000};
		tracersevery=1;
	};
	class DBA_120mm_GPH42_SMK_Mag: DBA_120mm_GPH40_HE_Mag{
		displayname="GPH-42 Smoke Shell";
		ammo="DBA_120mm_GPH42_SMK";
		displaynamemagazine="120mw GPH-42 Smoke";
		shortnamemagazine="GPH-42 Smoke";
		displayNameMFDFormat="Smoke";
		displayNameShort="Smoke";
	};
	class DBA_120mm_GPH46_AB_Mag : DBA_120mm_GPH40_HE_Mag{
		displayname="GPH-46 Airburst Shell";
		ammo="DBA_120mm_GPH46_AB";
		displaynamemagazine="120mw GPH-46 Airburst Shell";
		shortnamemagazine="GPH-46 Airburst";
		displayNameMFDFormat="Airburst";
		displayNameShort="Airburst";
	};
	class DBA_60mm_GPL8_HE_csw_mag: DBA_60mm_GPL8_HE_Mag {
        scope = 2;
        type = 256;  // Must be 256 to show up in Arsenal
        count = 6;
        model = "\A3\Weapons_F\Ammo\shell.p3d";
        ACE_isBelt = 1; // Enables belt linking for this magazine
    };
	class DBA_60mm_GPL9_SMK_csw_mag: DBA_60mm_GPL9_SMK_Mag {
        scope = 2;
        type = 256;  // Must be 256 to show up in Arsenal
        count = 3;
        model = "\A3\Weapons_F\Ammo\shell.p3d";
        ACE_isBelt = 1; // Enables belt linking for this magazine
    };
	class DBA_60mm_GPL10_ILLUM_csw_mag: DBA_60mm_GPL10_ILLUM_Mag {
        scope = 2;
        type = 256;  // Must be 256 to show up in Arsenal
        count = 3;
        model = "\A3\Weapons_F\Ammo\shell.p3d";
        ACE_isBelt = 1; // Enables belt linking for this magazine
    };
	class DBA_94mm_GPM15_HE_csw_mag: DBA_94mm_GPM15_HE_Mag {
        scope = 2;
        type = 256;  // Must be 256 to show up in Arsenal
        count = 4;
        model = "\A3\Weapons_F\Ammo\shell.p3d";
        ACE_isBelt = 1; // Enables belt linking for this magazine
    };
	class DBA_94mm_GPM16_SMK_csw_mag: DBA_94mm_GPM16_SMK_Mag {
        scope = 2;
        type = 256;  // Must be 256 to show up in Arsenal
        count = 3;
        model = "\A3\Weapons_F\Ammo\shell.p3d";
        ACE_isBelt = 1; // Enables belt linking for this magazine
    };
	class DBA_94mm_GPM17_ILLUM_csw_mag: DBA_94mm_GPM17_ILLUM_Mag {
        scope = 2;
        type = 256;  // Must be 256 to show up in Arsenal
        count = 2;
        model = "\A3\Weapons_F\Ammo\shell.p3d";
        ACE_isBelt = 1; // Enables belt linking for this magazine
    };
	class DBA_94mm_GPM18_AB_csw_mag: DBA_94mm_GPM18_AB_Mag {
        scope = 2;
        type = 256;  // Must be 256 to show up in Arsenal
        count = 3;
        model = "\A3\Weapons_F\Ammo\shell.p3d";
        ACE_isBelt = 1; // Enables belt linking for this magazine
    };
	class DBA_120mm_GPH40_HE_csw_mag: DBA_120mm_GPH40_HE_Mag{
        scope = 2;
        type = 256;  // Must be 256 to show up in Arsenal
        count = 2;
        model = "\A3\Weapons_F\Ammo\shell.p3d";
        ACE_isBelt = 1; // Enables belt linking for this magazine
    };
	class DBA_120mm_GPH42_SMK_csw_mag: DBA_120mm_GPH42_SMK_Mag {
        scope = 2;
        type = 256;  // Must be 256 to show up in Arsenal
        count = 2;
        model = "\A3\Weapons_F\Ammo\shell.p3d";
        ACE_isBelt = 1; // Enables belt linking for this magazine
    };
	class DBA_120mm_GPH46_AB_csw_mag: DBA_120mm_GPH46_AB_Mag {
        scope = 2;
        type = 256;  // Must be 256 to show up in Arsenal
        count = 2;
        model = "\A3\Weapons_F\Ammo\shell.p3d";
        ACE_isBelt = 1; // Enables belt linking for this magazine
    };
};
class CfgAmmo{
	class Sh_155mm_AMOS;
	class FlareCore;
	class ShotDeployBase;
	class DBA_60mm_GPL8_HE : Sh_155mm_AMOS{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 997.9024;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 112;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 125;
		indirectHit = 50;
		indirectHitRange = 10;
		warheadName = "HE";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 75;
		typicalSpeed = 100;
		caliber = 5;
		deflecting = 0;
		explosive = 0.800000;
		cost = 50;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 60;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0;
		sideairFriction = 0.000000;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.511886, 1.3, 1900};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.511886, 1.3, 1900};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.511886, 1.3, 1900};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.511886, 1.3, 1900};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};

		class CamShakeExplode {
			power = 15;
			duration = 2.400000;
			frequency = 10;
			distance = 100.598999;
		};

		class CamShakeHit {
			power = 155;
			duration = 0.800000;
			frequency = 20;
			distance = 1;
		};

		class CamShakeFire {
			power = 1.528440;
			duration = 1.400000;
			frequency = 10;
			distance = 15;
		};

		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_60mm_GPL9_SMK : ShotDeployBase{
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="SmokeShellArty";
		triggerDistance = -1;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		submunitionConeAngle[]= {90, 170};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionInitSpeed = 10;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[]= {0, 0, -5};
		submunitionConeType[]= {"randomupcone", 5};
	};
	class DBA_60mm_GPL10_ILLUM : FlareCore{
		timeToLive = 45;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[]= {30, 60, 120, 180, 240, 300, 360};
		aimAboveDefault = 4;
		triggerTime = -1;
		triggerSpeedCoef = 1;
		lightColor[]={0.950000, 0.950000, 1.000000, 0.500000};
		smokeColor[]= {1.000000, 1.000000, 1.000000, 0.500000};
		intensity= 10000;
	};
	class DBA_94mm_GPM15_HE : Sh_155mm_AMOS{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 7257.472;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 1417.475;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 125;
		indirectHit = 75;
		indirectHitRange = 15;
		warheadName = "HE";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 75;
		typicalSpeed = 100;
		caliber = 5;
		deflecting = 0;
		explosive = 0.800000;
		cost = 50;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 60;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0;
		sideairFriction = 0.000000;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.511886, 0.95, 1900};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.511886, 0.9, 1900};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.511886, 0.925, 1900};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.511886, 0.97, 1900};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};

		class CamShakeExplode {
			power = 15;
			duration = 2.400000;
			frequency = 10;
			distance = 100.598999;
		};

		class CamShakeHit {
			power = 155;
			duration = 0.800000;
			frequency = 20;
			distance = 1;
		};

		class CamShakeFire {
			power = 1.528440;
			duration = 1.400000;
			frequency = 10;
			distance = 15;
		};

		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_94mm_GPM16_SMK : ShotDeployBase{
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="SmokeShellArty";
		triggerDistance = -1;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		submunitionConeAngle[]= {90, 170};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionInitSpeed = 10;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[]= {0, 0, -5};
		submunitionConeType[]= {"randomupcone", 12};
	};
	class DBA_94mm_GPM17_ILLUM : FlareCore{
		timeToLive = 75;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[]= {30, 60, 120, 180, 240, 300, 360};
		aimAboveDefault = 7;
		triggerTime = -1;
		triggerSpeedCoef = 1;
		lightColor[]= {0.950000, 0.950000, 1.000000, 0.500000};
		smokeColor[]= {1.000000, 1.000000, 1.000000, 0.500000};
		intensity= 10000;
		brightness = 100;
	};
	class DBA_94mm_GPM18_AB : Sh_155mm_AMOS{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 7257.472;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 1417.475;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 125;
		indirectHit = 55;
		indirectHitRange = 12;
		triggerDistance = 8;
		warheadName = "HE";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 75;
		typicalSpeed = 100;
		caliber = 5;
		deflecting = 0;
		explosive = 0.800000;
		cost = 50;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 60;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0;
		sideairFriction = 0.000000;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.511886, 1, 1900};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.511886, 1, 1900};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.511886, 1, 1900};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.511886, 1, 1900};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};

		class CamShakeExplode {
			power = 15;
			duration = 2.400000;
			frequency = 10;
			distance = 100.598999;
		};

		class CamShakeHit {
			power = 155;
			duration = 0.800000;
			frequency = 20;
			distance = 1;
		};

		class CamShakeFire {
			power = 1.528440;
			duration = 1.400000;
			frequency = 10;
			distance = 15;
		};

		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_120mm_GPH40_HE : Sh_155mm_AMOS{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 22652.38448;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 7683.84848;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 250;
		indirectHit = 120;
		indirectHitRange = 18;
		warheadName = "HE";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 75;
		typicalSpeed = 100;
		caliber = 5;
		deflecting = 0;
		explosive = 0.800000;
		cost = 50;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 60;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0;
		sideairFriction = 0.000000;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 3.511886, 0.67, 1900};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 3.511886, 0.65, 1900};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 3.511886, 0.60, 1900};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 3.511886, 0.57, 1900};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};

		class CamShakeExplode {
			power = 50;
			duration = 2.400000;
			frequency = 10;
			distance = 125.598999;
		};

		class CamShakeHit {
			power = 155;
			duration = 0.800000;
			frequency = 20;
			distance = 1;
		};

		class CamShakeFire {
			power = 1.528440;
			duration = 1.400000;
			frequency = 10;
			distance = 15;
		};

		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
	class DBA_120mm_GPH42_SMK : ShotDeployBase{
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		submunitionAmmo="SmokeShellArty";
		triggerDistance = -1;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		submunitionConeAngle[]= {90, 170};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionInitSpeed = 10;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[]= {0, 0, -5};
		submunitionConeType[]= {"randomupcone", 20};
	};
	class DBA_120mm_GPH46_AB : Sh_155mm_AMOS{
		ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 22652.38448;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 7683.84848;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_tiny"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
		hit = 125;
		indirectHit = 70;
		indirectHitRange = 15;
		warheadName = "HE";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 75;
		triggerDistance = 10;
		typicalSpeed = 100;
		caliber = 5;
		deflecting = 0;
		explosive = 0.800000;
		cost = 50;
		model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 60;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0;
		sideairFriction = 0.000000;
		soundHit1[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.511886, 0.67, 1900};
		soundHit2[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.511886, 0.67, 1900};
		soundHit3[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.511886, 0.67, 1900};
		soundHit4[]= {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.511886, 0.67, 1900};
		multiSoundHit[]= {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};

		class CamShakeExplode {
			power = 30;
			duration = 2.400000;
			frequency = 10;
			distance = 125.598999;
		};

		class CamShakeHit {
			power = 155;
			duration = 0.800000;
			frequency = 20;
			distance = 1;
		};

		class CamShakeFire {
			power = 1.528440;
			duration = 1.400000;
			frequency = 10;
			distance = 15;
		};

		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
};