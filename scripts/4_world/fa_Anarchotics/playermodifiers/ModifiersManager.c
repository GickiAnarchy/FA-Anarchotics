enum AnarchoticsModifiers
{
	FA_METH = 420
}


modded class ModifiersManager
{
	override void Init()
	{
		super.Init();
		AddModifier(new MethMdfr);
	}
}