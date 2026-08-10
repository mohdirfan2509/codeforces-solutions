// Question Link:https://codeforces.com/problemset/problem/1704/B
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        long long n, x;
        cin >> n >> x;
        vector<long long> arr(n);
        for (long long j = 0; j < n; j++) {
            cin >> arr[j];
        }
        vector<pair<long long, long long>> segments(n);
        for (long long j = 0; j < n; j++) {
            segments[j] = {arr[j] - x, arr[j] + x};
        }
        long long ans = 0;
        long long l = segments[0].first;
        long long r = segments[0].second;
        for (long long j = 1; j < n; j++) {
            l = max(l, segments[j].first);
            r = min(r, segments[j].second);

            if (l > r) {
                l = segments[j].first;
                r = segments[j].second;
                ans++;
            }
        }
        cout << ans << endl;
    }
}