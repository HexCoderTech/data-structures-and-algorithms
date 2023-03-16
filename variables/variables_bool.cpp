#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    
    bool x;
    bool y = true;
    bool z = false;

    bool* p_x = &x;
    bool* p_y = &y;
    bool* p_z = &z;

    cout << "x: " << &x << endl;
    cout << "y: " << &y << endl;
    cout << "z: " << &z << endl;
    cout << "size: " << sizeof(p_x) << endl;
    return 0;
}