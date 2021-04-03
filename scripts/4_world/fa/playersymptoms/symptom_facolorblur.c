class FA_ColorBlurSymptom extends SymptomBase
{

	Material m_MatGauss;
	float intense = 0.8;
	FAEffects fafx;
		
	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 100;
		m_ID = fa_SymptomIDs.SYMPTOM_FACOLORBLUR;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
	  
	}

	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
		fafx.Shuffle(intense);
	}
	
	//!gets called once on an Symptom which is being activated
	override void OnGetActivatedServer(PlayerBase player)
	{

	}

	override void OnGetActivatedClient(PlayerBase player)
	{
		//FAEffects.Init();
		fafx.Init();
	}	

	override void OnGetDeactivatedServer(PlayerBase player)
	{

	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
		
	}
	
	override bool CanActivate()
	{
		return true;
	}
}
