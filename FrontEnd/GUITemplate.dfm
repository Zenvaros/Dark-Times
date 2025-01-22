object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'GUITemplate'
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
    Left = 308
    Top = 12
    Width = 396
    Height = 19
    Alignment = taCenter
    Caption =
      'strYourTitleHere................................................' +
      '........'
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
    Height = 60
    TabOrder = 1
  end
  object imgBack: TAgeImageD
    Left = 0
    Top = 0
    Width = 73
    Height = 65
    Align = alCustom
    Caption = 'imgBack'
    TabOrder = 0
    DataSetIdx = 0
    Image = 'NothingBitmap.bmp'
  end
  object btnClose: TAgeButtonD
    Left = 983
    Top = 1
    Width = 19
    Height = 19
    ModalResult = 2
    TabOrder = 2
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
    GameState = 'stTemplate'
    Layer = 96
    UID = 50999
    BackImage = 'yourFormBack.png'
    za_StorageDesc1 = 'Please read remark in UFrontEndVars.pas around line 90'
    za_StorageVal1 = '<a value>'
  end
end
