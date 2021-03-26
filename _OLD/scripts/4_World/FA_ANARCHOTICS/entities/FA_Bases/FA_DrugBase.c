class FA_DrugBase extends Edible_Base
{
  
  void FA_DrugBase(){};
  void ~FA_DrugBase(){};
  
  
	bool isDrug()
	{
		return true;
	};

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionConsumeDrug);
	};
	

	
};