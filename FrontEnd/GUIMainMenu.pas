Unit GUITopBarUpg;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD;

type
  TMainForm = class(TForm)
    AgeDxFormData: TAgeDxFormDataD;
    btnNewGame: TAgeButtonD;
    btnLoadGame: TAgeButtonD;
	  btnSaveGame: TAgeButtonD;
    btnContinue: TAgeButtonD;
    btnCredits: TAgeButtonD;
    btnOptions: TAgeButtonD;
    btnCommunity: TAgeButtonD;
    btnQuit: TAgeButtonD;
	  btnReplay: TAgeButtonD;
	  imgLogo: TAgeImageD;
    imgLogo2: TAgeImageD;
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
