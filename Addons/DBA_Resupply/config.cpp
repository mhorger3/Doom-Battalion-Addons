class CfgPatches
{
	class 101st_Aux_Mod_Resupply
	{
		author="Trip";
		name="101st Aux Mod";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] ={};
		weapons[]={};
	};

};
class CBA_Extended_EventHandlers_base;

class cfgVehicles
{
	class House_F;
	class 101st_AmmoBox_Base : House_F
	{
		placement = "vertical";
		mapSize = 1;
		destrType = "DestructNo";
		displayName = "Cargo Ammo Base";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\objects\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Ammo_Crate_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Ammo_Crate.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
		};

		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
	};
	class 101st_MedicalBox_Base : House_F
	{
		placement = "vertical";
		mapSize = 1;
		destrType = "DestructNo";
		displayName = "Cargo Medical Base";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\objects\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Medical_Crate_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\Medical_Crate.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\Handle.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\Handle.rvmat",
		};

		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
	};
	class 101st_ExplosiveBox_Base : House_F
	{
		placement = "vertical";
		mapSize = 1;
		destrType = "DestructNo";
		displayName = "Cargo Explosive Base";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\objects\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Explosive_Crate_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Explosive_Crate.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
		};

		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
	};
	//resupply

	class ACE_Box_Misc;

	class 101st_AmmoBox_F : ACE_Box_Misc
	{
		ACE_maxWeightCarry = 100000;
		ACE_maxWeightDrag = 100000;
		author = "Vulgar";
		class SimpleObject
		{
			eden = 1;
			animate[] =
			{

				{
					"ammo_hide",
					0
				},

				{
					"ammoord_hide",
					1
				},

				{
					"grenades_hide",
					1
				},

				{
					"support_hide",
					1
				}
			};
			hide[] = {};
			verticalOffset = 0.28400001;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		Scope = 2;
		scopecurator = 2;
		displayName = "Doom Company Ammo Supplies Crate";
		icon = "iconCrateAmmo";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Resupply";
		maximumLoad = 10000;
		model = "101st_Aux_Mod\Addons\objects\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Ammo_Crate_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Ammo_Crate.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
		};
		class TransportMagazines
		{
			class xx_101st_City_Killer_Slug
			{
				magazine = "DBA_12gaScatter_Mag_Base";
				count = 4;
			};
			class xx_101st_City_Killer_Buff
			{
				magazine = "DBA_12gaSlug_Mag_Base";
				count = 9;
			};
			class xx_DBA_AT_GL_x2_mag
			{
				magazine = "DBA_AT_GL_x2_mag";
				count = 3;
			};
			class xx_DBA_HE_GL_3x_mag
			{
				magazine = "DBA_HE_GL_x3_mag";
				count = 3;
			};
			class xx_101st_flash_GL_x3_mag
			{
				magazine = "101st_flash_GL_x3_mag";
				count = 3;
			};
			class xx_3Rnd_Smoke_Grenade_shell
			{
				magazine = "3Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class xx_ACE_HuntIR_M203
			{
				magazine = "ACE_HuntIR_M203";
				count = 1;
			};
			class xx_101st_Stun_Long
			{
				magazine = "101st_Stun_Long";
				count = 5;
			};
			class xx_101st_Stun_Short
			{
				magazine = "101st_Stun_Short";
				count = 5;
			};
			class xx_DBA_DC15a_Low_x60_mag
			{
				magazine = "DBA_65_Mag_Base";
				count = 35;
			};
			class xx_DBA_DC15a_Med_x30_mag
			{
				magazine = "DBA_338_Mag_Base";
				count = 15;
			};
			class xx_DBA_DC15a_High_x15_mag
			{
				magazine = "DBA_408_Mag_Base";
				count = 7;
			};
			class xx_DBA_DC15a_LE_x15_mag
			{
				magazine = "DBA_65_Mag_x120";
				count = 15;
			};
			class xx_DBA_DC15a_box_mag_x240_mag
			{
				magazine = "DBA_556_Mag_x60_Green";
				count = 8;
			};
			class xx_DBA_DC15s_x60_mag
			{
				magazine = "DBA_45acp_Mag_x45_Green";
				count = 13;
			};
			class xx_101st_Ion_Mag
			{
				magazine = "DBA_9mm_Mag_x100";
				count = 30;
			};
			class xx_101st_MG_Mag
			{
				magazine = "DBA_762_Mag_x50";
				count = 8;
			};
			class xx_101st_PDW_Enforcer_Mag
			{
				magazine = "DBA_127x99Overcharge_Mag_Base";
				count = 3;
			};
			class xx_101st_Maalras_Ext_Mag
			{
				magazine = "DBA_338_Mag_Base";
				count = 10;
			};
			class xx_DBA_z6_x400_mag
			{
				magazine = "DBA_AntiTankRound_Base";
				count = 3;
			};
			class xx_DBA_556_Mag_x300
			{
				magazine = "DBA_556_Mag_x300";
				count = 10;
			};
			class xx_DBA_762_x75_Green
			{
				magazine = "DBA_762_x75_Green";
				count = 3;
			};
			class xx_DBA_65_Mag_x20
			{
				magazine = "DBA_65_Mag_x20";
				count = 10;
			};

		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class AmmoOrd_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Grenades_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Support_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
	};
	class 101st_Handgun_F : ACE_Box_Misc
	{
		ACE_maxWeightCarry = 100000;
		ACE_maxWeightDrag = 100000;
		author = "Vulgar";
		class SimpleObject
		{
			eden = 1;
			animate[] =
			{

				{
					"ammo_hide",
					0
				},

				{
					"ammoord_hide",
					1
				},

				{
					"grenades_hide",
					1
				},

				{
					"support_hide",
					1
				}
			};
			hide[] = {};
			verticalOffset = 0.28400001;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		Scope = 2;
		scopecurator = 2;
		displayName = "Doom Company Handgun Crate";
		icon = "iconCrateAmmo";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Resupply";
		maximumLoad = 10000; 
		model = "101st_Aux_Mod\Addons\objects\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Ammo_Crate_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Ammo_Crate.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
		};
		class TransportMagazines
		{
			class xx_101st_Revolver_Mag
			{
				magazine = "DBA_45acp_Mag_Base";
				count = 10;
			};
			class xx_DBA_DC17_x20_mag
			{
				magazine = "DBA_12gaSlug_x5_Blue";
				count = 10;
			};
			class xx_101st_PDW_Butcher_Mag
			{
				magazine = "DBA_12gaScatter_x5_Blue";
				count = 10;
			};
			class xx_DBA_DC15_Hammerhead_x9_mag
			{
				magazine = "DBA_9mm_Mag_x25";
				count = 10;
			};
			class xx_DBA_DC15_9mm
			{
				magazine = "DBA_127x33_x7_Yellow";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_101st_Westar35
			{
				weapon = "DBA_Westar35_Mod_0";
				count = 2;
			};
			class _xx_101st_DC_17
			{
				weapon = "DBA_DC17";
				count = 2;
			};
			class _xx_RevolverShot
			{
				weapon = "DBA_Cannok";
				count = 2;
			};
			class _xx_PDW_Defender
			{
				weapon = "DBA_Defender";
				count = 2;
			};
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class AmmoOrd_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Grenades_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Support_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
	};
	class 101st_Launcher_F : ACE_Box_Misc
	{
		ACE_maxWeightCarry = 100000;
		ACE_maxWeightDrag = 100000;
		author = "Dutch";
		class SimpleObject
		{
			eden = 1;
			animate[] =
			{

				{
					"ammo_hide",
					0
				},

				{
					"ammoord_hide",
					1
				},

				{
					"grenades_hide",
					1
				},

				{
					"support_hide",
					1
				}
			};
			hide[] = {};
			verticalOffset = 0.28400001;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		Scope = 2;
		scopecurator = 2;
		displayName = "Doom Company Launcher Crate";
		icon = "iconCrateAmmo";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Resupply";
		maximumLoad = 10000;
		model = "101st_Aux_Mod\Addons\objects\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Explosive_Crate_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Explosive_Crate.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
		};
		class TransportMagazines
		{
			class xx_101st_Chaingun_Mag
			{
				magazine = "101st_Chaingun_Mag";
				count = 2;
			};
			class xx_101st_AA_Mag
			{
				magazine = "101st_AA_Mag";
				count = 2;
			};
			class xx_101st_AP_Mag
			{
				magazine = "101st_AP_Mag";
				count = 2;
			};
			class xx_101st_AT_Mag
			{
				magazine = "101st_AT_Mag";
				count = 2;
			};
			class xx_101st_RPS6_HEAA
			{
				magazine = "101st_RPS6_HEAA";
				count = 7;
			};
			class xx_101st_AA_Mag
			{
				magazine = "101st_RPS6_HEDP";
				count = 3;
			};
			class xx_DBA_RPS_AT_x1_mag
			{
				magazine = "DBA_RPS_AT_x1_mag";
				count = 3;
			};
			class xx_DBA_RPS_AA_x1_mag
			{
				magazine = "DBA_RPS_AA_x1_mag";
				count = 3;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class AmmoOrd_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Grenades_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Support_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
	};
	class 101st_Medical_F : ACE_Box_Misc
	{
		ACE_maxWeightCarry = 100000;
		ACE_maxWeightDrag = 100000;
		author = "Dutch";
		class SimpleObject
		{
			eden = 1;
			animate[] =
			{

				{
					"ammo_hide",
					0
				},

				{
					"ammoord_hide",
					1
				},

				{
					"grenades_hide",
					1
				},

				{
					"support_hide",
					1
				}
			};
			hide[] = {};
			verticalOffset = 0.28400001;
			verticalOffsetWorld = 0;
			init = "''";
		};
		model = "101st_Aux_Mod\Addons\objects\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Medical_Crate_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Medical_Crate.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		Scope = 2;
		scopecurator = 2;
		displayName = "Doom Company Medical Crate";
		icon = "iconCrateAmmo";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Resupply";
		maximumLoad = 10000;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 100;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 100;
			};
			class _xx_ACE_quickclot
			{
				name = "ACE_quickclot";
				count = 50;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 30;
			};
			class _xx_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 30;
			};
			class _xx_ACE_plasmaIV_500
			{
				name = "ACE_plasmaIV_500";
				count = 30;
			};
			class _xx_ACE_surgicalKit
			{
				name = "ACE_surgicalKit";
				count = 3;
			};
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class AmmoOrd_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Grenades_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Support_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
	};
	class 101st_Explosive_F : ACE_Box_Misc
	{
		ACE_maxWeightCarry = 100000;
		ACE_maxWeightDrag = 100000;
		author = "Dutch";
		class SimpleObject
		{
			eden = 1;
			animate[] =
			{

				{
					"ammo_hide",
					0
				},

				{
					"ammoord_hide",
					1
				},

				{
					"grenades_hide",
					1
				},

				{
					"support_hide",
					1
				}
			};
			hide[] = {};
			verticalOffset = 0.28400001;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		Scope = 2;
		scopecurator = 2;
		displayName = "Doom Company Explosives Crate";
		icon = "iconCrateAmmo";
		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Resupply";
		maximumLoad = 10000; 
		model = "101st_Aux_Mod\Addons\objects\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Explosive_Crate_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\objects\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Explosive_Crate.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\objects\ObjectRVMAT\CargoBox\Handle.rvmat",
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_SmokeShell
			{
				name = "SmokeShell";
				count = 10;
			};
			class _xx_SmokeShellOrange
			{
				name = "SmokeShellOrange";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				name = "SmokeShellGreen";
				count = 5;
			};
			class _xx_SmokeShellBlue
			{
				name = "SmokeShellBlue";
				count = 5;
			};
			class _xx_SmokeShellPurple
			{
				name = "SmokeShellPurple";
				count = 3;
			};
			class _xx_APERSMine_Range_Mag
			{
				name = "APERSMine_Range_Mag";
				count = 2;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				name = "APERSTripMine_Wire_Mag";
				count = 2;
			};
			class _xx_C12_Remote_Mag
			{
				name = "C12_Remote_Mag";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name = "DemoCharge_Remote_Mag";
				count = 4;
			};
			class _xx_APERSMineDispenser_Mag
			{
				name = "APERSMineDispenser_Mag";
				count = 2;
			};
			class _xx_TermMineC_Mag
			{
				name = "TermMineC_Mag";
				count = 2;
			};
			class _xx_TermMineB_Mag
			{
				name = "TermMineB_Mag";
				count = 2;
			};
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class AmmoOrd_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Grenades_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Support_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
	};
};
