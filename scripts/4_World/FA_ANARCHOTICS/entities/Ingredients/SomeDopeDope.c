class SomeDopeDope extends FA_Ingredient
{
	override void SetActions()
    {
        super.SetActions();
        AddAction(ActionAttach);
		AddAction(ActionDetach);
    }
};