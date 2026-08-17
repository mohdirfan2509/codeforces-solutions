// Question Link: https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> arr;
    for (char x : s) {
        if (x != '+' && x!='0') {
            arr.push_back((int)(x - '0'));
        }
    }
    sort(arr.begin(), arr.end());
    n=arr.size();
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            cout << arr[i] << '+';
        } else {
            cout << arr[i];
        }
    }
}