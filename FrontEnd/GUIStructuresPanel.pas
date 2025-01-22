Unit GUIStructuresPanel;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD, AgeDxScrollBarD;

type
  TMainForm = class(TForm)
   AgeDxFormData: TAgeDxFormDataD;
    lbRegionTitle: TAgeLabelD;

    lbStructure0: TAgeLabelD;
    lbStructure1: TAgeLabelD;
    lbStructure2: TAgeLabelD;
    lbStructure3: TAgeLabelD;
    lbStructure4: TAgeLabelD;
    lbStructure5: TAgeLabelD;
    lbStructure6: TAgeLabelD;
    lbStructure7: TAgeLabelD;
    lbStructure8: TAgeLabelD;
    lbStructure9: TAgeLabelD;
    lbStructure10: TAgeLabelD;
    lbStructure11: TAgeLabelD;

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

    btnStructure0: TAgeButtonD;
    btnStructure1: TAgeButtonD;
    btnStructure2: TAgeButtonD;
    btnStructure3: TAgeButtonD;
    btnStructure4: TAgeButtonD;
    btnStructure5: TAgeButtonD;
    btnStructure6: TAgeButtonD;
    btnStructure7: TAgeButtonD;
    btnStructure8: TAgeButtonD;
    btnStructure9: TAgeButtonD;
    btnStructure10: TAgeButtonD;
    btnStructure11: TAgeButtonD;

    btnStructurePlate0: TAgeButtonD;
    btnStructurePlate1: TAgeButtonD;
    btnStructurePlate2: TAgeButtonD;
    btnStructurePlate3: TAgeButtonD;
    btnStructurePlate4: TAgeButtonD;
    btnStructurePlate5: TAgeButtonD;
    btnStructurePlate6: TAgeButtonD;
    btnStructurePlate7: TAgeButtonD;
    btnStructurePlate8: TAgeButtonD;
    btnStructurePlate9: TAgeButtonD;
    btnStructurePlate10: TAgeButtonD;
    btnStructurePlate11: TAgeButtonD;

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
