/*		class AnarchoticsAgent
	string fa_AgentName = "";			//Class name
	int fa_Type = 0;					//Type of AnarchoticsAgent this is
	float fa_Duration = 0;				//Lifetime of the effect or modifier
	int fa_Strength = 0;				//Current strength of this agent
	bool fa_isActive = false;			//Is the agent active
	EntityAI attachedTo;				//What is the agent attached to
	bool attachedToPlayer = false;		//Attached to player?
	bool attachedToItem = false;		//Attached to item? */
	
class TrippingAgent extends AnarchoticsAgent
{
	
	override void Init()
	{
		super.Init();
		SetType(FA_Specials.TUNNEL_VISION);
		SetDuration(25.0);
		AddStrength(5);	
	}
	
	
		
}