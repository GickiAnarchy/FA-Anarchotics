modded class Epinephrine extends Inventory_Base
{		
	override void OnApply(PlayerBase player)
	{
		super.OnApply(player);
		
		if( player.GetModifiersManager().IsModifierActive(faModifiers.MDF_HIGH_DOPE) )//effectively resets the timer
		{
			player.GetModifiersManager().DeactivateModifier( faModifiers.MDF_HIGH_DOPE, false );
		}
	}
};