NULL ==========================================================================

SelectFaction = $WHI

SelectRegion = $Zernograd

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_WHI_Volonteer_Army
  Apply
      CreateUnit
        GMEParam = $Subdivision_Name_WHI_Volonteer_Army
        SetCommit = 1
        SetType = $uni_WHI_Denikin3
        FlavorName = $Subdivision_Name_WHI_Volonteer_Army
        SetName = $Subdivision_Name_WHI_Volonteer_Army
      Apply

      CreateUnit
        GMEParam = 6
        SetType = $uni_WHI_Markov1
        FlavorName = $Subdivision_Name_WHI_1_Inf_Div
        SetName = $Unit_Name_WHI_Markov
      Apply
      SetHealth = 75
      CreateUnit
        SetType = $uni_WHI_Markov_Inf_Rgt
        SetLevel = 3
        SetName = $Subdivision_Name_1_Officer_Rgt
      Apply
      CreateUnit
        SetType = $uni_WHI_Regular_Inf_Rgt
        SetLevel = 3
        SetName = $Subdivision_Name_1_Kuban_Rifle_Rgt
      Apply
      CreateUnit
        SetType = $uni_WHI_Alekseev_Cav_Rgt
        SetLevel = 3
        SetName = $Subdivision_Name_1_Officer_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 1
        SetName = $Subdivision_CustomName_1_Maxim_Gun
      Apply
      SetHealth = 12
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 3
        SetName = $Subdivision_Name_1_Officer_Bty
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 6
        SetType = $uni_WHI_Borovsky1
        FlavorName = $Subdivision_Name_WHI_2_Inf_Div
        SetName = $Unit_Name_WHI_Borovsky
      Apply
      SetHealth = 75
      CreateUnit
        SetType = $uni_WHI_Kornilov_Inf_Rgt
        SetLevel = 3
        SetName = $Subdivision_Name_Kornilov_Shock_Rgt
      Apply
      CreateUnit
        SetType = $uni_WHI_Alekseev_Inf_Rgt
        SetLevel = 3
        SetName = $Subdivision_Name_Partisan_Inf_Rgt
      Apply
      CreateUnit
        SetType = $uni_KUB_Regular_Cav_Rgt
        SetName = $Subdivision_Name_4_Comp_Kuban_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 1
        SetName = $Subdivision_CustomName_2_Maxim_Gun
      Apply
      SetHealth = 12
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 3
        SetName = $Subdivision_Name_2_Officer_Bty
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 7
        SetType = $uni_WHI_Drozdovsky1
        FlavorName = $Subdivision_Name_WHI_3_Inf_Div
        SetName = $Unit_Name_WHI_Drozdovsky
      Apply
      SetHealth = 75
      CreateUnit
        SetType = $uni_WHI_Drozdovsky_Inf_Rgt
        SetLevel = 3
        SetName = $Subdivision_Name_2_Officer_Rifle_Rgt
      Apply
      CreateUnit
        SetType = $uni_WHI_Drozdovsky_Cav_Rgt
        SetLevel = 3
        SetName = $Subdivision_Name_2_Officer_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 1
        SetName = $Subdivision_CustomName_3_Maxim_Gun
      Apply
      SetHealth = 75
      CreateUnit
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 3
        SetName = $Subdivision_Name_3_Independent_Light_Bty
      Apply
      SetHealth = 50
      CreateUnit
        SetType = $uni_TEC_Mountain_76mm
        SetLevel = 3
        SetName = $Subdivision_Name_Cav_Mountain_Bty
      Apply
      SetHealth = 25
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Howitzer_122mm
        SetLevel = 3
        SetName = $Subdivision_Name_Howitzer_Bty
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 6
        SetType = $uni_WHI_Erdeli1
        FlavorName = $Subdivision_Name_WHI_1_Cav_Div
        SetName = $Unit_Name_WHI_Erdeli
      Apply
      SetHealth = 50
      CreateUnit
        SetType = $uni_WHI_Kornilov_Cav_Rgt
        SetLevel = 3
        SetName = $Subdivision_Name_1_Kuban_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_WHI_Caucasian_Cav_Rgt
        SetLevel = 3
        SetName = $Subdivision_Name_1_Circassian_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_KUB_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_1_Caucasian_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_KUB_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_1_Black_Sea_Cav_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Mountain_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_Cav_Mountain_Bty
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 4
        SetType = $uni_WHI_Pokrovsky1
        FlavorName = $Subdivision_Name_WHI_1_Kuban_Cos_Bde
        SetName = $Unit_Name_WHI_Pokrovsky
      Apply
      SetHealth = 50
      CreateUnit
        SetType = $uni_KUB_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_2_Kuban_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_KUB_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_3_Kuban_Cav_Rgt
      Apply
      SetHealth = 25
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 2
      Apply
      SetHealth = 100

      SetHealth = 25
      CreateUnit
        SetType = $uni_TEC_Amc_Austin
        SetLevel = 2
        SetName = $Subdivision_Name_Volonteer
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Amc_Austin
        SetLevel = 2
        SetName = $Subdivision_Name_Loyal
      Apply

      CreateUnit
        SetType = $uni_TEC_Amc_Austin
        SetLevel = 2
        SetName = $Subdivision_Name_Kornilovite
      Apply

      CreateUnit
        SetType = $uni_TEC_Engineers
        SetLevel = 1
        SetName = $Subdivision_CustomName_1_Engineers
      Apply

      SetHealth = 25
      CreateUnit
        SetType = $uni_TEC_Signal
        SetLevel = 1
        SetName = $Subdivision_CustomName_1_Signal
      Apply
      SetHealth = 100

      SetHealth = 13
      CreateUnit
        SetType = $uni_TEC_Howitzer_152mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_1_Howitzer_152mm
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_1_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_2_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_3_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_4_Wagon_Train
      Apply

NULL ============================================================================================================================================================================

SelectFaction = $DON

SelectRegion = $Novocherkassk

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Don_Cossack_Army
  Apply
      CreateUnit
        GMEParam = $Subdivision_Name_DON_Don_Cossack_Army
        SetCommit = 1
        SetType = $uni_DON_Denisov4
        FlavorName = $Subdivision_Name_DON_Don_Cossack_Army
        SetName = $Subdivision_Name_DON_Don_Cossack_Army
      Apply

      CreateUnit
        GMEParam = 2
        SetType = $uni_DON_Guselshikov1
        SetName = $Unit_Name_DON_Guselshikov
      Apply
      SetHealth = 29
      CreateUnit
        SetCommit = 3
        SetType = $uni_DON_Gundorovskaya_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_CustomName_Gundorovskaya_Foot_Rgt
      Apply
      SetHealth = 100

      SetHealth = 1
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_Mityakinskaya_Inf_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_6_Comp_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_Novonikolaevskaya_Inf_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_7_Don_Cos_Rgt
      Apply
      SetHealth = 20
      CreateUnit
        SetType = $uni_TEC_Artillery_76mm
        SetName = $Subdivision_Name_DON_1_Don_Art_Div
      Apply
      SetHealth = 100

      SetHealth = 50
      CreateUnit
        SetType = $uni_TEC_Amc_Austin
        SetName = $Subdivision_Name_Bear
      Apply
      CreateUnit
        SetType = $uni_TEC_Amc_Austin
        SetName = $Subdivision_Name_Lugano_Mityakinets
      Apply

      CreateUnit
        SetType = $uni_TEC_Engineers
        SetName = $Subdivision_Name_DON_1_Don_Sapper_Btn
      Apply

      CreateUnit
        SetType = $uni_RUS_Air_Recon_Sqd
        SetName = $Subdivision_CustomName_1_Air_Recon_Sqd
      Apply
      CreateUnit
        SetType = $uni_RUS_Air_Recon_Sqd
        SetName = $Subdivision_CustomName_2_Air_Recon_Sqd
      Apply
      CreateUnit
        SetType = $uni_RUS_Air_Recon_Sqd
        SetName = $Subdivision_CustomName_3_Air_Recon_Sqd
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_1_Wagon_Train
      Apply

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 1
    FixType = 2
    SetName = $Subdivision_Name_DON_Young_Army
  Apply
      CreateUnit
        GMEParam = 6
        SetType = $uni_DON_Abramov1
        FlavorName = $Subdivision_Name_DON_1_Don_Cos_Div
        SetName = $Unit_Name_DON_Abramov
      Apply
      SetHealth = 50
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_1_Life_Guards_Cos_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_2_Life_Guards_Ataman_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_3_Kalmyk_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_4_Don_Cos_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetName = $Subdivision_Name_DON_1_Don_Cav_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 7
        SetType = $uni_DON_ID_Popov1
        FlavorName = $Subdivision_Name_DON_2_Don_Cos_Div
        SetName = $Unit_Name_DON_ID_Popov
      Apply
      SetHealth = 50
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_5_Don_Cos_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_6_Don_Cos_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_7_Don_Cos_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_8_Don_Cos_Rgt
      Apply
      CreateUnit
        SetType = $uni_TEC_Howitzer_122mm
        SetName = $Subdivision_Name_DON_3_Don_Plastun_Art_Div
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetName = $Subdivision_Name_DON_2_Don_Cav_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 6
        SetType = $uni_DON_Ivanov1
        FlavorName = $Subdivision_Name_DON_3_Don_Cos_Div
        SetName = $Unit_Name_DON_Ivanov
      Apply
      SetHealth = 50
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_9_Don_Cos_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_10_Don_Cos_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_11_Don_Cos_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetName = $Subdivision_Name_DON_12_Don_Cos_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetName = $Subdivision_Name_DON_3_Don_Cav_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 4
        SetType = $uni_DON_NA_Krasnov1
        FlavorName = $Subdivision_Name_DON_1_Don_Plastun_Bde
        SetName = $Unit_Name_DON_NA_Krasnov
      Apply
      SetHealth = 50
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetName = $Subdivision_Name_DON_1_Plastun_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetName = $Subdivision_Name_DON_2_Plastun_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetName = $Subdivision_Name_DON_2_Don_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_2_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_3_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_4_Wagon_Train
      Apply

  CreateGroup
    Posture = $Defensive
    SetKind = $Nav
    Entranch = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Don_Flotilla
  Apply
      CreateUnit
        SetType = $uni_DON_GB
        SUFlavorName = $Subdivision_Name_Donets|$Subdivision_Name_Kubanets|$Subdivision_Name_Free_Cossack|$Subdivision_Name_Tsimla
        SetName = $Subdivision_CustomName_1_GB_Div
      Apply

