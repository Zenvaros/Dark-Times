Unit GUIRecruitPanel;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD, AgeDxScrollBarD;

type
  TMainForm = class(TForm)
   AgeDxFormData: TAgeDxFormDataD;
    lbPanelTitle: TAgeLabelD;

    lbUnit0: TAgeLabelD;
    lbUnit1: TAgeLabelD;
    lbUnit2: TAgeLabelD;
    lbUnit3: TAgeLabelD;
    lbUnit4: TAgeLabelD;
    lbUnit5: TAgeLabelD;
    lbUnit6: TAgeLabelD;
    lbUnit7: TAgeLabelD;
    lbUnit8: TAgeLabelD;
    lbUnit9: TAgeLabelD;
    lbUnit10: TAgeLabelD;
    lbUnit11: TAgeLabelD;

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

    btnUnit0: TAgeButtonD;
    btnUnit1: TAgeButtonD;
    btnUnit2: TAgeButtonD;
    btnUnit3: TAgeButtonD;
    btnUnit4: TAgeButtonD;
    btnUnit5: TAgeButtonD;
    btnUnit6: TAgeButtonD;
    btnUnit7: TAgeButtonD;
    btnUnit8: TAgeButtonD;
    btnUnit9: TAgeButtonD;
    btnUnit10: TAgeButtonD;
    btnUnit11: TAgeButtonD;

    btnUnitPlate0: TAgeButtonD;
    btnUnitPlate1: TAgeButtonD;
    btnUnitPlate2: TAgeButtonD;
    btnUnitPlate3: TAgeButtonD;
    btnUnitPlate4: TAgeButtonD;
    btnUnitPlate5: TAgeButtonD;
    btnUnitPlate6: TAgeButtonD;
    btnUnitPlate7: TAgeButtonD;
    btnUnitPlate8: TAgeButtonD;
    btnUnitPlate9: TAgeButtonD;
    btnUnitPlate10: TAgeButtonD;
    btnUnitPlate11: TAgeButtonD;

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

    imgUnitback_FP0: TAgeImageD;
    imgUnitback_FP1: TAgeImageD;
    imgUnitback_FP2: TAgeImageD;
    imgUnitback_FP3: TAgeImageD;
    imgUnitback_FP4: TAgeImageD;
    imgUnitback_FP5: TAgeImageD;
    imgUnitback_FP6: TAgeImageD;
    imgUnitback_FP7: TAgeImageD;
    imgUnitback_FP8: TAgeImageD;
    imgUnitback_FP9: TAgeImageD;
    imgUnitback_FP10: TAgeImageD;
    imgUnitback_FP11: TAgeImageD;

    lbUnit_FP0: TAgeLabelD;
    lbUnit_FP1: TAgeLabelD;
    lbUnit_FP2: TAgeLabelD;
    lbUnit_FP3: TAgeLabelD;
    lbUnit_FP4: TAgeLabelD;
    lbUnit_FP5: TAgeLabelD;
    lbUnit_FP6: TAgeLabelD;
    lbUnit_FP7: TAgeLabelD;
    lbUnit_FP8: TAgeLabelD;
    lbUnit_FP9: TAgeLabelD;
    lbUnit_FP10: TAgeLabelD;
    lbUnit_FP11: TAgeLabelD;

    imgUnitback_Combat0: TAgeImageD;
    imgUnitback_Combat1: TAgeImageD;
    imgUnitback_Combat2: TAgeImageD;
    imgUnitback_Combat3: TAgeImageD;
    imgUnitback_Combat4: TAgeImageD;
    imgUnitback_Combat5: TAgeImageD;
    imgUnitback_Combat6: TAgeImageD;
    imgUnitback_Combat7: TAgeImageD;
    imgUnitback_Combat8: TAgeImageD;
    imgUnitback_Combat9: TAgeImageD;
    imgUnitback_Combat10: TAgeImageD;
    imgUnitback_Combat11: TAgeImageD;

    lbUnit_Combat0: TAgeLabelD;
    lbUnit_Combat1: TAgeLabelD;
    lbUnit_Combat2: TAgeLabelD;
    lbUnit_Combat3: TAgeLabelD;
    lbUnit_Combat4: TAgeLabelD;
    lbUnit_Combat5: TAgeLabelD;
    lbUnit_Combat6: TAgeLabelD;
    lbUnit_Combat7: TAgeLabelD;
    lbUnit_Combat8: TAgeLabelD;
    lbUnit_Combat9: TAgeLabelD;
    lbUnit_Combat10: TAgeLabelD;
    lbUnit_Combat11: TAgeLabelD;

    btnNato0: TAgeButtonD;
    btnNato1: TAgeButtonD;
    btnNato2: TAgeButtonD;
    btnNato3: TAgeButtonD;
    btnNato4: TAgeButtonD;
    btnNato5: TAgeButtonD;
    btnNato6: TAgeButtonD;
    btnNato7: TAgeButtonD;
    btnNato8: TAgeButtonD;
    btnNato9: TAgeButtonD;
    btnNato10: TAgeButtonD;
    btnNato11: TAgeButtonD;

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

    btnSecFilterMenu: TAgeButtonD;
    btnSecFilter0: TAgeButtonD;
    btnSecFilter1: TAgeButtonD;
    btnSecFilter2: TAgeButtonD;
    btnSecFilter3: TAgeButtonD;
    btnSecFilter4: TAgeButtonD;
    btnSecFilter5: TAgeButtonD;
    btnSecFilter6: TAgeButtonD;
    btnSecFilter7: TAgeButtonD;
    btnSecFilter8: TAgeButtonD;
    btnSecFilter9: TAgeButtonD;
    btnSecFilter10: TAgeButtonD;
    btnSecFilter11: TAgeButtonD;
    btnSecFilter12: TAgeButtonD;
    btnSecFilter13: TAgeButtonD;
    btnSecFilter14: TAgeButtonD;
    btnSecFilter15: TAgeButtonD;
    btnSecFilter16: TAgeButtonD;
    btnSecFilter17: TAgeButtonD;
    btnSecFilter18: TAgeButtonD;
    btnSecFilter19: TAgeButtonD;

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
