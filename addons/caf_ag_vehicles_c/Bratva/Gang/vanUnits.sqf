params ["_van"];

_vanUnits = [getPos _van, EAST, (configfile >> "CfgGroups" >> "East" >> "caf_ag_faction_bra" >> "Infantry" >> "10_men_bra_r")] call BIS_fnc_spawnGroup;
	{
		_x assignAsCargo _van;
		_x moveInCargo _van;
	} forEach (units _vanUnits);
