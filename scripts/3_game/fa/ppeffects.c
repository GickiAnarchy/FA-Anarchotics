class FAEffects extends PPEffects
{
	static int 		m_VignetteTrippy;
	static float	m_VignetteTrippy_R		 	= 10;
	static float	m_VignetteTrippy_G	 		= 150;
	static float	m_VignetteTrippy_B		 	= 10;
	static float	m_VignetteTrippy_A	 		= 0.2;
	static float vigColor[4];
	
	override static void Init()
	{
		PPEffects.Init();
		m_VignetteTrippy = RegisterVignetteEffect();
 		vigColor[0] = m_VignetteTrippy_R;
		vigColor[1] = m_VignetteTrippy_G;
		vigColor[2] = m_VignetteTrippy_B;
		vigColor[3] = m_VignetteTrippy_A;
		//SetTrippyVignette();
	}
	
	static void SetTrippyVignette(float value = 0.9)
	{
		SetVignetteEffectValue(m_VignetteTrippy, value, 20,225,20,0.5); //int, intensity, r,g,b,a
		UpdateVignette();
	}
	
	static void EnableTrippyVignette()
	{
		SetVignette(0.9, vigColor[0],vigColor[1],vigColor[2],vigColor[3]);
	}
	
	static void DisableTrippyVignette()
	{
		SetVignetteEffectValue(m_VignetteTrippy, 0,0,0,0,0); //int, intensity, r,g,b,a
		UpdateVignette();
	}
	
};