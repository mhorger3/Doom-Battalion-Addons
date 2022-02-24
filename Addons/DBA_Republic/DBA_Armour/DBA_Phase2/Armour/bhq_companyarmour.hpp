class DBA_P2CloneBHQUniform : DBA_P2cloneRecruitUniform
{
	displayName = "[DBA] Phase 2 Clone: Broadsword HQ";
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\BroadswordHQ\HQ_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Sergeant_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneBHQ_F";
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
class DBA_P2CloneBHQMUniform : DBA_P2cloneRecruitUniform
{
	displayName = "[DBA] Phase 2 Clone: Broadsword Mike";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\BroadswordHQ\HQM_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Medic_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneBHQR_F";
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
class DBA_P2CloneBHQRUniform : DBA_P2cloneRecruitUniform
{
	displayName = "[DBA] Phase 2 Clone: Broadsword Romeo";
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\BroadswordHQ\HQR_Armor_upper_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\RTO_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneBHQR_F";
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
