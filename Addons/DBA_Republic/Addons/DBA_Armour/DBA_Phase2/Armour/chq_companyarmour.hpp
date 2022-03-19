class DBA_P2CloneCHQUniform : DBA_P2cloneRecruitUniform
{
	displayName = "[DBA] Phase 2 Clone: Claymore HQ";
	hiddenSelectionsTextures[] =
	{
		"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Armour\data\Custom\ClaymoreHQ\HQ_Armor_upper_CO.paa",
		"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Armour\data\Base\Sergeant_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneCHQ_F";
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
class DBA_P2CloneCHQMUniform : DBA_P2cloneRecruitUniform
{
	displayName = "[DBA] Phase 2 Clone: Claymore Mike";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Armour\data\Custom\ClaymoreHQ\HQM_Armor_upper_CO.paa",
		"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Armour\data\Base\Medic_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneCHQR_F";
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
class DBA_P2CloneCHQRUniform : DBA_P2cloneRecruitUniform
{
	displayName = "[DBA] Phase 2 Clone: Claymore Romeo";
	hiddenSelectionsTextures[] =
	{
		"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Armour\data\Custom\ClaymoreHQ\HQR_Armor_upper_CO.paa",
		"DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Armour\data\Base\RTO_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneCHQR_F";
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
