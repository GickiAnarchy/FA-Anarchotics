/*
class DrugTable extends FA_Item
{
		
	typename ATTACHMENT_PHOSPHORUS 						= Phosphorus;
	typename ATTACHMENT_HEISENBERG						= Heisenberg;
	typename ATTACHMENT_RAID							= RaidSpray;
	typename ATTACHMENT_EPINEPHRINE						= Epinephrine;
	typename ATTACHMENT_GASSTOVE						= PortableGasStove;
	//typename ATTACHMENT_WOK							= FA_Wok;
	typename ATTACHMENT_BATTERY							= TruckBattery;
	
	const int INGREDIENTS_SLOT_COUNT = 6;
	ItemBase fa_Ingredients[INGREDIENTS_SLOT_COUNT];
	
	bool hasBattery;
	
	
	// CONSTRUCTOR
	void DrugTable()
	{	
		hasBattery= false;
	
		Set_FA_KitName("DrugTableKit");
		SetEventMask(EntityEvent.INIT); // Enable EOnInit event
	}
	
	//INIT
	override void EOnInit( IEntity other, int extra)
	{

	}
	
	// Play the loop sound
	void StartLoopSound()
	{
		
	}
	
	// Taking item into inventory
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}
		return CanManipulate();
	}

	// Taking item into inventory
	override bool CanPutIntoHands ( EntityAI player ) 
	{
		if( !super.CanPutIntoHands( parent ) )
		{
			return false;
		}
		return CanManipulate();
	}

	// Returns true/false if this item can be moved into inventory/hands
	bool CanManipulate()
	{
		if (!GetCompEM().IsWorking() )
		{
			return true;
		}
		
		return false;
	}
	
	
	===================================
					EVENTS
	===================================
	override void OnInitEnergy()
	{
		hasBattery = false;
	}
	
	// Generator is working
	override void OnWorkStart()
	{
		
	}

	// Do work
	override void OnWork( float consumed_energy )
	{

	}

	// Turn off when this runs out of fuel
	override void OnWorkStop()
	{
		
	}
	
	
	===================================
					EE ITEMS
	===================================
	override void OnItemLocationChanged  ( EntityAI old_owner, EntityAI new_owner ) 
	{
		super.OnItemLocationChanged(old_owner, new_owner);
	}
	
	override void EEItemAttached ( EntityAI item, string slot_name )
	{
		super.EEItemAttached ( item, slot_name );
		ItemBase item_base = ItemBase.Cast( item );
		
		if (item_base.Type() == ATTACHMENT_PHOSPHORUS)
		{
			fa_Ingredients[0] = item_base;
		};

		if (item_base.Type() == ATTACHMENT_HEISENBERG)
		{
			fa_Ingredients[1] = item_base;
		};
		
		if (item_base.Type() == ATTACHMENT_RAID)
		{
			fa_Ingredients[2] = item_base;
		};
		
		if (item_base.Type() == ATTACHMENT_EPINEPHRINE)
		{
			fa_Ingredients[3] = item_base;
		};

		//if (item_base.Type() == ATTACHMENT_WOK)
		//{
		//	fa_Ingredients[4] = item_base;
		//};
		
		if (item_base.Type() == ATTACHMENT_GASSTOVE)
		{
			fa_Ingredients[5] = item_base;
		};
		
		
		if (item_base.Type() == ATTACHMENT_BATTERY)
		{
			hasBattery = true;
		};
				
	}
	
	override void EEItemDetached ( EntityAI item, string slot_name )
	{
		super.EEItemDetached ( item, slot_name );
		ItemBase item_base = ItemBase.Cast( item );
		
		if (item_base.Type() == ATTACHMENT_PHOSPHORUS)
		{
			fa_Ingredients[0] = NULL;
		};
		
		if (item_base.Type() == ATTACHMENT_HEISENBERG)
		{
			fa_Ingredients[1] = NULL;
		};
		
		if (item_base.Type() == ATTACHMENT_RAID)
		{
			fa_Ingredients[2] = NULL;
		};
		
		if (item_base.Type() == ATTACHMENT_EPINEPHRINE)
		{
			fa_Ingredients[3] = NULL;
		};

		//if (item_base.Type() == ATTACHMENT_WOK)
		//{
		//	fa_Ingredients[4] = NULL;
		//};
		
		if (item_base.Type() == ATTACHMENT_GASSTOVE)
		{
			fa_Ingredients[5] = NULL;
		};
		
		
		if (item_base.Type() == ATTACHMENT_BATTERY)
		{
			hasBattery = false;
		};
		
	}
	

	//================================================================
	// ATTACHMENT
	//================================================================
	override bool CanLoadAttachment( EntityAI attachment )
	{
		ItemBase item = ItemBase.Cast( attachment );
		
		if ( !super.CanLoadAttachment(attachment) )
		{
			return false;
		}
		
		if (item.fa_isIngredient() == true)
		{
			return true;
		}
		
		return false;
	}

	override bool CanReleaseAttachment( EntityAI attachment )
	{	
		ItemBase item = ItemBase.Cast( attachment );
		
		if( !super.CanReleaseAttachment( attachment ) )
		{
			return false;
		}
		
		if (item.fa_isIngredient() == true)
		{
			return true;
		}
			
		return false;
	}
	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		ItemBase item = ItemBase.Cast( attachment );
		
		if ( !super.CanReceiveAttachment(attachment, slotId) )
		{
			return false;
		}
		
		if (item.fa_isIngredient() == true)
		{
			return true;
		}		
		
		return false;

	}
	
	bool isBatteryAttached()
	{
		return hasBattery;
	}
	

	//================================================================
	//ACTIONS
	//================================================================
	override void SetActions()
	{
		super.SetActions();
	}
	
	
	//================================================================
	//COMBINE INGREDIENTS
	//================================================================	
	bool hasCookingItems()
	{
		if (fa_Ingredients[5] != NULL)	//(fa_Ingredients[4] != NULL && fa_Ingredients[5] != NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	bool ReadyToProcess()
	{
		if ( isBatteryAttached() == false || hasCookingItems() == false )
		{
			return false;
		}
		return true;
	}
	
	bool HasAllIngredients()
	{
		int total = 0;
		for (int i = 0; i <= INGREDIENTS_SLOT_COUNT; i++)
		{
			ItemBase item = fa_Ingredients[i];
			
			if (item == NULL)
			{	
				return false;
			}
			else
			{
				total++;
			}	
		}
		
		if (total == 5)		//(total == 6)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	
	
	//REFERENCE TO CREATE AN ITEM IN THIS ITEMS INVENTORY
	//entity.GetInventory().CreateInInventory( "TruckBattery" );
	
}



class DrugTableKit extends FA_Item_Kit
{
	void DrugTableKit()
	{
		Set_FA_ItemName("DrugTable");
	}	
}
*/
