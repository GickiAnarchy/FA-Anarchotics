class Heisenberg_Ingredient extends FA_Ingredient
{
	
	void Heisenberg_Ingredient()
	{
		
	};
	
	override bool fa_isIngredient()
	{
		return true;
	}
	
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionDetach);
	};
};


