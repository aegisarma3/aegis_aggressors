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

//Class caf_ag_equip_c : MiddleEast\Uniforms\me_robe_02\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_equip_me_robe_02
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
	class U_CAF_AG_ME_ROBES_02: Uniform_Base
	{
		scope = 2;
		displayName = "Middle East Robes 2";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_02\inv_robe_02_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_AG_ME_ROBES_02";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_02a: U_CAF_AG_ME_ROBES_02
	{
		displayName = "Middle East Robes 2a";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_02\inv_robe_02a_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_02a";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_02b: U_CAF_AG_ME_ROBES_02
	{
		displayName = "Middle East Robes 2b";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_02\inv_robe_02b_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_02b";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_02c: U_CAF_AG_ME_ROBES_02
	{
		displayName = "Middle East Robes 2c";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_02\inv_robe_02c_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_02c";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_Mil_01: U_CAF_AG_ME_ROBES_02
	{
		displayName = "Middle East Robes (Mil 1)";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_02\inv_robe_mil_01_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_mil_01";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_mil_01a: U_CAF_AG_ME_ROBES_Mil_01
	{
		displayName = "Middle East Robes (Mil 1a)";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_02\inv_robe_mil_01a_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_mil_01a";
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
	class CAF_AG_ME_ROBES_02: O_Soldier_F
	{
		scope = 1;
		author = "CAF MOD TEAM";
		armor = 0.5;
		model = "\caf_ag_equip\tali_clothes_02.p3d";
		uniformClass = "U_CAF_AG_ME_ROBES_02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil02_1_co.paa"};
		class Wounds
		{
			mat[] = {"caf_ag_equip_t\rvmat\Tak_civil02.rvmat","caf_ag_equip_t\rvmat\W1_Tak_civil02.rvmat","caf_ag_equip_t\rvmat\W2_Tak_civil02.rvmat"};
			tex[] = {};
		};
	};
	class CAF_AG_ME_ROBES_02a: CAF_AG_ME_ROBES_02
	{
		uniformClass = "U_CAF_AG_ME_ROBES_02a";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil02_2_co.paa"};
	};
	class CAF_AG_ME_ROBES_02b: CAF_AG_ME_ROBES_02
	{
		uniformClass = "U_CAF_AG_ME_ROBES_02b";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil02_3_co.paa"};
	};
	class CAF_AG_ME_ROBES_02c: CAF_AG_ME_ROBES_02
	{
		uniformClass = "U_CAF_AG_ME_ROBES_02c";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil02_4_co.paa"};
	};
	class CAF_AG_ME_ROBES_02d: CAF_AG_ME_ROBES_02
	{
		uniformClass = "U_CAF_AG_ME_ROBES_02d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil02_5_co.paa"};
	};
	class CAF_AG_ME_ROBES_mil_01: CAF_AG_ME_ROBES_02
	{
		uniformClass = "U_CAF_AG_ME_ROBES_mil_01";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil02cam_1_co.paa"};
	};
	class CAF_AG_ME_ROBES_mil_01a: CAF_AG_ME_ROBES_02
	{
		uniformClass = "U_CAF_AG_ME_ROBES_mil_01a";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil02cam_2_co.paa"};
	};
};
//};
