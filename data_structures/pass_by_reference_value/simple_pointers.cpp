#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){

    int* i1 = new int(10);
    int* i2 = i1;

    cout << "i1: " << &i1 << " = " << i1 << " = " << *i1 << endl;
    cout << "i2: " << &i2 << " = " << i2 << " = " << *i2 << endl;
    
    cout << endl;

    *i2 = 20;
    cout << "i1: " << &i1 << " = " << i1 << " = " << *i1 << endl;
    cout << "i2: " << &i2 << " = " << i2 << " = " << *i2 << endl;

    cout << endl;

    int*& i3 = i1;
    *i3 = 100;
    cout << "i1: " << &i1 << " = " << i1 << " = " << *i1 << endl;
    cout << "i2: " << &i2 << " = " << i2 << " = " << *i2 << endl;
    cout << "i3: " << &i3 << " = " << i3 << " = " << *i3 << endl;
    
    return 0;
}