// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    bool flag1 = true;
    bool flag2 = true;
    if (n == 1) {
        cout << 0 << endl;
        flag1 = false;
    }
    if (n == 2) {
        cout << 1 << " ";
        flag2=false;
    }
    long long a = 0;
    long long b = 1;
    long long ans = 0;
    for (long long i = 3; i <= n; i++) {
        long long c = a + b;
        ans = max(ans, c);
        a = b;
        b = c;
    }
    if (flag1 && flag2) {
        cout << ans << endl;
    }
}