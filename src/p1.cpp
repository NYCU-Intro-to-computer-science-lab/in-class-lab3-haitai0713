// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int n, bool call){
    if(n != 1 && n != 2) return 0;
    if((n == 1 && call == 0)||( n == 2 && call == 0)){
        cout << "SEARCH fib(" << n << ")" << endl;
        cout << "GET fib(" << n << ") = 1" << endl;
    }
    if((n == 1 && call == 1)||( n == 2 && call == 1)){
        return 1;
    }
}

int main() {
    int n;
    bool call = 1;
    cin >> n;
    fib(n, 0);
    cout << fib(n, 1) << endl;
}
