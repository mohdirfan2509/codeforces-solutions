// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<pair<long long, long long>> queries(q);
    for (long long i = 0; i < q; i++) {
        cin >> queries[i].first;
        cin >> queries[i].second;
    }
    vector<long long> pf(n, 0);
    long long psum = 0;
    for (long long i = 0; i < n; i++) {
        psum += arr[i];
        pf[i] = psum;
    }
    for (long long i = 0; i < q; i++) {
        long long start = queries[i].first - 1;
        long long end = queries[i].second - 1;
        if (start == 0) {
            cout << pf[end] << endl;
        } else {
            cout << pf[end] - pf[start-1] << endl;
        }
    }
}