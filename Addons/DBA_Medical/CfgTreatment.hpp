class ACE_Medical_Treatment
{
	class Bandaging
	{
		class PackingBandage;
		class DBA_Medical_Actibandage: PackingBandage {};

		class QuikClot;
		class DBA_Medical_Dermaseal_Patch: QuikClot {};

		class ElasticBandage;
		class DBA_Medical_Spray_Bandage: ElasticBandage {};
	};

	class Medication
	{
		class Morphine;
		class DBA_Medical_Comaren: Morphine
		{
			timeTillMaxEffect = 0;
		};

		class Epinephrine;
		class DBA_Medical_Cordrazine: Epinephrine
		{
			timeTillMaxEffect = 0;
		};

		/*  Morphine for reference:

			hrIncreaseHigh[] = {-10,-35};
			hrIncreaseLow[] = {-10,-20};
			hrIncreaseNormal[] = {-10,-30};
			incompatibleMedication[] = {};
			maxDose = 4;
			painReduce = 0.8;
			timeInSystem = 1800;
			timeTillMaxEffect = 30;
			viscosityChange = -10;
		*/
		class DBA_Medical_Symoxin: Morphine
		{
			hrIncreaseLow[] = { 0 };
			hrIncreaseNormal[] = { 0 };
			hrIncreaseHigh[] = { 0 };
			maxDose = 10;
			painReduce = 0.4;
			timeTillMaxEffect = 0;
			viscosityChange = -1;
		};
	};
};
