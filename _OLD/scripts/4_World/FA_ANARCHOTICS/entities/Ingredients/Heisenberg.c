class Heisenberg extends Edible_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceDrink);
		AddAction(ActionDrinkCan);
		
		AddAction(ActionAttach);
		AddAction(ActionDetach);
	};
};