object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'GUILoadReplay'
  ClientHeight = 768
  ClientWidth = 1024
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lbTitle: TAgeLabelD
    Left = 292
    Top = 8
    Width = 461
    Height = 19
    Alignment = taCenter
    AutoSize = False
    Caption = '$strGUILG_MainTitle'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
    DataSetIdx = 0
    FontID = 4
    FontColor = '0|0|0|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object AgeGripBar: TAgeGripBarD
    Left = -1
    Top = -6
    Width = 1024
    Height = 23
    TabOrder = 0
  end
  object btnClose: TAgeButtonD
    Left = 983
    Top = 1
    Width = 19
    Height = 19
    ModalResult = 2
    TabOrder = 1
    LevelOffset = 1
    DefaultImage = 'Main Menu Close OFF.png'
    OverImage = 'Main Menu Close HL.png'
    DownImage = 'Main Menu Close ON.png'
    DisaImage = 'Main Menu Close DIS.png'
    FontID = 3
    Checked = False
  end
  object AgeDxFormData: TAgeDxFormDataD
    AgeAnchors = aaCenterCenter
    DataSetIdx = 0
    GameState = 'stGUILoadReplay'
    Layer = 97
    UID = 50067
    BackImage = 'Background_pickscen.png'
    za_StorageDesc1 = 'Num of saved game'
    za_StorageVal1 = '3'
    zb_StorageDesc2 = 'Num max playable factions per side'
    zb_StorageVal2 = '30'
    Left = 32
    Top = 32
  end
end
