modded class ModItemRegisterCallbacks
{
    override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterHeavy(pType, pBehavior);
        //pType.AddItemInHandsProfileIK("DOM_MilitaryBox", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,"DZ\anims\anm\player\ik\heavy/tent_large.anm");
    };
	
	override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterTwoHanded(pType, pBehavior);
		
		//Furniture
		pType.AddItemInHandsProfileIK("DrugTable", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/tent_large.anm");
		
		//Ingredients
		pType.AddItemInHandsProfileIK("DrugTableKit", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/tent_large.anm");
        
        //pType.AddItemInHandsProfileIK("DOM_GasStove", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
    };
};