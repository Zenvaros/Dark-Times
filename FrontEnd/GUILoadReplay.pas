Unit GUILoadReplay;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD, AgeDxRadioGroupD,
  AgeDxScrollBarD;

type
  TMainForm = class(TForm)
   AgeGripBar: TAgeGripBarD;
    AgeDxFormData: TAgeDxFormDataD;
    lbTitle: TAgeLabelD;
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
