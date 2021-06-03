class cfgSoundShaders {
	class E11DShotShader
	{
		samples[] =
		{
			{"\101st_Aux_Mod\Addons\DBA_Weapons\empireEraWeapons\sounds\E11DShot"},
		};
		volume = db10;
		range = 750; 
		rangeCurve[] =
		{
			{0, 1},
			{300, 0.8},
			{500, 0.6},
			{750, 0.4},
			{900, 0.3},
			{1150, 0.2},
			{1300, 0.1},
			{2000, 0.05}
		};
	};
};

class CfgSoundCurves
{

	// amplitude attenuation curve definitions
	// note that x value is scaled to range
	class E11DInverseSquareCurve
	{
		points[] =
		{
		  {0.00, 1},
		  {0.05, 1},
		  {0.10, 1},
		  {0.15, 1},
		  {0.20, 0.8},
		  {0.25, 0.75},
		  {0.30, 0.55},
		  {0.35, 0.5},
		  {0.40, 0.45},
		  {0.45, 0.03},
		  {0.50, 0.02},
		  {0.60, 0.014},
		  {0.70, 0.06},
		  {0.80, 0.015},
		  {0.90, 0.01},
		  {1.00, 0}
		};
	};
};

class cfgSound3DProcessors
{
	class E11DShot3DProcessingType
	{
		type = "panner"; 
		innerRange = 0; 
		range = 5; 
		rangeCurve = LinearCurve; 
	};
};
class cfgDistanceFilters
{
	class E11DShotDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter"; 
		minCutoffFrequency = 300; 
		qFactor = 1; 
		innerRange = 10; 
		range = 2000; 
		powerFactor = 32; 
	};
};
class CfgSoundSets
{
	class E11DShot_SoundSet
	{
		soundShaders[] =
		{
			E11DShotShader
		};

		volumeFactor = 1.6; 
		volumeCurve = E11DInverseSquareCurve; 
		sound3DProcessingType = E11DShot3DProcessingType;
		distanceFilter = E11DShotDistanceFreqAttenuationFilter;
		spatial = true; 
		doppler = false; 
		loop = false;
	};
};