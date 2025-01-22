Unit GUIMsgCat;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD, AgeDxScrollBarD;

type
  TMainForm = class(TForm)
   AgeGripBar: TAgeGripBarD;
   btnClose: TAgeButtonD;
    AgeDxFormData: TAgeDxFormDataD;
    lbTitle: TAgeLabelD;
    lbMsg1: TAgeLabelD;
    AgeScrollBarD1: TAgeScrollBarD;
    btnMsg1: TAgeButtonD;
    lbMsg2: TAgeLabelD;
    btnMsg2: TAgeButtonD;
    lbMsg3: TAgeLabelD;
    btnMsg3: TAgeButtonD;
    lbMsg4: TAgeLabelD;
    btnMsg4: TAgeButtonD;
    lbMsg5: TAgeLabelD;
    btnMsg5: TAgeButtonD;
    lbMsg6: TAgeLabelD;
    btnMsg6: TAgeButtonD;
    btnMsgCat1: TAgeButtonD;
    btnMsgCat2: TAgeButtonD;
    btnMsgCat3: TAgeButtonD;
    btnMsgCat4: TAgeButtonD;
    btnMsgCat5: TAgeButtonD;
    btnMsgCat6: TAgeButtonD;
    btnNumMsg1: TAgeButtonD;
    btnNumMsg2: TAgeButtonD;
    btnNumMsg3: TAgeButtonD;
    btnNumMsg4: TAgeButtonD;
    btnNumMsg5: TAgeButtonD;
    btnNumMsg6: TAgeButtonD;
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
