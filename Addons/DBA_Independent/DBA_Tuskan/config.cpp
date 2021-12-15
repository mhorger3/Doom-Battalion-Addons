class CfgPatches
{
	class Tuskan
	{
		units[]={};
		weapons[]={};
		requiredVersion=0;
		requiredAddons[]=
		{
			"A3_Characters_F_Heads"
		};
		version="1.0";
		author="Vulgar";
	};
};
class CfgHeads
{
	class DefaultHead_A3;
	class DBA_Tuskan: DefaultHead_A3
	{
		model="101st_Aux_Mod\Addons\DBA_Independent\DBA_Tuskan\TuskanHead.p3d";
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class DBA_Tuskan
		{
			author="Vulgar";
			head="DBA_Tuskan";
			identityTypes[]={};
			displayname="Tuskan Head";
			texture="101st_Aux_Mod\Addons\DBA_Independent\DBA_Tuskan\tuskenraider_head_co.paa";
			material="101st_Aux_Mod\Addons\DBA_Independent\DBA_Tuskan\head.rvmat";
			materialWounded1="";
			materialWounded2="";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
	};
};
class CfgGroups {
	class Indep
	{
		class O_DBA_IND_F
		{
			name="DBA IND";
			class Infantry
			{
				name="Infantry";
				class O_DBA_IND_Tuskan_Patrol
				{
					author="Ragwolf";
					scope=2;
					scopeCurator=2;
					name="Tuskan Patrol";
					side=2;
					faction="O_DBA_IND_F";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=0.30000001;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=2;
						vehicle="101st_Tuskan";
					};
					class Unit1
					{
						position[]={-5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit2
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
				}
				class O_DBA_IND_Tuskan_Team
				{
					author="Ragwolf";
					scope=2;
					scopeCurator=2;
					name="Tuskan Fire Team";
					side=2;
					faction="O_DBA_IND_F";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=0.30000001;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=2;
						vehicle="101st_Tuskan";
					};
					class Unit1
					{
						position[]={-5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit2
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit3
					{
						position[]={-10,-10,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
					class Unit4
					{
						position[]={10,-10,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
				}
				class O_DBA_IND_Tuskan_Squad
				{
					author="Ragwolf";
					scope=2;
					scopeCurator=2;
					name="Tuskan Weapons Squad";
					side=2;
					faction="O_DBA_IND_F";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=0.30000001;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=2;
						vehicle="101st_Tuskan";
					};
					class Unit1
					{
						position[]={-5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit2
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit3
					{
						position[]={-10,-10,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Shotgun";
					};
					class Unit4
					{
						position[]={10,-10,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Slug";
					};
					class Unit5
					{
						position[]={-15,-15,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
					class Unit6
					{
						position[]={15,-15,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Zillo";
					};
					class Unit7
					{
						position[]={-20,-20,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Firepuncher";
					};
					class Unit8
					{
						position[]={20,-20,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Marksman";
					};
				};
				class O_DBA_IND_Tuskan_FireSquad
				{
					author="Ragwolf";
					scope=2;
					scopeCurator=2;
					name="Tuskan Fire Squad";
					side=2;
					faction="O_DBA_IND_F";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=0.30000001;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=2;
						vehicle="101st_Tuskan";
					};
					class Unit1
					{
						position[]={-5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit2
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit3
					{
						position[]={-10,-10,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit4
					{
						position[]={10,-10,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit5
					{
						position[]={-15,-15,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
					class Unit6
					{
						position[]={15,-15,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
					class Unit7
					{
						position[]={-20,-20,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Firepuncher";
					};
					class Unit8
					{
						position[]={20,-20,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Marksman";
					};
				};
				class O_DBA_IND_Tuskan_Town
				{
					author="Ragwolf";
					scope=2;
					scopeCurator=2;
					name="Tuskan Town Filler";
					side=2;
					faction="O_DBA_IND_F";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=0.30000001;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=2;
						vehicle="101st_Marksman";
					};
					class Unit1
					{
						position[]={-5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan";
					};
					class Unit2
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan";
					};
					class Unit3
					{
						position[]={-10,-10,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan";
					};
					class Unit4
					{
						position[]={10,-10,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan";
					};
					class Unit5
					{
						position[]={-15,-15,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan";
					};
					class Unit6
					{
						position[]={15,-15,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan";
					};
					class Unit7
					{
						position[]={-20,-20,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit8
					{
						position[]={20,-20,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit9
					{
						position[]={20,-20,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit10
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Rifle";
					};
					class Unit11
					{
						position[]={-5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
					class Unit12
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
					class Unit13
					{
						position[]={-10,-10,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
					class Unit14
					{
						position[]={10,-10,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
					class Unit15
					{
						position[]={-15,-15,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
					class Unit16
					{
						position[]={15,-15,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Heavy";
					};
					class Unit17
					{
						position[]={-20,-20,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Shotgun";
					};
					class Unit18
					{
						position[]={20,-20,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Shotgun";
					};
					class Unit19
					{
						position[]={20,-20,0};
						rank="SERGEANT";
						side=2;
						vehicle="101st_Tuskan_Slug";
					};
				};
			};
		};
	};
};