////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Thu Mar 10 23:37:34 2016 : Source 'file' date Thu Mar 10 23:37:34 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class caf_wp_weapons_c : ak47\config.bin{
class CfgPatches
{
	class caf_wp_weapons_ak47
	{
		units[] = {};
		weapons[] = {"caf_AK47"};
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
	class B_762x51_Tracer_Green;
	class CAF_762x39_Ball: B_762x51_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		hit = 9;
	};
};
class cfgMagazines
{
	class 20Rnd_762x51_Mag;
	class CA_Magazine;
	class CAF_30Rnd_762x39_AK: CA_Magazine
	{
		ammo = "CAF_762x39_Ball";
		count = 30;
		displayname = "AK 30rnd Mag";
		picture = "\caf_wp_weapons_c\ui\m_ak74_ca.paa";
		lastroundstracer = 3;
		tracersevery = 4;
	};
};
class cfgWeapons
{
	class UGL_F;
	class GrenadeLauncher;
	class Rifle_Long_Base_F;
	class EBR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class AK_BASE: EBR_base_F
	{
		scope = 0;
		value = 0;
		model = "";
		displayName = "";
		optics = 0;
		reloadMagazineSound[] = {"caf_wp_weapons_s\reload-ak-2ivan",0.07079458,1,20};
		modes[] = {"FullAuto","Single","Burst"};
		magazines[] = {"CAF_30Rnd_762x39_AK"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.398107,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.398107,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.398107,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	class caf_AK47: AK_BASE
	{
		scope = 2;
		model = "\caf_wp_weapons\akm";
		picture = "\caf_wp_weapons_c\ui\akm_x_CA.paa";
		magazines[] = {"CAF_30Rnd_762x39_AK"};
		displayname = "AK-47";
		dexterity = 1.57;
		handAnim[] = {"OFP2_ManSkeleton","\caf_wp_weapons_c\Anim\AK.rtm"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"caf_wp_weapons_s\AK47_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK47_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK47_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK47_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.028;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 200;
			midRangeProbab = 0.08;
			maxRange = 400;
			maxRangeProbab = 0.0015;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"caf_wp_weapons_s\AK47_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK47_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK47_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK47_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundBurst = "false";
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.028;
			minRange = 0;
			minRangeProbab = 0.03;
			midRange = 175;
			midRangeProbab = 0.015;
			maxRange = 350;
			maxRangeProbab = 0.0005;
			showToPlayer = "false";
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"caf_wp_weapons_s\AK47_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK47_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK47_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK47_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.0028;
			minRange = 0;
			minRangeProbab = 0.03;
			midRange = 150;
			midRangeProbab = 0.005;
			maxRange = 300;
			maxRangeProbab = 0.0003;
		};
	};
};
//};
