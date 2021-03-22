class CfgPatches
{
	class 101st_Aux_Sights
	{
		author="Frisk";
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

	class 101st_Aux_Pistol_A: optic_MRD
	{
		author = "101st Aux & RD501";
		scope = 2;
		displayName = "CQC Sight Aurek";
		picture = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Holo_A.p3d";
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
		author = "Frisk";
		scope = 2;
		displayName = "2x-6x Battlesight Aurek";
		picture = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Holo_A.p3d";
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
		author = "Frisk";
		scope = 2;
		displayName = "2x-6x Battlesight Besh";
		picture = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Holo_B.p3d";
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
		author="Frisk";
		scope=2;
		displayName="2x-6x Battlesight Aurek";

		picture = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Holo_A.p3d";
		
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
		author="Frisk";
		scope=2;
		displayName="2x-6x Battlesight Besh";

		picture = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Holo_B.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
	};
	class DBA_MRCO_A: optic_MRCO
	{
		author="Frisk";
		scope=2;
		displayName="2x-4x Battlesight Aurek";

		picture = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Holo_A.p3d";
		
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
		author="Frisk";
		scope=2;
		displayName="2x-4x Battlesight Besh";

		picture = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Holo_B.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
	};
	class 101st_Aux_Pistol_B: 101st_Aux_Pistol_A
	{
		displayName = "CQC Sight Besh";
		picture = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Holo_A.p3d";
		descriptionShort = "Pistol Scope";
	};
	class DBA_MRCO_A_TI: optic_MRCO
	{
		author="Frisk";
		scope=2;
		displayName="2x-6x LSW Battlesight Aurek";

		picture = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Holo_A.p3d";
		
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
		author="Frisk";
		scope=2;
		displayName="2x-6x LSW Battlesight Besh";

		picture = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Reticle_A_ca.paa";
		model = "101st_Aux_Mod\Addons\Holosights\data\DBA_Pistol_Holo_B.p3d";
		
		descriptionShort="Standard Battle Sight";

		weaponInfoType="RscOptics_sos";
	};
};