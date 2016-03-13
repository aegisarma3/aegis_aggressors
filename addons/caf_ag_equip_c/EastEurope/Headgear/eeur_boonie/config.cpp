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

//Class caf_ag_equip_c : EastEurope\Headgear\eeur_boonie\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_eeur_equip_h_boonie
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
	class HeadgearItem;
	class H_caf_ag_boonie_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayname = "Booniehat (EUR 1)";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\booniehat_chech_1_co.paa"};
		model = "\A3\Characters_F\Common\booniehat";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {801,901,701,605};
			armor = 0;
			mass = 10;
			modelsides[] = {6};
			passthrough = 1;
			hiddenselections[] = {"camo"};
			uniformmodel = "\A3\Characters_F\Common\booniehat";
		};
	};
	class H_caf_ag_boonie_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayname = "Booniehat (EUR 2)";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\booniehat_chech_2_co.paa"};
		model = "\A3\Characters_F\Common\booniehat";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {801,901,701,605};
			armor = 0;
			mass = 10;
			modelsides[] = {6};
			passthrough = 1;
			hiddenselections[] = {"camo"};
			uniformmodel = "\A3\Characters_F\Common\booniehat";
		};
	};
};
//};
