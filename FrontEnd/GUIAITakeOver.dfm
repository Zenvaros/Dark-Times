object MainForm: TMainForm
  AlignWithMargins = True
  Left = 0
  Top = 0
  Caption = 'GUIAITakeOver'
  ClientHeight = 200
  ClientWidth = 400
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
    Top = 8
    Width = 397
    Height = 13
    Alignment = taCenter
    AutoSize = False
    Caption = 'Window Title'
    DataSetIdx = 0
    FontID = 12
    FontColor = '255|255|255|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbMessage: TAgeLabelD
    Left = 20
    Top = 75
    Width = 365
    Height = 50
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
    FontID = 12
    FontColor = '255|255|255|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object imgTextBack: TAgeImageD
    Left = 0
    Top = 0
    Width = 73
    Height = 65
    Align = alCustom
    TabOrder = 0
    DataSetIdx = 0
    Image = 'NothingBitmap.bmp'
  end
  object btnCancel: TAgeButtonD
    Left = 136
    Top = 144
    Width = 16
    Height = 48
    Hint = 'Switch to Unit List'
    TabOrder = 1
    DataSetIdx = -1
    DefaultImage = 'GUI_Dialog_Cancel_ON.png'
    OverImage = 'GUI_Dialog_Cancel_HL.png'
    DownImage = 'GUI_Dialog_Cancel_OFF.png'
    DisaImage = 'GUI_Dialog_Cancel_DIS.png'
    FontID = 3
    Checked = False
  end
  object btnAccept: TAgeButtonD
    Left = 236
    Top = 144
    Width = 16
    Height = 48
    Hint = 'Switch to Unit List'
    TabOrder = 2
    DataSetIdx = -1
    DefaultImage = 'GUI_Dialog_Ok_ON.png'
    OverImage = 'GUI_Dialog_Ok_HL.png'
    DownImage = 'GUI_Dialog_Ok_OFF.png'
    DisaImage = 'GUI_Dialog_Ok_OFF.png'
    FontID = 3
    Checked = False
  end
  object AgeDxFormData: TAgeDxFormDataD
    AgeAnchors = aaTopCenter
    OffsetY = 190
    DataSetIdx = 0
    GameState = 'stGUIAITakeOver'
    Layer = 96
    UID = 50087
    BackImage = 'GUI_Dialog_back.png'
    za_StorageDesc1 = 'Please read remark in UFrontEndVars.pas around line 90'
    za_StorageVal1 = '<a value>'
    Left = 16
    Top = 144
  end
end
