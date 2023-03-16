#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    
    int a;
    cout << "a: " << &a << endl;
    bool b;
    cout << "b: " << &b << endl;
    char c = 65;
    cout << "c: " << &c << endl;
    double d;
    cout << "d: " << &d << endl;
    
    return 0;
}