Unit GUIMultichoiceWin;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, AgeDxImageD, AgeDxLabelD, AgeDxButtonD,
  ExtCtrls, AgeDxGripBarD;

type
  TMainForm14 = class(TForm)
   AgeGripBar: TAgeGripBarD;
   btnClose: TAgeButtonD;
   lbMultiChoiceTitle: TAgeLabelD;
   tzMultiChoiceText: TAgeLabelD;
   imgPhotoEvent: TAgeImageD;
   imgTextBg: TAgeImageD;
   imgChoiceBg1: TAgeImageD;
   lbChoiceText1: TAgeLabelD;
   btnChoice1: TAgeButtonD;
   imgChoiceBg2: TAgeImageD;
   lbChoiceText2: TAgeLabelD;
   btnChoice2: TAgeButtonD;
   imgChoiceBg3: TAgeImageD;
   lbChoiceText3: TAgeLabelD;
   btnChoice3: TAgeButtonD;
   imgChoiceBg4: TAgeImageD;
   lbChoiceText4: TAgeLabelD;
   btnChoice4: TAgeButtonD;
   AgeDxFormDataD: TAgeDxFormDataD;
  private
    { Déclarations privées }
  public
    { Déclarations publiques }
  end;

var
  MainForm14: TMainForm14;

implementation

{$R *.dfm}

end.
