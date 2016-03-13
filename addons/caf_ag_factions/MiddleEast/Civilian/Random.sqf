if (isServer) then {

if ((uniform _this == "U_CAF_AG_ME_ROBES_01") or (uniform _this == "U_CAF_AG_ME_ROBES_01a") or (uniform _this == "U_CAF_AG_ME_ROBES_01b") or (uniform _this == "U_CAF_AG_ME_ROBES_01c")or (uniform _this == "U_CAF_AG_ME_ROBES_01d")) then {


_rnd1 = floor random 5;
	
	_this setObjectTextureGlobal [0, ["\caf_ag_equip_t\tex\tak_civil01_1_co.paa", 
	"\caf_ag_equip_t\tex\tak_civil01_2_co.paa",
	"\caf_ag_equip_t\tex\tak_civil01_3_co.paa",
	"\caf_ag_equip_t\tex\tak_civil01_4_co.paa",
	"\caf_ag_equip_t\tex\tak_civil01_5_co.paa"] select _rnd1];

};

if ((uniform _this == "U_CAF_AG_ME_ROBES_02") or (uniform _this == "U_CAF_AG_ME_ROBES_02a") or (uniform _this == "U_CAF_AG_ME_ROBES_02b") or (uniform _this == "U_CAF_AG_ME_ROBES_02c")or (uniform _this == "U_CAF_AG_ME_ROBES_02d")or (uniform _this == "U_CAF_AG_ME_ROBES_mil_01")or (uniform _this == "U_CAF_AG_ME_ROBES_mil_01a")) then {


_rnd1 = floor random 5;
	
	_this setObjectTextureGlobal [0, ["\caf_ag_equip_t\tex\tak_civil02_1_co.paa", 
	"\caf_ag_equip_t\tex\tak_civil02_2_co.paa",
	"\caf_ag_equip_t\tex\tak_civil02_3_co.paa",
	"\caf_ag_equip_t\tex\tak_civil02_4_co.paa",
	"\caf_ag_equip_t\tex\tak_civil02_5_co.paa"] select _rnd1];

};

if ((uniform _this == "U_CAF_AG_ME_ROBES_03") or (uniform _this == "U_CAF_AG_ME_ROBES_03a") or (uniform _this == "U_CAF_AG_ME_ROBES_03b") or (uniform _this == "U_CAF_AG_ME_ROBES_03c")or (uniform _this == "U_CAF_AG_ME_ROBES_03d")) then {


_rnd1 = floor random 5;
	
	_this setObjectTextureGlobal [0, ["\caf_ag_equip_t\tex\tak_civil03_1_co.paa", 
	"\caf_ag_equip_t\tex\tak_civil03_2_co.paa",
	"\caf_ag_equip_t\tex\tak_civil03_3_co.paa",
	"\caf_ag_equip_t\tex\tak_civil03_4_co.paa",
	"\caf_ag_equip_t\tex\tak_civil03_5_co.paa"] select _rnd1];

};

if ((uniform _this == "U_CAF_AG_ME_ROBES_04") or (uniform _this == "U_CAF_AG_ME_ROBES_04a") or (uniform _this == "U_CAF_AG_ME_ROBES_04b") or (uniform _this == "U_CAF_AG_ME_ROBES_04c")or (uniform _this == "U_CAF_AG_ME_ROBES_04d")) then {


_rnd1 = floor random 5;
	
	_this setObjectTextureGlobal [0, ["\caf_ag_equip_t\tex\tak_civil04_1_co.paa", 
	"\caf_ag_equip_t\tex\tak_civil04_2_co.paa",
	"\caf_ag_equip_t\tex\tak_civil04_3_co.paa",
	"\caf_ag_equip_t\tex\tak_civil04_4_co.paa",
	"\caf_ag_equip_t\tex\tak_civil04_5_co.paa"] select _rnd1];

};


removeHeadgear _this;

_hat = [
"H_caf_ag_turban",
"H_caf_ag_PAKTOL",
"H_caf_ag_PAKTOL_02",
"H_caf_ag_PAKTOL_03",
"H_caf_ag_PAKTOL_04"
];
_count = count _hat;
_this addHeadgear (_hat select floor random _count);

};
