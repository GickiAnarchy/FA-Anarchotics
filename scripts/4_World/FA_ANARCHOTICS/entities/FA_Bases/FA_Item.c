class FA_Item extends ItemBase
{
	
	//
	//VARIABLES
	//
	protected string FA_KitName = "null";
	
	protected FA_DrugBase finalDrug;
	
	
	//
	//CONSTRUCTOR
	//
	void FA_Item()
	{
		
	}
	
	
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