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

//Class caf_ag_equip_c : EastEurope\Headgear\eeur_fur_hat\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_eeur_equip_h_furhat
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
	class H_caf_ag_fur: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Fur Hat (BRN)";
		model = "\caf_ag_equip\hat_east_eur_01.p3d";
		hiddenselections[] = {"Camo"};
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\woodlander_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\caf_ag_equip\hat_east_eur_01.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenselections[] = {"Camo"};
			hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\woodlander_blk_co.paa"};
			armor = 0;
			passThrough = 1;
		};
	};
	class H_caf_ag_fur2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Fur Hat (BLK)";
		model = "\caf_ag_equip\hat_east_eur_01.p3d";
		hiddenselections[] = {"Camo"};
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\woodlander_blk_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\caf_ag_equip\hat_east_eur_01.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenselections[] = {"Camo"};
			hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\woodlander_blk_co.paa"};
			armor = 0;
			passThrough = 1;
		};
	};
};
//};