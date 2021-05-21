#include <Wire.h>
#include <Servo.h>

#include "rgb_lcd.h"
#define KAT_OTWARCIA 150
#define KAT_ZAMKNIECIA 70
#define CZAS_ZAMKNIECIA 6000  //Określa jak długo serwo mechanizmy mają blokować przelot piłce
#define DIODA_R 7
#define DIODA_G 8
#define DIODA_B 10
#define SERWO_1 3
#define SERWO_2 5
#define SERWO_3 6
#define SERWO_4 9
#define FOTOREZYSTOR_A A0
#define FOTOREZYSTOR_B A1
#define FOTOREZYSTOR_C A2
#define FOTOREZYSTOR_D A3

rgb_lcd lcd;
Servo serwo1,serwo2,serwo3,serwo4;

String wyraz = "",pytanie = "",odpowiedzA="",odpowiedzB="",odpowiedzC="",odpowiedzD="",prawidlowaODP="",odeslane="";
int wyjscie=1,czy_prawidlowa=1,wlaczenie=1;
int zm1,zm2,zm3,zm4;
String zwrotne="";

void blokada();
void wyswietl(String);
void setup()
{
    pinMode(2,INPUT_PULLUP);  
    Serial.begin(115200);
    serwo1.attach(SERWO_1);
    serwo2.attach(SERWO_2);
    serwo3.attach(SERWO_3);
    serwo4.attach(SERWO_4);
    lcd.begin(16, 2);
}

