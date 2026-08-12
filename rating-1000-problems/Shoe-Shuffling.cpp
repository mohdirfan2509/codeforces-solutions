// Question Link: https://codeforces.com/problemset/problem/1691/B
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        map<int, int> mp;
        for (int j = 0; j < n; j++) {
            mp[arr[j]]++;
        }
        vector<int> ans;
        int index = 1;
        bool flag = true;
        for (auto [value, freq] : mp) {
            if (freq == 1) {
                cout << -1 << endl;
                flag = false;
                break;
            } else {
                ans.push_back(index + freq - 1);
                for (int j = 1; j <= freq - 1; j++) {
                    ans.push_back(index);
                    index++;
                }
                index++;
            }
        }
        if (flag) {
            for (int x : ans) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}