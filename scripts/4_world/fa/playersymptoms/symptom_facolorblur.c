class FA_ColorBlurSymptom extends SymptomBase
{
	Material m_MatGauss;
	float lifetime;
	
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

	string GetDebugText(int choice)
	{
		string msgOn = "Color Blur Symptom Started";
		string msgOff = "Color Blur Symptom Ended";
		string msg00 = GetLife().ToString();
		
		if (choice == 0)
		{
			return msgOn;
		}
		
		if (choice == 10)
		{
			return msg00;
		}
		
		return msgOff;
	}
	
	int GetLife()
	{
		PlayerBase p = PlayerBase.Cast(GetGame().GetPlayer());
		lifetime = p.GetSingleAgentCountNormalized(faAgents.TRIPPING);
		return lifetime;
	}
	
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
		FAEffects.SetTrippyVignette(Math.RandomFloat(0.5,0.9));
		Print(GetLife());

		if (GetLife() <=0)
		{
			this.Deactivate();
		}
	}

	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
		GetDebugText(10);
	}
	
	//!gets called once on an Symptom which is being activated
	override void OnGetActivatedServer(PlayerBase player)
	{
    	//Print(GetDebugText(10));
	}

	override void OnGetActivatedClient(PlayerBase player)
	{
		Print(GetDebugText(0));
		//FAEffects.SetTrippyVignette(Math.RandomFloat(0.5,0.9));
	}	

	override void OnGetDeactivatedServer(PlayerBase player)
	{
		//Print(GetDebugText(10));
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
		Print(GetDebugText(1));
		FAEffects.DisableTrippyVignette();
	}
	
	override bool CanActivate()
	{
		if (GetLife() >= 10)
		return true;
		
		return false;
	}
}
