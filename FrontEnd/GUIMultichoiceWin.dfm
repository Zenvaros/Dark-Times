object MainForm14: TMainForm14
  Left = 0
  Top = 0
  Caption = 'GUIMultichoiceWin'
  ClientHeight = 490
  ClientWidth = 750
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lbMultiChoiceTitle: TAgeLabelD
    Left = 208
    Top = 11
    Width = 337
    Height = 13
    Alignment = taCenter
    AutoSize = False
    Caption = '$strMultiChoiceTitle'
    Layout = tlCenter
    DataSetIdx = 735
    FontID = 3
    FontColor = '255|255|255|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object tzMultiChoiceText: TAgeLabelD
    Left = 30
    Top = 202
    Width = 712
    Height = 13
    AutoSize = False
    DataSetIdx = 0
    FontID = 3
    FontColor = '0|0|0|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbChoiceText1: TAgeLabelD
    Left = 41
    Top = 295
    Width = 214
    Height = 13
    AutoSize = False
    Caption = 'Choice 1 Text.....................................'
    Layout = tlCenter
    DataSetIdx = 741
    LevelOffset = 1
    FontID = 3
    FontColor = '0|0|0|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbChoiceText2: TAgeLabelD
    Left = 41
    Top = 381
    Width = 214
    Height = 13
    AutoSize = False
    Caption = 'Choice 2 Text.....................................'
    Layout = tlCenter
    DataSetIdx = 742
    LevelOffset = 1
    FontID = 3
    FontColor = '0|0|0|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbChoiceText3: TAgeLabelD
    Left = 426
    Top = 295
    Width = 214
    Height = 13
    AutoSize = False
    Caption = 'Choice 3 Text.....................................'
    Layout = tlCenter
    DataSetIdx = 743
    LevelOffset = 1
    FontID = 3
    FontColor = '0|0|0|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbChoiceText4: TAgeLabelD
    Left = 426
    Top = 381
    Width = 214
    Height = 13
    AutoSize = False
    Caption = 'Choice 4 Text.....................................'
    Layout = tlCenter
    DataSetIdx = 744
    LevelOffset = 1
    FontID = 3
    FontColor = '0|0|0|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object AgeGripBar: TAgeGripBarD
    Left = -27
    Top = -8
    Width = 769
    Height = 97
    TabOrder = 7
  end
  object btnClose: TAgeButtonD
    Left = 717
    Top = 8
    Width = 19
    Height = 19
    ModalResult = 2
    TabOrder = 8
    LevelOffset = 1
    DefaultImage = 'RoundClose_OFF.png'
    OverImage = 'RoundClose_HL.png'
    DownImage = 'RoundClose_ON.png'
    DisaImage = 'RoundClose_DIS.png'
    FontID = 3
    Checked = False
  end
  object imgPhotoEvent: TAgeImageD
    Left = 229
    Top = 39
    Width = 292
    Height = 139
    TabOrder = 0
    DataSetIdx = 736
  end
  object imgTextBg: TAgeImageD
    Left = 8
    Top = 242
    Width = 201
    Height = 19
    TabOrder = 1
    DataSetIdx = 0
    Image = 'MCTextBg.png'
  end
  object imgChoiceBg1: TAgeImageD
    Left = 30
    Top = 358
    Width = 64
    Height = 69
    TabOrder = 2
    DataSetIdx = 737
  end
  object btnChoice1: TAgeButtonD
    Left = 136
    Top = 267
    Width = 19
    Height = 19
    TabOrder = 9
    DataSetIdx = 745
    LevelOffset = 1
    FontID = 3
    Checked = False
  end
  object imgChoiceBg2: TAgeImageD
    Left = 30
    Top = 267
    Width = 64
    Height = 69
    TabOrder = 3
    DataSetIdx = 738
  end
  object btnChoice2: TAgeButtonD
    Left = 136
    Top = 358
    Width = 19
    Height = 19
    TabOrder = 10
    DataSetIdx = 746
    LevelOffset = 1
    FontID = 3
    Checked = False
  end
  object imgChoiceBg3: TAgeImageD
    Left = 407
    Top = 267
    Width = 64
    Height = 69
    TabOrder = 4
    DataSetIdx = 739
  end
  object btnChoice3: TAgeButtonD
    Left = 513
    Top = 267
    Width = 19
    Height = 19
    TabOrder = 11
    DataSetIdx = 747
    LevelOffset = 1
    FontID = 3
    Checked = False
  end
  object imgChoiceBg4: TAgeImageD
    Left = 407
    Top = 358
    Width = 64
    Height = 69
    TabOrder = 5
    DataSetIdx = 740
  end
  object btnChoice4: TAgeButtonD
    Left = 513
    Top = 358
    Width = 19
    Height = 19
    TabOrder = 6
    DataSetIdx = 748
    LevelOffset = 1
    FontID = 3
    Checked = False
  end
  object AgeDxFormDataD: TAgeDxFormDataD
    AgeAnchors = aaCenterCenter
    DataSetIdx = 0
    GameState = 'stMultiChEvt'
    Layer = 102
    UID = 50042
    BackImage = 'MultiEvents.png'
    za_StorageDesc1 = 'unselected seals'
    za_StorageVal1 = 'penholder_OFF.png;penholder_OFF.png;penholder_HL.png'
    zb_StorageDesc2 = 'selected seal offset / to unselected ones'
    zb_StorageVal2 = '-20|35'
    Left = 648
    Top = 112
  end
end
