modded class PlayerBase extends ManBase
{
	//Variables
	bool wearingFA_Hat = false;
	
	//Functions
	bool GetWearingFA_Hat()
	{
		return wearingFA_Hat;
	}
	
	void SetWearingFA_Hat(int setter)	//0 = true ,1+ = false;
	{
		if (setter == 0)
		{
			wearingFA_Hat = true;
		};
		if (setter >= 1)
		{
			wearingFA_Hat = false;
		};
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);
				
		if (FA_Hat.Cast(item))
		{
			SetWearingFA_Hat(0);
		};
	}
	
	
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);
		
		if (FA_Hat.Cast(item))
		{
			SetWearingFA_Hat(1);
		};
	}
	
	override void OnJumpStart()
	{
		Print(GetSingleAgentCount(faAgents.TRIPPING));
		super.OnJumpStart();
	}
	
	override void OnJumpEnd(int pLandType = 0)
	{
		int pass = pLandType;
		Print(GetSingleAgentCount(faAgents.TRIPPING));
		super.OnJumpEnd(pass);
	}
}