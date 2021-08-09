class UniformItem;
class Uniform_Base;

class DBA_ClaymoreHQ : Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope = 2;
	displayName = "101st Claymore HQ (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\ClaymoreHQ\textures\HQ_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Sergeant_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "ClaymoreHQ_DBA";
		containerClass = "supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_ClaymoreHQM : Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope = 2;
	displayName = "101st Claymore HQ Medic (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\ClaymoreHQ\textures\HQM_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\textures\101st\armor\Medic_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "ClaymoreHQM_DBA";
		containerClass = "supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_ClaymoreHQRTO : Uniform_Base
{
	dlc = "101st_Aux_Mod";
	scope = 2;
	displayName = "101st Claymore HQ RTO (JLTS)";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\PlatoonArmours\ClaymoreHQ\textures\HQR_Armor_upper_CO.paa",
		"101st_Aux_Mod\Addons\textures\101st\armor\RTO_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "ClaymoreHQRTO_DBA";
		containerClass = "supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};