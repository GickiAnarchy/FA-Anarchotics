//! MODDED PPEFFECTS
/*
	\class PPEffects
	\brief Adds Anarchotics shock color settings
*/

modded class PPEffects
{
  
  static int fa_shockEffect;
  static float FA_SHOCK_R =0.1;
  static float FA_SHOCK_G =0.8;
  static float FA_SHOCK_B =0.3;
  
  override static void Init()
  {
    fa_shockEffect = RegisterColorEffect();
  }
  
  static void ReadyFAShock(bool onoff)
  {
    if (onoff == true)
    {
      SetColorValue(fa_shockEffect, FA_SHOCK_R, FA_SHOCK_G, FA_SHOCK_B, 1, 0);
    UpdateColor();
    } 
    else 
    {
      ResetColorEffects();
    }
  }
  
  
  /*
  static void SetColorValue(int index, float r, float g, float b, float a, float overlay)
	{
		if ( index < m_ColorEffect.Count() )
		{
			ref array<float> values = {r,g,b,a,overlay};
			
			m_ColorValues.Set(index, values);
		}
		else
		{
			Print("Error: PPEffects: m_ColorValues with index: "+ index +" is not registered.");
		}
	}
  */
  
  
  
}