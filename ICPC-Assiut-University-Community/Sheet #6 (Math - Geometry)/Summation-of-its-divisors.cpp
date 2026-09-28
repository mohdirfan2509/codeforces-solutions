// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/G
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long summation = 0;
    for (long long i = 1; i <= n / i; i++) {
        if (n % i == 0) {
            summation = summation + i + (n / i);
        }
        if (i == (n / i)) {
            summation = summation - i;
        }
    }
    cout << summation << endl;
}