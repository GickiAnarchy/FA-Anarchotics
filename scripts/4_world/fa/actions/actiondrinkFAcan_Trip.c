class ActionDrinkFACan_Trip: ActionDrink
{
	void ActionDrinkFACan_Trip()
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
		PlayerBase p = PlayerBase.Cast(action_data.m_Player);
		
		//plugManager.TransmitAgents(action_data.m_MainItem, action_data
		
		p.InsertAgent(faAgents.TRIPPING, 25);
		
	 	//action_data.m_Player.InsertAgent(faAgents.TRIPPING,25);
		
		
	}
	
};
