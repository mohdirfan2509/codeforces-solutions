#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        arr[i].first=a;
        arr[i].second=b;
        // cout << arr[i].first << " " << arr[i].second << endl;
    }
    bool flag = true;
    arr[0].second=max(arr[0].first,arr[0].second);
    for (int i = 1; i < n; i++) {

        if(max(arr[i].first,arr[i].second)<arr[i-1].second){

        }

        if (min(arr[i].first,arr[i].second)>arr[i-1].second) {
            cout << "NO" << endl;
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "YES" << endl;
    }
}