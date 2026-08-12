// Question Link: https://codeforces.com/problemset/problem/1690/D
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> pfsum(n);
        int pSum = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] == 'W') {
                pSum++;
            }
            pfsum[j] = pSum;
        }

        vector<int> sfsum(n);
        int sSum = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (s[j] == 'W') {
                sSum++;
            }
            sfsum[j] = sSum;
        }
        bool flag1 = true;
        bool noWhites = true;
        int ans = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (j + 1 >= k) {
                flag1 = false;
                ans = min(ans, pfsum[j]);
            }

            if (n - j >= k) {
                flag1 = false;
                ans = min(ans, sfsum[j]);
            }
        }
        cout << ans << endl;
    }
}