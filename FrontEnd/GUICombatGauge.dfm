object MainForm10: TMainForm10
  Left = 0
  Top = 0
  Caption = 'GUICombatGauge'
  ClientHeight = 407
  ClientWidth = 507
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lbCurrentDay: TAgeLabelD
    Left = 220
    Top = 19
    Width = 29
    Height = 13
    Alignment = taCenter
    AutoSize = False
    Caption = 'DAY'
    Layout = tlCenter
    DataSetIdx = 632
    FontID = 12
    FontColor = '0|0|0|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbCurrentRange: TAgeLabelD
    Left = 195
    Top = 167
    Width = 78
    Height = 13
    Alignment = taCenter
    Caption = '30000000000'
    Layout = tlCenter
    DataSetIdx = 633
    FontID = 10
    FontColor = '0|0|0|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbAttackName: TAgeLabelD
    Left = 13
    Top = 175
    Width = 88
    Height = 15
    Alignment = taCenter
    AutoSize = False
    Caption = 'lbAttackName'
    Layout = tlCenter
    DataSetIdx = 634
    FontID = 10
    FontColor = '0|0|0|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbDefenserName: TAgeLabelD
    Left = 370
    Top = 175
    Width = 88
    Height = 15
    Alignment = taCenter
    AutoSize = False
    Caption = 'lbDefenserName'
    Layout = tlCenter
    DataSetIdx = 637
    FontID = 10
    FontColor = '0|0|0|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object tzCombatLog_unusedCW2: TAgeLabelD
    Left = 50
    Top = 280
    Width = 372
    Height = 13
    Caption =
      '................................................................' +
      '.............................'
    DataSetIdx = 645
    FontID = 3
    FontColor = '0|0|0|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbREntranchLvl: TAgeLabelD
    Left = 304
    Top = 161
    Width = 16
    Height = 13
    Alignment = taCenter
    Caption = '....'
    Layout = tlCenter
    DataSetIdx = 642
    FontID = 12
    FontColor = '0|0|0|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbLEntranchLvl: TAgeLabelD
    Left = 146
    Top = 161
    Width = 16
    Height = 13
    Alignment = taCenter
    Caption = '....'
    Layout = tlCenter
    DataSetIdx = 644
    FontID = 12
    FontColor = '0|0|0|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object aaaHelpingImage: TImage
    Left = 0
    Top = 0
    Width = 163
    Height = 48
  end
  object lbTitle: TAgeLabelD
    Left = 35
    Top = 217
    Width = 399
    Height = 16
    Alignment = taCenter
    AutoSize = False
    Caption = 'Battle Title'
    Layout = tlCenter
    DataSetIdx = 0
    FontID = 10
    FontColor = '0|0|0|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object imgCombatGauge: TAgeImageD
    Left = 140
    Top = 194
    Width = 96
    Height = 66
    TabOrder = 0
    DataSetIdx = 640
  end
  object imgAttackPortrait: TAgeImageD
    Left = 7
    Top = 36
    Width = 100
    Height = 126
    TabOrder = 1
    DataSetIdx = 635
    LevelOffset = 1
  end
  object ImgAttackFlag: TAgeImageD
    Left = 7
    Top = 36
    Width = 100
    Height = 126
    TabOrder = 2
    DataSetIdx = 636
  end
  object imgDefencerPortrait: TAgeImageD
    Left = 364
    Top = 36
    Width = 100
    Height = 126
    TabOrder = 3
    DataSetIdx = 638
    LevelOffset = 1
  end
  object imgDefenserFlag: TAgeImageD
    Left = 364
    Top = 36
    Width = 100
    Height = 126
    TabOrder = 4
    DataSetIdx = 639
  end
  object imgREntranchLvl: TAgeImageD
    Left = 286
    Top = 141
    Width = 54
    Height = 54
    TabOrder = 5
    DataSetIdx = 641
  end
  object imgLEntranchLvl: TAgeImageD
    Left = 128
    Top = 141
    Width = 54
    Height = 54
    TabOrder = 6
    DataSetIdx = 643
  end
  object AgeDxFormDataD1: TAgeDxFormDataD
    AgeAnchors = aaCenterCenter
    DataSetIdx = 0
    GameState = 'stHostScale'
    Layer = 96
    UID = 50027
    BackImage = 'Combat_Gauge'
    za_StorageDesc1 = 'Max num lines cbt events?'
    za_StorageVal1 = '9'
    zb_StorageDesc2 =
      'where to Show cbt events? (0 disabled, 1 msg panel, 2 gauge itse' +
      'lf)'
    zb_StorageVal2 = '0'
  end
end
