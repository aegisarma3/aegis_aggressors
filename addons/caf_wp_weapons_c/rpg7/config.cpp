////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Thu Mar 10 23:37:35 2016 : Source 'file' date Thu Mar 10 23:37:35 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class caf_wp_weapons_c : rpg7\config.bin{
class CfgPatches
{
	class caf_wp_weapons_rpg
	{
		units[] = {};
		weapons[] = {"caf_rpg7"};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class cfgAmmo
{
	class R_TBG32V_F;
	class R_PG7V: R_TBG32V_F
	{
		hit = 75;
		indirecthit = 20;
		indirecthitrange = 3;
	};
	class R_PG32V_F;
	class R_OG7: R_PG32V_F
	{
		hit = 200;
		indirecthit = 25;
		indirecthitrange = 5;
	};
};
class cfgMagazines
{
	class RPG32_HE_F;
	class RPG32_F;
	class caf_OG7: RPG32_HE_F
	{
		ammo = "R_OG7";
		descriptionshort = "Range: 0 - 920 m <br/>Type: high explosive <br/>Used in: RPG-7";
		displayname = "OG-7(HE)";
		displaynameshort = "OG7";
		initspeed = 115;
		model = "\caf_wp_weapons\OG7V_proxy";
		modelspecial = "\caf_wp_weapons\rpg7o_launcher_loaded";
		picture = "\caf_wp_weapons_c\ui\M_OG7V_ca.paa";
		scope = 2;
	};
	class caf_PG7V: RPG32_F
	{
		scope = 2;
		ammo = "R_PG7V";
		descriptionshort = "Range: 0 - 920 m <br/>Type: HEAT <br/>Used in: RPG-7";
		displayname = "PG-7V";
		displaynameshort = "PG7V";
		initspeed = 115;
		model = "\caf_wp_weapons\PG7_proxy";
		modelspecial = "\caf_wp_weapons\rpg7_launcher_loaded";
		picture = "\caf_wp_weapons_c\ui\m_pg7_ca.paa";
	};
};
class cfgWeapons
{
	class launch_RPG32_F;
	class caf_rpg7: launch_RPG32_F
	{
		scope = 2;
		displayName = "RPG-7";
		model = "\caf_wp_weapons\rpg7_launcher";
		handAnim[] = {"OFP2_ManSkeleton","\caf_wp_weapons_c\Anim\RPG7.rtm"};
		modelOptics = "-";
		magazines[] = {"caf_PG7V","caf_OG7"};
		begin1[] = {"caf_wp_weapons_s\RPG7V_s1",1,1,130};
		begin2[] = {"caf_wp_weapons_s\RPG7V_s2",1,1,130};
		begin3[] = {"caf_wp_weapons_s\RPG7V_s3",1,1,130};
		begin4[] = {"caf_wp_weapons_s\RPG7V_s4",1,1,130};
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		sound[] = {"\caf_wp_weapons_s\rockets\RocketLauncher_Shot04_A",10.0,1,1400};
		drySound[] = {"\caf_wp_weapons_s\rockets\dry",0.0001,1,10};
		reloadMagazineSound[] = {"\caf_wp_weapons_s\rockets\flare_reload",0.00031622776,1,20};
		soundFly[] = {"\caf_wp_weapons_s\rockets\rocket_fly1",100.0,1.5,700};
		picture = "\caf_wp_weapons_c\ui\w_rpg7_ca.paa";
		recoil = "recoil_single_law";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 250;
		minRange = 10;
		midRange = 200;
		maxRange = 300;
	};
};
//};
