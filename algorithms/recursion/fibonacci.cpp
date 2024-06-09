#include <cstdio>
#include <iostream>

using namespace std;

long fib(int n){
    if (n == 0) return 0;
    else if (n == 1) return 1;

    return fib(n-1) + fib(n-2);
}

int main(){

    // for (int i = 0; i < 100; i++){
    //     int ans = fib(i);

    //     cout << "fib(" << i << ") = " << ans << endl;

    // }
    int n = 50;
    long ans = fib(n);

    cout << "fib(" << n << ") = " << ans << endl;

    return 0;
}