SelectRegion = $Mikhailovka

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_NW_Region_Troops
  Apply
      CreateUnit
        GMEParam = 4
        SetType = $uni_DON_Alferov1
        FlavorName = $Subdivision_Name_DON_Alferov_Dtch
        SetName = $Unit_Name_DON_Alferov
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_Morgunov_Dtch
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_Krasnokutskaya_Cav_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_36_Bokovo_Karginskaya_Cav_Rgt
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 5
        SetType = $uni_DON_Sergeev1
        FlavorName = $Subdivision_Name_DON_Upper_Don_Dtch
        SetName = $Unit_Name_DON_Sergeev
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_32_Veshenskaya_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_33_Yelansko_Bukanovskaya_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_34_Slashchevsko_Fedoseevskaya_Cav_Rgt
      Apply
      SetHealth = 25
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetName = $Subdivision_Name_DON_3_Don_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_5_Wagon_Train
      Apply

SelectRegion = $Khoper

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Buzuluk_Dtch
  Apply
      CreateUnit
        GMEParam = 6
        SetType = $uni_DON_Sitnikov1
        FlavorName = $Subdivision_Name_DON_Buzuluk_Dtch
        SetName = $Unit_Name_DON_Sitnikov
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Lower_Buzuluk_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_2_Upper_Buzuluk_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_3_Buzuluk_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_2_Khoper_Foot_Rgt
      Apply
      SetHealth = 50
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetName = $Subdivision_Name_DON_4_Don_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_6_Wagon_Train
      Apply

SelectRegion = $Uryupinsk

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Western_Dtch
  Apply
      CreateUnit
        GMEParam = 5
        SetType = $uni_DON_Gavrilov1
        FlavorName = $Subdivision_Name_DON_Western_Dtch
        SetName = $Unit_Name_DON_Gavrilov
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Upper_Don_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_Kazan_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_Meshkovskaya_Cav_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_Migulinskaya_Cav_Rgt
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_7_Wagon_Train
      Apply

SelectRegion = $Morozovsk

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Fitzhelaurov_Dtch
  Apply
      CreateUnit
        SetType = $uni_DON_Fitskhelaurov1
        SetName = $Unit_Name_DON_Fitskhelaurov
      Apply

      CreateUnit
        GMEParam = 7
        SetType = $uni_DON_Tatarkin1
        FlavorName = $Subdivision_Name_DON_Tatarkin_Dtch
        SetName = $Unit_Name_DON_Tatarkin
      Apply
      SetHealth = 14
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_3_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_4_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_6_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_7_Cav_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_8_Cav_Rgt
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 6
        SetType = $uni_DON_Golubintsev1
        FlavorName = $Subdivision_Name_DON_Golubintsev_Dtch
        SetName = $Unit_Name_DON_Golubintsev
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_13_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_14_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_15_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_16_Cav_Rgt
      Apply
      SetHealth = 25
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_5_Don_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 3
        SetType = $uni_DON_Sutulov1
        FlavorName = $Subdivision_Name_DON_Sutulov_Dtch
        SetName = $Unit_Name_DON_Sutulov
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_Kurtlak_Foot_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_3_Comp_Rgt_of_Nasledyshev
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 5
        SetType = $uni_DON_Starikov1
        FlavorName = $Subdivision_Name_DON_Starikov_Dtch
        SetName = $Unit_Name_DON_Starikov
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_3_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_9_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_10_Foot_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_11_Foot_Rgt
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_8_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_9_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_10_Wagon_Train
      Apply

SelectRegion = $Viochenskaya

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Tolkushkin_Dtch
  Apply
      CreateUnit
        GMEParam = 8
        SetType = $uni_DON_Tolkushkin1
        FlavorName = $Subdivision_Name_DON_Tolkushkin_Dtch
        SetName = $Unit_Name_DON_Tolkushkin
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Comp_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_2_Comp_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_3_Lugansk_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_4_Kalitvenskaya_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_5_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_6_Don_Art_Div
      Apply
      SetHealth = 50
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_107mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Don_Heavy_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_11_Wagon_Train
      Apply

SelectRegion = $Serafimovich

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Tolokonnikov_Dtch
  Apply
      CreateUnit
        GMEParam = 5
        SetType = $uni_DON_Tolokonnikov1
        FlavorName = $Subdivision_Name_DON_Tolokonnikov_Dtch
        SetName = $Unit_Name_DON_Tolokonnikov
      Apply
      SetHealth = 14
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Bessergenevskaya_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_2_Zaplavskaya_Melekhovskaya_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_3_Bagaevskaya_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_4_Elizavetinskaya_Rgt
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_12_Wagon_Train
      Apply

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Avramov_Dtch
  Apply
      CreateUnit
        GMEParam = 6
        SetType = $uni_DON_Avramov1
        FlavorName = $Subdivision_Name_DON_Avramov_Dtch
        SetName = $Unit_Name_DON_Avramov
      Apply
      SetHealth = 14
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Khoper_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_2_Khoper_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_3_Khoper_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Khoper_Foot_Rgt
      Apply
      SetHealth = 25
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_7_Don_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_13_Wagon_Train
      Apply

SelectRegion = $Bataisk

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Troops_of_Zadonsk_region
  Apply
      CreateUnit
        SetCommit = 2
        SetType = $uni_DON_Bykadorov2
        SetName = $Unit_Name_DON_Bykadorov
      Apply

      CreateUnit
        GMEParam = 5
        SetType = $uni_WHI_Postovsky1
        FlavorName = $Subdivision_Name_DON_Postovsky_Dtch
        SetName = $Unit_Name_WHI_Postovsky
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Comp_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_Kagalnitskaya_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Zadonsk_Foot_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_Zyungar_Kalmyk_Rgt
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 8
        SetType = $uni_DON_Dukhopelnikov1
        FlavorName = $Subdivision_Name_DON_Dukhopelnikov_Dtch
        SetName = $Unit_Name_DON_Dukhopelnikov
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Salsk_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Salsk_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Zadonsk_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Mechetinskaya_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Comp_Cav_Rgt
      Apply
      SetHealth = 75
      CreateUnit
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_8_Don_Art_Div
      Apply
      SetHealth = 25
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Mountain_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Don_Mountain_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_14_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_15_Wagon_Train
      Apply

SelectRegion = $Tsimlyansk

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Tapilin_Dtch
  Apply
      CreateUnit
        GMEParam = 8
        SetType = $uni_DON_Tapilin1
        FlavorName = $Subdivision_Name_DON_Tapilin_Dtch
        SetName = $Unit_Name_DON_Tapilin
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_9_Filippovskaya_Inf_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_10_Mariinskaya_Inf_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_11_Don_Inf_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_9_Ternovskaya_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_10_Chertkovskaya_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_11_Romanovskaya_Cav_Rgt
      Apply
      SetHealth = 50
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_9_Don_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_16_Wagon_Train
      Apply

SelectRegion = $Nizhniy Chir

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Mamontov_Dtch
  Apply
      CreateUnit
        SetCommit = 2
        SetType = $uni_DON_Mamontov2
        SetName = $Unit_Name_DON_Mamontov
      Apply

      CreateUnit
        GMEParam = 5
        SetType = $uni_DON_Aleksandrin1
        FlavorName = $Subdivision_Name_DON_Aleksandrin_Dtch
        SetName = $Unit_Name_DON_Aleksandrin
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_13_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_14_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_7_Cav_Rgt
      Apply
      SetHealth = 25
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_10_Don_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 6
        SetType = $uni_DON_AP_Popov1
        FlavorName = $Subdivision_Name_DON_Popov_Dtch
        SetName = $Unit_Name_DON_AP_Popov
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_2_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_3_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_4_Cav_Rgt
      Apply
      SetHealth = 50
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_11_Don_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_17_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_18_Wagon_Train
      Apply

SelectRegion = $Kotelnikovo

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Antonov_Dtch
  Apply
      CreateUnit
        GMEParam = 6
        SetType = $uni_DON_Antonov1
        FlavorName = $Subdivision_Name_DON_Antonov_Dtch
        SetName = $Unit_Name_DON_Antonov
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_6_Cos_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_6_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_9_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_10_Cav_Rgt
      Apply
      SetHealth = 25
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_12_Don_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_19_Wagon_Train
      Apply

SelectRegion = $Romashkin

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Donskov_Dtch
  Apply
      CreateUnit
        GMEParam = 4
        SetType = $uni_DON_Donskov1
        FlavorName = $Subdivision_Name_DON_Donskov_Dtch
        SetName = $Unit_Name_DON_Donskov
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_4_Foot_Rgt
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_3_Cav_Rgt
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_20_Wagon_Train
      Apply

SelectRegion = $Kalach

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_DON_Makarov_Dtch
  Apply
      CreateUnit
        GMEParam = 6
        SetType = $uni_DON_Makarov1
        FlavorName = $Subdivision_Name_DON_Makarov_Dtch
        SetName = $Unit_Name_DON_Makarov
      Apply
      SetHealth = 23
      CreateUnit
        SetType = $uni_DON_Regular_Inf_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_5_Comp_Foot_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_1_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_9_Cav_Rgt
      Apply
      CreateUnit
        SetType = $uni_DON_Regular_Cav_Rgt
        SetLevel = 1
        SetName = $Subdivision_Name_DON_10_Cav_Rgt
      Apply
      SetHealth = 25
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_Name_DON_13_Don_Art_Div
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetName = $Subdivision_CustomName_21_Wagon_Train
      Apply

NULL ============================================================================================================================================================================

SelectFaction = $WH5

