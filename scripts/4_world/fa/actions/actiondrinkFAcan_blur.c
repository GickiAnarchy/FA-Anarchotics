class ActionDrinkFACan_Blur: ActionDrink
{
	void ActionDrinkFACan_Blur()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_DRINK;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_DRINK;
	}
	
	override string GetText()
	{
		return "#drink";
	}
	
	override void ApplyModifiers( ActionData action_data )
	{
	  action_data.m_Player.InsertAgent(faAgents.TRIPPING,100);
	}
	
};
