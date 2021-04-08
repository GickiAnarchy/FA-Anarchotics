class CfgPatches
{
	class _data_hats
	{
		units[] =
		{
			"WarpedWatersHat"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Characters"
		};
	};
};

class CfgSlots
{

};

class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class BaseballCap_ColorBase: Clothing
	{
	};

	class FA_Hat: BaseballCap_ColorBase
	{
		scope = 0;
		displayName="Anarchotics Themed Headwear";
		descriptionShort="A little spice.... errrr..... hats.";
		itemSize[]={2,2};
	};
	class WarpedWatersHat: FA_Hat
	{
		scope = 2;
		displayName="Warped Waters Baseball Cap";
		descriptionShort="Warped Waters Hat comes with any purchase of the promotional 36 pack.";
		hiddenSelectionsTextures[]=
		{
			"\Anarchotics\data\hats\data\WarpedWaters_Hat_co.paa",
			"\Anarchotics\data\hats\data\WarpedWaters_Hat_co.paa",
			"\Anarchotics\data\hats\data\WarpedWaters_Hat_co.paa"
		};
	}
	
	
};

class CfgnonAIVehicles
{

};
