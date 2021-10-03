modded class CarScript {
	override protected void OnEngineStart(int index)
	{
        super.OnEngineStart(index);

        PlayerBase player = PlayerBase.Cast(CrewMember(DayZPlayerConstants.VEHICLESEAT_DRIVER));
        if (player)
            m_Trader_LastDriverId = player.GetIdentity().GetId();
	}
}
