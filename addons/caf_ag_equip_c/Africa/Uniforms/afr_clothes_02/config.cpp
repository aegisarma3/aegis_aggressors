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

//Class caf_ag_equip_c : Africa\Uniforms\afr_clothes_02\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_equip_afr_clothes_02
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
		type = 802;
	};
	class Uniform_Base;
	class U_CAF_AG_AFR_CLOTHES_02: Uniform_Base
	{
		scope = 2;
		displayName = "African Clothes 2";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_AG_AFR_CLOTHES_02";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_AFR_CLOTHES_02a: U_CAF_AG_AFR_CLOTHES_02
	{
		displayName = "African Clothes 2a";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_AFR_CLOTHES_02a";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_AFR_CLOTHES_02b: U_CAF_AG_AFR_CLOTHES_02
	{
		displayName = "African Clothes 2b";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_AFR_CLOTHES_02b";
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
	class CAF_AG_AFR_CLOTHES_02: O_Soldier_F
	{
		scope = 1;
		author = "CAF MOD TEAM";
		armor = 0.5;
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02";
		model = "\A3\characters_F\civil\c_poor";
		hiddenselections[] = {"Camo"};
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\c_somcloth1_co.paa"};
		class Wounds
		{
			mat[] = {"A3\Characters_F\Civil\Data\c_cloth1.rvmat","A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth2.rvmat","A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth3.rvmat","A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth4.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\characters_f\civil\data\c_poloshirt.rvmat","A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Civil\Data\hunter.rvmat","A3\Characters_F\Civil\Data\hunter_injury.rvmat","A3\Characters_F\Civil\Data\hunter_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat","A3\Characters_F\Civil\Data\priest.rvmat","A3\Characters_F\Civil\Data\priest_injury.rvmat","A3\Characters_F\Civil\Data\priest_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			tex[] = {};
		};
	};
	class CAF_AG_AFR_CLOTHES_02a: CAF_AG_AFR_CLOTHES_02
	{
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02a";
		hiddenselections[] = {"Camo"};
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\c_somcloth2_co.paa"};
	};
	class CAF_AG_AFR_CLOTHES_02b: CAF_AG_AFR_CLOTHES_02
	{
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02b";
		hiddenselections[] = {"Camo"};
		hiddenselectionstextures[] = {"\caf_ag_equip_t\tex\c_som_cam_1_co.paa"};
	};
};
//};