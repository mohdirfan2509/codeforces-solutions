// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

double average(vector<double>& arr) {
    int n = arr.size();
    double ans = 0;
    for (int i = 0; i < n; i++) {
        ans += arr[i];
    }
    return ans / n;
}

int main() {
    int n;
    cin >> n;
    vector<double> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double ans = average(arr);
    printf("%.7f", ans);
    cout << endl;
}