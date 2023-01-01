#include <iostream>
#include <windows.h>
using namespace std;
void company(string name,int price,float finalprice);
main(){
   string name;
   int price;
   float finalprice;
   while(true){
    cout<<"enter country name";
    cin>>name; 
    cout<<"enter ticket price";
    cin>>price;
    company(name,price,finalprice);
}
}
void company(string name,int price,float finalprice){
     if(name=="pakistan"){
      finalprice= price-(0.05*price);
      cout<<"final price is:";
      cout<<finalprice <<endl;
     }
if(name=="ireland"){
      finalprice= price-(0.1*price);
      cout<<"final price is:";
      cout<<finalprice <<endl;
     }
if(name=="india"){
      finalprice= price-(0.2*price);
      cout<<"final price is:";
      cout<<finalprice <<endl;
     }
if(name=="england"){
      finalprice= price-(0.3*price);
      cout<<"final price is:";
      cout<<finalprice <<endl;
     }
if(name=="canada"){
      finalprice= price-(0.45*price);
      cout<<"final price is:";
      cout<<finalprice <<endl;
     }
}






