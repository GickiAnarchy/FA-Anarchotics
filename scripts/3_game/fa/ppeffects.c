/*
\class FAEffects
\brief An extention of PPEffects to set the vignette effect on drinks.
*/
class FAEffects extends PPEffects
{
	static int FA_VIGNETTE;
	static float FA_R = 0.4;
	static float FA_G = 0.9;
	static float FA_B = 0.2;
	static float FA_A = 0.5;
	
	
	override static void Init()
	{
		PPEffects.Init();
		if (!FA_VIGNETTE)
		{
			FA_VIGNETTE = RegisterVignetteEffect();
		}
		SetVignetteEffectValue(FA_VIGNETTE, 0.8, 0,0,0,0); //todo
		UpdateVignette();
	}

		/*!
	set vignette
	\param intensity <0, 1>, intensity of effect, 0 = disable
	\param R
	\param G
	\param B
	*/	
	/*
	static void FA_SetVignette(float intensity, float R, float G, float B, float A)
	{
		//Material matHDR = GetGame().GetWorld().GetMaterial("Graphics/Materials/postprocess/glow");

		float color[4];
		color[0] = R;
		color[1] = G;
		color[2] = B;
		color[3] = A;

		m_MatColors.SetParam("Vignette", intensity);
		m_MatColors.SetParam("VignetteColor", color);
	}
	*/
	
	static void Shuffle(float intensity)
	{
		FA_R = Math.RandomFloat(0.1,1.0);
		FA_G = Math.RandomFloat(0.1,1.0);
		FA_B = Math.RandomFloat(0.1,1.0);
		FA_SetVignette(intensity);
	}
	
	static void FA_SetVignette(float intense = 0.8)
	{
		float color[4];
		color[0] = FA_R;
		color[1] = FA_G;
		color[2] = FA_B;
		color[3] = FA_A;

		m_MatColors.SetParam("Vignette", intense);
		m_MatColors.SetParam("VignetteColor", color);
	}
	
	
	
	
}