#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> arr(r);
    for (int i = 0; i < r; i++) {
        string temp;
        cin >> temp;
        arr[i] = temp;
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == '.') {
                arr[i][j] = 'D';
            }
        }
    }
    bool flag = true;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == 'S') {
                if ((j + 1 < c && arr[i][j + 1] == 'W'  ) || ( j - 1 >= 0 && arr[i][j - 1] == 'W' ) || (i - 1 >= 0 && arr[i - 1][j] == 'W') || (i + 1 < r && arr[i + 1][j] == 'W')) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == false) break;
    }
    if (flag) {
        cout << "YES" << endl;
        for (int i = 0; i < r; i++) {
            cout << arr[i] << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}