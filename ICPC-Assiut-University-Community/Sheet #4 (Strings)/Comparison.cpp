// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/X
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    string ans = s;
    for (int i = 0; i < n - 1; i++) {
        string s1 = s.substr(0, i + 1);
        string s2 = s.substr(i + 1, n - i);

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        ans = min(ans, s1 + s2);
    }
    cout << ans << endl;
}