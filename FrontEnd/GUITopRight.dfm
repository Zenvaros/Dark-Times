object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'GUITopRight'
  ClientHeight = 149
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
  object lb_Date: TAgeLabelD
    Left = 48
    Top = 57
    Width = 155
    Height = 15
    Alignment = taCenter
    Layout = tlCenter
    AutoSize = False
    Caption = '1860, Late December'
    Layout = tlCenter
    DataSetIdx = 0
    LevelOffset = 1
    FontID = 13
    FontColor = '255|255|255|255'
    Multilines = False
    Emboss = False
    Shadow = False
    AdvText = False
  end
  object btn_act_EndTurn: TAgeButtonD
    Left = 51
    Top = 6
    Width = 32
    Height = 32
    TabOrder = 0
    LevelOffset = 1
    DefaultImage = 'btn_endturn_off.png'
    OverImage = 'btn_endturn_hl.png'
    DownImage = 'btn_endturn_on.png'
    DisaImage = 'btn_endturn_off.png'
    FontID = 3
    Checked = False
  end
  object btn_act_SaveTurn: TAgeButtonD
    Left = 102
    Top = 6
    Width = 32
    Height = 32
    TabOrder = 1
    LevelOffset = 1
    DefaultImage = 'btn_save_off.png'
    OverImage = 'btn_save_hl.png'
    DownImage = 'btn_save_on.png'
    DisaImage = 'btn_save_off.png'
    FontID = 3
    Checked = False
  end
  object btn_act_MainMenu: TAgeButtonD
    Left = 153
    Top = 6
    Width = 32
    Height = 32
    TabOrder = 2
    LevelOffset = 1
    DefaultImage = 'btn_mainmenu_off.png'
    OverImage = 'btn_mainmenu_hl.png'
    DownImage = 'btn_mainmenu_on.png'
    DisaImage = 'btn_mainmenu_off.png'
    FontID = 3
    Checked = False
  end
  object AgeDxFormData: TAgeDxFormDataD
    AgeAnchors = aaTopRight
    OffsetY = 28
    DataSetIdx = 0
    GameState = 'stGUITopRight'
    Layer = 93
    UID = 50075
    BackImage = 'c_top_right_back.png'
    za_StorageDesc1 = 'Please read remark in UFrontEndVars.pas around line 90'
    za_StorageVal1 = '<a value>'
  end
end
