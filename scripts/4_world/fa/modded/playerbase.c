modded class PlayerBase extends ManBase
{
	ref AnarchoticsAgentManager					fa_AgentManager;
	array<AnarchoticsAgent> 					fa_AgentList;
	
	
	override void Init()
	{
		super.Init();
		fa_AgentManager = new AnarchoticsAgentManager(this);	//AnarchoticsAgentManager
	}
	
}