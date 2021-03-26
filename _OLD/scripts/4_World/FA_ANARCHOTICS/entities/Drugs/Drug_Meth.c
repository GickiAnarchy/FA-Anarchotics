class Drug_Meth extends FA_DrugBase 
{

	void Drug_Meth()
	{
		InsertAgent(faAgents.METH_HIGH, 5);
	}
	
		override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(fa_Modifiers.HIGH_METH) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( fa_Modifiers.HIGH_METH, false );
		}
		consumer.GetModifiersManager().ActivateModifier( fa_Modifiers.HIGH_METH );
	}

}