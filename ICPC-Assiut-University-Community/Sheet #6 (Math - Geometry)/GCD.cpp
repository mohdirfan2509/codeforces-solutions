// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/H
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long greatestCommonDivisor = gcd(a, b);
    long long leastCommonMultiple = (a / greatestCommonDivisor) * b;

    cout << greatestCommonDivisor << " " << leastCommonMultiple << endl;
}