class AnarchoticsAgent
{
	/*
					VARIABLES
	*/
	string fa_AgentName = "";			//Class name
	int fa_Type = 0;					//Type of AnarchoticsAgent this is
	float fa_Duration = 0;				//Lifetime of the effect or modifier
	int fa_Strength = 0;				//Current strength of this agent
	bool fa_isActive = false;			//Is the agent active
	EntityAI attachedTo;				//What is the agent attached to
	bool attachedToPlayer = false;		//Attached to player?
	bool attachedToItem = false;		//Attached to item?
	
	
	/*
					CONSTRUCTOR
	*/
	void AnarchoticsAgent()
	{
		Init();
	}
	
	void Init()
	{
		fa_AgentName = GetName();
	
	}
	
	
	/*
					ENCAPULATION
	*/
	string GetName()
	{
		return ClassName();
	}
	
	int GetType()
	{
		return fa_Type;
	}
	void SetType(int settype)
	{
		fa_Type = settype;
	}
	
	float GetDuration()
	{
		return fa_Duration;
	}
	void SetDuration(float setdur)
	{
		fa_Duration = setdur;
	}

	int GetStrength()
	{
		return fa_Strength;
	}
	void AddStrength(int strength)
	{
		int total = GetStrength() + strength;
		fa_Strength = total;
	}
	
	bool GetIsActive()
	{
		return fa_isActive;
	}
	void toggleActive()
	{
		string result; 
		if (fa_isActive == true)
		{
			fa_isActive = false;
		}
		if (fa_isActive == false)
		{
			fa_isActive = true;
		}
		result = GetName() + " active: " + fa_isActive.ToString();
		Print(result);
	}
	
	void SetAttachedItem(EntityAI att)
	{
		if (att.IsItemBase()) 
		{
			attachedToItem = true;
			attachedToPlayer = false;
			ItemBase item = ItemBase.Cast(att);
			attachedTo = item;
		}
		if (att.IsMan())
		{
			attachedToItem = false;
			attachedToPlayer = true;
			PlayerBase pl = PlayerBase.Cast(att);
			attachedTo = pl;
		}
	}
	
	
		
}