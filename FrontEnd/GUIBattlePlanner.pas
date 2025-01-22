Unit GUIBattlePlanner;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD;

type
  TMainForm = class(TForm)
    AgeDxFormData: TAgeDxFormDataD;

    lbTitle: TAgeLabelD;

    imgLeftPortrait: TAgeImageD;
    lbOwnAnalysis: TAgeLabelD;
    imgRightPortrait: TAgeImageD;
    lbEnmAnalysis: TAgeLabelD;

    imgLandscape: TAgeImageD;
    lbRegion_Terrain: TAgeLabelD;
    lbRegion_Terrain_Shadow: TAgeLabelD;
    imgRegion_Weather: TAgeImageD;

    btnOurDeploy_back0: TAgeButtonD;
    btnOurDeploy_back1: TAgeButtonD;
    btnOurDeploy_back2: TAgeButtonD;
    btnOurDeploy_back3: TAgeButtonD;
    btnOurDeploy_back4: TAgeButtonD;

    btnOurDeploy0: TAgeButtonD;
    btnOurDeploy1: TAgeButtonD;
    btnOurDeploy2: TAgeButtonD;
    btnOurDeploy3: TAgeButtonD;
    btnOurDeploy4: TAgeButtonD;

    btnOurPlan_back0: TAgeButtonD;
    btnOurPlan_back1: TAgeButtonD;
    btnOurPlan_back2: TAgeButtonD;
    btnOurPlan_back3: TAgeButtonD;
    btnOurPlan_back4: TAgeButtonD;

    btnOurPlan0: TAgeButtonD;
    btnOurPlan1: TAgeButtonD;
    btnOurPlan2: TAgeButtonD;
    btnOurPlan3: TAgeButtonD;
    btnOurPlan4: TAgeButtonD;

    lbOurDeployText: TAgeLabelD;
    lbOurPlanText: TAgeLabelD;
    lbEnmPlanText: TAgeLabelD;

    btnEnmDeploy_back0: TAgeButtonD;

    btnEnmDeploy0: TAgeButtonD;

    btnEnmPlan_back0: TAgeButtonD;
    btnEnmPlan_back1: TAgeButtonD;
    btnEnmPlan_back2: TAgeButtonD;
    btnEnmPlan_back3: TAgeButtonD;
    btnEnmPlan_back4: TAgeButtonD;

    btnEnmPlan0: TAgeButtonD;
    btnEnmPlan1: TAgeButtonD;
    btnEnmPlan2: TAgeButtonD;
    btnEnmPlan3: TAgeButtonD;
    btnEnmPlan4: TAgeButtonD;

    btnCancelDeploy: TAgeButtonD;
    btnCancelPlan: TAgeButtonD;
    btnCancelSelection: TAgeButtonD;
    btnCommitSelection: TAgeButtonD;
    btnHelper: TAgeButtonD;
    lbHelpText: TAgeLabelD;
    imgLeftLeader0: TAgeImageD;
    imgLeftLeader1: TAgeImageD;
    imgLeftLeader2: TAgeImageD;
    imgRightLeader2: TAgeImageD;
    imgRightLeader1: TAgeImageD;
    imgRightLeader0: TAgeImageD;

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
