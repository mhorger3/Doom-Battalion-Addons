//backpacks
	
	class JLTS_Clone_backpack;
	class JLTS_Clone_belt_bag;
	class JLTS_Clone_backpack_eod;
	class JLTS_Clone_backpack_medic;
	class JLTS_Clone_backpack_RTO;
	class RD501_JLTS_Clone_RTO_pack;
	class RD501_JLTS_Clone_LR_attachment;
	class JLTS_Clone_jumppack_JT12;
	class RD501_JLTS_Clone_jumppack_mc;
	class TFAR_rt1523g_big;
	class 101st_SCI_Backpack: JLTS_Clone_backpack	{
			dlc = "101st_Aux_Mod";
			displayname="DBA Clone Canister (JLTS)";
			maximumLoad=500;
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\GAR_Backpack_CO.paa"};
	};
	class 101st_belt_bag: JLTS_Clone_belt_bag
	{
		dlc = "101st_Aux_Mod";
		displayname="101st Belt Bag";
		maximumLoad=250;
	};
	class 101st_Invs_Backpack: JLTS_Clone_backpack	{
		dlc = "101st_Aux_Mod";
			displayname="DBA Clone Canister (Invisible)";
			maximumLoad=500;
			model = "\A3\weapons_f\empty";
	};
	class 101st_Radio_Pack_Invs : TFAR_rt1523g_big {
		dlc = "101st_Aux_Mod";
		displayname="DBA Radio Pack Attachment (Invisible)";
		maximumLoad=500;
		model = "\A3\weapons_f\empty";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_LR_attachment_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	
	class 101st_Traitor_Backpack : JLTS_Clone_backpack{
		dlc = "101st_Aux_Mod";
			displayname = "DBA Clone Traitor Canister (JLTS)";
			maximumLoad = 500;
			hiddenSelections[] =
			{
				"camo1"
			};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\Traitor_Backpack_CO.paa"};
			hiddenSelectionsMaterials[] = { "DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\TaitorBackpack.RVMAT" };
	};
	class 101st_Scuba_Backpack: JLTS_Clone_backpack{
		dlc = "101st_Aux_Mod";
			displayname="101st Scuba Canister (JLTS)";
			maximumLoad=500;
			model = "\DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\scubaBackpack.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\Scuba_Backpack_CO.paa"};
	};
	class 101st_SCI_Backpack_EOD: JLTS_Clone_backpack_eod{
		dlc = "101st_Aux_Mod";
			displayname="DBA Clone EOD Canister (JLTS)";
			maximumLoad=750;
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\EOD_Backpack_CO.paa"};
	};
	class 101st_SCI_Backpack_medic: JLTS_Clone_backpack_medic{
		dlc = "101st_Aux_Mod";
			displayname="DBA Clone Medic Canister (JLTS)";
			maximumLoad=650;
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\MED_Backpack_CO.paa"};
	};
	class 101st_SCI_Backpack_medic_LR: TFAR_rt1523g_big{
		dlc = "101st_Aux_Mod";
			displayname="DBA Clone Medic Command";
			maximumLoad=650;
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\MED_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
			tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_SCI_Backpack_RTO: TFAR_rt1523g_big {
		dlc = "101st_Aux_Mod";
		displayname="DBA Clone RTO";
		maximumLoad=500;
		hiddenSelections[] = {"camo1"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\GAR_Backpack_CO.paa"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_SCI_Backpack_RTO_V2: TFAR_rt1523g_big {
		dlc = "101st_Aux_Mod";
		displayname="DBA Clone RTO";
		maximumLoad=500;
		hiddenSelections[] = {"camo1"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\GAR_Backpack_CO.paa"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
				tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Arid_Backpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="DBA ARF Arid JTLS";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Arid_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Night_Backpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="DBA ARF Night JTLS";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Night_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Night_MedBackpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="DBA ARF Night Medic";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Night_MedBackpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Tropic_Backpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="DBA ARF Tropic JTLS";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Tropic_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Urban_Backpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="DBA ARF Urban JTLS";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Urban_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Winter_Backpack_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="DBA ARF Winter JTLS";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Winter_Backpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_ARF_Arid_Backpack: JLTS_Clone_backpack	{
			dlc = "101st_Aux_Mod";
			displayname="DBA ARF Arid JTLS Canister (JLTS)";
			maximumLoad=700;
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Arid_Backpack_CO.paa"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
	};
	class 101st_ARF_Night_Backpack: JLTS_Clone_backpack	{
			dlc = "101st_Aux_Mod";
			displayname="DBA ARF Night JTLS Canister (JLTS)";
			maximumLoad=700;
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Night_Backpack_CO.paa"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
	};
	class 101st_ARF_Tropic_Backpack: JLTS_Clone_backpack	{
		dlc = "101st_Aux_Mod";
			displayname="DBA ARF Tropic JTLS Canister (JLTS)";
			maximumLoad=700;
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Tropic_Backpack_CO.paa"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
	};
	class 101st_ARF_Urban_Backpack: JLTS_Clone_backpack	{
		dlc = "101st_Aux_Mod";
			displayname="DBA ARF Urban JTLS Canister (JLTS)";
			maximumLoad=700;
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Urban_Backpack_CO.paa"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
	};
	class 101st_ARF_Winter_Backpack: JLTS_Clone_backpack	{
		dlc = "101st_Aux_Mod";
			displayname="DBA ARF Winter JTLS";
			maximumLoad=700;
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Winter_Backpack_CO.paa"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
	};
	class 101st_Arid_Backpack_medic_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="DBA Clone Arid Medic";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Arid_MedBackpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
			tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Tropic_Backpack_medic_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="DBA Clone Tropic Medic";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Tropic_MedBackpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
			tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Urban_Backpack_medic_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="DBA Clone Urban Medic";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Urban_MedBackpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
					tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Winter_Backpack_medic_LR: TFAR_rt1523g_big	{
		dlc = "101st_Aux_Mod";
			displayname="DBA Clone Winter Medic";
			maximumLoad=700;
			hiddenSelections[] = {"camo1"};
			model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
			hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\ARF_Winter_MedBackpack_CO.paa"};
			picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
			tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};

	class DBA_Backpack_Hammer_LR_Parachute: TFAR_rt1523g_big	
	{
		dlc = "101st_Aux_Mod";
		displayname="DBA Clone Hammer Radio Pack";
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
	
	class 101st_Radio_Pack_Small : TFAR_rt1523g_big
	{
		dlc = "101st_Aux_Mod";
		displayname="DBA Radio Pack White";
		maximumLoad=500;		
		model = "\MRC\JLTS\characters\CloneArmor\CloneRTOPack.p3d";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_RTO_pack_co.paa"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_LR_attachment_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	
	class 101st_Radio_Pack_Attachment : TFAR_rt1523g_big 
	{
		dlc = "101st_Aux_Mod";
		displayname="DBA Radio Pack Attachment";
		maximumLoad=500;		
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_LR_attachment_co.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneLRattachment.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_LR_attachment_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class DBA_Breathmask_Backpack: JLTS_Clone_backpack
	{
		displayname="DBA Breathmask Surival Gear (WIP)";
		author="Seatie";
		dlc = "101st_Aux_Mod";
		maximumLoad=500;
		model = "\DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\Breathmask.p3d";
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\Breathmask_CO.paa"};
	};
	class DBA_Snowpack_Base: JLTS_Clone_backpack
	{
		displayname="HT-77 Cold Assault Canister";
		author="Seatie";
		dlc = "101st_Aux_Mod";
		maximumLoad=750;
		model = "\DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\snowpack.p3d";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\SnowCanister_CO.paa"};
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class DBA_Snowpack_101st: DBA_Snowpack_Base
	{
		displayname="HT-77 Cold Assault Canister (101st)";
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\101st_SnowCanister_CO.paa"};
	};
	class DBA_Snowpack_501st: DBA_Snowpack_Base
	{
		displayname="HT-77 Cold Assault Canister (501st)";
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\501st_SnowCanister_CO.paa"};
	};
	class DBA_Snowpack_91st: DBA_Snowpack_Base
	{
		displayname="HT-77 Cold Assault Canister (91st)";
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\91st_SnowCanister_CO.paa"};
	};
	class DBA_Snowpack_327th: DBA_Snowpack_Base
	{
		displayname="HT-77 Cold Assault Canister (327th)";
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\327th_SnowCanister_CO.paa"};
	};
	class DBA_Snowpack_212th: DBA_Snowpack_Base
	{
		displayname="HT-77 Cold Assault Canister (212th)";
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\212th_SnowCanister_CO.paa"};
	};
	class 101st_Jumppack_Standard : RD501_JLTS_Clone_jumppack_mc
	{
		dlc = "101st_Aux_Mod";
		displayname="DBA Jumppack";
		maximumLoad=500;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\101st_Jumpack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	/*class 101st_Jumppack_Standard_Traitor : RD501_JLTS_Clone_jumppack_mc
	{
		dlc = "101st_Aux_Mod";
		displayname="101st Jumppack Traitor (JLTS)";
		maximumLoad=500;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\DaggerTraitor_Jumppack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};*/
	class 101st_Jumppack_Medic : RD501_JLTS_Clone_jumppack_mc
	{
		dlc = "101st_Aux_Mod";
		displayname="DBA Medic Jumppack (JLTS)";
		maximumLoad=500;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\101st_MedJumpack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Jumppack_Dagger : RD501_JLTS_Clone_jumppack_mc
	{
		dlc = "101st_Aux_Mod";
		displayname="DBA Dagger Jumppack (JLTS)";
		maximumLoad=500;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\101st_DaggerJumpack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	class 101st_Jumppack_single : JLTS_Clone_jumppack_JT12
	{
		dlc = "101st_Aux_Mod";
		displayname="DBA Single Use Jumppack (JLTS)";
		maximumLoad=500;
		JLTS_isJumppack=0;
		RD501_jumppack_is_jumppack=1;
		RD501_jumppack_spam_delay=1;
		RD501_jumppack_energy_capacity=1;
		RD501_jumppack_recharge=0;
		RD501_jumppack_jump_effect_script="RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_jump_types[] = 
            {
                {"Half Power",{0,15,1,0,1,1}}
                //{forward vel, vert vel, cost, angle, directional, can prone}
            };
	};
	class 101_yeet_machine: JLTS_Clone_jumppack_JT12
	{
		scope = 2;
		displayname = "DBA Experimental Jetpack";
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
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\101st_Jumpack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};
	/*class 101_Jumppack_Hammer: RD501_JLTS_Clone_jumppack_mc
	{
		scope = 2;
		displayname = "DBA Aviation Survial Pack";
		dlc = "101st_Aux_Mod";
		RD501_jumppack_is_jumppack = 1;
		RD501_jumppack_energy_capacity = 100;
		RD501_jumppack_recharge = .2;
		RD501_jumppack_jump_effect_script = "RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		RD501_jumppack_sound_ignite[] = {"RD501_Jumppack\sounds\cdv21Start.ogg"};
		RD501_jumppack_sound_land[] = {"RD501_Jumppack\sounds\cdv21End.ogg"};
		RD501_jumppack_sound_idle[] = {"RD501_Jumppack\sounds\cdv21Idle.ogg"};
		RD501_jumppack_jump_types[] = 
            {
                {"Survive Ejection",{0,2,100,0,0,1}},
                //{forward vel, vert vel, cost, angle, directional, can prone}
            };
		maximumload = 500;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[] = {"DBA_Republic\Addons\DBA_Armour\DBA_Backpacks\101st_Hammer_Jumpack_CO.paa"};
		model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
	};*/