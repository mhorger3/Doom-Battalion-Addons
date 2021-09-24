
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
			texture = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_01_CO.paa";
			material = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_01.RVMAT";
			materialWounded1 = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_01.RVMAT";
			materialWounded2 = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_01.RVMAT";
			textureHL = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_01_CO.paa";
			materialHL = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_01.RVMAT";
			textureHL2 = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_01_CO.paa";
			materialHL2 = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_01.RVMAT";
			disabled = 0;
		};

		class DBA_Chiss_02 : DBA_Chiss_01
		{
			author = "Vulgar";
			head = "DefaultHead_A3";
			displayname = "Chiss Head 02";
			texture = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_02_CO.paa";
			textureHL = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_02_CO.paa";
			textureHL2 = "\101st_Aux_Mod\Addons\textures\Faces\Chiss_Face_02_CO.paa";
		};
	};
};