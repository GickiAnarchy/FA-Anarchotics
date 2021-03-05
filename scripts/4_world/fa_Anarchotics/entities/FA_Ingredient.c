class FA_Ingredient extends ItemBase
{
	
	
	//
	//CONSTRUCTOR
	//
	void FA_Ingredient()
	{
		
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
		AddAction(ActionDetachFromTarget);
    }
	
}
