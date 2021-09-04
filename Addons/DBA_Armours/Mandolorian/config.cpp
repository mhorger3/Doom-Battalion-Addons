#include "basicdefines_A3.hpp"
class DefaultEventhandlers;

class CfgPatches
{
	class DBA_Mandolorian
	{
		units[] = { "DBA_Mandolorian" };
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Characters_F" };
	};
};

class UniformSlotInfo;

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};

	class SoldierWB: CAManBase
	{
		threat[] = {1, 0.1, 0.1};
	};

	//Base class for BLUFOR soldiers
	class DBA_Mandolorian: SoldierWB
	{
		faceType = Man_A3; /// this soldier is going to use standard faces
		side = 1; /// that means BLUFOR
		faction = BLU_F; /// Standard NATO faction
		genericNames = "NATOMen"; /// Standard names for lads of NATO (and European civils)
		vehicleClass = Men; /// Should be listed under Men

		scope = 0; /// base class should not be visible in editor
		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat", 			/// what material is changed
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",	/// how does the material look like in damage 0.5 and more
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",	/// how does the material look like while the part has damage 1

				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",			/// next materials are used through personality of the soldier
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};

		model 			= "101st_Aux_Mod\Addons\DBA_Armours\Mandolorian\DBA_Mandolorian.p3d"; /// path to model
		modelSides[] 	= {3, 1}; 				/// what sides could use this uniform, means civilians and BLUFOR can use it
		nakedUniform 	= "U_BasicBody";		/// what "uniform" does this soldier use without any other uniform
		uniformClass 	= "U_Test_uniform";		/// standard uniform used by this soldier, there is a special one defined later
		camouflage		= 1.4; 					/// how easy is to spot soldier -> bigger means better spotable, used by uniform

		class UniformInfo /// defines allowed slots of the uniform
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo {slotType = NVG_SLOT; };
				class Scuba: UniformSlotInfo {slotType = SCUBA_SLOT;};
				class Googles: UniformSlotInfo {slotType = GOGGLE_SLOT;};
				class Headgear: UniformSlotInfo {slotType = HEADGEAR_SLOT;};
			};
		};

		class HitPoints
		{
			class HitFace
			{
				armor               = 1; // coefficient of the total armor defined below for the whole object
				material            = -1; // damage material (-1 means "unused")
				name                = "face_hub"; // selection name from hit points LOD in object
				passThrough         = 0.1; // coefficient defining how much damage will pass into total damage when this hit point is damaged
				radius              = 0.08; // size of the hit point sphere, this is how it works: https://community.bistudio.com/wiki/Arma_3_Damage_Description
				explosionShielding  = 0.1; // multiplier of explosive damage (parameter: explosive > 0 in ammunition type)
				minimalHit          = 0.01; // minimal damage value that can be applied, damage below this threshold is ignored
			};
			class HitNeck: HitFace
			{
				armor				= 1;
				material			= -1;
				name				= "neck";
				passThrough			= 0.1;
				radius				= 0.1;
				explosionShielding	= 0.5;
				minimalHit			= 0.01;
			};
			class HitHead: HitNeck
			{
				armor				= 1;
				material			= -1;
				name				= "head";
				passThrough			= 0.1;
				radius				= 0.2;
				explosionShielding	= 0.5;
				minimalHit			= 0.01;
				depends				= "HitFace max HitNeck"; // returns the greater of HitFace and HitNeck
			};
			class HitPelvis
			{
				armor				= 1;
				material			= -1;
				name				= "pelvis";
				passThrough			= 0.1;
				radius				= 0.2;
				explosionShielding	= 1;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor				= 1;
				material			= -1;
				name				= "spine1";
				passThrough			= 0.1;
				radius				= 0.15;
				explosionShielding	= 1;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor				= 1;
				material			= -1;
				name				= "spine2";
				passThrough			= 0.1;
				radius				= 0.15;
				explosionShielding  = 6;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor				= 1;
				material			= -1;
				name				= "spine3";
				passThrough			= 0.1;
				radius				= 0.15;
				explosionShielding	= 6;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitBody: HitChest
			{
				armor				= 1000;
				material			= -1;
				name				= "body";
				passThrough			= 0.1;
				radius				= 0.16;
				explosionShielding	= 6;
				visual				= "injury_body";
				minimalHit			= 0.01;
				depends				= "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; // depends work only for hit points defined in inheritance chain
			};
			class HitArms
			{
				armor				= 1;
				material			= -1;
				name				= "arms";
				passThrough			= 1;
				radius				= 0.1;
				explosionShielding	= 1;
				visual				= "injury_hands";
				minimalHit			= 0.01;
			};
			class HitHands: HitArms
			{
				armor				= 1;
				material			= -1;
				name				= "hands";
				passThrough			= 1;
				radius				= 0.1;
				explosionShielding  = 1;
				visual				= "injury_hands";
				minimalHit			= 0.01;
				depends				= "HitArms";
			};
			class HitLegs
			{
				armor				= 1;
				material			= -1;
				name				= "legs";
				passThrough			= 1;
				radius				= 0.12;
				explosionShielding  = 1;
				visual				= "injury_legs";
				minimalHit			= 0.01;
			};
		};

		armor					= 2; // keep constant among various soldiers so that the hit points armor coefficients remains on the same scale
		armorStructural			= 0.4; // divide all damage taken to total hit point, either directly or through hit point passThrough coefficient, must be adjusted for each model to achieve consistent total damage results
		explosionShielding		= 0.04; // for consistent explosive damage after adjusting = ( armorStructural / 10 )
		minTotalDamageThreshold	= 0.001; // minimalHit for total damage
		impactDamageMultiplier	= 0.5; // multiplier for falling damage

		hiddenSelections[] = {"Camo", "insiginia"}; /// selection defined in sections of model that may have texture and materials changed by setObjectTexture or next parameter
		hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\basicbody_grey_co.paa"}; /// what texture does this soldier use for camo selection
		hideProxySelections[] = {"ghillie_hide"}; /// names of selections hidden on proxies (used in vest in this case, see overlaySelectionsInfo[])

		weapons[] = {Test_weapon_01_holo_pointer_F, Throw, Put}; /// we have a sample weapon, why not use it? Throw and put weapons are required for grenades/mines
		respawnWeapons[] = {Test_weapon_01_holo_pointer_F, Throw, Put}; /// should be the same as previous most of the time
		Items[] = {FirstAidKit}; /// one First aid kit is good to start with
		RespawnItems[] = {FirstAidKit};
		magazines[] = {30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, HandGrenade, HandGrenade};
		respawnMagazines[] = {30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, HandGrenade, HandGrenade};
		linkedItems[] = {V_Test_Vest, H_Test_Headgear, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles}; /// items directly in inventory slots
		respawnLinkedItems[] = {V_Test_Vest, H_Test_Headgear, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};

	class DBA_Mandolorian_F : DBA_Mandolorian /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName = "Test Soldier"; /// what's displayed in editor or on cursor over
		class EventHandlers;
	};

	class DBA_Mandolorian_02_F: DBA_Mandolorian_F
	{
		displayName = "Test Solder (random headgear and facewear)";
		headgearList[] =
		{
			/* [headgearClass1, probability1, headgearClass2, probability2, ...] */
			"", 0.1, // Empty array means no headgear nor face wear
			"H_Test_Headgear_2", // Our test headgear, defined in CfgHeadegar.hpp
			"H_FakeHeadgear", 0.9, // In this case, there is no headgear but there is a face wear
			"H_HelmetB_light", 0.6,
			"H_Booniehat_khk_hs", 0.4,
			"H_HelmetIA_net", 0.4,
			"H_HelmetIA_camo", 0.4,
			"H_HelmetB_grass", 0.4
		};
		class EventHandlers: EventHandlers
		{
			// Documentation: https://community.bistudio.com/wiki/BIS_fnc_unitHeadgear
			// Args: Units, [] (headgear pool), [] (face wear pool)
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};

	// Soldier with a randomized headgear only
	class DBA_Mandolorian_03_F : DBA_Mandolorian_02_F
	{
		displayName = "Test Solder (random headgear only)";
		headgearList[] =
		{
			"H_HelmetIA", 0.4,
            "H_HelmetIA_net", 0.4,
            "H_HelmetIA_camo", 0.4
		};
		class EventHandlers: EventHandlers
		{
			// Args: Units, [] (headgear pool), false (face wear pool)
			init = "if (local (_this select 0)) then {[(_this select 0), [], false] call BIS_fnc_unitHeadgear;};";
		};
	};

	// Solider with a randomized face wear but no headgear
	class DBA_Mandolorian_04_F : DBA_Mandolorian_02_F
	{
		// Same as the others, except for the headgear which is H_Test_Headgear_Fake, declared in CfgHeadegar.hpp
		linkedItems[] = {V_Test_Vest, H_Test_Headgear_Fake, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles}; /// items directly in inventory slots
		class EventHandlers: EventHandlers
		{
			// Args: Units, [] (headgear pool), [] (face wear pool)
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
};