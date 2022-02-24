class B_DBA_P2CloneCHQ_F : B_DBA_P2Clone_Base
{
	displayName = "DBA Phase 2 Clone: Claymore HQ";
	uniformClass = "DBA_P2CloneCHQUniform";
	editorSubcategory = "O_DBA_Republic_Claymore";
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\ClaymoreHQ\HQ_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Sergeant_Legs_CO.paa"
	};
	
	scope = 2;
	scopeCurator = 2;
};

class B_DBA_P2CloneCHQM_F : B_DBA_P2CloneCHQ_F
{
	displayName = "DBA Phase 2 Clone: Claymore Mike";
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\ClaymoreHQ\HQM_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Medic_Legs_CO.paa"
	};
	uniformClass = "DBA_P2CloneCHQMUniform";
	
	scope = 2;
	scopeCurator = 2;
};
class B_DBA_P2CloneCHQR_F : B_DBA_P2CloneCHQ_F
{
	displayName = "DBA Phase 2 Clone: Claymore Romeo";
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\ClaymoreHQ\HQR_Armor_upper_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\RTO_Legs_CO.paa"
	};
	uniformClass = "DBA_P2CloneCHQRUniform";
	scope = 2;
	scopeCurator = 2;
};
