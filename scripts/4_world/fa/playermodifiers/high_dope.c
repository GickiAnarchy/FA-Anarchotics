	class High_DopeMdfr: ModifierBase
{
	int counter;
	
	override void Init()
	{
		m_TrackActivatedTime 	= false;
		m_ID 					= faModifiers.MDF_HIGH_DOPE;
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
		//if( player.m_NotifiersManager ) 
		//player.m_NotifiersManager.ActivateByType(eNotifiers.NTF_FEVERISH);
		player.GetSymptomManager().QueueUpSecondarySymptom(fa_SymptomIDs.SYMPTOM_FABLUR);
	}

	override void OnReconnect(PlayerBase player)
	{
		this.OnActivate(player);
	}


	override void OnDeactivate(PlayerBase player)
	{
		//if( player.m_NotifiersManager ) 
			//player.m_NotifiersManager.DeactivateByType(eNotifiers.NTF_FEVERISH);
		player.GetSymptomManager().RemoveSecondarySymptom(fa_SymptomIDs.SYMPTOM_FABLUR);
	}


	override bool DeactivateCondition(PlayerBase player)
	{
		return true;
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		counter++;
		if (counter == 10)
		{
			int r = Math.RandomInt(70,99);
			player.GetStaminaHandler().SetStamina(r);
			counter = 0;			
		}
	}
};