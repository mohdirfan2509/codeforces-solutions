// Question Link: https://codeforces.com/problemset/problem/1831/B
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        vector<int> b(n, 0);
        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }

        vector<int> lstSubarray_a(n * 2 + 1, 0);
        vector<int> lstSubarray_b(n * 2 + 1, 0);
        int counter = 1;
        for (int j = 1; j < n; j++) {
            if (a[j] == a[j - 1]) {
                counter++;
            } else {
                lstSubarray_a[a[j - 1]] = max(lstSubarray_a[a[j - 1]], counter);
                counter = 1;
            }
        }
        lstSubarray_a[a[n - 1]] = max(lstSubarray_a[a[n - 1]], counter);

        counter = 1;

        for (int j = 1; j < n; j++) {
            if (b[j] == b[j - 1]) {
                counter++;
            } else {
                lstSubarray_b[b[j - 1]] = max(lstSubarray_b[b[j - 1]], counter);
                counter = 1;
            }
        }
        lstSubarray_b[b[n - 1]] = max(lstSubarray_b[b[n - 1]], counter);

        int maxFreq=-1;
        for(int j=1;j<=2*n;j++){
            maxFreq=max(maxFreq,lstSubarray_a[j]+lstSubarray_b[j]);
        }
        cout << maxFreq << endl;
    }
}