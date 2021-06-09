class CfgPatches
{
	class _data_drinks
	{
		units[] =
		{
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

class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class Edible_Base;
	class SodaCan_ColorBase: Edible_Base{};
	class Bottle_Base: Edible_Base{};
	
	//Item Base
	class FA_DrinkBase: SodaCan_ColorBase
	{
		scope = 0;
		class Nutrition
		{
			totalVolume=1;
			energy=50;
			water=150;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class FA_MixBase: Inventory_Base
	{
		scope = 0;
	};
	

	//
	class DrinkBase: FA_DrinkBase
	{
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"\Anarchotics\data\drinks\data\FA_EmptyCan_co.paa"
		};
		class Nutrition
		{
			totalVolume=1;
			energy=00;
			water=150;
			nutritionalIndex=1;
			toxicity=0;
		};		
	}


	class BlurSoda: FA_DrinkBase
	{
		scope = 2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"\Anarchotics\data\drinks\data\BlurSoda_co.paa"
		};
	};

	



/* 
	scope=2;
		displayName="$STR_CfgVehicles_PurificationTablets0";
		descriptionShort="$STR_CfgVehicles_PurificationTablets1";
		model="\dz\gear\medical\Water_purification_tablets.p3d";
		rotationFlags=17;
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="pills";
		quantityBar=0;
		absorbency=0.69999999;
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
								"DZ\gear\medical\data\water_purification_tablets.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\water_purification_tablets.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\water_purification_tablets_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\water_purification_tablets_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\water_purification_tablets_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet="Tablets_open_SoundSet";
					id=201;
				};
				class Tablets_catch
				{
					soundSet="Tablets_catch_SoundSet";
					id=202;
				};
				class Tablets_close
				{
					soundSet="Tablets_close_SoundSet";
					id=203;
				};
				class pickup
				{
					soundSet="purificationtablets_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="purificationtablets_drop_SoundSet";
					id=898;
				};
			};
		};
	 */

};
