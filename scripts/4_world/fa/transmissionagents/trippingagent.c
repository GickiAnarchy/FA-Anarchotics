class Tripping extends AgentBase
{
	override void Init()
	{
		m_Type 					= faAgents.TRIPPING;
		m_Invasibility 			= 1;
		m_TransferabilityIn		= 1;
		m_TransferabilityOut	= 0;
		m_AntibioticsResistance = 1;
		m_MaxCount 				= 400;
		m_Potency 				= EStatLevels.GREAT;
		m_DieOffSpeed 			= 1;
		m_Digestibility 		= 1;
	}
}