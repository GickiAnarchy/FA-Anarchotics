class FA_ColorBlurSymptom extends SymptomBase
{
	Material m_MatGauss;
	int lifetime = 30;
	
	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 100;
		m_ID = fa_SymptomIDs.SYMPTOM_FACOLORBLUR;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;	
		m_SyncToClient = true;
	}

	
	int GetLife()
	{
		return lifetime;
	}
	
	void CountdownLife()
	{
		lifetime - 1;
		return;
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
	  	if (GetLife() > 0)
		{
			FAEffects.SetTrippyVignette(Math.RandomFloat(0.1,0.9));
			Print(GetLife());
			CountdownLife();
		}
		else
		{
			FAEffects.DisableTrippyVignette();
		}
	}

	override void OnUpdateClient(PlayerBase player, float deltatime)
	{

	}
	
	//!gets called once on an Symptom which is being activated
	override void OnGetActivatedServer(PlayerBase player)
	{

	}

	override void OnGetActivatedClient(PlayerBase player)
	{
		
	}	

	override void OnGetDeactivatedServer(PlayerBase player)
	{

	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
		FAEffects.DisableTrippyVignette();
	}
	
	override bool CanActivate()
	{
		return true;
	}
}
