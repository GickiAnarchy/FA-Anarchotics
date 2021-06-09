class BlurSoda extends FA_DrinkBase
{
    void BlurSoda()
    {
        SetMixed(true);
    }

    override void OnConsume(float amount, PlayerBase consumer)
    {
        consumer.GiveShock(75);
    };

}