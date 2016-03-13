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


class DefaultEventhandlers;
class CfgPatches
{
	class caf_ag_faction_bra_r
	{
		units[] = {"CAF_AG_BRA_R_OFFICER","CAF_AG_BRA_R_TEAMLEADER","CAF_AG_BRA_R_SQUADLEADER","CAF_AG_BRA_R_EOD","CAF_AG_BRA_R_SUPPORT","CAF_AG_BRA_R_MEDIC","CAF_AG_BRA_R_AT","CAF_AG_BRA_R_AA","CAF_AG_BRA_R_GRENADIER","CAF_AG_BRA_R_RIFLEMAN","CAF_AG_BRA_R_SHARPSHOOTER","CAF_AG_BRA_R_SNIPER"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	access = 1;
	class caf_ag_bra_r
	{
		displayName = "Bratva - Gang";
		icon = "";
		author = "Toaster";
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
	class CAF_AG_BRA_R_BASE: O_Soldier_F
	{
		scope = 0;
		author = "Toaster";
		side = 0;
		armor = 0.5;
		faction = "caf_ag_bra_r";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguageGRE_F","Head_Euro","G_GUERIL_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\bratva\gang\Random.sqf""";
		};
	};
	class CAF_AG_BRA_R_OFFICER: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Officer";
		uniformClass = "TRYK_U_B_C01_Tsirt";
		backpack = "";
		weapons[] = {"SMA_AAC_MPW_12_Black","Throw","Put"};
		magazines[] = {"SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","ACE_M84","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
		items[] = {};
		linkedItems[] = {"V_I_G_resistanceLeader_F","TRYK_H_woolhat","TRYK_Beard_BW3","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"SMA_AAC_MPW_12_Black","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","ACE_M84","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","TRYK_H_woolhat","TRYK_Beard_BW3","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_TEAMLEADER: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Team Leader";
		uniformClass = "TRYK_U_B_PCUODs";
		backpack = "";
		weapons[] = {"SMA_ACRREMAFGCQBblk","Throw","Put"};
		magazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ","ACE_M84","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ"};
		items[] = {};
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD","","G_Bandanna_shades","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"SMA_ACRREMAFGCQBblk","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ","ACE_M84","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ"};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD","","G_Bandanna_shades","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_SQUADLEADER: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Squad Leader";
		uniformClass = "TRYK_U_pad_j_blk";
		backpack = "";
		weapons[] = {"SMA_M4_GL_SM","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","ACE_M84","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SMA_30Rnd_556x45_M855A1"};
		items[] = {};
		linkedItems[] = {"V_TacVest_blk","","TRYK_headset2_glasses","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"SMA_M4_GL_SM","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","ACE_M84","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SMA_30Rnd_556x45_M855A1"};
		respawnLinkedItems[] = {"V_TacVest_blk","","TRYK_headset2_glasses","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_EOD: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "EOD";
		uniformClass = "TRYK_T_camo_wood_marpat_BG";
		backpack = "B_FieldPack_khk";
		weapons[] = {"SMA_AUG_A3_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","ACE_M84","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSMine_Range_Mag"};
		items[] = {};
		linkedItems[] = {"V_TacVest_blk","","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"SMA_AUG_A3_F","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","ACE_M84","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSMine_Range_Mag"};
		respawnLinkedItems[] = {"V_TacVest_blk","","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_SUPPORT: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Heavy Gunner";
		uniformClass = "TRYK_T_camo_Wood";
		backpack = "TRYK_B_Alicepack";
		weapons[] = {"mmg_01_hex_f","Throw","Put"};
		magazines[] = {"ACE_M84","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag"};
		items[] = {};
		linkedItems[] = {"V_TacVest_camo","","TRYK_NOMIC_TAC_EARMUFF_Gs","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"mmg_01_hex_f","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"ACE_M84","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag"};
		respawnLinkedItems[] = {"V_TacVest_camo","","TRYK_NOMIC_TAC_EARMUFF_Gs","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_MEDIC: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Medic";
		uniformClass = "TRYK_U_B_BLOD_T";
		backpack = "TRYK_B_Medbag_OD";
		weapons[] = {"SMA_CTARBLK_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SmokeShell","SmokeShell","SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade"};
		items[] = {"ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_atropine","ACE_atropine","ACE_atropine","ACE_atropine","ACE_atropine","ACE_atropine","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_personalAidKit","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV"};
		linkedItems[] = {"V_TacVest_oli","","TRYK_Shemagh_G","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"SMA_CTARBLK_F","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SmokeShell","SmokeShell","SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade"};
		respawnLinkedItems[] = {"V_TacVest_oli","","TRYK_Shemagh_G","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_AT: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Rifleman (AT)";
		uniformClass = "TRYK_U_B_Wood_PCUs_R";
		backpack = "TRYK_B_tube_od";
		weapons[] = {"SMA_SAR21_AFG_F","caf_rpg7","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SmokeShell","SmokeShell","SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","caf_PG7V"};
		items[] = {};
		linkedItems[] = {"V_TacVest_oli","","TRYK_Shemagh_G","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"SMA_SAR21_AFG_F","caf_rpg7","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SmokeShell","SmokeShell","SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","caf_PG7V"};
		respawnLinkedItems[] = {"V_TacVest_oli","","TRYK_Shemagh_G","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_AA: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Rifleman (AA)";
		uniformClass = "TRYK_U_B_BLOD_T";
		backpack = "TRYK_B_Carryall_wood";
		weapons[] = {"caf_Strela","SMA_AAC_MPW_9_Black","Throw","Put"};
		magazines[] = {"SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","MiniGrenade","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","MiniGrenade","MiniGrenade","caf_AA_rocket","caf_AA_rocket"};
		items[] = {};
		linkedItems[] = {"V_TacVest_oli","","TRYK_TAC_SET_OD","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","MiniGrenade","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","MiniGrenade","MiniGrenade","caf_AA_rocket","caf_AA_rocket"};
		RespawnItems[] = {};
		respawnMagazines[] = {"SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","MiniGrenade","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","SMA_30Rnd_762x35_Ball","MiniGrenade","MiniGrenade","caf_AA_rocket","caf_AA_rocket"};
		respawnLinkedItems[] = {"V_TacVest_oli","","TRYK_TAC_SET_OD","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_GRENADIER: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Grenadier";
		uniformClass = "TRYK_T_camo_wood_marpat";
		backpack = "";
		weapons[] = {"SMA_HK416GL","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade"};
		items[] = {};
		linkedItems[] = {"V_TacVest_oli","","","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"SMA_HK416GL","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade"};
		respawnLinkedItems[] = {"V_TacVest_oli","","","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_RIFLEMAN: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Rifleman";
		uniformClass = "TRYK_T_BLK_PAD";
		backpack = "";
		weapons[] = {"SMA_M4MOE_SM","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1"};
		items[] = {};
		linkedItems[] = {"V_TacVest_camo","","","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"SMA_M4MOE_SM","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1"};
		respawnLinkedItems[] = {"V_TacVest_camo","","","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_SHARPSHOOTER: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Sharpshooter";
		uniformClass = "TRYK_U_pad_hood_odBK";
		backpack = "";
		weapons[] = {"SMA_HK417_16in_afg","Throw","Put"};
		magazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR"};
		items[] = {};
		linkedItems[] = {"V_TacVest_blk","","","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"SMA_HK417_16in_afg","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR"};
		respawnLinkedItems[] = {"V_TacVest_blk","","","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};
	class CAF_AG_BRA_R_SNIPER: CAF_AG_BRA_R_BASE
	{
		scope = 2;
		displayName = "Sniper";
		uniformClass = "U_O_FullGhillie_sard";
		backpack = "";
		weapons[] = {"srifle_DMR_05_hex_F","Throw","Put"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag"};
		items[] = {};
		linkedItems[] = {"V_TacVest_blk","TRYK_H_ghillie_top_headless3","","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};
		uniformAccessories[] = {};
		respawnWeapons[] = {"srifle_DMR_05_hex_F","Throw","Put"};
		RespawnItems[] = {};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag"};
		respawnLinkedItems[] = {"V_TacVest_blk","TRYK_H_ghillie_top_headless3","","ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged"};

	};

};
//};
