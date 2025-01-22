Unit GUIBottomLeft;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD;

type
  TMainForm = class(TForm)
   AgeDxFormData: TAgeDxFormDataD;
   img_back_Footer: TAgeImageD;

   btn_FilterMenu: TAgeButtonD;
   btn_Filter0: TAgeButtonD;
   btn_Filter1: TAgeButtonD;
   btn_filter2: TAgeButtonD;
   btn_filter3: TAgeButtonD;
   btn_filter4: TAgeButtonD;
   btn_filter5: TAgeButtonD;
   btn_filter6: TAgeButtonD;
   btn_filter7: TAgeButtonD;
   btn_filter8: TAgeButtonD;

   img_Landscape: TAgeImageD;

   btn_region_Supply: TAgeButtonD;
   lb_region_Supply: TAgeLabelD;
   btn_region_Ammo: TAgeButtonD;
   lb_region_Ammo: TAgeLabelD;

   img_region_Weather: TAgeImageD;
   lb_region_Terrain: TAgeLabelD;
   lb_region_Terrain_Shadow: TAgeLabelD;
    imgForeground: TAgeImageD;

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
