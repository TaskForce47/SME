/*
 * Author: Lucke
 * Add the Items for the Radio System to the Arsenal
 *
 * Arguments:
 * 0: Argument Name <TYPE>
 *
 * Return Value:
 * Return Name <TYPE>
 *
 * Example:
 * ["example"] call ace_[module]_fnc_[functionName]
 *
 * Public: [Yes/No]
 */

 private ["_playerfaction", "_backpackCargo", "_itemCargo", "_magazineCargo", "_weaponCargo"];
 params [];

if !(T8SME_paramT8SME_param_radio_system isEqualTo "None") then {

   switch (getNumber missionConfigFile >> "cfgRandomMissions" >> "missionconfig" >> "playerfaction") do {
     case 0 : {_playerfaction = "East";};
     case 1 : {_playerfaction = "West";};
     case 2 : {_playerfaction = "Indep";};
     default {_playerfaction = "East";};
   };

   _backpackCargo append (getArray ( missionConfigFile >> "cfgRandomMissions" >> "radio_system" >> T8SME_param_radio_system >> _playerfaction >> "Backpack");
   _itemCargo append (getArray ( missionConfigFile >> "cfgRandomMissions" >> "radio_system" >> T8SME_param_radio_system >> _playerfaction >> "Item");
   _magazineCargo (getArray ( missionConfigFile >> "cfgRandomMissions" >> "radio_system" >> T8SME_param_radio_system >> _playerfaction >> "Magazine");
   _weaponCargo append (getArray ( missionConfigFile >> "cfgRandomMissions" >> "radio_system" >> T8SME_param_radio_system >> _playerfaction >> "Weapon");

   if (( count _backpackCargo	) > 0 ) then { [ missionNamespace, _backpackCargo,		false, true ] call BIS_fnc_addVirtualBackpackCargo; };
   if (( count _itemCargo		) > 0 ) then { [ missionNamespace, _itemCargo,			false, true ] call BIS_fnc_addVirtualItemCargo; };
   if (( count _magazineCargo	) > 0 ) then { [ missionNamespace, _magazineCargo,		false, true ] call BIS_fnc_addVirtualMagazineCargo; };
   if (( count _weaponCargo	) > 0 ) then { [ missionNamespace, _weaponCargo,		false, true ] call BIS_fnc_addVirtualWeaponCargo; };
};
