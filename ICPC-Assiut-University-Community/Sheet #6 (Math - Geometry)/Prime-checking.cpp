// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/B
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long n;
    cin >> n;

    if (isPrime(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}