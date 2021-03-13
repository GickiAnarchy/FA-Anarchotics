class CfgPatches
{
  class Anarchotics
  {
    units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Tools"
		};
  };
};
class CfgMods
{
	class Anarchotics
	{
	dir = "Anarchotics";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Anarchotics";
		credits = "Code: GickiAnarchy	Modeling: SHoover";
		author = "GickiAnarchy";
		version = "1.0";
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Anarchotics/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Anarchotics/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Anarchotics/scripts/5_Mission"};
			};
		};
	};
};