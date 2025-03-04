Unit GUIBattleLog;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, ExtCtrls, AgeDxImageD, AgeDxLabelD,
  AgeDxButtonD, AgeDxGripBarD, AgeDxRadioGroupD;

type
  TMainForm = class(TForm)
    AgeDxFormDataD1: TAgeDxFormDataD;
	lbUnitName1: TAgeLabelD;
    lbGroupName1: TAgeLabelD;
    lbCommited1: TAgeLabelD;	
    img1Flag1: TAgeImageD;
    img2Flag1: TAgeImageD;
    img3Flag1: TAgeImageD;
    img4Flag1: TAgeImageD;
    img5Flag1: TAgeImageD;
    img6Flag1: TAgeImageD;	
    img7Flag1: TAgeImageD;
    img8Flag1: TAgeImageD;
    img9Flag1: TAgeImageD;
    img10Flag1: TAgeImageD;
    img11Flag1: TAgeImageD;
    img12Flag1: TAgeImageD;
    img13Flag1: TAgeImageD;
    img14Flag1: TAgeImageD;
    img15Flag1: TAgeImageD;
    img16Flag1: TAgeImageD;
    img17Flag1: TAgeImageD;
    lbStartTitle1: TAgeLabelD;
    imgStartHits1: TAgeImageD;
	lbStartHits1: TAgeLabelD;
    imgStartCoh1: TAgeImageD;
    lbStartCoh1: TAgeLabelD;
    lbEndTitle1: TAgeLabelD;
    imgEndHits1: TAgeImageD;	
    lbEndHits1: TAgeLabelD;
    imgEndCoh1: TAgeImageD;
    lbEndCoh1: TAgeLabelD;
    lbDoneTitle1: TAgeLabelD;
    imgDoneHits1: TAgeImageD;
    lbDoneHits1: TAgeLabelD;
    imgDoneCoh1: TAgeImageD;
    lbDoneCoh1: TAgeLabelD;	
    lbRecTitle1: TAgeLabelD;
    imgRecHits1: TAgeImageD;
    lbRecHits1: TAgeLabelD;
    imgRecCoh1: TAgeImageD;
    lbRecCoh1: TAgeLabelD;    
	imgPortrait1: TAgeImageD;	
	
	lbUnitName2: TAgeLabelD;
    lbGroupName2: TAgeLabelD;
    lbCommited2: TAgeLabelD;	
    img1Flag2: TAgeImageD;
    img2Flag2: TAgeImageD;
    img3Flag2: TAgeImageD;
    img4Flag2: TAgeImageD;
    img5Flag2: TAgeImageD;
    img6Flag2: TAgeImageD;	
    img7Flag2: TAgeImageD;
    img8Flag2: TAgeImageD;
    img9Flag2: TAgeImageD;
    img10Flag2: TAgeImageD;
    img11Flag2: TAgeImageD;
    img12Flag2: TAgeImageD;
    img13Flag2: TAgeImageD;
    img14Flag2: TAgeImageD;
    img15Flag2: TAgeImageD;
    img16Flag2: TAgeImageD;
    img17Flag2: TAgeImageD;
    lbStartTitle2: TAgeLabelD;
    imgStartHits2: TAgeImageD;
	lbStartHits2: TAgeLabelD;
    imgStartCoh2: TAgeImageD;
    lbStartCoh2: TAgeLabelD;
    lbEndTitle2: TAgeLabelD;
    imgEndHits2: TAgeImageD;	
    lbEndHits2: TAgeLabelD;
    imgEndCoh2: TAgeImageD;
    lbEndCoh2: TAgeLabelD;
    lbDoneTitle2: TAgeLabelD;
    imgDoneHits2: TAgeImageD;
    lbDoneHits2: TAgeLabelD;
    imgDoneCoh2: TAgeImageD;
    lbDoneCoh2: TAgeLabelD;	
    lbRecTitle2: TAgeLabelD;
    imgRecHits2: TAgeImageD;
    lbRecHits2: TAgeLabelD;
    imgRecCoh2: TAgeImageD;
    lbRecCoh2: TAgeLabelD;    
	imgPortrait2: TAgeImageD;	

	lbUnitName3: TAgeLabelD;
    lbGroupName3: TAgeLabelD;
    lbCommited3: TAgeLabelD;	
    img1Flag3: TAgeImageD;
    img2Flag3: TAgeImageD;
    img3Flag3: TAgeImageD;
    img4Flag3: TAgeImageD;
    img5Flag3: TAgeImageD;
    img6Flag3: TAgeImageD;	
    img7Flag3: TAgeImageD;
    img8Flag3: TAgeImageD;
    img9Flag3: TAgeImageD;
    img10Flag3: TAgeImageD;
    img11Flag3: TAgeImageD;
    img12Flag3: TAgeImageD;
    img13Flag3: TAgeImageD;
    img14Flag3: TAgeImageD;
    img15Flag3: TAgeImageD;
    img16Flag3: TAgeImageD;
    img17Flag3: TAgeImageD;
    lbStartTitle3: TAgeLabelD;
    imgStartHits3: TAgeImageD;
	lbStartHits3: TAgeLabelD;
    imgStartCoh3: TAgeImageD;
    lbStartCoh3: TAgeLabelD;
    lbEndTitle3: TAgeLabelD;
    imgEndHits3: TAgeImageD;	
    lbEndHits3: TAgeLabelD;
    imgEndCoh3: TAgeImageD;
    lbEndCoh3: TAgeLabelD;
    lbDoneTitle3: TAgeLabelD;
    imgDoneHits3: TAgeImageD;
    lbDoneHits3: TAgeLabelD;
    imgDoneCoh3: TAgeImageD;
    lbDoneCoh3: TAgeLabelD;	
    lbRecTitle3: TAgeLabelD;
    imgRecHits3: TAgeImageD;
    lbRecHits3: TAgeLabelD;
    imgRecCoh3: TAgeImageD;
    lbRecCoh3: TAgeLabelD;    
	imgPortrait3: TAgeImageD;	

	
	lbUnitName4: TAgeLabelD;
    lbGroupName4: TAgeLabelD;
    lbCommited4: TAgeLabelD;	
    img1Flag4: TAgeImageD;
    img2Flag4: TAgeImageD;
    img3Flag4: TAgeImageD;
    img4Flag4: TAgeImageD;
    img5Flag4: TAgeImageD;
    img6Flag4: TAgeImageD;	
    img7Flag4: TAgeImageD;
    img8Flag4: TAgeImageD;
    img9Flag4: TAgeImageD;
    img10Flag4: TAgeImageD;
    img11Flag4: TAgeImageD;
    img12Flag4: TAgeImageD;
    img13Flag4: TAgeImageD;
    img14Flag4: TAgeImageD;
    img15Flag4: TAgeImageD;
    img16Flag4: TAgeImageD;
    img17Flag4: TAgeImageD;
    lbStartTitle4: TAgeLabelD;
    imgStartHits4: TAgeImageD;
	lbStartHits4: TAgeLabelD;
    imgStartCoh4: TAgeImageD;
    lbStartCoh4: TAgeLabelD;
    lbEndTitle4: TAgeLabelD;
    imgEndHits4: TAgeImageD;	
    lbEndHits4: TAgeLabelD;
    imgEndCoh4: TAgeImageD;
    lbEndCoh4: TAgeLabelD;
    lbDoneTitle4: TAgeLabelD;
    imgDoneHits4: TAgeImageD;
    lbDoneHits4: TAgeLabelD;
    imgDoneCoh4: TAgeImageD;
    lbDoneCoh4: TAgeLabelD;	
    lbRecTitle4: TAgeLabelD;
    imgRecHits4: TAgeImageD;
    lbRecHits4: TAgeLabelD;
    imgRecCoh4: TAgeImageD;
    lbRecCoh4: TAgeLabelD;    
	imgPortrait4: TAgeImageD;		

	lbUnitName5: TAgeLabelD;
    lbGroupName5: TAgeLabelD;
    lbCommited5: TAgeLabelD;	
    img1Flag5: TAgeImageD;
    img2Flag5: TAgeImageD;
    img3Flag5: TAgeImageD;
    img4Flag5: TAgeImageD;
    img5Flag5: TAgeImageD;
    img6Flag5: TAgeImageD;	
    img7Flag5: TAgeImageD;
    img8Flag5: TAgeImageD;
    img9Flag5: TAgeImageD;
    img10Flag5: TAgeImageD;
    img11Flag5: TAgeImageD;
    img12Flag5: TAgeImageD;
    img13Flag5: TAgeImageD;
    img14Flag5: TAgeImageD;
    img15Flag5: TAgeImageD;
    img16Flag5: TAgeImageD;
    img17Flag5: TAgeImageD;
    lbStartTitle5: TAgeLabelD;
    imgStartHits5: TAgeImageD;
	lbStartHits5: TAgeLabelD;
    imgStartCoh5: TAgeImageD;
    lbStartCoh5: TAgeLabelD;
    lbEndTitle5: TAgeLabelD;
    imgEndHits5: TAgeImageD;	
    lbEndHits5: TAgeLabelD;
    imgEndCoh5: TAgeImageD;
    lbEndCoh5: TAgeLabelD;
    lbDoneTitle5: TAgeLabelD;
    imgDoneHits5: TAgeImageD;
    lbDoneHits5: TAgeLabelD;
    imgDoneCoh5: TAgeImageD;
    lbDoneCoh5: TAgeLabelD;	
    lbRecTitle5: TAgeLabelD;
    imgRecHits5: TAgeImageD;
    lbRecHits5: TAgeLabelD;
    imgRecCoh5: TAgeImageD;
    lbRecCoh5: TAgeLabelD;    
	imgPortrait5: TAgeImageD;
	
	lbUnitName6: TAgeLabelD;
    lbGroupName6: TAgeLabelD;
    lbCommited6: TAgeLabelD;	
    img1Flag6: TAgeImageD;
    img2Flag6: TAgeImageD;
    img3Flag6: TAgeImageD;
    img4Flag6: TAgeImageD;
    img5Flag6: TAgeImageD;
    img6Flag6: TAgeImageD;	
    img7Flag6: TAgeImageD;
    img8Flag6: TAgeImageD;
    img9Flag6: TAgeImageD;
    img10Flag6: TAgeImageD;
    img11Flag6: TAgeImageD;
    img12Flag6: TAgeImageD;
    img13Flag6: TAgeImageD;
    img14Flag6: TAgeImageD;
    img15Flag6: TAgeImageD;
    img16Flag6: TAgeImageD;
    img17Flag6: TAgeImageD;
    lbStartTitle6: TAgeLabelD;
    imgStartHits6: TAgeImageD;
	lbStartHits6: TAgeLabelD;
    imgStartCoh6: TAgeImageD;
    lbStartCoh6: TAgeLabelD;
    lbEndTitle6: TAgeLabelD;
    imgEndHits6: TAgeImageD;	
    lbEndHits6: TAgeLabelD;
    imgEndCoh6: TAgeImageD;
    lbEndCoh6: TAgeLabelD;
    lbDoneTitle6: TAgeLabelD;
    imgDoneHits6: TAgeImageD;
    lbDoneHits6: TAgeLabelD;
    imgDoneCoh6: TAgeImageD;
    lbDoneCoh6: TAgeLabelD;	
    lbRecTitle6: TAgeLabelD;
    imgRecHits6: TAgeImageD;
    lbRecHits6: TAgeLabelD;
    imgRecCoh6: TAgeImageD;
    lbRecCoh6: TAgeLabelD;    
	imgPortrait6: TAgeImageD;	
	
	lbUnitName7: TAgeLabelD;
    lbGroupName7: TAgeLabelD;
    lbCommited7: TAgeLabelD;	
    img1Flag7: TAgeImageD;
    img2Flag7: TAgeImageD;
    img3Flag7: TAgeImageD;
    img4Flag7: TAgeImageD;
    img5Flag7: TAgeImageD;
    img6Flag7: TAgeImageD;	
    img7Flag7: TAgeImageD;
    img8Flag7: TAgeImageD;
    img9Flag7: TAgeImageD;
    img10Flag7: TAgeImageD;
    img11Flag7: TAgeImageD;
    img12Flag7: TAgeImageD;
    img13Flag7: TAgeImageD;
    img14Flag7: TAgeImageD;
    img15Flag7: TAgeImageD;
    img16Flag7: TAgeImageD;
    img17Flag7: TAgeImageD;
    lbStartTitle7: TAgeLabelD;
    imgStartHits7: TAgeImageD;
	lbStartHits7: TAgeLabelD;
    imgStartCoh7: TAgeImageD;
    lbStartCoh7: TAgeLabelD;
    lbEndTitle7: TAgeLabelD;
    imgEndHits7: TAgeImageD;	
    lbEndHits7: TAgeLabelD;
    imgEndCoh7: TAgeImageD;
    lbEndCoh7: TAgeLabelD;
    lbDoneTitle7: TAgeLabelD;
    imgDoneHits7: TAgeImageD;
    lbDoneHits7: TAgeLabelD;
    imgDoneCoh7: TAgeImageD;
    lbDoneCoh7: TAgeLabelD;	
    lbRecTitle7: TAgeLabelD;
    imgRecHits7: TAgeImageD;
    lbRecHits7: TAgeLabelD;
    imgRecCoh7: TAgeImageD;
    lbRecCoh7: TAgeLabelD;    
	imgPortrait7: TAgeImageD;	
	
	lbUnitName8: TAgeLabelD;
    lbGroupName8: TAgeLabelD;
    lbCommited8: TAgeLabelD;	
    img1Flag8: TAgeImageD;
    img2Flag8: TAgeImageD;
    img3Flag8: TAgeImageD;
    img4Flag8: TAgeImageD;
    img5Flag8: TAgeImageD;
    img6Flag8: TAgeImageD;	
    img7Flag8: TAgeImageD;
    img8Flag8: TAgeImageD;
    img9Flag8: TAgeImageD;
    img10Flag8: TAgeImageD;
    img11Flag8: TAgeImageD;
    img12Flag8: TAgeImageD;
    img13Flag8: TAgeImageD;
    img14Flag8: TAgeImageD;
    img15Flag8: TAgeImageD;
    img16Flag8: TAgeImageD;
    img17Flag8: TAgeImageD;
    lbStartTitle8: TAgeLabelD;
    imgStartHits8: TAgeImageD;
	lbStartHits8: TAgeLabelD;
    imgStartCoh8: TAgeImageD;
    lbStartCoh8: TAgeLabelD;
    lbEndTitle8: TAgeLabelD;
    imgEndHits8: TAgeImageD;	
    lbEndHits8: TAgeLabelD;
    imgEndCoh8: TAgeImageD;
    lbEndCoh8: TAgeLabelD;
    lbDoneTitle8: TAgeLabelD;
    imgDoneHits8: TAgeImageD;
    lbDoneHits8: TAgeLabelD;
    imgDoneCoh8: TAgeImageD;
    lbDoneCoh8: TAgeLabelD;	
    lbRecTitle8: TAgeLabelD;
    imgRecHits8: TAgeImageD;
    lbRecHits8: TAgeLabelD;
    imgRecCoh8: TAgeImageD;
    lbRecCoh8: TAgeLabelD;    
	imgPortrait8: TAgeImageD;
    btUpArrow: TAgeButtonD;
    btDownArrow: TAgeButtonD;
    lbBattleLogTitle: TAgeLabelD;
    imgLeftFlag: TAgeImageD;
    imgRightFlag: TAgeImageD;
    imgLeftPortrait: TAgeImageD;
    imgRightPortrait: TAgeImageD;
    lbOwnUnitsCommited: TAgeLabelD;
    lbOppUnitsCommited: TAgeLabelD;
    rgRoundNumber: TAgeRadioGroupD;
    lbRoundSummary: TAgeLabelD;
    lbTotalDone: TAgeLabelD;
    imgTotalHitsDone: TAgeImageD;
    lbTotalHitsDone: TAgeLabelD;
    imgTotalCohDone: TAgeImageD;
    lbTotalCohDone: TAgeLabelD;
    lbTotalRec: TAgeLabelD;
    imgTotalHitsRec: TAgeImageD;
    lbTotalHitsRec: TAgeLabelD;
    imgTotalCohRec: TAgeImageD;
    lbTotalCohRec: TAgeLabelD;
    lbLeftLeaderName: TAgeLabelD;
    lbRightLeaderName: TAgeLabelD;
    btClose: TAgeButtonD;
    lbRoundNumberTitle: TAgeLabelD;
    lbBattleLogCommonTitle: TAgeLabelD;
    imgPortraitDL1: TAgeImageD;
    imgPortraitDL2: TAgeImageD;
    imgPortraitDL3: TAgeImageD;
    imgPortraitDL4: TAgeImageD;
    imgPortraitDL5: TAgeImageD;
    imgPortraitDL6: TAgeImageD;
    imgPortraitDL7: TAgeImageD;
    imgPortraitDL8: TAgeImageD;
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
