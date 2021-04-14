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
		
	}

	override void OnConsume(float amount, PlayerBase consumer)
	{
		super.OnConsume(amount,consumer);
		
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
		
	}
};


