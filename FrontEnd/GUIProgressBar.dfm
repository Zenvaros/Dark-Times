object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'GUIProgress'
  ClientHeight = 30
  ClientWidth = 490
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object imgRing: TAgeImageD
    Left = 0
    Top = 0
    Width = 24
    Height = 24
    Align = alCustom
    TabOrder = 0
    DataSetIdx = 0
    Image = 'ProgressRing.png'
  end
  object AgeDxFormData: TAgeDxFormDataD
    AgeAnchors = aaTopCenter
    OffsetY = 979
    DataSetIdx = 0
    GameState = 'stProgress'
    Layer = 96
    UID = 50029
    BackImage = 'ProgressBack.png'
    za_StorageDesc1 = 'Ring Initial position (0)'
    za_StorageVal1 = '7|3'
    zb_StorageDesc2 = 'Interval per notch'
    zb_StorageVal2 = '30'
    zc_StorageDesc3 = 'Number of notches (1-15)'
    zc_StorageVal3 = '15'
    Left = 336
  end
end
