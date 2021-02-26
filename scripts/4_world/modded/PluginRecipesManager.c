modded class PluginRecipesManager
{	

	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		
		//! Basebuilding
		RegisterRecipe(new CraftRed);
	}
}