#include <iostream>
using namespace std;
void timeForSleep(int holidays);
main(){
int holidays;
    while(true){
                cout<<"Enter number of holidays";
                cin>>holidays;
                timeForSleep(holidays);
                }
}
void timeForSleep(int holidays){
int workingDays, differenceFromNorm, timeForGames, hours, minutes;
      workingDays= 365 - holidays;
      timeForGames =(workingDays*63)+(holidays*127);
      differenceFromNorm = timeForGames-30000;
      if(timeForGames >= 30000){
          cout<<"Tom will run away" <<endl;
          hours= differenceFromNorm/60;
          minutes= differenceFromNorm -(hours*60);
          cout<<hours <<"hours and";
          cout<<minutes <<"minutes" <<endl;
        }
      if(timeForGames < 30000){
          cout<<"Tom sleeps well" <<endl;
          hours= differenceFromNorm/60;
          minutes= differenceFromNorm-(hours*60);
          cout<<hours <<"hours and";
          cout<<minutes <<"minutes" <<endl;
        }
}