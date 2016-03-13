if (isServer) then {


// Adicionando random gear na cabeça
removeHeadgear _this;
_headGear = [
"TRYK_Kio_Balaclava",
"TRYK_H_Booniehat_WOOD",
"TRYK_H_headset2",
"TRYK_r_cap_blk_Glasses",
"H_caf_ag_fur",
"H_caf_ag_fur2",
"H_caf_ag_beanie",
"H_caf_ag_boonie_01",
"H_caf_ag_boonie_02",
"H_Shemag_olive",
""
];
_count = count _headGear;
_this addHeadgear (_headGear select floor random _count);


// Adicionando random gear na face
removeGoggles _this;
_googles = [
"G_Bandanna_aviator",
"G_Balaclava_blk",
"G_Balaclava_oli",
"G_Bandanna_blk",
"G_Bandanna_sport",
"TRYK_Shemagh_shade_G",
"TRYK_Shemagh_G",
"TRYK_Beard_BK",
"TRYK_Beard_BW",
"TRYK_Beard_BK2",
"TRYK_Beard_BW2",
"TRYK_Beard_BK3",
"TRYK_Beard_BW3",
"TRYK_Beard_BK4",
"TRYK_Beard_BW4",
""
];
_count = count _googles;
_this addGoggles (_googles select floor random _count);




// Adicionando uniformes aleatórios
removeUniform _this;
_uniform = [
"TRYK_U_B_C01_Tsirt",
"TRYK_U_B_PCUODs",
"TRYK_U_pad_j_blk",
"TRYK_T_camo_wood_marpat_BG",
"TRYK_T_camo_Wood",
"TRYK_U_B_BLOD_T",
"TRYK_U_B_Wood_PCUs_R",
"TRYK_U_B_BLOD_T",
"TRYK_T_camo_wood_marpat",
"TRYK_T_BLK_PAD",
"TRYK_U_pad_hood_odBK",
"TRYK_U_Bts_PCUs",
"TRYK_U_B_PCUGs_BLK_R",
"TRYK_U_B_PCUGs_OD_R",
"TRYK_U_B_PCUs_R",
"TRYK_U_pad_hood_Blod",
"TRYK_U_pad_hood_Cl",
"TRYK_hoodie_Wood",
"TRYK_T_OD_PAD",
"TRYK_T_T2_PAD",
"TRYK_U_denim_hood_nc",
"TRYK_U_denim_jersey_blk",
"TRYK_U_denim_jersey_blu",
"TRYK_U_pad_j",
"TRYK_T_camo_Wood_BG",
"TRYK_U_B_Denim_T_BK"
];
_count = count _uniform;
_this forceAddUniform (_uniform select floor random _count);


// Adicionando vests aleatórios
removeVest _this;
_vests = [
"V_HarnessO_brn",
"V_HarnessO_gry",
"TRYK_LOC_AK_chestrig_OD",
"TRYK_LOC_AK_chestrig_TAN",
"TRYK_V_Sheriff_BA_T3",
"V_TacVest_blk",
"V_TacVest_brn",
"V_TacVest_camo",
"V_TacVest_khk",
"V_TacVest_oli"
];
_count = count _vests;
_this addVest (_vests select floor random _count);




/*if (primaryWeapon _this == "caf_ak74") then {



_AA = floor(random 35);

		if (_AA == 1) then {
		removeBackpack _this;
		_this addBackpack "B_Carryall_oli";

		_this addMagazine "caf_AA_rocket";
		_this addWeapon "caf_strela";

		_this addItemToBackpack "caf_AA_rocket";
		_this addItemToBackpack "caf_AA_rocket";
	};
};*/



/*if (primaryWeapon _this == "caf_ak47") then {

};*/


};
