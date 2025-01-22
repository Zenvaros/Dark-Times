Unit GUIForcesList;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD;

type
  TMainForm = class(TForm)
   AgeGripBar: TAgeGripBarD;
   AgeDxFormDataD: TAgeDxFormDataD;
    lbTitle: TAgeLabelD;
    lbBackgroundLeft: TAgeLabelD;
    lbBackgroundRight: TAgeLabelD;
    lbScenName: TAgeLabelD;
    imgFiller: TAgeImageD;
    imgLedgerTab8: TAgeButtonD;
    imgLedgerTab9: TAgeButtonD;
    imgLedgerTab7: TAgeButtonD;
    imgLedgerTab6: TAgeButtonD;
    imgLedgerTab5: TAgeButtonD;
    imgLedgerTab4: TAgeButtonD;
    imgLedgerTab3: TAgeButtonD;
    imgLedgerTab2: TAgeButtonD;
    imgLedgerTab1: TAgeButtonD;
    imgLedgerTab0: TAgeButtonD;
    btnClose: TAgeButtonD;
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
