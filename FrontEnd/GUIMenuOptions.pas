Unit GUIMenuOptions;
interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, AgeDxFormDataD, Grids, AgeDxStringGridD, AgeDxImageD,
  AgeDxLabelD, AgeDxButtonD, ExtCtrls, AgeDxGripBarD, AgeDxCheckboxD,
  AgeDxRadioGroupD;

type
  TMainForm = class(TForm)
   AgeGripBar: TAgeGripBarD;
    AgeDxFormData: TAgeDxFormDataD;
    lbTitle: TAgeLabelD;
    btnTab0: TAgeButtonD;
    btnTab1: TAgeButtonD;
    btnTab2: TAgeButtonD;
    btnTab3: TAgeButtonD;
    btnTab4: TAgeButtonD;
    rgOption0: TAgeRadioGroupD;
    rgOption1: TAgeRadioGroupD;
    rgOption2: TAgeRadioGroupD;
    rgOption3: TAgeRadioGroupD;
    rgOption4: TAgeRadioGroupD;
    rgOption5: TAgeRadioGroupD;
    rgOption6: TAgeRadioGroupD;
    rgOption7: TAgeRadioGroupD;
    rgOption8: TAgeRadioGroupD;
    rgOption9: TAgeRadioGroupD;
    rgOption10: TAgeRadioGroupD;
    rgOption11: TAgeRadioGroupD;
    lbOption0: TAgeLabelD;
    lbOption1: TAgeLabelD;
    lbOption2: TAgeLabelD;
    lbOption3: TAgeLabelD;
    lbOption4: TAgeLabelD;
    lbOption5: TAgeLabelD;
    lbOption6: TAgeLabelD;
    lbOption7: TAgeLabelD;
    lbOption8: TAgeLabelD;
    lbOption9: TAgeLabelD;
    lbOption10: TAgeLabelD;
    lbOption11: TAgeLabelD;
    imgSeparatorTop: TAgeImageD;
    btnClose: TAgeButtonD;
    lbUserPath: TAgeLabelD;
    btnRestore: TAgeButtonD;
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
