#define _ARMA_

class CfgPatches
{
	class Erdbeerhugel
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces"};
		author = "winter";
		name = "Erdbeerhugel";
		url = "https://github.com/treeherder/Erdbeerhugel";
	};
};
class CfgWorlds
{
	class DefaultLighting;
	class CAWorld;
	class ChernarusPlus: CAWorld
	{
		class Grid;
	};
	class Erdbeerhugel: ChernarusPlus
	{
		worldId = 2;
		cutscenes[] = {};
		description = "Erdbeerhugel";
		icon = "";
		worldName = "Erdbeerhugel\Erdbeerhugel.wrp";
		pictureMap = "";
		pictureShot = "";
		oceanMaterial = "{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanNiceMaterial = "{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanStormMaterial = "{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = -40;
		latitude = -40;
		class AISpawnerParams{};
		class OutsideTerrain
		{
			satellite = "DZ\rocks\Data\MainTextures\quarry\bluntstone_co.paa";
			enableTerrainSynth = "true";
			class Layers
			{
				class Layer0
				{
					nopx = "DZ\surfaces_bliss\data\terrain\en_stones_nopx.paa";
					texture = "DZ\surfaces_bliss\data\terrain\en_stones_ca.paa";
				};
			};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = -15360;
			class Zoom1
			{
				zoomMax = 0.5;
				format = "XY";
				formatX = "Aa";
				formatY = "00";
				stepX = 200;
				stepY = 200;
			};
			class Zoom2
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "A";
				formatY = "0";
				stepX = 2000;
				stepY = 2000;
			};
		};
		startTime = "8:30";
		startDate = "01/05/1985";
		startWeather = 0.1;
		startFog = 0;
		forecastWeather = 0.3;
		forecastFog = 0;
		seagullPos[] = {1272.842,150,14034.962};
		centerPosition[] = {2500,2500,300};
		ilsPosition[] = {2545,3000};
		ilsDirection[] = {0,0.08,1};
		ilsTaxiIn[] = {2495,2725,2495,2850,2508,2860,2508,3000,2520,3010,2545,3000};
		ilsTaxiOff[] = {2545,2445,2520,2425,2495,2445,2495,2725};
		drawTaxiway = "false";
		class ReplaceObjects{};
		class Sounds
		{
			sounds[] = {};
		};
		class Animation
		{
			vehicles[] = {};
		};
		class Lighting: DefaultLighting{};
		clutterGrid = 1.11;
		clutterDist = 150;
		noDetailDist = 40;
		fullDetailDist = 5;
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 4;
		class Subdivision
		{
			class Fractal
			{
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise
			{
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = 0;
			minSlope = 0.02;
		};
		class Ambient{};
	};
};
// class CfgSurfaceCharacters
// {
	// class cp_grass
	// {
		// probability[] = {0.1735,0.025,0.025,0.70,0.0015,0.05};
		// names[] = {"Anthoxanthum","Carduus","Hypericum","Elytrigia","Calamagrostis","ElytrigiaTall"};
	// };
	// class cp_conifer_common1
	// {	
		// probability[] = {0.05,0.20,0.10,0.5985,0.0015,0.05};
		// names[] = {"Twigs","Vaccinium","Vaccinium_tall","Elytrigia","Hypericum","cones"};
        // };
	// class cp_broadleaf_sparse1
	// {	
		// probability[] = {0.05,0.20,0.10,0.5985,0.0015};
		// names[] = {"Twigs","Vaccinium","Vaccinium_tall","Elytrigia","Hypericum"};
        // };
	// class cp_conifer_moss1
	// {	
                // probability[] = {0.05,0.20,0.10,0.5985,0.0015,0.05};
		// names[] = {"Twigs","Vaccinium","Vaccinium_tall","Elytrigia","Hypericum","cones"};
        // };
	// class cp_conifer_common2
	// {	
		// probability[] = {0.05,0.20,0.10,0.5985,0.0015};
		// names[] = {"Twigs","Vaccinium","Vaccinium_tall","Elytrigia","Hypericum"};
        // };
	// class cp_dirt
	// {
		// probability[] = {0.5,0.5};
		// names[] = {"Carduus","Twigs"};
        // };
	// class cp_rock
	// {
		// probability[] = {0.2};
		// names[] = {"Anthoxanthum"};
        // };
// };
class CfgWorldList
{
	class Erdbeerhugel{};
};