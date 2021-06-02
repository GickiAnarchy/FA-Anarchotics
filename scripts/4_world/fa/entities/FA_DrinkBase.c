class FA_DrinkBase extends Bottle_Base
{
    //Mixing
    protected bool fa_Mixed = false;


    //
    override void SetActions()
    {
        super.SetActions();

        AddAction(ActionMixDrink);
    }

}