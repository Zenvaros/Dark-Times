Unit GUIDecisionsPanel;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD, AgeDxScrollBarD;

type
  TMainForm = class(TForm)
   AgeDxFormData: TAgeDxFormDataD;
    lbPanelTitle: TAgeLabelD;

    lbDecision0: TAgeLabelD;
    lbDecision1: TAgeLabelD;
    lbDecision2: TAgeLabelD;
    lbDecision3: TAgeLabelD;
    lbDecision4: TAgeLabelD;
    lbDecision5: TAgeLabelD;
    lbDecision6: TAgeLabelD;
    lbDecision7: TAgeLabelD;
    lbDecision8: TAgeLabelD;
    lbDecision9: TAgeLabelD;
    lbDecision10: TAgeLabelD;
    lbDecision11: TAgeLabelD;

    btnBack0: TAgeButtonD;
    btnBack1: TAgeButtonD;
    btnBack2: TAgeButtonD;
    btnBack3: TAgeButtonD;
    btnBack4: TAgeButtonD;
    btnBack5: TAgeButtonD;
    btnBack6: TAgeButtonD;
    btnBack7: TAgeButtonD;
    btnBack8: TAgeButtonD;
    btnBack9: TAgeButtonD;
    btnBack10: TAgeButtonD;
    btnBack11: TAgeButtonD;

    btnDecision0: TAgeButtonD;
    btnDecision1: TAgeButtonD;
    btnDecision2: TAgeButtonD;
    btnDecision3: TAgeButtonD;
    btnDecision4: TAgeButtonD;
    btnDecision5: TAgeButtonD;
    btnDecision6: TAgeButtonD;
    btnDecision7: TAgeButtonD;
    btnDecision8: TAgeButtonD;
    btnDecision9: TAgeButtonD;
    btnDecision10: TAgeButtonD;
    btnDecision11: TAgeButtonD;

    btnDecisionPlate0: TAgeButtonD;
    btnDecisionPlate1: TAgeButtonD;
    btnDecisionPlate2: TAgeButtonD;
    btnDecisionPlate3: TAgeButtonD;
    btnDecisionPlate4: TAgeButtonD;
    btnDecisionPlate5: TAgeButtonD;
    btnDecisionPlate6: TAgeButtonD;
    btnDecisionPlate7: TAgeButtonD;
    btnDecisionPlate8: TAgeButtonD;
    btnDecisionPlate9: TAgeButtonD;
    btnDecisionPlate10: TAgeButtonD;
    btnDecisionPlate11: TAgeButtonD;

    imgSelector00: TAgeImageD;
    imgSelector01: TAgeImageD;
    imgSelector02: TAgeImageD;
    imgSelector03: TAgeImageD;
    imgSelector04: TAgeImageD;
    imgSelector05: TAgeImageD;
    imgSelector06: TAgeImageD;
    imgSelector07: TAgeImageD;
    imgSelector08: TAgeImageD;
    imgSelector09: TAgeImageD;
    imgSelector10: TAgeImageD;
    imgSelector11: TAgeImageD;

    imgRGDback_FP0: TAgeImageD;
    imgRGDback_FP1: TAgeImageD;
    imgRGDback_FP2: TAgeImageD;
    imgRGDback_FP3: TAgeImageD;
    imgRGDback_FP4: TAgeImageD;
    imgRGDback_FP5: TAgeImageD;
    imgRGDback_FP6: TAgeImageD;
    imgRGDback_FP7: TAgeImageD;
    imgRGDback_FP8: TAgeImageD;
    imgRGDback_FP9: TAgeImageD;
    imgRGDback_FP10: TAgeImageD;
    imgRGDback_FP11: TAgeImageD;

    lbRGD_FP0: TAgeLabelD;
    lbRGD_FP1: TAgeLabelD;
    lbRGD_FP2: TAgeLabelD;
    lbRGD_FP3: TAgeLabelD;
    lbRGD_FP4: TAgeLabelD;
    lbRGD_FP5: TAgeLabelD;
    lbRGD_FP6: TAgeLabelD;
    lbRGD_FP7: TAgeLabelD;
    lbRGD_FP8: TAgeLabelD;
    lbRGD_FP9: TAgeLabelD;
    lbRGD_FP10: TAgeLabelD;
    lbRGD_FP11: TAgeLabelD;

    btnFilterMenu: TAgeButtonD;
    btnFilter0: TAgeButtonD;
    btnFilter1: TAgeButtonD;
    btnFilter2: TAgeButtonD;
    btnFilter3: TAgeButtonD;
    btnFilter4: TAgeButtonD;
    btnFilter5: TAgeButtonD;
    btnFilter6: TAgeButtonD;

    btnArrowLeft: TAgeButtonD;
    btnArrowRight: TAgeButtonD;

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
