modded class PluginRecipesManager
{	

	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		
		//Ingredients
		RegisterRecipe(new CraftRed);
	}
}