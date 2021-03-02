class FA_Item_Kit extends ItemBase
{
	//
	//VARIABLES
	//
	protected string FA_ItemName = "null";


	//
	//MEMBERS
	//
	void Set_FA_ItemName(string name)
	{
		if (FA_ItemName)
		{
			FA_ItemName = name;
		};
	};
	
	
	override string Get_FA_ItemName()
	{
			return FA_ItemName;
	};

	
	override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);
		
		if ( GetGame().IsServer() )
		{				
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObject(Get_FA_ItemName(), position, false ));
			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);			
		}
		
		SetIsPlaceSound( true );
	};
	
	
	override bool IsDeployable()
	{
		return true;
	};


    override void SetActions()
    {
        super.SetActions();        
        AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
    };


}


class FA_Item extends ItemBase
{
	//
	//VARIABLES
	//
	protected string FA_KitName = "null";
	
	
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