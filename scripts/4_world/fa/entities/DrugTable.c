class DrugTable extends FA_Item
{
	//typename ATTACHMENT_HEISENBERG						= Heisenberg;
	
	// CONSTRUCTOR
	void DrugTable()
	{		
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
	
	
	/*===================================
					EVENTS
	===================================*/
	override void OnInitEnergy()
	{
		
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
		//ItemBase item_base = ItemBase.Cast( item );
		
		//if (item_base.Type() == ATTACHMENT_HEISENBERG)
		//{
		//	fa_Ingredients[1] = item_base;
		//};
				
	}
	
	override void EEItemDetached ( EntityAI item, string slot_name )
	{
		super.EEItemDetached ( item, slot_name );
		//ItemBase item_base = ItemBase.Cast( item );
		
		//if (item_base.Type() == ATTACHMENT_HEISENBERG)
		//{
		//	fa_Ingredients[1] = NULL;
		//};
		
	}
	

	//================================================================
	// ATTACHMENT
	//================================================================
	override bool CanLoadAttachment( EntityAI attachment )
	{
		EntityAI item = EntityAI.Cast( attachment );
				
		if ( !super.CanLoadAttachment(attachment) )
		{
			return false;
		}
		
		return false;
	}

	override bool CanReleaseAttachment( EntityAI attachment )
	{	
		EntityAI item = EntityAI.Cast( attachment );
		
		if( !super.CanReleaseAttachment( attachment ) )
		{
			return false;
		}
			
		return false;
	}
	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		EntityAI item = EntityAI.Cast( attachment );
		
		if ( !super.CanReceiveAttachment(attachment, slotId) )
		{
			return false;
		}
		
		return false;
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
