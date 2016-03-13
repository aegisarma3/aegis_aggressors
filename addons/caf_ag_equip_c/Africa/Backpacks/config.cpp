////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Thu Mar 10 23:36:40 2016 : Source 'file' date Thu Mar 10 23:36:40 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=14
enum {
	OrdinalEnum = 2,
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class caf_ag_equip_c : Africa\Backpacks\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_equip_afr_backpack
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class B_TacticalPack_oli;
	class B_AFR_RPG_BAG: B_TacticalPack_oli
	{
		class TransportMagazines
		{
			class _xx_caf_og7
			{
				magazine = "caf_og7";
				count = 2;
			};
			class _xx_caf_pg7v
			{
				magazine = "caf_pg7v";
				count = 2;
			};
		};
	};
};
//};
