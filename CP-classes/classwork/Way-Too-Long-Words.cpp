// Question Link: https://codeforces.com/contest/71/problem/A

#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        string s;
        cin >> s;
        int n = s.size();
        if (n > 10) {
            cout << s[0] << n - 2 << s[n - 1] << endl;
        } else {
            cout << s << endl;
        }
    }
}