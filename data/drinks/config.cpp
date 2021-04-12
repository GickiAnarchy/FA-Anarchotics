class CfgPatches
{
	class _data_drinks
	{
		units[] =
		{
			"BlurSoda",
			"WarpedWaters"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data", "DZ_Gear"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class Edible_Base;
	class Bottle_Base: Edible_Base{};
	//Item
	class FA_EmptyCan: Inventory_Base
	{
	  scope = 2;
	  model="\dz\gear\drinks\SodaCan.p3d";
	  hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = 
		{
			"\Anarchotics\data\drinks\data\FA_EmptyCan_co.paa"
		};
	  itemSize[] = {1,2};
	};
	class FA_24PackBase: Container_Base
	{
		scope = 0;
	};
	
	//Drinks
	class FA_DrinkBase: Edible_Base
	{
		model="\dz\gear\drinks\SodaCan.p3d";
		hiddenSelections[]=
		{
			"camoGround"
		};
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 330;
		varQuantityMin = 0;
		varQuantityMax = 330;
		isMeleeWeapon = 1;
		class Nutrition
		{
			totalVolume = 1;
			energy = 59.5;
			water = 69;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	
	class BlurSoda: FA_DrinkBase
	{
		scope = 2;
		displayName = "Blur Soda";
		descriptionShort = "Taste of BLUR with the added flavor of the acai berry!"
		hiddenSelectionsTextures[] = 
		{
			"\Anarchotics\data\drinks\data\BlurSoda_co.paa"
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 15.5;
			water = 75;
			nutritionalIndex = 1;
			toxicity = 1;
		};
	};
	
	class WarpedWaters: FA_DrinkBase
	{
		scope = 2;
		displayName = "Warped Water";
		descriptionShort = "The wonderful taste of interdimensional water from no less than 3 dimension jumps from today!";
		hiddenSelectionsTextures[]=
		{
			"\Anarchotics\data\drinks\data\warpedwaters_co.paa"
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 5;
			water = 97;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	
	class CompletelyPoison: FA_DrinkBase
	{
		scope = 2;
		displayName = "Completely Poison Original Soda";
		descriptionShort = "A taste so wicked some are convinced that something so addictive can only be nothing but complete poison to the body, and soul.";
		hiddenSelectionsTextures[]=
		{
			"\Anarchotics\data\drinks\data\CompletelyPoison_Drink_co.paa"
		};
	};
};