SelectRegion = $Murmansk

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_GBR_North_Russian_Expeditionary_Force
  Apply
      CreateUnit
        GMEParam = $Subdivision_Name_GBR_North_Russian_Expeditionary_Force
        SetCommit = 1
        SetType = $uni_GBR_Poole3
        FlavorName = $Subdivision_Name_GBR_North_Russian_Expeditionary_Force
        SetName = $Subdivision_Name_GBR_North_Russian_Expeditionary_Force
      Apply
      CreateUnit
        SetType = $uni_GBR_Maynard2
        SetName = $Unit_Name_GBR_Maynard
      Apply

      SetHealth = 33
      CreateUnit
        SetType = $uni_GBR_Regular_Inf_Btn
        SetName = $Subdivision_Name_GBR_Finnish_Legion
      Apply
      SetHealth = 100
      CreateUnit
        SetType = $uni_GBR_Regular_Inf_Btn
        SetName = $Subdivision_Name_GBR_Serbian_Battalion
      Apply

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 1
    FixType = 999
    SetName = $Subdivision_Name_GBR_Murmansk_Garrison
  Apply
      CreateUnit
        SetType = $uni_GBR_Marine_Inf_Btn
        SetName = $Subdivision_Name_GBR_Murmansk_Garrison
      Apply

  CreateGroup
    Posture = $Defensive
    SetKind = $Nav
    Entranch = 0
    FixType = 0
    SetName = $Subdivision_Name_GBR_Allied_Fleet
  Apply
      CreateUnit
        SetType = $uni_GBR_BS
        SetName = $Subdivision_Name_Glory
      Apply
      CreateUnit
        SetType = $uni_GBR_AC
        SetName = $Subdivision_Name_Cochrane
      Apply
      CreateUnit
        SetType = $uni_FRA_AC
        SetName = $Subdivision_Name_Amiral_Aube
      Apply
      CreateUnit
        SetType = $uni_USA_LC
        SetName = $Subdivision_Name_Olympia
      Apply

NULL ============================================================================================================================================================================

SelectFaction = $WH2

SelectRegion = $Samara

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_CZE_Penza_Group
  Apply
      CreateUnit
        SetType = $uni_CW2_Cecek3
        SetName = $Unit_Name_CZE_Cecek
      Apply

      CreateUnit
        GMEParam = 6
        SetType = $uni_CZE_Svec1
        FlavorName = $Subdivision_Name_CZE_1_Jan_Hus_Rifle_Rgt
        SetName = $Unit_Name_CZE_Svec
      Apply
      SetHealth = 80
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_1_1_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_1_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_1_3_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 2
        SetName = $Subdivision_CustomName_1_Maxim_Gun
      Apply
      SetHealth = 70
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_1_Artillery_76mm
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 6
        SetType = $uni_CZE_Vobratilek1
        FlavorName = $Subdivision_Name_CZE_4_Prokop_the_Great_Rifle_Rgt
        SetName = $Unit_Name_CZE_Vobratilek
      Apply
      SetHealth = 80
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_4_1_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_4_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_4_3_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 2
        SetName = $Subdivision_CustomName_4_Maxim_Gun
      Apply
      SetHealth = 70
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_4_Artillery_76mm
      Apply
      SetHealth = 100

      CreateUnit
        GMEParam = 6
        SetType = $uni_CZE_Petrik1
        FlavorName = $Subdivision_Name_CZE_1_Reserve_Rifle_Rgt
        SetName = $Unit_Name_CZE_Petrik
      Apply
      SetHealth = 80
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_1_Reserve_1_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_1_Reserve_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_1_Reserve_3_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 2
        SetName = $Subdivision_CustomName_9_Maxim_Gun
      Apply
      SetHealth = 70
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_9_Artillery_76mm
      Apply
      SetHealth = 100

      SetHealth = 80
      CreateUnit
        SetType = $uni_TEC_Amt_Light
        SetLevel = 1
        SetName = $Subdivision_Name_CZE_Orlik
      Apply

      CreateUnit
        SetType = $uni_TEC_Engineers
        SetLevel = 1
        SetName = $Subdivision_CustomName_1_Engineers_Company
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_1_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_2_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_3_Wagon_Train
      Apply

Уральск:
  Уральская армия:
    В.И. Акутин

    Шиповский фронт (Саратовский):
      М.Ф. Мартынов
      65%
      1-й Уральский Учебный конный полк
      3-й Уральский Учебный конный полк
      Уральский учебный пеший полк
      3-й Уральский льготный конный полк
      4-й Уральский льготный конный полк
      5-й Уральский льготный конный полк
      6-й Уральский льготный конный полк
      9-й Уральский льготный конный полк
      Семеновская дружина
      10%
      7-й Уральский льготный конный полк
      10-й Уральский льготный конный полк
      11-й Уральский льготный конный полк
      33-й Николаевский стрелковый полк

    Сламихинский фронт:
      Н.Н. Бородин
      Сламихинский Учебный конный полк
      2-й Сламихинский льготный полк
      3-й Сламихинский льготный полк

    Илецкий фронт (Соболевский):
      Л.В Загребин
      2-й Учебный конный полк
      8-й Уральские льготный конный полк
      12-й Уральские льготный конный полк
      Соболевский конный полк
      14-й Уральские льготный конный полк
      15-й Уральские льготный конный полк
      16-й Уральские льготный конный полк
      2-я арт. батарея.

Гурьев:
  Гурьевская дружина
  В.С. Толстов
  80%
  Гурьевская пешая дружина

 Оренбургское казачье войско:
  Д.М. Красноярцев
  6-7 полков конных казаков, разбросанных по станицам вокруг оренбурга + 1 дивзиион артиллерии

NULL ============================================================================================================================================================================

SelectFaction = $WH7

SelectRegion = $Omsk

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_CZE_Czechoslovak_Legion
  Apply
      CreateUnit
        GMEParam = $Subdivision_Name_CZE_Czechoslovak_Legion
        SetCommit = 1
        SetType = $uni_CZE_Shokorov3
        FlavorName = $Subdivision_Name_CZE_Czechoslovak_Legion
        SetName = $Subdivision_Name_CZE_Czechoslovak_Legion
      Apply

SelectRegion = $Vladivostok

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_CZE_Vladivostok_Group
  Apply
      CreateUnit
        SetCommit = 2
        SetType = $uni_WH7_Diterikhs2
        SetName = $Unit_Name_WH3_Diterikhs
      Apply

      CreateUnit
        GMEParam = 6
        SetType = $uni_CZE_Janu1
        FlavorName = $Subdivision_Name_CZE_5_Massaryk_Rifle_Rgt
        SetName = $Unit_Name_CZE_Janu
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_5_1_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_5_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_5_3_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 2
        SetName = $Subdivision_CustomName_5_Maxim_Gun
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_5_Artillery_76mm
      Apply

      CreateUnit
        GMEParam = 6
        SetType = $uni_CZE_Prchala1
        FlavorName = $Subdivision_Name_CZE_8_Moravian_Silesian_Rifle_Rgt
        SetName = $Unit_Name_CZE_Prchala
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_8_1_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_8_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_8_3_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 2
        SetName = $Subdivision_CustomName_8_Maxim_Gun
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_8_Artillery_76mm
      Apply

      CreateUnit
        GMEParam = 6
        SetType = $uni_CZE_Badura1
        FlavorName = $Subdivision_Name_CZE_2_Reserve_Rifle_Rgt
        SetName = $Unit_Name_CZE_Badura
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_2_Reserve_1_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_2_Reserve_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_2_Reserve_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 2
        SetName = $Subdivision_CustomName_10_Maxim_Gun
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_10_Artillery_76mm
      Apply

      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_7_3_Rifle_Btn
      Apply

      CreateUnit
        SetType = $uni_TEC_Engineers
        SetLevel = 1
        SetName = $Subdivision_CustomName_2_Engineers_Company
      Apply

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_1_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_2_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_3_Wagon_Train
      Apply

SelectRegion = $Novonikolaievsk

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_CZE_Novonikolaevsk_Group
  Apply
      CreateUnit
        GMEParam = 3
        SetType = $uni_CZE_Gaida1
        FlavorName = $Subdivision_Name_CZE_7_Tatransk_Rifle_Rgt
        SetName = $Unit_Name_CZE_Gaida
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_7_1_Rifle_Btn
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_6_3_Rifle_Btn
      Apply

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_4_Wagon_Train
      Apply

SelectRegion = $Chelyabinsk

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_CZE_Chelyabinsk_Group
  Apply
      CreateUnit
        SetCommit = 2
        SetType = $uni_WH7_Voytsekhovsky2
        SetName = $Unit_Name_WH3_Voytsekhovsky
      Apply

      CreateUnit
        GMEParam = 6
        SetType = $uni_CZE_Syrovy1
        FlavorName = $Subdivision_Name_CZE_2_Jiriho_of_Podebrady_Rifle_Rgt
        SetName = $Unit_Name_CZE_Syrovy
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_2_1_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_2_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_2_3_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 2
        SetName = $Subdivision_CustomName_2_Maxim_Gun
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_2_Artillery_76mm
      Apply

      CreateUnit
        GMEParam = 6
        SetType = $uni_CZE_Nemec1
        FlavorName = $Subdivision_Name_CZE_3_Johann_Zizka_Rifle_Rgt
        SetName = $Unit_Name_CZE_Nemec
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_3_1_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_3_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_3_3_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 2
        SetName = $Subdivision_CustomName_3_Maxim_Gun
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_3_Artillery_76mm
      Apply

      CreateUnit
        GMEParam = 5
        SetType = $uni_CZE_Hanus1
        FlavorName = $Subdivision_Name_CZE_6_Hanacky_Rifle_Rgt
        SetName = $Unit_Name_CZE_Hanus
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_6_1_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_6_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 2
        SetName = $Subdivision_CustomName_6_Maxim_Gun
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_6_Artillery_76mm
      Apply

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_5_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_6_Wagon_Train
      Apply
      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_7_Wagon_Train
      Apply

SelectRegion = $Tyazhinskiy

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_CZE_Mariinsk_Group
  Apply
      CreateUnit
        GMEParam = 4
        SetType = $uni_CZE_Kadlec1
        FlavorName = $Subdivision_Name_CZE_7_Tatransk_Rifle_Rgt
        SetName = $Unit_Name_CZE_Kadlec
      Apply
      SetHealth = 60
      CreateUnit
        SetType = $uni_CZE_Regular_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_7_2_Rifle_Btn
      Apply
      CreateUnit
        SetType = $uni_TEC_Maxim_Gun
        SetLevel = 2
        SetName = $Subdivision_CustomName_7_Maxim_Gun
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_TEC_Artillery_76mm
        SetLevel = 1
        SetName = $Subdivision_CustomName_7_Artillery_76mm
      Apply
      SetHealth = 100

      CreateUnit
        SetType = $uni_TEC_Wagon_Train
        SetLevel = 1
        SetName = $Subdivision_CustomName_8_Wagon_Train
      Apply

