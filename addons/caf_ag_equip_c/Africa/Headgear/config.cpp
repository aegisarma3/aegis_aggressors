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

//Class caf_ag_equip_c : Africa\Headgear\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_africa_equip_h
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
	class H_Bandanna_surfer;
	class H_ag_bandanna_01: H_Bandanna_surfer
	{
		scope = 2;
		displayname = "Bandana (Surfer GRN)";
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\h_bandana_surfer_grn_co.paa"};
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_khk_CA.paa";
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {901,701,605};
			armor = 0;
			mass = 8;
			modelsides[] = {6};
			passthrough = 1;
			uniformmodel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			hiddenselections[] = {"Camo"};
			hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\h_bandana_surfer_grn_co.paa"};
		};
	};
	class H_ag_bandanna_02: H_Bandanna_surfer
	{
		scope = 2;
		displayname = "Bandana (Surfer RED)";
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\h_bandana_surfer_red_co.paa"};
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_khk_CA.paa";
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {901,701,605};
			armor = 0;
			mass = 8;
			modelsides[] = {6};
			passthrough = 1;
			uniformmodel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			hiddenselections[] = {"Camo"};
			hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\h_bandana_surfer_red_co.paa"};
		};
	};
	class H_ag_bandana_03: H_Bandanna_surfer
	{
		scope = 2;
		displayname = "Bandanna (Surfer ORG)";
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\h_bandana_surfer_org_co.paa"};
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_khk_CA.paa";
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {901,701,605};
			armor = 0;
			mass = 8;
			modelsides[] = {6};
			passthrough = 1;
			uniformmodel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			hiddenselections[] = {"Camo"};
			hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\h_bandana_surfer_org_co.paa"};
		};
	};
	class H_ag_bandana_04: H_Bandanna_surfer
	{
		scope = 2;
		displayname = "Bandanna (Surfer YEL)";
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\h_bandana_surfer_yel_co.paa"};
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_khk_CA.paa";
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {901,701,605};
			armor = 0;
			mass = 8;
			modelsides[] = {6};
			passthrough = 1;
			uniformmodel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			hiddenselections[] = {"Camo"};
			hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\h_bandana_surfer_yel_co.paa"};
		};
	};
};
//};
