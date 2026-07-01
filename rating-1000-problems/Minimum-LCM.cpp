// Question Link: https://codeforces.com/problemset/problem/1765/M
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        long long n;
        cin >> n;
        bool found = false;
        if (n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << endl;
            found=true;
        } else {
            for (long long j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    long long d = n / j;
                    found = true;
                    cout << d << " " << n - d << endl;
                    break;
                }
            }
        }

        if (!found) {
            cout << 1 << " " << n - 1 << endl;
        }
    }
}