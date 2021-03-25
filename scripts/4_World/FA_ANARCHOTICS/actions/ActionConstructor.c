modded class ActionConstructor 
{

    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
		
		//Disassemble || Repacking || Reboxing
		actions.Insert(ActionRepack);
		actions.Insert(ActionCreateMethStove);

    }
}   