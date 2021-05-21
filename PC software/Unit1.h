//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CPort.hpp"
#include "CPortCtl.hpp"
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TComPort *ComPort;
        TImage *tlo;
        TButton *Button1;
        TButton *Button2;
        TButton *liczbadruz2;
        TLabel *Label1;
        TButton *liczbadruz3;
        TButton *liczbadruz4;
        TButton *liczbadruz5;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TShape *Shape1;
        TShape *Shape2;
        TShape *Shape3;
        TShape *Shape4;
        TButton *Button3;
        TMediaPlayer *MediaPlayer1;
        TShape *Shape5;
        TShape *Shape6;
        TShape *Shape7;
        TShape *Shape8;
        TShape *Shape9;
        TShape *Shape10;
        TShape *Shape11;
        TShape *Shape12;
        TShape *Shape13;
        TShape *Shape14;
        TShape *Shape15;
        TShape *Shape16;
        TShape *Shape17;
        TShape *Shape18;
        TShape *Shape19;
        TEdit *Edit6;
        TLabel *Label7;
        TLabel *Label8;
        TEdit *Edit7;
        TEdit *Edit8;
        TEdit *Edit9;
        TEdit *Edit10;
        TShape *Shape20;
        TShape *Shape21;
        TShape *Shape22;
        TShape *Shape23;
        TLabel *Label9;
        TButton *Button4;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TButton *Button5;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall liczbadruz2Click(TObject *Sender);
        void __fastcall liczbadruz3Click(TObject *Sender);
        void __fastcall liczbadruz4Click(TObject *Sender);
        void __fastcall liczbadruz5Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall ComPortRxChar(TObject *Sender, int Count);
        void __fastcall Shape20ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Shape21ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Shape22ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Shape23ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Label15Click(TObject *Sender);
        void __fastcall Label16Click(TObject *Sender);
        void __fastcall Label17Click(TObject *Sender);
        void __fastcall Label18Click(TObject *Sender);
        void __fastcall Label19Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