void loop()
{while(wlaczenie){if(digitalRead(2)==HIGH){
  wyswietl("Uruchamiam ... Prosze czekać ...");wlaczenie=0;
  delay(1000);}}
  if(Serial.available()){
  lcd.clear();wyraz="";
  while(wyraz==""){
    wyraz=Serial.readStringUntil('\n'); 
    }wyswietl(wyraz);delay(1000);lcd.clear();wyraz="";
  while(wyraz==""){
    wyraz=Serial.readStringUntil('\n');
    }
wyswietl(wyraz);delay(1000);lcd.clear();
    
      while(wyjscie){
        while(pytanie==""){
          pytanie=Serial.readStringUntil('\n'); 
         }
         if(pytanie!="!!!KONIEC!!!"){
          while(odpowiedzA==""){
            odpowiedzA=Serial.readStringUntil('\n'); 
          }
            while(odpowiedzB==""){
              odpowiedzB=Serial.readStringUntil('\n'); 
            }
              while(odpowiedzC==""){
                odpowiedzC=Serial.readStringUntil('\n'); 
              }
                while(odpowiedzD==""){
                  odpowiedzD=Serial.readStringUntil('\n'); 
                }
                 while(prawidlowaODP==""){
                    prawidlowaODP=Serial.readStringUntil('\n'); 
                 }
                 
                                                      wyswietl(pytanie);delay(1000);
                 serwo1.write(KAT_ZAMKNIECIA);delay(500);
                 serwo1.write(KAT_OTWARCIA);delay(500);
                 serwo1.write(KAT_ZAMKNIECIA);delay(500);
                 serwo1.write(KAT_OTWARCIA);          wyswietl(odpowiedzA);delay(1000);
                 serwo2.write(KAT_ZAMKNIECIA);delay(500);
                 serwo2.write(KAT_OTWARCIA);delay(500);
                 serwo2.write(KAT_ZAMKNIECIA);delay(500);
                 serwo2.write(KAT_OTWARCIA);          wyswietl(odpowiedzB);delay(1000);
                 serwo3.write(KAT_ZAMKNIECIA);delay(500);
                 serwo3.write(KAT_OTWARCIA);delay(500);
                 serwo3.write(KAT_ZAMKNIECIA);delay(500);
                 serwo3.write(KAT_OTWARCIA);          wyswietl(odpowiedzC);delay(1000);
                 serwo4.write(KAT_ZAMKNIECIA);delay(500);
                 serwo4.write(KAT_OTWARCIA);delay(500);
                 serwo4.write(KAT_ZAMKNIECIA);delay(500);
                 serwo4.write(KAT_OTWARCIA);          wyswietl(odpowiedzD);delay(1000);
                 
                 czy_prawidlowa=1;
                 zm1=analogRead(A0)*0.6;zm2=analogRead(A1)*0.6;zm3=analogRead(A2)*0.6;zm4=analogRead(A3)*0.6;
                  wyswietl("TWOJA ODPOWIEDZ ...");delay(500);
                 while(czy_prawidlowa){
                 
                  if(analogRead(FOTOREZYSTOR_A)<zm1){
                    if(prawidlowaODP!="A"){
                      blokada();
                      odeslane="bledna";
                      lcd.setRGB(255,0,0);wyswietl("ODPOWIEDZ A JEST NIE POPRAWNA");lcd.setRGB(255,255,255);
                      
                      czy_prawidlowa=0;
                      }else{
                      odeslane="popraw";
                       lcd.setRGB(0,255,0);wyswietl("ODPOWIEDZ A JEST POPRAWNA");lcd.setRGB(255,255,255);
                       czy_prawidlowa=0;
                      }
                      
                    }
                    if(analogRead(FOTOREZYSTOR_B)<zm2){
                    if(prawidlowaODP!="B"){
                      blokada();
                      odeslane="bledna";
                      lcd.setRGB(255,0,0);wyswietl("ODPOWIEDZ B JEST NIE POPRAWNA");lcd.setRGB(255,255,255);
                      
                      czy_prawidlowa=0;
                      }else{
                      odeslane="popraw";
                      lcd.setRGB(0,255,0); wyswietl("ODPOWIEDZ B JEST POPRAWNA");lcd.setRGB(255,255,255);
                       czy_prawidlowa=0;
                      }
                      
                    }
                    if(analogRead(FOTOREZYSTOR_C)<zm3){
                    if(prawidlowaODP!="C"){
                      blokada();
                      odeslane="bledna";
                      lcd.setRGB(255,0,0);wyswietl("ODPOWIEDZ C JEST NIE POPRAWNA");lcd.setRGB(255,255,255);
                      
                      czy_prawidlowa=0;
                      }else{
                      odeslane="popraw";
                      lcd.setRGB(0,255,0); wyswietl("ODPOWIEDZ C JEST POPRAWNA");lcd.setRGB(255,255,255);
                       czy_prawidlowa=0;
                      }
                      
                    }
                    if(analogRead(FOTOREZYSTOR_D)<zm4){
                    if(prawidlowaODP!="D"){
                      blokada();
                      odeslane="bledna";
                      lcd.setRGB(255,0,0);wyswietl("ODPOWIEDZ D JEST NIE POPRAWNA");lcd.setRGB(255,255,255);
                      
                      czy_prawidlowa=0;
                      }else{
                      odeslane="popraw";
                      lcd.setRGB(0,255,0);wyswietl("ODPOWIEDZ D JEST NIE POPRAWNA");lcd.setRGB(255,255,255);
                      czy_prawidlowa=0;
                      }
                      
                    }
                    
                  }
                  lcd.clear();               
                  lcd.setCursor(0,0);
                  lcd.print("ZACZEKAJ ...");
                  for(int i=0;i<1000;i++){
                    Serial.println(odeslane);delay(10);
                    }lcd.clear();               
                  lcd.setCursor(0,0);
                  lcd.print("KLIKNIJ 'ZAKONCZ'");

               pytanie = "";odpowiedzA="";odpowiedzB="";odpowiedzC="";odpowiedzD="";prawidlowaODP="";   
          }
        }   
         wyraz="";
  }

}
void wyswietl(String do_wyswietlenia){
lcd.clear(); lcd.setCursor(0,0);
        for(int znak=0, wyswietlane=0;znak<do_wyswietlenia.length();znak++){
          wyswietlane++;
          if(wyswietlane==16){
            wyswietlane=0;
            lcd.clear();                //WYŚWIETLANIE PYTANIA
            lcd.setCursor(0,0);
            }
          lcd.print(do_wyswietlenia[znak]);
          delay(250);
          }lcd.clear(); lcd.setCursor(0,0);
  }
void blokada(){
  serwo1.write(KAT_ZAMKNIECIA);
  serwo2.write(KAT_ZAMKNIECIA);
  serwo3.write(KAT_ZAMKNIECIA);
  serwo4.write(KAT_ZAMKNIECIA);
  delay(CZAS_ZAMKNIECIA);
  serwo1.write(KAT_OTWARCIA);
  serwo2.write(KAT_OTWARCIA);
  serwo3.write(KAT_OTWARCIA);
  serwo4.write(KAT_OTWARCIA);
  }
/*lcd.setCursor(0, 0);      -ustawianie kursora 
lcd.print(wyraz[thisChar]); -wyswietlanie komunikatu
lcd.clear();                -czyszczenie lcd
 lcd.setRGB(0,0,0);         -zmiana koloru ekranu*/
