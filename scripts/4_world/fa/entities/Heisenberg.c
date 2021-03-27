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
		
	}


};