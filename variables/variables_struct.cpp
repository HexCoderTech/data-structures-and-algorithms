#include <cstdio>
#include <iostream>

using namespace std;

struct myStruct
{
    int x;
    int x2;
    bool y;
    bool y2;
    double z;
};


int main(){
    
    myStruct x;
    myStruct y = {1, 2, false, true, 1.2};
    myStruct z;

    cout << "x: " << &x << endl;
    cout << "y: " << &y << endl;
    cout << "z: " << &z << endl;

    cout << "Size: " << sizeof(myStruct) << endl;
    cout << "&x - &y = " << (&x - &y) * sizeof(myStruct) << endl;
    cout << "&y - &z = " << (&y - &z) * sizeof(myStruct) << endl;
    
    return 0;
}