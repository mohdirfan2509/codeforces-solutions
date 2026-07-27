// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= (m % 2 == 0 ? (m / 2) - 1 : m / 2); j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][m - j - 1];
            arr[i][m - j - 1]=temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}