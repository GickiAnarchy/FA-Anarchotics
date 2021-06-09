class DrinkBase extends FA_DrinkBase
{
    override void Mix(int mixer)
	{
		if (mixer == 1)
		{
			ReplaceEdibleWithNew("BlurSoda");
		}
	}
};