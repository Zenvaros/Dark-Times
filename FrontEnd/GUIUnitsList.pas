Unit GUIUnitsList;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD, AgeDxScrollBarD;

type
  TMainForm = class(TForm)
    AgeGripBar: TAgeGripBarD;
    btnClose: TAgeButtonD;
    AgeDxFormDataD: TAgeDxFormDataD;
    lbTitle: TAgeLabelD;
    AgeGripBar: TAgeGripBarD;
    btnClose: TAgeButtonD;
    imgFacTagBack1: TAgeImageD;
    imgFacTagBack2: TAgeImageD;
    imgFacTagBack3: TAgeImageD;
    imgFacTagBack4: TAgeImageD;
    imgFacTagBack5: TAgeImageD;
    imgFacTagBack6: TAgeImageD;
    imgFacTagBack7: TAgeImageD;
    imgFacTagBack8: TAgeImageD;
    imgFacTagBack9: TAgeImageD;
    imgFacTagBack10: TAgeImageD;
    imgFacTagBack11: TAgeImageD;
    imgFacTagBack12: TAgeImageD;
    imgFacTagBack13: TAgeImageD;
    imgFacTagBack14: TAgeImageD;
    imgFacTagBack15: TAgeImageD;
    imgFacTagBack16: TAgeImageD;
    imgFacTag1: TAgeImageD;
    imgFacTag2: TAgeImageD;
    imgFacTag3: TAgeImageD;
    imgFacTag4: TAgeImageD;
    imgFacTag5: TAgeImageD;
    imgFacTag6: TAgeImageD;
    imgFacTag7: TAgeImageD;
    imgFacTag8: TAgeImageD;
    imgFacTag9: TAgeImageD;
    imgFacTag10: TAgeImageD;
    imgFacTag11: TAgeImageD;
    imgFacTag12: TAgeImageD;
    imgFacTag13: TAgeImageD;
    imgFacTag14: TAgeImageD;
    imgFacTag15: TAgeImageD;
    imgFacTag16: TAgeImageD;
    lbForceName1: TAgeLabelD;
    lbForceName2: TAgeLabelD;
    lbForceName3: TAgeLabelD;
    lbForceName4: TAgeLabelD;
    lbForceName5: TAgeLabelD;
    lbForceName6: TAgeLabelD;
    lbForceName7: TAgeLabelD;
    lbForceName8: TAgeLabelD;
    lbForceName9: TAgeLabelD;
    lbForceName10: TAgeLabelD;
    lbForceName11: TAgeLabelD;
    lbForceName12: TAgeLabelD;
    lbForceName13: TAgeLabelD;
    lbForceName14: TAgeLabelD;
    lbForceName15: TAgeLabelD;
    lbForceName16: TAgeLabelD;
    lbRegionName1: TAgeLabelD;
    lbRegionName2: TAgeLabelD;
    lbRegionName3: TAgeLabelD;
    lbRegionName4: TAgeLabelD;
    lbRegionName5: TAgeLabelD;
    lbRegionName6: TAgeLabelD;
    lbRegionName7: TAgeLabelD;
    lbRegionName8: TAgeLabelD;
    lbRegionName9: TAgeLabelD;
    lbRegionName10: TAgeLabelD;
    lbRegionName11: TAgeLabelD;
    lbRegionName12: TAgeLabelD;
    lbRegionName13: TAgeLabelD;
    lbRegionName14: TAgeLabelD;
    lbRegionName15: TAgeLabelD;
    lbRegionName16: TAgeLabelD;
    lbGeneralData1: TAgeLabelD;
    lbGeneralData2: TAgeLabelD;
    lbGeneralData3: TAgeLabelD;
    lbGeneralData4: TAgeLabelD;
    lbGeneralData5: TAgeLabelD;
    lbGeneralData6: TAgeLabelD;
    lbGeneralData7: TAgeLabelD;
    lbGeneralData8: TAgeLabelD;
    lbGeneralData9: TAgeLabelD;
    lbGeneralData10: TAgeLabelD;
    lbGeneralData11: TAgeLabelD;
    lbGeneralData12: TAgeLabelD;
    lbGeneralData13: TAgeLabelD;
    lbGeneralData14: TAgeLabelD;
    lbGeneralData15: TAgeLabelD;
    lbGeneralData16: TAgeLabelD;
    imgGeneralRank1: TAgeImageD;
    imgGeneralRank2: TAgeImageD;
    imgGeneralRank3: TAgeImageD;
    imgGeneralRank4: TAgeImageD;
    imgGeneralRank5: TAgeImageD;
    imgGeneralRank6: TAgeImageD;
    imgGeneralRank7: TAgeImageD;
    imgGeneralRank8: TAgeImageD;
    imgGeneralRank9: TAgeImageD;
    imgGeneralRank10: TAgeImageD;
    imgGeneralRank11: TAgeImageD;
    imgGeneralRank12: TAgeImageD;
    imgGeneralRank13: TAgeImageD;
    imgGeneralRank14: TAgeImageD;
    imgGeneralRank15: TAgeImageD;
    imgGeneralRank16: TAgeImageD;
    lbPower1: TAgeLabelD;
    lbPower2: TAgeLabelD;
    lbPower3: TAgeLabelD;
    lbPower4: TAgeLabelD;
    lbPower5: TAgeLabelD;
    lbPower6: TAgeLabelD;
    lbPower7: TAgeLabelD;
    lbPower8: TAgeLabelD;
    lbPower9: TAgeLabelD;
    lbPower10: TAgeLabelD;
    lbPower11: TAgeLabelD;
    lbPower12: TAgeLabelD;
    lbPower13: TAgeLabelD;
    lbPower14: TAgeLabelD;
    lbPower15: TAgeLabelD;
    lbPower16: TAgeLabelD;
    lbPenalty1: TAgeLabelD;
    lbPenalty2: TAgeLabelD;
    lbPenalty3: TAgeLabelD;
    lbPenalty4: TAgeLabelD;
    lbPenalty5: TAgeLabelD;
    lbPenalty6: TAgeLabelD;
    lbPenalty7: TAgeLabelD;
    lbPenalty8: TAgeLabelD;
    lbPenalty9: TAgeLabelD;
    lbPenalty10: TAgeLabelD;
    lbPenalty11: TAgeLabelD;
    lbPenalty12: TAgeLabelD;
    lbPenalty13: TAgeLabelD;
    lbPenalty14: TAgeLabelD;
    lbPenalty15: TAgeLabelD;
    lbPenalty16: TAgeLabelD;
    lbCohesion1: TAgeLabelD;
    lbCohesion2: TAgeLabelD;
    lbCohesion3: TAgeLabelD;
    lbCohesion4: TAgeLabelD;
    lbCohesion5: TAgeLabelD;
    lbCohesion6: TAgeLabelD;
    lbCohesion7: TAgeLabelD;
    lbCohesion8: TAgeLabelD;
    lbCohesion9: TAgeLabelD;
    lbCohesion10: TAgeLabelD;
    lbCohesion11: TAgeLabelD;
    lbCohesion12: TAgeLabelD;
    lbCohesion13: TAgeLabelD;
    lbCohesion14: TAgeLabelD;
    lbCohesion15: TAgeLabelD;
    lbCohesion16: TAgeLabelD;
    lbSupply1: TAgeLabelD;
    lbSupply2: TAgeLabelD;
    lbSupply3: TAgeLabelD;
    lbSupply4: TAgeLabelD;
    lbSupply5: TAgeLabelD;
    lbSupply6: TAgeLabelD;
    lbSupply7: TAgeLabelD;
    lbSupply8: TAgeLabelD;
    lbSupply9: TAgeLabelD;
    lbSupply10: TAgeLabelD;
    lbSupply11: TAgeLabelD;
    lbSupply12: TAgeLabelD;
    lbSupply13: TAgeLabelD;
    lbSupply14: TAgeLabelD;
    lbSupply15: TAgeLabelD;
    lbSupply16: TAgeLabelD;
    lbAmmo1: TAgeLabelD;
    lbAmmo2: TAgeLabelD;
    lbAmmo3: TAgeLabelD;
    lbAmmo4: TAgeLabelD;
    lbAmmo5: TAgeLabelD;
    lbAmmo6: TAgeLabelD;
    lbAmmo7: TAgeLabelD;
    lbAmmo8: TAgeLabelD;
    lbAmmo9: TAgeLabelD;
    lbAmmo10: TAgeLabelD;
    lbAmmo11: TAgeLabelD;
    lbAmmo12: TAgeLabelD;
    lbAmmo13: TAgeLabelD;
    lbAmmo14: TAgeLabelD;
    lbAmmo15: TAgeLabelD;
    lbAmmo16: TAgeLabelD;
    lbAutonomy1: TAgeLabelD;
    lbAutonomy2: TAgeLabelD;
    lbAutonomy3: TAgeLabelD;
    lbAutonomy4: TAgeLabelD;
    lbAutonomy5: TAgeLabelD;
    lbAutonomy6: TAgeLabelD;
    lbAutonomy7: TAgeLabelD;
    lbAutonomy8: TAgeLabelD;
    lbAutonomy9: TAgeLabelD;
    lbAutonomy10: TAgeLabelD;
    lbAutonomy11: TAgeLabelD;
    lbAutonomy12: TAgeLabelD;
    lbAutonomy13: TAgeLabelD;
    lbAutonomy14: TAgeLabelD;
    lbAutonomy15: TAgeLabelD;
    lbAutonomy16: TAgeLabelD;
    lbNumElements1: TAgeLabelD;
    lbNumElements2: TAgeLabelD;
    lbNumElements3: TAgeLabelD;
    lbNumElements4: TAgeLabelD;
    lbNumElements5: TAgeLabelD;
    lbNumElements6: TAgeLabelD;
    lbNumElements7: TAgeLabelD;
    lbNumElements8: TAgeLabelD;
    lbNumElements9: TAgeLabelD;
    lbNumElements10: TAgeLabelD;
    lbNumElements11: TAgeLabelD;
    lbNumElements12: TAgeLabelD;
    lbNumElements13: TAgeLabelD;
    lbNumElements14: TAgeLabelD;
    lbNumElements15: TAgeLabelD;
    lbNumElements16: TAgeLabelD;
    lbTrenchLevel1: TAgeLabelD;
    lbTrenchLevel2: TAgeLabelD;
    lbTrenchLevel3: TAgeLabelD;
    lbTrenchLevel4: TAgeLabelD;
    lbTrenchLevel5: TAgeLabelD;
    lbTrenchLevel6: TAgeLabelD;
    lbTrenchLevel7: TAgeLabelD;
    lbTrenchLevel8: TAgeLabelD;
    lbTrenchLevel9: TAgeLabelD;
    lbTrenchLevel10: TAgeLabelD;
    lbTrenchLevel11: TAgeLabelD;
    lbTrenchLevel12: TAgeLabelD;
    lbTrenchLevel13: TAgeLabelD;
    lbTrenchLevel14: TAgeLabelD;
    lbTrenchLevel15: TAgeLabelD;
    lbTrenchLevel16: TAgeLabelD;
    imgOrder1: TAgeImageD;
    imgOrder2: TAgeImageD;
    imgOrder3: TAgeImageD;
    imgOrder4: TAgeImageD;
    imgOrder5: TAgeImageD;
    imgOrder6: TAgeImageD;
    imgOrder7: TAgeImageD;
    imgOrder8: TAgeImageD;
    imgOrder9: TAgeImageD;
    imgOrder10: TAgeImageD;
    imgOrder11: TAgeImageD;
    imgOrder12: TAgeImageD;
    imgOrder13: TAgeImageD;
    imgOrder14: TAgeImageD;
    imgOrder15: TAgeImageD;
    imgOrder16: TAgeImageD;
    imgActive1: TAgeImageD;
    imgActive2: TAgeImageD;
    imgActive3: TAgeImageD;
    imgActive4: TAgeImageD;
    imgActive5: TAgeImageD;
    imgActive6: TAgeImageD;
    imgActive7: TAgeImageD;
    imgActive8: TAgeImageD;
    imgActive9: TAgeImageD;
    imgActive10: TAgeImageD;
    imgActive11: TAgeImageD;
    imgActive12: TAgeImageD;
    imgActive13: TAgeImageD;
    imgActive14: TAgeImageD;
    imgActive15: TAgeImageD;
    imgActive16: TAgeImageD;
    imgLock1: TAgeImageD;
    imgLock2: TAgeImageD;
    imgLock3: TAgeImageD;
    imgLock4: TAgeImageD;
    imgLock5: TAgeImageD;
    imgLock6: TAgeImageD;
    imgLock7: TAgeImageD;
    imgLock8: TAgeImageD;
    imgLock9: TAgeImageD;
    imgLock10: TAgeImageD;
    imgLock11: TAgeImageD;
    imgLock12: TAgeImageD;
    imgLock13: TAgeImageD;
    imgLock14: TAgeImageD;
    imgLock15: TAgeImageD;
    imgLock16: TAgeImageD;
    lbLockNum1: TAgeLabelD;
    lbLockNum2: TAgeLabelD;
    lbLockNum3: TAgeLabelD;
    lbLockNum4: TAgeLabelD;
    lbLockNum5: TAgeLabelD;
    lbLockNum6: TAgeLabelD;
    lbLockNum7: TAgeLabelD;
    lbLockNum8: TAgeLabelD;
    lbLockNum9: TAgeLabelD;
    lbLockNum10: TAgeLabelD;
    lbLockNum11: TAgeLabelD;
    lbLockNum12: TAgeLabelD;
    lbLockNum13: TAgeLabelD;
    lbLockNum14: TAgeLabelD;
    lbLockNum15: TAgeLabelD;
    lbLockNum16: TAgeLabelD;
    AgeScrollBarD1: TAgeScrollBarD;
    btnHeadTag: TAgeButtonD;
    btnHeadForceName: TAgeButtonD;
    btnHeadRegionName: TAgeButtonD;
    btnHeadGeneral: TAgeButtonD;
    btnHeadPower: TAgeButtonD;
    btnHeadPenalty: TAgeButtonD;
    btnHeadCohesion: TAgeButtonD;
    btnHeadSupply: TAgeButtonD;
    btnHeadAmmo: TAgeButtonD;
    btnHeadAutonomy: TAgeButtonD;
    btnHeadElts: TAgeButtonD;
    btnHeadTrench: TAgeButtonD;
    btnHeadOrder: TAgeButtonD;
    btnHeadActive: TAgeButtonD;
    btnHeadLock: TAgeButtonD;
    lbTableTitle: TAgeLabelD;
    btnFilterLand: TAgeButtonD;
    btnFilterNav: TAgeButtonD;
    btnFilterFixed: TAgeButtonD;
    btnFilterUnactive: TAgeButtonD;
    btnFilterHighSupply: TAgeButtonD;
    btnFilterHighCohesion: TAgeButtonD;
    btnfilterHighAmmo: TAgeButtonD;
    btnFilterHighHealth: TAgeButtonD;
    btnFilterNoLeader: TAgeButtonD;
    btnFilterHaveLeader: TAgeButtonD;
    btnFilterIsLeader: TAgeButtonD;
    btnFlag1: TAgeButtonD;
    btnFlag2: TAgeButtonD;
    btnFlag3: TAgeButtonD;
    btnFlag4: TAgeButtonD;
    btnFlag5: TAgeButtonD;
    btnFlag6: TAgeButtonD;
    btnFlag7: TAgeButtonD;
    btnFlag8: TAgeButtonD;
    btnFlag9: TAgeButtonD;
    btnFlag10: TAgeButtonD;
    btnFlag11: TAgeButtonD;
    btnFlag12: TAgeButtonD;
    imgLedgerTab8: TAgeButtonD;
    imgLedgerTab9: TAgeButtonD;
    imgLedgerTab7: TAgeButtonD;
    imgLedgerTab6: TAgeButtonD;
    imgLedgerTab5: TAgeButtonD;
    imgLedgerTab4: TAgeButtonD;
    imgLedgerTab3: TAgeButtonD;
    imgLedgerTab2: TAgeButtonD;
    imgLedgerTab1: TAgeButtonD;
    imgLedgerTab0: TAgeButtonD;
    lbSubfactionsTitle: TAgeLabelD;
    btnSwitchGUI: TAgeButtonD;
    btnFilterAir: TAgeButtonD;
	
    procedure FormCreate(Sender: TObject);
  private
    { Déclarations privées }
  public
    { Déclarations publiques }
  end;

var
  MainForm: TMainForm;

implementation

{$R *.dfm}

procedure TMainForm.FormCreate(Sender: TObject);
begin
object AgeImageD13: TAgeImageD
  Left = 835
  Top = 112
  Width = 50
  Height = 41
  Caption = 'Trench'
  TabOrder = 16
  DataSetIdx = 0
end

end;

end.
