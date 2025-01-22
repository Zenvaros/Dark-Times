object MainForm: TMainForm
  Left = 0
  Top = 0
  Width = 596
  Height = 102
  Caption = 'GUIStatusMsg'
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
    Left = 0
    Top = 2
    Width = 640
    Height = 46
    Layout = tlCenter
    Alignment = taCenter
    AutoSize = False
    Caption = 'Status message...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
    DataSetIdx = 0
    FontID = 10
    FontColor = '255|255|255|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object imgBack: TAgeImageD
    Left = 0
    Top = 0
    Width = 73
    Height = 65
    Align = alCustom
    TabOrder = 0
    DataSetIdx = 0
    Image = 'NothingBitmap.bmp'
  end
  object AgeDxFormData: TAgeDxFormDataD
    AgeAnchors = aaTopCenter
    OffsetY = 909
    DataSetIdx = 0
    GameState = 'stGUIStatusMsg'
    Layer = 96
    UID = 50086
    BackImage = 'StatusMsgBack.png'
    za_StorageDesc1 = 'Please read remark in UFrontEndVars.pas around line 90'
    za_StorageVal1 = '<a value>'
  end
end
