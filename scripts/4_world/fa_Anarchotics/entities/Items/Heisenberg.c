class Heisenberg extends Edible_Base
{
	
	void Heisenberg()
	{
		
	};
	
	
	//FOR TESTING
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(AnarchoticsModifiers.FA_METH))//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( AnarchoticsModifiers.FA_METH );
		}
		consumer.GetModifiersManager().ActivateModifier( AnarchoticsModifiers.FA_METH );
	};
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceDrink);
		AddAction(ActionDrink);
	};
};

class RedHeisenberg extends Heisenberg
{
	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		
	};
	
}