Unit GUITopLeft;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD;

type
  TMainForm = class(TForm)
   AgeDxFormData: TAgeDxFormDataD;
   btn_Flag: TAgeButtonD;

   btn_act_ToProduction: TAgeButtonD;
   btn_act_ToDecision: TAgeButtonD; 
   btn_act_ToLedger: TAgeButtonD; 

   btn_VP: TAgeButtonD;
   lb_VP: TAgeLabelD;
   btn_Morale: TAgeButtonD;
   lb_Morale: TAgeLabelD;

   btn_Money: TAgeButtonD;
   lb_Money: TAgeLabelD;
   btn_Conscript: TAgeButtonD;
   lb_Conscript: TAgeLabelD;
   btn_WSU: TAgeButtonD;
   lb_WSU: TAgeLabelD;
   btn_Rail: TAgeButtonD;
   lb_Rail: TAgeLabelD;
    btn_EP: TAgeButtonD;
    lb_EP: TAgeLabelD;

   img_back_Header: TAgeImageD;
    lb_Ammos: TAgeLabelD;
    btn_Ammos: TAgeButtonD;
	btn_River: TAgeButtonD;
	lb_River: TAgeLabelD;

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
