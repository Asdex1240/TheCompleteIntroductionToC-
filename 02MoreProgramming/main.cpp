#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string ans1;
    int ans2;
    cout<<"Hey what do you want to eat? "<<endl;
    getline(cin, ans1);
    cout<<"How many slices do you want? ";
    cin>>ans2;
    cout<<"You want to eat "<<ans1<<endl;
    cout<<"You want "<<ans2<<" slices of "<<ans1<<endl;

    
    return 0;
}