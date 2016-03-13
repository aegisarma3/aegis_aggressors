class CfgPatches
{
	class caf_wp_weapons_c_patch
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_wp_weapons_c"};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class cfgWeapons
{
	class UGL_F;
	class GrenadeLauncher;
	class Rifle_Long_Base_F;
	class EBR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class AK_BASE;

	class caf_svd: AK_BASE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\SVD_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\SVD_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\SVD_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\SVD_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class caf_rpk74: AK_BASE
	{
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\RPK_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\RPK_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\RPK_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\RPK_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\RPK_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\RPK_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\RPK_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\RPK_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class close: manual {};
		class short: close {};
		class medium: close {};
		class far: close {};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\RPK_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\RPK_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\RPK_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\RPK_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class caf_pkm: AK_BASE
	{
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\PKM_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\PKM_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\PKM_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\PKM_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class close: manual
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\PKM_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\PKM_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\PKM_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\PKM_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class short: close {};
		class medium: close {};
		class far: close {};
	};
	class caf_AK74: AK_BASE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class caf_ak74gl: caf_AK74
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class caf_AK47: AK_BASE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\AK47_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\AK47_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\AK47_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\AK47_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\AK47_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\AK47_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\AK47_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\AK47_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_wp_weapons_s\AK47_s1",1,1,130};
				begin2[] = {"caf_wp_weapons_s\AK47_s2",1,1,130};
				begin3[] = {"caf_wp_weapons_s\AK47_s3",1,1,130};
				begin4[] = {"caf_wp_weapons_s\AK47_s4",1,1,130};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};

	class launch_O_Titan_F;
	class caf_Strela: launch_O_Titan_F
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"caf_wp_weapons_s\Stinger_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\Stinger_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\Stinger_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\Stinger_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};

	class launch_RPG32_F;
	class caf_rpg7: launch_RPG32_F
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"caf_wp_weapons_s\RPG7V_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\RPG7V_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\RPG7V_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\RPG7V_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
};