// Question Link: https://codeforces.com/problemset/problem/1725/B
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    long long n, d;
    cin >> n >> d;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long ans = 0;
    long long p1 = 0;
    long long p2 = n - 1;
    while (p1 <= p2) {
        if (arr[p2] > d) {
            p2--;
            ans++;
        } else {
            long long sum = arr[p2];
            while (p1 < p2 && sum <= d) {
                sum += arr[p2];
                p1++;
            }
            if (sum > d) {
                p2--;
                ans++;
            }else{
                break;
            }
        }
    }
    cout << ans << endl;
}