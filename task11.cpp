#include <iostream>
#include <windows.h>
using namespace std;
void speed(int x);
main(){
    int x;
  while(true){
    cout<<"enter speed";
    cin>>x;
    speed(x);

}
}
void speed(int x){
    if(x <= 100){
       cout<<"Perfect!You're going good." <<endl;
       }
    if(x > 100){
       cout<<"Halt.... YOU WILL BE CHALLENGED!!!" <<endl;
      }
}





