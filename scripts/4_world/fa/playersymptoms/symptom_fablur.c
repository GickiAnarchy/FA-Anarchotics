class FA_BlurSymptom extends SymptomBase
{
	Material m_MatGauss;

	float m_BlurDuration;
	float m_BlurStrength;
	float m_EffectTime;
	float m_EffectStartTime;
	float m_Time;
	
	
	const float BLUR_STRENGTH_MIN = 0.3;
	const float BLUR_STRENGTH_MAX = 0.6;
	
	const int BLUR_DURATION_TIME_MIN = 9;
	const int BLUR_DURATION_TIME_MAX = 19;
	
	const int MIN_TIME_BETWEEN_EFFECTS = 5.5;
	const int MAX_TIME_BETWEEN_EFFECTS = 9.5;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 100;
		m_ID = fa_SymptomIDs.SYMPTOM_FABLUR;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
		
	}

	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
		m_Time += deltatime;
		if( m_EffectStartTime <= 0 )
		{
			m_EffectStartTime = Math.RandomFloatInclusive(MIN_TIME_BETWEEN_EFFECTS, MAX_TIME_BETWEEN_EFFECTS);
			m_BlurDuration = Math.RandomFloatInclusive(BLUR_DURATION_TIME_MIN, BLUR_DURATION_TIME_MAX);
			m_BlurStrength = Math.RandomFloat(BLUR_STRENGTH_MIN, BLUR_STRENGTH_MAX);
			//PrintString("m_BlurDuration=" +m_BlurDuration.ToString());
		}
		
		if( m_EffectStartTime > 0 && m_Time > m_EffectStartTime )
		{
			m_EffectTime += deltatime / m_BlurDuration;
			float cos_value = Math.Sin(m_EffectTime  * Math.PI);
			float val = cos_value * m_BlurStrength;
			Print(val);
			PPEffects.SetBlurDrunk(val);
			//PrintString("cos=" +cos_value.ToString());
			
			if( m_EffectTime >= 1 )
			{
				m_EffectTime = 0;
				m_EffectStartTime = -1;
				m_Time = 0;
			}
		}
	}
	
	//!gets called once on an Symptom which is being activated
	override void OnGetActivatedServer(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated");
	}

	override void OnGetActivatedClient(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated");
	}

	override void OnGetDeactivatedServer(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated");
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
		PPEffects.SetBlurDrunk(0);
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated");
	}
	
	override bool CanActivate()
	{
		return super.CanActivate();
	}
}
