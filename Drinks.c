class Heisenberg extends Edible_Base
{
		
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceDrink);
		AddAction(ActionDrinkCan);
	}

	override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(faModifiers.MDF_HIGH_DOPE) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( faModifiers.MDF_HIGH_DOPE, false );
		}
		consumer.GetModifiersManager().ActivateModifier( faModifiers.MDF_HIGH_DOPE );
	}

};


class BlurSoda extends Edible_Base
{
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceDrink);
		AddAction(ActionDrinkCan);
	}
	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		//if (consumer.GetHealth() <= 55)
		if (consumer)
		{
			if( consumer.GetModifiersManager().IsModifierActive(faModifiers.MDF_TRIPPY) )//effectively resets the timer
			{
				consumer.GetModifiersManager().DeactivateModifier( faModifiers.MDF_TRIPPY, false );
			}
				consumer.GetModifiersManager().ActivateModifier( faModifiers.MDF_TRIPPY );
		}
	}
	
}


class WarpedWaters extends Edible_Base
{
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceDrink);
		AddAction(ActionDrinkCan);
	}
	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		
	}
	
}


