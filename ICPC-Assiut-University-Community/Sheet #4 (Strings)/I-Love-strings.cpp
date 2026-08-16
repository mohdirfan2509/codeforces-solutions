// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        int p1 = 0;
        int p2 = 0;
        while (p1 < n && p2 < m) {
            cout << s[p1] << t[p2];
            p1++;
            p2++;
        }
        while (p1 < n) {
            cout << s[p1];
            p1++;
        }
        while (p2 < m) {
            cout << t[p2];
            p2++;
        }
        cout << endl;
    }
}