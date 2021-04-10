class TrippyMdfr: ModifierBase
{
	static const int AGENT_THRESHOLD_ACTIVATE_TRIP = 75;
	static const int AGENT_THRESHOLD_DEACTIVATE_TRIP = 10;
		
	
	override void Init()
	{
		m_TrackActivatedTime 	= true;
		m_ID 					= faModifiers.MDF_TRIPPY;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;
	}
	
	override bool ActivateCondition(PlayerBase player)
	{
		Print(player.GetSingleAgentCount(faAgents.TRIPPING));		
		if (player.GetSingleAgentCount(faAgents.TRIPPING) >= AGENT_THRESHOLD_ACTIVATE_TRIP)
		{
			return true;
		}
		return false;
	}

	override void OnActivate(PlayerBase player)
	{
		player.GetSymptomManager().QueueUpSecondarySymptom(fa_SymptomIDs.SYMPTOM_FACOLORBLUR);
	}

	override void OnReconnect(PlayerBase player)
	{
		this.OnActivate(player);
	}

	override void OnDeactivate(PlayerBase player)
	{
		//if( player.m_NotifiersManager ) 
			//player.m_NotifiersManager.DeactivateByType(eNotifiers.NTF_FEVERISH);
		player.GetSymptomManager().RemoveSecondarySymptom(fa_SymptomIDs.SYMPTOM_FACOLORBLUR);
	}

	override bool DeactivateCondition(PlayerBase player)
	{
		return !ActivateCondition(player);
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		int chance = Math.RandomInt(1,100);
		if (chance <= 20)
		{
			Print(player.GetName());
			SymptomBase symptom = player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
		}
	}
};