//////////////////////////////////////////////////////////////////////////////
//GENERIC MODS FOR INGREDIENTS
////////////////////////////////////////////////////////////////////////////////

modded class PortableGasStove extends ItemBase
{
	
	override bool fa_isIngredient()
	{
		return true;
	};
	
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttach);
		AddAction(ActionDetach);
	};
	
};



modded class Epinephrine extends Inventory_Base
{
	
	override bool fa_isIngredient()
	{
		return true;
	};
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttach);
		AddAction(ActionDetach);
	};
	
};



modded class TruckBattery : VehicleBattery 
{
	
	override bool fa_isIngredient()
	{
		return true;
	};
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttach);
		AddAction(ActionDetach);
	};
	
};


class RedPhosphorus extends FA_Ingredient
{
	
};