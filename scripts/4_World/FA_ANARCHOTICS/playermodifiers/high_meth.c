class High_MethMdfr: ModifierBase
{
	const int LIFETIME = 450;
	private float activated_hp;
	
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= fa_Modifiers.HIGH_METH;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= 1;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		if (!player.m_ModifiersManager.IsModifierActive(fa_Modifiers.HIGH_METH) && player.GetSingleAgentCount(faAgents.METH_HIGH) <= 2)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	
	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
	
	override string GetDebugText()
	{
		return (LIFETIME - GetAttachedTime()).ToString();
	}
	
	override void OnActivate(PlayerBase player)
	{
		if( player.GetNotifiersManager() ) player.GetNotifiersManager().ActivateByType(eNotifiers.NTF_PILLS);
		// player.GiveShock(100);
		player.GetStaminaHandler().SetStamina(100);
		player.GetStaminaHandler().SetDepletionMultiplier(0);
		activated_hp = player.GetHealth();
		player.m_EmoteManager.CanPlayEmote(EmoteConstants.ID_EMOTE_LYINGDOWN) = false;
		//player.m_EmoteManager.CanPlayEmote(EmoteConstants.ID_EMOTE_LYINGDOWN) = false;
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		if( player.GetNotifiersManager() ) player.GetNotifiersManager().DeactivateByType(eNotifiers.NTF_PILLS);
		player.GetStaminaHandler().SetDepletionMultiplier(1);
		player.m_EmoteManager.CanPlayEmote(EmoteConstants.ID_EMOTE_LYINGDOWN) = true;
		player.SetHealth("", "", activated_hp);
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if( attached_time >= LIFETIME )
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		player.GetStaminaHandler().SetStamina(100);
		player.SetHealth("", "", 100);

	}

	
};