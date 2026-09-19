// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int distinctElements(vector<int>& arr) {
    unordered_set<int> us(arr.begin(), arr.end());
    return us.size();
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << distinctElements(arr) << endl;
}