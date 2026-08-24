// Question Link: https://codeforces.com/problemset/problem/433/B
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
    vector<long long> pfSum(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        pfSum[i] = sum;
    }

    sort(arr.begin(), arr.end());
    vector<long long> sortedPfSum(n);
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        sortedPfSum[i] = sum;
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int type;
        int l;
        int r;
        cin >> type >> l >> r;
        l -= 1;
        r -= 1;
        if (type == 1) {
            if (l == 0) {
                cout << pfSum[r] << endl;
            } else {
                cout << pfSum[r] - pfSum[l - 1] << endl;
            }
        } else {
            if (l == 0) {
                cout << sortedPfSum[r] << endl;
            } else {
                cout << sortedPfSum[r] - sortedPfSum[l - 1] << endl;
            }
        }
    }
}