// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1;
    if (n == 1) {
        cout << 1 << endl;
    } else {
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}