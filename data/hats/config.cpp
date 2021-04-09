class CfgPatches
{
	class _data_hats
	{
		units[] =
		{
			"WarpedWatersHat",
			"CompletelyPoisonHat",
			"BlurSodaHat"			
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Characters"
		};
	};
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
	};
	class CompletelyPoisonHat: FA_Hat
	{
		scope = 2;
		displayName="Completely Poison Baseball Cap";
		descriptionShort="A one size fits all cap with the Completely Poison brand. A style for any type of toxic creature.";
		hiddenSelectionsTextures[]=
		{
			"\Anarchotics\data\hats\data\CompletelyPoison_hat_co.paa",
			"\Anarchotics\data\hats\data\CompletelyPoison_hat_co.paa",
			"\Anarchotics\data\hats\data\CompletelyPoison_hat_co.paa"
		};
	};
	class BlurSodaHat: FA_Hat
	{
		scope = 2;
		displayName="Blur Soda Baseball Cap";
		descriptionShort="A one size fits all cap with the Blur brand. A style for any type of misfit creature.";
		hiddenSelectionsTextures[]=
		{
			"\Anarchotics\data\hats\data\BlurSoda_hat_co.paa",
			"\Anarchotics\data\hats\data\BlurSoda_hat_co.paa",
			"\Anarchotics\data\hats\data\BlurSoda_hat_co.paa"
		};
	};
	
};