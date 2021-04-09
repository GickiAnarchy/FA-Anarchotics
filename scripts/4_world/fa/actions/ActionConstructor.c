modded class ActionConstructor 
{

    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
		
		actions.Insert(ActionRepack);		
		actions.Insert(ActionDrinkFACan_Trip);		
		actions.Insert(ActionDrinkFACan_Blur);
    }
}   