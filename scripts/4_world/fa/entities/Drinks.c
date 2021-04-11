class FA_Drink extends SodaCan_ColorBase
{

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionForceDrink);
		AddAction(ActionDrinkCan);
	}
};

class BlurSoda extends Edible_Base
{
	void BlurSoda()
	{
		InsertAgent(faAgents.TRIPPING, 25);
	}

	override void OnConsume(float amount, PlayerBase consumer)
	{
		super.OnConsume(amount,consumer);
		
		
		if( consumer.GetModifiersManager().IsModifierActive(faModifiers.MDF_TRIPPY) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( faModifiers.MDF_TRIPPY, false );
		}
			consumer.GetModifiersManager().ActivateModifier( faModifiers.MDF_TRIPPY );
		
	}
	
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionDrinkCan);
		AddAction(ActionDrinkFACan_Trip); 
	}
	
};

class WarpedWaters extends FA_Drink
{

	override void OnConsume(float amount, PlayerBase consumer)
	{
		super.OnConsume(amount,consumer);
		if( consumer.GetModifiersManager().IsModifierActive(faModifiers.MDF_HIGH_DOPE) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( faModifiers.MDF_HIGH_DOPE, true );
		}
		if( consumer.GetModifiersManager().IsModifierActive(faModifiers.MDF_TRIPPY) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( faModifiers.MDF_TRIPPY, true );
		}
	}
};


