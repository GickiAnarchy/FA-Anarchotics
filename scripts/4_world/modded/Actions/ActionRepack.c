class void ActionRepackCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DECONSTRUCT / 2 );
	}
};
 
class ActionRepack: ActionContinuousBase
{
	void ActionRepack()
	{
		m_CallbackClass = ActionRepackCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.BASEBUILDING );
	}
 
	override string GetText()
	{
		return "Repack";
	}
 
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if ( targetObject )
		{	
			ItemBase fa_item = ItemBase.Cast( targetObject );
			if(fa_item){
				if(!fa_item.IsInvEmpty())
				{
				    return false;
				}
				if( !fa_item.IsFacingPlayer(player) ) 
				{
				    return false;
				}
				if (fa_item.IsInherited(FA_Item))
				{
					return true;            
				}
			}
		}
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) 
	{
		vector pos = action_data.m_Player.GetPosition();
		string name = "";
		ItemBase myItem = ItemBase.Cast( action_data.m_Target.GetObject() );
		if(myItem)
		{
			name = myItem.Get_FA_KitName();
			myItem.Delete();
		}
		//add damage to tool
		action_data.m_MainItem.DecreaseHealth( 5, false );
		
		//return materials			
		ItemBase.Cast( GetGame().CreateObject(name, pos) );
		return;	
	}
	
}