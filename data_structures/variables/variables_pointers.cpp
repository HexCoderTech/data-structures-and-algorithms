#include <cstdio>
#include <iostream>

using namespace std;

struct myStruct
{
    int x;
    bool y;
    double z;
};


int main(){
    
    myStruct* x = nullptr;
    myStruct* y = new myStruct();
    myStruct* z;

    y->x = 20;
    
    // copies the object into stack
    myStruct a = *y;
    a.x = 10;

    

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    cout << "Size: " << sizeof(myStruct*) << endl;
    cout << "x - y = " << (x - y) << endl;
    cout << "y - z = " << (y - z) << endl;

    cout << "&y = " << &y << endl;
    cout << "y value = " << y->x << endl;
    cout << "a value = " << a.x << endl;

    // Creates a reference variable.
    // Note the & after the data type.
    // It doesn't copy the object.
    // It only copies the memory address.
    myStruct& b = *y;
    b.x = 30;
    cout << "y value = " << y->x << endl;
    cout << "b value = " << b.x << endl;
    
    return 0;
}