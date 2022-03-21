
class CfgPatches
{
	class DBA_Chiss
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0;
		requiredAddons[] =
		{
			"A3_Characters_F_Heads"
		};
		version = "1.0";
		author = "Vulgar";
	};
};


class CfgFaces
{
	class Default; // held in engine's ca_bin
	class Man_A3 : Default
	{
		class DBA_Chiss_01 : Default
		{
			author = "Vulgar";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			displayname = "Chiss Head 01";
			texture = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_01_CO.paa";
			material = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_01.RVMAT";
			materialWounded1 = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_01.RVMAT";
			materialWounded2 = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_01.RVMAT";
			textureHL = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_01_CO.paa";
			materialHL = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_01.RVMAT";
			textureHL2 = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_01_CO.paa";
			materialHL2 = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_01.RVMAT";
			disabled = 0;
		};

		class DBA_Chiss_02 : DBA_Chiss_01
		{
			author = "Vulgar";
			head = "DefaultHead_A3";
			displayname = "Chiss Head 02";
			texture = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_02_CO.paa";
			textureHL = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_02_CO.paa";
			textureHL2 = "\DBA_Independent\Addons\DBA_Independent\DBA_Identity\DBA_Faces\DBA_Chiss\Chiss_Face_02_CO.paa";
		};
	};
};