class DrugTable extends FA_Item
{
	
	//
	const string ATTACHMENT_SLOT_PHOSPHORUS				=	"Material_Phosphorus";
	const string ATTACHMENT_SLOT_HEISENBURG				=	"Material_Heisenberg";
	const string ATTACHMENT_SLOT_RAIDSPRAY				=	"Material_RaidSpray";
	const string ATTACHMENT_SLOT_EPINEPHRINE			=	"Material_Epinephrine";
	const string ATTACHMENT_SLOT_WOK					=	"Material_Wok";
	const string ATTACHMENT_SLOT_PORTABLESTOVE			=	"Material_PortableStove";
	const string ATTACHMENT_SLOT_BATTERY				=	"Material_Battery";
	
	ItemBase	fa_phosphorus;
	ItemBase	fa_heisenberg;
	ItemBase	fa_raidspray;
	ItemBase	fa_epinephrine;
	ItemBase	fa_wok;
	ItemBase	fa_portablestove;
	ItemBase	fa_battery;
	
	
	// CONSTRUCTOR
	void DrugTable()
	{
		fa_phosphorus			= NULL;
		fa_heisenberg			= NULL;
		fa_raidspray			= NULL;
		fa_epinephrine			= NULL;
		fa_wok					= NULL;
		fa_portablestove		= NULL;
		fa_battery				= NULL;
		
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
		ItemBase item_base = ItemBase.Cast( item );
		
		string item_name;
		item_name = item_base.getName();
		
		switch(item_name)
		{
			case "Phosphorus":
				fa_phosphorus = item_base;
				
				break;
				
			case "TruckBattery":
				fa_battery = item_base;
				
				break;
				
			case "Wok":
				fa_wok = item_base;
				
				break;
				
			case "Epinephrine":
				fa_epinephrine = item_base;
				
				break;
				
			case "PortableGasStove":
				fa_portablestove = item_base;
				
				break;
				
			case "RaidSpray":
				fa_raidspray = item_base;
				
				break;
				
			case "Heisenberg":
				fa_heisenberg = item_base;
				
				break;
				
		}
		
	}
	
	override void EEItemDetached ( EntityAI item, string slot_name )
	{
		super.EEItemDetached ( item, slot_name );
		ItemBase item_base = ItemBase.Cast( item );
		
		string item_name;
		item_name = item_base.getName();
		
		switch(item_name)
		{
			case "Phosphorus":
				fa_phosphorus = NULL;
				
				break;
				
			case "TruckBattery":
				fa_battery = NULL;
				
				break;
				
			case "Wok":
				fa_wok = NULL;
				
				break;
				
			case "Epinephrine":
				fa_epinephrine = NULL;
				
				break;
				
			case "PortableGasStove":
				fa_portablestove = NULL;
				
				break;
				
			case "RaidSpray":
				fa_raidspray = NULL;
				
				break;
				
			case "Heisenberg":
				fa_heisenberg = NULL;
				
				break;
				
		}
		
	}
	

	//================================================================
	// ATTACHMENT
	//================================================================
	override bool CanLoadAttachment( EntityAI attachment )
	{
		if ( !super.CanLoadAttachment(attachment) )
		{
			return false;
		}
			
		ItemBase item = ItemBase.Cast( attachment );
		
		return false;
	}

	override bool CanReleaseAttachment( EntityAI attachment )
	{	
		if( !super.CanReleaseAttachment( attachment ) )
		{
			return false;
		}
			
		ItemBase item = ItemBase.Cast( attachment );
		
		return false;
	}
	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		if ( !super.CanReceiveAttachment(attachment, slotId) )
		{
			return false;
		}		
		
		ItemBase item = ItemBase.Cast( attachment );
		
		/* string item_name;
		item_name = item.getName();
		
		switch(item_name)
		{
			case "Phosphorus":
				fa_phosphorus = item;
				
				break;
				
			case "TruckBattery":
				fa_battery= item;
				
				break;
				
			case "Wok":
				fa_wok= item;
				
				break;
				
			case "Epinephrine":
				fa_epinephrine= item;
				
				break;
				
			case "PortableGasStove":
				fa_portablestove= item;
				
				break;
				
			case "RaidSpray":
				fa_raidspray= item;
				
				break;
				
			case "Heisenberg":
				fa_heisenberg= item;
				
				break;
				
		} */
		
		if (item.fa_isIngredient() == true)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


	//================================================================
	//ACTIONS
	//================================================================
	override void SetActions()
	{
		super.SetActions();
	}
	
	
}



class DrugTableKit extends FA_Item_Kit
{
	void DrugTableKit()
	{
		Set_FA_ItemName("DrugTable");
	}	
}
