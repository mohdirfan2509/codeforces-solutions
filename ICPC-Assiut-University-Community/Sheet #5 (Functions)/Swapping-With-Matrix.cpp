// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

void swapRows(int x, int y, vector<vector<int>>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int temp = arr[x][i];
        arr[x][i] = arr[y][i];
        arr[y][i] = temp;
    }
}

void swapColumns(int x, int y, vector<vector<int>>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int temp = arr[i][x];
        arr[i][x] = arr[i][y];
        arr[i][y] = temp;
    }
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    x--;
    y--;
    swapRows(x, y, arr);
    swapColumns(x, y, arr);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}