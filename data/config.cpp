class CfgPatches
{
	class _data
	{
		units[] =
		{};
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
		physLayer="item_large";
		heavyItem = 1;
		weight=300;
	};

};

class CfgnonAIVehicles
{

};
