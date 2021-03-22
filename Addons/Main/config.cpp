/*class RscText;
class RscStandardDisplay;
class RscControlsGroup;
class RscPicture;
class RscPictureKeepAspect;
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls {
				class Logo: RscPictureKeepAspect
				{
                    access = 0;
					text = "";
					style = "0x30 + 0x800";
					w = "0.5 * safezoneW";
					x = "0.25 * safezoneW";
					y = "0.3125 * safezoneH";
				};

                class Noise: RscPicture
                {
					text = "\101st_Aux_Mod\Addons\Main\GARC.paa";
                };
			};
			class controlsBackgroud {
				class Noise : RscPicture {
					text = "\101st_Aux_Mod\Addons\Main\GARC.paa";
				}
				
			}
		};
	};
}; */

class CfgPatches
{
#include "CfgPatches.hpp"
};
class CfgMarkers
{
	#include "CfgMarkers.hpp"
};
class CfgFactionClasses
{
#include "CfgFactionClasses.hpp"
};
class CfgEditorCategories
{
	class Category101stAux
	{
		displayName="101st Assets";
	};
};
class CfgEditorSubcategories
{
	#include "CfgEditorSubcategories.hpp"
};
class CBA_Extended_EventHandlers_base;

class CfgSFX
{
#include "CfgSFX.hpp"
};
class CfgGroups
{
#include "CfgGroups.hpp"
};
