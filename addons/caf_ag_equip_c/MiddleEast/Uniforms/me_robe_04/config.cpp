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

//Class caf_ag_equip_c : MiddleEast\Uniforms\me_robe_04\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_equip_me_robe_04
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
	class U_CAF_AG_ME_ROBES_04: Uniform_Base
	{
		scope = 2;
		displayName = "Middle East Robes 4";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_04\inv_robe_04_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_AG_ME_ROBES_04";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_04a: U_CAF_AG_ME_ROBES_04
	{
		displayName = "Middle East Robes 4a";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_04\inv_robe_04a_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_04a";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_04b: U_CAF_AG_ME_ROBES_04
	{
		displayName = "Middle East Robes 4b";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_04\inv_robe_04b_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_04b";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_04c: U_CAF_AG_ME_ROBES_04
	{
		displayName = "Middle East Robes 4c";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_04\inv_robe_04c_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_04c";
			uniformModel = "-";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	class U_CAF_AG_ME_ROBES_04d: U_CAF_AG_ME_ROBES_04
	{
		displayName = "Middle East Robes 4d";
		picture = "\caf_ag_equip_c\MiddleEast\Uniforms\me_robe_04\inv_robe_04d_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "CAF_AG_ME_ROBES_04d";
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
	class CAF_AG_ME_ROBES_04: O_Soldier_F
	{
		scope = 1;
		author = "CAF MOD TEAM";
		armor = 0.5;
		model = "\caf_ag_equip\tali_clothes_04.p3d";
		uniformClass = "U_CAF_AG_ME_ROBES_04";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil06_1_co.paa"};
		class Wounds
		{
			mat[] = {"caf_ag_equip_t\rvmat\Tak_civil06.rvmat","caf_ag_equip_t\rvmat\W1_Tak_civil06.rvmat","caf_ag_equip_t\rvmat\W2_Tak_civil06.rvmat"};
			tex[] = {};
		};
	};
	class CAF_AG_ME_ROBES_04a: CAF_AG_ME_ROBES_04
	{
		uniformClass = "U_CAF_AG_ME_ROBES_04a";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil06_2_co.paa"};
	};
	class CAF_AG_ME_ROBES_04b: CAF_AG_ME_ROBES_04
	{
		uniformClass = "U_CAF_AG_ME_ROBES_04b";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil06_3_co.paa"};
	};
	class CAF_AG_ME_ROBES_04c: CAF_AG_ME_ROBES_04
	{
		uniformClass = "U_CAF_AG_ME_ROBES_04c";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil06_4_co.paa"};
	};
	class CAF_AG_ME_ROBES_04d: CAF_AG_ME_ROBES_04
	{
		uniformClass = "U_CAF_AG_ME_ROBES_04d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_ag_equip_t\tex\tak_civil06_5_co.paa"};
	};
};
//};