SelectRegion = $Angarsk

  CreateGroup
    Posture = $Defensive
    SetKind = $Land
    Entranch = 0
    InCS = 0
    FixType = 0
    SetName = $Subdivision_Name_CZE_Shock_Btn
  Apply
      CreateUnit
        GMEParam = 2
        SetType = $uni_WH7_Ushakov1
        SetName = $Unit_Name_WH3_Ushakov
      Apply
      CreateUnit
        SetCommit = 3
        SetType = $uni_CZE_Shock_Inf_Btn
        SetLevel = 2
        SetName = $Subdivision_Name_CZE_Shock_Btn
      Apply

NULL ============================================================================================================================================================================

SelectRegion = $Moscow

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 4
  InCS = 1
  FixType = 999
  SetName = Sovnarkom
  Apply
  CreateUnit
  SetType = $uni_RED_Lenin3
  FlavorName = V.I. Lenin
  SetName = V.I. Lenin
  Apply
  CreateUnit
  SetType = $uni_RED_Vokhr
  SetName = VOKhR Dcht
  Apply
  CreateUnit
  SetType = $uni_RED_Bela Kun2
  FlavorName = Bela Kun
  SetName = Bela Kun
  Apply

SelectFaction = $RED
SelectRegion = $Kronstadt
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 3
  SetName = Baltic Fleet
  Apply
  CreateUnit
  SetType = $uni_RED_Berins3
  SetName = Y. Berins
  Apply
  CreateUnit
  SetType = $uni_RED_Altfater3
  SetName = V. Altfater
  Apply
  CreateUnit
  SetType = $uni_RED_Galler3
  SetName = L.M. Galler
  Apply
  CreateUnit
  SetType = $uni_RED_BA1
  NumCreate = 1
  SetName = Petropavlosvsk
  Apply
  CreateUnit
  SetType = $uni_RED_BA1
  NumCreate = 1
  SetName = Pervozvanniy
  Apply
  CreateUnit
  SetType = $uni_RED_BA1
  NumCreate = 1
  SetName = Sevastopol
  Apply
  CreateUnit
  SetType = $uni_RED_AC1
  NumCreate = 1
  SetName = Oleg
  Apply
  CreateUnit
  SetType = $uni_RED_DD1
  SetName = Baltflot Destroyer Div.
  Apply
  CreateUnit
  SetType = $uni_RED_TR1
  SetName = Baltflot Transport Div.
  Apply
  SetHealth = 100
  SetCohesion = 100

SelectFaction = $RED
SelectRegion = $Petrograd
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 1
  FixType = 7
  SetName = Petrograd Artillery Reserve Park
  Apply
  CreateUnit
  SetType = $uni_RED_Art0
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art0
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art3
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art3
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art6
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Sie
  SetName = Artillery reserve
  Apply

SelectFaction = $RED
SelectRegion = $Petrograd
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 1
  FixType = 14
  SetName = Petrograd Artillery Reserve Park
  Apply
  CreateUnit
  SetType = $uni_RED_Art0
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art0
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art3
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art3
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art6
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art6
  SetName = Artillery reserve
  Apply

SelectRegion = $Cheboksary

SelectFaction = $RED
SelectRegion = $Cheboksary
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 2
  SetName = Latvian Riflemen
  Apply
  SetHealth = 50
  SetCohesion = 10
  CreateUnit
  GMEParam = 2
  SetType = $uni_RED_Bliumberg1
  SetName = Z.K. Bliumberg
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_RED_Div_Lat
  SetLevel = 1
  SetName = 3rd Latvian Brigade
  Apply
  SetHealth = 100
  SetCohesion = 100

SelectRegion = $Cheboksary

SelectFaction = $RED
SelectRegion = $Cheboksary
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 2
  SetName = Latvian Riflemen
  Apply
  SetHealth = 50
  SetCohesion = 10
  CreateUnit
  GMEParam = 2
  SetType = $uni_RED_Slaven1
  SetName = P.A. Slaven
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_RED_Div_Lat
  SetLevel = 1
  SetName = 2nd Latvian Brigade
  Apply
  SetHealth = 100
  SetCohesion = 100

SelectRegion = $Moscow

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 1
  FixType = 7
  SetName = Moscow Artillery Reserve Park
  Apply
  CreateUnit
  SetType = $uni_RED_Art0
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art0
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art3
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art3
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art6
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Sie
  SetName = Artillery reserve
  Apply

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 1
  FixType = 14
  SetName = Moscow Artillery Reserve Park
  Apply
  CreateUnit
  SetType = $uni_RED_Art0
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art0
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art3
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art3
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art6
  SetName = Artillery reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Art6
  SetName = Artillery reserve
  Apply

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 1
  FixType = 1
  SetName = Revolutionary Military Council
  Apply
  CreateUnit
  GMEParam = L.D. Trotsky
  SetCommit = 1
  SetType = $uni_RED_Trotsky3
  FlavorName = Revolutionary Military Council
  SetName = L.D. Trotsky
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName =   Supply
  Apply

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 1
  SetName = Moscow Reserve
  Apply
  CreateUnit
  SetCommit = 2
  SetType = $uni_RED_Kamenev2
  SetName = S.S. Kamenev
  Apply

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 4
  SetName = Moscow Reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Muraviev2
  SetName = M.A. Muraviev
  Apply

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 12
  SetName = Moscow Reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Sablin1
  SetName = Y.V. Sablin
  Apply

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 0
  SetName = Moscow Reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Zinoviev1
  SetName = G.V. Zinoviev
  Apply
  CreateUnit
  SetType = $uni_RED_Rataysky1
  SetName = A.I.  Rataysky
  Apply
  CreateUnit
  SetType = $uni_RED_Borzinsky1
  SetName = G.M. Borzinsky
  Apply
  CreateUnit
  SetType = $uni_RED_Ovchinnikov1
  SetName = G.I. Ovchinnikov
  Apply
  CreateUnit
  SetType = $uni_RED_Kolchigin1
  SetName = B.K. Kolchigin
  Apply
  CreateUnit
  SetType = $uni_RED_Merro1
  SetName = M.I. Merro
  Apply
  CreateUnit
  SetType = $uni_RED_Matiasevich1
  SetName = M.S. Matiasevich
  Apply
  CreateUnit
  SetType = $uni_RED_Grushetsky1
  SetName = V.F. Grushetsky
  Apply
  CreateUnit
  SetType = $uni_RED_Eydeman1
  SetName = R.P. Eydeman
  Apply
  CreateUnit
  SetType = $uni_RED_Voskanov1
  SetName = G.K. Voskanov
  Apply
  CreateUnit
  SetType = $uni_RED_Germanovich1
  SetName = M.J. Germanovich
  Apply
  CreateUnit
  SetType = $uni_RED_Kalmykov1
  SetName = M.V. Kalmykov
  Apply
  CreateUnit
  SetType = $uni_RED_Sediakin1
  SetName = A.I. Sediakin
  Apply
  CreateUnit
  SetType = $uni_RED_Gribov1
  SetName = S.E. Gribov
  Apply
  CreateUnit
  SetType = $uni_RED_Griaznov1
  SetName = I.K. Griaznov
  Apply
  CreateUnit
  SetType = $uni_RED_Smirnov1
  SetName = A.S. Smirnov
  Apply

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 6
  SetName = Moscow Reserve Force
  Apply
  CreateUnit
  SetType = $uni_RED_Shmidt1
  SetName = D.A. Shmidt
  Apply

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 2
  SetName = Moscow Reserve Force
  Apply
  CreateUnit
  SetType = $uni_RED_Hq
  SetName = Red HQ
  Apply
  CreateUnit
  GMEParam = 2
  SetType = $uni_RED_Aven1
  SetName = P.J. Aven
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_RED_Div_Lat
  SetName = 1st Latvian Brigade
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = Latvian Supply
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Artem'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Bryansk'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Fighter for Freedom'
  Apply

SelectRegion = $Tzaritsyn

SelectFaction = $RED
SelectRegion = $Tzaritsyn
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Dumenko Dtch
  Apply
  CreateUnit
  GMEParam = 2
  SetType = $uni_RED_Dumenko1
  SetName = B.M. Dumenko
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_RED_Cav_Cos
  SetName = 1st Cav Rgt
  Apply

SelectFaction = $RED
SelectRegion = $Moscow
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 6
  SetName = Egorov
  Apply
  CreateUnit
  SetType = $uni_RED_Egorov2
  SetName = A.I. Egorov
  Apply

SelectFaction = $RED
SelectRegion = $Tzaritsyn
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 1
  FixType = 8
  SetName = South Front
  Apply
  CreateUnit
  GMEParam = Sytin
  SetCommit = 1
  SetType = $uni_RED_Sytin2
  FlavorName = South Front
  SetLevel = 1
  SetName = P.P. Sytin
  Apply

SelectFaction = $RED
SelectRegion = $Tzaritsyn
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 8
  SetName = 10th Red Army
  Apply
  CreateUnit
  SetCommit = 2
  SetType = $uni_RED_Voroshilov2
  FlavorName = 10th Red Army
  SetName = K.E. Voroshilov
  Apply
  CreateUnit
  SetType = $uni_RED_Khudiakov1
  SetName = N.A. Khudiakov
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Artek'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Chernomorets'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Brianskiy'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = '2nd Siberian'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = '1st Don'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Bolshevik'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Communist'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Thunder'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Lightning'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt1
  SetName = 'Armored Train'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt1
  SetName = 'Armored Train'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt1
  SetName = 'Armored Train'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt1
  SetName = 'Armored Train'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt1
  SetName = 'Armored Train'
  Apply
  CreateUnit
  SetType = $uni_RED_Amt1
  SetName = 'Armored Train'
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  FlavorName = Comrade Tulak
  SetName = Tzaritsyn Red Gds
  Apply
  CreateUnit
  SetType = $uni_RED_Art2
  SetName = Tzaritsyn Battery
  Apply
  CreateUnit
  SetType = $uni_RED_Hq
  SetName = Red HQ
  Apply

