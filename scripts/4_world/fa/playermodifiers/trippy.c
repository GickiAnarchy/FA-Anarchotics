class TrippyMdfr: ModifierBase
{
	int counter;
	
	override void Init()
	{
		m_TrackActivatedTime 	= false;
		m_ID 					= faModifiers.MDF_TRIPPY;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;
		counter = 0;
	}
	override bool ActivateCondition(PlayerBase player)
	{
		return true;
	}

	override void OnActivate(PlayerBase player)
	{
		counter = 0;
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
		if (counter >= 600)
		{
			return true;
		}
		return false;
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		counter++;
		if (counter >= 100) { this.DeactivateCondition(player); }
	}
};