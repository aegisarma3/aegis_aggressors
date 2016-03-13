////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Thu Mar 10 23:36:53 2016 : Source 'file' date Thu Mar 10 23:36:53 2016
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

//Class caf_ag_factions : Africa\Civilian\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_faction_afr_civ
	{
		units[] = {"CAF_AG_AFR_CIV","CAF_AG_AFR_CIV_02","CAF_AG_AFR_CIV_03","CAF_AG_AFR_CIV_04"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	access = 1;
	class caf_ag_afr_civ
	{
		displayName = "African";
		icon = "";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 3;
	};
};
class CfgVehicles
{
	class Man;
	class Civilian_F: Man
	{
		class EventHandlers;
	};
	class CAF_AG_AFR_CIV_BASE: Civilian_F
	{
		scope = 0;
		author = "CAF MOD TEAM";
		side = 3;
		armor = 0.5;
		faction = "caf_ag_afr_civ";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_AFRICAN","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\africa\civilian\Random.sqf""";
		};
	};
	class CAF_AG_AFR_CIV: CAF_AG_AFR_CIV_BASE
	{
		scope = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01";
	};
	class CAF_AG_AFR_CIV_02: CAF_AG_AFR_CIV_BASE
	{
		scope = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01a";
	};
	class CAF_AG_AFR_CIV_03: CAF_AG_AFR_CIV_BASE
	{
		scope = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02";
	};
	class CAF_AG_AFR_CIV_04: CAF_AG_AFR_CIV_BASE
	{
		scope = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02a";
	};
};
//};
