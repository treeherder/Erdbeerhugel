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
		class Navmesh
		{
			navmeshName="\Erdbeerhugel\navmesh\testing.nm";
			filterIsolatedIslandsOnLoad = true;
			visualiseOffset = 0.0;

			class GenParams
			{
				tileWidth = 50.0;
				
				cellSize1 = 0.25;
				cellSize2 = 0.1;
				cellSize3 = 0.1;
				
				filterIsolatedIslands = true;
				seedPosition[] = {3600, 0, 3600};
				
				class Agent
				{
					diameter = 0.6;
					
					standHeight = 1.5;
					crouchHeight = 1.0;
					proneHeight = 0.5;
					
					maxStepHeight = 0.45;
					maxSlope = 60.0;
				};
				
				class Links
				{	
					class ZedJump387_050
					{
						jumpLength = 1.50;
						jumpHeight = 0.50;
						minCenterHeight = 0.3;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66ff0000;
					};
					class ZedJump388_050
					{
						jumpLength = 1.50;
						jumpHeight = 0.50;
						minCenterHeight = -0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66dd5500;
					};
					class ZedJump387_110
					{
						jumpLength = 3.90;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66008000;
					};
					class ZedJump420_160
					{
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x660000ff;
					};
					class ZedJump265_210
					{
						jumpLength = 2.45;
						jumpHeight = 2.5;
						minCenterHeight = 1.8;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"climb"};
						color = 0x669400d3;
					};
					class Fence50_110deer
					{
						typeId = 100;
						jumpLength = 8.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType="jump2";
						flags[] = {"jumpOver"};
						color = 0x66aaaaFF;
					};
					class Fence110_160deer 
					{
						typeId = 101;
						jumpLength = 8.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType="jump3";
						flags[] = {"jumpOver"};
						color = 0x6624fff8;
					};
					class Fence50_110hen
					{
						typeId = 110;
						jumpLength = 4.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump4";
						flags[] = {"jumpOver"};
						color = 0xFFFFAA00;
					};
					class Fence110_160hen
					{
						typeId = 111;
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump4";
						flags[] = {"jumpOver"};
						color = 0xFFFFAA00;
					};
				};
			};
		};

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