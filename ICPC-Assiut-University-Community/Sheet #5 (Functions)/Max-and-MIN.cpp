// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int minimum(vector<int>& arr) {
    int ans = INT_MAX;
    for (int i : arr) {
        ans = min(ans, i);
    }
    return ans;
}

int maximum(vector<int>& arr) {
    int ans = INT_MIN;
    for (int i : arr) {
        ans = max(ans, i);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }
    cout << minimum(arr) << " " << maximum(arr) << endl;
}