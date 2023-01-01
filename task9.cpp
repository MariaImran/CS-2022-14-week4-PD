#include <iostream>
#include <windows.h>
using namespace std;
void reverse(string input);
main(){
string input;
    while(true){
        cout<<"Enter input";
        cin>>input;
        reverse(input);
}
}    
void reverse(string input){
        if(input=="true"){
           cout<<"false" <<endl;
        }
        if(input=="false"){
           cout<<"true" <<endl;
        }
}





