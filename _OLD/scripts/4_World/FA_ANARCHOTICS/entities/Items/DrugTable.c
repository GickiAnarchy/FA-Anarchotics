class DrugTable extends FA_Item
{
		
	typename ATTACHMENT_PHOSPHORUS 						= Phosphorus;
	typename ATTACHMENT_HEISENBERG						= Heisenberg;
	typename ATTACHMENT_RAID							= RaidSpray;
	typename ATTACHMENT_EPINEPHRINE						= SomeDopeDope;
	typename ATTACHMENT_BATTERY							= TruckBattery;
	
	typename ATTACHMENT_REDHEISENBERG					= RedHeisenberg;
	typename ATTACHMENT_EPIRAID							= EpiRaid;

	
	typename ATTACHMENT_GASSTOVE						= PortableGasStove;
	typename ATTACHMENT_PAN								= FryingPan;
	typename ATTACHMENT_POT								= Pot;
	//typename ATTACHMENT_WOK							= FA_Wok;
	
	ref TStringArray fa_attachmentsList = new TStringArray;
	
	const int COOKING_SLOT_COUNT = 2;	
	const int INGREDIENTS_SLOT_COUNT = 4;
	ItemBase fa_Ingredients[INGREDIENTS_SLOT_COUNT];
	ItemBase fa_CookingItems[COOKING_SLOT_COUNT];
	
	bool hasBattery;

	
	// CONSTRUCTOR
	void DrugTable()
	{	
		hasBattery= false;
	
		Set_FA_KitName("DrugTableKit");
		SetEventMask(EntityEvent.INIT); // Enable EOnInit event
		
		fa_attachmentsList.Insert(ATTACHMENT_EPINEPHRINE.ToString());
		fa_attachmentsList.Insert(ATTACHMENT_RAID.ToString());
		fa_attachmentsList.Insert(ATTACHMENT_EPIRAID.ToString());
		fa_attachmentsList.Insert(ATTACHMENT_HEISENBERG.ToString());
		fa_attachmentsList.Insert(ATTACHMENT_REDHEISENBERG.ToString());
		fa_attachmentsList.Insert(ATTACHMENT_PHOSPHORUS.ToString());
		fa_attachmentsList.Insert(ATTACHMENT_BATTERY.ToString());
		
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
	
	
	/*===================================
					EVENTS
	===================================*/
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
	
	
	/*===================================
					EE ITEMS
	===================================*/	
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
		
		if (item_base.Type() == ATTACHMENT_GASSTOVE)
		{
			fa_CookingItems[0] = item_base;
		};
		
		/*if (item_base.Type() == ATTACHMENT_WOK)
		{
			if (fa_CookingItems[1] == NULL) 
			{
				fa_CookingItems[1] = item_base;
			}
		};*/
		
		if (item_base.Type() == ATTACHMENT_PAN)
		{
			if (fa_CookingItems[1] == NULL)
			{
				fa_CookingItems[1] = item_base;
				GetInventory().CreateAttachment(ATTACHMENT_PAN.ToString());
			}
		};
		
		if (item_base.Type() == ATTACHMENT_POT)
		{
			if (fa_CookingItems[1] == NULL)
			{
				fa_CookingItems[1] = item_base;
				GetInventory().CreateAttachment(ATTACHMENT_POT.ToString());
			}
		};
		
		
		if (item_base.Type() == ATTACHMENT_BATTERY)
		{
			hasBattery = true;
		};
		
		checkItems();
				
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
		
		
		if (item_base.Type() == ATTACHMENT_BATTERY)
		{
			hasBattery = false;
		};
		
		
		if (item_base.Type() == ATTACHMENT_GASSTOVE)
		{
			fa_CookingItems[0] = NULL;
		};
		
		/*if (item_base.Type() == ATTACHMENT_WOK)
		{
			if (fa_CookingItems[1] != NULL) 
			{
				fa_CookingItems[1] = NULL;
			}
		};*/
		
		if (item_base.Type() == ATTACHMENT_PAN)
		{
			if (fa_CookingItems[1] != NULL)
			{
				fa_CookingItems[1] = NULL;
				GetInventory().FindAttachmentByName(ATTACHMENT_PAN.ToString()).Delete();
			}
		};
		
		if (item_base.Type() == ATTACHMENT_POT)
		{
			if (fa_CookingItems[1] != NULL)
			{
				fa_CookingItems[1] = NULL;
				GetInventory().FindAttachmentByName(ATTACHMENT_POT.ToString()).Delete();
			}
		};
	}
	

	//================================================================
	// ATTACHMENT
	//================================================================
	override bool CanLoadAttachment( EntityAI attachment )
	{
		EntityAI item = EntityAI.Cast( attachment );
		
		for (int i = 0; i <= fa_attachmentsList.Count(); i++)
		{
			string name = fa_attachmentsList.Get(i);
			if (item.GetName() == name)
			{
				return true;
			}
		}
		
		if (item.Type() == ATTACHMENT_PAN || item.Type() == ATTACHMENT_POT || item.Type() == ATTACHMENT_GASSTOVE )
		{
			return true;
		}
		
		if ( !super.CanLoadAttachment(attachment) )
		{
			return false;
		}
		
		return false;
	}

	override bool CanReleaseAttachment( EntityAI attachment )
	{	
		EntityAI item = EntityAI.Cast( attachment );
		
		if (item.Type() == ATTACHMENT_PAN || item.Type() == ATTACHMENT_POT || item.Type() == ATTACHMENT_GASSTOVE )
		{
			return true;
		}
		
		for (int i = 0; i <= fa_attachmentsList.Count(); i++)
		{
			string name = fa_attachmentsList.Get(i);
			if (item.GetName() == name)
			{
				return true;
			}
		}		
		
		if( !super.CanReleaseAttachment( attachment ) )
		{
			return false;
		}
			
		return false;
	}
	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		EntityAI item = EntityAI.Cast( attachment );
		
		if (item.Type() == ATTACHMENT_PAN || item.Type() == ATTACHMENT_POT || item.Type() == ATTACHMENT_GASSTOVE )
		{
			return true;
		}
		
		for (int i = 0; i <= fa_attachmentsList.Count(); i++)
		{
			string name = fa_attachmentsList.Get(i);
			if (item.GetName() == name)
			{
				return true;
			}
		}		
		
		if ( !super.CanReceiveAttachment(attachment, slotId) )
		{
			return false;
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
		AddAction(ActionCreateMethStove);
	}
	
	
	//================================================================
	//COMBINE INGREDIENTS
	//================================================================	
	void checkItems()
	{
		int id;
		
		if ( fa_Ingredients[0] && fa_Ingredients[1] )
		{
			GetAttachmentByType(ATTACHMENT_HEISENBERG).Delete();
			GetAttachmentByType(ATTACHMENT_PHOSPHORUS).Delete();
			GetInventory().CreateInInventory(ATTACHMENT_REDHEISENBERG.ToString());
		}
		
		if (fa_Ingredients[2] && fa_Ingredients[3])
		{
			GetAttachmentByType(ATTACHMENT_EPINEPHRINE).Delete();
			GetAttachmentByType(ATTACHMENT_RAID).Delete();
			GetInventory().CreateInInventory(ATTACHMENT_EPIRAID.ToString());
		}
	}
	
	bool isReadyToCraftCooking()
	{
		if (fa_CookingItems[0] != NULL && fa_CookingItems[1] != NULL) 
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
