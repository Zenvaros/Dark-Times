Unit GUIWarmap;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD;

type
  TMainForm15 = class(TForm)
   AgeGripBar: TAgeGripBarD;
   AgeDxFormDataD1: TAgeDxFormDataD;
    imgBack: TAgeImageD;
    imgWarmap: TAgeImageD;
    lbTitle: TAgeLabelD;
    btnClose: TAgeButtonD;
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

    btnFilter1: TAgeButtonD;
    btnFilter2: TAgeButtonD;
    btnFilter3: TAgeButtonD;
    btnFilter4: TAgeButtonD;
    lbFilterSelected: TAgeLabelD;
  private
    { Déclarations privées }
  public
    { Déclarations publiques }
  end;

var
  MainForm15: TMainForm15;

implementation

{$R *.dfm}

end.
