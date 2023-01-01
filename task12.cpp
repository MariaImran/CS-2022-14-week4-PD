#include <iostream>
#include <windows.h>
using namespace std;
void flower(int x,int y,int z,float originalprice,float price);
main(){
    int x,y,z;
    float originalprice,price;
    while(true){
      cout<<"Enter number of red roses";
      cin>>x;
      cout<<"Enter number of white roses";
      cin>>y;
      cout<<"Enter number of tulips";
      cin>>z;
      flower(x,y,z,originalprice,price);
}
}

void flower(int x,int y,int z,float originalprice,float price){
      originalprice=(2.00*x + 4.10*y + 2.50*z);
       if(originalprice >200){
         price= originalprice - (originalprice*0.2);
         cout<<"price is" <<price <<endl;
        }
      if(originalprice<=200){
        cout<<"price is" <<originalprice <<endl;
}
}




