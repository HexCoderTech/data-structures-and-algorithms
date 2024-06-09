#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

map<int, long> cache;

long fib(int n){
    // cache.contains(n)
    if(cache.find(n) == cache.end()){
        if (n == 0) return 0;
        else if (n == 1) return 1;
        long f_1 = fib(n-1);
        long f_2 = fib(n-2);

        cache[n-1] = f_1;
        cache[n-2] = f_2;

        return f_1 + f_2;
    }else{
        return cache[n];
    }

    
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