class FA_Ingredient extends ItemBase
{
	
	//
	//CONSTRUCTOR
	//
	void FA_Ingredient()
	{
		SetTakeable(true);
	}
	
	override bool IsTakeable()
	{
		return m_IsTakeable;
	}
	
	
	//
	//ANARCHOTICS
	//
	override bool fa_isIngredient()
	{
		return true;
	}
	
	override void SetActions()
    {
        super.SetActions();
        AddAction(ActionAttach);
		AddAction(ActionDetach);
    }
	
}
