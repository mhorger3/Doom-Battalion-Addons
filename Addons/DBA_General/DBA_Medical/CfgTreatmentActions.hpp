class ACE_Medical_Treatment_Actions
{
	class PackingBandage;
	class DBA_Medical_Actibandage: PackingBandage
	{
		displayName = "Actibandage";
		items[] = { "DBA_Medical_Actibandage" };
	};

	class QuikClot;
	class DBA_Medical_Dermaseal_Patch: QuikClot
	{
		displayName = "Dermaseal Patch";
		items[] = { "DBA_Medical_Dermaseal_Patch" };
	};

	class ElasticBandage;
	class DBA_Medical_Spray_Bandage: ElasticBandage
	{
		displayName = "Spray Bandage";
		items[] = { "DBA_Medical_Spray_Bandage" };
	};

	class Morphine;
	class DBA_Medical_Comaren: Morphine
	{
		displayName = "Inject Comaren";
		displayNameProgress = "Injecting Comaren...";
		items[] = { "DBA_Medical_Comaren" };
	};

	class Epinephrine;
	class DBA_Medical_Cordrazine: Epinephrine
	{
		displayName = "Inject Cordrazine";
		displayNameProgress = "Injecting Cordrazine...";
		items[] = { "DBA_Medical_Cordrazine" };
	};

	class DBA_Medical_Symoxin: Morphine
	{
		displayName = "Inject Symoxin";
		displayNameProgress = "Injecting Symoxin...";
		items[] = { "DBA_Medical_Symoxin" };
		treatmentTime = 1;
	};

	class DBA_Medical_AffideCrystal: Morphine
	{
		displayName = "Swallow Affide Crystal";
		displayNameProgress = "Swallow Affide Crystal...";
		items[] = { "DBA_Medical_AffideCrystal" };
		allowedSelections[] ={"Head"};
		treatmentTime = 5;
	};
};
