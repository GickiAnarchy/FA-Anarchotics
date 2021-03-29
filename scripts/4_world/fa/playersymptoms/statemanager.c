/* 
enum SymptomIDs {

	SYMPTOM_COUGH = 1,
	SYMPTOM_VOMIT,
	SYMPTOM_BLINDNESS,
	SYMPTOM_BULLET_HIT,
	SYMPTOM_BLEEDING_SOURCE,
	SYMPTOM_BLOODLOSS,
	SYMPTOM_SNEEZE,
	SYMPTOM_FEVERBLUR,
	SYMPTOM_LAUGHTER,
	SYMPTOM_UNCONSCIOUS,
	SYMPTOM_FREEZE,
	SYMPTOM_HOT,
};
 */
 
 enum fa_SymptomIDs: SymptomIDs
 {
	 SYMPTOM_FABLUR = 6913
 }
 
 modded class SymptomManager
 {
	 override void Init()
	 {
		 RegisterSymptom(new FA_BlurSymptom);
	 }
	 
 }