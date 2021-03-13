class CfgPatches
{
	class _data_ingredients
	{
		units[] = 
		{
			"Phosphorus",
			"Heisenberg",
			"Heisenberg_Ingredient"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Gear",
			"DZ_Vehicles_Parts"
		};
	};
};


class CfgVehicles
{
	class Edible_Base;
	class Inventory_Base;
	class SodaCan_ColorBase: Edible_Base {};
	
	class Phosphorus: Inventory_Base
	{
		scope=2;
		displayName="Phosphorus";
		descriptionShort="An ingredient in making meth.";
		model="\DZ\gear\medical\dexamphetamine.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		hiddenSelections[] = 
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] = 
		{
			"\Anarchotics\data\ingredients\red\phosphorus_co.paa"
		};
		inventorySlot[] =
		{
			"Phosphorus"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};		
	};
	
	class Heisenberg_Base:  SodaCan_ColorBase
	{
		scope = 0;
		model = "\Anarchotics\data\ingredients\heisenberg\Heisenberg.p3d";
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 330;
		varQuantityMin = 0;
		varQuantityMax = 330;
		isMeleeWeapon = 1;
		hiddenSelections[] = 
		{
			"can"
		};
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
			energy = 43.5;
			water = 89;
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
		displayName = "Heisenberg";
		descriptionShort = "";
		ChangeInventorySlot[]=
		{
			"Heisenberg"
		};
		ChangeIntoOnAttach[]=
		{
			"",
			"Heisenberg_Ingredient"
		};
		hiddenSelections[] = 
		{
			"can"
		};
		hiddenSelectionsTextures[] = 
		{
			"\Anarchotics\data\ingredients\heisenberg\data\Heisenberg_co.paa"
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
	
	class Heisenberg_Ingredient: Inventory_Base
	{
		scope = 2;
		displayName = "Heisenberg Product";
		model = "\Anarchotics\data\ingredients\heisenberg\Heisenberg.p3d";
		hiddenSelections[] = 
		{
			"can"
		};
		hiddenSelectionsTextures[] = 
		{
			"\Anarchotics\data\ingredients\heisenberg\data\Heisenberg_co.paa"
		};
		ChangeInventorySlot[]=
		{
			""
		};		
		ChangeIntoOnDetach[] =
		{
			"Heisenberg"
		};
	};
	
	
};