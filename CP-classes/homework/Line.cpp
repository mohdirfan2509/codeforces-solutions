// Question Link: https://codeforces.com/problemset/problem/1722/D
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long total = 0;
        for (long long j = 0; j < n; j++) {
            if (s[j] == 'L') {
                total += j;
            } else {
                total += n - 1 - j;
            }
        }
        vector<long long> ans;

        for (long long j = 0; j < n; j++) {
            if (s[j] == 'L') {
                ans.push_back((n - 1 - j) - j);
            } else {
                ans.push_back(j - (n - 1 - j));
            }
        }
        sort(ans.rbegin(), ans.rend());
        for (long long x : ans) {
            if (x > 0) {
                total += x;
            }
            cout << total << " ";
        }
        cout << endl;
    }
}