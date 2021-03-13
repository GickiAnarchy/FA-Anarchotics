class CfgPatches
{
	class _data_items
	{
		units[] =
		{
			"DrugTable",
			"DrugTableKit",
			"Phosphorus"
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
		
	//
	//DRUG TABLE
	class DrugTableKit: FA_Item_Kit
	{
		scope = 2;
		displayName="Anarchotics Drug Desk In a Box";
		descriptionShort="A deployable kit that contains the Anarchotics Desk.";
		model="\Anarchotics\data\items\drugtable\tablekit\TableKit.p3d";
	};
	class DrugTable: FA_Item
	{
		scope = 2;
		displayName = "Drug Processing Work Table";
		descriptionShort = "A place to cook your crank, bag your weed, cut your shrooms and probably more than that too!!";
		model = "\Anarchotics\data\items\drugtable\drugtable.p3d";
		weight = 25000;
		physLayer = "item_large";
		simulation = "inventoryItem";
		attachments[] =
		{
			//TODO
		};
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
	
	//
	//METH INGREDIENTS
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
			"\Anarchotics\data\items\phosphorus\phosphorus_co.paa"
		};
		inventorySlot[] =
		{
			//TODO
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
	
	
	//
	//METH TOOLS
	
	
	
};

class CfgnonAIVehicles
{

};
