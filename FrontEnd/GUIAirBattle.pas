Unit GUIAirBattle;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, ExtCtrls, AgeDxImageD, AgeDxLabelD,
  AgeDxButtonD, AgeDxGripBarD, AgeDxRadioGroupD;

type
  TMainForm = class(TForm)
    AgeDxFormDataD1: TAgeDxFormDataD;
    btClose: TAgeButtonD;
    lbAirBattleTitle: TAgeLabelD;
    lbStartSide1Title: TAgeLabelD;
    lbStartSide2Title: TAgeLabelD;
    lbInsertSide1Title: TAgeLabelD;
    lbInsertSide2Title: TAgeLabelD;
    lbEndSide1Title: TAgeLabelD;
    lbEndSide2Title: TAgeLabelD;
    btDynEventReport: TAgeButtonD;
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
