// Question Link: https://codeforces.com/problemset/problem/489/B
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; i++) {
        cin >> boys[i];
    }

    int m;
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; i++) {
        cin >> girls[i];
    }
    sort(boys.begin(), boys.end());
    unordered_map<int, int> uGirls;
    for (int i : girls) {
        uGirls[i]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (uGirls.find(boys[i] - 1) != uGirls.end()) {
            uGirls[boys[i] - 1]--;
            ans++;
            if (uGirls[boys[i] - 1] <= 0) {
                uGirls.erase(boys[i] - 1);
            }
        } else if (uGirls.find(boys[i]) != uGirls.end()) {
            uGirls[boys[i]]--;
            ans++;
            if (uGirls[boys[i]] <= 0) {
                uGirls.erase(boys[i]);
            }
        } else if (uGirls.find(boys[i] + 1) != uGirls.end()) {
            uGirls[boys[i] + 1]--;
            ans++;
            if (uGirls[boys[i] + 1] <= 0) {
                uGirls.erase(boys[i] + 1);
            }
        }
    }
    cout << ans << endl;
}