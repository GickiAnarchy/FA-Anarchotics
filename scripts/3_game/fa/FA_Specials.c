enum FA_Specials
{
    /*--------------------
            PROS	(EVEN NUMBERS ONLY)
    --------------------*/
    HEALING = 10;       //Heals player by x
    INVISIBILITY = 12;  //Player becomes invisible for x seconds
    BONE_REGEN = 14;    //Instantly heals broke  bones
    X_HIT_SHIELD = 16;  //
    
    /*--------------------
            CONS	(ODD NUMBERS ONLY)
    --------------------*/
    BLURRY = 11;        //Activates blurry vision for x seconds
    TUNNEL_VISION = 13; //Activates vignette for x seconds
    DAMAGING = 15;      //Deals x damage to player
}


enum FA_AGENTS
{	
	AGENT_BASE = 0;		//FA_AGENTS[0] is null. Used to start count at 1.
	AGENT_METH;
	AGENT_LSD;
	AGENT_THC;
	AGENT_RED;
}
