// Battalion
class DBA_P2CloneBlindUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Blind";
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
		uniformType = "Neopren"; // Adds swimsuit material to uniform allowing user to "shift" (fast) swim
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneKelUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Kel";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneDutchUniform : DBA_P2cloneRecruitUniform
{
	author = "Dutch";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Dutch";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Dutch_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Dutch_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneDutch_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};

class DBA_P2CloneJerecUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Jerec (Legacy)";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};

class DBA_P2CloneVinUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Vin";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneKaiUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Kai Beans (Legacy)";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
// Broadsword
class DBA_P2CloneBlackwaterUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Blackwater";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneSeatieUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Seatie";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneAJUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: AJ";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneSparkUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Spork (Legacy)";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
	class DBA_P2CloneSecutorUniform : DBA_P2cloneRecruitUniform
{
	author = "Secutor";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Secutor";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Secutor_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Secutor_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneKodiak_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneVulgarUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Vulgar";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
// Claymore
class DBA_P2CloneBloodUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Blood";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneRepublicanUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Republican";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneFurnUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Furn";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2ClonePunisherUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Punisher";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneKodiakUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Kodiak";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Kodiak_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Kodiak_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneKodiak_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneFodderUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Fodder";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneOaksyUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Oaksy The Hockey Expert (Legacy)";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneMisfitUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Misfit";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneFalconUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Falcon";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneServoUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Servo";
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
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneMuttUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Mutt";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Mutt_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Mutt_Legs_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Mutt_Chest.rvmat",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\data\Mutt_Legs.rvmat"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneMutt_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};


class DBA_P2CloneBaconLegacyUniform : DBA_P2cloneRecruitUniform
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
		uniformClass = "B_DBA_P2CloneBacon_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneCourageLegacyUniform : DBA_P2cloneRecruitUniform
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
		uniformClass = "B_DBA_P2CloneCourage_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneLambertLegacyUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "DBA Phase 2 Clone: Rocket Sheep (Legacy)";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Lambert_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Legacy\Lambert_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneLambert_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneProdigyLegacyUniform : DBA_P2cloneRecruitUniform
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
		uniformClass = "B_DBA_P2CloneProdigy_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneQuillLegacyUniform : DBA_P2cloneRecruitUniform
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
		uniformClass = "B_DBA_P2CloneQuill_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneSeeforLegacyUniform : DBA_P2cloneRecruitUniform
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
		uniformClass = "B_DBA_P2CloneSeefor_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneDolittleLegacyUniform : DBA_P2cloneRecruitUniform
{
	author = "Vulgar";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Dolittle? More like DoesLittle (Legacy)";
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
		uniformClass = "B_DBA_P2CloneDolittle_F";
		containerClass = "Supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
};
class DBA_P2CloneDogUniform : DBA_P2cloneRecruitUniform
{
	dlc = "101st_Aux_Mod";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Dog";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Dog_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Dog_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneDog_F";
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
class DBA_P2CloneHereticUniform : DBA_P2cloneRecruitUniform
{
	dlc = "101st_Aux_Mod";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Heretic";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Heretic_Upper_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Heretic_Lower_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneHeretic_F";
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
class DBA_P2CloneHambinoUniform : DBA_P2cloneRecruitUniform
{
	dlc = "101st_Aux_Mod";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Hambino";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Hambino_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Hambino_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneHambino_F";
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
class DBA_P2CloneNobleUniform : DBA_P2cloneRecruitUniform
{
	dlc = "101st_Aux_Mod";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Noble";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Noble_Chest_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Noble_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneNoble_F";
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
class DBA_P2CloneGraeUniform : DBA_P2cloneRecruitUniform
{
	dlc = "101st_Aux_Mod";
	scope = 2;
	displayName = "[DBA] Phase 2 Clone: Grae";
	hiddenSelectionsTextures[] =
	{
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Grae_Upper_CO.paa",
		"101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Grae_Lower_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneGrae_F";
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
class DBA_P2CloneRadarUniform : DBA_P2cloneRecruitUniform
{
	displayName = "[DBA] Phase 2 Clone: Radar";
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Asylum_Arf_Armor_Top_CO.paa",
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Asylum_Arf_Armor_Bottom_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneRadar_F";
		containerClass = "supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
	DBA_camoTemplate = "101st";
	DBA_camoType = "base";
	DBA_hasCamoChanger = 1;
};
class DBA_P2CloneHarkUniform : DBA_P2cloneRecruitUniform
{
	displayName = "[DBA] Phase 2 Clone: Hark";
	hiddenSelectionsTextures[] =
	{
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Hark_Chest_CO.paa",
		"\101st_Aux_Mod\Addons\DBA_Republic\DBA_Armour\DBA_Phase2\Armour\data\Custom\Custom\Hark_Legs_CO.paa"
	};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_DBA_P2CloneHark_F";
		containerClass = "supply150";
		uniformType = "Neopren";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		mass = 40;
	};
	DBA_camoTemplate = "101st";
	DBA_camoType = "base";
	DBA_hasCamoChanger = 1;
};