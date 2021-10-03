class CfgPatches
{
	class ExpansionTraderCompatibility
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"Trader",
			"DayZExpansion_Vehicles_Scripts"
		};
	};
};
class CfgMods
{
	class ExpansionTraderCompatibility
	{
		dir="ExpansionTraderCompatibility";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="ExpansionTraderCompatibility";
		credits="Florian Schmidt";
		author="FlorianSW";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"Trader",
			"DayZExpansion_Vehicles_Scripts"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"ExpansionTraderCompatibility\4_World"
				};
			};
		};
	};
};
