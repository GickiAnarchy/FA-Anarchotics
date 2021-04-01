class CfgPatches
{
	class _data
	{
		units[] =
		{
			"DrugTableKit",
			"DrugTable",
			"Heisenberg",
			"BlurSoda"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data", "DZ_Gear"
		};
	};
};

class CfgSlots
{

};

class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class Edible_Base;
	class Edible_Base;
	class Bottle_Base: Edible_Base{};
	class SodaCan_ColorBase: Edible_Base{};
	class FA_Item: Container_Base {};
	class FA_Item_Kit: FA_Item {};

	//ANARCHOTICS BASES
	class FA_Item: Container_Base
	{
		scope=0;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		descriptionShort="";
		quantityBar=1;
		carveNavmesh=1;
		visibilityModifier=0.94999999;
		canBeDigged=0;
		alignHologramToTerain=1;
		heavyItem=1;
		weight=10;
		itemSize[]={10,10};
		itemBehaviour=2;
		physLayer="item_large";
		rotationFlags=2;
		class Cargo
		{
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
				};
			};
		};
	};
	class FA_Item_Kit: FA_Item
	{
		scope=0;
		displayName="";
		itemSize[]={4,3};
		simulation="inventoryItem";
		physLayer="item_large";
		heavyItem = 1;
		weight=300;
	};

	//DRUG TABLE
	class DrugTableKit: FA_Item_Kit
	{
		scope = 2;
		displayName="Anarchotics Drug Desk In a Box";
		descriptionShort="A deployable kit that contains the Anarchotics Desk.";
		model="\Anarchotics\data\kit\Kit.p3d";
		hiddenSelectionsTextures[] =
		{
			"\Anarchotics\data\kit\kit_co.paa"
		};
	};
	class DrugTable: FA_Item
	{
		scope = 2;
		displayName = "Drug Processing Work Table";
		descriptionShort = "A place to cook your crank, bag your weed, cut your shrooms and probably more than that too!!";
		model = "\Anarchotics\data\drugtable\drugtable.p3d";
		hiddenSelectionsTextures[] =
		{
			"\Anarchotics\data\drugtable\drugtable_co.paa"
		};
		weight = 25000;
		physLayer = "item_large";
		simulation = "inventoryItem";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\power_generator.rvmat"}},{0.7,{"DZ\gear\camping\data\power_generator.rvmat"}},{0.5,{"DZ\gear\camping\data\power_generator_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\power_generator_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\power_generator_destruct.rvmat"}}};
				};
			};
		};
	};

	//ITEMS
	class Heisenberg_Base: SodaCan_ColorBase
	{
		scope = 0;		
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 330;
		varQuantityMin = 0;
		varQuantityMax = 330;
		isMeleeWeapon = 1;	
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 30;
				healthLevels[] = 
				{
					{
						1.0,
						{
							"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"
						}
					},
					{
						0.7,
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
						0.3,
						{
							"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"
						}
					},
					{
						0.0,
						{
							"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"
						}
					}
				};
			};
		};
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
	};
	class Heisenberg: Heisenberg_Base
	{
		scope = 2;
		displayName = "Heisenberg's Blue Sky";
		descriptionShort = "A high powered energy drink for the strong people with weak and heavy eyes. Guaranteed to give you a boost. Use with caution.";
		model = "\Anarchotics\data\heisenberg\Heisenberg.p3d";
		hiddenSelections[] = 
		{
			"can"
		};
		hiddenSelectionsTextures[] = 
		{
			"Anarchotics\data\heisenberg\data\Heisenberg_co.paa"
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
	};	
	class BlurSoda: Heisenberg_Base
	{
		scope = 2;
		displayName = "Blur Soda";
		descriptionShort = "Taste of BLUR with the added flavor of the acai berry!";
		model = "\Anarchotics\data\heisenberg\BlurSoda.p3d";
		hiddenSelections[] = 
		{
			"can"
		};
		hiddenSelectionsTextures[] = 
		{
			"Anarchotics\data\heisenberg\data\blursoda_co.paa"
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 15.5;
			water = 75;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	}
	class WarpedWaters: Heisenberg_Base
	{
		scope = 2;
		displayName = "Warped Water";
		descriptionShort = "The wonderful taste of interdimensional water from no less than 3 dimension jumps from today!";
		model = "\Anarchotics\data\heisenberg\WarpedWaters.p3d";
		hiddenSelections[] = 
		{
			"can"
		};
		hiddenSelectionsTextures[] = 
		{
			"Anarchotics\data\heisenberg\data\warpedwaters_co.paa"
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 5;
			water = 97;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	}

};

class CfgnonAIVehicles
{

};
