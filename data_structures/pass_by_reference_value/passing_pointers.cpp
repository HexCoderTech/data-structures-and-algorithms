#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class MyClass{
public:
    MyClass(){
        x = 0;
    }
    int x;
};

void passByValue(MyClass* myClass){
    cout << "v: " << &myClass << " - " << myClass << " - " << myClass->x << endl;
    myClass->x = 100;
    cout << "v: " << &myClass << " - " << myClass << " - " << myClass->x << endl;
}

void passByReference(MyClass*& myClass){
    cout << "r: " << &myClass << " - " << myClass << " - " << myClass->x << endl;
    myClass->x = 100;
    cout << "r: " << &myClass << " - " << myClass << " - " << myClass->x << endl;
}

int main(){

    MyClass* c1 = new MyClass();
    c1->x = 10;

    MyClass* c2 = c1;
    
    // cout << &c1 << " - " << c1 << " - " << c1->x << endl;
    // passByValue(c1);
    // cout << &c1 << " - " << c1 << " - " << c1->x << endl;
    // cout << endl;

    cout << &c2 << " - " << c2 << " - " << c2->x << endl;    
    passByReference(c2);
    cout << &c2 << " - " << c2 << " - " << c2->x << endl;
    
    return 0;
}