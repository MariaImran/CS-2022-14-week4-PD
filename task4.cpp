#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
void move(int x, int y);

main(){
    system("cls");
    printMaze();
    int x=4;
    int y=3;
 while(true){
    move(x,y);
    if(x < 20){
       x=x+1;
}
    if(x == 20){
        gotoxy(x-1,y);
        cout<<" ";
        x=4;
} 
}
}

void gotoxy(int x,int y){
     COORD coordinates;
     coordinates.X = x;
     coordinates.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }

void printMaze(){
    cout<<"*************************" <<endl;
    cout<<"*                       *" <<endl;
    cout<<"*                       *" <<endl;
    cout<<"*                       *" <<endl;
    cout<<"*                       *" <<endl;
    cout<<"*                       *" <<endl;
    cout<<"*                       *" <<endl;
    cout<<"*************************" <<endl;
}

void move(int x,int y){
       gotoxy(x-1,y);
       cout<<" ";
       gotoxy(x,y);
       cout<<"P";
       Sleep(500);
}