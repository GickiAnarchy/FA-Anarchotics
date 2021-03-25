class ActionCreateMethStoveCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DECONSTRUCT / 2 );
	}
};
 
class ActionCreateMethStove: ActionContinuousBase
{
	void ActionCreateMethStove()
	{
		m_CallbackClass = ActionCreateMethStoveCB;
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
		return "Combine Cooking Elements";
	}
 
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if ( targetObject )
		{	
			DrugTable fa_item = DrugTable.Cast( targetObject );
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
				
				if ( fa_item.isReadyToCraftCooking() == true )
				{
					return true;      
				}				
			}
		}
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) 
	{
		string name = "";
		ItemBase myItem = ItemBase.Cast( action_data.m_Target.GetObject() );
		vector pos = myItem.GetSelectionPositionMS("Material_Cooking_1");
		
		if(myItem)
		{
			name = myItem.Get_FA_KitName();
			//name = myItem.Get_FA_KitName();
			//Make function to return meth stove object
			
			myItem.Delete();
			//Delete it
		}
		
		//ItemBase.Cast( GetGame().CreateObject(name, pos) );
		myItem.GetInventory().CreateAttachment(name);
		//Create meth stove on tables proxy point.
		//check on POS parameter.
		return;	
	}
	
}