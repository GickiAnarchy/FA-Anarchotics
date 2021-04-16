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
		RegisterAnarchoticAgent(new TrippingAgent);
	}
	
	PlayerBase FA_GetPlayer()
	{
		return fa_player;
	}
	
	void RegisterAnarchoticAgent(AnarchoticsAgent agent)
	{
		int count = fa_AnarchoticsPool.Count() + 1;
		fa_AnarchoticsPool.Insert(count, agent);
	}
	
	void GetAgentList(out array<AnarchoticsAgent> list)
	{
		list.Clear();
		
		int c = fa_AnarchoticsPool.Count();
		for (int i = 0; i < c; i++)
		{
			AnarchoticsAgent ag = fa_AnarchoticsPool.Get(i);
			list.Insert(ag);
		}
	}
	
}