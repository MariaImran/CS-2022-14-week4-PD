#include <iostream>
#include <windows.h>
using namespace std;
void isEqual(int x,int y);
main(){
    int x;
    int y;
   while(true){
     cout<<"enter number 1:";
     cin>>x;
     cout<<"enter number 2:";
     cin>>y;
      if(x == y){
           cout<<"true" <<endl;
       }
      if(x != y){
           cout<<"False" <<endl;
       }
}
}





