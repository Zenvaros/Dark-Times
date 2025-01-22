Unit GUICombatGauge;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, jpeg, ExtCtrls, AgeDxFormDataD, AgeDxImageD, AgeDxLabelD,
  PngImage;

type
  TMainForm10 = class(TForm)
   lbCurrentDay: TAgeLabelD;
   lbCurrentRange: TAgeLabelD;
   lbAttackName: TAgeLabelD;
    lbDefenserName: TAgeLabelD;
    tzCombatLog_unusedCW2: TAgeLabelD;
   imgAttackPortrait: TAgeImageD;
   imgDefencerPortrait: TAgeImageD;
   ImgAttackFlag: TAgeImageD;
   imgDefenserFlag: TAgeImageD;
   imgCombatGauge: TAgeImageD;
   imgREntranchLvl: TAgeImageD;
   lbREntranchLvl: TAgeLabelD;
   imgLEntranchLvl: TAgeImageD;
   lbLEntranchLvl: TAgeLabelD;
   AgeDxFormDataD1: TAgeDxFormDataD;
    aaaHelpingImage: TImage;
    lbTitle: TAgeLabelD;
  private
    { Déclarations privées }
  public
    { Déclarations publiques }
  end;

var
  MainForm10: TMainForm10;

implementation

{$R *.dfm}

end.
