if (isServer) then {

if ((uniform _this == "U_CAF_AG_AFR_CLOTHES_02") or (uniform _this == "U_CAF_AG_AFR_CLOTHES_02a") or (uniform _this == "U_CAF_AG_AFR_CLOTHES_02b")) then {


_rnd1 = floor random 13;
	
	_this setObjectTextureGlobal [0, ["\caf_ag_equip_t\tex\c_som_cam_1_co.paa", 
	"\caf_ag_equip_t\tex\c_som_cam_2_co.paa",
	"\caf_ag_equip_t\tex\c_somcloth1_co.paa",
	"\caf_ag_equip_t\tex\c_somcloth2_co.paa",
	"\caf_ag_equip_t\tex\poor_v4_co.paa",
	"\caf_ag_equip_t\tex\poor_v5_co.paa",
	"\caf_ag_equip_t\tex\poor_v6_co.paa",
	"\caf_ag_equip_t\tex\poor_v7_co.paa",
	"A3\characters_f\civil\data\poor_co.paa",
	"A3\characters_f\civil\data\poor_v2_co.paa",
	"A3\characters_f\civil\data\poor_v3_co.paa",
	"A3\characters_f_gamma\civil\data\c_cloth1_black.paa",
	"A3\characters_f_gamma\civil\data\c_cloth1_brown.paa"] select _rnd1];

};

if ((uniform _this == "U_CAF_AG_AFR_CLOTHES_01") or (uniform _this == "U_CAF_AG_AFR_CLOTHES_01a") or (uniform _this == "U_CAF_AG_AFR_CLOTHES_01b") or (uniform _this == "U_CAF_AG_AFR_CLOTHES_01c")or (uniform _this == "U_CAF_AG_AFR_CLOTHES_01d")or (uniform _this == "U_CAF_AG_AFR_CLOTHES_01e")) then {


_rnd1 = floor random 6;
	
	_this setObjectTextureGlobal [0, ["\caf_ag_equip_t\tex\c_somshirt_1_co.paa",
	"\caf_ag_equip_t\tex\c_somshirt_2_co.paa",
	"\caf_ag_equip_t\tex\c_somshirt_3_co.paa",
	"\caf_ag_equip_t\tex\c_somshirt_4_co.paa",
	"\caf_ag_equip_t\tex\c_somshirt_5_co.paa",
	"\caf_ag_equip_t\tex\c_somshirt_6_co.paa"] select _rnd1];

};



removeHeadgear _this;

_hat = [
"H_StrawHat",
"H_StrawHat_dark",
"H_Hat_brown",
"H_Hat_checker",
"H_Hat_grey",
"H_Cap_red",
"H_Cap_blue",
"H_Cap_grn",
"H_Cap_red",
"H_Cap_blk",
"H_Bandanna_surfer",
"H_ag_bandanna_01",
"H_ag_bandanna_02",
"H_ag_bandanna_03",
"H_ag_bandanna_04",
"",
""
];
_count = count _hat;
_this addHeadgear (_hat select floor random _count);

};
