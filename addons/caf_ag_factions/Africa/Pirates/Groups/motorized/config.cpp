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

//Class caf_ag_factions : Africa\Pirates\Groups\motorized\config.bin{
class CfgPatches
{
	class caf_ag_afr_p_mtr
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgGroups
{
	class East
	{
		name = "$STR_East";
		class caf_ag_afr_p
		{
			name = "Africa - Pirates";
			class Motorized_MTP
			{
				name = "Motorized";
				class Technicals_afr_p
				{
					name = "Technicals";
					faction = "caf_ag_afr_p";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "caf_ag_afr_p_Offroad_armed_01";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "caf_ag_afr_p_Offroad_armed_01";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class Technicals2_afr_p
				{
					name = "Motorized Patrol";
					faction = "caf_ag_afr_p";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "CAF_AG_AFR_P_AK47";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "CAF_AG_AFR_P_AK47";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "CAF_AG_AFR_P_AK74";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "CAF_AG_AFR_P_RPG";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "CAF_AG_AFR_P_PKM";
						rank = "CORPORAL";
						position[] = {0,9,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "caf_ag_afr_p_Offroad";
						rank = "CORPORAL";
						position[] = {0,11,0};
					};
				};
			};
		};
	};
};
//};
