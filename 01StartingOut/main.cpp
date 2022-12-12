#include <iostream>

using namespace std;

int main(){

    string try1 = "a simple sentence hello world! 2 3 4" ;
    double size2 = try1.max_size();
    double size1 = try1.size();
    int find1 = try1.find("simple",0);
    try1.clear();

    cout << size1 << endl;
    cout << size2 << endl;
    cout << find1 << endl;

    return 0;
}