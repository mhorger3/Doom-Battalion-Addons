class East
{
	class DoomCompanyGroups
	{
		name = "101st Custom CIS Groups";
		
		class Doom_Company_BCT
		{
				name = "Basic Combat Training";
				class Doom_Company_AirInfo { 
					faction = "RD501_CIS_Faction";
					icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
					name = "Air Assets";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_OKalani_Vulture_Droid_01";
					}
					class Unit1
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_OKalani_Hyena_Bomber_Droid_01";
					}
					class Unit2
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_OKalani_HMP_Transport_MK2_01";
					};
				};			
				class Doom_Company_TankInfo {
					faction = "RD501_CIS_Faction";
					icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
					name = "Tank Assets";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "RD501_AAT_Light_MkII";
					};
					class Unit1
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "RD501_AAT_Medium_MkII";
					};
					class Unit2
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "RD501_AAT_Medium_snow_MkII";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "RD501_AAT_King_MkII";
					};
					class Unit4
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "RD501_AAT_King_red_MkII";
					};
				};			
				class Doom_Company_MotorizedInfo {
					faction = "RD501_CIS_Faction";
					icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
					name = "Mech Assets";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_OKalani_CIS_Speeder_02";
					};
					class Unit1
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_OKalani_OG_10_Mobile_01";
					};
					class Unit2
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_OKalani_Droideka_Mobile_01";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_OKalani_DSD1_Dwarf_Spider_Droid_01";
					};
					class Unit4
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "RD501_marid_MkII_CIS";
					};
					class Unit5
					{
						position[] = {0,-30,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_OKalani_MTT_01";
					};
				};
				class Doom_Company_BasicInfantryInfo {
					faction = "RD501_CIS_Faction";
					icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
					name = "Infantry Assets 1/2";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "RD501_opfor_unit_B1_low_poly_yellow";
					};
					class Unit1
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_Kalani_B1_AA_Battledroid_V2_01";
					};
					class Unit2
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_Kalani_B1_AT_Battledroid_V2_01";
					};
					class Unit4
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_OKalani_B2_Super_Battledroid_01";
					};
				};
				class Doom_Company_SpecialInfantryInfo {
					faction = "RD501_CIS_Faction";
					icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
					name = "Infantry Assets 2/2";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_OKalani_TSeries_Black_01";
					};
					class Unit1
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_Kalani_BX_Commando_Droid_01";
					};
					class Unit2
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_Kalani_B1_SpecOps_Dark_Battledroid_V3_01";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_OKalani_Eweb_01";
					};
					class Unit4
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_OKalani_Magna_Droid_01";
					};
					class Unit5
					{
						position[] = {-30,-30,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "RD501_opfor_unit_B1_Jammer";
					};
				};		
			
		}
		class Doom_Company_Air
		{
			name = "Air";
			class Doom_Company_XO_Bomber_Squad {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "Bomber Squad";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "O_OKalani_Hyena_Bomber_Droid_01";
				};
				class Unit1
				{
					position[] = {20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_Hyena_Bomber_Droid_01";
				}
				class Unit2
				{
					position[] = {-20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_Hyena_Bomber_Droid_01";
				}
			};
			class Doom_Company_XO_HMP_Escort {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "HMP Escort";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "O_OKalani_HMP_Transport_MK2_01";
				};
				class Unit1
				{
					position[] = {20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_Vulture_Droid_01";
				}
				class Unit2
				{
					position[] = {-20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_Vulture_Droid_01";
				}
			};
			
		};
		class Doom_Company_Armored
		{
			name = "Armor";
			class Doom_Company_AO_Light_AAT_Squad {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "Light AAT Squad";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "RD501_AAT_Light_MkII";
				};
				class Unit1
				{
					position[] = {20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_AAT_Light_MkII";
				}
				class Unit2
				{
					position[] = {-20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_AAT_Light_MkII";
				}
			};
		};
		class Doom_Company_Mixed
		{
			name = "Mixed Convoys";
			class Doom_Company_MX_B2_Patrol_AAT {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "B2 Convoy W/ Light AAT";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "RD501_AAT_Light_MkII";
				};
				class Unit1
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
				class Unit2
				{
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
				class Unit3
				{
					position[] = {0,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
			};
			class Doom_Company_MX_B1_Patrol_AAT {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "B1 Convoy W/ Medium AAT";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "RD501_AAT_Medium_MkII";
				};
				class Unit1
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit2
				{
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit3
				{
					position[] = {0,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
			};
			class Doom_Company_MX_B1_Patrol_MTT {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "B1 Convoy W/ MTT";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "O_OKalani_MTT_01";
				};
				class Unit1
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit2
				{
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit3
				{
					position[] = {20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit4
				{
					position[] = {-20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit5
				{
					position[] = {30,-30,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit6
				{
					position[] = {-30,-30,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
			};
		};
		class Doom_Company_Infantry
		{
			name = "Infantry";
			class Doom_Company_Inf_BX_Commando_HVT {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "BX Mixed Squad with T-Series";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "O_Kalani_BX_Commando_Droid_01";
				};
				class Unit1
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_yellow";
				}
				class Unit2
				{
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
				class Unit3
				{
					position[] = {0,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_TSeries_Black_01";
				}
				class Unit4
				{
					position[] = {20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_red";
				}
				class Unit5
				{
					position[] = {-20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_red";
				}
				class Unit6
				{
					position[] = {30,-30,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_BX_Commando_Droid_01";
				}
				class Unit7
				{
					position[] = {-30,-30,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_BX_Commando_Droid_01";
				}
			};
			class Doom_Company_Inf_BX_Commando_HVT2 {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "BX Jammer Squad with T-Series";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "O_Kalani_BX_Commando_Droid_01";
					class EventHandlers
					{
						init = "setvariable ['ace_medical_unitDamageThreshold', [7,15,15], true]; setUnitAbility 100; setskill ['aimingAccuracy',100]; setskill ['aimingShake',100]; setskill ['aimingSpeed',100]; setskill ['spotDistance',100]; setskill ['spotTime',100]; setskill ['courage',100]; setskill ['reloadSpeed',100];		setSkill ['general', 200]; setAnimSpeedCoef 1.3;";
					};
				};
				class Unit1
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_jammer";
				}
				class Unit2
				{
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
				class Unit3
				{
					position[] = {0,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_TSeries_Black_01";
				}
				class Unit4
				{
					position[] = {20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_red";
				}
				class Unit5
				{
					position[] = {-20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_red";
				}
				class Unit6
				{
					position[] = {30,-30,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_BX_Commando_Droid_01";
					class EventHandlers
					{
						init = "setvariable ['ace_medical_unitDamageThreshold', [7,15,15], true]; setUnitAbility 100; setskill ['aimingAccuracy',100]; setskill ['aimingShake',100]; setskill ['aimingSpeed',100]; setskill ['spotDistance',100]; setskill ['spotTime',100]; setskill ['courage',100]; setskill ['reloadSpeed',100];		setSkill ['general', 200]; setAnimSpeedCoef 1.3;";
					};
				}
				class Unit7
				{
					position[] = {-30,-30,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_BX_Commando_Droid_01";
					class EventHandlers
					{
						init = "setvariable ['ace_medical_unitDamageThreshold', [7,15,15], true]; setUnitAbility 100; setskill ['aimingAccuracy',100]; setskill ['aimingShake',100]; setskill ['aimingSpeed',100]; setskill ['spotDistance',100]; setskill ['spotTime',100]; setskill ['courage',100]; setskill ['reloadSpeed',100];		setSkill ['general', 200]; setAnimSpeedCoef 1.3;";
					};
				}
			};
			class Doom_Coompany_Squad_V0
			{
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "5-man Patrol";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_team_leader";
				}
				class Unit1
				{
					position[] = {2,-2,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit2
				{
					position[] = {-2,-2,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit3
				{
					position[] = {4,-4,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly";
				}
				class Unit4
				{
					position[] = {-4,-4,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly";
				}
			};
			class Doom_Coompany_Squad_V1
			{
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "10-man Squad";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B2_droid_Standard";
				}
				class Unit1
				{
					position[] = {2,-2,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit2
				{
					position[] = {-2,-2,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit3
				{
					position[] = {4,-4,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit4
				{
					position[] = {-4,-4,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_team_leader";
				}
				class Unit5
				{
					position[] = {6,-6,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_team_leader";
				}
				class Unit6
				{
					position[] = {-6,-6,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly";
				}
				class Unit7
				{
					position[] = {8,-8,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly";
				}
				class Unit8
				{
					position[] = {-8,-8,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_maaws";
				}
				class Unit9
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_maaws";
				}
			};
			class Doom_Coompany_Squad_V2
			{
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "15-man Section";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B2_droid_Standard";
				}
				class Unit1
				{
					position[] = {2,-2,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit2
				{
					position[] = {-2,-2,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit3
				{
					position[] = {4,-4,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit4
				{
					position[] = {-4,-4,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_team_leader";
				}
				class Unit5
				{
					position[] = {6,-6,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_team_leader";
				}
				class Unit6
				{
					position[] = {-6,-6,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly";
				}
				class Unit7
				{
					position[] = {8,-8,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly";
				}
				class Unit8
				{
					position[] = {-8,-8,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_maaws";
				}
				class Unit9
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_maaws";
				}
				class Unit10
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly";
				}
				class Unit11
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly";
				}
				class Unit12
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly";
				}
				class Unit13
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_heavy";
				}
				class Unit14
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_E_Web";
				}
			};
			class Doom_Company_Inf_Platoon {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "B1 Platoon with mixed B2";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "RD501_opfor_unit_B1_low_poly_yellow";
				}
				class Unit1
				{
					position[] = {2,-2,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit2
				{
					position[] = {-2,-2,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit3
				{
					position[] = {4,-4,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit4
				{
					position[] = {-4,-4,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit5
				{
					position[] = {6,-6,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit6
				{
					position[] = {-6,-6,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit7
				{
					position[] = {8,-8,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit8
				{
					position[] = {-8,-8,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit9
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
				class Unit10
				{
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
				class Unit11
				{
					position[] = {12,-12,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit12
				{
					position[] = {-12,-12,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit13
				{
					position[] = {14,-14,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit14
				{
					position[] = {-14,-14,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit15
				{
					position[] = {16,-16,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit16
				{
					position[] = {-16,-16,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit17
				{
					position[] = {18,-18,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit18
				{
					position[] = {-18,-18,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit19
				{
					position[] = {20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
				class Unit20
				{
					position[] = {-20,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
				class Unit21
				{
					position[] = {22,-22,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit22
				{
					position[] = {-22,-22,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit23
				{
					position[] = {24,-24,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit24
				{
					position[] = {-24,-24,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit25
				{
					position[] = {26,-26,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit26
				{
					position[] = {-26,-26,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit27
				{
					position[] = {28,-28,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit28
				{
					position[] = {-28,-28,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_Battledroid_V2_01";
				}
				class Unit29
				{
					position[] = {30,-30,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
				class Unit30
				{
					position[] = {-30,-30,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_B2_Super_Battledroid_01";
				}
				
			}
		};
		class Doom_Company_Motorized
		{
			name = "Motorized";
			class Doom_Company_Speeder_Patrol {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "CIS Speeder Patrol";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "O_OKalani_CIS_Speeder_02";
				};
				class Unit1
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_CIS_Speeder_02";
				}
				class Unit2
				{
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_CIS_Speeder_02";
				}
				class Unit3
				{
					position[] = {0,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_CIS_Speeder_02";
				}
			};
		};
		class Doom_Company_Naval
		{
			name = "Naval";
			class Doom_Company_Naval_Patrol {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "CIS Naval Patrol";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "O_OKalani_CIS_Patrol_Boat_01";
				};
				class Unit1
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_CIS_Patrol_Boat_01";
				}
				class Unit2
				{
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_OKalani_CIS_Patrol_Boat_01";
				}
			};
		};
		class Doom_Company_SpecOps
		{
			name = "Special Ops";
			class Doom_Company_Death_Patrol {
				faction = "RD501_CIS_Faction";
				icon = "\A3\ui_f\data\map\markers\natio\o_info.paa";
				name = "CIS Death Team";
				rarityGroup = 0.5;
				side = 0;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "O_OKalani_IG_88_Assassin_Droid_01";
				};
				class Unit1
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_SpecOps_Dark_Battledroid_V3_01";
				}
				class Unit2
				{
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_SpecOps_Dark_Battledroid_V3_01";
				}
				class Unit3
				{
					position[] = {0,-20,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "O_Kalani_B1_SpecOps_Dark_Battledroid_V3_01";
				}
			};
		};
	};
};

class West
{
	class DoomCompanyRepublicGroups
	{
		name = "101st Custom Republic Groups";
		class Doom_Company_BCT
		{
			name = "Basic Combat Training";
			class Doom_Company_Republic
			{
				faction = "RD501_Republic_Faction";
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
				name = "Vehicle Assets";
				rarityGroup = 0.5;
				side = 1;
				class Unit0
				{
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 1;
					vehicle = "RD501_sw_barc";
				};
				class Unit1
				{
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 1;
					vehicle = "RD501_saber_republic_saber_MkII";
				};
				class Unit2
				{
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 1;
					vehicle = "RD501_laat_101st";
				};
				class Unit3
				{
					position[] = {20,-20,0};
					rank = "PRIVATE";
					side = 1;
					vehicle = "101st_Doom_Bantha";
				};
				class Unit4
				{
					position[] = {-20,-20,0};
					rank = "PRIVATE";
					side = 1;
					vehicle = "RD501_fast_infantry_transport_republic";
				};
			};
		};						
	};
};