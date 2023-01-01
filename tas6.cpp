#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void gotoA(int x,int y);
void gotoW(int x,int y);
void gotoA1(int x,int y);
void gotoI(int x,int y);
void gotoS(int x,int y);
main(){
    system("cls");
    int x=10;
    int y=5;
    gotoA(x,y);
    gotoW(x,y);
    gotoA1(x,y);
    gotoI(x,y);
    gotoS(x,y);
}

void gotoxy(int x,int y){
     COORD coordinates;
     coordinates.X = x;
     coordinates.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }

void gotoA(int x,int y){
        gotoxy(x,y+1);
        cout<<"A";
}
void gotoW(int x,int y){
       gotoxy(x,y+2);
       cout<<"W";
}
void gotoA1(int x,int y){
       gotoxy(x,y+3);
       cout<<"A";
}
void gotoI(int x,int y){
       gotoxy(x,y+4);
       cout<<"I";
}
void gotoS(int x,int y){
       gotoxy(x,y+5);
       cout<<"S";
}