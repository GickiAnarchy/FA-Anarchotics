modded class ModItemRegisterCallbacks
{
    override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterHeavy(pType, pBehavior);
        
		//pType.AddItemInHandsProfileIK("ITEM", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,"DZ\anims\anm\player\ik\heavy/tent_large.anm");
    };
	
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType,pBehavior);
		
		pType.AddItemInHandsProfileIK("FA_DrinkBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/water_bottle.anm");
	};
	
	override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterTwoHanded(pType, pBehavior);
		
		pType.AddItemInHandsProfileIK("DrugTable", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/tent_large.anm");

		pType.AddItemInHandsProfileIK("DrugTableKit", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/tent_large.anm");
    };
};