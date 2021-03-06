#pragma once

#include "Engine.h"

namespace Engine
{
	class CBaseAttributableItem;
	class CBaseViewModel;

	class CBaseWeapon : public IClientEntity
	{
	public:
		//[swap_lines]
		int				GetWeaponId();
		int				GetWeaponType();
		int				GetWeaponAmmo();
		int				GetZoomLevel();
		bool			GetWeaponReload();
		float			GetNextPrimaryAttack();

		CWeaponInfo*			GetWeaponInfo();
		CBaseAttributableItem*	GeteAttributableItem();

		const char*		GetName();
		//const char*		GetPrintName(); //don't need as it's never called!
		//[/swap_lines]
	};

	class CBaseAttributableItem : public IClientEntity
	{
	public:
		//[swap_lines]
		short*			GetItemDefinitionIndex();
		int*			GetItemIDHigh();
		int*			GetAccountID();
		int*			GetEntityQuality();
		int*			GetOriginalOwnerXuidLow();
		int*			GetOriginalOwnerXuidHigh();
		int*			GetFallbackPaintKit();
		float*			GetFallbackWear();
		int*			GetFallbackSeed();
		int*			GetFallbackStatTrak();
		CBaseViewModel*	GetViewModel();
		//[/swap_lines]
	};

	//CSWeaponType - 18th March 2020
	enum WEAPON_TYPE {
		WEAPON_TYPE_KNIFE = 0,
		WEAPON_TYPE_PISTOL,
		WEAPON_TYPE_SUBMACHINEGUN,
		WEAPON_TYPE_RIFLE,
		WEAPON_TYPE_SHOTGUN,
		WEAPON_TYPE_SNIPER,
		WEAPON_TYPE_MACHINEGUN,
		WEAPON_TYPE_C4,
		WEAPON_TYPE_PLACEHOLDER,
		WEAPON_TYPE_GRENADE,
		WEAPON_TYPE_UNKNOWN,
	};

	//30th March 2020
	//ItemDefinitionIndex
	enum WEAPON_ID {
		//weapons
		WEAPON_INVALID = -1,
		WEAPON_DEAGLE = 1,
		WEAPON_ELITE,
		WEAPON_FIVESEVEN,
		WEAPON_GLOCK,
		WEAPON_AK47 = 7,
		WEAPON_AUG,
		WEAPON_AWP,
		WEAPON_FAMAS,
		WEAPON_G3SG1,
		WEAPON_GALIL = 13,
		WEAPON_M249,
		WEAPON_M4A4 = 16,
		WEAPON_MAC10,
		WEAPON_P90 = 19,
		WEAPON_ZONE_REPULSOR, //new
		WEAPON_MP5SD = 23,
		WEAPON_UMP45,
		WEAPON_XM1014,
		WEAPON_BIZON,
		WEAPON_MAG7,
		WEAPON_NEGEV,
		WEAPON_SAWEDOFF,
		WEAPON_TEC9,
		WEAPON_ZEUS,
		WEAPON_P2000,
		WEAPON_MP7,
		WEAPON_MP9,
		WEAPON_NOVA,
		WEAPON_P250,
		WEAPON_SHIELD,
		WEAPON_SCAR20,
		WEAPON_SG553,
		WEAPON_SSG08,
		WEAPON_KNIFEGG,
		WEAPON_KNIFE,
		WEAPON_FLASHBANG,
		WEAPON_HEGRENADE,
		WEAPON_SMOKEGRENADE,
		WEAPON_MOLOTOV,
		WEAPON_DECOY,
		WEAPON_INCGRENADE,
		WEAPON_C4,
		WEAPON_HEALTHSHOT = 57,
		WEAPON_KNIFE_T = 59,
		WEAPON_M4A1S,
		WEAPON_USPS,
		WEAPON_CZ75 = 63,
		WEAPON_REVOLVER,
		WEAPON_TAGRENADE = 68,
		WEAPON_FISTS,
		WEAPON_BREACHCHARGE,
		WEAPON_TABLET = 72,
		WEAPON_MELEE = 74,
		WEAPON_AXE,
		WEAPON_HAMMER,
		WEAPON_SPANNER = 78,
		WEAPON_KNIFE_GHOST = 80,
		WEAPON_FIREBOMB,
		WEAPON_DIVERSION,
		WEAPON_FRAG_GRENADE,
		WEAPON_SNOWBALL,
		WEAPON_BUMPMINE,
		WEAPON_BAYONET = 500,
		WEAPON_KNIFE_FLIP = 505,
		WEAPON_KNIFE_GUT,
		WEAPON_KNIFE_KARAMBIT,
		WEAPON_KNIFE_M9_BAYONET,
		WEAPON_KNIFE_TACTICAL,
		WEAPON_KNIFE_FALCHION = 512,
		WEAPON_KNIFE_SURVIVAL_BOWIE = 514,
		WEAPON_KNIFE_BUTTERFLY,
		WEAPON_KNIFE_PUSH,
		WEAPON_KNIFE_URSUS = 519,
		WEAPON_KNIFE_GYPSY_JACKKNIFE,
		WEAPON_KNIFE_STILETTO = 522,
		WEAPON_KNIFE_WIDOWMAKER,
		WEAPON_KNIFE_CSS = 503,
		WEAPON_KNIFE_CORD = 517,
		WEAPON_KNIFE_CANIS = 518, //survival
		WEAPON_KNIFE_OUTDOOR = 521, //nomad
		WEAPON_KNIFE_SKELETON = 525,

		//gloves
		GLOVE_STUDDED_BLOODHOUND = 5027,
		GLOVE_T_SIDE = 5028,
		GLOVE_CT_SIDE = 5029,
		GLOVE_SPORTY = 5030,
		GLOVE_SLICK = 5031,
		GLOVE_LEATHER_WRAP = 5032,
		GLOVE_MOTORCYCLE = 5033,
		GLOVE_SPECIALIST = 5034,
		GLOVE_HYDRA = 5035,
	};
}
