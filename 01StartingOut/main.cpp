#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a = 34; 
    double b = 56.7;
    double c = 95.45;
    double d = 87.23;
    //We can use all the basic arithmetic operators
    double x = a/b;
    double y = c*d;
    double z = c+x/a+(b+c)*9;

    //Exists min, max, floor, ceil, round, abs, pow, sqrt, fmod
    double op1 = round(z);

    cout<<op1<<endl;

    return 0;
}