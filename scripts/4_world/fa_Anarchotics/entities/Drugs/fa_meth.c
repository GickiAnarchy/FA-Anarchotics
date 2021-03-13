class Meth extends FA_DrugBase
{
	void Meth()
	{
		
		InsertAgent(AnarchoticsAgents.OVERDOSING, 10);
		
	};
	
	
	overrride void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatSmall);
	}
	

};