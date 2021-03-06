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

//Class caf_ag_equip_c : EastEurope\Uniforms\eur_fatigues_01\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_equip_EEUR_fatigues_01
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class ItemInfo;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class Uniform_Base;
	class U_CAF_AG_EEUR_FATIGUES_01: Uniform_Base
	{
		scope = 2;
		displayName = "East Europe Fatigues 1";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_AG_EEUR_FATIGUES_01";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_EEUR_FATIGUES_01a: U_CAF_AG_EEUR_FATIGUES_01
	{
		displayName = "East Europe Fatigues 1a";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_EEUR_FATIGUES_01a";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
};
class CfgVehicles
{
	class Man;
	class O_Soldier_F: Man
	{
		class EventHandlers;
	};
	class CAF_AG_EEUR_FATIGUES_01: O_Soldier_F
	{
		scope = 1;
		author = "CAF MOD TEAM";
		armor = 0.5;
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_01";
		model = "\A3\Characters_F\OPFOR\o_officer.p3d";
		hiddenselections[] = {"Camo"};
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\che_3_1_co.paa"};
		class Wounds
		{
			mat[] = {"A3\Characters_F\OPFOR\Data\officer.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat"};
			tex[] = {};
		};
	};
	class CAF_AG_EEUR_FATIGUES_01a: CAF_AG_EEUR_FATIGUES_01
	{
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_01a";
		hiddenselections[] = {"Camo"};
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\che_3_2_co.paa"};
	};
};
//};
