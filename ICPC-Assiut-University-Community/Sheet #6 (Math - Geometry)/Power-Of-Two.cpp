// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/A
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    long long  n;
    cin >> n;
    if (n > 0 && (n & (n - 1)) == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}