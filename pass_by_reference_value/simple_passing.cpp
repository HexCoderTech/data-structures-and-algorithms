#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

void passByValue(int myInt){
    myInt = 100;
    cout << "changed value to " << myInt << endl;
}

void passByReference(int& myInt){
    myInt = 100;
    cout << "changed value to " << myInt << endl;
}

int main(){

    int i1 = 10;
    int i2 = i1;
    
    cout << &i1 << " i1: " << i1 << endl;
    passByValue(i1);
    cout << &i1 << " i1: " << i1 << endl;
    cout << endl;

    cout << &i2 << " i2: " << i2 << endl;
    passByReference(i2);
    cout << &i2 << " i2: " << i2 << endl;
    
    return 0;
}