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

//Class caf_ag_equip_c : MiddleEast\Uniforms\me_robe_01\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_equip_me_robe_01
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
	class U_CAF_AG_ME_ROBES_01: Uniform_Base
	{
		scope = 2;
		displayName = "Middle East Robes 1";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_01\inv_robes_01_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_AG_ME_ROBES_01";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_01a: U_CAF_AG_ME_ROBES_01
	{
		displayName = "Middle East Robes 1a";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_01\inv_robes_01a_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_01a";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_01b: U_CAF_AG_ME_ROBES_01
	{
		displayName = "Middle East Robes 1b";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_01\inv_robes_01b_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_01b";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_01c: U_CAF_AG_ME_ROBES_01
	{
		displayName = "Middle East Robes 1c";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_01\inv_robes_01c_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_01c";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_01d: U_CAF_AG_ME_ROBES_01
	{
		displayName = "Middle East Robes 1d";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_01\inv_robes_01d_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_01d";
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
	class CAF_AG_ME_ROBES_01: O_Soldier_F
	{
		scope = 1;
		author = "CAF MOD TEAM";
		armor = 0.5;
		model = "\caf_ag_equip\tali_clothes_01.p3d";
		uniformClass = "U_CAF_AG_ME_ROBES_01";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil01_1_co.paa"};
		class Wounds
		{
			mat[] = {"caf_ag_equip_t\rvmat\Tak_civil01.rvmat","caf_ag_equip_t\rvmat\W1_Tak_civil01.rvmat","caf_ag_equip_t\rvmat\W2_Tak_civil01.rvmat"};
			tex[] = {};
		};
	};
	class CAF_AG_ME_ROBES_01a: CAF_AG_ME_ROBES_01
	{
		uniformClass = "U_CAF_AG_ME_ROBES_01a";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil01_2_co.paa"};
	};
	class CAF_AG_ME_ROBES_01b: CAF_AG_ME_ROBES_01
	{
		uniformClass = "U_CAF_AG_ME_ROBES_01b";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil01_3_co.paa"};
	};
	class CAF_AG_ME_ROBES_01c: CAF_AG_ME_ROBES_01
	{
		uniformClass = "U_CAF_AG_ME_ROBES_01c";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil01_4_co.paa"};
	};
	class CAF_AG_ME_ROBES_01d: CAF_AG_ME_ROBES_01
	{
		uniformClass = "U_CAF_AG_ME_ROBES_01d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil01_5_co.paa"};
	};
};
//};
