class UniformItem;
class Uniform_Base;

// Battalion
class DBA_P2CloneBlindUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Blind";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blind_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blind_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Blind_Upper.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneBlind_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneKelUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Kel";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Kel_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Kel_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Kel_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Kel_Legs.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneKel_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneDutchUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Dutch";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Dutch_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Dutch_Legs_CO.paa"
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneDutch_F";
		containerClass = "Supply150";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};

class DBA_P2CloneJerecUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Jerec (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Jerec_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Jerec_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneJerec_F";
		containerClass = "Supply150";
		mass = 40;
	};
};

class DBA_P2CloneVinUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Vin";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Vin_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Vin_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneVin_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneKaiUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Kai Beans (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Kai_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Kai_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneKai_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
// Broadsword
class DBA_P2CloneBlackwaterUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Blackwater";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blackwater_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blackwater_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneBlackwater_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneSeatieUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Seatie";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Seatie_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Seatie_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Seatie_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Seatie_Legs.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneSeatie_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneAJUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: AJ";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\AJ_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\AJ_Lower_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneAJ_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneSparkUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Spork (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Spark_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Spark_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Spark_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Spark_Legs.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneSpark_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneVulgarUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Vulgar";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Vulgar_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Vulgar_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Vulgar_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Vulgar_Legs.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneVulgar_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
// Claymore
class DBA_P2CloneBloodUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Blood";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blood_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Blood_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Blood_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Blood_Legs.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneBlood_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneRepublicanUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Republican";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Republican_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Republican_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Republican_Upper.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Republican_Lower.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneRepublican_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneFurnUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Furn";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Furn_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Furn_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneFurn_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2ClonePunisherUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Punisher";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Punisher_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Punisher_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2ClonePunisher_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneFodderUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Fodder";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Fodder_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Fodder_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneFodder_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneOaksyUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Oaksy The Hockey Expert (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Oaksy_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Oaksy_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneOaksy_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneMisfitUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Misfit";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Misfit_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Misfit_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneMisfit_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneFalconUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Falcon";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Falcon_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Falcon_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Falcon_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Falcon_Legs.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneFalcon_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneServoUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Servo";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Servo_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Servo_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneServo_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneMuttUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Mutt";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Mutt_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Mutt_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneServo_F";
		containerClass = "Supply150";
		mass = 40;
	};
};


class DBA_P2CloneBaconLegacyUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA Phase 2 Clone: Bear-Can (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Bacon_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Bacon_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Bacon_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Bacon_Legs.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneBeconLegacy_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneCourageLegacyUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA Phase 2 Clone: Coom-Rage (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Courage_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Courage_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneCourageLegacy_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneLambertLegacyUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA Phase 2 Clone: Rocket Sheep (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Lambert_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Lmabert_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneLambertLegacy_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneProdigyLegacyUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA Phase 2 Clone: Pro-Diggy (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Prodigy_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Prodigy_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Prodigy_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Prodigy_Legs.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneProdigyLegacy_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneQuillLegacyUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA Phase 2 Clone: Quilliam (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Quill_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Quill_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Quill_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Quill_Legs.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneQuillLegacy_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneSeeforLegacyUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA Phase 2 Clone: Rats Rats, We are the Rats (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Seefor_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Seefor_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Seefor_Chest.RVMAT",
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneSeeforLegacy_F";
		containerClass = "Supply150";
		mass = 40;
	};
};
class DBA_P2CloneDolittleLegacyUniform : Uniform_Base
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA P2 Clone Armour: Dolittle? More like DoesLittle (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Dolittle_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Dolittle_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\data\Dolittle_Chest.RVMAT",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\data\Dolittle_Legs.RVMAT"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneDolittleLegacy_F";
		containerClass = "Supply150";
		mass = 40;
	};
};