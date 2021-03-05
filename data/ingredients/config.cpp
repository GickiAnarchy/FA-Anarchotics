class CfgPatches
{
	class _data_ingredients
	{
		units[] = 
		{
			"Phosphorus"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Gear"
		};
	};
};


class CfgVehicles
{
	class Inventory_Base;
	
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
	
};




