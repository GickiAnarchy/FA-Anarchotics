//* \brief NOT USED
/*
modded class PPEffects
{
	//CONSTANTS
	static const float FA_SHOCK_R = 0.1;//shock color value (relative) //todo
	static const float FA_SHOCK_G = 0.8;//shock color value (relative) //todo
	static const float FA_SHOCK_B = 0.2;//shock color value (relative) //todo
	
	override static int RegisterColorEffect()
	{
		return m_ColorEffect.Insert(0);
	}
	
	override static void SetColorValue(int index, float r, float g, float b, float a, float overlay)
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
	
	static void SetFAEffectColor(float value)
	{
		
		if (value > 0)
			SetColorValue(m_ShockEffect, FA_SHOCK_R, FA_SHOCK_G, FA_SHOCK_B, 1, value);
		else
			SetColorValue(m_ShockEffect, 0, 0, 0, 1, value);
		UpdateColor();
	}
	
}
*/