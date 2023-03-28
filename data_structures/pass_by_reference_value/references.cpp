#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class MyClass{
public:
    MyClass(){
        x = 0;
    }

    MyClass(const MyClass& obj){
        cout << "Copied: " << &obj 
        << " to " << this << endl;
        x = obj.x;
    }

    int x;
};


int main(){

    MyClass c1;
    c1.x = 10;

    MyClass c2 = c1;
    
    cout << &c1 << " c1.x: " << c1.x << endl;
    cout << &c2 << " c2.x: " << c2.x << endl;

    cout << endl;

    c2.x = 30;

    cout << "c1.x: " << c1.x << endl;
    cout << "c2.x: " << c2.x << endl;

    cout << endl;

    MyClass& c3 = c1;
    c3.x = 40;
    cout << "c3: " << &c3 << endl;
    cout << "c1.x: " << c1.x << endl;
    cout << "c3.x: " << c3.x << endl;
    
    return 0;
}