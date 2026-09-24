// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/C
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    long long p, q;
    cin >> p >> q;

    long long a = min(p, q);
    long long b = max(p, q);

    long long sumTill_a = a * (a + 1) / 2;
    long long sumTill_b = b * (b + 1) / 2;

    long long sum = sumTill_b - sumTill_a + a;

    long long x = 0;
    if (a % 2 == 0) {
        x = a;
    } else {
        x = a + 1;
    }

    long long y = 0;
    if (b % 2 == 0) {
        y = b;
    } else {
        y = b - 1;
    }
    long long n = ((y - x) / 2) + 1;

    cout << sum << endl;
    cout << (x + y) * n / 2 << endl;
    cout << sum - (x + y) * n / 2 << endl;
}