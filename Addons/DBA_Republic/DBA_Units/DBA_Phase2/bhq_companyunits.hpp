class B_DBA_P2CloneBHQ_F : B_DBA_P2Clone_Base
{
	displayName = "DBA Phase 2 Clone: Broadsword HQ";
	uniformClass = "DBA_P2CloneBHQUniform";
	editorSubcategory = "O_DBA_Republic_Broadsword";
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\BroadswordHQ\HQ_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Sergeant_Legs_CO.paa"
	};
	
	scope = 2;
	scopeCurator = 2;
};

class B_DBA_P2CloneBHQM_F : B_DBA_P2CloneBHQ_F
{
	displayName = "DBA Phase 2 Clone: Broadsword Mike";
	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\BroadswordHQ\HQM_Armor_upper_CO.paa",
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\Medic_Legs_CO.paa"
	};
	uniformClass = "DBA_P2CloneBHQMUniform";
	
	scope = 2;
	scopeCurator = 2;
};
class B_DBA_P2CloneBHQR_F : B_DBA_P2CloneBHQ_F
{
	displayName = "DBA Phase 2 Clone: Broadsword Romeo";
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\BroadswordHQ\HQR_Armor_upper_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Base\RTO_Legs_CO.paa"
	};
	uniformClass = "DBA_P2CloneBHQRUniform";
	scope = 2;
	scopeCurator = 2;
};
