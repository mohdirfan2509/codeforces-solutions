// Question Link: https://codeforces.com/problemset/problem/1715/B
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (long long i = 0; i < test_cases; i++) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long mn = b * k;
        long long mx = b * k + (k - 1) * n;
        if (s < mn || s > mx) {
            cout << -1 << endl;
            continue;
        }

        vector<long long> ans(n, 0);
        ans[0] = b*k;
        long long extra = s - ans[0];
        long long add=min(extra,k-1);
        ans[0]+=add;
        extra-=add;
        for (long long j = 1; j < n; j++) {
            add=min(extra,k-1);
            ans[j]=add;
            extra-=add;          
        }
        for(long long x:ans){
            cout << x << " ";
        }
        cout << endl;
       
    }
}