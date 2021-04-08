 modded class SymptomManager
 {
	 override void Init()
	 {
		super.Init();
		RegisterSymptom(new FA_BlurSymptom);
		RegisterSymptom(new FA_ColorBlurSymptom);
	 }
	 
 }