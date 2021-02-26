class CfgPatches
{
	class _data
	{
		units[] = 
		{
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

class CfgVehicles
{
	class Inventory_Base;
	
	class DrugTable: Inventory_Base
	{
		scope = 2;
		displayName = "Drug Processing Work Table";
		descriptionShort = "A place to cook your crank, bag your weed, cut your shrooms and probably more than that too!!";
		model = "\Anarchotics\data\drugtable\drugtable.p3d";
		// slopeTolerance = 0.4;
		// yawPitchRollLimit[] = {45,45,45};
		weight = 25000;
		itemSize[] = {10,10};
		heavyItem = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\Anarchotics\data\drugtable\drugtable_co.paa"};
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
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyStorageMax = 10000;
			energyUsagePerSecond = 0.28;
			reduceMaxEnergyByDamageCoef = 0.5;
			energyAtSpawn = 5000;
			powerSocketsCount = 4;
			compatiblePlugTypes[] = {2,6};
		};
	};
};