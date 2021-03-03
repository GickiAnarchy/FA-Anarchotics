class Phosphorus extends ItemBase
{
	
	
	//
	//CONSTRUCTOR
	//
	void Phosphorus()
	{
		
	}
	
	
	//
	//ANARCHOTICS
	//
	bool isIngredient()
	{
		return true;
	}
	
	
	override void SetActions()
    {
        super.SetActions();
        AddAction(ActionAttach);
    }
	
}
