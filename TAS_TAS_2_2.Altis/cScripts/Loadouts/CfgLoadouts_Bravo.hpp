// MFFPC
class FF_Instructor_F : Cav_B_Charlie_base_F { //General AR : 28kg
        uniform[] = {"LOP_U_ISTS_Fatigue_19"};
        vest[] = {"rhsusf_spcs_ocp_squadleader"};
        backpack[] = {"B_TacticalPack_mcamo"};
        primary[] = {"rhs_weap_m4a1_mstock","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_RMR_3d",""};
        secondary[] = {"","","","",""};
        launcher[] = {"","","","",""};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",9,"SmokeShell",4,"rhs_mag_m67",4,"ACE_Chemlight_HiBlue",8,"ACE_Chemlight_HiYellow",8,"B_IR_Grenade",2,"SmokeShellYellow",4,"SmokeShellBlue",4};
        items[] = {"ACE_quikclot",16,"ACE_tourniquet",4,"ACE_Flashlight_XL50","ACE_MapTools","ACE_microDAGR","ACRE_PRC152","ACRE_PRC152","rhsusf_ANPVS_14","rhsusf_ach_helmet_camo_ocp","rhsusf_oakley_goggles_clr","ACE_EntrenchingTool","ACE_HuntIR_monitor","ACE_SpraypaintBlack","rhs_weap_rsp30_green",3};
        binoculars[] = {"ACE_Vector"};
        compass[] = {"ItemCompass"};
        goggles[] = {""};
        gps[] = {""};
        headgear[] = {"DAR_JMCap_Blk"};
        map[] = {"ItemMap"};
        nvgs[] = {""};
        watch[] = {"ACE_Altimeter"};
        insignia[] = {"Cav_Insignia_Specialized_Airborne"};
    preLoadout = "[(_this select 0), 'bravo', 0, 0] call cScripts_fnc_setPreInitPlayerSettings;";
    postLoadout = "[(_this select 0),true,true] call cScripts_fnc_setPostInitPlayerSettings;";
};

