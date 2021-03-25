class FA_DrugBase extends Edible_Base
{
  
  void FA_DrugBase(){};
  void ~FA_DrugBase(){};
  
  
	bool isDrug()
	{
		return true;
	};

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionConsumeDrug);
	};
	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(fa_Modifiers.HIGH_METH) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( fa_Modifiers.HIGH_METH, false );
		}
		consumer.GetModifiersManager().ActivateModifier( fa_Modifiers.HIGH_METH );
	}
	
};