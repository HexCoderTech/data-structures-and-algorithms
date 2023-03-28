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

void passByValue(MyClass myClass){
    myClass.x = 100;
    cout << "changed value to " << myClass.x << endl;
}

void passByReference(MyClass& myClass){
    myClass.x = 100;
    cout << "changed value to " << myClass.x << endl;
}

int main(){

    MyClass c1;
    c1.x = 10;

    MyClass c2 = c1;
    
    cout << &c1 << " c1.x: " << c1.x << endl;
    passByValue(c1);
    cout << &c1 << " c1.x: " << c1.x << endl;
    cout << endl;

    cout << &c2 << " c2.x: " << c2.x << endl;
    passByReference(c2);
    cout << &c2 << " c2.x: " << c2.x << endl;
    
    return 0;
}