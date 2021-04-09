class FAEffects extends PPEffects
{
  //Vignette
	static int 		m_VignetteTrippy;
	static float	m_VignetteTrippy_R		 	= 10;
	static float	m_VignetteTrippy_G	 		= 150;
	static float	m_VignetteTrippy_B		 	= 10;
	static float	m_VignetteTrippy_A	 		= 0.2;
	static float vigColor[4];
	
	//Color
	static int m_ColorTrippy;
	
	
	override static void Init()
	{
		PPEffects.Init();
		m_VignetteTrippy = RegisterVignetteEffect();
 		vigColor[0] = m_VignetteTrippy_R;
		vigColor[1] = m_VignetteTrippy_G;
		vigColor[2] = m_VignetteTrippy_B;
		vigColor[3] = m_VignetteTrippy_A;
		//
		m_ColorTrippy = RegisterColorEffect();
	}
	
	
	static void SetTrippyVignette(float value = 0.2) //TODO- Make randomized
	{
		SetVignetteEffectValue(m_VignetteTrippy, value, 2,225,0,0.3); //int, intensity, r,g,b,a
		UpdateVignette();
	}
	static void DisableTrippyVignette()
	{
		SetVignetteEffectValue(m_VignetteTrippy, 0,0,0,0,0); //int, intensity, r,g,b,a
		UpdateVignette();
	}
	
	
	static void EnableTrippyColor()
	{
	  int rgb[3];
	  rgb[0] = Math.RandomInt(1,254);
	  rgb[1] = Math.RandomInt(1,254);
	  rgb[2] = Math.RandomInt(1,254);
	  
	  SetColorValue(m_ColorTrippy, rgb[0], rgb[1], rgb[2], 0.7, 0.6);
	  UpdateColor();
	}
	static void DisableTrippyColor()
	{
	  SetColorValue(m_ColorTrippy,0,0,0,0,0);
	  UpdateColor();
	}
	
};