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

//Class caf_ag_factions : Africa\Pirates\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_faction_afr_p
	{
		units[] = {"CAF_AG_AFR_P_AK47","CAF_AG_AFR_P_AK74","CAF_AG_AFR_P_RPK74","CAF_AG_AFR_P_PKM","CAF_AG_AFR_P_SVD","CAF_AG_AFR_P_RPG","CAF_AG_AFR_P_GL","CAF_AG_AFR_P_AA"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	access = 1;
	class caf_ag_afr_p
	{
		displayName = "Africa - Pirates";
		icon = "";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 0;
	};
};
class CfgVehicles
{
	class CAManBase;
	class SoldierGB: CAManBase
	{
		class EventHandlers;
		class Wounds;
	};
	class Man;
	class O_Soldier_F: Man
	{
		class EventHandlers;
	};
	class CAF_AG_AFR_P_BASE: O_Soldier_F
	{
		scope = 0;
		author = "CAF MOD TEAM";
		side = 0;
		armor = 0.5;
		faction = "caf_ag_afr_p";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_AFRICAN","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\africa\pirates\Random.sqf""";
		};
	};
	class CAF_AG_AFR_P_AK47: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Fighter AK47";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01";
		weapons[] = {"caf_ak47","Throw","Put"};
		respawnWeapons[] = {"caf_ak47","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK","CAF_30Rnd_762x39_AK"};
		linkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_AK74: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Fighter AK74";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02";
		weapons[] = {"caf_ak74","Throw","Put"};
		respawnWeapons[] = {"caf_ak74","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_RPK74: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Fighter RPK74";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01a";
		weapons[] = {"caf_rpk74","Throw","Put"};
		respawnWeapons[] = {"caf_rpk74","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK","CAF_75rnd_545x39_RPK"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_PKM: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Fighter PKM";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02a";
		weapons[] = {"caf_pkm","Throw","Put"};
		respawnWeapons[] = {"caf_pkm","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM","CAF_100rnd_762x54_PKM"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_SVD: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Fighter SVD";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01b";
		weapons[] = {"caf_svd","Throw","Put"};
		respawnWeapons[] = {"caf_svd","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_RPG: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Fighter RPG";
		backpack = "B_ME_RPG_BAG";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02b";
		weapons[] = {"caf_ak74","caf_rpg7","Throw","Put"};
		respawnWeapons[] = {"caf_ak74","caf_rpg7","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","caf_og7"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","caf_og7"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_AA: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Fighter AA";
		backpack = "B_ME_RPG_BAG";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02b";
		weapons[] = {"caf_ak74","caf_Strela","Throw","Put"};
		respawnWeapons[] = {"caf_ak74","caf_Strela","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","caf_AA_rocket"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","caf_AA_rocket"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_GL: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Fighter AK74GL";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01c";
		weapons[] = {"caf_ak74gl","Throw","Put"};
		respawnWeapons[] = {"caf_ak74gl","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","CAF_30Rnd_545x39_AK","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		linkedItems[] = {"V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
};
//};