// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    x = x - 1;
    y = y - 1;
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >=0 && nx <n && ny >=0 && ny <m){
            if(arr[nx][ny]=='.'){
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;
}