enum PROCESSABLE_DRUGS
{
	METH = 1,
	HEROIN = 2,
	SHROOMS = 3,
	SERENITY = 4,
}

class FA_Item extends ItemBase
{
	FA_Item(int type)
	{
		
	}
	
	
	
	
	//
	//VARIABLES
	//
	protected string FA_KitName = "null";
	
	protected FA_DrugBase finalDrug;
	
	
	//
	//MEMBERS
	//
	void Set_FA_KitName(string name)
	{
		if (FA_KitName)
		{
			FA_KitName = name;
		};
	};
	
	
	override string Get_FA_KitName()
	{
			return FA_KitName;
	};
	
	
	
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    };
    
	
    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
    };


};