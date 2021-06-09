class FA_DrinkBase extends Bottle_Base
{
    //Mixing
    protected bool fa_Mixed = false;



    //
    protected void SetMixed(bool mixed)
    {
        fa_Mixed = mixed;
    }

    bool GetIsMixed()
    {
        return fa_Mixed;
    }



    //
    override void SetActions()
    {
        super.SetActions();
    }
	
	void Mix(int mixer) {};

}