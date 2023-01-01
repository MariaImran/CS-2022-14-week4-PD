#include <iostream>
using namespace std;
void printMenu();
void calculateaggregateStd1(string nameStd1, float matricMarksStd1, float interMarksStd1, float ecatMarksStd1, float aggregateStd1);
void calculateaggregateStd2(string nameStd2, float matricMarksStd2, float interMarksStd2, float ecatMarksStd2, float aggregateStd2);
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2);
main(){
here:
       system("cls");
       printMenu();
       string nameStd1, nameStd2;
       float matricMarksStd1, matricMarksStd2, interMarksStd1, interMarksStd2, ecatMarksStd1, ecatMarksStd2, aggregateStd1, aggregateStd2;
       int x;
       char c;
       cout<<"Enter 1 for student 1 details" <<endl;
       cout<<"Enter 2 for student 2 details" <<endl;
       cout<<"Enter 3 for student 1 aggregate" <<endl;
       cout<<"Enter 4 for student 2 aggregate" <<endl;
       cout<<"Enter 5 for student with roll no. 1" <<endl;
       cout<<"Enter choice:";
       cin >> x;
       if(x == 1){
                  cout<<"Enter name:";
                  cin >> nameStd1;
                  cout<<"Enter matric marks:";
                  cin >> matricMarksStd1;
                  cout<<"Enter inter marks:";
                  cin >> interMarksStd1;
                 }
      if(x == 2){
                  cout<<"Enter name:";
                  cin >> nameStd2;
                  cout<<"Enter matric marks:";
                  cin >> matricMarksStd2;
                  cout<<"Enter inter marks:";
                  cin >> interMarksStd2;
                 }
     if(x == 3){
                 calculateaggregateStd1(nameStd1, matricMarksStd1, interMarksStd1, ecatMarksStd1, aggregateStd1);
                 cout<<endl;
                 }
     if(x == 4){
                 calculateaggregateStd2(nameStd2, matricMarksStd2, interMarksStd2, ecatMarksStd2, aggregateStd2);
                 cout<<endl;
                 }
     if(x == 5){
                 compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
                 cout<<endl;
                 }
     cout<<"Enter any character to continue:";
     cin >> c;
     cout<<endl;
     goto here;
}
void printMenu(){
cout<<"*****************************" <<endl;
cout<<"*  UNIVERSITY   ADMISSION   *" <<endl;
cout<<"*                           *" <<endl;
cout<<"*  MANAGEMENT    SYSTEM     *" <<endl;
cout<<"*                           *" <<endl;
cout<<"*                           *" <<endl;
cout<<"*****************************" <<endl;
}
void calculateaggregateStd1(string nameStd1, float matricMarksStd1, float interMarksStd1, float ecatMarksStd1, float aggregateStd1){
cout <<"student 1 name is :";
cin >>nameStd1;
cout <<"student 1 matric marks are :";
cin >>matricMarksStd1;
cout <<"student 1 intermediate marks are :";
cin >>interMarksStd1;
cout <<"student 1 ecat marks are :";
cin >>ecatMarksStd1;
matricMarksStd1=(matricMarksStd1*10)/1100;
interMarksStd1=(interMarksStd1*40)/1100;
ecatMarksStd1=(ecatMarksStd1*50)/400;
aggregateStd1=matricMarksStd1+interMarksStd1+ecatMarksStd1;
cout <<nameStd1 <<" aggregate is" <<aggregateStd1;
}
void calculateaggregateStd2(string nameStd2, float matricMarksStd2, float interMarksStd2, float ecatMarksStd2, float aggregateStd2){
cout <<"student 2 name is :";
cin >>nameStd2;
cout <<"student 2 matric marks are :";
cin >>matricMarksStd2;
cout <<"student 2 intermediate marks are :";
cin >>interMarksStd2;
cout <<"student 2 ecat marks are :";
cin >>ecatMarksStd2;
matricMarksStd2=(matricMarksStd2*10)/1100;
interMarksStd2=(interMarksStd2*40)/1100;
ecatMarksStd2=(ecatMarksStd2*50)/400;
aggregateStd2=matricMarksStd2+interMarksStd2+ecatMarksStd2;
cout <<nameStd2 <<" aggregate is" <<aggregateStd2;
}
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2){
   cout<<"Enter student 1 name:";
   cin >> nameStd1;
   cout<<"Enter student 2 name:";
   cin >> nameStd2;
   cout<<"Enter ecat marks of student 1:";
   cin >> ecatMarksStd1;
   cout<<"Enter ecat marks of student 2:";
   cin >> ecatMarksStd2;
   if(ecatMarksStd1>ecatMarksStd2){
       cout<<nameStd1 <<"is roll no. 1" <<endl;
   }
   if(ecatMarksStd1<ecatMarksStd2){
       cout<<nameStd2 <<"is roll no. 1" <<endl;
   }
   if(ecatMarksStd1==ecatMarksStd2){
       cout<<"Both have same marks." <<endl;
   }
}