modded class ActionConstructor 
{

    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
		
		//Assemble || Repacking ||
		actions.Insert(ActionRepack);
		actions.Insert(ActionCreateMethStove);
		
		//Drugs
		actions.Insert(ActionConsumeDrug);
		
    }
}   