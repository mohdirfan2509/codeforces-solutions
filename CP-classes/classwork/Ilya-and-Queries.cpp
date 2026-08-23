// Question Link: https://codeforces.com/contest/313/problem/B
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    int m;
    cin >> s >> m;

    int n = s.size();
    vector<int> arr(n, 0);
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) arr[i] = 1;
    }
    vector<int> pfSum(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        pfSum[i] = sum;
    }

    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        l -= 1;
        r -= 1;
        if (l == 0) {
            cout << pfSum[r-1] << endl;
        } else {
            cout << pfSum[r-1] - pfSum[l-1] << endl;
        }
    }
}