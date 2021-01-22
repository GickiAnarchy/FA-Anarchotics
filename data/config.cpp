class CfgPatches
{
	class _data
	{
		units[] = 
		{

		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{

		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class HouseNoDestruct;
	class Static;
	
	class DrugTable: Inventory_Base
	{
		scope = 2;
		displayName = "Drug Processing Work Table";
		descriptionShort = "A place to cook your crank, bag your weed, cut your shrooms and probably more than that too!!";
		model = "\Anarchotics\data\drugtable\drugtable.p3d";
		//rotationFlags = 2;
		slopeTolerance = 0.4;
		yawPitchRollLimit[] = {45,45,45};
		weight = 25000;
		itemSize[] = {10,10};
		//itemBehaviour = 0;
		//attachments[] = {};
		//fuelTankCapacity = 7000;
		//carveNavmesh = 1;
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
		//repairableWithKits[] = {7};
		//repairCosts[] = {25.0};
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
		//	class AnimationSources
		//	{
			
		//	}
		
		//	class AnimEvents
		//	{
		//		class SoundWeapon
		//		{
			
		//		};
		//	};
	};
	
}