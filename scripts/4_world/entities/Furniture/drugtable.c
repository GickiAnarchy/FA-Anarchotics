class DrugTable extends FA_Item
{
	// float						m_Fuel;
	// private static float		m_FuelTankCapacity; // Capacity in ml.
	// private static float		m_FuelToEnergyRatio; // Conversion ratio of 1 ml of fuel to X Energy
	// private int					m_FuelPercentage;
	
	static const string			START_SOUND = "powerGeneratorTurnOn_SoundSet";
	static const string			LOOP_SOUND = "powerGeneratorLoop_SoundSet";
	static const string			STOP_SOUND = "powerGeneratorTurnOff_SoundSet";
	static const string 		SPARKPLUG_ATTACH_SOUND = "sparkplug_attach_SoundSet";
	static const string 		SPARKPLUG_DETACH_SOUND = "sparkplug_detach_SoundSet";
	
	ref Timer 					m_SoundLoopStartTimer;
	
	
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
	}
	
	
	override void EEItemDetached ( EntityAI item, string slot_name )
	{
		super.EEItemDetached ( item, slot_name );
		
	}
	
	
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
