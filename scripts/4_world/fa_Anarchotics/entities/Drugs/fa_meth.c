class Meth extends FA_DrugBase
{
	void Meth()
	{
		
		InsertAgent(AnarchoticsAgents.OVERDOSING, 10);
		
	};
	
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEatSmall);
	};
	

};