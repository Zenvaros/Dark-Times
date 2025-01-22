Unit GUINewScen;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD, AgeDxRadioGroupD,
  AgeDxScrollBarD;

type
  TMainForm = class(TForm)
   AgeGripBar: TAgeGripBarD;
   btnClose: TAgeButtonD;
    AgeDxFormData: TAgeDxFormDataD;
    lbTitle: TAgeLabelD;
    btnFile1: TAgeButtonD;
    btnFile2: TAgeButtonD;
    btnFile3: TAgeButtonD;
    btnFile4: TAgeButtonD;
    btnFile5: TAgeButtonD;
    btnFile6: TAgeButtonD;
    btnGO: TAgeButtonD;
    lbDesc: TAgeLabelD;
    btnSide1: TAgeButtonD;
    btnSide1Fac1: TAgeButtonD;    
    btnSide1Fac2: TAgeButtonD;
    btnSide1Fac3: TAgeButtonD;
    btnSide1Fac4: TAgeButtonD;
    btnSide1Fac5: TAgeButtonD;
    btnSide1Fac6: TAgeButtonD;
    btnSide1Fac7: TAgeButtonD;
    btnSide1Fac8: TAgeButtonD;
    btnSide1Fac9: TAgeButtonD;
    btnSide1Fac10: TAgeButtonD;
    btnSide1Fac11: TAgeButtonD;
    btnSide1Fac12: TAgeButtonD;
    btnSide1Fac13: TAgeButtonD;
    btnSide1Fac14: TAgeButtonD;
    btnSide1Fac15  TAgeButtonD;
    btnSide1Fac16: TAgeButtonD;
    btnSide1Fac17: TAgeButtonD;
    btnSide1Fac18: TAgeButtonD;
    btnSide1Fac19: TAgeButtonD;
    btnSide1Fac20: TAgeButtonD;
    btnSide1Fac21: TAgeButtonD;
    btnSide1Fac22: TAgeButtonD;
    btnSide1Fac23: TAgeButtonD;
    btnSide1Fac24: TAgeButtonD;
    btnSide1Fac25: TAgeButtonD;
    btnSide1Fac26: TAgeButtonD;
    btnSide1Fac27: TAgeButtonD;
    btnSide1Fac28: TAgeButtonD;
    btnSide1Fac29: TAgeButtonD;
    btnSide1Fac30: TAgeButtonD;
    lbScenChoosen: TAgeLabelD;   
    lbDuration: TAgeLabelD;
    btnTypeScen: TAgeButtonD;
    btnTutorials: TAgeButtonD;
    btnAllFiles: TAgeButtonD;
    btnScenarios: TAgeButtonD;
    btnCampaigns: TAgeButtonD;
    AgeScrollBarD1: TAgeScrollBarD;
    imgSeparatorCenter: TAgeImageD;
    imgSeparatorTop: TAgeImageD;
    btnSide2: TAgeButtonD;
    btnSide2Fac1: TAgeButtonD;
    btnSide2Fac2: TAgeButtonD;
    btnSide2Fac3: TAgeButtonD;   
    btnSide2Fac4: TAgeButtonD;
    btnSide2Fac5: TAgeButtonD;
    btnSide2Fac6: TAgeButtonD;
    btnSide2Fac7: TAgeButtonD;
    btnSide2Fac8: TAgeButtonD;
    btnSide2Fac9: TAgeButtonD;
    btnSide2Fac10: TAgeButtonD;
    btnSide2Fac11: TAgeButtonD;
    btnSide2Fac12: TAgeButtonD;
    btnSide2Fac13: TAgeButtonD;
    btnSide2Fac14: TAgeButtonD;
    btnSide2Fac15  TAgeButtonD;
    btnSide2Fac16: TAgeButtonD;
    btnSide2Fac17: TAgeButtonD;
    btnSide2Fac18: TAgeButtonD;
    btnSide2Fac19: TAgeButtonD;
    btnSide2Fac20: TAgeButtonD;
    btnSide2Fac21: TAgeButtonD;
    btnSide2Fac22: TAgeButtonD;
    btnSide2Fac23: TAgeButtonD;
    btnSide2Fac24: TAgeButtonD;
    btnSide2Fac25: TAgeButtonD;
    btnSide2Fac26: TAgeButtonD;
    btnSide2Fac27: TAgeButtonD;
    btnSide2Fac28: TAgeButtonD;
    btnSide2Fac29: TAgeButtonD;
    btnSide2Fac30: TAgeButtonD;   
    lbVictoryConditions: TAgeLabelD;
    lbSelectSide: TAgeLabelD;
    imgDiff1: TAgeImageD;
    imgDiff2: TAgeImageD;
    imgDiff3: TAgeImageD;
    imgDiff4: TAgeImageD;
    imgDiff5: TAgeImageD;
    imgDiff6: TAgeImageD;
    lbFile1: TAgeLabelD;
    lbFile2: TAgeLabelD;
    lbFile3: TAgeLabelD;
    lbFile4: TAgeLabelD;
    lbFile5: TAgeLabelD;
    lbFile6: TAgeLabelD;
    btnSide3: TAgeButtonD;
    btnSide3Fac4: TAgeButtonD; 
    btnSide3Fac2: TAgeButtonD;
    btnSide3Fac3: TAgeButtonD;
    btnSide3Fac1: TAgeButtonD;
    btnSide3Fac4: TAgeButtonD;
    btnSide3Fac5: TAgeButtonD;
    btnSide3Fac6: TAgeButtonD;
    btnSide3Fac7: TAgeButtonD;
    btnSide3Fac8: TAgeButtonD;
    btnSide3Fac9: TAgeButtonD;
    btnSide3Fac10: TAgeButtonD;
    btnSide3Fac11: TAgeButtonD;
    btnSide3Fac12: TAgeButtonD;
    btnSide3Fac13: TAgeButtonD;
    btnSide3Fac14: TAgeButtonD;
    btnSide3Fac15  TAgeButtonD;
    btnSide3Fac16: TAgeButtonD;
    btnSide3Fac17: TAgeButtonD;
    btnSide3Fac18: TAgeButtonD;
    btnSide3Fac19: TAgeButtonD;
    btnSide3Fac20: TAgeButtonD;
    btnSide3Fac21: TAgeButtonD;
    btnSide3Fac22: TAgeButtonD;
    btnSide3Fac23: TAgeButtonD;
    btnSide3Fac24: TAgeButtonD;
    btnSide3Fac25: TAgeButtonD;
    btnSide3Fac26: TAgeButtonD;
    btnSide3Fac27: TAgeButtonD;
    btnSide3Fac28: TAgeButtonD;
    btnSide3Fac29: TAgeButtonD;
    btnSide3Fac30: TAgeButtonD;
  private
    { Déclarations privées }
  public
    { Déclarations publiques }
  end;

var
  MainForm: TMainForm;

implementation

{$R *.dfm}

end.
