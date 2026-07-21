// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> x;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == x) {
                flag = false;
            }
        }
    }
    if (flag) {
        cout << "will take number" << endl;
    } else {
        cout << "will not take number" << endl;
    }
}