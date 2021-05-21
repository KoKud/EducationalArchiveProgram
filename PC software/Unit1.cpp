//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <String>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CPort"
#pragma link "CPortCtl"
#pragma resource "*.dfm"
TForm1 *Form1;
int liczbadru,pozostale;
String druzyna1="",druzyna2="",druzyna3="",druzyna4="",druzyna5="",prawidlowa="";
int kolejka=1;
int szanse1=0,szanse2=0,szanse3=0,szanse4=0,szanse5=0;
int punkty1=0,punkty2=0,punkty3=0,punkty4=0,punkty5=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
ComPort->ShowSetupDialog();
ComPort->Open();
ComPort->WriteStr("Wszystko ok\n");
Button1->Enabled=false;
Button2->Enabled=true;
liczbadruz2->Enabled=true;
liczbadruz3->Enabled=true;
liczbadruz4->Enabled=true;
liczbadruz5->Enabled=true;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
ComPort->WriteStr("Rozlonczono\n");
ComPort->Close();

Button2->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::liczbadruz2Click(TObject *Sender)
{
liczbadru=2;pozostale=liczbadru;
Shape1->Brush->Color=clRed;
Shape2->Brush->Color=clWhite;
Shape3->Brush->Color=clWhite;
Shape4->Brush->Color=clWhite;
Label2->Visible=true;     Edit1->Visible=true;
Label3->Visible=true;     Edit2->Visible=true;
Label4->Visible=false;     Edit3->Visible=false;
Label5->Visible=false;     Edit4->Visible=false;
Label6->Visible=false;     Edit5->Visible=false;
Button3->Visible=true;

Shape5->Visible=true;   Shape8->Visible=true;    Shape11->Visible=false;    Shape14->Visible=false;    Shape17->Visible=false;
Shape6->Visible=true;   Shape9->Visible=true;    Shape12->Visible=false;    Shape15->Visible=false;    Shape18->Visible=false;
Shape7->Visible=true;   Shape10->Visible=true;   Shape13->Visible=false;    Shape16->Visible=false;    Shape19->Visible=false;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::liczbadruz3Click(TObject *Sender)
{
liczbadru=3;pozostale=liczbadru;
Shape2->Brush->Color=clRed;
Shape1->Brush->Color=clWhite;
Shape3->Brush->Color=clWhite;
Shape4->Brush->Color=clWhite;
Label2->Visible=true;     Edit1->Visible=true;
Label3->Visible=true;     Edit2->Visible=true;
Label4->Visible=true;     Edit3->Visible=true;
Label5->Visible=false;     Edit4->Visible=false;
Label6->Visible=false;     Edit5->Visible=false;
Button3->Visible=true;

Shape5->Visible=true;   Shape8->Visible=true;    Shape11->Visible=true;    Shape14->Visible=false;    Shape17->Visible=false;
Shape6->Visible=true;   Shape9->Visible=true;    Shape12->Visible=true;    Shape15->Visible=false;    Shape18->Visible=false;
Shape7->Visible=true;   Shape10->Visible=true;   Shape13->Visible=true;    Shape16->Visible=false;    Shape19->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::liczbadruz4Click(TObject *Sender)
{
liczbadru=4;pozostale=liczbadru;
Shape3->Brush->Color=clRed;
Shape2->Brush->Color=clWhite;
Shape1->Brush->Color=clWhite;
Shape4->Brush->Color=clWhite;
Label2->Visible=true;     Edit1->Visible=true;
Label3->Visible=true;     Edit2->Visible=true;
Label4->Visible=true;     Edit3->Visible=true;
Label5->Visible=true;     Edit4->Visible=true;
Label6->Visible=false;     Edit5->Visible=false;
Button3->Visible=true;

Shape5->Visible=true;   Shape8->Visible=true;    Shape11->Visible=true;    Shape14->Visible=true;    Shape17->Visible=false;
Shape6->Visible=true;   Shape9->Visible=true;    Shape12->Visible=true;    Shape15->Visible=true;    Shape18->Visible=false;
Shape7->Visible=true;   Shape10->Visible=true;   Shape13->Visible=true;    Shape16->Visible=true;    Shape19->Visible=false;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::liczbadruz5Click(TObject *Sender)
{
liczbadru=5;pozostale=liczbadru;
Shape4->Brush->Color=clRed;
Shape2->Brush->Color=clWhite;
Shape3->Brush->Color=clWhite;
Shape1->Brush->Color=clWhite;
Label2->Visible=true;     Edit1->Visible=true;
Label3->Visible=true;     Edit2->Visible=true;
Label4->Visible=true;     Edit3->Visible=true;
Label5->Visible=true;     Edit4->Visible=true;
Label6->Visible=true;     Edit5->Visible=true;
Button3->Visible=true;

Shape5->Visible=true;   Shape8->Visible=true;    Shape11->Visible=true;    Shape14->Visible=true;    Shape17->Visible=true;
Shape6->Visible=true;   Shape9->Visible=true;    Shape12->Visible=true;    Shape15->Visible=true;    Shape18->Visible=true;
Shape7->Visible=true;   Shape10->Visible=true;   Shape13->Visible=true;    Shape16->Visible=true;    Shape19->Visible=true;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
druzyna1=Edit1->Text;
druzyna2=Edit2->Text;
druzyna3=Edit3->Text;
druzyna4=Edit4->Text;
druzyna5=Edit5->Text;
liczbadruz2->Enabled=false;
liczbadruz3->Enabled=false;
liczbadruz4->Enabled=false;
liczbadruz5->Enabled=false;
Edit1->Enabled=false;
Edit2->Enabled=false;
Edit3->Enabled=false;
Edit4->Enabled=false;
Edit5->Enabled=false;
Label1->Enabled=false;
Label2->Enabled=false;
Label3->Enabled=false;
Label4->Enabled=false;
Label5->Enabled=false;
Label6->Enabled=false;
MediaPlayer1->FileName="podklad.mp3";
MediaPlayer1->Open();
MediaPlayer1->Play();
ComPort->WriteStr("Witajcie w zmaganiach druzyny "+druzyna1+", "+druzyna2+", "+druzyna3+", "+druzyna4+" "+druzyna5+"zycze wam powodzenia !!!\n");
Button4->Enabled=true;

Edit6->Enabled=true;
Edit7->Enabled=true;         Shape20->Enabled=true;
Edit8->Enabled=true;         Shape21->Enabled=true;
Edit9->Enabled=true;         Shape22->Enabled=true;
Edit10->Enabled=true;        Shape23->Enabled=true;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComPortRxChar(TObject *Sender, int Count)
{
AnsiString Str;

ComPort->ReadStr(Str,Count);
if(Button5->Enabled==false)  {

        if(pozostale!=0){
        if(kolejka==1&&szanse1==3)kolejka++;
        if(kolejka==2&&szanse2==3)kolejka++;
        if(kolejka==3&&szanse3==3)kolejka++;
        if(kolejka==4&&szanse4==3)kolejka++;
        if(kolejka==5&&szanse5==3)kolejka++;

                if(kolejka==1&&szanse1<3){                                      //DLA DRU¯YNY I
                        if(Str=="bledna"){
                                szanse1++;if(szanse1>=3)pozostale--;
                                kolejka++;Str="";

                                if(szanse1==1){
                                Shape5->Brush->Color=clRed;
                                }else if(szanse1==2){
                                Shape6->Brush->Color=clRed;
                                }else if(szanse1==3){
                                Shape7->Brush->Color=clRed;
                                }

                        }else if(Str=="popraw"){
                                punkty1+=100;
                                kolejka++;Str="";
                        }

                }else if(kolejka==2&&szanse2<3){                              //DLA DRU¯YNY II
                        if(Str=="bledna"){
                                szanse2++;if(szanse2>=3)pozostale--;
                                kolejka++;Str="";

                                if(szanse2==1){
                                Shape8->Brush->Color=clRed;
                                }else if(szanse2==2){
                                Shape9->Brush->Color=clRed;
                                }else if(szanse2==3){
                                Shape10->Brush->Color=clRed;
                                }

                        }else if(Str=="popraw"){
                                punkty2+=100;
                                kolejka++;Str="";
                        }

                }else if(kolejka==3&&szanse3<3){                              //DLA DRU¯YNY III
                        if(Str=="bledna"){
                                szanse3++;if(szanse3>=3)pozostale--;
                                kolejka++;Str="";

                                if(szanse3==1){
                                Shape11->Brush->Color=clRed;
                                }else if(szanse3==2){
                                Shape12->Brush->Color=clRed;
                                }else if(szanse3==3){
                                Shape13->Brush->Color=clRed;
                                }

                        }else if(Str=="popraw"){
                                punkty3+=100;
                                kolejka++;Str="";
                        }

                }else if(kolejka==4&&szanse4<3){                              //DLA DRU¯YNY IV
                        if(Str=="bledna"){
                                szanse4++;if(szanse4>=3)pozostale--;
                                kolejka++;Str="";

                                if(szanse4==1){
                                Shape14->Brush->Color=clRed;
                                }else if(szanse4==2){
                                Shape15->Brush->Color=clRed;
                                }else if(szanse4==3){
                                Shape16->Brush->Color=clRed;
                                }

                        }else if(Str=="popraw"){
                                punkty4+=100;
                                kolejka++;Str="";
                        }

                }else if(kolejka==5&&szanse5<3){                              //DLA DRU¯YNY V
                        if(Str=="bledna"){
                                szanse5++;if(szanse5>=3)pozostale--;
                                kolejka++;Str="";

                                if(szanse5==1){
                                Shape17->Brush->Color=clRed;
                                }else if(szanse5==2){
                                Shape18->Brush->Color=clRed;
                                }else if(szanse5==3){
                                Shape19->Brush->Color=clRed;
                                }

                        }else if(Str=="popraw"){
                                punkty5+=100;
                                kolejka++;Str="";
                        }

                }
        if(kolejka>liczbadru)kolejka=1;

        }     Button5->Enabled=true;




}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Shape20ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
Shape20->Brush->Color=clRed;    Shape22->Brush->Color=clWhite;
Shape21->Brush->Color=clWhite;    Shape23->Brush->Color=clWhite;

prawidlowa="A";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape21ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
Shape20->Brush->Color=clWhite;    Shape22->Brush->Color=clWhite;
Shape21->Brush->Color=clRed;    Shape23->Brush->Color=clWhite;

prawidlowa="B";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape22ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
Shape20->Brush->Color=clWhite;    Shape22->Brush->Color=clRed;
Shape21->Brush->Color=clWhite;    Shape23->Brush->Color=clWhite;

prawidlowa="C";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape23ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
Shape20->Brush->Color=clWhite;    Shape22->Brush->Color=clWhite;
Shape21->Brush->Color=clWhite;    Shape23->Brush->Color=clRed;

prawidlowa="D";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{

String pytanie,odpowiedzA,odpowiedzB,odpowiedzC,odpowiedzD;
pytanie=Edit6->Text;
odpowiedzA=Edit7->Text;
odpowiedzB=Edit8->Text;
odpowiedzC=Edit9->Text;
odpowiedzD=Edit10->Text;
ComPort->WriteStr(pytanie+"\n");
ComPort->WriteStr(odpowiedzA+"\n");
ComPort->WriteStr(odpowiedzB+"\n");
ComPort->WriteStr(odpowiedzC+"\n");
ComPort->WriteStr(odpowiedzD+"\n");
ComPort->WriteStr(prawidlowa+"\n");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
Button5->Enabled=false;
Button4->Enabled=true;
Label15->Caption=punkty1;
Label16->Caption=punkty2;
Label17->Caption=punkty3;
Label18->Caption=punkty4;
Label19->Caption=punkty5;

}
//---------------------------------------------------------------------------





void __fastcall TForm1::Label15Click(TObject *Sender)
     {
punkty1+=100;
Label15->Caption=punkty1;
Label16->Caption=punkty2;
Label17->Caption=punkty3;
Label18->Caption=punkty4;
Label19->Caption=punkty5;     kolejka++;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label16Click(TObject *Sender)
{
 punkty2+=100;
Label15->Caption=punkty1;
Label16->Caption=punkty2;
Label17->Caption=punkty3;
Label18->Caption=punkty4;
Label19->Caption=punkty5;     kolejka++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label17Click(TObject *Sender)
{
  punkty3+=100;
Label15->Caption=punkty1;
Label16->Caption=punkty2;
Label17->Caption=punkty3;
Label18->Caption=punkty4;
Label19->Caption=punkty5;     kolejka++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label18Click(TObject *Sender)
{
 punkty4+=100;
Label15->Caption=punkty1;
Label16->Caption=punkty2;
Label17->Caption=punkty3;
Label18->Caption=punkty4;
Label19->Caption=punkty5;     kolejka++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label19Click(TObject *Sender)
{
   punkty5+=100;
Label15->Caption=punkty1;
Label16->Caption=punkty2;
Label17->Caption=punkty3;
Label18->Caption=punkty4;
Label19->Caption=punkty5;     kolejka++;
}
//---------------------------------------------------------------------------

