// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> queries(q);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < q; i++) {
        int target = queries[i];
        int low = 0;
        int high = n - 1;
        bool flag = true;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target) {
                cout << "found" << endl;
                flag = false;
                break;
            } else if (arr[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (flag) {
            cout << "not found" << endl;
        }
    }
}