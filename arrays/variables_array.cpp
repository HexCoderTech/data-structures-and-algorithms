#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int x[5];
    int y[5] = {1, 2, 3, 4, 5};
    int z[5] = {1, 2};

    x[0] = 25;
    x[6] = 100;

    cout << "x[6] = " << x[6] << endl;

    for (int i=0; i < sizeof(x)/sizeof(int); i++){
        cout << "x[" << i << "] = " << x[i] << " " << &x[i] << " --> " << (long)&x[i] << endl;
    }

    cout << endl;

    double a[5];

    for (int i=0; i < sizeof(a)/sizeof(double); i++){
        cout << "a[" << i << "] = " << &a[i] << " --> " << (long)&a[i] << endl;
    }

    cout << endl;
    
    return 0;
}