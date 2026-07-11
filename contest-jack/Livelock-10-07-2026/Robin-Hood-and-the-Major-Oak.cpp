#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        long long n, k;
        cin >> n >> k;
        long long ans = 0;
        
        for (long long j=1;j<=n;j++) {
            if(j+k-1 >=n){
                ans+=pow(j,j);
            }
        }
        if(ans%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}