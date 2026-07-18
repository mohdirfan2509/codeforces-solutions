// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool isEven = true;
    int ans = 0;
    while (isEven) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0 && arr[i] != 0) {
                arr[i] = arr[i] / 2;
            } else {
                isEven = false;
            }
        }
        if (isEven) {
            ans++;
        }
    }
    cout << ans << endl;
}