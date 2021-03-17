class ActionProcessMethCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DECONSTRUCT / 2 );
	}
};
 
class ActionProcessMeth: ActionContinuousBase
{
	void ActionProcessMeth()
	{
		m_CallbackClass = ActionProcessMethCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_MEDIUM;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		//m_ConditionTarget = new CCTNonRuined( UAMaxDistances.BASEBUILDING );
		m_ConditionTarget = new CCTObject();
	}
 
	override string GetText()
	{
		return "Process Ingredients";
	}
 
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if ( targetObject )
		{	
			ItemBase fa_item = ItemBase.Cast( targetObject );
			if(fa_item){
				if(fa_item.IsInvEmpty())
				{
				    return false;
				}
				if( !fa_item.IsFacingPlayer(player) ) 
				{
				    return false;
				}
				//if (fa_item.)
				//{
				//	return true;            
				//}
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