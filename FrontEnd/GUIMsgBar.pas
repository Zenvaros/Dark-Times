Unit GUIMsgBar;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD;

type
  TMainForm = class(TForm)
   AgeGripBar: TAgeGripBarD;
    AgeDxFormData: TAgeDxFormDataD;
    btnMsgCat2: TAgeButtonD;
    btnMsgCat5: TAgeButtonD;
    btnMsgCat1: TAgeButtonD;
    btnMsgCat3: TAgeButtonD;
    btnMsgCat4: TAgeButtonD;
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
