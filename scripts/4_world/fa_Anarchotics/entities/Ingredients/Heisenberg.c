class Heisenberg extends Edible_Base
{
	
	void Heisenberg()
	{
		
	};
	
	override bool fa_isIngredient()
	{
		return true;
	}
	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		
	};
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceDrink);
		AddAction(ActionDrinkCan);
		
		AddAction(ActionAttach);
		AddAction(ActionDetach);
	};
};


