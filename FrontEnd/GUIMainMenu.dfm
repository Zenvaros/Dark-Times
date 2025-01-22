object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'GUIMainMenu'
  ClientHeight = 700
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
  object btnNewGame: TAgeButtonD
    Left = -371
    Top = -14
    Width = 140
    Height = 32
    TabOrder = 0
    AgeAnchors = aaDownCenter
    LevelOffset = 1
    DefaultImage = '$btnImgPngMainMenuNewOFF'
    OverImage = ' $btnImgPngMainMenuNewHL '
    DownImage = ' $btnImgPngMainMenuNewOn '
    DisaImage = ' $btnImgPngMainMenuNewDIS '
    FontID = 3
    Checked = False
  end
  object btnLoadGame: TAgeButtonD
    Left = 371
    Top = -14
    Width = 140
    Height = 32
    TabOrder = 1
    AgeAnchors = aaDownCenter
    LevelOffset = 1
    DefaultImage = '$btnImgPngMainMenuLoadOff'
    OverImage = ' $btnImgPngMainMenuLoadHL '
    DownImage = ' $btnImgPngMainMenuLoadOn '
    DisaImage = ' $btnImgPngMainMenuLoadDIS '
    FontID = 3
    Checked = False
  end
  object btnContinue: TAgeButtonD
    Left = -124
    Top = -14
    Width = 140
    Height = 32
    TabOrder = 2
    AgeAnchors = aaDownCenter
    LevelOffset = 1
    DefaultImage = '$btnImgPngMainMenuResumeOff'
    OverImage = ' $btnImgPngMainMenuResumeHL '
    DownImage = ' $btnImgPngMainMenuResumeOn '
    DisaImage = ' $btnImgPngMainMenuResumeDIS '
    FontID = 3
    Checked = False
  end
  object btnCredits: TAgeButtonD
    Left = -1
    Top = 520
    Width = 140
    Height = 32
    TabOrder = 3
    AgeAnchors = aaDownCenter
    LevelOffset = 1
    DefaultImage = '$btnImgPngMainMenuCreditsOff'
    OverImage = ' $btnImgPngMainMenuCreditsHL '
    DownImage = ' $btnImgPngMainMenuCreditsON '
    DisaImage = ' $btnImgPngMainMenuCreditsDIS '
    FontID = 3
    Checked = False
  end
  object btnOptions: TAgeButtonD
    Left = -371
    Top = 450
    Width = 140
    Height = 32
    TabOrder = 4
    AgeAnchors = aaDownCenter
    LevelOffset = 1
    DefaultImage = '$btnImgPngMainMenuOptionsOff '
    OverImage = ' $btnImgPngMainMenuOptionsHL '
    DownImage = ' $btnImgPngMainMenuOptionsOn '
    DisaImage = ' $btnImgPngMainMenuOptionsDIS '
    FontID = 3
    Checked = False
  end
  object btnCommunity: TAgeButtonD
    Left = 124
    Top = 450
    Width = 140
    Height = 32
    TabOrder = 5
    AgeAnchors = aaDownCenter
    LevelOffset = 1
    DefaultImage = '$btnImgPngMainMenuCommunityOff'
    OverImage = ' $btnImgPngMainMenuCommunityHL '
    DownImage = ' $btnImgPngMainMenuCommunityOn '
    DisaImage = ' $btnImgPngMainMenuCommunityDIS '
    FontID = 3
    Checked = False
  end
  object btnQuit: TAgeButtonD
    Left = 371
    Top = 450
    Width = 140
    Height = 32
    TabOrder = 6
    AgeAnchors = aaDownCenter
    LevelOffset = 1
    DefaultImage = '$btnImgPngMainMenuQuitOff'
    OverImage = ' $btnImgPngMainMenuQuitHL '
    DownImage = ' $btnImgPngMainMenuQuitOn '
    DisaImage = ' $btnImgPngMainMenuQuitDIS '
    FontID = 3
    Checked = False
  end
  object btnSaveGame: TAgeButtonD
    Left = 124
    Top = 47
    Width = 140
    Height = 32
    TabOrder = 7
    AgeAnchors = aaDownCenter
    LevelOffset = 1
    DefaultImage = '$btnImgPngMainMenuSaveOff'
    OverImage = ' $btnImgPngMainMenuSaveHL '
    DownImage = ' $btnImgPngMainMenuSaveOn '
    DisaImage = ' $btnImgPngMainMenuSaveDIS '
    FontID = 3
    Checked = False
  end
  object btnReplay: TAgeButtonD
    Left = -124
    Top = 510
    Width = 140
    Height = 32
    TabOrder = 8
    AgeAnchors = aaDownCenter
    LevelOffset = 1
    DefaultImage = '$btnImgPngMainMenuReplayOff'
    OverImage = ' $btnImgPngMainMenuReplayHL '
    DownImage = ' $btnImgPngMainMenuReplayOn '
    DisaImage = ' $btnImgPngMainMenuReplayDIS '
    FontID = 3
    Checked = False
  end
  object imgLogo: TAgeImageD
    Left = 0
    Top = 0
    Width = 185
    Height = 41
    TabOrder = 9
    DataSetIdx = 0
    Image = 'Mainmenu_Logo.png'
  end
  object imgLogo2: TAgeImageD
    Left = 0
    Top = 0
    Width = 121
    Height = 73
    TabOrder = 10
    DataSetIdx = 0
    Image = 'blank.png'
  end
  object AgeDxFormData: TAgeDxFormDataD
    AgeAnchors = aaCenterCenter
    DataSetIdx = 0
    GameState = 'stMainMenu'
    Layer = 91
    UID = 50005
    BackImage = 'Mainmenu_Bg.png'
    za_StorageDesc1 = 'Logo Image Name'
    za_StorageVal1 = 'Mainmenu_Logo.png'
    zb_StorageDesc2 = 'Same, but 50%'
    zb_StorageVal2 = 'MainMenu_Logo50.png'
    Left = 40
    Top = 120
  end
end
