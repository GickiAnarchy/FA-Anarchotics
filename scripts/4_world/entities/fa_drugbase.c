class DrugBase extends Inventory_Base
{
  
  void DrugBase(){};
  void ~DrugBase(){};
  
  
	override bool isDrug()
	{
		return true;
	};	
};