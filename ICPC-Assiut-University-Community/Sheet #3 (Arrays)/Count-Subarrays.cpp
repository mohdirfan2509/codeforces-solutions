// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        int ans = 0;
        for (int j = 0; j < n; j++) {
            for (int k = j; k < n; k++) {
                bool isIncreasing = true;
                for (int l = j + 1; l <= k; l++) {
                    if (arr[l] < arr[l - 1]) {
                        isIncreasing = false;
                        break;
                    }
                }
                if (isIncreasing) {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}