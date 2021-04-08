modded class Hologram
{
	override void UpdateHologram(float timeslice)
	{
		super.UpdateHologram(timeslice);
		ItemBase faItem = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());
		if (faItem.IsKindOf("FA_Item_Kit"))
		{
			vector faItemPos = GetProjectionEntityPosition(m_Player) + faItem.Get_faItemPos();
			SetProjectionPosition(faItemPos);
			SetProjectionOrientation(AlignProjectionOnTerrain(timeslice));
			m_Projection.OnHologramBeingPlaced(m_Player);
			return;
		}
	}

	override EntityAI PlaceEntity(EntityAI entity_for_placing)
	{
		if (entity_for_placing.IsInherited(FA_Item_Kit))
			return entity_for_placing;

		return super.PlaceEntity(entity_for_placing);
	}

	override string GetProjectionName(ItemBase item)
	{

		if (item.IsInherited(FA_Item_Kit))
			return item.Get_FA_ItemName();

		return super.GetProjectionName(item);
	}

	override void EvaluateCollision(ItemBase action_item = null)
	{
		if (m_Parent.IsInherited(FA_Item_Kit) )
		{
			SetIsColliding(false);
			return;
		}
		super.EvaluateCollision();
	}

	override bool IsFloating()
	{
		if (m_Parent.IsInherited(FA_Item_Kit))
		{
			return true;
		}

		return super.IsFloating();
	}

	override void SetProjectionPosition(vector position)
	{
		if (m_Parent.IsInherited(FA_Item_Kit) && IsFloating())
		{
			vector faItemPos = SetOnGroundOld(position) + m_Parent.Get_faItemPos();
			m_Projection.SetPosition(faItemPos);
			return;
		}

		super.SetProjectionPosition(position);
	}	

	vector SetOnGroundOld( vector position )
	{
		vector from = position;
		vector ground;
		vector player_to_projection_vector;
		float projection_diameter = GetProjectionDiameter();
			
		ground = Vector(0, - Math.Max( projection_diameter, SMALL_PROJECTION_GROUND ), 0);	
		vector to = from + ground;
		vector contact_pos;
		int contact_component;
		
		DayZPhysics.RaycastRV( from, to, contact_pos, m_ContactDir, contact_component, NULL, NULL, m_Projection, false, false );

		HideWhenClose( contact_pos );

		return contact_pos;
	}
};