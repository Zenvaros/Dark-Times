object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'GUICredits'
  ClientHeight = 684
  ClientWidth = 1007
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lbVersion: TAgeLabelD
    Left = 0
    Top = 72
    Width = 1007
    Height = 13
    Alignment = taCenter
    AutoSize = False
    Caption = '$strVersion'
    DataSetIdx = 0
    FontID = 3
    FontColor = '255|255|255|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbTitle: TAgeLabelD
    Left = 18
    Top = 8
    Width = 396
    Height = 19
    AutoSize = False
    Caption = 'Credits'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
    DataSetIdx = 0
    FontID = 3
    FontColor = '192|192|192|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object AgeGripBar: TAgeGripBarD
    Left = -1
    Top = -6
    Width = 1024
    Height = 127
    TabOrder = 0
  end
  object imgCredit0: TAgeImageD
    Left = 31
    Top = 127
    Width = 105
    Height = 89
    TabOrder = 1
    DataSetIdx = 0
    Image = 'ageod.png'
  end
  object imgCredit1: TAgeImageD
    Left = 632
    Top = 127
    Width = 105
    Height = 89
    TabOrder = 2
    DataSetIdx = 0
    Image = 'AGE.png'
  end
  object imgCredit2: TAgeImageD
    Left = 344
    Top = 408
    Width = 105
    Height = 89
    TabOrder = 3
    DataSetIdx = 0
    Image = 'delphi.png'
  end
  object imgCredit3: TAgeImageD
    Left = 88
    Top = 392
    Width = 105
    Height = 89
    TabOrder = 4
    DataSetIdx = 0
    Image = 'directx.png'
  end
  object imgCredit5: TAgeImageD
    Left = 616
    Top = 392
    Width = 105
    Height = 89
    TabOrder = 5
    DataSetIdx = 0
    Image = 'LogoVarious.png'
  end
  object imgCredit6: TAgeImageD
    Left = 408
    Top = 127
    Width = 105
    Height = 89
    TabOrder = 6
    DataSetIdx = 0
    Image = 'Publisher.png'
  end
  object btnClose: TAgeButtonD
    Left = 983
    Top = 1
    Width = 19
    Height = 19
    ModalResult = 2
    TabOrder = 7
    LevelOffset = 1
    DefaultImage = 'Main Menu Close OFF.png'
    OverImage = 'Main Menu Close HL.png'
    DownImage = 'Main Menu Close ON.png'
    DisaImage = 'Main Menu Close DIS.png'
    FontID = 3
    Checked = False
  end
  object imgSeparatorTop: TAgeImageD
    Left = 12
    Top = 27
    Width = 957
    Height = 17
    Caption = 'imgSeparatorTop'
    TabOrder = 8
    DataSetIdx = 0
    Image = 'Main Menu Separator.png'
  end
  object AgeDxFormData: TAgeDxFormDataD
    AgeAnchors = aaCenterCenter
    DataSetIdx = 0
    GameState = 'stGUICredits'
    Layer = 96
    UID = 50065
    BackImage = 'Background_Credits.png'
    za_StorageDesc1 = 'Icons number'
    za_StorageVal1 = '7'
    Left = 32
    Top = 72
  end
end
