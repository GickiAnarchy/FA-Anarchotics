//! A template blank SymptomBase class file
/*
		class Symptom extends SymptomBase
		{
			Material m_MatGauss;
			//const int BLUR_DURATION = 3000;
			//ref Param1<vector> m_Position = new Param1<vector>("0 0 0");
			
			//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
			override void OnInit()
			{
				m_SymptomType = SymptomTypes.SECONDARY;
				m_Priority = 0;
				m_ID = SymptomIDs.SYMPTOM_ID;
				m_DestroyOnAnimFinish = true;
				m_IsPersistent = true;
				//MakeParamObjectPersistent(m_Position);
			}
			
			//!gets called every frame
			override void OnUpdateServer(PlayerBase player, float deltatime)
			{
			  
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
			  PPEffects.ActivateEffect();
			}

			override void OnGetDeactivatedServer(PlayerBase player)
			{

			}
			
			//!only gets called once on an active Symptom that is being deactivated
			override void OnGetDeactivatedClient(PlayerBase player)
			{
				PPEffects.DisableEffect();
			}
			
		}
*/