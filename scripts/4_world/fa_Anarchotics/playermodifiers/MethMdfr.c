class MethMdfr: ModifierBase
{
	//const int LIFETIME = 900;
	int fa_lifetime;
	
	override void Init()
	{
	  
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= AnarchoticsModifiers.FA_METH;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= 1;
	};
 
	override bool ActivateCondition(PlayerBase player)
	{
		return true;
	};
	
	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	};
	
	override string GetDebugText()
	{
		return (fa_lifetime - GetAttachedTime()).ToString();
	};
 
	
	override void OnActivate(PlayerBase player)
	{
		
	if (!fa_lifetime)
	{
		fa_lifetime = player.FA_CreateMethLifetime();
	};
	  
	if( player.GetNotifiersManager() ) player.GetNotifiersManager().ActivateByType(eNotifiers.NTF_PILLS);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		if( player.GetNotifiersManager() ) player.GetNotifiersManager().DeactivateByType(eNotifiers.NTF_PILLS);
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if( attached_time >= fa_lifetime )
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
		
	}
 
	
};