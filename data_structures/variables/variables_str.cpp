#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    const char* x = "Hello";
    const char* y = "Hiii";
    const char* z = "Hello";

    const char** p_x = &x;
    const char** p_y = &y;
    const char** p_z = &z;

    cout << "x: " << &x << endl;
    cout << "y: " << &y << endl;
    cout << "z: " << &z << endl;

    cout << "&x - &y = " << (p_x - p_y) * sizeof(char) << endl;
    cout << "&y - &z = " << (p_y - p_z) * sizeof(char) << endl;
    
    return 0;
}