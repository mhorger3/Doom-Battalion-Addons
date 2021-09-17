class CfgWeapons
{
	class ACE_packingBandage;
	class DBA_Medical_Actibandage: ACE_packingBandage
	{
		displayName = "Actibandage";
	};

	class ACE_quikclot;
	class DBA_Medical_Dermaseal_Patch: ACE_quikclot
	{
		displayName = "Dermaseal Patch";
	};

	class ACE_elasticBandage;
	class DBA_Medical_Spray_Bandage: ACE_elasticBandage
	{
		displayName = "Spray Bandage";
	};

	class ACE_ItemCore;
	class ACE_morphine: ACE_ItemCore
	{
		class ItemInfo;
	};
	class DBA_Medical_Comaren: ACE_morphine
	{
		displayName = "Comaren Hypoinjector";
	};

	class ACE_epinephrine;
	class DBA_Medical_Cordrazine: ACE_epinephrine
	{
		displayName = "Cordrazine Hypoinjector";
	};

	class DBA_Medical_Symoxin: ACE_morphine
	{
		displayName = "Symoxin Hypoinjector";

		class ItemInfo: ItemInfo
		{
			mass = 0.1;
		};
	};
};
