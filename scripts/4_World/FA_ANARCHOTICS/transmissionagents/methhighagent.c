class MethAgent extends AgentBase
{
	override void Init()
	{
		m_Type 					= faAgents.METH_HIGH;
		m_Invasibility 			= 2.00;
		m_TransferabilityIn		= 0.5;
		m_TransferabilityOut	= 0.0;
		m_AntibioticsResistance = 1;
		m_MaxCount 				= 1000;
		m_Potency 				= EStatLevels.MEDIUM;
		m_DieOffSpeed 			= 0.45;
	}
}