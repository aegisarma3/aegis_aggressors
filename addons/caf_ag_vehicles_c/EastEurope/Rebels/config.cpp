////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Thu Mar 10 23:37:13 2016 : Source 'file' date Thu Mar 10 23:37:13 2016
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

//Class caf_ag_vehicles_c : EastEurope\Rebels\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_vehicles_eeur_r
	{
		units[] = {"CAF_AG_eeur_r_van_01","CAF_AG_eeur_r_Offroad","CAF_AG_eeur_r_Offroad_armed_01"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class car;
	class Offroad_01_armed_base_F: car
	{
		class EventHandlers;
	};
	class Offroad_01_base_F: car
	{
		class EventHandlers;
	};
	class B_G_Van_01_transport_F;
	class CAF_AG_eeur_r_van_01: B_G_Van_01_transport_F
	{
		scope = 2;
		side = 0;
		faction = "caf_ag_eeur_r";
		crew = "CAF_AG_eeur_r_AK74";
		typicalCargo[] = {"CAF_AG_eeur_r_AK74","CAF_AG_eeur_r_AK74"};
		author = "CAF DEV TEAM";
		transportMaxWeapons = 20;
		transportMaxMagazines = 300;
		transportmaxbackpacks = 4;
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
		};
		class TransportMagazines{};
	};
	class CAF_AG_eeur_r_Offroad: Offroad_01_base_F
	{
		scope = 2;
		side = 0;
		faction = "caf_ag_eeur_r";
		crew = "CAF_AG_eeur_r_AK74";
		typicalCargo[] = {"CAF_AG_eeur_r_AK74","CAF_AG_eeur_r_AK74"};
		author = "CAF DEV TEAM";
		transportMaxWeapons = 20;
		transportMaxMagazines = 300;
		transportmaxbackpacks = 4;
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\A3\Soft_F_Gamma\Offroad_01\scripts\randomize_IG.sqf""";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
		};
		class TransportMagazines{};
	};
	class CAF_AG_eeur_r_Offroad_armed_01: Offroad_01_armed_base_F
	{
		scope = 2;
		side = 0;
		faction = "caf_ag_eeur_r";
		crew = "CAF_AG_eeur_r_AK74";
		typicalCargo[] = {"CAF_AG_eeur_r_AK74"};
		author = "CAF DEV TEAM";
		transportMaxWeapons = 20;
		transportMaxMagazines = 300;
		transportmaxbackpacks = 4;
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\A3\Soft_F_Gamma\Offroad_01\scripts\randomize_IG.sqf""";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
		};
		class TransportMagazines{};
	};
};
//};