SelectFaction = $RED
SelectRegion = $Balashov
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  SetName = Khoper Column
  Apply
  CreateUnit
  SetCommit = 2
  SetType = $uni_RED_Sievers2
  SetName = R.F. Sievers
  Apply
  CreateUnit
  GMEParam = 15
  SetType = $uni_RED_Mironov1
  SetName = F.K. Mironov
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = Red Guards Supply
  Apply

SelectFaction = $RED
SelectRegion = $Tambov
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 6
  SetName = 5th Rifle Div.
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_RED_Karpov1
  SetName = V.F. Karpov
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_RED_Art4
    SetName = Artillery Bty
  Apply

SelectFaction = $RED
SelectRegion = $Sarapul
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 3
  SetName = 2nd Red Army
  Apply
  CreateUnit
  SetCommit = 2
  SetType = $uni_RED_Makhin2
  SetName = F.E. Makhin
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  SetHealth = 80
  SetCohesion = 100
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 2nd Red Army Supply
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 2nd Red Army Supply
  Apply

SelectRegion = $Astrakhan

SelectFaction = $RED
SelectRegion = $Astrakhan
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 2
  InCS = 0
  SetName = Astrakhan Force
  Apply
  CreateUnit
  SetType = $uni_RED_Pavlovsky1
  SetName = V.I. Pavlovsky
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 1st Gurjev Supply
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 2nd Gurjev  Supply
  Apply

SelectRegion = $Orsk

SelectFaction = $RED
SelectRegion = $Orsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  SetName = South Ural Partisan Army
  Apply
  CreateUnit
  GMEParam = 13
  SetType = $uni_RED_Blucher1
  FlavorName = South Ural Army
  SetName = V.K. Blucher
  Apply
  SetHealth = 50
  SetCohesion = 100
  CreateUnit
  SetType = $uni_RED_Inf_Par
  SetName = South Ural Dtch
  Apply
  CreateUnit
  SetType = $uni_RED_Inf_Par
  SetName = South Ural Dtch
  Apply
  CreateUnit
  SetType = $uni_RED_Inf_Par
  SetName = South Ural Dtch
  Apply
  CreateUnit
  SetType = $uni_RED_Inf_Par
  SetName = South Ural Dtch
  Apply
  CreateUnit
  SetType = $uni_RED_Inf_Par
  SetName = South Ural Dtch
  Apply
  CreateUnit
  SetType = $uni_RED_Inf_Par
  SetName = South Ural Dtch
  Apply
  CreateUnit
  SetType = $uni_RED_Inf_Par
  SetName = South Ural Dtch
  Apply
  CreateUnit
  SetType = $uni_RED_Inf_Par
  SetName = South Ural Dtch
  Apply
  CreateUnit
  SetType = $uni_RED_Cav_Par
  SetName = South Ural Dtch
  Apply
  CreateUnit
  SetType = $uni_RED_Cav_Par
  SetName = South Ural Dtch
  Apply
  CreateUnit
  SetType = $uni_RED_Art1
  SetName = South Ural Bty.
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_RED_Art2
  SetName = South Ural Bty.
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_RED_Kashirin1
  SetName = N.D. Kashirin
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 2nd Ural Army Supply
  Apply

SelectRegion = $Armavir

SelectFaction = $RED
SelectRegion = $Armavir
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 1
  FixType = 1
  SetName = North-Caucasus Front
  Apply
  CreateUnit
  GMEParam = I.L. Sorokin
  SetCommit = 1
  SetType = $uni_RED_Sorokin3
  FlavorName = North-Caucasus Front
  SetName = I.L. Sorokin
  Apply
  CreateUnit
  SetType = $uni_RED_Apanasenko1
  SetName = I.R. Apanasenko
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName =   Supply
  Apply

SelectRegion = $Grozny

SelectFaction = $RED
SelectRegion = $Grozny
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 1
  SetName = Grozny reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Avtonomov1
  SetName = A.I. Avtonomov
  Apply
  CreateUnit
  SetType = $uni_RED_Amt2
  SetName = 'Grozny'
  Apply

SelectRegion = $Zernograd

SelectFaction = $RED
SelectRegion = $Zernograd
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 1
  SetName = Red Army of North Caucasus
  Apply
  CreateUnit
  SetCommit = 2
  SetType = $uni_RED_Snesarev2
  SetName = A.E. Snesarev
  Apply
  CreateUnit
  SetType = $uni_RED_Fedko1
  SetName = I.F. Fedko
  Apply
  CreateUnit
  SetType = $uni_RED_Sai
  SetName = Sailors Dcht
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 1st Caucasus Supply
  Apply

SelectFaction = $RED
SelectRegion = $Akhtarsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 1
  SetName = 2nd North Caucasus Group
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  SetHealth = 100
  SetCohesion = 100

SelectRegion = $Mouth of the Don

SelectFaction = $RED
SelectRegion = $Mouth of the Don
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 0
  SetName = Azov Flottilla
  Apply
  CreateUnit
  SetType = $uni_RED_Nemits2
  SetName = A. Nemits
  Apply
  CreateUnit
  SetType = $uni_RED_FDD
  SetName = Don Fluvial Destroyers
  Apply
  CreateUnit
  SetType = $uni_RED_GB1
  SetName = 1st Gunboat Squadron
  Apply
  CreateUnit
  SetType = $uni_RED_GB1
  SetName = 2nd Gunboat Squadron
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = 1st Transport Squadron
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = 2nd Transport Squadron
  Apply

SelectRegion = $Taman

SelectFaction = $RED
SelectRegion = $Taman
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 3
  SetName = Taman Front
  Apply
  CreateUnit
  SetType = $uni_RED_Kovtiukh1
  SetName = E.I. Kovtiukh
  Apply
  CreateUnit
  SetType = $uni_RED_Matveev1
  SetName = I.I. Matveev
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Sai
  SetName = Taman Sailors
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = Taman Supply
  Apply

SelectFaction = $RED
SelectRegion = $Tikhoretskaya
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 1
  SetName = Kalnin Column
  Apply
  CreateUnit
  SetType = $uni_RED_Kalnin1
  SetName = K.I. Kalnin
  Apply
  CreateUnit
  SetType = $uni_RED_Sai
  FlavorName = Comrade Fedko
  SetName = 1st Black Sea Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = Kalnin Supply
  Apply

SelectRegion = $Ekaterinodar

SelectFaction = $RED
SelectRegion = $Ekaterinodar
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 2
  SetName = Ekaterinodar Brigade
  Apply
  CreateUnit
    SetType = $uni_RED_Inf_Cos
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf_Cos
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf_Cos
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf_Cos
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Cav_Cos
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art3
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = Red Guards Supply
  Apply

SelectRegion = $Armavir

SelectFaction = $RED
SelectRegion = $Armavir
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 3
  SetName = Armavir Brigade
  Apply
  CreateUnit
  SetType = $uni_RED_Zhloba1
  SetName = D.P. Zhloba
  Apply
  CreateUnit
    SetType = $uni_RED_Inf_Cos
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf_Cos
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf_Cos
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf_Cos
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Cav_Cos
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art3
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = Red Guards Supply
  Apply

SelectFaction = $RED
SelectRegion = $Armavir
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 999
  SetName = Armavir Garrison
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply

SelectRegion = $Stavropol

SelectFaction = $RED
SelectRegion = $Vladikavkaz
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 1
  SetName = Vladikavkaz Group
  Apply
  CreateUnit
  SetType = $uni_RED_Gikalo2
  SetName = N.F. Gikalo
  Apply
  CreateUnit
  SetType = $uni_RED_Levandovsky1
  SetName = M.K. Levandovsky
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  FlavorName = N. Gikalo
  SetName = 1st Vladikavkaz Red Gds
  Apply

SelectFaction = $RED
SelectRegion = $Arkhangelsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Arkhangelsk Group
  Apply
  CreateUnit
  SetType = $uni_RED_Solodukhin1
  SetName = P.A. Solodukhin
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply

SelectFaction = $RED
SelectRegion = $Arkhangelsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 0
  SetName = Dvina Flottilla
  Apply
  CreateUnit
  SetType = $uni_RED_GB1
  SetName = Dvina Gunboat Squadron
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = Dvina Transport Squadron
  Apply

SelectRegion = $Nizhniy Novgorod

SelectFaction = $RED
SelectRegion = $Nizhniy Novgorod
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 4
  SetName = Volga Flottilla
  Apply
  CreateUnit
  SetType = $uni_RED_Raskolnikov1
  FlavorName = Red Volga Fleet
  SetName = F.D. Raskolnikov
  Apply
  CreateUnit
  SetType = $uni_RED_Markin1
  FlavorName = Red Volga Flottilla
  SetName = Markin
  Apply
  CreateUnit
  SetType = $uni_RED_FDD
  SetName = Volga Destroyer Squadron
  Apply
  CreateUnit
  SetType = $uni_RED_TB1
  SetName = Baltic Torpedo Boats Squadron
  Apply
  CreateUnit
  SetType = $uni_RED_GB1
  SetName = 1st Volga Gunboat Squadron
  Apply
  CreateUnit
  SetType = $uni_RED_GB1
  SetName = 2nd Volga Gunboat Squadron
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = 1st Volga Transport Squadron
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = 2nd Volga Transport Squadron
  Apply

SelectRegion = $Kazan

SelectFaction = $RED
SelectRegion = $Kazan
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 1
  FixType = 1
  SetName = East Front
  Apply
  CreateUnit
  GMEParam = I.I. Vatzetis
  SetCommit = 1
  SetType = $uni_RED_Vatzetis3
  FlavorName = East Front
  SetLevel = 1
  SetName = I.I. Vatzetis
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName =   Supply
  Apply

SelectFaction = $RED
SelectRegion = $Tambov
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = 16th Rifle Div.
  Apply
  CreateUnit
  SetType = $uni_RED_Medvedovsky1
  SetName = S.P. Medvedovsky
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_RED_Kikvidze1
  FlavorName = 16th Rifle Div.
  SetName = V.I. Kikvidze
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_RED_Art4
    SetName = Artillery Bty
  Apply

