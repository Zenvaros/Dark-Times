Unit GUIScoreWin;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, ExtCtrls, AgeDxImageD, AgeDxLabelD,
  AgeDxButtonD, AgeDxGripBarD, AgeDxRadioGroupD, jpeg, AgeDxTmpImageD,
  AgeDxScrollBarD;

type
  TMainForm = class(TForm)
    lbScoreWinTitle: TAgeLabelD;
    imgColonial: TAgeImageD;
    imgCommerce: TAgeImageD;
    imgSocial: TAgeImageD;
    imgMilitary: TAgeImageD;
    imgEconomy: TAgeImageD;
    imgDiplomacy: TAgeImageD;
    lbEconomyTitle: TAgeLabelD;
    lbDiplomacyTitle: TAgeLabelD;
    lbMilitaryTitle: TAgeLabelD;
    lbCommerceTitle: TAgeLabelD;
    lbColonialTitle: TAgeLabelD;
    lbSocialTitle: TAgeLabelD;
    lbPrestigeLabel: TAgeLabelD;
    imgGeneral: TAgeImageD;
    imgEvent: TAgeImageD;
    AgeGripBar: TAgeGripBarD;
    lbGameDescriptionTitle: TAgeLabelD;
    btnClose: TAgeButtonD;
    procedure lbEconomyTitleClick(Sender: TObject);

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
