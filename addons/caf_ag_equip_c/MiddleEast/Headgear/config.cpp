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

//Class caf_ag_equip_c : MiddleEast\Headgear\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_middleeast_equip_h
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
	class H_caf_ag_paktol: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Paktol (RED)";
		model = "\caf_ag_equip\tali_hat_01.p3d";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"caf_ag_equip_t\tex\tak_civil01_1_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\caf_ag_equip\tali_hat_01.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenselections[] = {"camo"};
			hiddenselectionstextures[] = {"caf_ag_equip_t\tex\tak_civil01_1_co.paa"};
			armor = 0;
			passThrough = 1;
		};
	};
	class H_caf_ag_paktol_02: H_caf_ag_paktol
	{
		displayName = "Paktol (BRN)";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"caf_ag_equip_t\tex\tak_civil01_2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\caf_ag_equip\tali_hat_01.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenselections[] = {"camo"};
			hiddenselectionstextures[] = {"caf_ag_equip_t\tex\tak_civil01_2_co.paa"};
			armor = 0;
			passThrough = 1;
		};
	};
	class H_caf_ag_paktol_03: H_caf_ag_paktol
	{
		displayName = "Paktol (GRY)";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"caf_ag_equip_t\tex\tak_civil01_3_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\caf_ag_equip\tali_hat_01.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenselections[] = {"camo"};
			hiddenselectionstextures[] = {"caf_ag_equip_t\tex\tak_civil01_3_co.paa"};
			armor = 0;
			passThrough = 1;
		};
	};
	class H_caf_ag_paktol_04: H_caf_ag_paktol
	{
		displayName = "Paktol (TAN)";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"caf_ag_equip_t\tex\tak_civil01_5_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\caf_ag_equip\tali_hat_01.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenselections[] = {"camo"};
			hiddenselectionstextures[] = {"caf_ag_equip_t\tex\tak_civil01_5_co.paa"};
			armor = 0;
			passThrough = 1;
		};
	};
	class H_caf_ag_wrap: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Head Wrap (BLK)";
		model = "\caf_ag_equip\tali_wrap_01.p3d";
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\caf_ag_equip\tali_wrap_01.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenselections[] = {};
			hiddenselectionstextures[] = {};
			armor = 0;
			passThrough = 1;
		};
	};
	class H_caf_ag_turban: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Turban";
		model = "\caf_ag_equip\tali_hat_02.p3d";
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\caf_ag_equip\tali_hat_02.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenselections[] = {};
			hiddenselectionstextures[] = {};
			armor = 0;
			passThrough = 1;
		};
	};
};
//};
