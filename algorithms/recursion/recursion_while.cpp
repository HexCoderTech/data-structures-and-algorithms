#include <cstdio>
#include <iostream>

using namespace std;


int factorial(int n){
    int i = n;
    int answer = n;
    while(i > 1){
        answer = answer * --i;
    }
    return answer;
}

int main(){
    int x = factorial(5);
    cout << "X: " << x << endl;
    return 0;
}