SelectFaction = $RED
SelectRegion = $Saransk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 2
  SetName = 1st Red Army
  Apply
  SetHealth = 50
  SetCohesion = 10
  CreateUnit
  SetCommit = 2
  SetType = $uni_RED_Tukhachevsky2
  SetName = M.N. Tukhachevsky
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_RED_Gailit1
  FlavorName = Penza Division
  SetName = J.P. Gailit
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_RED_Art4
    SetName = Artillery Bty
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_RED_Gai1
  FlavorName = 1st 'Iron Division'
  SetName = G.D. Gai
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_RED_Art4
    SetName = Artillery Bty
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_RED_Latsys1
  FlavorName = 'Inza Division'
  SetName = J.J. Latsys
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetLevel = 1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetLevel = 1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetLevel = 1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetLevel = 1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_RegCav1
    SetLevel = 1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetLevel = 1
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_RED_Art4
    SetLevel = 1
    SetName = Artillery Bty
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 1st Red Army Supply
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 1st Division Supply
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 1st Division Supply
  Apply

SelectRegion = $Achkhabad

SelectFaction = $RED
SelectRegion = $Achkhabad
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Trans-Caspian Front
  Apply
  SetHealth = 80
  SetCohesion = 80
  CreateUnit
  GMEParam = 8
  SetType = $uni_RED_Ivanov1
  SetName = B.N. Ivanov
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_RED_Art4
    SetName = Artillery Bty
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 3rd Red Army Supply
  Apply

SelectFaction = $RED
SelectRegion = $Saratov
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 2
  SetName = 4th Red Army
  Apply
  SetHealth = 50
  SetCohesion = 50
  CreateUnit
  SetCommit = 2
  SetType = $uni_RED_Rzhevsky2
  SetName = A.A. Rzhevsky
  Apply
  CreateUnit
  SetType = $uni_RED_Zakharov1
  SetName = S.P. Zakharov
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art4
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art4
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art4
    SetName = Artillery Bty
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 3rd Red Army Supply
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 3rd Red Army Supply
  Apply

SelectFaction = $RED
SelectRegion = $Perm
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 2
  SetName = 10th Rifle Div.
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_RED_Remezov1
  SetName = A.K. Remezov
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply

SelectFaction = $RED
SelectRegion = $Ekaterinburg
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 2
  SetName = 3rd Red Army
  Apply
  SetHealth = 80
  SetCohesion = 50
  CreateUnit
  SetCommit = 2
  SetType = $uni_RED_Berzin2
  SetName = R.I. Berzin
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_RED_Ugriumov1
  SetName = L.J. Ugriumov
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName = 3rd Red Army Supply
  Apply

SelectRegion = $Chita

SelectFaction = $RED
SelectRegion = $Chita
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Chita Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Chita Red Gds
  Apply

SelectRegion = $Irkutsk

SelectFaction = $RED
SelectRegion = $Irkutsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Irkutsk Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Taube2
  SetName = A.A. Taube
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply

SelectRegion = $Krasnoyarsk

SelectFaction = $RED
SelectRegion = $Krasnoyarsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Krasnoyarsk Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Krasnoyarsk Red Gds
  Apply

SelectRegion = $Verkhneudinsk

SelectFaction = $RED
SelectRegion = $Verkhneudinsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Verkhneudinsk Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Verkhneudinsk Red Gds
  Apply

SelectRegion = $Blagoveshchensk

SelectFaction = $RED
SelectRegion = $Blagoveshchensk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Blagoveshchensk Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Blagoveshchensk Red Gds
  Apply

SelectRegion = $Samarkand

SelectFaction = $RED
SelectRegion = $Samarkand
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Samarkand Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Samarkand Red Gds
  Apply

SelectFaction = $RED
SelectRegion = $Tashkent
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 0
  SetName = Tashkent Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Belov1
  SetName = I.P. Belov
  Apply

SelectFaction = $RED
SelectRegion = $Tashkent
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Tashkent Red Guards
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply

SelectRegion = $Ivanovo

SelectFaction = $RED
SelectRegion = $Ivanovo
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Ivanovo Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Ivanovo Red Gds
  Apply

SelectRegion = $Lipetsk

SelectFaction = $RED
SelectRegion = $Lipetsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Lipetsk Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Lipetsk Red Gds
  Apply

SelectRegion = $Tambov

SelectFaction = $RED
SelectRegion = $Tambov
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Tambov Red Guards
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply


SelectRegion = $Simbirsk

SelectFaction = $RED
SelectRegion = $Simbirsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Simbirsk Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Simbirsk Red Gds
  Apply

SelectRegion = $Saransk

SelectFaction = $RED
SelectRegion = $Saransk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Saransk Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Saransk Red Gds
  Apply

SelectRegion = $Arzamas

SelectFaction = $RED
SelectRegion = $Arzamas
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Arzamas Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Arzamas Red Gds
  Apply

SelectRegion = $Balashov

SelectFaction = $RED
SelectRegion = $Balashov
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Balashov Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Balashov Red Gds
  Apply

SelectRegion = $Rzhev

SelectFaction = $RED
SelectRegion = $Rzhev
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Rzhev Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Rzhev Red Gds
  Apply

SelectRegion = $Tsarskoye Selo

SelectFaction = $RED
SelectRegion = $Tsarskoye Selo
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Tsarskoye Selo Red Gds
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Tsarskoye Selo Red Gds
  Apply

SelectRegion = $Vologda

SelectFaction = $RED
SelectRegion = $Vologda
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 1
  SetName = Vologda Red Guards
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply

SelectRegion = $Smolensk

SelectFaction = $RED
SelectRegion = $Smolensk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Smolensk Red Guards
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = 1st Smolensk Red Gds
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = 2nd Smolensk Red Gds
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = 3rd Smolensk Red Gds
  Apply

SelectRegion = $Velikiye Luki

SelectFaction = $RED
SelectRegion = $Velikiye Luki
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 999
  SetName = Velikiye Luki Red Gds
  Apply
  CreateUnit
  SetType = $uni_RED_Mil1
  SetName = Velikiye Luki Red Gds
  Apply

SelectRegion = $Kazan

SelectFaction = $RED
SelectRegion = $Kazan
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 0
  SetName = Kazan Transports
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = Kazan Transport Sqd
  Apply

SelectRegion = $Nizhniy Novgorod

SelectFaction = $RED
SelectRegion = $Nizhniy Novgorod
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 0
  SetName = Nizhniy Novgorod Transports
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = Nizhniy Novgorod Transport Sqd
  Apply

SelectRegion = $Tzaritsyn

SelectFaction = $RED
SelectRegion = $Tzaritsyn
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 0
  SetName = Tzaritsyn Transports
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = Tzaritsyn Transport Sqd
  Apply

SelectRegion = $Astrakhan

SelectFaction = $RED
SelectRegion = $Astrakhan
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 0
  SetName = Astrakhan Transports
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = Astrakhan Transport Sqd
  Apply

SelectRegion = $Voronezh

SelectFaction = $RED
SelectRegion = $Voronezh
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 0
  SetName = Voronezh Transports
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = Voronezh Transport Sqd
  Apply

SelectRegion = $Perm

SelectFaction = $RED
SelectRegion = $Perm
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 0
  SetName = Perm Transports
  Apply
  CreateUnit
  SetType = $uni_RED_RT1
  SetName = Perm Transport Sqd
  Apply

SelectRegion = $Saratov

SelectFaction = $RED
SelectRegion = $Saratov
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 0
  SetName = Saratov Ferry
  Apply
  CreateUnit
  SetType = $uni_RED_RT2
  SetName = Saratov Ferry
  Apply

SelectRegion = $Petrozavodsk

SelectFaction = $RED
SelectRegion = $Petrozavodsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 0
  SetName = Petrozavodsk Ferry
  Apply
  CreateUnit
  SetType = $uni_RED_RT2
  SetName = Petrozavodsk Ferry
  Apply
  NULL = NULL

SelectRegion = $Petrograd

SelectFaction = $RED
SelectRegion = $Petrograd
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 1
  SetName = North Front
  Apply
  CreateUnit
  GMEParam = D.N. Nadiozhny
  SetCommit = 1
  SetType = $uni_RED_Nadiozhny3
  FlavorName = North Front
  SetName = D.N. Nadiozhny
  Apply
  CreateUnit
  SetType = $uni_RED_Sup1
  SetName =   Supply
  Apply

SelectFaction = $RED
SelectRegion = $Petrograd
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 4
  InCS = 1
  FixType = 999
  SetName = Petrograd Garrison
  Apply
  CreateUnit
  SetType = $uni_RED_Vokhr
  SetName = VOKhR Dcht
  Apply
  CreateUnit
  SetType = $uni_RED_FtG
  SetName = Peter Fort
  Apply
  CreateUnit
  SetType = $uni_RED_Coa
  SetName = Petrograd Costal Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Coa
  SetName = Petrograd Costal Bty
  Apply

SelectFaction = $RED
SelectRegion = $Petrograd
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 4
  SetName = Petrograd Reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Gittis2
  SetName = V.M. Gittis
  Apply

SelectFaction = $RED
SelectRegion = $Petrograd
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 9
  SetName = Petrograd Reserve
  Apply
  CreateUnit
  SetType = $uni_RED_Svechnikov2
  SetName = M.S. Svechnikov
  Apply

SelectFaction = $RED
SelectRegion = $Arkhangelsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 1
  SetName = Arkhangelsk Forces
  Apply
  CreateUnit
  SetType = $uni_RED_Samoylo1
  SetName = A.A. Samoylo
  Apply

SelectFaction = $RED
SelectRegion = $Petrograd
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 1
  InCS = 0
  FixType = 3
  SetName = Petrograd Reserve
  Apply
  SetHealth = 10
  SetCohesion = 100
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Con1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Hq
  SetName = Red HQ
  Apply

SelectRegion = $Tula

SelectFaction = $RED
SelectRegion = $Tula
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 2
  InCS = 0
  FixType = 999
  SetName = Tula Garrison
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_RED_Bty
  SetName = Tula Defense
  Apply

SelectFaction = $RED
SelectRegion = $Kursk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 2
  InCS = 0
  FixType = 0
  SetName = 1st Kursk Infantry Division
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_RED_Glagolev1
  SetName = V.P. Glagolev
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_RED_Art4
    SetName = Artillery Bty
  Apply

SelectRegion = $Voronezh

