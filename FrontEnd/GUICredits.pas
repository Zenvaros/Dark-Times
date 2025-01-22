Unit GUICredits;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD;

type
  TMainForm = class(TForm)
   AgeGripBar: TAgeGripBarD;
    AgeDxFormData: TAgeDxFormDataD;
    lbVersion: TAgeLabelD;
    imgCredit0: TAgeImageD;
    imgCredit1: TAgeImageD;
    imgCredit2: TAgeImageD;
    imgCredit3: TAgeImageD;
    imgCredit5: TAgeImageD;
    imgCredit6: TAgeImageD;
    btnClose: TAgeButtonD;
    imgSeparatorTop: TAgeImageD;
    lbTitle: TAgeLabelD;
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
