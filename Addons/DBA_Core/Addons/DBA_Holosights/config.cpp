class CfgPatches
{
	class 101st_Aux_Sights
	{
		author="Dutch";
		name="101st Aux Mod Holosights";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class cfgWeapons
{
	class ItemCore;
	class optic_MRD: ItemCore
	{
		class ItemInfo;
	};
	class optic_MRCO: ItemCore
	{
		class ItemInfo;
	};
	class optic_Hamr: ItemCore
	{
		class ItemInfo;
	};
	class optic_lrps : ItemCore
	{
		class ItemInfo;
	};

	class 101st_Aux_Pistol_A: optic_MRD
	{
		author = "Dutch";
		scope = 2;
		displayName = "CQC Sight Aurek";
		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_A.p3d";
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
	/*class DBA_HAMR_A: optic_Hamr
	{
		author = "Dutch";
		scope = 2;
		displayName = "2x-6x Battlesight Aurek";
		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_A.p3d";
		descriptionShort = "HAMR SR 2-6x Scope";
		weaponInfoType = "RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			//modelOptics = "RD501_Weapons\_acc\data\rd501_hamr_scope_1";
			class OpticsModes
			{
				class Hamr2Collimator
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"Default"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
				class Hamr2Scope
				{
					modelOptics="\A3\Weapons_f\acc\reticle_nightstalker_F";
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					// opticsZoomMin=0.025; //x10
					// opticsZoomMax=0.0625; //x4
					opticsZoomMin = "0.25/6";
					opticsZoomMax = "0.25/2";
					opticsZoomInit = "0.25/2";
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
		inertia = 0.1;
	};
	class DBA_HAMR_B: optic_Hamr
	{
		author = "Dutch";
		scope = 2;
		displayName = "2x-6x Battlesight Besh";
		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_B.p3d";
		descriptionShort = "HAMR SR 2-6x Scope";
		weaponInfoType = "RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			//modelOptics = "RD501_Weapons\_acc\data\rd501_hamr_scope_1";
			class OpticsModes
			{
				class Hamr2Collimator
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"Default"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
				class Hamr2Scope
				{
					modelOptics="\A3\Weapons_f\acc\reticle_nightstalker_F";
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					// opticsZoomMin=0.025; //x10
					// opticsZoomMax=0.0625; //x4
					opticsZoomMin = "0.25/6";
					opticsZoomMax = "0.25/2";
					opticsZoomInit = "0.25/2";
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
		};
		inertia = 0.1;
	};*/ //idk why these are broken, rebuilding from scratch
	class DBA_HAMR_A: optic_MRCO
	{
		author="Dutch";
		scope=2;
		displayName="2x-6x Battlesight Aurek";

		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_A.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			class OpticsModes
			{
				class MRCOcq
				{
					modelOptics="\A3\Weapons_F\empty";
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
				class MRCOscope
				{
					modelOptics="\A3\Weapons_f\acc\reticle_nightstalker_F";
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					// opticsZoomMin=0.025; //x10
					// opticsZoomMax=0.0625; //x4
					opticsZoomMin = "0.25/6";
					opticsZoomMax = "0.25/2";
					opticsZoomInit = "0.25/2";
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};	
			};
		};
		inertia=0.1;
	};
	class DBA_HAMR_B: DBA_HAMR_A
	{
		author="Dutch";
		scope=2;
		displayName="2x-6x Battlesight Besh";

		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_B.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
	};
	class DBA_MRCO_A: optic_MRCO
	{
		author="Dutch";
		scope=2;
		displayName="2x-4x Battlesight Aurek";

		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_A.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			class OpticsModes
			{
				class MRCOcq
				{
					modelOptics="\A3\Weapons_F\empty";
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
				class MRCOscope
				{
					modelOptics="\A3\Weapons_f\acc\reticle_nightstalker_F";
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					// opticsZoomMin=0.025; //x10
					// opticsZoomMax=0.0625; //x4
					opticsZoomMin = "0.25/4";
					opticsZoomMax = "0.25/2";
					opticsZoomInit = "0.25/2";
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				
			};
		};
		inertia=0.1;
	};
	class DBA_MRCO_B: DBA_MRCO_A
	{
		author="Dutch";
		scope=2;
		displayName="2x-4x Battlesight Besh";

		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_B.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
	};
	class 101st_Aux_Pistol_B: 101st_Aux_Pistol_A
	{
		displayName = "CQC Sight Besh";
		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_A.p3d";
		descriptionShort = "Pistol Scope";
	};
	class DBA_MRCO_A_TI: optic_MRCO
	{
		author="Dutch";
		scope=2;
		displayName="2x-6x LSW Battlesight Aurek";

		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_A.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			class OpticsModes
			{
				class MRCOcq
				{
					modelOptics="\A3\Weapons_F\empty";
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
				class MRCOscope
				{
					modelOptics="\A3\Weapons_f\acc\reticle_nightstalker_F";
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					// opticsZoomMin=0.025; //x10
					// opticsZoomMax=0.0625; //x4
					opticsZoomMin = "0.25/6";
					opticsZoomMax = "0.25/2";
					opticsZoomInit = "0.25/2";
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={5,6};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				
			};
		};
		inertia=0.1;
	};
	class DBA_MRCO_B_TI: DBA_MRCO_A_TI
	{
		author="Dutch";
		scope=2;
		displayName="2x-6x LSW Battlesight Besh";

		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_B.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
	};
	// Duplicate from the previous scope for mod0 nerf, unknown if used elsewhere so nerf here
	class DBA_MRCO_A_TI_2x4 : optic_MRCO
	{
		author = "Dutch";
		scope = 2;
		displayName = "2x-4x LSW Battlesight Aurek";

		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_A.p3d";

		descriptionShort = "Standard Battle Sight";

		weaponInfoType = "RscOptics_sos";
		class ItemInfo : ItemInfo
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			class OpticsModes
			{
				class MRCOcq
				{
					modelOptics = "\A3\Weapons_F\empty";
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] =
					{
						"Default"
					};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
				class MRCOscope
				{
					modelOptics = "\A3\Weapons_f\acc\reticle_nightstalker_F";
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] =
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					// opticsZoomMin=0.025; //x10
					// opticsZoomMax=0.0625; //x4
					opticsZoomMin = "0.25/4";
					opticsZoomMax = "0.25/2";
					opticsZoomInit = "0.25/2";
					discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "eye";
					visionMode[] =
					{
						"Normal",
						"NVG"
					};
					thermalMode[] = { 5,6 };
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};

			};
		};
		inertia = 0.1;
	};
	class DBA_MRCO_B_TI_2x4 : DBA_MRCO_A_TI_2x4
	{
		author = "Dutch";
		scope = 2;
		displayName = "2x-4x LSW Battlesight Besh";

		picture = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "DBA_Core\Addons\DBA_Holosights\data\DBA_Pistol_Holo_B.p3d";

		descriptionShort = "Standard Battle Sight";

		weaponInfoType = "RscOptics_sos";
	};
	class DBA_ZILLO_SCOPE : optic_lrps
	{
		Author = "Vulgar";
		Scope = 2;
		displayName = "Zillo Scope";
		class ItemInfo : ItemInfo
		{
			allowedSlots[] = { 801,701,901 };
			mass = 16;
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			mountAction = "MountOptic";
			muzzleEnd = "konec hlavne";
			muzzlePos = "usti hlavne";
			optics = 1;
			opticType = 2;
			scope = 0;
			type = 201;
			unmountAction = "DismountOptic";
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			zeroingSound[] = { "A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_plastic",0.316228,1,5 };
			class OpticsModes
			{
				class snip
				{
					cameraDir = "";
					discreteDistance[] = { 100 };
					discreteDistanceInitIndex = 0;
					discretefov[] = { 0.045,0.011 };
					discreteInitIndex = 0;
					distanceZoomMax = 2400;
					distanceZoomMin = 300;
					memoryPointCamera = "opticView";
					modelOptics[] = { "\A3\Weapons_F\acc\reticle_lrps_F","\A3\Weapons_F\acc\reticle_lrps_z_F" };
					opticsDisablePeripherialVision = 1;
					opticsDisplayName = "WFOV";
					opticsFlare = 1;
					opticsID = 1;
					opticsPPEffects[] = { "OpticsCHAbera1","OpticsBlur1" };
					opticsZoomInit = 0.045;
					opticsZoomMax = 0.045;
					opticsZoomMin = 0.011;
					useModelOptics = 1;
					visionMode[] =
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
		descriptionShort = "Standard Zillo Sight";
	};
};
