////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Thu Mar 10 23:36:53 2016 : Source 'file' date Thu Mar 10 23:36:53 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class caf_ag_factions : EastEurope\Rebels\Groups\infantry\config.bin{
class CfgPatches
{
	class caf_ag_groups_eeur_r
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgGroups
{
	class EAST
	{
		name = "$STR_EAST";
		class caf_ag_eeur_r
		{
			name = "East Europe - Rebels";
			class Infantry
			{
				name = "Infantry";
				class 10_men_eeur_r
				{
					name = "10 Man Group";
					faction = "caf_ag_eeur_r";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK74";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK74";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_RPK74";
						rank = "SERGEANT";
						position[] = {14,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_PKM";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_RPG";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
				};
				class 8_men_eeur_r
				{
					name = "8 Man Group";
					faction = "caf_ag_eeur_r";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK74";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_PKM";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_RPK74";
						rank = "SERGEANT";
						position[] = {14,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_RPG";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK74";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class 6_men_eeur_r
				{
					name = "6 Man Group";
					faction = "caf_ag_eeur_r";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK74";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_RPK74";
						rank = "SERGEANT";
						position[] = {14,0,0};
					};
				};
				class 4_men_eeur_r
				{
					name = "4 Man Group";
					faction = "caf_ag_eeur_r";
					rarityGroup = 0.5;
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK47";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_AK74";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "CAF_AG_eeur_r_PKM";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
				};
			};
		};
	};
};
//};