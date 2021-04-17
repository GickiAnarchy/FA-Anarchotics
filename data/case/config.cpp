class CfgPatches
{
	class _data_case
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear"
		};
	};
};


class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class SmallProtectorCase: Container_Base{};
	
	class FA_Case: SmallProtectorCase
	{
		scope = 2;
		displayName = "";
		descriptionShort = "";
		model="\dz\gear\containers\Protector_Case.p3d";
		hiddenSelectionsTextures[] =
		{
			"\Anarchotics\data\case\FA_Case_co.paa"
		};
		rotationFlags=17;
		weight=980;
		itemSize[]={3,4};
		itemsCargoSize[]={6,7};
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		
	};
	
	/*
		class SmallProtectorCase: Container_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SmallProtectorCase0";
		descriptionShort="$STR_CfgVehicles_SmallProtectorCase1";
		model="\dz\gear\containers\Protector_Case.p3d";
		rotationFlags=17;
		weight=980;
		itemSize[]={3,4};
		itemsCargoSize[]={3,4};
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Protector_Case_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	*/
};