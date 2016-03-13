////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Thu Mar 10 23:37:35 2016 : Source 'file' date Thu Mar 10 23:37:35 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class caf_wp_weapons_c : strela\config.bin{
class CfgPatches
{
	class caf_wp_weapons_strela
	{
		units[] = {};
		weapons[] = {"caf_Strela"};
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
	class M_Titan_AA;
	class M_Strela_AA: M_Titan_AA
	{
		airlock = 1;
		cmimmunity = 0.8;
		cost = 7500;
		fusedistance = 120;
		hit = 66;
		indirecthit = 50;
		indirecthitrange = 8;
		inittime = 0.25;
		irlock = 1;
		maneuvrability = 10;
		maxspeed = 580;
		model = "\caf_wp_weapons\strela_Rocket";
		simulationstep = 0.002;
		thrust = 609;
		thrusttime = 1.5;
		timetolive = 15;
		tracklead = 0;
		trackoversteer = 0.75;
		weaponlocksystem = "16 + 2";
		whistledist = 16;
	};
};
class cfgMagazines
{
	class Titan_AA;
	class caf_AA_rocket: Titan_AA
	{
		ammo = "M_Strela_AA";
		descriptionshort = "Range: 800-4200 m <br/>Type: ground-air <br/>Used in: 9K32";
		displayname = "9K32 Strela";
		initspeed = 40;
		maxleadspeed = 320;
		model = "\caf_wp_weapons\strela_proxy";
		modelspecial = "caf_wp_weapons\strela_launcher_loaded";
		picture = "\caf_wp_weapons_c\ui\m_strela_ca.paa";
		scope = 2;
	};
};
class cfgWeapons
{
	class launch_O_Titan_F;
	class caf_Strela: launch_O_Titan_F
	{
		afmax = 0;
		airateoffire = 5;
		airateoffiredistance = 2350;
		canlock = 2;
		cmimmunity = 0.8;
		cursorsize = 1;
		displayname = "Strela-2 9K32";
		handanim[] = {"OFP2_ManSkeleton","\caf_wp_weapons_c\anim\Strela.rtm"};
		htmax = 420;
		htmin = 1;
		magazines[] = {"caf_AA_rocket"};
		maxrange = 4200;
		maxrangeprobab = 0.1;
		mfact = 1;
		mfmax = 0;
		midrange = 2350;
		midrangeprobab = 0.8;
		minrange = 10;
		minrangeprobab = 0.3;
		model = "caf_wp_weapons\strela_launcher";
		modeloptics = "-";
		picture = "\caf_wp_weapons_c\ui\w_9k32_ca.paa";
		reloadmagazinesound[] = {"\caf_wp_weapons_s\rockets\flare_reload",0.000316228,1,20};
		scope = 2;
		soundfly[] = {"\caf_wp_weapons_s\rockets\rocket_fly1",100,1.5,700};
		tbody = 100;
		value = 15;
		weaponlockdelay = 3;
		weaponlocksystem = 1;
		weaponinfotype = "";
		begin1[] = {"caf_wp_weapons_s\Stinger_s1",1,1,130};
		begin2[] = {"caf_wp_weapons_s\Stinger_s2",1,1,130};
		begin3[] = {"caf_wp_weapons_s\Stinger_s3",1,1,130};
		begin4[] = {"caf_wp_weapons_s\Stinger_s4",1,1,130};
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		class Library
		{
			libtextdesc = "The 9K32 Strela-2 (NATO name SA-7 Grail) is a man-portable, shoulder-fired surface-to-air missile (SAM) with passive infrared homing guidance, similar to the US Army Stinger.<br/>The 9K32 is a tail-chase missile dependent on the operatorâs ability to lock it onto the heat source of low-flying jets and helicopters.";
		};
	};
};
//};
