//!  Anarchotics Kit Item Base
/*!
\class FA_Item
\brief A class base to create objects that are to be used as a 'kit'... an object that usually can be packed into a box to be moved and deployed elsewhere.
*/

class FA_Item extends ItemBase
{
	//! \var FA_KitName
    /*!
      \brief The class name of the 'packed' or 'boxed' item. Used in actions that pack and unpack. 
    */
	protected string FA_KitName = "null";	/*!< */


	void FA_Item()
	{
		
	}
	
	
	//! \fn Set_FA_KitName()
    /*!
      	\brief Sets the FA_Item Kit Name.
		\param name String to be set as the Kit name.
    */
	void Set_FA_KitName(string name)
	{
		if (FA_KitName)
		{
			FA_KitName = name;
		};
	};
	
	//! \fn Get_FA_KitName()
    /*!
      	\brief Returns the FA_Item Kit Name
    */
	override string Get_FA_KitName()
	{
			return FA_KitName;
	};
	
	//! \fn CanPutInCargo( EntityAI parent )
    /*!
      	\brief Return true if the item can be put into cargo.
		\param parent The item to check if can be put in cargo.
    */
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    };
	
	//! \fn CanPutInHands( EntityAI parent )
    /*!
      	\brief Return true if the item can be put into hands.
		\param parent The item to check if can be put in hands.
    */
    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
    };


};