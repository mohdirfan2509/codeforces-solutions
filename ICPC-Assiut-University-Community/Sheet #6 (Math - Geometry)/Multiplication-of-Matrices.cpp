// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/F
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int m1, n1;
    cin >> m1 >> n1;

    vector<vector<int>> mat1(m1, vector<int>(n1));
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cin >> mat1[i][j];
        }
    }

    int m2, n2;
    cin >> m2 >> n2;

    vector<vector<int>> mat2(m2, vector<int>(n2));
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> mat2[i][j];
        }
    }

    vector<vector<int>> ans(m1, vector<int>(n2));
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}