#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    
    int x;
    int y;
    int z = 20;

    int* p_x = &x;
    int* p_y = &y;
    int* p_z = &z;

    cout << "x: " << &x << endl;
    cout << "y: " << &y << endl;
    cout << "z: " << &z << endl;

    cout << "&x - &y = " << (p_x - p_y) * sizeof(int*) << endl;
    cout << "&y - &z = " << (p_y - p_z) * sizeof(int*) << endl;
    
    return 0;
}