class CfgPatches
{
	class 101st_Aux_Mod_Resupply
	{
		author = "Trip";
		name = "101st Aux Mod";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] =
		{
			"DBA_AmmoBox_Base",
			"DBA_AmmoBox_F",
			"DBA_AmmoBox_Handgun_F",
			"DBA_AmmoBox_Launcher_F",
			"DBA_AmmoBox_Medical_F",
			"DBA_AmmoBox_Explosive_F",
			"DBA_AmmoBox_Repair_F",
		};
		weapons[] = {};
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
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Ammo_Crate_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Ammo_Crate.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Handle.rvmat",
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
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Medical_Crate_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\Medical_Crate.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\Handle.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\Handle.rvmat",
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
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Explosive_Crate_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Explosive_Crate.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Handle.rvmat",
		};

		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
	};
	//resupply

	class ACE_Box_Misc;
	class DBA_AmmoBox_Base : ACE_Box_Misc
	{
		scope = 2;
		scopeCurator = 2;

		displayName = "101st Resupply Box (Empty)";

		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Ammo_Crate_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Ammo_Crate.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Handle.rvmat",
		};

		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		maximumload = 10000;

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class DBA_AmmoBox_F : DBA_AmmoBox_Base
	{
		scope = 2;
		scopeCurator = 2;

		displayName = "101st Resupply Box (Primary)";

		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Ammo_Crate_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
		};

		class TransportWeapons {};
		class TransportMagazines
		{
			class DBA_DC15A_Mag
			{
				magazine = "DBA_DC15A_Mag";
				count = 8;
			};
			class DBA_DC15x_Mag
			{
				magazine = "DBA_DC15x_Mag";
				count = 8;
			};
			class DBA_DC15ALE_Mag
			{
				magazine = "DBA_DC15ALE_Mag";
				count = 15;
			};
			class DBA_DC15AMod0_Mag
			{
				magazine = "DBA_DC15AMod0_Mag";
				count = 7;
			};
			class DBA_DC15C_Mag
			{
				magazine = "DBA_DC15C_Mag";
				count = 15;
			};
			class DBA_DC15C_x45_Mag
			{
				magazine = "DBA_DC15C_x45_Mag";
				count = 5;
			};
			class DBA_DC15BR_Mag
			{
				magazine = "DBA_DC15BR_Mag";
				count = 5;
			};
			class DBA_Z6_Mag
			{
				magazine = "DBA_Z6_Mag";
				count = 5;
			};
			class DBA_Kathhound_Mag
			{
				magazine = "DBA_Kathhound_Mag";
				count = 5;
			};
			class DBA_Boma_Slug_Mag
			{
				magazine = "DBA_Boma_Slug_Mag";
				count = 5;
			};
			class DBA_Boma_Scatter_Mag
			{
				magazine = "DBA_Boma_Scatter_Mag";
				count = 5;
			};
			class DBA_Zakkeg_Mag
			{
				magazine = "DBA_Zakkeg_Mag";
				count = 5;
			};
			class DBA_Maalras_Mag
			{
				magazine = "DBA_Maalras_Mag";
				count = 5;
			};
			class DBA_Enforcer_Mag
			{
				magazine = "DBA_Enforcer_Mag";
				count = 5;
			};
			class DBA_Zillo_Mag
			{
				magazine = "DBA_Zillo_Mag";
				count = 5;
			};
			class DBA_ZilloEMP_Mag
			{
				magazine = "DBA_ZilloEMP_Mag";
				count = 5;
			};
			class DBA_Gundark_Mag
			{
				magazine = "DBA_Gundark_Mag";
				count = 5;
			};
			class DBA_Verpine_Mag
			{
				magazine = "DBA_Verpine_Mag";
				count = 5;
			}
			class DBA_Billo_Mag
			{
				magazine = "DBA_Billo_Mag";
				count = 5;
			}
			class DBA_GundarkOvercharge_Mag
			{
				magazine = "DBA_GundarkOvercharge_Mag";
				count = 5;
			};
			class DBA_Valken_Mag
			{
				magazine = "DBA_Valken_Mag";
				count = 5;
			};
			class DBA_AP_GL_x2_mag
			{
				magazine = "DBA_AP_GL_x2_mag";
				count = 5;
			};
			class DBA_HE_GL_x3_mag
			{
				magazine = "DBA_HE_GL_x3_mag";
				count = 5;
			};
			class DBA_40mm_Blue_x3_mag
			{
				magazine = "DBA_40mm_Blue_x3_mag";
				count = 5;
			};
			class DBA_40mm_Blue_x3_mag
			{
				magazine = "DBA_40mm_Blue_x3_mag";
				count = 5;
			};
			class DBA_40mm_Cyan_x3_mag
			{
				magazine = "DBA_40mm_Cyan_x3_mag";
				count = 5;
			};
			class DBA_40mm_Green_x3_mag
			{
				magazine = "DBA_40mm_Green_x3_mag";
				count = 5;
			};
			class DBA_40mm_CIR_x3_mag
			{
				magazine = "DBA_40mm_CIR_x3_mag";
				count = 5;
			};
			class DBA_40mm_Purple_x3_mag
			{
				magazine = "DBA_40mm_Purple_x3_mag";
				count = 5;
			};
			class DBA_40mm_Red_x3_mag
			{
				magazine = "DBA_40mm_Red_x3_mag";
				count = 5;
			};
			class DBA_40mm_white_x3_mag
			{
				magazine = "DBA_40mm_white_x3_mag";
				count = 5;
			};
			class DBA_40mm_Yellow_x3_mag
			{
				magazine = "DBA_40mm_Yellow_x3_mag";
				count = 5;
			};
			class ACE_HuntIR_M203
			{
				magazine = "ACE_HuntIR_M203";
				count = 9;
			};
			class 3Rnd_SmokeYellow_Grenade_shell
			{
				magazine = "3Rnd_SmokeYellow_Grenade_shell";
				count = 5;
			};
			class 3Rnd_SmokeWhite_Grenade_shell
			{
				magazine = "3Rnd_SmokeWhite_Grenade_shell";
				count = 5;
			};
			class 3Rnd_SmokeRed_Grenade_shell
			{
				magazine = "3Rnd_SmokeRed_Grenade_shell";
				count = 5;
			};
			class 3Rnd_SmokePurple_Grenade_shell
			{
				magazine = "3Rnd_SmokePurple_Grenade_shell";
				count = 5;
			};
			class 3Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "3Rnd_SmokeOrange_Grenade_shell";
				count = 5;
			};
			class 3Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "3Rnd_SmokeGreen_Grenade_shell";
				count = 5;
			};
			class 3Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "3Rnd_SmokeBlue_Grenade_shell";
				count = 5;
			};

		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class DBA_AmmoBox_Handgun_F : DBA_AmmoBox_Base
	{
		scope = 2;
		scopeCurator = 2;

		displayName = "101st Ammo Box (Secondary)";

		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Ammo_Crate_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
		};

		class TransportMagazines
		{
			class DBA_DC17_Mag
			{
				magazine = "DBA_DC17_Mag";
				count = 10;
			};
			class DBA_Cannok_Slug_Mag
			{
				magazine = "DBA_Cannok_Slug_Mag";
				count = 10;
			};
			class DBA_Cannok_Scatter_Mag
			{
				magazine = "DBA_Cannok_Scatter_Mag";
				count = 10;
			};
			class DBA_40mm_Blue_x1_mag
			{
				magazine = "DBA_40mm_Blue_x1_mag";
				count = 10;
			};
			class DBA_40mm_Cyan_x1_mag
			{
				magazine = "DBA_40mm_Cyan_x1_mag";
				count = 10;
			};
			class DBA_40mm_Green_x1_mag
			{
				magazine = "DBA_40mm_Green_x1_mag";
				count = 10;
			}
			class DBA_40mm_CIR_x1_mag
			{
				magazine = "DBA_40mm_CIR_x1_mag";
				count = 10;
			};
			class DBA_40mm_Purple_x1_mag
			{
				magazine = "DBA_40mm_Purple_x1_mag";
				count = 10;
			};
			class DBA_40mm_Red_x1_mag
			{
				magazine = "DBA_40mm_Red_x1_mag";
				count = 10;
			};
			class DBA_40mm_white_x1_mag
			{
				magazine = "DBA_40mm_white_x1_mag";
				count = 10;
			};
			class DBA_40mm_Yellow_x1_mag
			{
				magazine = "DBA_40mm_Yellow_x1_mag";
				count = 10;
			};
			class 1Rnd_SmokeYellow_Grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 10;
			}
				class 1Rnd_SmokeWhite_Grenade_shell
			{
				magazine = "1Rnd_SmokeWhite_Grenade_shell";
				count = 10;
			}
				class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 10;
			};
			class 1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 10;
			};
			class 1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 10;
			};
			class 1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 10;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 10;
			};
			class DBA_Defender_Mag
			{
				magazine = "DBA_Defender_Mag";
				count = 10;
			}
			class DBA_DuelDefender_Mag
			{
				magazine = "DBA_DuelDefender_Mag";
				count = 10;
			};
			class DBA_Mag_ORBITAL
			{
				magazine = "DBA_Mag_ORBITAL";
				count = 10;
			};
			class DBA_HammerHead_Mag
			{
				magazine = "DBA_HammerHead_Mag";
				count = 10;
			};
			class DBA_DuelHammerHead_Mag
			{
				magazine = "DBA_DuelHammerHead_Mag";
				count = 10;
			}
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class DBA_AmmoBox_Launcher_F : DBA_AmmoBox_Base
	{
		scope = 2;
		scopeCurator = 2;

		displayName = "101st Resupply Box (Launcher)";

		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Explosive_Crate_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
		};

		class TransportMagazines
		{
			class DBA_25mm_PL15SN_x1000_mag
			{
				magazine = "DBA_25mm_PL15SN_x1000_mag";
				count = 2;
			};
			class DBA_180mm_Flash_x1_mag
			{
				magazine = "DBA_180mm_Flash_x1_mag";
				count = 2;
			};
			class DBA_90mm_IK55_HEAT_x1_mag
			{
				magazine = "DBA_90mm_IK55_HEAT_x1_mag";
				count = 2;
			};
			class DBA_90mm_IK55T_THEAT_x1_mag
			{
				magazine = "DBA_90mm_IK55T_THEAT_x1_mag";
				count = 5;
			};
			class DBA_90mm_IK60_HEP_x1_mag
			{
				magazine = "DBA_90mm_IK60_HEP_x1_mag";
				count = 10;
			};
			class DBA_90mm_IK40_FRAG_x1_mag
			{
				magazine = "DBA_90mm_IK40_FRAG_x1_mag";
				count = 10;
			};
		};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class DBA_AmmoBox_Medical_F : DBA_AmmoBox_Base
	{
		scope = 2;
		scopeCurator = 2;

		displayName = "101st Resupply Box (Medical)";

		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Medical_Crate_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
		};

		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name = "DBA_Medical_Actibandage";
				count = 100;
			};
			class _xx_ACE_elasticBandage
			{
				name = "DBA_Medical_Spray_Bandage";
				count = 100;
			};
			class _xx_ACE_quickclot
			{
				name = "DBA_Medical_Dermaseal_Patch";
				count = 50;
			};
			class _xx_DBA_morphine
			{
				name = "DBA_Medical_Comaren";
				count = 10;
			};
			class _xx_DBA_epinephrine
			{
				name = "DBA_Medical_Cordrazine";
				count = 30;
			};
			class _xx_DBA_Adenosine
			{
				name = "ACE_adenosine";
				count = 30;
			};
			class _xx_DBA_Symoxin
			{
				name = "DBA_Medical_Symoxin";
				count = 30;
			};
			class _xx_ACE_plasmaIV_250
			{
				name = "ACE_plasmaIV_250";
				count = 10;
			};
			class _xx_ACE_plasmaIV_500
			{
				name = "ACE_plasmaIV_500";
				count = 30;
			};
			class _xx_ACE_plasmaIV_1000
			{
				name = "ACE_plasmaIV_1000";
				count = 10;
			};
			class _xx_ACE_surgicalKit
			{
				name = "ACE_surgicalKit";
				count = 2;
			};
		};
		class TransportBackpacks {};
	};
	class DBA_AmmoBox_Explosive_F : DBA_AmmoBox_Base
	{
		scope = 2;
		scopeCurator = 2;

		displayName = "101st Resupply Box (Explosive)";

		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Explosive_Crate_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
		};

		class TransportMagazines {};
		class TransportWeapons {};
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
			class SmokeShellRed
			{
				name = "SmokeShellRed";
				count = 5;
			};
			class SmokeShellYellow
			{
				name = "SmokeShellYellow";
				count = 3;
			};
			class 101st_thermaldet_x1_mag
			{
				name = "101st_thermaldet_x1_mag";
				count = 5;
			};
			class 101st_imploder_x1_mag
			{
				name = "101st_imploder_x1_mag";
				count = 3;
			};
			class 101st_throwable_c_type_x1_mag
			{
				name = "101st_throwable_c_type_x1_mag";
				count = 5;
			};
			class DBA_HandFlare_Purple
			{
				name = "DBA_HandFlare_Purple";
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
			class OPTRE_M8_Flare_Blue
			{
				name = "OPTRE_M8_Flare_Blue";
				count = 5;
			};
			class OPTRE_M8_Flare_Green
			{
				name = "OPTRE_M8_Flare_Green";
				count = 3;
			};
			class OPTRE_M8_Flare
			{
				name = "OPTRE_M8_Flare";
				count = 5;
			};
			class DBA_ThermalBlock_Mag
			{
				name = "DBA_ThermalBlock_Mag";
				count = 3;
			};
			class DBA_ImploderBlock_Mag
			{
				name = "DBA_ImploderBlock_Mag";
				count = 5;
			};
			class OPTRE_M8_Flare_White
			{
				name = "OPTRE_M8_Flare_White";
				count = 3;
			};
			class OPTRE_M8_Flare_Yellow
			{
				name = "OPTRE_M8_Flare_Yellow";
				count = 2;
			};
		};
		class TransportBackpacks {};
	};
	class DBA_AmmoBox_Repair_F : ACE_Box_Misc
	{
		scope = 2;
		scopeCurator = 2;

		displayName = "101st Resupply Box (Repair)";

		editorCategory = "Category101stAux";
		editorSubcategory = "101st_Props";
		model = "101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectP3D\CargoBox.p3d";
		hiddenSelectionsTextures[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Ammo_Crate_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectTextures\CargoBox\Handle_CO.paa",
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[] =
		{
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Ammo_Crate.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Handle.rvmat",
			"101st_Aux_Mod\Addons\DBA_Republic\DBA_Resupply\ObjectRVMAT\CargoBox\Handle.rvmat",
		};

		ace_refuel_fuelCargo = 150;
		ace_rearm_defaultSupply = 0;
		ace_repair_canRepair = 1;
		ace_refuel_hooks[] =
		{
			{0.38,-3.1700001,-0.69999999},
			{-0.41,-3.1700001,-0.69999999}
		};

		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		maximumload = 10000;

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
		};
		class TransportBackpacks {};
	};
};
