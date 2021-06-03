class FA_MixBase extends ItemBase
{
    protected ItemBase itemMixed;


    ItemBase GetResult()
    {
        if (itemMixed != NULL)
        {
            return itemMixed;
        }
        else
        {
            return NULL;
        }
    }

    

}