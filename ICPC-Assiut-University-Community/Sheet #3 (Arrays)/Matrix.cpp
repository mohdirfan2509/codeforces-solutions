// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int mainDiagSum=0;
    int secDiagSum=0;
    for (int i = 0; i < n; i++) {
        mainDiagSum+=arr[i][i];
        secDiagSum+=arr[i][n-i-1];
    }
    cout << abs(mainDiagSum-secDiagSum) << endl;    
}