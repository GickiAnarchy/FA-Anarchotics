modded class PlayerBase extends ManBase
{
	//Variables
	bool FA_SuccessfulMix;
	int FA_TinkerLevel = 0;

	bool isKnockedOut = false;

	//Functions

	//void KnockOutMd



	void AddTinkerLevel(int add)
	{
		
	}

	int GetTinkerLevel()
	{
		return FA_TinkerLevel;
	}

	bool isMixSuccessful()
	{
		
	}


	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);
		
	}
	
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);
	
	}
	
	override void OnJumpStart()
	{
		super.OnJumpStart();
	}
	
	override void OnJumpEnd(int pLandType = 0)
	{
		int pass = pLandType;
		super.OnJumpEnd(pass);
	}

	

}