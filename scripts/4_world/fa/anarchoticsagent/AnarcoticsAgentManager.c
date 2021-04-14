class AnarchoticsAgentManager
{
	ref map<int,AnarchoticsAgent> fa_AnarchoticsPool = new map<int, AnarchoticsAgent>;
	PlayerBase fa_player;
	
	
	void AnarchoticsAgentManager(PlayerBase p)
	{
		fa_player = p;
		Init();
	}
	
	void ~AnarchoticsAgentManager()
	{
		
	}
	
	void Init()
	{
		
	}
	
	PlayerBase FA_GetPlayer()
	{
		return fa_player;
	}
	
	void RegisterAnarchoticAgent(AnarchoticsAgent agent)
	{
		int type = agent.GetType();
		
	}
	
}