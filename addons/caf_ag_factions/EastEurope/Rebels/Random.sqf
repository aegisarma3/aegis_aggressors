if (isServer) then {

if ((uniform _this == "U_CAF_AG_EEUR_CLOTHES_01") or (uniform _this == "U_CAF_AG_EEUR_CLOTHES_01a")) then {


_rnd1 = floor random 2;
	
	_this setObjectTextureGlobal [0, ["\caf_ag_equip_t\tex\che_3_1_co.paa",
	"\caf_ag_equip_t\tex\che_3_2_co.paa"] select _rnd1];

};

if ((uniform _this == "U_CAF_AG_EEUR_CLOTHES_02") or (uniform _this == "U_CAF_AG_EEUR_CLOTHES_02a")) then {


_rnd1 = floor random 2;
	
	_this setObjectTextureGlobal [0, ["\caf_ag_equip_t\tex\ig_che_1_1_co.paa",
	"\caf_ag_equip_t\tex\ig_che_1_2_co.paa"] select _rnd1];

};

if ((uniform _this == "U_CAF_AG_EEUR_CLOTHES_03") or (uniform _this == "U_CAF_AG_EEUR_CLOTHES_03a") or (uniform _this == "U_CAF_AG_EEUR_CLOTHES_03b") or (uniform _this == "U_CAF_AG_EEUR_CLOTHES_03c")) then {


_rnd1 = floor random 4;
	
	_this setObjectTextureGlobal [0, ["\caf_ag_equip_t\tex\ig_che_2_1_co.paa",
	"\caf_ag_equip_t\tex\ig_che_2_2_co.paa",
	"\caf_ag_equip_t\tex\ig_che_2_3_co.paa",
	"\caf_ag_equip_t\tex\ig_che_2_4_co.paa"] select _rnd1];

};


removeHeadgear _this;

_hat = [
"H_caf_ag_fur",
"H_caf_ag_fur2",
"H_caf_ag_beanie",
"H_caf_ag_boonie_01",
"H_caf_ag_boonie_02",
"H_Shemag_olive",
"H_Bandanna_camo",
"H_Bandanna_cbr",
"H_Bandanna_sgg",
""
];
_count = count _hat;
_this addHeadgear (_hat select floor random _count);




if (primaryWeapon _this == "caf_ak74") then {



_AA = floor(random 35);

		if (_AA == 1) then { 
		removeBackpack _this;
		_this addBackpack "B_Carryall_oli";

		_this addMagazine "caf_AA_rocket";
		_this addWeapon "caf_strela";

		_this addItemToBackpack "caf_AA_rocket";
		_this addItemToBackpack "caf_AA_rocket"; 
	};
};



if (primaryWeapon _this == "caf_ak47") then {

};

if (primaryWeapon _this == "caf_rpk74") then {


};

if (primaryWeapon _this == "caf_ak74gl") then {

};

if (primaryWeapon _this == "caf_pkm") then {

};

if (primaryWeapon _this == "caf_Enfield") then {

};


if (primaryWeapon _this == "caf_svd") then {

};

};
/*
_weapons = weapons _this;

if ("caf_rpg7" in _weapons) then {

removeBackpack _this ;
_this addBackpack "B_TacticalPack_oli";

_this removeWeapon "caf_rpg7";
_this addMagazine "caf_pg7v";
_this addWeapon "caf_rpg7";

_this addItemToBackpack "CAF_pg7v";
_this addItemToBackpack "CAF_pg7v";
_this addItemToBackpack "caf_og7";
_this addItemToBackpack "caf_og7";


};

*/