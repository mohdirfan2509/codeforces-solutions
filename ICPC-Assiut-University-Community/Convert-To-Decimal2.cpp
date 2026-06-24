// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        long long n;
        cin >> n;
        string binary = "";
        while (n > 0) {
            long long rem = n % 2;
            n = n / 2;
            binary += to_string(rem);
        }
        long long totalOnes = 0;
        for (long long j = 0; j < binary.size(); j++) {
            if (binary[j] == '1') {
                totalOnes++;
            }
        }
        long long ans = 0;
        for (long long j = 0; j <= totalOnes - 1; j++) {
            ans += pow(2, j);
        }
        cout << ans << endl;
    }
}