//////////////////////////////////////////////////////////////////////////////
//GENERIC MODS FOR INGREDIENTS
////////////////////////////////////////////////////////////////////////////////

modded class PortableGasStove extends ItemBase
{
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttach);
		AddAction(ActionDetach);
	};
};



modded class TruckBattery : VehicleBattery 
{	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttach);
		AddAction(ActionDetach);
	};
	
};


class RedPhosphorus extends FA_Ingredient
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttach);
		AddAction(ActionDetach);
	};
};