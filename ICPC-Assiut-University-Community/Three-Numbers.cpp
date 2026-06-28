// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int k, s;
    cin >> k >> s;
    int ans = 0;
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            if (s - i - j >= 0 && s - i - j <= k) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
