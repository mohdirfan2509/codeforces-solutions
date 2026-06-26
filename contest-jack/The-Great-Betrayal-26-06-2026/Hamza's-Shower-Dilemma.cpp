#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> arr(n);
        for (int j = 0; j < n; j++) {
            int fst, sec;
            cin >> fst >> sec;
            arr[j].first = fst;
            arr[j].second = sec;
        }
        int ans = 0;
        ans = max(ans, arr[0].first);
        for (int j = 0; j < n - 1; j++) {
            ans = max(ans, arr[j + 1].first - arr[j].second);
        }
        ans = max(ans, m - arr[n - 1].second);
        if (ans >= s) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}