class FF_AutomaticRifleman_F : Cav_B_Charlie_base_F { //General AR : 28kg
        uniform[] = {"LOP_U_ISTS_Fatigue_19"};
        vest[] = {"rhsusf_spcs_ocp_saw"};
        backpack[] = {"B_AssaultPack_mcamo"};
        primary[] = {"rhs_weap_m249_pip_S_vfg2","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_elcan_ard_3d","rhsusf_acc_grip4_bipod"};
        secondary[] = {"","","","",""};
        launcher[] = {"","","","",""};
        magazines[] = {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",6,"rhs_mag_m67",2,"SmokeShell",4};
        items[] = {"ACE_quikclot",16,"ACE_tourniquet",4,"ACE_Flashlight_XL50","ACE_MapTools","ACE_DAGR","rhsusf_ANPVS_14"};
        binoculars[] = {""};
        compass[] = {"ItemCompass"};
        goggles[] = {"rhsusf_oakley_goggles_clr"};
        gps[] = {""};
        headgear[] = {"rhsusf_ach_helmet_camo_ocp"};
        map[] = {"ItemMap"};
        nvgs[] = {""};
        watch[] = {"ACE_Altimeter"};
        insignia[] = {"Cav_Insignia_Specialized_Airborne"};
    preLoadout = "[(_this select 0), 'bravo', 0, 0] call cScripts_fnc_setPreInitPlayerSettings;";
    postLoadout = "[(_this select 0),true,true] call cScripts_fnc_setPostInitPlayerSettings;";
};
class FF_Rifleman_F : Cav_B_Charlie_base_F { //General Rifleman : ??kg
        uniform[] = {"LOP_U_ISTS_Fatigue_19"};
        vest[] = {"rhsusf_spcs_ocp_rifleman"};
        backpack[] = {"B_AssaultPack_mcamo"};
        primary[] = {"rhs_weap_m4a1_mstock","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_compm4",""};
        secondary[] = {"","","","",""};
        launcher[] = {"","","","",""};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG",16,"rhs_mag_m67",9,"SmokeShell",10};
        items[] = {"ACE_quikclot",16,"ACE_tourniquet",4,"ACE_Flashlight_XL50","ACE_MapTools","ACE_DAGR",,"rhsusf_ANPVS_14","ACE_EntrenchingTool"};
        binoculars[] = {"rhsusf_bino_m24_ARD"};
        compass[] = {"ItemCompass"};
        goggles[] = {"rhsusf_oakley_goggles_clr"};
        gps[] = {""};
        headgear[] = {"rhsusf_ach_helmet_camo_ocp"};
        map[] = {"ItemMap"};
        nvgs[] = {""};
        watch[] = {"ACE_Altimeter"};
        insignia[] = {"Cav_Insignia_Specialized_Airborne"};
    preLoadout = "[(_this select 0), 'bravo', 0, 0] call cScripts_fnc_setPreInitPlayerSettings;";
    postLoadout = "[(_this select 0),true,true] call cScripts_fnc_setPostInitPlayerSettings;";
};
class FF_FireTeamLeader_F : Cav_B_Charlie_base_F { //General FTL : 27kg
        uniform[] = {"LOP_U_ISTS_Fatigue_19"};
        vest[] = {"rhsusf_spcs_ocp_teamleader"};
        backpack[] = {"B_TacticalPack_mcamo"};
        primary[] = {"rhs_weap_m4a1_m320","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG3_3d",""};
        secondary[] = {"","","","",""};
        launcher[] = {"","","","",""};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",10,"rhs_mag_M441_HE",16,"rhs_mag_m67",4,"SmokeShell",4,"SmokeShellYellow",2,"SmokeShellBlue",2,"B_IR_Grenade",2,"ACE_HuntIR_M203",2,"ACE_Chemlight_HiBlue",4,"ACE_Chemlight_HiYellow",4,"rhs_mag_m662_red",4,"rhs_mag_m714_White",4};
        items[] = {"ACE_quikclot",16,"ACE_tourniquet",4,"ACE_Flashlight_XL50","ACE_MapTools","ACE_microDAGR","ACRE_PRC152","rhsusf_ANPVS_14","ACE_SpraypaintRed","ACE_EntrenchingTool","ACE_HuntIR_monitor"};
        binoculars[] = {"ACE_Vector"};
        compass[] = {"ItemCompass"};
        goggles[] = {"rhsusf_oakley_goggles_clr"};
        gps[] = {""};
        headgear[] = {"rhsusf_ach_helmet_camo_ocp"};
        map[] = {"ItemMap"};
        nvgs[] = {""};
        watch[] = {"ACE_Altimeter"};
        insignia[] = {"Cav_Insignia_Specialized_Airborne"};
    preLoadout = "[(_this select 0), 'bravo', 0, 0] call cScripts_fnc_setPreInitPlayerSettings;";
    postLoadout = "[(_this select 0),true,true] call cScripts_fnc_setPostInitPlayerSettings;";
};
class FF_Grenadier_F : Cav_B_Charlie_base_F { //General GRN : 25kg
        uniform[] = {"LOP_U_ISTS_Fatigue_19"};
        vest[] = {"rhsusf_spcs_ocp_grenadier"};
        backpack[] = {"B_AssaultPack_mcamo"};
        primary[] = {"rhs_weap_m4a1_m320","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_compm4",""};
        secondary[] = {"","","","",""};
        launcher[] = {"","","","",""};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,"rhs_mag_M441_HE",18,"rhs_mag_m67",4,"SmokeShell",4,"rhs_mag_m662_red",4,"rhs_mag_m714_White",4,"ACE_HuntIR_M203",2};
        items[] = {"ACE_quikclot",16,"ACE_tourniquet",4,"ACE_Flashlight_XL50","ACE_MapTools","ACE_DAGR","rhsusf_ANPVS_14"};
        binoculars[] = {"rhsusf_bino_m24_ARD"};
        compass[] = {"ItemCompass"};
        goggles[] = {"rhsusf_oakley_goggles_clr"};
        gps[] = {""};
        headgear[] = {"rhsusf_ach_helmet_camo_ocp"};
        map[] = {"ItemMap"};
        nvgs[] = {""};
        watch[] = {"ACE_Altimeter"};
        insignia[] = {"Cav_Insignia_Specialized_Airborne"};
    preLoadout = "[(_this select 0), 'bravo', 0, 0] call cScripts_fnc_setPreInitPlayerSettings;";
    postLoadout = "[(_this select 0),true,true] call cScripts_fnc_setPostInitPlayerSettings;";
};