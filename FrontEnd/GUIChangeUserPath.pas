Unit GUIChangeUserPath;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD;

type
  TMainForm = class(TForm)
    AgeDxFormData: TAgeDxFormDataD;
    imgBack: TAgeImageD;
    lbTitle: TAgeLabelD;
  private
    { D�clarations priv�es }
  public
    { D�clarations publiques }
  end;

var
  MainForm: TMainForm;

implementation

{$R *.dfm}

end.
