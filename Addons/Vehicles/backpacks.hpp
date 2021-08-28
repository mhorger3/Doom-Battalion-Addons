//backpacks
	
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_eod;
	class JLTS_Clone_backpack_medic;
	class JLTS_Clone_backpack_RTO;
	class RD501_JLTS_Clone_RTO_pack;
	class RD501_JLTS_Clone_LR_attachment;
	class RD501_JLTS_Clone_jumppack_mc;
	class TFAR_rt1523g_big;
	class 101st_Support_Backpack: JLTS_Clone_backpack	{
		dlc = "101st_Aux_Mod";
			displayname="101st Reciprocating Backpack";
			maximumLoad=950;
			hiddenSelectionsTextures[] = {"101st_aux_mod\addons\vehicles\repulsor\data\arms_and_backpack_co.paa"};
			model = "101st_aux_mod\addons\vehicles\repulsor\cannonBackpack.p3d";
			hiddenSelections[] = {"camo2"};
	};
	class 101st_SCI_Backpack: JLTS_Clone_backpack	{
		dlc = "101st_Aux_Mod";
			displayname="101st JTLS Canister (Expanded)";
			maximumLoad=500;
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\GAR_Backpack_CO.paa"};
	};
	class 101st_Traitor_Backpack : JLTS_Clone_backpack{
		dlc = "101st_Aux_Mod";
			displayname = "101st JTLS Traitor Canister (Expanded)";
			maximumLoad = 500;
			hiddenSelections[] =
			{
				"camo1"
			};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\CISClones\Traitor_Backpack_CO.paa"};
			hiddenSelectionsMaterials[] = { "101st_Aux_Mod\Addons\textures\CISClones\TaitorBackpack.RVMAT" };
	};
	class 101st_Scuba_Backpack: JLTS_Clone_backpack	{
		dlc = "101st_Aux_Mod";
			displayname="101st Scuba Canister (Expanded)";
			maximumLoad=500;
			model = "\101st_Aux_Mod\Addons\textures\101st\backpacks\scubaBackpack.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\data\Scuba_Backpack_CO.paa"};
	};
	class 101st_SCI_Backpack_EOD: JLTS_Clone_backpack_eod	{
		dlc = "101st_Aux_Mod";
			displayname="101st JTLS EOD Canister (Expanded)";
			maximumLoad=750;
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\EOD_Backpack_CO.paa"};
	};
	class 101st_SCI_Backpack_medic: JLTS_Clone_backpack_medic	{
		dlc = "101st_Aux_Mod";
			displayname="101st JTLS Medic Canister (Expanded)";
			maximumLoad=650;
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\MED_Backpack_CO.paa"};
	};
	class 101st_SCI_Backpack_medic_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st JTLS Medic Command";
			maximumLoad=650;
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\MED_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
			tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_SCI_Backpack_RTO: TFAR_rt1523g_big {
		dlc = "101st_Aux_Mod";
		displayname="101st JTLS RTO";
		maximumLoad=500;
		hiddenSelections[] = {"camo1"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\GAR_Backpack_CO.paa"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
				tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_SCI_Backpack_RTO_V2: TFAR_rt1523g_big {
		dlc = "101st_Aux_Mod";
		displayname="101st JTLS RTO";
		maximumLoad=500;
		hiddenSelections[] = {"camo1"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\GAR_Backpack_CO.paa"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
				tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Arid_Backpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st ARF Arid JTLS";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Arid_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Night_Backpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st ARF Night JTLS";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Night_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Night_MedBackpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st ARF Night Medic";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Night_MedBackpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Tropic_Backpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st ARF Tropic JTLS";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Tropic_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Urban_Backpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st ARF Urban JTLS";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Urban_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Winter_Backpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st ARF Winter JTLS";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Winter_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Arid_Backpack: JLTS_Clone_backpack	{
			dlc = "101st_Aux_Mod";
			displayname="101st ARF Arid JTLS Canister (Expanded)";
			maximumLoad=700;
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Arid_Backpack_CO.paa"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
	};
	class 101st_ARF_Night_Backpack: JLTS_Clone_backpack	{
			dlc = "101st_Aux_Mod";
			displayname="101st ARF Night JTLS Canister (Expanded)";
			maximumLoad=700;
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Night_Backpack_CO.paa"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
	};
	class 101st_ARF_Tropic_Backpack: JLTS_Clone_backpack	{
		dlc = "101st_Aux_Mod";
			displayname="101st ARF Tropic JTLS Canister (Expanded)";
			maximumLoad=700;
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Tropic_Backpack_CO.paa"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
	};
	class 101st_ARF_Urban_Backpack: JLTS_Clone_backpack	{
		dlc = "101st_Aux_Mod";
			displayname="101st ARF Urban JTLS Canister (Expanded)";
			maximumLoad=700;
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Urban_Backpack_CO.paa"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
	};
	class 101st_ARF_Winter_Backpack: JLTS_Clone_backpack	{
		dlc = "101st_Aux_Mod";
			displayname="101st ARF Winter JTLS";
			maximumLoad=700;
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Winter_Backpack_CO.paa"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
	};
	class 101st_Arid_Backpack_medic_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st JTLS Arid Medic";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Arid_MedBackpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Tropic_Backpack_medic_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st JTLS Tropic Medic";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Tropic_MedBackpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Urban_Backpack_medic_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st JTLS Urban Medic";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Urban_MedBackpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Winter_Backpack_medic_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="101st JTLS Winter Medic";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\ARF_Winter_MedBackpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};

	class DBA_Backpack_Hammer_LR_Parachute: TFAR_rt1523g_big	
	{
		dlc = "101st_Aux_Mod";
		displayname="101st JTLS Hammer Radio Pack";
		maximumLoad=250;
		hiddenSelections[] = {"camo1"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTOStraps.p3d";
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\CleanThings\Backpack\Backpack_co.paa"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";

		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";

		mapSize=0.55000001;
		scope=2;
		scopeArsenal=2;
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "DBA_Backpack_Hammer_LR_Parachute";
		backpackSimulation="ParachuteSteerable";
		ParachuteClass="Steerable_Parachute_F";
		mass=120;
	};

	
	class 101st_Radio_Pack_Small : TFAR_rt1523g_big {
		dlc = "101st_Aux_Mod";
		displayname="101st Radio Pack White";
		maximumLoad=500;		
		model = "\MRC\JLTS\characters\CloneArmor\CloneRTOPack.p3d";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_RTO_pack_co.paa"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_LR_attachment_ui_ca.paa";
				tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	
	class 101st_Radio_Pack_Attachment : TFAR_rt1523g_big {
		dlc = "101st_Aux_Mod";
		displayname="101st Radio Pack Attachment";
		maximumLoad=500;		
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_LR_attachment_co.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneLRattachment.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_LR_attachment_ui_ca.paa";
				tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Jumppack_Standard : RD501_JLTS_Clone_jumppack_mc
	{
		dlc = "101st_Aux_Mod";
		displayname="101st Jumppack (JLTS)";
		maximumLoad=500;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\101st_Jumpack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Jumppack_Medic : RD501_JLTS_Clone_jumppack_mc
	{
		dlc = "101st_Aux_Mod";
		displayname="101st Medic Jumppack (JLTS)";
		maximumLoad=500;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\101st_MedJumpack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
				tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Jumppack_Dagger : RD501_JLTS_Clone_jumppack_mc
	{
		dlc = "101st_Aux_Mod";
		displayname="101st Dagger Jumppack (JLTS)";
		maximumLoad=500;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\101st_DaggerJumpack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101_yeet_machine: RD501_JLTS_Clone_jumppack_mc
	{
		scope = 2;
		displayname = "101st Experimental Jetpack";
		dlc = "101st_Aux_Mod";
		RD501_jumppack_is_jumppack = 1;
		RD501_jumppack_spam_delay = 1;
		RD501_jumppack_energy_capacity = 200;
		RD501_jumppack_recharge = 5;
		RD501_jumppack_jump_effect_script = "RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		RD501_jumppack_sound_ignite[] = {"RD501_Jumppack\sounds\cdv21Start.ogg"};
		RD501_jumppack_sound_land[] = {"RD501_Jumppack\sounds\cdv21End.ogg"};
		RD501_jumppack_sound_idle[] = {"RD501_Jumppack\sounds\cdv21Idle.ogg"};
		RD501_jumppack_jump_types[] = 
            {
                {"Half Power",{15,4,20,0,1,0}},
                {"Full Power",{30,5,50,0,1,0}},
                {"Long Jump",{60,60,100,0,0,0}},
                {"RTB",{-50,150,180,0,1,0}},
                //{forward vel, vert vel, cost, angle, directional, can prone}
            };
		maximumload = 500;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\101st_Jumpack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101_Jumppack_Hammer: RD501_JLTS_Clone_jumppack_mc
	{
		scope = 2; //
		displayname = "101st Hammer Jumppack";
		dlc = "101st_Aux_Mod";
		RD501_jumppack_is_jumppack = 1;
		RD501_jumppack_spam_delay = 1;
		RD501_jumppack_energy_capacity = 100;
		RD501_jumppack_recharge = 1;
		RD501_jumppack_jump_effect_script = "RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		RD501_jumppack_sound_ignite[] = {"RD501_Jumppack\sounds\cdv21Start.ogg"};
		RD501_jumppack_sound_land[] = {"RD501_Jumppack\sounds\cdv21End.ogg"};
		RD501_jumppack_sound_idle[] = {"RD501_Jumppack\sounds\cdv21Idle.ogg"};
		RD501_jumppack_jump_types[] = 
            {
                {"Survive Ejection",{15,4,100,0,1,0}},
                //{forward vel, vert vel, cost, angle, directional, can prone}
            };
		maximumload = 500;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[] = {"101st_Aux_Mod\Addons\textures\101st\backpacks\101st_Jumpack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