SelectFaction = $RED
SelectRegion = $Voronezh
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 2
  InCS = 0
  FixType = 999
  SetName = Voronezh Garrison
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_Mil1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_ConCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_RED_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_RED_Art1
    SetName = Artillery Bty
  Apply

SelectFaction = $WH7
SelectRegion = $Atlantic Ocean
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 999
  SetName = Allied Western Shipping
  Apply
  CreateUnit
  SetType = $uni_GBR_Mch
  SetName = Atlantic Shipping
  Apply
  NULL = NULL
  NULL = NULL

SelectFaction = $WH7
SelectRegion = $Novonikolaievsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Barnaul Officers Rgt
  Apply
  CreateUnit
  SetType = $uni_WH3_Inf1
  SetLevel = 2
  SetName = Barnaul Officers Rgt
  Apply

SelectRegion = $Tomsk

SelectFaction = $WH7
SelectRegion = $Tomsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Middle Siberia Corps
  Apply
  CreateUnit
  SetType = $uni_WH3_Pepeliaev2
  FlavorName = Middle Siberia Corps
  SetName = A.N. Pepeliaev
  Apply
  SetHealth = 80
  SetCohesion = 10
  CreateUnit
  SetType = $uni_WH3_Vishnevsky1
  SetName = E.K. Vishnevsky
  Apply
  CreateUnit
  SetType = $uni_WH3_Eng
  SetName = Engineers Battalion
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_WH3_Art3
    SetName = Artillery Bty
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_WH3_Zinevich1
  FlavorName = 1st Siberian Div.
  SetName = B.M. Zinevich
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_WH3_Art3
    SetName = Artillery Bty
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_WH3_Grivin1
  FlavorName = 3rd Siberian Div.
  SetName = P.P. Grivin
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_WH3_Art3
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_SIB_Cav
  SetName = Siberian Cos. Dcht
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = 1st Siberia Supply
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = 2nd Siberia Supply
  Apply

SelectRegion = $Omsk

SelectFaction = $WH7
SelectRegion = $Omsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 2
  SetName = Siberian Army
  Apply
  CreateUnit
  GMEParam = A.N. Grichin-Almazov
  SetCommit = 1
  SetType = $uni_WH3_Grichin-Almazov3
  FlavorName = Siberian Army
  SetName = A.N. Grichin-Almazov
  Apply
  CreateUnit
  SetType = $uni_WH3_Hq
  SetName = White HQ
  Apply
  CreateUnit
  SetType = $uni_WH3_Baranovsky1
  SetName = L.S. Baranovsky
  Apply
  CreateUnit
  SetType = $uni_ORE_Losev1
  SetName = P.M. Losev
  Apply
  CreateUnit
  SetType = $uni_SIB_Ivanov-Rinov2
  FlavorName = Steppe Corps
  SetName = P.P. Ivanov-Rinov
  Apply
  CreateUnit
  SetType = $uni_SIB_A.Belov1
  SetName = A.I. Belov
  Apply
  SetHealth = 90
  SetCohesion = 10
  CreateUnit
  SetType = $uni_WH3_Brzhezovsky1
  SetName = V.V. Brzhezovsky
  Apply
  CreateUnit
  SetType = $uni_SIB_Volkov1
  SetName = V.I. Volkov
  Apply
  CreateUnit
  GMEParam = 8
  SetType = $uni_WH3_Verzhbitsky1
  FlavorName = 1st Steppe Div.
  SetName = G.A. Verzhbitsky
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_WH3_Art3
    SetName = Artillery Bty
  Apply
  SetHealth = 75
  SetCohesion = 10
  CreateUnit
  SetType = $uni_WH3_Inf_Par
  SetName = Smolin Dcht
  Apply
  CreateUnit
  SetType = $uni_WH3_Inf_Par
  SetName = 1st Partisans Dcht
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_SIB_Cav
  FlavorName = Timofeev
  SetName = 2nd Siberian Cos. Rgt
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_WH3_Art2
  SetName = Siberian Artillery
  Apply
  CreateUnit
  SetType = $uni_WH3_Amt2
  SetName = 'Vityaz'
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = 1st Steppe Corps Supply
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = 2nd Steppe Corps Supply
  Apply

SelectFaction = $WH7
SelectRegion = $Omsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Russian Air Force
  Apply
  CreateUnit
  SetType = $uni_WH3_Air1
  SetName = Russian Air Force
  Apply

SelectRegion = $Kurgan

SelectFaction = $WH7
SelectRegion = $Kurgan
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = 3rd Ural Fusiliers Corps
  Apply
  CreateUnit
  SetType = $uni_WH3_Khanzhin2
  FlavorName = 3rd Ural Corps
  SetName = M.V. Khanzhin
  Apply
  CreateUnit
  SetType = $uni_WH3_Velk1
  SetName = N.K. Velk
  Apply
  SetHealth = 80
  SetCohesion = 10
  CreateUnit
  GMEParam = 8
  SetType = $uni_WH3_Neiland1
  FlavorName = 6th Ural Division
  SetName = V.M. Neiland
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Inf1
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_RegCav1
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_WH3_Art3
    SetName = Artillery Bty
  Apply
  SetHealth = 80
  SetCohesion = 10
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Cav
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Art4
    SetName = Artillery Bty
  Apply
  SetHealth = 40
  SetCohesion = 10
  CreateUnit
  SetType = $uni_WH3_Inf_Par
  FlavorName = M. Timonov
  SetName = Timonov  Detachment
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = 1st Ural Corps Supply
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = 2nd Ural Corps Supply
  Apply
  SetHealth = 90
  SetCohesion = 20

SelectRegion = $Chelyabinsk

SelectFaction = $WH7
SelectRegion = $Chelyabinsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = National Bashkir Army
  Apply
  CreateUnit
  SetType = $uni_BSH_Unasov1
  SetName = H.G. Unasov
  Apply
  CreateUnit
    SetType = $uni_BSH_Ishmurzin1
    SetName = I.G. Ishmurzin
  Apply
  CreateUnit
    SetType = $uni_BSH_Rgt
    SetName = 1st Bashkir Inf Rgt
  Apply
  CreateUnit
    SetType = $uni_BSH_Rgt
    SetName = 2nd Bashkir Inf Rgt
  Apply
  CreateUnit
    SetType = $uni_BSH_Rgt
    SetName = 3rd Bashkir Inf Rgt
  Apply
  CreateUnit
    SetType = $uni_BSH_Rgt
    SetName = 4th Bashkir Inf Rgt
  Apply
  CreateUnit
    SetType = $uni_BSH_Rgt
    SetName = 5th Bashkir Inf Rgt
  Apply
  CreateUnit
    SetType = $uni_BSH_Rgt
    SetName = 6th Bashkir Inf Rgt
  Apply
  CreateUnit
    SetType = $uni_BSH_Cav
    SetName = 1st Bashkir Cav Rgt
  Apply
  CreateUnit
    SetType = $uni_BSH_Cav
    SetName = 2nd Bashkir Cav Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Art4
    SetName = 1st Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_WH3_Art4
    SetName = 2nd Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = Bashkir Supply
  Apply
  SetHealth = 100
  SetCohesion = 100

SelectRegion = $Uralsk

SelectFaction = $WH7
SelectRegion = $Uralsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = 1st Ural Cossacks Corps
  Apply
  CreateUnit
  SetCommit = 2
  SetType = $uni_URL_Martynov3
  SetName = M.F. Martynov
  Apply
  CreateUnit
    SetType = $uni_URL_Cav
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Cav
    SetName = 2nd Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Cav
    SetName = 3rd Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Cav
    SetName = 4th Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Art0
    SetName = Artillery Bty
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Cav
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Art4
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = 1st Ural Cos. Supply
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = 2nd Ural Cos. Supply
  Apply

SelectRegion = $Iletsk

SelectFaction = $WH7
SelectRegion = $Iletsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = 3rd Ural Cossacks Division
  Apply
  CreateUnit
  SetCommit = 2
  SetType = $uni_URL_Akutin2
  SetName = V.I. Akutin
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Inf
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_URL_Cav
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_WH3_Art4
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = 3rd Ural Cossacks Supply
  Apply

SelectRegion = $Gurjev

SelectFaction = $WH7
SelectRegion = $Gurjev
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = 4th Ilek Cossacks Division
  Apply
  CreateUnit
  SetType = $uni_URL_Tolstov1
  SetName = V.S. Tolstov
  Apply
  CreateUnit
  SetType = $uni_URL_Cav
  SetName = 4th Ural Cos. Rgt
  Apply
  CreateUnit
  SetType = $uni_URL_Inf
  SetName = 10th Ural Cos. Rgt
  Apply
  CreateUnit
  SetType = $uni_URL_Inf
  SetName = 17th Ural Cos. Rgt
  Apply
  SetHealth = 50
  SetCohesion = 100
  CreateUnit
  SetType = $uni_WH3_Art1
  SetName = 4th Ural Artillery
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = 4th Ilek Cos. Supply
  Apply

SelectRegion = $Orenburg

SelectFaction = $WH7
SelectRegion = $Orenburg
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Orenburg Cossacks
  Apply
  CreateUnit
  SetCommit = 2
  SetType = $uni_ORE_Dutov2
  SetName = A.I. Dutov
  Apply
  CreateUnit
  SetType = $uni_ORE_Onchokov1
  SetName = A.N. Onchokov
  Apply
  CreateUnit
  SetType = $uni_URL_Borodin1
  SetName = N.N. Borodin
  Apply
  CreateUnit
  SetType = $uni_ORE_Krasnoyartsev1
  SetName = D.M. Krasnoyartsev
  Apply
  CreateUnit
  GMEParam = 6
  SetType = $uni_ORE_Shishkin1
  SetName = V.N. Shishkin
  Apply
  CreateUnit
    SetType = $uni_ORE_Cav
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_ORE_Cav
    SetName = 2nd Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_ORE_Cav
    SetName = 3rd Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_ORE_Cav
    SetName = 4th Cavalry Rgt
  Apply
  CreateUnit
  SetCommit = 3
    SetType = $uni_WH3_Art0
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = Orenburg Cos. Supply
  Apply

SelectRegion = $Semipalatinsk

