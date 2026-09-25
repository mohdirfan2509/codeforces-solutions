// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/D
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    long long  a, b, q;
    cin >> a >> b >> q;

    if (q % 3 == 1) {
        cout << a << endl;
    } else if (q % 3 == 2) {
        cout << b << endl;
    } else {
        cout << (a ^ b) << endl;
    }
}
