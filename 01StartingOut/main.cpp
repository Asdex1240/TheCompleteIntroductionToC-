#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string name = "Bob";
    cout<<"Hello "<<name<<endl;
    int val1 = 2;
    int val2 = 12;
    cout<<"You ate "<<min(val1, val2)<<" slices of pizza and it cost you "<<max(val1, val2)<<" dollars"<<endl;
    string ex1 = "run";
    int val3 = 30;
    int val4 = 400;
    cout<<"You have also "<<ex1<<" for about "<<min(val3, val4)<<" minutes and burned about "<<max(val3, val4)<<" calories"<<endl;
    int val5 = 500;
    cout<<"Your calorie intake for the day is "<<val5-val4<<" calories"<<endl;

    return 0;
}