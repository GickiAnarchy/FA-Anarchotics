class CfgPatches
{
	class _data
	{
		units[] = 
		{
			"DrugTable",
			"DrugTable"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data"
		};
	};
};

class CfgSlots
{
    class Slot_Phosphorus
    {
        name = "Phosphorus";
        displayName = "Phosphorus";
        ghostIcon = "gascanister";
    };
};

class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;

	class FA_Item: Container_Base
	{
		scope=0;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		descriptionShort="The items can be dismantled with a screwdriver, hammer or pliers.";
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
		displayName="Anarchotics Drug Desk In a Box";
		descriptionShort="A deployable kit that contains the Anarchotics Desk.";
		model="\Anarchotics\data\drugtable\tablekit\TableKit.p3d";
		itemSize[]={4,3};
		simulation="inventoryItem";
		physLayer="item_small";
		weight=300;
	};
	
	class DrugTableKit: FA_Item_Kit
	{
		scope = 2;
		displayName="Anarchotics Drug Desk In a Box";
		descriptionShort="A deployable kit that contains the Anarchotics Desk.";
		model="\Anarchotics\data\drugtable\tablekit\TableKit.p3d";
	};
	
	class DrugTable: FA_Item
	{
		scope = 2;
		displayName = "Drug Processing Work Table";
		descriptionShort = "A place to cook your crank, bag your weed, cut your shrooms and probably more than that too!!";
		model = "\Anarchotics\data\drugtable\drugtable.p3d";
		weight = 25000;
		attachments[] = 
		{
			"Phosphorus"
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
	
};

class CfgnonAIVehicles
{
	class ProxyAttachment;
	class ProxyPhosphorus: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Phosphorus";
		model = "\Anarchotics\data\ingredients\red\phosphorus_co.paa";
	};
};