//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StringGrid1GetEditMask(TObject *Sender, int ACol, int ARow,
		  UnicodeString &Value)
{
	Value = "#99";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	String pom, pom1;
	int i = 0, m = 0;
	do
	{
		pom = StringGrid1->Cells[0][i];
		if (pom != "") {
			X[i] = StrToFloat(pom);
			i++;
		}
	}while ((pom != "")&&(i != StringGrid1->RowCount));
	do
	{
		pom1 = StringGrid1->Cells[1][m];
		if (pom1 != "") {
			Y[m] = StrToFloat(pom1);
			m++;
		}
	}while ((pom1 != "")&&(m != StringGrid1->RowCount));
	nX = i;
	nY = m;
	if (nX != nY) {
		ShowMessage("Enter equal amounts of coordinates!");
	}
	else
	{
		Label6->Caption= IntToStr(nX);
		Button2->Enabled=nX!=0;
		Button3->Enabled=nY!=0;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	float max, distance;
	int i;
	max = sqrt((X[0]*X[0])+(Y[0]*Y[0]));
	for (i = 0; i < nX; i++) {
		distance =  sqrt((X[i]*X[i])+(Y[i]*Y[i]));
		if (max < distance) {
			max = distance;
		}
	}
	Label7->Caption=FloatToStr(max);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Exit(TObject *Sender)
{
	 try
{
	StrToFloat(Edit1->Text);
}
catch(...)
{
	ShowMessage("You can use only a numbers!");
	Edit1->SetFocus();
}
if ((Edit1->Text)<0) {
	ShowMessage("The circle radius must be a positive number!");
	Edit1->SetFocus();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
  float distance, R;
	int i, count = 0;
	R = StrToFloat(Edit1->Text);
	for (i = 0; i < nX; i++) {
		distance =  sqrt((X[i]*X[i])+(Y[i]*Y[i]));
		if (distance < R) {
			count++;
		}
	}
	Label8->Caption=FloatToStr(count);
}
//---------------------------------------------------------------------------
