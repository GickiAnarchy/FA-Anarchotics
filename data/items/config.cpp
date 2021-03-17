class CfgPatches
{
	class _data_items
	{
		units[] =
		{
			"DrugTable",
			"DrugTableKit",
			"Phosphorus",
			"RaidSpray",
			"Heisenberg"
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
	class Spraycan_ColorBase: Inventory_Base{};
	class Container_Base;
	class Edible_Base;
	class SodaCan_ColorBase: Edible_Base{};
	class FA_Item: Container_Base {};
	class FA_Item_Kit: FA_Item {};
	
		
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
			"Material_Phosphorus",
			"Material_Heisenberg",
			"Material_RedHeisenberg"
			// "Material_RaidSpray",
			// "Material_Epinephrine",
			// "Material_Battery",
			// "Material_Wok",
			// "Material_PortableStove"
		};
		/* class GUIInventoryAttachmentsProps
		{
			class Materials
			{
				name = "Ingredients";
				description = "";
				attachmentSlots[] = 
				{
					"Material_Phosphorus",
					"Material_Heisenberg",
					"Material_RaidSpray",
					"Material_Epinephrine"
				};
				icon = "missing";
			};
			class Power
			{
				name = "Power Source";
				description = "";
				attachmentSlots[] =
				{
					"Material_Battery"
				};
				icon = "missing";
			};
			class Equipment
			{
				name = "Equipment to cook with";
				description = "";
				attachmentSlots[] =
				{
					"Material_Wok",
					"Material_PortableStove"
				};
				icon = "missing";
			};
		}; */
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
			"Material_Phosphorus"
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
		model = "\Anarchotics\data\items\heisenberg\Heisenberg.p3d";
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 330;
		varQuantityMin = 0;
		varQuantityMax = 330;
		isMeleeWeapon = 1;
		inventorySlot[] =
		{
			"Material_Heisenberg"
		};
		hiddenSelections[] = 
		{
			"can"
		};
		hiddenSelectionsTextures[] = 
		{
			"\Anarchotics\data\items\heisenberg\data\Heisenberg_co.paa"
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
	class RedHeisenberg: Heisenberg_Base
	{
		scope = 2;
		displayName = "Red Heisenberg";
		descriptionShort = "Heisenberg with phosphorus mixed in";
		hiddenSelections[] =
		{
			"\Anarchotics\data\items\heisenberg\data\RedHeisenberg_co.paa"
		};
		inventorySlot[] =
		{
			"Material_RedHeisenberg"
		};
	}
	class RaidSpray: Spraycan_ColorBase
	{
		scope = 2;
		displayName = "";
		descriptionShort = "";
		model = "\DZ\gear\consumables\spraycan.p3d";
		inventorySlot[] = 
		{
			"Material_RaidSpray"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"\Anarchotics\data\items\raidspray\fa_raidspray_co.paa"
		};
	};
	
	
	
	//
	//METH TOOLS
	
	
	
};

class CfgSlots
{
	//Phase 1
	class Slot_Material_Phosphorus
	{
		name = "Material_Phosphorus";
		displayName = "Phosphorus";
		selection = "Material_Phosphorus";
		ghostIcon = "missing";
		//show = "false";
	};
	class Slot_Material_Heisenberg
	{
		name = "Material_Heisenberg";
		displayName = "Heisenberg";
		selection = "Material_Heisenberg";
		ghostIcon = "missing";
		//show = "false";
	};	
	/*
	class Slot_Material_RaidSpray
	{
		name = "Material_RaidSpray";
		displayName = "Raid";
		selection = "Material_RaidSpray";
		ghostIcon = "missing";
		show = "false";
	};
	class Slot_Material_Epinephrine
	{
		name = "Material_Epinephrine";
		displayName = "Epinephrine";
		selection = "Material_Epinephrine";
		ghostIcon = "missing";
		show = "false";
	};
	class Slot_Material_Wok
	{
		name = "Material_Wok";
		displayName = "Wok";
		selection = "Material_Wok";
		ghostIcon = "missing";
		show = "false";
	};
	class Slot_Material_PortableStove
	{
		name = "Material_PortableStove";
		displayName = "Portable Stove";
		selection = "Material_PortableStove";
		ghostIcon = "missing";
		show = "false";
	};
	class Slot_Material_Battery
	{
		name = "Material_Battery";
		displayName = "Power Source";
		selection = "Material_Battery";
		ghostIcon = "missing";
		show = "false";
	}; */
	
	//Phase 2
	class Slot_Material_RedHeisenberg
	{
		name = "Material_RedHeisenberg";
		displayName = "Red Heisenberg";
		selection = "Material_RedHeisenberg";
		ghostIcon = "missing";
		//show = "false";
	};
	
	
};

class CfgnonAIVehicles
{
	class ProxyAttachment;
	
	//Phase 1
	class Proxydexamphetamine: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Material_Phosphorus";
		model="\DZ\gear\medical\dexamphetamine.p3d";
	};
	class ProxyMaterial_Heisenberg: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Material_Heisenberg";
		model = "\Anarchotics\data\items\drugtable\data\proxies\Material_Heisenberg.p3d";
	};

	//Phase 2
	class ProxyMaterial_RedHeisenberg: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Material_RedHeisenberg";
		model = "\Anarchotics\data\items\drugtable\data\proxies\Material_RedHeisenberg.p3d";
	};
	
	/*
	class Proxyspraycan: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Material_RaidSpray";
		model = "\DZ\gear\consumables\spraycan.p3d";
	};
	class ProxyEpinephrine: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Material_Epinephrine";
		model="\dz\gear\medical\Epinephrine.p3d";
	};
	class ProxyMaterial_PortableStove: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Material_PortableStove";
		model = "\Anarchotics\data\items\drugtable\data\proxies\Material_PortableStove.p3d";
	};
	class ProxyMaterial_Battery: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Material_Battery";
		model = "\Anarchotics\data\items\drugtable\data\proxies\Material_Battery.p3d";
	}; */
};
