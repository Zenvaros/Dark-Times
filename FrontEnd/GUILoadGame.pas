Unit GUILoadGame;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD, AgeDxRadioGroupD,
  AgeDxScrollBarD;

type
  TMainForm = class(TForm)
    lbTitle: TAgeLabelD;
    btnFileDelete: TAgeButtonD;
    btnFileRestore: TAgeButtonD;
    btnFileService: TAgeButtonD;
    btnFileRename: TAgeButtonD;
    lbDesc: TAgeLabelD;
    lbScenChoosen: TAgeLabelD;
    lbDuration: TAgeLabelD;
    lbVictoryConditions: TAgeLabelD;
    AgeGripBarD1: TAgeGripBarD;
    btnClose: TAgeButtonD;
    btnFile1: TAgeButtonD;
    btnFile2: TAgeButtonD;
    btnFile3: TAgeButtonD;
    btnFile4: TAgeButtonD;
    btnFile5: TAgeButtonD;
    btnFile6: TAgeButtonD;
    btnSide1: TAgeButtonD;
    btnSide1Fac2: TAgeButtonD;
    btnSide1Fac3: TAgeButtonD;
    btnSide2: TAgeButtonD;
    btnSide2Fac2: TAgeButtonD;
    btnSide2Fac3: TAgeButtonD;
    btnTypeScen: TAgeButtonD;
    btnTutorials: TAgeButtonD;
    btnAllFiles: TAgeButtonD;
    btnScenarios: TAgeButtonD;
    btnCampaigns: TAgeButtonD;
    AgeScrollBarD1: TAgeScrollBarD;
    imgSeparatorCenter: TAgeImageD;
    imgSeparatorTop: TAgeImageD;
    btnSide1Fac1: TAgeButtonD;
    btnSide2Fac1: TAgeButtonD;
    btnSide1Fac4: TAgeButtonD;
    btnSide2Fac4: TAgeButtonD;
    AgeDxFormData: TAgeDxFormDataD;
    imgDiff1: TAgeImageD;
    imgDiff2: TAgeImageD;
    imgDiff3: TAgeImageD;
    imgDiff4: TAgeImageD;
    imgDiff5: TAgeImageD;
    imgDiff6: TAgeImageD;
    lbSelectSide: TAgeLabelD;
    lbFile2: TAgeLabelD;
    lbFile3: TAgeLabelD;
    lbFile4: TAgeLabelD;
    lbFile5: TAgeLabelD;
    lbFile6: TAgeLabelD;
    lbFile1: TAgeLabelD;
    btnOrders1: TAgeButtonD;
    btnOrders2: TAgeButtonD;
    btnGO: TAgeButtonD;
    btnSide3: TAgeButtonD;
    btnSide3Fac4: TAgeButtonD;
    btnSide3Fac3: TAgeButtonD;
    btnSide3Fac2: TAgeButtonD;
    btnSide3Fac1: TAgeButtonD;
    btnOrders3: TAgeButtonD;
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