SelectFaction = $WH7
SelectRegion = $Semipalatinsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Semiretche Partisans
  Apply
  CreateUnit
  GMEParam = 7
  SetType = $uni_SEM_Rgt
  FlavorName = Semiretche Partisans
  SetName = 1st Annenkov Cos. Inf. Rgt
  Apply
  CreateUnit
  SetType = $uni_SEM_Rgt
  SetName = 2nd Annenkov Cos. Inf. Rgt
  Apply
  CreateUnit
  SetType = $uni_SEM_Rgt
  SetName = 3rd Annenkov Cos. Inf. Rgt
  Apply
  CreateUnit
  SetType = $uni_SEM_Rgt
  SetName = 4th Annenkov Cos. Inf. Rgt
  Apply
  CreateUnit
  SetType = $uni_SEM_Cav
  SetLevel = 1
  SetName = 1st Annenkov Cos. Cav. Rgt
  Apply
  CreateUnit
  SetType = $uni_WH3_Art4
  SetName = Artillery Bty
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_SEM_Annenkov1
  SetName = B.V. Annenkov
  Apply

SelectFaction = $WH7
SelectRegion = $Semipalatinsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 8
  SetName = Semiretche Partisans
  Apply
  CreateUnit
  SetType = $uni_SEM_Cav
  SetLevel = 1
  SetName = 2nd Annenkov Cos. Cav. Rgt
  Apply
  CreateUnit
  SetType = $uni_SEM_Cav
  SetLevel = 1
  SetName = 3rd Annenkov Cos. Cav. Rgt
  Apply
  CreateUnit
  SetType = $uni_WH3_Art0
  SetLevel = 1
  SetName = Horse Artillery Bty
  Apply

SelectFaction = $WH7
SelectRegion = $Omsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Krasilnikov Partisans
  Apply
  CreateUnit
  GMEParam = 2
  SetType = $uni_WH3_Cav_Par
  FlavorName = Semiretche Partisans
  SetName = Annenkov Partisans
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_SIB_Krasilnikov1
  SetName = I.N. Krasilnikov
  Apply

SelectFaction = $WH7
SelectRegion = $Semipalatinsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 999
  SetName = Alash Orda
  Apply
  CreateUnit
  GMEParam = 4
  SetType = $uni_GRN_Bukeikhanov1
  FlavorName = Alash Orda
  SetName = A. Bukeikhanov
  Apply
  CreateUnit
  SetType = $uni_SIB_Inf
  SetName = Alash Orda Infantry Rgt
  Apply
  CreateUnit
  SetType = $uni_SIB_Cav
  SetName = Alash Orda Cavalry Rgt
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_SIB_Cav
  SetName = Alash Orda Cavalry Rgt
  Apply

SelectRegion = $Khiva

SelectFaction = $BAS
SelectRegion = $Khiva
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 6
  SetName = Khiva Khanate
  Apply
  CreateUnit
  GMEParam = 9
  SetType = $uni_TUK_Juna-Id-Khan3
  FlavorName = Khiva Khanate
  SetName = Juna-Id-Khan
  Apply
  CreateUnit
  SetType = $uni_KAZ_Inf
  SetName = 1st Khiva Rgt
  Apply
  CreateUnit
  SetType = $uni_KAZ_Inf
  SetName = 2nd  Khiva Rgt
  Apply
  CreateUnit
    SetType = $uni_KAZ_RegCav
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_KAZ_RegCav
    SetName = 2nd Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_KAZ_RegCav
    SetName = 3rd Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_KAZ_RegCav
    SetName = 4th Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_KAZ_Art0
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_KAZ_Art1
  SetName = Khiva Artillery
  Apply

SelectRegion = $Bukhara

SelectFaction = $BAS
SelectRegion = $Bukhara
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 6
  SetName = Bukhara Emirate
  Apply
  CreateUnit
  GMEParam = 12
  SetType = $uni_BUK_Seid-Alim Khan3
  FlavorName = Bukhara Emirate
  SetName = Seid-Alim Khan
  Apply
  CreateUnit
    SetType = $uni_KAZ_Inf
    SetName = 1st Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_KAZ_Inf
    SetName = 2nd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_KAZ_Inf
    SetName = 3rd Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_KAZ_Inf
    SetName = 4th Infantry Rgt
  Apply
  CreateUnit
    SetType = $uni_KAZ_RegCav
    SetName = 1st Cavalry Rgt
  Apply
  CreateUnit
    SetType = $uni_GRN_MG2
    SetName = Machine Guns
  Apply
  CreateUnit
    SetType = $uni_KAZ_Art2
    SetName = Artillery Bty
  Apply
  CreateUnit
  SetType = $uni_KAZ_RegCav
  SetName = 1st Bukhara Cavalry Rgt
  Apply
  CreateUnit
  SetType = $uni_KAZ_RegCav
  SetName = 2nd Bukhara Cavalry Rgt
  Apply
  CreateUnit
  SetType = $uni_KAZ_RegCav
  SetName = 3rd Bukhara Cavalry Rgt
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_KAZ_Art0
  SetName = Bukhara Artillery
  Apply

SelectFaction = $WH7
SelectRegion = $Manchzhuriya
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Semenov Army
  Apply
  CreateUnit
  SetType = $uni_ZAB_Semenov2
  SetName = G.M. Semenov
  Apply
  CreateUnit
  SetType = $uni_ZAB_D.Semenov1
  SetName = D. Semenov
  Apply
  CreateUnit
  SetType = $uni_ZAB_Natsvalov1
  SetName = N.G. Natsvalov
  Apply
  CreateUnit
  SetType = $uni_ZAB_Baksheev1
  SetName = A.P. Baksheev
  Apply
  CreateUnit
  SetType = $uni_ZAB_Matsievsky1
  SetName = G.E. Matsievsky
  Apply
  CreateUnit
  SetType = $uni_ZAB_SemInf
  SetLevel = 1
  SetName = 1st Semenov Rgt
  Apply
  CreateUnit
  SetType = $uni_ZAB_SemInf
  SetLevel = 1
  SetName = 2nd Mandchouria Rgt
  Apply
  CreateUnit
  SetType = $uni_ZAB_SemCav
  SetLevel = 1
  SetName = 1st Mungolian Cavalry Rgt
  Apply
  CreateUnit
  SetType = $uni_ZAB_SemCav
  SetLevel = 1
  SetName = 2nd Daouria Cavalry Rgt
  Apply
  SetHealth = 50
  SetCohesion = 100
  CreateUnit
  SetType = $uni_ZAB_SemCav
  SetLevel = 1
  SetName = Urgin Dcht
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_WH3_Art1
  SetLevel = 1
  SetName = 1st Artillery Battery
  Apply
  CreateUnit
  SetType = $uni_WH3_Art1
  SetLevel = 1
  SetName = 2nd Artillery Battery
  Apply
  CreateUnit
  SetType = $uni_WH3_Eng
  SetName = Engineers Battalion
  Apply
  CreateUnit
  SetType = $uni_WH3_Amt1
  FlavorName = N. Bogolomets
  SetName = 'Semenovets'
  Apply
  CreateUnit
  SetType = $uni_WH3_Amt1
  FlavorName = N. Bogolomets
  SetName = 'Ataman'
  Apply
  CreateUnit
  SetType = $uni_WH3_Amt1
  FlavorName = N. Bogolomets
  SetName = 'Zabaikalets'
  Apply
  CreateUnit
  SetType = $uni_WH3_Amt1
  FlavorName = N. Bogolomets
  SetName = 'Otvakhny'
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = Semenov Supply
  Apply

SelectFaction = $WH7
SelectRegion = $Vladivostok
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Kalmykov Warband
  Apply
  CreateUnit
  GMEParam = 3
  SetType = $uni_ZAB_Kalmykov1
  FlavorName = Kalmykov Warband
  SetName = I.P. Kalmykov
  Apply
  CreateUnit
  SetType = $uni_ZAB_KalCav
  SetLevel = 1
  SetName = Kalmykov Dcht
  Apply
  SetHealth = 80
  SetCohesion = 100
  CreateUnit
  SetCommit = 3
  SetType = $uni_ZAB_KalCav
  FlavorName = D. Orlov
  SetName = Orlov Dcht
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = Zabaikal Supply
  Apply

SelectRegion = $Harbin

SelectFaction = $WH7
SelectRegion = $Harbin
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 0
  FixType = 0
  SetName = Gamov Warband
  Apply
  CreateUnit
  GMEParam = 6
  SetType = $uni_ZAB_Gamov1
  FlavorName = Gamov Warband
  SetName = I.M. Gamov
  Apply
  CreateUnit
  SetType = $uni_ZAB_GamInf
  SetLevel = 1
  SetName = Gamov Dcht
  Apply
  SetHealth = 80
  SetCohesion = 100
  CreateUnit
  SetType = $uni_ZAB_GamInf
  SetName = Gamov Dcht
  Apply
  SetHealth = 100
  SetCohesion = 100
  CreateUnit
  SetType = $uni_ZAB_GamInf
  SetName = Gamov Dcht
  Apply
  CreateUnit
  SetType = $uni_ZAB_GamCav
  SetName = Gamov Cavalry Dcht
  Apply
  CreateUnit
  SetCommit = 3
  SetType = $uni_WH3_Art1
  SetLevel = 1
  SetName = 1st Artillery Battery
  Apply
  CreateUnit
  SetType = $uni_WH3_Sup1
  SetName = Zabaikal Supply
  Apply

SelectRegion = $Krasnoufimsk

SelectFaction = $WH7
SelectRegion = $Krasnoufimsk
  CreateGroup
  Posture = $Defensive
  SetKind = $Land
  Entranch = 0
  InCS = 1
  FixType = 0
  SetName = Ural White Guards
  Apply
  CreateUnit
  SetType = $uni_WH3_Mil1
  SetName = Rychagov Dcht
  Apply
  CreateUnit
  SetType = $uni_WH3_Mil1
  SetName = Borchaninov Dcht
  Apply

SelectRegion = $Pacific Ocean

SelectFaction = $WH7
SelectRegion = $Pacific Ocean
  CreateGroup
  Posture = $Defensive
  SetKind = $Nav
  Entranch = 0
  FixType = 999
  SetName = Allied Eastern Shipping
  Apply
  CreateUnit
  SetType = $uni_GBR_Mch
  SetName = Pacific Shipping
  Apply