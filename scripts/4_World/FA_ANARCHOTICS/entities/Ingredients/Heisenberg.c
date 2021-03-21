class Heisenberg extends Edible_Base
{
		
	override bool fa_isIngredient()
	{
		return true;
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