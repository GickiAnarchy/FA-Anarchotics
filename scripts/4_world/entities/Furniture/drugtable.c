class DrugTable extends ItemBase
{
	float						m_Fuel;
	private static float		m_FuelTankCapacity; // Capacity in ml.
	private static float		m_FuelToEnergyRatio; // Conversion ratio of 1 ml of fuel to X Energy
	private int					m_FuelPercentage;
	
	static const string			START_SOUND = "powerGeneratorTurnOn_SoundSet";
	static const string			LOOP_SOUND = "powerGeneratorLoop_SoundSet";
	static const string			STOP_SOUND = "powerGeneratorTurnOff_SoundSet";
	static const string 		SPARKPLUG_ATTACH_SOUND = "sparkplug_attach_SoundSet";
	static const string 		SPARKPLUG_DETACH_SOUND = "sparkplug_detach_SoundSet";
	
	protected EffectSound 		m_EngineLoop;
	protected EffectSound 		m_EngineStart;
	protected EffectSound 		m_EngineStop;
	ref Timer 					m_SoundLoopStartTimer;
	ref protected Effect 		m_Smoke;
	
	
	// Constructor
	void DrugTable()
	{
		SetEventMask(EntityEvent.INIT); // Enable EOnInit event
		

	}

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
	
	// Init
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
	
	// Called when this generator is picked up
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
	
	
	//================================================================
	// ADVANCED PLACEMENT
	//================================================================
	
	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		super.OnPlacementComplete( player, position, orientation );
			
		SetIsPlaceSound( true );
	}
	
	override string GetPlaceSoundset()
	{
		return "placePowerGenerator_SoundSet";
	}
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
}