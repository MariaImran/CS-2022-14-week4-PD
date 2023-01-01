#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
main(){
    gotoxy(4,10);
    cout<<"MARIA IMRAN";

}
void gotoxy(int x,int y){
     COORD coordinates;
     coordinates.X = x;
     coordinates.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }