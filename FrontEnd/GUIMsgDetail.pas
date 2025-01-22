Unit GUIMsgDetail;
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
    imgBack: TAgeImageD;
    lbTitle: TAgeLabelD;
    imgPicture: TAgeImageD;
    lbDate: TAgeLabelD;
    lbText: TAgeLabelD;
    imgSeparator: TAgeImageD;
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
