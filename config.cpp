class CfgPatches
{
  class FA_Drugs
  {
    units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
  };
};
class CfgMods
{
  class FA_Drugs
  {
    dir = "FA_Drugs";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Anarchotics";
		credits = "GickiAnarchy";
		author = "GickiAnarchy";
		version = "1.0";
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"FA_Drugs/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"FA_Drugs/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"FA_Drugs/scripts/5_Mission"};
			};
		};
  };
};