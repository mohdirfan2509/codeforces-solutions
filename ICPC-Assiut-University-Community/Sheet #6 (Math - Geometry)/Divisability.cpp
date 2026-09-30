// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/I
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    long long a, b, x;
    cin >> a >> b >> x;
    long long ans = 0;
    for (long long i = min(a, b); i <= max(a, b); i++) {
        if (i % x == 0) {
            ans += i;
        }
    }
    cout << ans << endl;
}