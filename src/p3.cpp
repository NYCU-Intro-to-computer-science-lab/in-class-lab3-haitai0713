// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    bool ans = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) ans = 0;
    }
    return ans;
}

int main() {
    int n;
    cin >> n; //n必為偶數
    int a, b;
    for(int i = 2; i <= n/2; i++){
        if(isPrime(i) && isPrime(n-i)){
            a = i;
            b = n - i;
            break;
        }
    }
    cout << a << ' ' << b << endl;
}
