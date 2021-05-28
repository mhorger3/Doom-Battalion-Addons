#include "101st_Aux_Mod\addons\DBA_Common\script_macros_common.hpp"

class CfgMagazines
{
	class DBA_Mag_Base;

	class DBA_Disruptor_Mag_x1: DBA_Mag_Base
	{
		scope = SCOPE_DEVELOPER;
		displayname = "101st Disruptor Round";
		ammo = "DBA_Disruptor_Ammo";
		model = "\MRC\JLTS\weapons\Core\stun_mag.p3d";
		picture = "\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca.paa";
		mass = 8;
		count = 1;
		initspeed = 50;
		type = 16;
	};
};
