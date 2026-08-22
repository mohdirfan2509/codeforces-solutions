// Question Link: https://codeforces.com/problemset/problem/230/A
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    sort(arr.begin(), arr.end());

    string ans = "YES";
    for (int i = 0; i < n; i++) {
        int x = arr[i].first;
        int y = arr[i].second;

        if (x >= s) {
            ans = "NO";
            break;
        } else {
            s += y;
        }
    }
    cout << ans << endl;
}