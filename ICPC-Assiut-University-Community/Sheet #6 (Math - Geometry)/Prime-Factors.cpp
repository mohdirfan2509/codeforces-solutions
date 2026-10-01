// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/J
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;

    for (long long i = 2; i * i <= n; i++) {
        if (n % 1 == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long n;
    cin >> n;

    if (isPrime(n)) {
        cout << "(" << n << "^" << 1 << ")" << endl;
    } else {
        unordered_map<long long, long long> um;
        long long x = n;
        long long divisor = 2;
        while (x > 1) {
            if (x % divisor == 0) {
                x = x / divisor;
                um[divisor]++;
            } else {
                divisor++;
            }
        }
        vector<pair<long long, long long>> arr(um.begin(), um.end());
        sort(arr.begin(), arr.end());
        long long m = arr.size();
        for (long long j = 0; j < m; j++) {
            if (j <= m - 2) {
                cout << "(" << arr[j].first << "^" << arr[j].second << ")" << "*";
            } else {
                cout << "(" << arr[j].first << "^" << arr[j].second << ")";
            }
        }
        cout << endl;
    }
}