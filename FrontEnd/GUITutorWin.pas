Unit GUITutorWin;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD;

type
  TMainForm = class(TForm)
   AgeGripBar: TAgeGripBarD;
   btnClose: TAgeButtonD;
    AgeDxFormData: TAgeDxFormDataD;
    lbTitle: TAgeLabelD;
    lbText: TAgeLabelD;
    btnLeft: TAgeButtonD;
    btnRight: TAgeButtonD;
    btnExtraImage: TAgeButtonD;
    btnArrowLeft: TAgeButtonD;
    btnArrowBottom: TAgeButtonD;
    btnArrowRight: TAgeButtonD;
    btnArrowTop: TAgeButtonD;
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
