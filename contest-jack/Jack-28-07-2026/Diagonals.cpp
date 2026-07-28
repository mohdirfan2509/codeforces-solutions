#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        if(k==0){
            cout << 0 << endl;
            continue;
        }
        for (int j = n; j >= 1; j--) {
            if (j == n) {
                k = k - j;
                ans++;
            } else {
                k = k - j;
                ans++;
                if (k <= 0) {
                    break;
                }
                k = k - j;
                ans++;
                if (k <= 0) {
                    break;
                }
            }
            if (k <= 0) {
                break;
            }
        }
        cout << ans << endl;
    }
}