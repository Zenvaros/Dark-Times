object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'GUITooltip'
  ClientHeight = 480
  ClientWidth = 256
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lb1: TAgeLabelD
    Left = 0
    Top = 0
    Width = 256
    Height = 13
    AutoSize = False
    Caption = ' '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    DataSetIdx = 0
    FontID = 3
    FontColor = '225|225|225|255'
    Multilines = True
    Emboss = False
    Shadow = False
    AdvText = True
  end
  object AgeDxFormData: TAgeDxFormDataD
    DataSetIdx = 0
    GameState = 'stGUITooltip'
    Layer = 101
    UID = 50073
    BackImage = 'NothingBitmap.bmp'
    za_StorageDesc1 = 'Background color & opacity, default is 0|0|0|230'
    za_StorageVal1 = '0|0|0|220'
    Left = 168
    Top = 328
  end
end
