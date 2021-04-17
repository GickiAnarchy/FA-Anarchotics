class FA_Agent
{
	int fa_ID = 0;								//ID of agent
	string fa_AgentName = "";					//Class name of agent
	float lifetime = 1.0;						//Length of effect
	
	
	///		CONSTRUCTER
	void FA_Agent()
	{
		
	}
	
	
	///		GETTERS
	int GetID()
	{
		return fa_ID;
	}
	
	string GetAgentName()
	{
		return fa_AgentName;
	}
	
	float GetLifetime()
	{
		return lifetime;
	}
	
	
	///		SETTERS
	void SetID(FA_AGENTS faagent)
	{
		int s = faagent;
		fa_ID = s;
	}
	
	void SetAgentName()
	{
		string setter = ClassName();
		fa_AgentName = setter;
	}
	
	void SetLifetime(float life)
	{
		lifetime = life;
	}
	
	
	///		TRANSFERS
	void TransferToItem(FA_Item item)
	{
		//TODO
	}
	
	void TransferToPlayer(PlayerBase player)
	{
		//TODO
	}
	
}