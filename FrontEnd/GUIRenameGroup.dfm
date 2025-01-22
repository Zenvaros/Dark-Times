object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'GUIRenameGroup'
  ClientWidth = 400
  ClientHeight = 200
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
    Left = 11
    Top = 4
    Width = 379
    Height = 23
    Alignment = taCenter
    Layout = tlCenter
    Caption =
      'Window Title....................................................' +
      '...................'
    DataSetIdx = 0
    FontID = 10
    FontColor = '255|255|255|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object lbMessage: TAgeLabelD
    Left = 53
    Top = 87
    Width = 294
    Height = 62
    Alignment = taCenter
    Layout = tlCenter
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
    FontID = 3
    FontColor = '0|0|0|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object imgTextBack: TAgeImageD
    Left = 53
    Top = 50
    Width = 294
    Height = 36
    Align = alCustom
    TabOrder = 0
    DataSetIdx = 0
    Image = 'GUI_Dialog_EditBox.png'
  end
  object lbTextInput: TAgeLabelD
    Left = 57
    Top = 53
    Width = 286
    Height = 30
    Alignment = taCenter
    Layout = tlCenter
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
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object btnCancel: TAgeButtonD
    Left = 134
    Top = 150
    Width = 16
    Height = 48
    Hint = 'Switch to Unit List'
    TabOrder = 145
    DataSetIdx = -1
    DefaultImage = 'GUI_Dialog_Cancel_ON.png'
    OverImage = 'GUI_Dialog_Cancel_HL.png'
    DownImage = 'GUI_Dialog_Cancel_OFF.png'
    DisaImage = 'GUI_Dialog_Cancel_DIS.png'
    FontID = 3
    Checked = False
  end
  object btnAccept: TAgeButtonD
    Left = 221
    Top = 150
    Width = 16
    Height = 48
    Hint = 'Switch to Unit List'
    TabOrder = 145
    DataSetIdx = -1
    DefaultImage = 'GUI_Dialog_Ok_ON.png'
    OverImage = 'GUI_Dialog_Ok_HL.png'
    DownImage = 'GUI_Dialog_Ok_OFF.png'
    DisaImage = 'GUI_Dialog_Ok_DIS.png'
    FontID = 3
    Checked = False
  end
  object AgeDxFormData: TAgeDxFormDataD
    AgeAnchors = aaTopCenter
    OffsetY = 125
    DataSetIdx = 0
    GameState = 'stGUIRenameGroup'
    Layer = 96
    UID = 50090
    BackImage = 'GUI_Dialog_back.png'
    za_StorageDesc1 = 'Please read remark in UFrontEndVars.pas around line 90'
    za_StorageVal1 = '<a value>'
  end
end
